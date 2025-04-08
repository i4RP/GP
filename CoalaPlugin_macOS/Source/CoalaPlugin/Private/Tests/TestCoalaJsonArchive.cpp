// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#include "CoalaAutomationConfig.h"
#include "CoalaJsonReader.h"
#include "CoalaJsonWriter.h"
#include "Net/CoalaNetRemotePlayerData.h"

constexpr auto *exampleResponse{ TEXT("[\r\n\t{\r\n\t\t\"timestamp\":0,\r\n\t\t\"id\":\"18FFF2F19A8372238B5992E1775AC10165FC18035026C5A885580911FD20388E\",\r\n\t\t\"lon\":13.3997,\r\n\t\t\"lat\":52.5195,\r\n\t\t\"payload\":\"{\\\"username\\\": \\\"Simulated User (3)\\\"}\"\r\n\t},\r\n\t{\r\n\t\t\"timestamp\":0,\r\n\t\t\"id\":\"4B0C0094D38B82A372FDA2DAB34DBE104C450A607EEACD7A55E3554BFFE0B790\",\r\n\t\t\"lon\":13.3969,\r\n\t\t\"lat\":52.5238,\r\n\t\t\"payload\":\"{\\\"username\\\": \\\"Simulated User (1)\\\"}\"\r\n\t},\r\n\t{\r\n\t\t\"timestamp\":0,\r\n\t\t\"id\":\"9CF49A3242C6ACF81EFAFD91BAF670D07A0446B10C65EBD25601E9A1B08602C8\",\r\n\t\t\"lon\":13.3994,\r\n\t\t\"lat\":52.5204,\r\n\t\t\"payload\":\"{\\\"username\\\": \\\"Simulated User (2)\\\"}\"\r\n\t}\r\n]") };

const FCoalaNetRemotePlayerData exampleResponseAsObjects[]
{
	{
		0,
		"18FFF2F19A8372238B5992E1775AC10165FC18035026C5A885580911FD20388E",
		13.3997,
		52.5195,
		"{\"username\": \"Simulated User (3)\"}"
	},
	{
		0,
		"4B0C0094D38B82A372FDA2DAB34DBE104C450A607EEACD7A55E3554BFFE0B790",
		13.3969,
		52.5238,
		"{\"username\": \"Simulated User (1)\"}"
	},
	{
		0,
		"9CF49A3242C6ACF81EFAFD91BAF670D07A0446B10C65EBD25601E9A1B08602C8",
		13.3994,
		52.5204,
		"{\"username\": \"Simulated User (2)\"}"
	}
};

void SerializeTestResponse( FCoalaArchive &archive, TArray<FCoalaNetRemotePlayerData> &responseData)
{	
	archive.DeclareArray();	
	for(uint32_t index{ 0 }; archive.ContinueArrayIteration( index, responseData.Num() ); ++index)
	{
		Coala::EnsureArraySize( responseData, index+1 );
		archive
		.DeclareObject()
		.Serialize(responseData[index])
		.LeaveObject();
	}
	archive.LeaveArray();
}



