#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GE_DefenseMastery

#include "Basic.hpp"

#include "GE_Inf_ItemArmorRatingMod_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GE_DefenseMastery.GE_DefenseMastery_C
// 0x0000 (0x0A70 - 0x0A70)
class UGE_DefenseMastery_C final : public UGE_Inf_ItemArmorRatingMod_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_DefenseMastery_C">();
	}
	static class UGE_DefenseMastery_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_DefenseMastery_C>();
	}
};
static_assert(alignof(UGE_DefenseMastery_C) == 0x000008, "Wrong alignment on UGE_DefenseMastery_C");
static_assert(sizeof(UGE_DefenseMastery_C) == 0x000A70, "Wrong size on UGE_DefenseMastery_C");

}

