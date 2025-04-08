// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#pragma once
#include "CoreMinimal.h"
#include "Net/CoalaNetRemotePlayerData.h"

class FCoalaArchive
{
	public:
		virtual ~FCoalaArchive() = default;	

	
		virtual FCoalaArchive& DeclareArray( const FString& name ) = 0;

		virtual FCoalaArchive& DeclareArray() = 0;

		virtual bool ContinueArrayIteration( uint32_t currentIndex, uint32_t numElements ) = 0;

		virtual FCoalaArchive& LeaveArray() = 0;

	
		virtual FCoalaArchive& DeclareObject( const FString& name ) = 0;

		virtual FCoalaArchive& DeclareObject() = 0;

		virtual FCoalaArchive& LeaveObject() = 0;

	
		virtual FCoalaArchive& DeclareValue( const FString& name ) = 0;

		virtual FCoalaArchive& Serialize( int32& value ) = 0;

		virtual FCoalaArchive& Serialize( int64& value ) = 0;

		virtual FCoalaArchive& Serialize( uint8& value ) = 0;

		virtual FCoalaArchive& Serialize( float& value ) = 0;

		virtual FCoalaArchive& Serialize( double& value ) = 0;

		virtual FCoalaArchive& Serialize( FString& value ) = 0;
	
		
		virtual void Close() = 0;

		virtual bool NotClosedSuccessfully() const = 0;

		template<typename t>
		FCoalaArchive& Serialize(t &value) { return ::Serialize( *this, value ); }
};

namespace Coala
{
	template<typename t>
	void EnsureArraySize(TArray<t> &array, int minimumElements)
	{
		if(array.Num() < minimumElements) array.AddDefaulted( minimumElements - array.Num() );	
	}
}
