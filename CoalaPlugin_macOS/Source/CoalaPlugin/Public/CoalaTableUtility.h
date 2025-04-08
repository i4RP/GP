// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#pragma once

#include "CoreMinimal.h"

namespace Coala
{
	template<typename keyType, typename srcType>
	void MapKeyToKeyIndex( TMap<keyType, int32> &outKeyIndexMap, const TArray<srcType>& src, keyType srcType:: *srcKeyGetter )
	{
		outKeyIndexMap.Reset();
		for(auto index{ 0 }; index < src.Num(); ++index)
		{		
			outKeyIndexMap.Emplace( src[index].*srcKeyGetter, index );
		}	
	}

	template<typename keyType, typename srcType, typename accessorType>
	void MapKeyToKeyIndex( TMap<keyType, int32> &outKeyIndexMap, const TArray<srcType>& src, const accessorType& srcKeyGetter)
	{
		outKeyIndexMap.Reset();
		for(auto index{ 0 }; index < src.Num(); ++index)
		{		
			outKeyIndexMap.Emplace( srcKeyGetter(src[index]), index );
		}	
	}

	template<typename keyType, typename srcType>
	void MapKeyToKeyIndex(  TMap<keyType, int32> &outKeyIndexMap, const TArray<srcType>& src )
	{
		outKeyIndexMap.Reset();
		for(auto index{ 0 }; index < src.Num(); ++index)
		{		
			outKeyIndexMap.Emplace( src[index], index );
		}
		return outKeyIndexMap; 
	}



	template<typename keyType, typename srcType>
	void LookUpIndicesForTable( TArray<int32> &outLookupResults, const TArray<srcType> &forTable, const TMap<keyType, int32> &indexLookup, keyType srcType:: *tableKeyGetter )
	{
		outLookupResults.Reset();
		outLookupResults.AddDefaulted( forTable.Num() );
		for(auto index{ 0 }; index < forTable.Num(); ++index)
		{
			const auto& src{ forTable[index] };

			const auto* foundRightIndex{ indexLookup.Find(src.*tableKeyGetter) };
			outLookupResults[index] = foundRightIndex ? *foundRightIndex : -1;				 
		}
	}

	template<typename keyType, typename srcType, typename accessorType>
	void LookUpIndicesForTable( TArray<int32> &outLookupResults, const TArray<srcType> &forTable, const TMap<keyType, int32> &indexLookup, const accessorType& tableKeyGetter )
	{
		outLookupResults.Reset();
		outLookupResults.AddDefaulted( forTable.Num() );
		for(auto index{ 0 }; index < forTable.Num(); ++index)
		{
			const auto& src{ forTable[index] };

			const auto* foundRightIndex{ indexLookup.Find(tableKeyGetter(src)) };
			outLookupResults[index] = foundRightIndex ? *foundRightIndex : -1;				 
		}
	}

	template<typename keyType, typename srcType>
	void LookUpIndicesForTable( TArray<int32> &outLookupResults,  const TArray<srcType> &forTable, const TMap<keyType, int32> &indexLookup )
	{
		outLookupResults.Reset();
		outLookupResults.AddDefaulted( forTable.Num() );
		for(auto index{ 0 }; index < forTable.Num(); ++index)
		{
			const auto* foundRightIndex{ indexLookup.Find(forTable[index]) };
			outLookupResults[index] = foundRightIndex ? *foundRightIndex : -1;				 
		}
	}



	template<typename predicateType>
	void FilterValues( TArray<int32>& outFiltered, const TArray<int32>& valuesToFilter, predicateType shouldPassFilter)
	{
		outFiltered.Reset();
		for(auto index{ 0 }; index < valuesToFilter.Num(); ++index)
		{
			if(shouldPassFilter(index, valuesToFilter[index])) outFiltered.Emplace( index );
		}
	}

	template<typename outType, typename predicateType, typename makeFunctionType>
	void FilterValues( TArray<outType>& outFiltered, const TArray<int32>& valuesToFilter, predicateType shouldPassFilter, makeFunctionType outTypeFactory_P0ValueIndex_P1Value)
	{
		outFiltered.Reset();
		for(auto index{ 0 }; index < valuesToFilter.Num(); ++index)
		{
			if(shouldPassFilter(index, valuesToFilter[index])) outFiltered.Emplace( outTypeFactory_P0ValueIndex_P1Value(index, valuesToFilter[index]) );
		}
	}
}