// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#include "CoalaArea.h"
#include "CoalaActor.h"
#include "CoalaAreaActor.h"
#include "CoalaBuilding.h"
#include "CoalaCell.h"
#include "CoalaCrime.h"
#include "CoalaElevation.h"
#include "CoalaGridIndex.h"
#include "CoalaProperties.h"
#include "CoalaStreet.h"
#include "CoalaWater.h"
#include "CoalaWeather.h"
#include "CrimeType.h"
#include "LoadTextFileFromProject.h"
#include "CoalaBounds.h"
#include "CoalaTile.h"
#include "GeoConverter.h"

#include "JsonObjectConverter.h"
#include "Engine/World.h"
#include "Async/Async.h"

UCoalaArea::UCoalaArea()
{
	this->sceneObject = 0;
}

UCoalaArea::~UCoalaArea()
{
	if( this->sceneObject )
	{
		if( !this->sceneObject->markedForDestruction )
			int iBreak = 1;
	
		if( !this->sceneObject->shutdown )
			this->sceneObject->signalStopAllWorkingThreads();
	}

	FCoalaTile tile = this->props.tile;
	FCoalaDelegateCoalaArea_OnDestroy paramOnDestroy = this->onDestroy;
	AsyncTask( ENamedThreads::GameThread, [paramOnDestroy, tile]()
	{
		paramOnDestroy.ExecuteIfBound( tile );
	} );
}

UCoalaArea*
UCoalaArea::LoadCoalaAreaFromResponse(
	FString JsonRaw,
	const int defaultBuildingLevel,
	const bool clampToDefaultBuildingLevel,
	const int limitMaxBuildingLevelTo )
{
	UCoalaArea* converted_result = Coala::Converter::JsonStringToArea( JsonRaw );
	if( !converted_result )
	{
		return 0;
	}

	// apply building limits from parameter
	for( int i = 0; i < converted_result->buildings.Num(); ++i )
	{
		FCoalaBuilding currentBuilding = converted_result->buildings[i];

		if( currentBuilding.height == 0 )
			currentBuilding.height = defaultBuildingLevel;
		else if( clampToDefaultBuildingLevel )
			currentBuilding.height = defaultBuildingLevel;

		// is "limitMaxBuildingLevelTo" enabled ?
		if( limitMaxBuildingLevelTo > 0 )
		{
			// limit if above
			if( currentBuilding.height > limitMaxBuildingLevelTo )
				currentBuilding.height = limitMaxBuildingLevelTo;
		}
	}

	return converted_result;
}

UCoalaArea*
UCoalaArea::LoadCoalaAreaFromLocalDump(
	FString assetPathInProject,
	int defaultBuildingLevel,
	bool clampToDefaultBuildingLevel )
{
	FString JsonRaw = ULoadTextFileFromProject::LoadTextFileFromProject( assetPathInProject );
	UCoalaArea* ret = LoadCoalaAreaFromResponse( JsonRaw, defaultBuildingLevel, clampToDefaultBuildingLevel );
	return ret;
}

void
UCoalaArea::ClearAllCustomPOIs( UCoalaArea* area )
{
	if( area->sceneObject->_refAllCustomPOIs )
	{
		area->sceneObject->_refAllCustomPOIs->cleanupAllAttachedActors();
		area->sceneObject->_refAllCustomPOIs->Destroy();
		area->sceneObject->_refAllCustomPOIs = 0;
	}
}

bool
UCoalaArea::CoordinatesAreInAreaBounds( const float lon, const float lat )
{
	return props.bounds.contains( lon, lat );
}

void
UCoalaAreaShadowingFix::SetSceneObjectRefForCrime( UCoalaArea* area, class ACoalaActor* crimesParentActor )
{
	area->sceneObject->_refAllCrimes = crimesParentActor;
}

void
UCoalaAreaShadowingFix::SetSceneObjectRefForCrimePins( UCoalaArea* area, class ACoalaActor* crimePinsParentActor )
{
	area->sceneObject->_refAllCrimePins = crimePinsParentActor;
}

