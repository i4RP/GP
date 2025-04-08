// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#pragma once

#include "CoalaGPSCoordinates.h"
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CrimeType.h"
#include "CoalaCrime.generated.h"

USTRUCT( BlueprintType )
struct THOUGHTFISHCOALAPLUGIN_API FRenderedCrimeInfo
{
	GENERATED_BODY()

	UPROPERTY (EditAnywhere, BlueprintReadWrite, Category = "Coala|Crime", BlueprintReadWrite )
	FCoalaGPSCoordinates crimePosition;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Coala|Crime", BlueprintReadWrite )
	AActor* crimePinActor = 0;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Coala|Crime", BlueprintReadWrite )
	TArray<UCrimeType> crimeTypes;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Coala|Crime", BlueprintReadWrite )
	float weight = 0;
};

// Workaround since nested containers are not supported
USTRUCT( BlueprintType )
struct THOUGHTFISHCOALAPLUGIN_API FRenderedCrimeInfoArray
{
	GENERATED_BODY()

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Coala|Crime", BlueprintReadWrite )
	TArray<FRenderedCrimeInfo> renderedCrimeInfos;
};

// Workaround since nested containers are not supported
USTRUCT( BlueprintType )
struct THOUGHTFISHCOALAPLUGIN_API FRenderedCrimeInfoArrayPerPosition
{
	GENERATED_BODY()

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Coala|Crime", BlueprintReadWrite )
	TMap<FVector2D, FRenderedCrimeInfoArray> renderedCrimeInfosPerPosition;
};

USTRUCT( BlueprintType )
struct THOUGHTFISHCOALAPLUGIN_API FCoalaCrime
{
	GENERATED_BODY()

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Coala|Crime" )
	FCoalaGPSCoordinates pos;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Coala|Crime" )
	TMap<UCrimeType, float> crimesMappedToWeight;	
};

UCLASS()
class THOUGHTFISHCOALAPLUGIN_API UCoalaCrimeShadowingFix
: public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	public:
		UFUNCTION( BlueprintCallable, Category = "Coala|Crime" )
		static TMap<class UCoalaArea*, FRenderedCrimeInfoArrayPerPosition> FilterCrimes( TMap<UCoalaArea*, FRenderedCrimeInfoArrayPerPosition> renderedCrimeInfoPerArea, TMap<UCrimeType, float> crimesMappedToWeight, UCoalaArea* area, FVector2D roundedVector, bool& shouldBeRendered );
};