IMPLEMENT_SIMPLE_AUTOMATION_TEST( FTestCoalaJsonArchive_ReadingValidJsonSucceeds, "Coala.Coala Json Archive.Reading Valid Succeeds", ALL_TEST_CONTEXTS | STANDARD_TEST_FLAGS )
bool
FTestCoalaJsonArchive_ReadingValidJsonSucceeds::RunTest( const FString& Parameters )
{
	bool parseSucceeded{ true };
	
	//practical test
	{
		FCoalaJsonReader<> reader{ exampleResponse };		
		TArray<FCoalaNetRemotePlayerData> readData;
		
		SerializeTestResponse( reader, readData );	

		if( ! TestEqual( TEXT("Read data size is not equal to input data size"), readData.Num(), static_cast<int>( UE_ARRAY_COUNT( exampleResponseAsObjects ) ) ) )
		{
			return TEST_FAILED;
		}
				
		for(auto index{ 0 }; index < readData.Num(); ++index)
		{
			parseSucceeded &= TestEqual( TEXT("Example response parsed id"), readData[index].id, exampleResponseAsObjects[index].id );
			parseSucceeded &= TestEqual( TEXT("Example response parsed latitude"), readData[index].latitude, exampleResponseAsObjects[index].latitude );
			parseSucceeded &= TestEqual( TEXT("Example response parsed longitude"), readData[index].longitude, exampleResponseAsObjects[index].longitude );
			parseSucceeded &= TestEqual( TEXT("Example response parsed timestamp"), readData[index].timestamp, exampleResponseAsObjects[index].timestamp );
			parseSucceeded &= TestEqual( TEXT("Example response parsed payload"), readData[index].payload, exampleResponseAsObjects[index].payload);
		}				
	}
	
	//object in object
	{
		const FString testJson{ TEXT("{\"outerobj\":{\"val1\":1, \"obj\":{\"val2\":2}}}") };

		FCoalaJsonReader<> reader{ testJson };
		
		int val1{ 0 }, val2{ 0 };
		
		reader
		.DeclareObject()
			.DeclareObject( TEXT("outerobj") )
				.DeclareValue( TEXT("val1") ).Serialize( val1 )
				.DeclareValue( TEXT("obj") ).DeclareObject()
					.DeclareValue( TEXT("val2") ).Serialize( val2 )
				.LeaveObject()
			.LeaveObject()
		.LeaveObject();
					
		parseSucceeded &= TestEqual( TEXT("Val1 in object in object"), val1, 1 );
		parseSucceeded &= TestEqual( TEXT("Val2 in object in object"), val2, 2 );				
	}
	
	//array in object, array in array
	{
		const FString testJson{ TEXT("{\"arr\":[[1,2,3], [4,5,6]]}") };
		FCoalaJsonReader<> reader{ testJson };

		TArray<int> arr1, arr2;

		reader.DeclareObject()
			.DeclareArray( TEXT("arr") )
				.DeclareArray();
				for(auto index{ 0 }; reader.ContinueArrayIteration( index, arr1.Num() ); ++index)
				{
					Coala::EnsureArraySize( arr1, index+1 );
					reader.Serialize( arr1[index] );
				}
				reader.LeaveArray()
				.DeclareArray();
				for(auto index{ 0 }; reader.ContinueArrayIteration( index, arr2.Num() ); ++index)
				{
					Coala::EnsureArraySize( arr2, index+1 );
					reader.Serialize( arr2[index] );
				}
				reader.LeaveArray()
			.LeaveArray()
		.LeaveObject();

		if(arr1.Num() != 3 || arr2.Num() != 3) return TEST_FAILED;		
		for(auto index{ 0 }; index < 3; ++index)
		{			
			parseSucceeded &= TestEqual( TEXT("Value from arr1 in array in object"), arr1[index], index+1 );
			parseSucceeded &= TestEqual( TEXT("Value from arr2 in array in object"), arr2[index], index+1+3 );			
		}					
	}
	
	//object in array
	{
		const FString testJson{ TEXT("[{ \"value\":1}, {\"value2\":2}, {\"value3\":3}]") };
		FCoalaJsonReader<> reader{ testJson };

		int value{ 0 }, value2{ 0 }, value3{ 0 };
		
		reader.DeclareArray()
			.DeclareObject()
				.DeclareValue( TEXT("value") ).Serialize( value )
			.LeaveObject()
			.DeclareObject()
				.DeclareValue( TEXT("value2") ).Serialize( value2 )
			.LeaveObject()
			.DeclareObject()
				.DeclareValue( TEXT("value3") ).Serialize( value3 )
			.LeaveObject()
		.LeaveArray();
				
		parseSucceeded &= TestEqual( TEXT("value from objects in array"), value, 1 );
		parseSucceeded &= TestEqual( TEXT("value2 from objects in array"), value2, 2 );
		parseSucceeded &= TestEqual( TEXT("value3 from objects in array"), value3, 3 );				
	}
		
	return parseSucceeded; 
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST( FTestCoalaJsonArchive_ReadingInvalidJsonFails, "Coala.Coala Json Archive.Reading Invalid Fails", ALL_TEST_CONTEXTS | STANDARD_TEST_FLAGS )
bool
FTestCoalaJsonArchive_ReadingInvalidJsonFails::RunTest( const FString& Parameters )
{
	const FString invalidJson{ TEXT("{ \"number\":, }") };
	FCoalaJsonReader<> reader{ invalidJson };

	int32 number;
	reader.DeclareObject().DeclareValue( TEXT("number") ).Serialize( number ).LeaveObject();

	return reader.HasError();	
}


IMPLEMENT_SIMPLE_AUTOMATION_TEST( FTestCoalaJsonArchive_Writing, "Coala.Coala Json Archive.Writing", ALL_TEST_CONTEXTS | STANDARD_TEST_FLAGS )
bool
FTestCoalaJsonArchive_Writing::RunTest( const FString& Parameters )
{
	//comparing serialized json with the the exampleResponse does not work because the example response does not use double precision
	//todo: verify if the exampleRespose is indeed what the server would return and try to directly compare the example and serialized responses
	
	TArray<FCoalaNetRemotePlayerData> data{ exampleResponseAsObjects, UE_ARRAY_COUNT( exampleResponseAsObjects ) };
	
	FCoalaJsonWriter<> writer{};

	SerializeTestResponse( writer, data );
	writer.Close();

	if(writer.NotClosedSuccessfully()) return TEST_FAILED;

	TArray<FCoalaNetRemotePlayerData> readData{};
	FCoalaJsonReader<> reader{ writer.GetWrittenJsonString() };

	SerializeTestResponse( reader, readData );
	
	if(data.Num() != readData.Num()) return TEST_FAILED;
	for(auto index{ 0 }; index < data.Num(); ++index)
	{
		const auto& original{ data[index] };
		const auto& read{ readData[index] };

		bool areEqual{ true };
		areEqual &= original.id == read.id;
		areEqual &= original.timestamp == read.timestamp;
		areEqual &= TestEqual( TEXT("latitude"), read.latitude, original.latitude );
		areEqual &= TestEqual( TEXT("longitude"), read.longitude, original.longitude );
		areEqual &= original.payload == read.payload;

		if(! areEqual) return TEST_FAILED;
	}

	return TEST_SUCCEEDED;
}

