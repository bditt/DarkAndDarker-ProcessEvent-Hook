#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Crossbow

#include "Basic.hpp"

#include "BP_DCItemActor_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Crossbow.BP_Crossbow_C
// 0x0000 (0x0568 - 0x0568)
class ABP_Crossbow_C final : public ABP_DCItemActor_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Crossbow_C">();
	}
	static class ABP_Crossbow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Crossbow_C>();
	}
};
static_assert(alignof(ABP_Crossbow_C) == 0x000008, "Wrong alignment on ABP_Crossbow_C");
static_assert(sizeof(ABP_Crossbow_C) == 0x000568, "Wrong size on ABP_Crossbow_C");

}

