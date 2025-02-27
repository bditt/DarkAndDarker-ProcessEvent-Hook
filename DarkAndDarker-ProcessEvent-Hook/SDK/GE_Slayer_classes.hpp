#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GE_Slayer

#include "Basic.hpp"

#include "GE_Inf_TagOnly_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GE_Slayer.GE_Slayer_C
// 0x0000 (0x0A70 - 0x0A70)
class UGE_Slayer_C final : public UGE_Inf_TagOnly_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_Slayer_C">();
	}
	static class UGE_Slayer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_Slayer_C>();
	}
};
static_assert(alignof(UGE_Slayer_C) == 0x000008, "Wrong alignment on UGE_Slayer_C");
static_assert(sizeof(UGE_Slayer_C) == 0x000A70, "Wrong size on UGE_Slayer_C");

}

