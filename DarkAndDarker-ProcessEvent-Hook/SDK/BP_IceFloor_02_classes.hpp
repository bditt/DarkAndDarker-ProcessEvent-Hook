#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_IceFloor_02

#include "Basic.hpp"

#include "BP_IceFloorBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_IceFloor_02.BP_IceFloor_02_C
// 0x0028 (0x0520 - 0x04F8)
class ABP_IceFloor_02_C final : public ABP_IceFloorBase_C
{
public:
	TArray<class AActor*>                         OverlapCharacters_0;                               // 0x04F8(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	double                                        DestroyCount_0;                                    // 0x0508(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        DestroySignCount_0;                                // 0x0510(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsDestroySign_0;                                   // 0x0518(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_IceFloor_02_C">();
	}
	static class ABP_IceFloor_02_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_IceFloor_02_C>();
	}
};
static_assert(alignof(ABP_IceFloor_02_C) == 0x000008, "Wrong alignment on ABP_IceFloor_02_C");
static_assert(sizeof(ABP_IceFloor_02_C) == 0x000520, "Wrong size on ABP_IceFloor_02_C");
static_assert(offsetof(ABP_IceFloor_02_C, OverlapCharacters_0) == 0x0004F8, "Member 'ABP_IceFloor_02_C::OverlapCharacters_0' has a wrong offset!");
static_assert(offsetof(ABP_IceFloor_02_C, DestroyCount_0) == 0x000508, "Member 'ABP_IceFloor_02_C::DestroyCount_0' has a wrong offset!");
static_assert(offsetof(ABP_IceFloor_02_C, DestroySignCount_0) == 0x000510, "Member 'ABP_IceFloor_02_C::DestroySignCount_0' has a wrong offset!");
static_assert(offsetof(ABP_IceFloor_02_C, IsDestroySign_0) == 0x000518, "Member 'ABP_IceFloor_02_C::IsDestroySign_0' has a wrong offset!");

}

