// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#include "CoalaCellFactory.h"

#include "CoalaArea.h"
#include "CoalaAreaActor.h"
#include "CoalaBlueprintUtility.h"
#include "CoalaCell.h"
#include "CoalaDevelopmentConfigurations.h"
#include "CoalaElevation.h"
#include "CoalaGridIndex.h"
#include "CoalaMeshActor.h"
#include "CoalaMeshGenerator.h"
#include "CoalaProperties.h"
#include "CoalaTile.h"
#include "CoalaBounds.h"
#include "GeoConverter.h"
#include "CoalaTask.h"

#include "Async/Async.h"
#include "GenericPlatform/GenericPlatformProcess.h"

#include "KismetProceduralMeshLibrary.h"

ACoalaMeshActor*
UCoalaCellFactory::CreateCell(
	AActor* spawnActor,
	UCoalaArea* area,
	FCoalaCell cell,
	FCoalaCellRenderConfig defaultRenderConfig,
	TArray<FCoalaCellRenderConfig> renderConfig )
{
	return 0;
/*
	TRACE_BOOKMARK( TEXT("CreateCell") );
	TRACE_CPUPROFILER_EVENT_SCOPE( UCoalaMeshGenerator::CreateCell );

	Coala::EnsureAreaSceneObjectExists( area, spawnActor->GetWorld() );
	Coala::EnsureSceneObjectRefActorExists( area->sceneObject->_refAllCells, area->sceneObject, area->props.tile.x, area->props.tile.y, "_cells" );

	FVector area_fixpoint = UCoalaGpsConverterFunctionLibrary::ToScenePosition( area->props.bounds.left, area->props.bounds.top );

	// calculate corners
	int count_cells_in_one_row = sqrt( area->grid.Num() );
	double cell_width = area->props.bounds.width() / count_cells_in_one_row;
	double cell_height = area->props.bounds.height() / count_cells_in_one_row;

	double cell_left = area->props.bounds.left + (cell.index->x * cell_width);
	double cell_right = area->props.bounds.left + ((cell.index->x + 1) * cell_width);
	double cell_top = area->props.bounds.bottom - ((-1) * cell.index->y * cell_height);
	double cell_bottom = area->props.bounds.bottom - ((-1) * (cell.index->y + 1) * cell_height);

	FVector location = UCoalaGpsConverterFunctionLibrary::ToScenePosition( cell_left, cell_top ) - area_fixpoint;

	ACoalaMeshActor* meshActor = nullptr;
	// spawn actor, arange in area and name
	{
		meshActor = spawnActor->GetWorld()->SpawnActor<ACoalaMeshActor>( location, FRotator::ZeroRotator );
		area->sceneObject->_refAllCells->allAttachedActors.Add( meshActor );
#if WITH_EDITOR
		FString displayName = meshActor->GetActorLabel() + "_area_" + FString::FromInt( area->props.tile.x ) + "_" + FString::FromInt( area->props.tile.y ) + "_cell_" + FString::FromInt( cell.index->x ) + "_" + FString::FromInt( cell.index->y );
		meshActor->Rename( *displayName );
		meshActor->SetActorLabel( *displayName );
#endif
		meshActor->Tags.Add( FName( "COALA_CELL" ) );
		meshActor->AttachToActor( area->sceneObject->_refAllCells, FAttachmentTransformRules::KeepRelativeTransform );
	}

	// mesh data generation
	{
//		cell.top_left = UCoalaGpsConverterFunctionLibrary::ToScenePosition( cell_left, cell_top );
//		cell.top_right = UCoalaGpsConverterFunctionLibrary::ToScenePosition( cell_right, cell_top );
//		cell.bottom_right = UCoalaGpsConverterFunctionLibrary::ToScenePosition( cell_right, cell_bottom );
//		cell.bottom_left = UCoalaGpsConverterFunctionLibrary::ToScenePosition( cell_left, cell_bottom );

		if( area->elevation.data.Num() > 0 )
		{
			int elevation_index_x = cell.index->x + 1;
			int elevation_index_y = cell.index->y + 1;

			float elevationScale = ACoalaController::GetElevationScale();

//			cell.top_left.Z = area->elevation->GetHeight( elevation_index_x, elevation_index_y ) * elevationScale;
//			cell.top_right.Z = area->elevation->GetHeight( elevation_index_x + 1, elevation_index_y ) * elevationScale;
//			cell.bottom_right.Z = area->elevation->GetHeight( elevation_index_x + 1, elevation_index_y + 1 ) * elevationScale;
//			cell.bottom_left.Z = area->elevation->GetHeight( elevation_index_x, elevation_index_y + 1 ) * elevationScale;
		}

		TArray<FVector> shape;
		// shape
		{
			FVector top_left = UCoalaGpsConverterFunctionLibrary::ToScenePosition( cell.bounds.left, cell.bounds.top );
			FVector top_right = UCoalaGpsConverterFunctionLibrary::ToScenePosition( cell.bounds.right, cell.bounds.top );
			FVector bottom_right = UCoalaGpsConverterFunctionLibrary::ToScenePosition( cell.bounds.right, cell.bounds.bottom );
			FVector bottom_left = UCoalaGpsConverterFunctionLibrary::ToScenePosition( cell.bounds.left, cell.bounds.bottom );

			// add elevation
			int elevation_index_x = cell.index->x + 1;
			int elevation_index_y = cell.index->y + 1;
			float elevationScale = ACoalaController::GetElevationScale();

			top_left.Z = area->elevation.GetHeight( elevation_index_x, elevation_index_y ) * elevationScale;
			top_right.Z = area->elevation.GetHeight( elevation_index_x + 1, elevation_index_y ) * elevationScale;
			bottom_right.Z = area->elevation.GetHeight( elevation_index_x + 1, elevation_index_y + 1 ) * elevationScale;
			bottom_left.Z = area->elevation.GetHeight( elevation_index_x, elevation_index_y + 1 ) * elevationScale;

			shape.Add( top_left - area_fixpoint );
			shape.Add( top_right - area_fixpoint );
			shape.Add( bottom_right - area_fixpoint );
			shape.Add( bottom_left - area_fixpoint );

//			FVector vertex1 = cell.bottom_right - cell.top_left;
//			FVector vertex2 = cell.bottom_right - cell.top_right;
//			FVector vertex3 = cell.bottom_right - cell.bottom_right;
//			FVector vertex4 = cell.bottom_right - cell.bottom_left;
//
//			vertex1.Z = cell.bottom_right.Z;
//			vertex2.Z = cell.bottom_left.Z;
//			vertex3.Z = cell.top_left.Z;
//			vertex4.Z = cell.top_right.Z;
//
//			shape.Add( vertex1 );
//			shape.Add( vertex2 );
//			shape.Add( vertex3 );
//			shape.Add( vertex4 );
		}

		TArray<TArray<FVector>> holes;
		MeshGenerator::generateMesh( meshActor->mesh, shape, holes, 0, 0, true, true, true );
	}

	// find material and assign
	// TODO: Refactor to get gametag with hightes priority not only first match !
	UMaterialInterface* material = nullptr;
	{
		for( auto it = cell.gameTags.begin(); it != cell.gameTags.end(); ++it )
		{
			if( material )
				break;

			FString currentGametagName = it->Key;

			for( int i = 0; i < renderConfig.Num(); ++i )
			{
				if( material )
					break;

				FCoalaCellRenderConfig cfg = renderConfig[i];
				for( int a = 0; a < cfg.gametagNames.Num(); ++a )
				{
					if( material )
						break;

					FString possibleGametagName = cfg.gametagNames[a];
					if( possibleGametagName.Compare( currentGametagName ) == 0 )
					{
						if( cfg.onlyIfGametagIsHighest )
						{
							if( cell.isProjectTagHighest( currentGametagName ) )
								material = cfg.material;
						}
						else
						{
							material = cfg.material;
						}
					}
				}
			}
		}
	}

	if( !material )
		material = defaultRenderConfig.material;

	meshActor->mesh->SetMaterial( 0, material );

	MeshGenerator::verifyValidMesh( meshActor->mesh );

	return meshActor;
*/
}

