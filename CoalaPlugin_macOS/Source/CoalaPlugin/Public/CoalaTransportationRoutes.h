// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CoalaTransportationRoutes.generated.h"

USTRUCT( BlueprintType )
struct FTransportationRoutesStruct
: public FTableRowBase
{
	GENERATED_BODY()

	public:
		UPROPERTY(EditAnywhere, Category = "Coala|Transportation", BlueprintReadWrite)
		FString route_id;

		UPROPERTY(EditAnywhere, Category = "Coala|Transportation", BlueprintReadWrite)
		FString agency_id;

		UPROPERTY(EditAnywhere, Category = "Coala|Transportation", BlueprintReadWrite)
		FString route_short_name;

		UPROPERTY(EditAnywhere, Category = "Coala|Transportation", BlueprintReadWrite)
		FString route_long_name;

		UPROPERTY(EditAnywhere, Category = "Coala|Transportation", BlueprintReadWrite)
		int route_type = 0;
};