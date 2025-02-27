#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GE_LoreMastery

#include "Basic.hpp"

#include "GE_Inf_InteractionSpeed_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GE_LoreMastery.GE_LoreMastery_C
// 0x0000 (0x0A70 - 0x0A70)
class UGE_LoreMastery_C final : public UGE_Inf_InteractionSpeed_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_LoreMastery_C">();
	}
	static class UGE_LoreMastery_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_LoreMastery_C>();
	}
};
static_assert(alignof(UGE_LoreMastery_C) == 0x000008, "Wrong alignment on UGE_LoreMastery_C");
static_assert(sizeof(UGE_LoreMastery_C) == 0x000A70, "Wrong size on UGE_LoreMastery_C");

}

