#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_NaturalHealing

#include "Basic.hpp"

#include "GA_ApplyEffectToPartyWithinRangePerkBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_NaturalHealing.GA_NaturalHealing_C
// 0x0000 (0x07B8 - 0x07B8)
class UGA_NaturalHealing_C final : public UGA_ApplyEffectToPartyWithinRangePerkBase_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_NaturalHealing_C">();
	}
	static class UGA_NaturalHealing_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_NaturalHealing_C>();
	}
};
static_assert(alignof(UGA_NaturalHealing_C) == 0x000008, "Wrong alignment on UGA_NaturalHealing_C");
static_assert(sizeof(UGA_NaturalHealing_C) == 0x0007B8, "Wrong size on UGA_NaturalHealing_C");

}

