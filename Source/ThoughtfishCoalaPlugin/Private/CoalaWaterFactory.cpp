// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#include "CoalaWaterFactory.h"

#include "CoalaArea.h"
#include "CoalaAreaActor.h"
#include "CoalaAreaController.h"
#include "CoalaBlueprintUtility.h"
#include "CoalaCell.h"
#include "CoalaTriangleClipper.h"
#include "CoalaConverter.h"
#include "CoalaMeshActor.h"
#include "CoalaMeshGenerator.h"
#include "CoalaProperties.h"
#include "CoalaTile.h"
#include "CoalaBounds.h"
#include "GeoConverter.h"
#include "Async/Async.h"

#include "Engine/World.h"

void 
UCoalaWaterFactory::CreateWaterAsync( UCoalaArea* area, FCoalaWaterRenderConfig renderConfig, const FCoalaDelegateWaterFactoryOnWaterMeshDone& onWaterCreated, const FCoalaDelegateWaterFactoryOnDone& onDone )
{
	auto task = new FAutoDeleteAsyncTask<CoalaTaskCreateWaters>( area, renderConfig, onWaterCreated, onDone );
	task->StartBackgroundTask();
}

CoalaTaskCreateWaters::CoalaTaskCreateWaters( UCoalaArea* area, FCoalaWaterRenderConfig renderConfig, FCoalaDelegateWaterFactoryOnWaterMeshDone delegateOnWaterCreated, FCoalaDelegateWaterFactoryOnDone delegateOnDone )
: _shouldRun( false ), _area( 0 )
{
	this->_shouldRun = area->addThreadsUsingAreaData( this, "CoalaTaskCreateWaters" );
	if( !this->_shouldRun ) return;

	this->_area = area;
	this->_renderConfig = renderConfig;
	this->_delegateOnWaterCreated = delegateOnWaterCreated;
	this->_delegateOnDone = delegateOnDone;
}

CoalaTaskCreateWaters::~CoalaTaskCreateWaters()
{
	if( this->_area )
		this->_area->removeThreadsUsingAreaData( this, "CoalaTaskCreateWaters" );
}

void
CoalaTaskCreateWaters::DoWork()
{
	if( !this->_shouldRun ) return;

	// make shure that there is scene object to attach at
	if( !this->_area->AddCoalaLayerRenderTask(
			new EnsureSceneObjectRefActorExists( this->_area->sceneObject->_refAllWaters, this->_area->sceneObject, this->_area->props.tile.x, this->_area->props.tile.y, "_waters" ),
			true
		)
	)
		return;

	if( !this->_area->sceneObject->_refAllWaters )
		return;

	for( int i = 0; i < this->_area->water.Num(); ++i )
	{
		FCoalaWater* current = &this->_area->water[i];
		ACoalaMeshActor* waterMeshActor = this->createWater( current, this->_area );

		if( !waterMeshActor )
			return;

		if( !this->_area->AddCoalaLayerRenderTask(
				new delegates::CallWaterShapeGenerationDelegateDone( this->_delegateOnWaterCreated, waterMeshActor )
			)
		)
			return;
	}

	// adjust position a litle bit higher to prevent clipping into ground
	if( !this->_area->AddCoalaLayerRenderTask(
			new AdjustZPosOnActor( this->_area->sceneObject->_refAllWaters, 2.0f ),
			true
		)
	)
		return;

	if( !this->_area->AddCoalaLayerRenderTask(
			new delegates::CallWaterGenerationDelegateDone( this->_delegateOnDone, this->_area )
		)
	)
		return;
}