void
UCoalaCellFactory::CreateCellsAsync( UCoalaArea* area, FCoalaCellRenderConfig defaultRenderConfig, TArray<FCoalaCellRenderConfig> renderConfig, const FCoalaDelegateCellFactoryOnDone& onDone )
{
	auto task = new FAutoDeleteAsyncTask<CoalaTaskCreateCells>( area, defaultRenderConfig, renderConfig, onDone );
	task->StartBackgroundTask();
}

CoalaTaskCreateCells::CoalaTaskCreateCells( UCoalaArea* area, FCoalaCellRenderConfig defaultRenderConfig, TArray<FCoalaCellRenderConfig> renderConfig, FCoalaDelegateCellFactoryOnDone delegateOnDone )
: _shouldRun( false ), area( 0 )
{
	this->_shouldRun = area->addThreadsUsingAreaData( this, "CoalaTaskCreateCells" );
	if( !this->_shouldRun ) return;

	this->area = area;
	this->defaultRenderConfig = defaultRenderConfig;
	this->renderConfig = renderConfig;
	this->delegateOnDone = delegateOnDone;
}

CoalaTaskCreateCells::~CoalaTaskCreateCells()
{
	if( this->area )
		this->area->removeThreadsUsingAreaData( this, "CoalaTaskCreateCells" );
}

