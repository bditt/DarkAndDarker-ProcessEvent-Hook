#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GE_Campfire

#include "Basic.hpp"

#include "GE_InfPeriod_Calculation_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GE_Campfire.GE_Campfire_C
// 0x0000 (0x0A70 - 0x0A70)
class UGE_Campfire_C final : public UGE_InfPeriod_Calculation_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_Campfire_C">();
	}
	static class UGE_Campfire_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_Campfire_C>();
	}
};
static_assert(alignof(UGE_Campfire_C) == 0x000008, "Wrong alignment on UGE_Campfire_C");
static_assert(sizeof(UGE_Campfire_C) == 0x000A70, "Wrong size on UGE_Campfire_C");

}