void
UCoalaAreaShadowingFix::SetSceneObjectRefForHeatMap( UCoalaArea* area, class ACoalaActor* tokenParentActor )
{
	area->sceneObject->_refAllHeatMapTokens = tokenParentActor;
}

void
UCoalaAreaShadowingFix::AddAttachedActorToCrimePins( UCoalaArea* area, class AActor* crimePinActor )
{
	area->sceneObject->_refAllCrimes->allAttachedActors.Add( crimePinActor );
}

void
UCoalaAreaShadowingFix::BindOnDestroy( UCoalaArea* area, const FCoalaDelegateCoalaArea_OnDestroy& onDestroy )
{
	area->onDestroy = onDestroy;
}

void
UCoalaAreaShadowingFix::AddAttachedActorToHeatMap( UCoalaArea* area, class AActor* tokenActor )
{
	area->sceneObject->_refAllHeatMapTokens->allAttachedActors.Add( tokenActor );
}

void
UCoalaAreaShadowingFix::RemoveAttachedActorToHeatMap( UCoalaArea* area, class AActor* tokenActor )
{
	area->sceneObject->_refAllHeatMapTokens->allAttachedActors.Remove( tokenActor );
}

void
UCoalaAreaShadowingFix::BreakCoalaArea(
	UCoalaArea* InCoalaArea,
	TArray<FCoalaCell>& coalaCells,
	TArray<FCoalaPOI>& coalaPois,
	TArray<FCoalaCustomPOI>& coalaCustomPois,
	FCoalaTile& coalaTile,
	FCoalaBounds& coalaBounds,
	TArray<FCoalaStreets>& coalaStreets,
	TArray<FCoalaBuilding>& coalaBuildings,
	TArray<FCoalaWater>& coalaWaters,
	FCoalaWeather& weather,
	TArray<FCoalaCrime>& coalaCrimes,
	ACoalaAreaActor*& sceneObject,
	FCoalaElevation& elevation )
{
	coalaCells = InCoalaArea->grid;
	coalaTile = InCoalaArea->props.tile;
	coalaBounds = InCoalaArea->props.bounds;
	coalaWaters = InCoalaArea->water;
	coalaBuildings = InCoalaArea->buildings;
	coalaPois = InCoalaArea->pois;
	coalaCustomPois = InCoalaArea->customPois;
	weather = InCoalaArea->weather;
	coalaStreets = InCoalaArea->streets;
	coalaCrimes = InCoalaArea->crimes;

	// representation of objects/actors in scene
	if( !InCoalaArea->sceneObject )
	{
		sceneObject = 0;
		return;
	}

	sceneObject = InCoalaArea->sceneObject;
	elevation = InCoalaArea->elevation;
}

bool
UCoalaAreaShadowingFix::CompareArea( UCoalaArea* a, UCoalaArea* b )
{
	return a == b;
}

