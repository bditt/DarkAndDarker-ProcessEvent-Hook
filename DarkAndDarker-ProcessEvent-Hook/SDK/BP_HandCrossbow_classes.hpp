#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_HandCrossbow

#include "Basic.hpp"

#include "BP_DCItemActor_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_HandCrossbow.BP_HandCrossbow_C
// 0x0000 (0x0568 - 0x0568)
class ABP_HandCrossbow_C final : public ABP_DCItemActor_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_HandCrossbow_C">();
	}
	static class ABP_HandCrossbow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_HandCrossbow_C>();
	}
};
static_assert(alignof(ABP_HandCrossbow_C) == 0x000008, "Wrong alignment on ABP_HandCrossbow_C");
static_assert(sizeof(ABP_HandCrossbow_C) == 0x000568, "Wrong size on ABP_HandCrossbow_C");

}

