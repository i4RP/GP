// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#pragma once

#include "CoreMinimal.h"
#include "CoalaArchive.h"
#include "Serialization/JsonReader.h"

template<class character = FString::ElementType>
class FCoalaJsonReader final
: public FCoalaArchive
{	
	public:
		FCoalaJsonReader(const FString& jsonString);
				
		virtual FCoalaArchive& DeclareArray( const FString& name ) override;

		virtual FCoalaArchive& DeclareArray() override;
	
		virtual bool ContinueArrayIteration( uint32_t currentIndex, uint32_t numElements ) override;

		virtual FCoalaArchive& LeaveArray() override;
		
	
		virtual FCoalaArchive& DeclareObject( const FString& name ) override;

		virtual FCoalaArchive& DeclareObject() override;

			private: void PrereadNextToken();
			
		public: virtual FCoalaArchive& LeaveObject() override;
		
		
		virtual FCoalaArchive& DeclareValue( const FString& name ) override;
	
		virtual FCoalaArchive& Serialize( int32& value ) override;

		bool HasError() const;

		virtual FCoalaArchive& Serialize( int64& value ) override;
	
		virtual FCoalaArchive& Serialize( uint8& value ) override;
	
		virtual FCoalaArchive& Serialize( float& value ) override;

		virtual FCoalaArchive& Serialize( double& value ) override;
	
		virtual FCoalaArchive& Serialize( FString& value ) override;

		using FCoalaArchive::Serialize;
	
	
		virtual void Close() override;

		virtual bool NotClosedSuccessfully() const override;
			

	private:
		TSharedRef<TJsonReader<character>> formatter;

		EJsonNotation lastPrereadToken;
};



template <class character>
FCoalaJsonReader<character>::FCoalaJsonReader( const FString& jsonString)
	:	
	formatter{ TJsonReaderFactory<character>::Create( jsonString ) },
	lastPrereadToken{ EJsonNotation::Null }
{	
}

template <class character>
FCoalaArchive&
FCoalaJsonReader<character>::DeclareArray( const FString& name )
{
	return DeclareArray();
}

template <class character>
FCoalaArchive&
FCoalaJsonReader<character>::DeclareArray()
{
	//read array opening
	if(lastPrereadToken != EJsonNotation::ArrayStart)
	{
		EJsonNotation token;
		formatter->ReadNext( token );		
	}

	PrereadNextToken();
		
	return *this;
}

template <class character>
bool
FCoalaJsonReader<character>::ContinueArrayIteration( uint32_t currentIndex, uint32_t numElements )
{
	return lastPrereadToken != EJsonNotation::ArrayEnd && lastPrereadToken != EJsonNotation::Error;	
}

template <class character>
FCoalaArchive&
FCoalaJsonReader<character>::LeaveArray()
{
	if(lastPrereadToken != EJsonNotation::ArrayEnd)
	{
		formatter->SkipArray();		
	}
	PrereadNextToken();
	
	return *this;
}

template <class character>
FCoalaArchive&
FCoalaJsonReader<character>::DeclareObject( const FString& name )
{
	return DeclareObject();
}

template <class character>
FCoalaArchive&
FCoalaJsonReader<character>::DeclareObject()
{
	//read object opening
	if(lastPrereadToken != EJsonNotation::ObjectStart)
	{
		EJsonNotation token;
		formatter->ReadNext( token );		
	}
	
	PrereadNextToken();
	
	return *this;
}

	template <class character>
	void
	FCoalaJsonReader<character>::PrereadNextToken()
	{
		formatter->ReadNext( lastPrereadToken );
	}



template <class character>
FCoalaArchive&
FCoalaJsonReader<character>::LeaveObject()
{
	if(lastPrereadToken != EJsonNotation::ObjectEnd)
	{
		formatter->SkipObject();		
	}
	PrereadNextToken();
	
	return *this;
}

template <class character>
FCoalaArchive&
FCoalaJsonReader<character>::DeclareValue( const FString& name )
{	
	return *this;
}

template <class character>
FCoalaArchive&
FCoalaJsonReader<character>::Serialize( int32& value )
{
	if(HasError()) return *this;
	
	value = static_cast<int32>(formatter->GetValueAsNumber());
	PrereadNextToken();
	
	return *this;
}

	template <class character>
	bool
	FCoalaJsonReader<character>::HasError() const
	{
		return lastPrereadToken == EJsonNotation::Error;
	}



template <class character>
FCoalaArchive&
FCoalaJsonReader<character>::Serialize( int64& value )
{
	if(HasError()) return *this;
	
	value = static_cast<int64>(formatter->GetValueAsNumber());
	PrereadNextToken();
	
	return *this;	
}

template <class character>
FCoalaArchive&
FCoalaJsonReader<character>::Serialize( uint8& value )
{
	if(HasError()) return *this;
	
	value = static_cast<uint8>(formatter->GetValueAsNumber());
	PrereadNextToken();
	
	return *this;
}

template <class character>
FCoalaArchive&
FCoalaJsonReader<character>::Serialize( float& value )
{
	if(HasError()) return *this;
	
	value = static_cast<float>(formatter->GetValueAsNumber());
	PrereadNextToken();
	
	return *this;
}

template <class character>
FCoalaArchive&
FCoalaJsonReader<character>::Serialize( double& value )
{
	if(HasError()) return *this;
	
	value = formatter->GetValueAsNumber();
	PrereadNextToken();
	
	return *this;
}

template <class character>
FCoalaArchive&
FCoalaJsonReader<character>::Serialize( FString& value )
{
	if(HasError()) return *this;
	
	value = formatter->GetValueAsString();
	PrereadNextToken();
	
	return *this;
}

template <class character>
void
FCoalaJsonReader<character>::Close() { }

template <class character>
bool
FCoalaJsonReader<character>::NotClosedSuccessfully() const
{
	return false;
}