UCoalaArea*
Coala::Converter::JsonStringToArea( FString& JsonRaw )
{
	TSharedPtr<FJsonObject> JsonParsed;
	TSharedRef<TJsonReader<TCHAR>> JsonReader = TJsonReaderFactory<TCHAR>::Create( JsonRaw );
	if( !FJsonSerializer::Deserialize( JsonReader, JsonParsed ) )
	{
		UE_LOG( CoalaLogCore, Error, TEXT( "CoalaConverter::JsonStringToArea parse JSON failed" ) );
		return 0;
	}

	// figure out if the json is a actualy coala area json response
	if( !JsonParsed->HasField( "props" ) )
	{
		UE_LOG( CoalaLogCore, Error, TEXT( "CoalaConverter::JsonStringToArea - JSON did not contains \"props\" field (wich is needed)" ) );
		return 0;
	}

	UCoalaArea* ret = NewObject<UCoalaArea>();

	// mark the object as "not delete by garbage collector"
	{
		ret->AddToRoot();
	}

	// PROPS (ONLY TILE)
	////////
	{
		TSharedPtr<FJsonObject> props = JsonParsed->GetObjectField( "props" );
		ret->props.weather = props->GetStringField( "weather" );

		// TILE
		////////
		TSharedPtr<FJsonObject> tile = props->GetObjectField( "tile" );
		ret->props.tile.x = tile->GetIntegerField( "x" );
		ret->props.tile.y = tile->GetIntegerField( "y" );
		ret->props.tile.z = tile->GetIntegerField( "z" );

		// BOUNDS
		////////
		TSharedPtr<FJsonObject> bounds = props->GetObjectField( "bounds" );
		ret->props.bounds.left = bounds->GetNumberField( "left" );
		ret->props.bounds.bottom = bounds->GetNumberField( "bottom" );
		ret->props.bounds.right = bounds->GetNumberField( "right" );
		ret->props.bounds.top = bounds->GetNumberField( "top" );

		// GAMETAG_MAP
		//////////////
		TMap<int64, FString> tmp_gametag_map;

		TArray<TSharedPtr<FJsonValue>> gametag_map = props->GetArrayField( "gametag_map" );
		for( auto it = gametag_map.begin(); it != gametag_map.end(); ++it )
		{
			TSharedPtr<FJsonObject> entry = (*it)->AsObject();

			FString gametag_name = entry->GetStringField( "name" );
			int64 gametag_id = entry->GetIntegerField( "id" );
			tmp_gametag_map.Add( gametag_id, gametag_name );
		}
		ret->props.initGametagMap( tmp_gametag_map );
	}

	// ELEVATION
	//////////
	{
		const TArray<TSharedPtr<FJsonValue>>* data;
		if( JsonParsed->TryGetArrayField( "elevation", data ) )
		{
			int count = data->Num();
			TArray<int> intData = TArray<int>();
			for( int i = 0; i < count; i++ )
			{
				int value = (*data)[i]->AsNumber();
				intData.Add( value );
			}

			int count_data_in_one_row = sqrt( intData.Num() );

			ret->elevation.min = intData[0];
			ret->elevation.max = intData[0];

			for( int x = 0; x < count_data_in_one_row; x++ )
			{
				for( int y = count_data_in_one_row - 1; y >= 0; y-- )
				{
					if( ret->elevation.data.Num() <= x )
					{
						ret->elevation.data.Add( FElevationData() );
					}
					int currentElevationValue = intData[y * count_data_in_one_row + x];

					if( currentElevationValue < ret->elevation.min )
						ret->elevation.min = currentElevationValue;
					if( currentElevationValue > ret->elevation.max )
						ret->elevation.max = currentElevationValue;

					ret->elevation.data[x].content.Add( currentElevationValue );
				}
			}
		}
	}
	// WEATHER
	//////////
	{
		const TSharedPtr<FJsonObject>* data;
		if( JsonParsed->TryGetObjectField( "weather", data ) )
		{
			TSharedPtr<FJsonObject> weather = JsonParsed->GetObjectField( "weather" );
			ret->weather.simple = weather->GetStringField( "simple" );
			
			// TEMPERATURE
			////////
			TSharedPtr<FJsonObject> temperature = weather->GetObjectField( "temperature" );
			ret->weather.temperature.value = temperature->GetNumberField( "value" );
			ret->weather.temperature.unit = temperature->GetStringField( "unit" );
			
			// HUMIDITY
			////////
			TSharedPtr<FJsonObject> humidity = weather->GetObjectField( "humidity" );
			ret->weather.humidity.value = humidity->GetNumberField( "value" );
			ret->weather.humidity.unit = humidity->GetStringField( "unit" );

			// PRESSURE
			////////
			TSharedPtr<FJsonObject> pressure = weather->GetObjectField( "pressure" );
			ret->weather.pressure.value = pressure->GetNumberField( "value" );
			ret->weather.pressure.unit = pressure->GetStringField( "unit" );
			
			// WIND
			////////
			TSharedPtr<FJsonObject> wind = weather->GetObjectField( "wind" );
			ret->weather.wind.speed = wind->GetNumberField( "speed" );
			ret->weather.wind.direction = wind->GetNumberField( "direction" );
		}
	}

	// CELL
	///////
	{
		const TArray<TSharedPtr<FJsonValue>>* data;
		if( JsonParsed->TryGetArrayField( "gametags", data ) )
		{
			// calculate values for later use once
			int count_cells_in_one_row = data->Num();
			double cell_width = ret->props.bounds.width() / count_cells_in_one_row;
			double cell_height = ret->props.bounds.height() / count_cells_in_one_row;

			for( int x = 0; x < count_cells_in_one_row; ++x )
			{
				TSharedPtr<FJsonObject> current_row = (*data)[x]->AsObject();
				TArray<TSharedPtr<FJsonValue>> row = current_row->GetArrayField( "row" );
				for( int y = 0; y < row.Num(); ++y )
				{
					TSharedPtr<FJsonObject> entry = row[y]->AsObject();
					TSharedPtr<FJsonObject> cell = entry->GetObjectField( "cell" );

					FCoalaGridIndex gridIndex( x, y );
					FCoalaCell currentCell;
					{
						currentCell.index = gridIndex;

						// calculate cell bounds
						{
							currentCell.bounds.left = ret->props.bounds.left + (currentCell.index.x * cell_width);
							currentCell.bounds.right = ret->props.bounds.left + ((currentCell.index.x + 1) * cell_width);
							currentCell.bounds.top = ret->props.bounds.bottom - ((-1) * currentCell.index.y * cell_height);
							currentCell.bounds.bottom = ret->props.bounds.bottom - ((-1) * (currentCell.index.y + 1) * cell_height);
						}

						TArray<TSharedPtr<FJsonValue>> ids = cell->GetArrayField( "id" );
						TArray<TSharedPtr<FJsonValue>> weights = cell->GetArrayField( "weight" );
						for( int i = 0; i < ids.Num(); ++i )
						{
							FString gametag_id = ids[i]->AsString();
							int priority = weights[i]->AsNumber();

							FString* foundGametagName = ret->props.getGametagNameById( FCString::Atoi64( *gametag_id ) );
							if( foundGametagName )
							{
								currentCell.gameTags.Add( *foundGametagName, priority );
							}
						}
					}
					ret->grid.Add( currentCell );
				}
			}
		}
	}

	// POI
	//////
	{
		const TArray<TSharedPtr<FJsonValue>>* data;
		if( JsonParsed->TryGetArrayField( "pois", data ) )
		{
			for( int i = 0; i < data->Num(); ++i )
			{
				TSharedPtr<FJsonObject> entry = (*data)[i]->AsObject();
				FCoalaPOI currentPoi;

				currentPoi.pos = FCoalaGPSCoordinates(
					entry->GetNumberField( "lon" ),
					entry->GetNumberField( "lat" )
				);
				currentPoi.label = entry->GetStringField( "label" );

				ret->pois.Add( currentPoi );
			}
		}
	}

	// CUSTOM POI
	//////
	{
		const TArray<TSharedPtr<FJsonValue>>* data;
		if( JsonParsed->TryGetArrayField( "custom_pois", data ) )
		{
			for( int i = 0; i < data->Num(); ++i )
			{
				TSharedPtr<FJsonObject> entry = (*data)[i]->AsObject();
				FCoalaCustomPOI currentPoi;

				currentPoi.pos = FCoalaGPSCoordinates(
					entry->GetNumberField( "lon" ),
					entry->GetNumberField( "lat" )
				);
				currentPoi.label = entry->GetStringField( "label" );
				currentPoi.payload = entry->GetStringField( "payload" );

				ret->customPois.Add( currentPoi );
			}
		}
	}

	// WATER
	////////
	{
		const TArray<TSharedPtr<FJsonValue>>* data;
		if( JsonParsed->TryGetArrayField( "water", data ) )
		{
			for( int i = 0; i < data->Num(); ++i )
			{
				TSharedPtr<FJsonObject> entry = (*data)[i]->AsObject();

				FCoalaWater currentWater;

				TSharedPtr<FJsonObject> area = entry->GetObjectField( "area" );

				const TArray<TSharedPtr<FJsonValue>> lon = area->GetArrayField( "lon" );
				const TArray<TSharedPtr<FJsonValue>> lat = area->GetArrayField( "lat" );
				for( int a = 0; a < lon.Num(); ++a )
				{
					FCoalaGPSCoordinates coordinates;
					coordinates.lon = lon[a]->AsNumber();
					coordinates.lat = lat[a]->AsNumber();
					currentWater.area.Add( coordinates );
				}
				currentWater.center( true );
				currentWater.bounds( true );

				const TArray<TSharedPtr<FJsonValue>> holes = entry->GetArrayField( "holes" );
				for( int a = 0; a < holes.Num(); ++a )
				{
					FCoalaHole dataCurrentHole;

					TSharedPtr<FJsonObject> JsonCurrentHole = holes[a]->AsObject();

					const TArray<TSharedPtr<FJsonValue>> holeLon = JsonCurrentHole->GetArrayField( "lon" );
					const TArray<TSharedPtr<FJsonValue>> holeLat = JsonCurrentHole->GetArrayField( "lat" );

					for( int b = 0; b < holeLon.Num(); ++b )
					{
						FCoalaGPSCoordinates coordinates;
						coordinates.lon = holeLon[b]->AsNumber();
						coordinates.lat = holeLat[b]->AsNumber();
						dataCurrentHole.points.Add( coordinates );
					}
					currentWater.holes.Add( dataCurrentHole );
				}

				ret->water.Add( currentWater );
			}
		}
	}

	// STREETS
	//////////
	{
		const TArray<TSharedPtr<FJsonValue>>* data;
		if( JsonParsed->TryGetArrayField( "streets", data ) )
		{
			for( int i = 0; i < data->Num(); ++i )
			{
				TSharedPtr<FJsonObject> entry = (*data)[i]->AsObject();

				FCoalaStreets currentStreets;
				currentStreets.typ = entry->GetStringField( "typ" );

				// data
				TArray<TSharedPtr<FJsonValue>> streetTypeData = entry->GetArrayField( "data" );
				for( int b = 0; b < streetTypeData.Num(); ++b )
				{
					FCoalaStreet currentStreet;

					TSharedPtr<FJsonObject> current = streetTypeData[b]->AsObject();
					const TArray<TSharedPtr<FJsonValue>> lon = current->GetArrayField( "lon" );
					const TArray<TSharedPtr<FJsonValue>> lat = current->GetArrayField( "lat" );
					for( int a = 0; a < lon.Num(); ++a )
					{
						FCoalaGPSCoordinates coordinates;
						coordinates.lon = lon[a]->AsNumber();
						coordinates.lat = lat[a]->AsNumber();
						currentStreet.points.Add( coordinates );
					}

					// calculate/cache bounds and center
					currentStreet.bounds( true );
					currentStreet.center( true );

					currentStreets.data.Add( currentStreet );
				}
				
				ret->streets.Add( currentStreets );
			}
		}
	}

	// BUILDINGS
	////////////
	{
		const TArray<TSharedPtr<FJsonValue>>* data;
		if( JsonParsed->TryGetArrayField( "buildings", data ) )
		{
			for( int i = 0; i < data->Num(); ++i )
			{
				TSharedPtr<FJsonObject> entry = (*data)[i]->AsObject();

				FCoalaBuilding currentBuilding;

				// height
				currentBuilding.height = entry->GetIntegerField( "height" );

				// area
				TSharedPtr<FJsonObject> area = entry->GetObjectField( "area" );

				const TArray<TSharedPtr<FJsonValue>> lon = area->GetArrayField( "lon" );
				const TArray<TSharedPtr<FJsonValue>> lat = area->GetArrayField( "lat" );
				for( int a = 0; a < lon.Num(); ++a )
				{
					FCoalaGPSCoordinates coordinates;
					coordinates.lon = lon[a]->AsNumber();
					coordinates.lat = lat[a]->AsNumber();
					currentBuilding.area.Add( coordinates );
				}
				currentBuilding.center(true);
				currentBuilding.bounds(true);

				// holes
				const TArray<TSharedPtr<FJsonValue>> holes = entry->GetArrayField( "holes" );
				for( int a = 0; a < holes.Num(); ++a )
				{
					FCoalaHole dataCurrentHole;

					TSharedPtr<FJsonObject> JsonCurrentHole = holes[a]->AsObject();

					const TArray<TSharedPtr<FJsonValue>> holeLon = JsonCurrentHole->GetArrayField( "lon" );
					const TArray<TSharedPtr<FJsonValue>> holeLat = JsonCurrentHole->GetArrayField( "lat" );

					for( int b = 0; b < holeLon.Num(); ++b )
					{
						FCoalaGPSCoordinates coordinates;
						coordinates.lon = holeLon[b]->AsNumber();
						coordinates.lat = holeLat[b]->AsNumber();
						dataCurrentHole.points.Add( coordinates );
					}
					currentBuilding.holes.Add( dataCurrentHole );
				}
				ret->buildings.Add( currentBuilding );
			}
		}
	}

	//CRIMES
	{
		const TArray<TSharedPtr<FJsonValue>>* crimeData;
		if( JsonParsed->TryGetArrayField( "crimedata", crimeData ) )
		{
			for( int i = 0; i < crimeData->Num(); ++i )
			{
				TSharedPtr<FJsonObject> entry = (*crimeData)[i]->AsObject();
				FCoalaCrime currentCrime;

				currentCrime.pos = FCoalaGPSCoordinates(
					entry->GetNumberField( "lon" ),
					entry->GetNumberField( "lat" )
				);
				FString crime = entry->GetStringField( "crime" );
				float weight = entry->GetNumberField( "weight" );
				
				for( int a = 0; a * 3 < crime.Len(); ++a )
				{
					FString numberString = crime.Mid( a * 3, 3 );
					int number = FCString::Atoi( *numberString );
					UCrimeType crimeType = (UCrimeType)number;
					currentCrime.crimesMappedToWeight.Add( crimeType, weight );
				}
				ret->crimes.Add( currentCrime );
			}
		}
	}

	return ret;
}

