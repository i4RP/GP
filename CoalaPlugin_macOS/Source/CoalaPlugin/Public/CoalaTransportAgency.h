// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CoalaTransportAgency.generated.h"

USTRUCT( BlueprintType )
struct FTransportationAgencyStruct
: public FTableRowBase
{
	GENERATED_BODY()

	public:
		UPROPERTY(EditAnywhere, Category = "Coala|Transportation", BlueprintReadWrite)
		FString agency_id;

		UPROPERTY(EditAnywhere, Category = "Coala|Transportation", BlueprintReadWrite)
		FString agency_name;

		UPROPERTY(EditAnywhere, Category = "Coala|Transportation", BlueprintReadWrite)
		FString agency_url;

		UPROPERTY(EditAnywhere, Category = "Coala|Transportation", BlueprintReadWrite)
		FString agency_fare_url;
};
