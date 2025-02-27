#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_FrostSkeletonArcher_Firing_Attack

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "DungeonCrawler_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_FrostSkeletonArcher_Firing_Attack.GA_FrostSkeletonArcher_Firing_Attack_C
// 0x00C0 (0x0818 - 0x0758)
class UGA_FrostSkeletonArcher_Firing_Attack_C final : public UGA_MonsterChargedRangedAttackBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0758(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayEventData                     Trigger_Event_Data;                                // 0x0760(0x00B0)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                        Activate_Combo_Ratio;                              // 0x0810(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AbilityActivated(const struct FGameplayEventData& TriggerEventData);
	void EventReceived_6C012C494C4184BDD75F09A09D6C3BC2(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GA_FrostSkeletonArcher_Firing_Attack(int32 EntryPoint);
	void K2_OnEndAbility(bool bWasCancelled);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_FrostSkeletonArcher_Firing_Attack_C">();
	}
	static class UGA_FrostSkeletonArcher_Firing_Attack_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_FrostSkeletonArcher_Firing_Attack_C>();
	}
};
static_assert(alignof(UGA_FrostSkeletonArcher_Firing_Attack_C) == 0x000008, "Wrong alignment on UGA_FrostSkeletonArcher_Firing_Attack_C");
static_assert(sizeof(UGA_FrostSkeletonArcher_Firing_Attack_C) == 0x000818, "Wrong size on UGA_FrostSkeletonArcher_Firing_Attack_C");
static_assert(offsetof(UGA_FrostSkeletonArcher_Firing_Attack_C, UberGraphFrame) == 0x000758, "Member 'UGA_FrostSkeletonArcher_Firing_Attack_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_FrostSkeletonArcher_Firing_Attack_C, Trigger_Event_Data) == 0x000760, "Member 'UGA_FrostSkeletonArcher_Firing_Attack_C::Trigger_Event_Data' has a wrong offset!");
static_assert(offsetof(UGA_FrostSkeletonArcher_Firing_Attack_C, Activate_Combo_Ratio) == 0x000810, "Member 'UGA_FrostSkeletonArcher_Firing_Attack_C::Activate_Combo_Ratio' has a wrong offset!");

}