void 
UCoalaArea::markForDestruction()
{
	// check for actor that representas the rendered data
	// from THIS area
	if( !this->sceneObject )
	{
		// already removed
		return;
	}

	if( this->sceneObject->shutdown )
	{
		// already marked for shutdown
		return;
	}

	this->sceneObject->signalStopAllWorkingThreads();
}

bool
UCoalaArea::AddCoalaLayerRenderTask( CoalaTask* task, bool waitForResult )
{
	if( !this->sceneObject || this->sceneObject->shutdown )
	{
		task->setToDone();

		delete task;
		return false;
	}

	if( waitForResult )
	{
		return this->sceneObject->AwaitCoalaTask( task );
	}
	else 
	{
		return this->sceneObject->AddCoalaTask( task );
	}
}

bool
UCoalaArea::addThreadsUsingAreaData( FNonAbandonableTask* coalaTask, FString info )
{
	if( !this->sceneObject )
	{
		return false;
	}

	return this->sceneObject->addThreadsUsingAreaData( coalaTask, info );
}

bool
UCoalaArea::removeThreadsUsingAreaData( FNonAbandonableTask* coalaTask, FString info )
{
	if( !this->sceneObject )
	{
		return false;
	}

	return this->sceneObject->removeThreadsUsingAreaData( coalaTask, info );
}
