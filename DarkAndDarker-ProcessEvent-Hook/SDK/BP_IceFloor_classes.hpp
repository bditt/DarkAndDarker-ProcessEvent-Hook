#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_IceFloor

#include "Basic.hpp"

#include "BP_IceFloorBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_IceFloor.BP_IceFloor_C
// 0x0000 (0x04F8 - 0x04F8)
class ABP_IceFloor_C final : public ABP_IceFloorBase_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_IceFloor_C">();
	}
	static class ABP_IceFloor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_IceFloor_C>();
	}
};
static_assert(alignof(ABP_IceFloor_C) == 0x000008, "Wrong alignment on ABP_IceFloor_C");
static_assert(sizeof(ABP_IceFloor_C) == 0x0004F8, "Wrong size on ABP_IceFloor_C");

}

