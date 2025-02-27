#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_FrostSkeletonArcher_Firing_Combo

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "DungeonCrawler_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_FrostSkeletonArcher_Firing_Combo.GA_FrostSkeletonArcher_Firing_Combo_C
// 0x00C0 (0x0818 - 0x0758)
class UGA_FrostSkeletonArcher_Firing_Combo_C final : public UGA_MonsterChargedRangedAttackBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0758(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	double                                        Activate_Combo_Ratio;                              // 0x0760(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     Trigger_Event_Data;                                // 0x0768(0x00B0)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void AbilityActivated(const struct FGameplayEventData& TriggerEventData);
	void EventReceived_4A7F528B4538B2EC3C1F3CBCF8A3E8BF(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GA_FrostSkeletonArcher_Firing_Combo(int32 EntryPoint);
	void K2_OnEndAbility(bool bWasCancelled);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_FrostSkeletonArcher_Firing_Combo_C">();
	}
	static class UGA_FrostSkeletonArcher_Firing_Combo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_FrostSkeletonArcher_Firing_Combo_C>();
	}
};
static_assert(alignof(UGA_FrostSkeletonArcher_Firing_Combo_C) == 0x000008, "Wrong alignment on UGA_FrostSkeletonArcher_Firing_Combo_C");
static_assert(sizeof(UGA_FrostSkeletonArcher_Firing_Combo_C) == 0x000818, "Wrong size on UGA_FrostSkeletonArcher_Firing_Combo_C");
static_assert(offsetof(UGA_FrostSkeletonArcher_Firing_Combo_C, UberGraphFrame) == 0x000758, "Member 'UGA_FrostSkeletonArcher_Firing_Combo_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_FrostSkeletonArcher_Firing_Combo_C, Activate_Combo_Ratio) == 0x000760, "Member 'UGA_FrostSkeletonArcher_Firing_Combo_C::Activate_Combo_Ratio' has a wrong offset!");
static_assert(offsetof(UGA_FrostSkeletonArcher_Firing_Combo_C, Trigger_Event_Data) == 0x000768, "Member 'UGA_FrostSkeletonArcher_Firing_Combo_C::Trigger_Event_Data' has a wrong offset!");

}

