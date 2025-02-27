#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_Rat

#include "Basic.hpp"

#include "ABP_Bear_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_Rat.ABP_Rat_C
// 0x0000 (0x6F80 - 0x6F80)
class UABP_Rat_C final : public UABP_Bear_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_Rat_C">();
	}
	static class UABP_Rat_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_Rat_C>();
	}
};
static_assert(alignof(UABP_Rat_C) == 0x000010, "Wrong alignment on UABP_Rat_C");
static_assert(sizeof(UABP_Rat_C) == 0x006F80, "Wrong size on UABP_Rat_C");

}

