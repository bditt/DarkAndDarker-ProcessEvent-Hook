#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTD_FrostWyvern_TargetIsCloserToSpawnLocation

#include "Basic.hpp"

#include "AIModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BTD_FrostWyvern_TargetIsCloserToSpawnLocation.BTD_FrostWyvern_TargetIsCloserToSpawnLocation_C
// 0x0008 (0x00A8 - 0x00A0)
class UBTD_FrostWyvern_TargetIsCloserToSpawnLocation_C final : public UBTDecorator_BlueprintBase
{
public:
	class ABP_FrostWyvern_C*                      As_BP_Frost_Wyvern;                                // 0x00A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BTD_FrostWyvern_TargetIsCloserToSpawnLocation_C">();
	}
	static class UBTD_FrostWyvern_TargetIsCloserToSpawnLocation_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTD_FrostWyvern_TargetIsCloserToSpawnLocation_C>();
	}
};
static_assert(alignof(UBTD_FrostWyvern_TargetIsCloserToSpawnLocation_C) == 0x000008, "Wrong alignment on UBTD_FrostWyvern_TargetIsCloserToSpawnLocation_C");
static_assert(sizeof(UBTD_FrostWyvern_TargetIsCloserToSpawnLocation_C) == 0x0000A8, "Wrong size on UBTD_FrostWyvern_TargetIsCloserToSpawnLocation_C");
static_assert(offsetof(UBTD_FrostWyvern_TargetIsCloserToSpawnLocation_C, As_BP_Frost_Wyvern) == 0x0000A0, "Member 'UBTD_FrostWyvern_TargetIsCloserToSpawnLocation_C::As_BP_Frost_Wyvern' has a wrong offset!");

}

