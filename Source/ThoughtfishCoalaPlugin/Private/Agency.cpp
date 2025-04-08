// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#include "Agency.h"

void
UCoalaAgencyShadowingFix::BreakAgency(
	UAgency* InAgency,
	FString& name,
	FString& url )
{
	name = InAgency->name;
	url = InAgency->url;
}
