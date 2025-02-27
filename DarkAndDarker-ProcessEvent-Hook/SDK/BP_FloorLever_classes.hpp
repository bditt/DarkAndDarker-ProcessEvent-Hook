#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FloorLever

#include "Basic.hpp"

#include "BP_TriggerBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_FloorLever.BP_FloorLever_C
// 0x0008 (0x04E0 - 0x04D8)
class ABP_FloorLever_C : public ABP_TriggerBase_C
{
public:
	class UNavModifierComponent*                  NavModifier;                                       // 0x04D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FloorLever_C">();
	}
	static class ABP_FloorLever_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_FloorLever_C>();
	}
};
static_assert(alignof(ABP_FloorLever_C) == 0x000008, "Wrong alignment on ABP_FloorLever_C");
static_assert(sizeof(ABP_FloorLever_C) == 0x0004E0, "Wrong size on ABP_FloorLever_C");
static_assert(offsetof(ABP_FloorLever_C, NavModifier) == 0x0004D8, "Member 'ABP_FloorLever_C::NavModifier' has a wrong offset!");

}

