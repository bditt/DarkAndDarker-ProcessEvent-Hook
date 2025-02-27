#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_FrostSkeletonAxeman_Attack_Loop

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "GA_MonsterGameplayAbilityBase_classes.hpp"
#include "AIModule_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_FrostSkeletonAxeman_Attack_Loop.GA_FrostSkeletonAxeman_Attack_Loop_C
// 0x0100 (0x06C8 - 0x05C8)
class UGA_FrostSkeletonAxeman_Attack_Loop_C final : public UGA_MonsterGameplayAbilityBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x05C8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          Reached;                                           // 0x05D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D8E[0x7];                                     // 0x05D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     Gameplay_Event_Data;                               // 0x05D8(0x00B0)(Edit, BlueprintVisible, DisableEditOnInstance)
	class ABP_DCMonsterBaseWithOptions_C*         As_BP_DCMonster_Base_With_Options;                 // 0x0688(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           Attack_Walk_Timer_Handle;                          // 0x0690(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        Max;                                               // 0x0698(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Min;                                               // 0x06A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           Attack_Movement_Timer_Handle;                      // 0x06A8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        Distance_from_Enemy;                               // 0x06B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Range;                                             // 0x06B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AttackFailed;                                      // 0x06C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AbilityActivated(const struct FGameplayEventData& TriggerEventData);
	void Attack_Walk();
	void ExecuteUbergraph_GA_FrostSkeletonAxeman_Attack_Loop(int32 EntryPoint);
	void K2_OnEndAbility(bool bWasCancelled);
	void OnFail_5A0683BB47E6E427DD5FACA7C2DD4CF8(EPathFollowingResult MovementResult);
	void OnSuccess_5A0683BB47E6E427DD5FACA7C2DD4CF8(EPathFollowingResult MovementResult);
	void WalkTimerOut();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_FrostSkeletonAxeman_Attack_Loop_C">();
	}
	static class UGA_FrostSkeletonAxeman_Attack_Loop_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_FrostSkeletonAxeman_Attack_Loop_C>();
	}
};
static_assert(alignof(UGA_FrostSkeletonAxeman_Attack_Loop_C) == 0x000008, "Wrong alignment on UGA_FrostSkeletonAxeman_Attack_Loop_C");
static_assert(sizeof(UGA_FrostSkeletonAxeman_Attack_Loop_C) == 0x0006C8, "Wrong size on UGA_FrostSkeletonAxeman_Attack_Loop_C");
static_assert(offsetof(UGA_FrostSkeletonAxeman_Attack_Loop_C, UberGraphFrame) == 0x0005C8, "Member 'UGA_FrostSkeletonAxeman_Attack_Loop_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_FrostSkeletonAxeman_Attack_Loop_C, Reached) == 0x0005D0, "Member 'UGA_FrostSkeletonAxeman_Attack_Loop_C::Reached' has a wrong offset!");
static_assert(offsetof(UGA_FrostSkeletonAxeman_Attack_Loop_C, Gameplay_Event_Data) == 0x0005D8, "Member 'UGA_FrostSkeletonAxeman_Attack_Loop_C::Gameplay_Event_Data' has a wrong offset!");
static_assert(offsetof(UGA_FrostSkeletonAxeman_Attack_Loop_C, As_BP_DCMonster_Base_With_Options) == 0x000688, "Member 'UGA_FrostSkeletonAxeman_Attack_Loop_C::As_BP_DCMonster_Base_With_Options' has a wrong offset!");
static_assert(offsetof(UGA_FrostSkeletonAxeman_Attack_Loop_C, Attack_Walk_Timer_Handle) == 0x000690, "Member 'UGA_FrostSkeletonAxeman_Attack_Loop_C::Attack_Walk_Timer_Handle' has a wrong offset!");
static_assert(offsetof(UGA_FrostSkeletonAxeman_Attack_Loop_C, Max) == 0x000698, "Member 'UGA_FrostSkeletonAxeman_Attack_Loop_C::Max' has a wrong offset!");
static_assert(offsetof(UGA_FrostSkeletonAxeman_Attack_Loop_C, Min) == 0x0006A0, "Member 'UGA_FrostSkeletonAxeman_Attack_Loop_C::Min' has a wrong offset!");
static_assert(offsetof(UGA_FrostSkeletonAxeman_Attack_Loop_C, Attack_Movement_Timer_Handle) == 0x0006A8, "Member 'UGA_FrostSkeletonAxeman_Attack_Loop_C::Attack_Movement_Timer_Handle' has a wrong offset!");
static_assert(offsetof(UGA_FrostSkeletonAxeman_Attack_Loop_C, Distance_from_Enemy) == 0x0006B0, "Member 'UGA_FrostSkeletonAxeman_Attack_Loop_C::Distance_from_Enemy' has a wrong offset!");
static_assert(offsetof(UGA_FrostSkeletonAxeman_Attack_Loop_C, Range) == 0x0006B8, "Member 'UGA_FrostSkeletonAxeman_Attack_Loop_C::Range' has a wrong offset!");
static_assert(offsetof(UGA_FrostSkeletonAxeman_Attack_Loop_C, AttackFailed) == 0x0006C0, "Member 'UGA_FrostSkeletonAxeman_Attack_Loop_C::AttackFailed' has a wrong offset!");

}

