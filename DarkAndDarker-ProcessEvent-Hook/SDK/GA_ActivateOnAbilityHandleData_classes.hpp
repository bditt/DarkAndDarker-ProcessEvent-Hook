#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_ActivateOnAbilityHandleData

#include "Basic.hpp"

#include "DungeonCrawler_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_ActivateOnAbilityHandleData.GA_ActivateOnAbilityHandleData_C
// 0x0000 (0x05A0 - 0x05A0)
class UGA_ActivateOnAbilityHandleData_C : public UDCGameplayAbilityBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_ActivateOnAbilityHandleData_C">();
	}
	static class UGA_ActivateOnAbilityHandleData_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_ActivateOnAbilityHandleData_C>();
	}
};
static_assert(alignof(UGA_ActivateOnAbilityHandleData_C) == 0x000008, "Wrong alignment on UGA_ActivateOnAbilityHandleData_C");
static_assert(sizeof(UGA_ActivateOnAbilityHandleData_C) == 0x0005A0, "Wrong size on UGA_ActivateOnAbilityHandleData_C");

}

