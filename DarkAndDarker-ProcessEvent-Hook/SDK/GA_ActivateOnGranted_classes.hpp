#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_ActivateOnGranted

#include "Basic.hpp"

#include "DungeonCrawler_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_ActivateOnGranted.GA_ActivateOnGranted_C
// 0x0000 (0x05A0 - 0x05A0)
class UGA_ActivateOnGranted_C : public UDCGameplayAbilityBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_ActivateOnGranted_C">();
	}
	static class UGA_ActivateOnGranted_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_ActivateOnGranted_C>();
	}
};
static_assert(alignof(UGA_ActivateOnGranted_C) == 0x000008, "Wrong alignment on UGA_ActivateOnGranted_C");
static_assert(sizeof(UGA_ActivateOnGranted_C) == 0x0005A0, "Wrong size on UGA_ActivateOnGranted_C");

}

