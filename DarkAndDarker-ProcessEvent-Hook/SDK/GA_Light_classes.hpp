#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Light

#include "Basic.hpp"

#include "GA_SpellCastingFireProjectile_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Light.GA_Light_C
// 0x0000 (0x0678 - 0x0678)
class UGA_Light_C final : public UGA_SpellCastingFireProjectile_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Light_C">();
	}
	static class UGA_Light_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Light_C>();
	}
};
static_assert(alignof(UGA_Light_C) == 0x000008, "Wrong alignment on UGA_Light_C");
static_assert(sizeof(UGA_Light_C) == 0x000678, "Wrong size on UGA_Light_C");

}

