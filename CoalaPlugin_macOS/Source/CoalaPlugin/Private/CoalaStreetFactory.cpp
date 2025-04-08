// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#include "CoalaStreetFactory.h"

#include "CoalaArea.h"
#include "CoalaAreaActor.h"
#include "CoalaAreaController.h"
#include "CoalaBlueprintUtility.h"
#include "CoalaConverter.h"
#include "CoalaMeshActor.h"
#include "CoalaMeshGenerator.h"
#include "CoalaProperties.h"
#include "CoalaTile.h"
#include "CoalaBounds.h"
#include "GeoConverter.h"
#include "CoalaTriangleClipper.h"
#include "Async/Async.h"

#include "Engine/World.h"

void 
UCoalaStreetFactory::CreateStreetsAsync( UCoalaArea* area, FCoalaStreetRenderConfig defaultRenderConfig, TArray<FCoalaStreetRenderConfig> renderConfig, const FCoalaDelegateStreetsOnDone& onDone )
{
	auto task = new FAutoDeleteAsyncTask<CoalaTaskCreateStreets>( area, defaultRenderConfig, renderConfig, onDone );
	task->StartBackgroundTask();
}

CoalaTaskCreateStreets::CoalaTaskCreateStreets( UCoalaArea* area, FCoalaStreetRenderConfig defaultRenderConfig, TArray<FCoalaStreetRenderConfig> renderConfig, FCoalaDelegateStreetsOnDone delegateOnDone )
: _shouldRun( false ), _area( 0 )
{
	this->_shouldRun = area->addThreadsUsingAreaData( this, "CoalaTaskCreateStreets" );
	if( !this->_shouldRun ) return;

	this->_area = area;
	this->_defaultRenderConfig = defaultRenderConfig;
	this->_renderConfig = renderConfig;
	this->_delegateOnDone = delegateOnDone;
}

CoalaTaskCreateStreets::~CoalaTaskCreateStreets()
{
	if( this->_area )
		this->_area->removeThreadsUsingAreaData( this, "CoalaTaskCreateStreets" );
}

void
CoalaTaskCreateStreets::DoWork()
{
	if( !this->_shouldRun ) return;

	if( !this->_area->AddCoalaLayerRenderTask(
			new EnsureSceneObjectRefActorExists( this->_area->sceneObject->_refAllStreets, this->_area->sceneObject, this->_area->props.tile.x, this->_area->props.tile.y, "_streets" ),
			true
		)
	)
		return;

	if( !this->_area->sceneObject->_refAllStreets )
		return;

	// adjust position a litle bit higher to prevent clipping into ground
	if( !this->_area->AddCoalaLayerRenderTask(
			new AdjustZPosOnActor( this->_area->sceneObject->_refAllStreets, 2.0f ),
			true
		)
	)
		return;

	bool continue_work = true;
	for( int i = 0; i < this->_area->streets.Num(); ++i )
	{
		if( !continue_work )
			return;
		FCoalaStreets currentStreetType = this->_area->streets[i];

		FCoalaStreetRenderConfig* configForStreetType = this->getConfigForStreet( currentStreetType );

		if( configForStreetType->mergeMeshes )
			continue_work = this->createStreetsFromType_merged( &currentStreetType, configForStreetType );
		else 
			continue_work = this->createStreetsFromType_single( currentStreetType, configForStreetType );
	}

	if( !this->_area->AddCoalaLayerRenderTask(
			new delegates::CallStreetGenerationDelegateDone( this->_delegateOnDone, this->_area )
		)
	)
		return;
}

FCoalaStreetRenderConfig*
CoalaTaskCreateStreets::getConfigForStreet( FCoalaStreets& streets )
{
	// find matching street render configuration
	FCoalaStreetRenderConfig* usedConfig = 0;
	{
		for( int i = 0; i < this->_renderConfig.Num(); ++i )
		{
			FCoalaStreetRenderConfig* current = &this->_renderConfig[i];

			if( current->types.Contains( streets.typ ) )
			{
				usedConfig = current;
				break;
			}
		}

		// no actor created by defined config, using default
		if( !usedConfig )
		{
			usedConfig = &this->_defaultRenderConfig;
		}
	}

	return usedConfig;
}

