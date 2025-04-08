// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#include "CoalaParsing.h"
#include "JsonObjectConverter.h"

TArray<FString>
UCoalaParsing::ParseCustomPOISuggestionsResponse( FString JsonRaw )
{
	TArray<FString> result = TArray<FString>();

	TSharedPtr<FJsonObject> JsonParsed;
	TSharedRef<TJsonReader<TCHAR>> JsonReader = TJsonReaderFactory<TCHAR>::Create(JsonRaw);
	if (!FJsonSerializer::Deserialize(JsonReader, JsonParsed))
	{
		UE_LOG(LogTemp, Error, TEXT("UCoalaParsing::ParseCustomPOISuggestionsResponse parse JSON failed"));
		return result;
	}

	JsonParsed->TryGetStringArrayField("tags", result);
	return result;
}
