// Copyright Thoughtfish GmbH, 2023
// http://www.thoughtfish.de

#include "CoalaPlatformMisc.h"
#include "CoalaLogCore.h"

#if PLATFORM_WINDOWS
#include "Windows/WindowsPlatformMisc.h"
#elif PLATFORM_ANDROID
#include "Android/AndroidPlatformMisc.h"
#elif PLATFORM_IOS
#include "IOS/IOSPlatformMisc.h"
#elif PLATFORM_LINUX | PLATFORM_UNIX
#include "Unix/UnixPlatformMisc.h"
#elif PLATFORM_MAC
#include "Mac/MacPlatformMisc.h"
#endif

#if PLATFORM_WINDOWS || PLATFORM_LINUX || PLATFORM_UNIX || PLATFORM_MAC
FString GetMacAddressString()
{	
	TArray<uint8> MacAddr =
#if PLATFORM_WINDOWS
	FWindowsPlatformMisc::GetMacAddress();
#elif PLATFORM_LINUX || PLATFORM_UNIX
	FUnixPlatformMisc::GetMacAddress();
#elif PLATFORM_MAC
	FMacPlatformMisc::GetMacAddress();
#endif
	
	FString Result;
	for( auto it = MacAddr.begin(); it != MacAddr.end(); ++it )
	{
		Result += FString::Printf( TEXT("%02x"), *it );
	}
	return Result;
}

FString GetHashedMacAddressString()
{	
	// ensure empty MAC addresses don't return a hash of zero bytes.
	FString MacAddr = GetMacAddressString();
	if (!MacAddr.IsEmpty())
	{
		return FMD5::HashAnsiString(*MacAddr);
	}
	else
	{
		return FString();
	}
}
#endif

FString UCoalaPlatformMisc::GetDeviceIdForCurrentPlatform()
{
	FString id;
#if PLATFORM_WINDOWS || PLATFORM_LINUX || PLATFORM_UNIX || PLATFORM_MAC
	id = GetHashedMacAddressString();
#elif PLATFORM_ANDROID
	id = FAndroidMisc::GetDeviceId();
#elif PLATFORM_IOS
	id = FIOSPlatformMisc::GetDeviceId();
#else
	assert( 0 && "There is no implementation of UCoalaPlatformMisc::GetDeviceIdForCurrentPlatform for your target platform.");
#endif

	if( id.IsEmpty() )
	{
		UE_LOG(CoalaLogCore, Error, TEXT("UCoalaPlatformMisc::GetDeviceIdForCurrentPlatform could not get an id for your current platform."));
	}
	return id;
}