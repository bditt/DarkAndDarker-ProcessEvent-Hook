#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Buckler_UniquePassive

#include "Basic.hpp"

#include "GA_ActivateOnAbilityHandleData_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Buckler_UniquePassive.GA_Buckler_UniquePassive_C
// 0x0000 (0x05A0 - 0x05A0)
class UGA_Buckler_UniquePassive_C final : public UGA_ActivateOnAbilityHandleData_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Buckler_UniquePassive_C">();
	}
	static class UGA_Buckler_UniquePassive_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Buckler_UniquePassive_C>();
	}
};
static_assert(alignof(UGA_Buckler_UniquePassive_C) == 0x000008, "Wrong alignment on UGA_Buckler_UniquePassive_C");
static_assert(sizeof(UGA_Buckler_UniquePassive_C) == 0x0005A0, "Wrong size on UGA_Buckler_UniquePassive_C");

}