bool 
CoalaTaskCreateStreets::createStreetsFromType_merged( FCoalaStreets* streets, FCoalaStreetRenderConfig* configForStreetType )
{
	TRACE_BOOKMARK( TEXT( "UCoalaMeshGenerator::Streets" ) );

	FVector area_fixpoint = UCoalaGpsConverterFunctionLibrary::ToScenePosition(
		this->_area->props.bounds.left,
		this->_area->props.bounds.top
	);
	double coalaScale = ACoalaController::GetCoalaScale();

	// spawn actor, arange in area and name
	ACoalaMeshActor* meshActor = 0;

	FString displayName = "_area_" + FString::FromInt( this->_area->props.tile.x ) + "_" + FString::FromInt( this->_area->props.tile.y ) + "_streets_" + streets->typ + "_" + FString::FromInt( streets->data.Num() );
	if( !this->_area->sceneObject )
		return false;

	if( !this->_area->AddCoalaLayerRenderTask(
			new SpawnCoalaMeshActor( meshActor, this->_area->sceneObject->_refAllStreets, displayName, FName( "COALA_STREET" ) ),
			true
		)
	)
		return false;

	if( !meshActor )
		return false;

	// one material for all street meshes that are actual one mesh
	{
		TArray<TArray<FVector>> combinedShape;
		TArray<TArray<TArray<FVector>>> combinedHoles;

		TArray<TArray<TArray<FVector>>> result;

		for( int b = 0; b < streets->data.Num(); ++b )
		{
			FCoalaStreet* currentStreet = &streets->data[b];

			FCoalaGPSCoordinates currentStreetGpsCenter = currentStreet->center();
			FVector streetCenter = UCoalaGpsConverterFunctionLibrary::ToScenePosition( currentStreetGpsCenter.lon, currentStreetGpsCenter.lat );

			// convert data to world coordinated
			TArray<FVector> convertedShape;
			TArray<TArray<FVector>> convertedHoles;

bool interestingGpsPointFoundInThisStreetLine = false;
FString debugToolString = "";
FString debugToolStringInUnrealUnits = "";

			for( int a = 0; a < currentStreet->points.Num(); ++a )
			{
				FCoalaGPSCoordinates p = currentStreet->points[a];
debugToolString += FString::SanitizeFloat( p.lon, 6 ) + ", " + FString::SanitizeFloat( p.lat, 6 ) + "\r\n";
if( FMath::IsNearlyEqual( p.lon, -43.2147029, 1.0E-4 ) && FMath::IsNearlyEqual( p.lat, -22.9638439, 1.0E-4 ) )
	interestingGpsPointFoundInThisStreetLine = true;
/*
				if( a < currentStreet->points.Num() - 1 )
				{
					FCoalaGPSCoordinates p2 = currentStreet->points[a + 1];
					TArray<FCoalaGPSCoordinates> cellBorderSamples = CoalaConverter::GetCellBordersBetween( p.lon, p.lat, p2.lon, p2.lat, this->_area );
					for( int b = 0; b < cellBorderSamples.Num(); b++ )
					{
						FVector pos = cellBorderSamples[b].ToScenePosition();
						convertedShape.Add( pos );
					}
				}
				else
*/				{
					//FVector pos = p.ToScenePosition();
					FVector pos = UCoalaGpsConverterFunctionLibrary::ToScenePosition( p.lon, p.lat );
					convertedShape.Add( pos );
debugToolStringInUnrealUnits += FString::SanitizeFloat( pos.X-streetCenter.X, 6 ) + ", " + FString::SanitizeFloat( pos.Y-streetCenter.Y, 6) + "\r\n";
				}
			}
if( interestingGpsPointFoundInThisStreetLine )
	int iBreak = 1;
			TArray<FVector> shape = MeshGenerator::getShape( convertedShape, configForStreetType->width * coalaScale );
FString shapeFromStreetInUnrealUnits = "";
for( int x = 0; x < shape.Num(); ++x )
{
	shapeFromStreetInUnrealUnits += FString::SanitizeFloat( shape[x].X - streetCenter.X, 6) + ", " + FString::SanitizeFloat(shape[x].Y - streetCenter.Y, 6) + "\r\n";
}
if( interestingGpsPointFoundInThisStreetLine )
	int iBreak = 1;

			TArray<TArray<FVector>> holes;

			CoalaTriangleClipper clipper = CoalaTriangleClipper( shape, convertedHoles );

			FCoalaBounds currentStreetSegmentBounds = currentStreet->bounds();
			for( int i = 0; i < this->_area->grid.Num(); ++i )
			{
				FCoalaCell* current_cell = &this->_area->grid[i];

				//if( !currentStreetSegmentBounds.intersects( current_cell->bounds ) )
				//	continue;

				FVector top_left = UCoalaGpsConverterFunctionLibrary::ToScenePosition( current_cell->bounds.left, current_cell->bounds.top );
				FVector top_right = UCoalaGpsConverterFunctionLibrary::ToScenePosition( current_cell->bounds.right, current_cell->bounds.top );
				FVector bottom_right = UCoalaGpsConverterFunctionLibrary::ToScenePosition( current_cell->bounds.right, current_cell->bounds.bottom );
				FVector bottom_left = UCoalaGpsConverterFunctionLibrary::ToScenePosition( current_cell->bounds.left, current_cell->bounds.bottom );

				// triangle #1
				{
					TArray<FVector> list_points;

					list_points.Add( bottom_left );
					list_points.Add( top_left );
					list_points.Add( top_right );
			
					TArray<TArray<FVector>> triangleResult = clipper.clip( &list_points );
					if( triangleResult.Num() != 0 )
					{
						result.Add( triangleResult );
					}
				}

				// triangle #2
				{
					TArray<FVector> list_points;
					list_points.Add( bottom_right );
					list_points.Add( bottom_left );
					list_points.Add( top_right );
						
					TArray<TArray<FVector>> triangleResult = clipper.clip( &list_points );
					if( triangleResult.Num() != 0 )
					{
						result.Add( triangleResult );
					}
				}
			}

			// check if something was sliced
			if( result.Num() == 0 )
			{
				// no, use normale shape
				for( int i = 0; i < shape.Num(); i++ )
				{
					FVector currentShapeVertex = shape[i];
					currentShapeVertex = CoalaConverter::ToTerrainPositionWithoutArea( currentShapeVertex, ACoalaController::Instance ) - area_fixpoint;
					shape[i] = currentShapeVertex;
				}
				combinedShape.Push( shape );
				for( int i = 0; i < holes.Num(); i++ )
				{
					for( int j = 0; j < holes[i].Num(); j++ )
					{
						FVector currentHoleVertex = holes[i][j];
						currentHoleVertex = CoalaConverter::ToTerrainPositionWithoutArea( currentHoleVertex, ACoalaController::Instance ) - area_fixpoint; 
						holes[i][j] = currentHoleVertex;
					}
				}
				combinedHoles.Push( holes );
			}
			else
			{
				for( int a = 0; a < result.Num(); ++a )
				{
					TArray<TArray<FVector>> geometry = result[a];

					TArray<TArray<FVector>> noHolesForStreetMesh;

					// all sets are OUTER
					for( int c = 0; c < geometry.Num(); ++c )
					{
						TArray<FVector> current = geometry[c];

						for( int i = 0; i < current.Num(); i++ )
						{
							FVector currentShapeVertex = current[i];
							currentShapeVertex = CoalaConverter::ToTerrainPositionWithoutArea( currentShapeVertex, ACoalaController::Instance ) - area_fixpoint;
							current[i] = currentShapeVertex;
						}
						combinedShape.Add( current );
						combinedHoles.Add( noHolesForStreetMesh );
					}
				}
			}
		}

		// mesh generation from shape
		{
			TArray<FVector> finalVertices;
			TArray<int> finalTriangles;
			TArray<FVector> finalNormals;
			TArray<FVector2D> finalUV0;

			MeshGenerator::generateMesh( combinedShape, combinedHoles, TArray<int32>(), TArray<FVector>(), false, false, true, finalVertices, finalTriangles, finalUV0 );

			TArray<FLinearColor> vertexColors;
			TArray<FProcMeshTangent> tangents;
			if( !this->_area->AddCoalaLayerRenderTask(
					new CreateMesh( meshActor->mesh, 0, finalVertices, finalTriangles, finalNormals, finalUV0, vertexColors, tangents, true, false ),
					true
				)
			)
				return false;
		}

		if( !this->_area->sceneObject )
			return false;

		if( !this->_area->AddCoalaLayerRenderTask(
				new SetMeshMaterial( meshActor->mesh, 0, configForStreetType->material ),
				true
			)
		)
			return false;
	}
	return true;
}

