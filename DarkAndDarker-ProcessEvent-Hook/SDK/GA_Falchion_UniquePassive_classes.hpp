#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Falchion_UniquePassive

#include "Basic.hpp"

#include "GA_UniqueWeaponPassive_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Falchion_UniquePassive.GA_Falchion_UniquePassive_C
// 0x0000 (0x05A8 - 0x05A8)
class UGA_Falchion_UniquePassive_C final : public UGA_UniqueWeaponPassive_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Falchion_UniquePassive_C">();
	}
	static class UGA_Falchion_UniquePassive_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Falchion_UniquePassive_C>();
	}
};
static_assert(alignof(UGA_Falchion_UniquePassive_C) == 0x000008, "Wrong alignment on UGA_Falchion_UniquePassive_C");
static_assert(sizeof(UGA_Falchion_UniquePassive_C) == 0x0005A8, "Wrong size on UGA_Falchion_UniquePassive_C");

}

