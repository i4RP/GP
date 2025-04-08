// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#pragma once

#include "CoreMinimal.h"
#include "CoalaArchive.h"
#include "Serialization/JsonWriter.h"

template<class character = FString::ElementType>
class FCoalaJsonWriter final
: public FCoalaArchive
{	
	public:
		FCoalaJsonWriter();

		virtual void Reset();
					
		virtual FCoalaArchive& DeclareArray( const FString& name ) override;
		virtual FCoalaArchive& DeclareArray() override;
	
		virtual bool ContinueArrayIteration( uint32_t currentIndex, uint32_t numElements ) override;

		virtual FCoalaArchive& LeaveArray() override;
		
	
		virtual FCoalaArchive& DeclareObject( const FString& name ) override;
		virtual FCoalaArchive& DeclareObject() override;
			
		virtual FCoalaArchive& LeaveObject() override;
		
		virtual FCoalaArchive& DeclareValue( const FString& name ) override;
	
		virtual FCoalaArchive& Serialize( int32& value ) override;
		virtual FCoalaArchive& Serialize( int64& value ) override;
		virtual FCoalaArchive& Serialize( uint8& value ) override;
		virtual FCoalaArchive& Serialize( float& value ) override;
		virtual FCoalaArchive& Serialize( double& value ) override;
		virtual FCoalaArchive& Serialize( FString& value ) override;

		using FCoalaArchive::Serialize;
	
		virtual void Close() override;

		virtual bool NotClosedSuccessfully() const override;

		virtual const FString &GetWrittenJsonString() const;
				

	private:
		FString jsonString;
	
		TSharedRef<TJsonWriter<character>> formatter;
	
		FString declaredIdentifier;
	
		bool closedSuccessfully;

		template<typename t>
		FCoalaArchive& SerializeInternal( t& value );
};

template <class character>
FCoalaJsonWriter<character>::FCoalaJsonWriter()
: formatter{ TJsonWriterFactory<character>::Create( &jsonString ) }
{
	Reset();
}

template <class character>
void
FCoalaJsonWriter<character>::Reset()
{	
	closedSuccessfully = false;
	jsonString.Reset();
	formatter = TJsonWriterFactory<character>::Create( &jsonString );		
}

template <class character>
FCoalaArchive&
FCoalaJsonWriter<character>::DeclareArray( const FString& name )
{
	formatter->WriteArrayStart( name );
	declaredIdentifier.Empty();
	return *this;
}

template <class character>
FCoalaArchive&
FCoalaJsonWriter<character>::DeclareArray()
{
	formatter->WriteArrayStart();
	declaredIdentifier.Empty();
	return *this;
}

template <class character>
bool
FCoalaJsonWriter<character>::ContinueArrayIteration( const uint32_t currentIndex, const uint32_t numElements )
{
	return currentIndex < numElements;
}

template <class character>
FCoalaArchive&
FCoalaJsonWriter<character>::LeaveArray()
{
	formatter->WriteArrayEnd();
	return *this;
}

template <class character>
FCoalaArchive&
FCoalaJsonWriter<character>::DeclareObject( const FString& name )
{
	formatter->WriteObjectStart( name );
	declaredIdentifier.Empty();
	return *this;
}

template <class character>
FCoalaArchive&
FCoalaJsonWriter<character>::DeclareObject()
{
	formatter->WriteObjectStart();
	declaredIdentifier.Empty();
	return *this;
}

template <class character>
FCoalaArchive&
FCoalaJsonWriter<character>::LeaveObject()
{
	formatter->WriteObjectEnd();
	return *this;
}

template <class character>
void
FCoalaJsonWriter<character>::Close()
{
	closedSuccessfully = formatter->Close();
}

template <class character>
bool
FCoalaJsonWriter<character>::NotClosedSuccessfully() const
{
	return ! closedSuccessfully;
}

template <class character>
const FString&
FCoalaJsonWriter<character>::GetWrittenJsonString() const
{
	return jsonString;
}

template <class character>
FCoalaArchive&
FCoalaJsonWriter<character>::DeclareValue( const FString& name )
{
	declaredIdentifier = name;
	return *this;
}

template <class character>
FCoalaArchive&
FCoalaJsonWriter<character>::Serialize( int32& value )
{
	return SerializeInternal( value );
}

template <class character>
template <typename t>
FCoalaArchive&
FCoalaJsonWriter<character>::SerializeInternal( t& value )
{
	formatter->WriteValue( declaredIdentifier, value );
	declaredIdentifier.Empty();
	return *this;
}

template <class character>
FCoalaArchive&
FCoalaJsonWriter<character>::Serialize( int64& value )
{
	return SerializeInternal( value );
}

template <class character>
FCoalaArchive&
FCoalaJsonWriter<character>::Serialize( uint8& value )
{
	return SerializeInternal( value );
}

template <class character>
FCoalaArchive&
FCoalaJsonWriter<character>::Serialize( float& value )
{
	return SerializeInternal( value );
}

template <class character>
FCoalaArchive&
FCoalaJsonWriter<character>::Serialize( double& value )
{
	return SerializeInternal( value );
}

template <class character>
FCoalaArchive&
FCoalaJsonWriter<character>::Serialize( FString& value )
{		
	return SerializeInternal( value );
}