bool
CoalaTaskCreateStreets::createStreetsFromType_single( FCoalaStreets& streets, FCoalaStreetRenderConfig* configForStreetType )
{
	TRACE_BOOKMARK( TEXT( "UCoalaMeshGenerator::Streets" ) );

	FVector area_fixpoint = UCoalaGpsConverterFunctionLibrary::ToScenePosition(
		this->_area->props.bounds.left,
		this->_area->props.bounds.top
	);
	double coalaScale = ACoalaController::GetCoalaScale();

	// spawn actor, arange in area and name
	ACoalaMeshActor* meshActor = 0;
	{
		FString displayName = "_area_" + FString::FromInt( this->_area->props.tile.x ) + "_" + FString::FromInt( this->_area->props.tile.y ) + "_streets_" + streets.typ + "_" + FString::FromInt( streets.data.Num() );
		if( !this->_area->sceneObject )
			return false;
		if( !this->_area->AddCoalaLayerRenderTask(
				new SpawnCoalaMeshActor( meshActor, this->_area->sceneObject->_refAllStreets, displayName, FName( "COALA_STREET" ) ),
				true
			)
		)
			return false;

		if( !meshActor )
		{
			UE_LOG( CoalaLogCore, Warning, TEXT( "CoalaTaskCreateStreets::DoWork - could not spawn mesh actor, abort" ) );
			return false;
		}
	}

	// one material for all street meshes that are actual one mesh
	{
		for( int i = 0; i < streets.data.Num(); ++i )
		{
			const FCoalaStreet* currentStreet = &streets.data[i];

			TArray<TArray<FVector>> shapes;
			TArray<TArray<TArray<FVector>>> holes;

			// convert data to world coordinated
			TArray<FVector> convertedShape;
			for( int a = 0; a < currentStreet->points.Num(); ++a )
			{
				FCoalaGPSCoordinates p = currentStreet->points[a];

				if( a < currentStreet->points.Num() - 1 )
				{
					FCoalaGPSCoordinates p2 = currentStreet->points[a + 1];
					TArray<FCoalaGPSCoordinates> cellBorderSamples = CoalaConverter::GetCellBordersBetween( p.lon, p.lat, p2.lon, p2.lat, this->_area );
					for( int b = 0; b < cellBorderSamples.Num(); b++ )
					{
						FCoalaGPSCoordinates current_pos = cellBorderSamples[b];
						FVector pos = current_pos.ToScenePosition();

						convertedShape.Add( pos );
					}
				}
				else
				{
					FVector pos = p.ToScenePosition();
					convertedShape.Add( pos );
				}
			}

			TArray<TArray<FVector>> no_holes;
			TArray<FVector> streetShape = MeshGenerator::getShape( convertedShape, configForStreetType->width * coalaScale );

			TArray<FVector> streetShapeOnTerrain;
			for( int j = 0; j < streetShape.Num(); j++ )
			{
				FVector currentShape = streetShape[j];
				double startLon;
				double startLat;
				UCoalaGpsConverterFunctionLibrary::WorldPositionToGpsPosition( currentShape.X, currentShape.Y, startLon, startLat );

				//FVector streetTerrainHeightOffset = FVector( 0, 0, 150 * coalaScale );
				FVector streetTerrainHeightOffset = FVector::ZeroVector;
				FVector pos = CoalaConverter::ToTerrainPosition( startLon, startLat, this->_area ) + streetTerrainHeightOffset;
				FVector pos_area_fixpoint_corrected = pos - area_fixpoint;

				streetShapeOnTerrain.Add( pos_area_fixpoint_corrected );
			}

			// Subdivide the shape to get correct triangulation
			for( int j = 0; j < streetShapeOnTerrain.Num() / 2; j++ )
			{
				int v0 = j;
				int v1 = j + 1;
				int v2 = streetShapeOnTerrain.Num() - 2 - j;
				int v3 = streetShapeOnTerrain.Num() - 1 - j;

				TArray<FVector> streetShapePart;
				streetShapePart.Add( streetShapeOnTerrain[v0] );
				streetShapePart.Add( streetShapeOnTerrain[v1] );
				streetShapePart.Add( streetShapeOnTerrain[v2] );
				streetShapePart.Add( streetShapeOnTerrain[v3] );

				shapes.Add( streetShapePart );
				holes.Add( no_holes );
			}

			// spawn actor, arange in area and name
			ACoalaMeshActor* streetPartMeshActor = 0;

			FString displayName = streets.typ + "_" + FString::FromInt( i );

			if( !this->_area->AddCoalaLayerRenderTask(
					new SpawnCoalaMeshActor( streetPartMeshActor, meshActor, displayName, FName( "COALA_STREET" ) ),
					true
				)
			)
				return false;

			if( !streetPartMeshActor )
				return false;

			// generate mesh
			{
				TArray<FVector> finalVertices;
				TArray<int> finalTriangles;
				TArray<FVector> finalNormals;
				TArray<FVector2D> finalUV0;

				MeshGenerator::generateMesh( shapes, holes, TArray<int>(), finalNormals, false, false, false, finalVertices, finalTriangles, finalUV0 );

				if( !this->_area->AddCoalaLayerRenderTask(
						new CreateMesh( streetPartMeshActor->mesh, 0, finalVertices, finalTriangles, finalNormals, finalUV0, TArray<FLinearColor>(), TArray<FProcMeshTangent>(), true, false ),
						true
					)
				)
					return false;
			}

			if( !this->_area->AddCoalaLayerRenderTask(
					new SetMeshMaterial( streetPartMeshActor->mesh, 0, configForStreetType->material ),
					true
				)
			)
				return false;
		}
	}
	return true;
}
