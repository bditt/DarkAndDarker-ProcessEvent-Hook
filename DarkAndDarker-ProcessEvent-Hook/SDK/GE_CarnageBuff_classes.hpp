#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GE_CarnageBuff

#include "Basic.hpp"

#include "GE_Dur_StrengthBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GE_CarnageBuff.GE_CarnageBuff_C
// 0x0000 (0x0A70 - 0x0A70)
class UGE_CarnageBuff_C final : public UGE_Dur_StrengthBase_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_CarnageBuff_C">();
	}
	static class UGE_CarnageBuff_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_CarnageBuff_C>();
	}
};
static_assert(alignof(UGE_CarnageBuff_C) == 0x000008, "Wrong alignment on UGE_CarnageBuff_C");
static_assert(sizeof(UGE_CarnageBuff_C) == 0x000A70, "Wrong size on UGE_CarnageBuff_C");

}

