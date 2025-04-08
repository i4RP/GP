// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#pragma once

#include "Containers/Array.h"
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CoalaGridIndex.generated.h"

USTRUCT( BlueprintType, meta = (HiddenByDefault) )
struct THOUGHTFISHCOALAPLUGIN_API FCoalaGridIndex
{
	GENERATED_BODY()

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Coala|GridIndex" )
	int x;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Coala|GridIndex" )
	int y;
	
	FCoalaGridIndex();
	FCoalaGridIndex( int x, int y );

	friend bool operator==(const FCoalaGridIndex& left, const FCoalaGridIndex& right)
	{
		return GetTypeHash(left) == GetTypeHash(right);
	}

	friend uint32 GetTypeHash(const FCoalaGridIndex& other)
	{
		return (other.x * 50 + other.y);
	}
};

UCLASS()
class THOUGHTFISHCOALAPLUGIN_API UCoalaGridIndexShadowingFix
: public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	public:
		UFUNCTION( BlueprintPure, Category = "Coala|GridIndex", meta = (NativeMakeFunc) )
		static void MakeCoalaGridIndex( int x, int y, FCoalaGridIndex& InCoalaGridIndex );
			
		UFUNCTION( BlueprintPure, Category = "Coala|GridIndex", meta = (NativeBreakFunc) )
		static void BreakCoalaGridIndex( FCoalaGridIndex InCoalaGridIndex, int& x, int& y );

		static TArray<FCoalaGridIndex> GetGridIndexAround( FCoalaGridIndex center, int cellSpaceToOther );
};