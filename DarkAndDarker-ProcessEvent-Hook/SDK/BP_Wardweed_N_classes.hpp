#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Wardweed_N

#include "Basic.hpp"

#include "BP_HerbBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Wardweed_N.BP_Wardweed_N_C
// 0x0000 (0x0508 - 0x0508)
class ABP_Wardweed_N_C final : public ABP_HerbBase_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Wardweed_N_C">();
	}
	static class ABP_Wardweed_N_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Wardweed_N_C>();
	}
};
static_assert(alignof(ABP_Wardweed_N_C) == 0x000008, "Wrong alignment on ABP_Wardweed_N_C");
static_assert(sizeof(ABP_Wardweed_N_C) == 0x000508, "Wrong size on ABP_Wardweed_N_C");

}

