#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GE_Ambush

#include "Basic.hpp"

#include "GE_Dur_MoveSpeed_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GE_Ambush.GE_Ambush_C
// 0x0000 (0x0A70 - 0x0A70)
class UGE_Ambush_C final : public UGE_Dur_MoveSpeed_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_Ambush_C">();
	}
	static class UGE_Ambush_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_Ambush_C>();
	}
};
static_assert(alignof(UGE_Ambush_C) == 0x000008, "Wrong alignment on UGE_Ambush_C");
static_assert(sizeof(UGE_Ambush_C) == 0x000A70, "Wrong size on UGE_Ambush_C");

}