void
CoalaTaskCreateCells::DoWork()
{
	if( !this->_shouldRun ) return;

	TRACE_BOOKMARK( TEXT( "CreateCells" ) );
	TRACE_CPUPROFILER_EVENT_SCOPE( UCoalaMeshGenerator::CreateCells );

	if( !this->area->AddCoalaLayerRenderTask(
			new EnsureSceneObjectRefActorExists( this->area->sceneObject->_refAllCells, this->area->sceneObject, this->area->props.tile.x, this->area->props.tile.y, "_cells" ),
			true
		)
	)
		return;

	if( !this->area->sceneObject->_refAllCells )
		return;

	FVector area_fixpoint = UCoalaGpsConverterFunctionLibrary::ToScenePosition( this->area->props.bounds.left, this->area->props.bounds.top );

	// 1) collect cells with same high priority gametag
	std::map<std::pair<int, UMaterialInterface*>, FCoalaShapeData> grouped_shapes; // <material index, list of <shapes,holes> >

	for( int i = 0; i < this->area->grid.Num(); ++i )
	{
		FCoalaCell* cell = &this->area->grid[i];

		int material_index = 0;
		UMaterialInterface* material = 0;
		// TODO: Refactor to get gametag with hightes priority not only first match !
		{
			for( auto it = cell->gameTags.begin(); it != cell->gameTags.end(); ++it )
			{
				if( material )
					break;

				FString currentGametagName = it->Key;

				for( int b = 0; b < this->renderConfig.Num(); ++b )
				{
					if( material )
						break;

					FCoalaCellRenderConfig cfg = this->renderConfig[b];
					for( int a = 0; a < cfg.gametagNames.Num(); ++a )
					{
						if( material )
							break;

						FString possibleGametagName = cfg.gametagNames[a];
						if( possibleGametagName.Compare( currentGametagName ) == 0 )
						{
							material = cfg.material;
							material_index = b + 1;
						}
					}
				}
			}
			if( !material )
				material = this->defaultRenderConfig.material;

			std::pair<int, UMaterialInterface*> group_index( material_index, material );

			// mesh data generation
			{
				TArray<FVector> normals;

				double cellScale = ACoalaController::GetCoalaScale();
				if( this->area->elevation.data.Num() > 0 )
				{
					int elevation_index_x = cell->index.x + 1;
					int elevation_index_y = cell->index.y + 1;
					double elevationScale = ACoalaController::GetElevationScale();

					normals.Add( this->area->elevation.GetNormal( elevation_index_x, elevation_index_y, cellScale, elevationScale ) );
					normals.Add( this->area->elevation.GetNormal( elevation_index_x + 1, elevation_index_y, cellScale, elevationScale ) );
					normals.Add( this->area->elevation.GetNormal( elevation_index_x + 1, elevation_index_y + 1, cellScale, elevationScale ) );
					normals.Add( this->area->elevation.GetNormal( elevation_index_x, elevation_index_y + 1, cellScale, elevationScale ) );

					/*DrawDebugLine(world,
						cell->top_left - UCoalaAreaController::GetGpsOffset(),
						cell->top_left - UCoalaAreaController::GetGpsOffset() + area->elevation->getNormal(elevation_index_x, elevation_index_y, cellScale, elevationScale) * 500,
						FColor(255, 0, 0),
						true, -1, 0,
						10);
					DrawDebugLine(world,
						cell->top_right - UCoalaAreaController::GetGpsOffset(),
						cell->top_right - UCoalaAreaController::GetGpsOffset() + area->elevation->getNormal(elevation_index_x + 1, elevation_index_y, cellScale, elevationScale) * 500,
						FColor(255, 0, 0),
						true, -1, 0,
						10);
					DrawDebugLine(world,
						cell->bottom_right - UCoalaAreaController::GetGpsOffset(),
						cell->bottom_right - UCoalaAreaController::GetGpsOffset() + area->elevation->getNormal(elevation_index_x + 1, elevation_index_y + 1, cellScale, elevationScale) * 500,
						FColor(255, 0, 0),
						true, -1, 0,
						10);
					DrawDebugLine(world,
						cell->bottom_left - UCoalaAreaController::GetGpsOffset(),
						cell->bottom_left - UCoalaAreaController::GetGpsOffset() + area->elevation->getNormal(elevation_index_x, elevation_index_y + 1, cellScale, elevationScale) * 500,
						FColor(255, 0, 0),
						true, -1, 0,
						10);*/
				}

				TArray<FVector> shape;
				// shape
				{
					FVector top_left = UCoalaGpsConverterFunctionLibrary::ToScenePosition( cell->bounds.left, cell->bounds.top );
					FVector top_right = UCoalaGpsConverterFunctionLibrary::ToScenePosition( cell->bounds.right, cell->bounds.top );
					FVector bottom_right = UCoalaGpsConverterFunctionLibrary::ToScenePosition( cell->bounds.right, cell->bounds.bottom );
					FVector bottom_left = UCoalaGpsConverterFunctionLibrary::ToScenePosition( cell->bounds.left, cell->bounds.bottom );

					// add elevation if available
					if( this->area->elevation.data.Num() > 0 )
					{
						int elevation_index_x = cell->index.x + 1;
						int elevation_index_y = cell->index.y + 1;
						double elevationScale = ACoalaController::GetElevationScale();

						top_left.Z = this->area->elevation.GetHeight( elevation_index_x, elevation_index_y ) * elevationScale;
						top_right.Z = this->area->elevation.GetHeight( elevation_index_x + 1, elevation_index_y ) * elevationScale;
						bottom_right.Z = this->area->elevation.GetHeight( elevation_index_x + 1, elevation_index_y + 1 ) * elevationScale;
						bottom_left.Z = this->area->elevation.GetHeight( elevation_index_x, elevation_index_y + 1 ) * elevationScale;
					}

					shape.Add( (top_right - area_fixpoint) );
					shape.Add( (bottom_right - area_fixpoint) );
					shape.Add( (bottom_left - area_fixpoint) );
					shape.Add( (top_left - area_fixpoint) );
				}

				TArray<TArray<FVector>> holes;

				// check if entry exsist
				auto it_find = grouped_shapes.find( group_index );
				if( it_find == grouped_shapes.end() )
				{
					// new entry
					grouped_shapes[group_index] = FCoalaShapeData();
				}
				// add to collection
				grouped_shapes[group_index].shapes.Add( shape );
				grouped_shapes[group_index].holes.Add( holes );
				grouped_shapes[group_index].normals.Append( normals );
			}
		}
	}

	ACoalaMeshActor* meshActor = 0;
	// spawn actor, arrange in area and name
	FString displayName = "_area_" + FString::FromInt( this->area->props.tile.x ) + "_" + FString::FromInt( this->area->props.tile.y ) + "_cells";

	if( !this->area->AddCoalaLayerRenderTask(
			new SpawnCoalaMeshActor( meshActor, this->area->sceneObject->_refAllCells, displayName, FName( "COALA_CELL" ) ),
			true
		)
	)
		return;

	if( !meshActor )
	{
		UE_LOG( CoalaLogCore, Warning, TEXT( "CoalaTaskCreateCells::DoWork - could not spawn mesh actor, abort" ) );
		return;
	}

	TArray<int> height;

	for( auto it2 = grouped_shapes.begin(); it2 != grouped_shapes.end(); ++it2 )
	{
		std::pair<int, UMaterialInterface*> current_index = it2->first;
		FCoalaShapeData shapeData = it2->second;

		int mesh_section_index_to_create = current_index.first;
		UMaterialInterface* material = current_index.second;

		TArray<FVector> finalVertices;
		TArray<int> finalTriangles;
		TArray<FVector> finalNormals;
		TArray<FVector2D> finalUV0;

		for( int i2 = 0; i2 < shapeData.shapes.Num(); i2++ )
		{
			double min_x = shapeData.shapes[i2][0].X;
			double max_x = shapeData.shapes[i2][0].X;

			double min_y = shapeData.shapes[i2][0].Y;
			double max_y = shapeData.shapes[i2][0].Y;

			for( int i3 = 0; i3 < shapeData.shapes[i2].Num(); i3++ )
			{
				if( shapeData.shapes[i2][i3].X < min_x )
					min_x = shapeData.shapes[i2][i3].X;
				if( shapeData.shapes[i2][i3].X > max_x )
					max_x = shapeData.shapes[i2][i3].X;
				if( shapeData.shapes[i2][i3].Y < min_y )
					min_y = shapeData.shapes[i2][i3].Y;
				if( shapeData.shapes[i2][i3].Y > max_y )
					max_y = shapeData.shapes[i2][i3].Y;
			}

			finalTriangles.Add( finalVertices.Num() + 3 );
			finalTriangles.Add( finalVertices.Num() );
			finalTriangles.Add( finalVertices.Num() + 2 );

			finalTriangles.Add( finalVertices.Num() );
			finalTriangles.Add( finalVertices.Num() + 1 );
			finalTriangles.Add( finalVertices.Num() + 2 );

			finalVertices.Append( shapeData.shapes[i2] );

			for( int i4 = 0; i4 < shapeData.shapes[i2].Num(); i4++ )
			{
				finalUV0.Add( FVector2D(
					(shapeData.shapes[i2][i4].X / (COALA_BUILDING_MESH_UV_TILESIZE * ACoalaController::GetCoalaScale())),
					(shapeData.shapes[i2][i4].Y / (COALA_BUILDING_MESH_UV_TILESIZE * ACoalaController::GetCoalaScale()))
				) );
			}
		}

		for( int i5 = 0; i5 < shapeData.normals.Num(); i5++ )
		{
			finalNormals.Add( shapeData.normals[i5] );
		}

		MeshGenerator::weldVertices( finalVertices, finalNormals, finalUV0, finalTriangles );
		/*for (int i6 = 0; i6 < finalVertices.Num(); i6++)
		{
			DrawDebugLine(world,
				finalVertices[i6] + area_fixpoint - UCoalaAreaController::GetGpsOffset(),
				finalVertices[i6] + area_fixpoint - UCoalaAreaController::GetGpsOffset() + finalNormals[i6] * 500,
				FColor(255, 0, 0),
				true, -1, 0,
				10);
		}*/

		TArray<FProcMeshTangent> finalTangents;
		UKismetProceduralMeshLibrary::CalculateTangentsForMesh( finalVertices, finalTriangles, finalUV0, finalNormals, finalTangents );
		
		if( !this->area->AddCoalaLayerRenderTask(
				new CreateMesh( meshActor->mesh, mesh_section_index_to_create, finalVertices, finalTriangles, finalNormals, finalUV0, TArray<FLinearColor>(), TArray<FProcMeshTangent>(), true ),
				true
			)
		)
			return;

		if( !this->area->AddCoalaLayerRenderTask(
				new SetMeshMaterial( meshActor->mesh, mesh_section_index_to_create, material )
			)
		)
			return;
	}

	if( !this->area->AddCoalaLayerRenderTask(
			new delegates::CallCellsCreatedDelegate( this->delegateOnDone, meshActor, this->area ),
			true
		)
	)
		return;
}