ACoalaMeshActor*
CoalaTaskCreateWaters::createWater( FCoalaWater* water, UCoalaArea* area )
{
	TRACE_BOOKMARK( TEXT( "CreateWater" ) );
	TRACE_CPUPROFILER_EVENT_SCOPE( UCoalaMeshGenerator::CreateWater );

	ACoalaMeshActor* ret = 0;
	UWorld* world = area->GetWorld();

	// the spawn pos of this actor is relativ to the area he belongs to
	// therefor we use the top left point as our area_fixpoint
	//FVector area_fixpoint = UCoalaGpsConverterFunctionLibrary::ToScenePosition( area->props.bounds.left, area->props.bounds.top );
	FCoalaGPSCoordinates gps_center = water->center();
	FVector waterCenter = UCoalaGpsConverterFunctionLibrary::ToScenePosition( gps_center.lon, gps_center.lat );

	// spawn actor, arange in area and name
	FString displayName = "_area_" + FString::FromInt( area->props.tile.x ) + "_" + FString::FromInt( area->props.tile.y ) + "_water";

	if( !area->AddCoalaLayerRenderTask(
			new SpawnCoalaMeshActorOnWorldPos( ret, area->sceneObject->_refAllWaters, waterCenter, displayName, FName( "COALA_WATER" ) ),
			true
		)
	)
		return 0;

	if( !ret )
	{
		UE_LOG( CoalaLogCore, Warning, TEXT( "CoalaTaskCreateWaters::DoWork - could not spawn mesh actor, abort" ) );
		return 0;
	}

	TArray<FVector> shape;
	TArray<TArray<FVector>> holes;

	for( int i = 0; i < water->area.Num(); ++i )
	{
		FCoalaGPSCoordinates p = water->area[i];

/*		if( i < water->area.Num() - 1 )
		{
			FCoalaGPSCoordinates p2 = water->area[i + 1];
			TArray<FCoalaGPSCoordinates> cellBorderSamples = CoalaConverter::GetCellBordersBetween( p.lon, p.lat, p2.lon, p2.lat, area );
			for( int b = 0; b < cellBorderSamples.Num(); b++ )
			{
				FVector pos = cellBorderSamples[b].ToScenePosition();
				shape.Add( pos - center );
			}
		}
		else
*/		{
			//FVector pos = p.ToScenePosition();
			FVector pos = UCoalaGpsConverterFunctionLibrary::ToScenePosition( p.lon, p.lat );
			shape.Add( pos );
		}
	}

	for( int i = 0; i < water->holes.Num(); ++i )
	{
		FCoalaHole currentHole_org = water->holes[i];
		TArray<FVector> currentHole;
		for( int a = 0; a < currentHole_org.points.Num(); ++a )
		{
			FCoalaGPSCoordinates p = currentHole_org.points[a];

/*			if( a < currentHole_org.points.Num() - 1 )
			{
				FCoalaGPSCoordinates p2 = currentHole_org.points[a + 1];
				TArray<FCoalaGPSCoordinates> cellBorderSamples = CoalaConverter::GetCellBordersBetween( p.lon, p.lat, p2.lon, p2.lat, area );
				for( int b = 0; b < cellBorderSamples.Num(); b++ )
				{
					FVector pos = cellBorderSamples[b].ToScenePosition();
					currentHole.Add( pos - center );
				}
			}
			else
*/			{
				//FVector pos = p.ToScenePosition();
				FVector pos = UCoalaGpsConverterFunctionLibrary::ToScenePosition( p.lon, p.lat );
				currentHole.Add( pos );
			}
		}
		holes.Add( currentHole );
	}

	CoalaTriangleClipper clipper = CoalaTriangleClipper( shape, holes );
	TMap<int, TArray<TArray<FVector>>> result;
	int resultIndex = 0;
	for( int i = 0; i < area->grid.Num(); ++i )
	{
		FCoalaCell* current_cell = &area->grid[i];

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
				result.Add( resultIndex, triangleResult );
				resultIndex++;
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
				result.Add( resultIndex, triangleResult );
				resultIndex++;
			}
		}
	}

	TArray<TArray<FVector>> combinedShape;
	TArray<TArray<TArray<FVector>>> combinedHoles;

	// check if something was sliced
	if( result.Num() == 0 )
	{
		// no, use normale shape
		for( int i = 0; i < shape.Num(); i++ )
		{
			FVector currentShapeVertex = shape[i];
			currentShapeVertex = CoalaConverter::ToTerrainPositionWithoutArea( currentShapeVertex, ACoalaController::Instance ) - waterCenter;
			shape[i] = currentShapeVertex;
		}
		combinedShape.Push( shape );
		for( int i = 0; i < holes.Num(); i++ )
		{
			for( int j = 0; j < holes[i].Num(); j++ )
			{
				FVector currentHoleVertex = holes[i][j];
				currentHoleVertex = CoalaConverter::ToTerrainPositionWithoutArea( currentHoleVertex, ACoalaController::Instance ) - waterCenter; 
				holes[i][j] = currentHoleVertex;
			}
		}
		combinedHoles.Push( holes );
	}
	else
	{
		for( TPair<int, TArray<TArray<FVector>>> entry : result )
		{
			int currentResultIndex = entry.Key;
			TArray<TArray<FVector>> geometry = entry.Value;

			TArray<FVector> entryShape;
			TArray<TArray<FVector>> entryHoles;

			for( int i = 0; i < geometry.Num(); ++i )
			{
				TArray<FVector> current = geometry[i];

				if( i == 0 )
				{
					// outer
					entryShape = current;
				}
				else
				{
					// inner
					holes.Add( current );
				}
			}

			for( int i = 0; i < entryShape.Num(); i++ )
			{
				FVector currentShapeVertex = entryShape[i];
				currentShapeVertex = CoalaConverter::ToTerrainPositionWithoutArea( currentShapeVertex, ACoalaController::Instance ) - waterCenter;
				entryShape[i] = currentShapeVertex;
			}
			for( int i = 0; i < entryHoles.Num(); i++ )
			{
				for( int j = 0; j < entryHoles[i].Num(); j++ )
				{
					FVector currentHoleVertex = entryHoles[i][j];
					currentHoleVertex = CoalaConverter::ToTerrainPositionWithoutArea( currentHoleVertex, ACoalaController::Instance ) - waterCenter; 
					entryHoles[i][j] = currentHoleVertex;
				}
			}
			
			combinedShape.Add( entryShape );
			combinedHoles.Add( entryHoles );
		}
	}

	// mesh generation from shape
	{
		TArray<FVector> finalVertices;
		TArray<int> finalTriangles;
		TArray<FVector> finalNormals;
		TArray<FVector2D> finalUV0;

		MeshGenerator::generateMesh( combinedShape, combinedHoles, TArray<int32>(), TArray<FVector>(), this->_renderConfig.generateUVs, false, true, finalVertices, finalTriangles, finalUV0 );

		TArray<FLinearColor> vertexColors;
		TArray<FProcMeshTangent> tangents;
		if( !area->AddCoalaLayerRenderTask(
				new CreateMesh( ret->mesh, 0, finalVertices, finalTriangles, finalNormals, finalUV0, vertexColors, tangents, true, false ),
				true
			)
		)
			return 0;
	}

	// set material and showing
	if( !area->AddCoalaLayerRenderTask(
			new SetMeshMaterial( ret->mesh, 0, this->_renderConfig.material ),
			true
		)
	)
		return 0;

	// outlines generated truth a second little bigger mesh
	if( this->_renderConfig.outlineWidth != 0.0f )
	{
		// todo: investigate why no outline is generated
		// CJ: possible problem when the water shape is cut into cell pieces
		double outline_width = this->_renderConfig.outlineWidth * ACoalaController::GetCoalaScale();

		TArray<FVector> shape_outline_mesh;
		TArray<TArray<FVector>> holes_outline_mesh;

		MeshGenerator::generateOutlineMesh_v2( shape, holes, outline_width, shape_outline_mesh, holes_outline_mesh );

		TArray<TArray<FVector>> shapes_outline;
		shapes_outline.Push( shape_outline_mesh );

		TArray<TArray<TArray<FVector>>> holes_outline;
		holes_outline.Push( holes_outline_mesh );

		TArray<FVector> finalVertices;
		TArray<int> finalTriangles;
		TArray<FVector> finalNormals;
		TArray<FVector2D> finalUV0;

		MeshGenerator::generateMesh( shapes_outline, holes_outline, TArray<int32>(), TArray<FVector>(), this->_renderConfig.generateUVs, false, true, finalVertices, finalTriangles, finalUV0 );

		TArray<FLinearColor> vertexColors;
		TArray<FProcMeshTangent> tangents;
		if( !area->AddCoalaLayerRenderTask(
				new CreateMesh( ret->mesh, 1, finalVertices, finalTriangles, finalNormals, finalUV0, vertexColors, tangents, true ),
				true
			)
		)
			return 0;

		if( !area->AddCoalaLayerRenderTask(
				new SetMeshMaterial( ret->mesh, 1, this->_renderConfig.outlineMaterial ),
				true
			)
		)
			return 0;
	}

	return ret;
}
