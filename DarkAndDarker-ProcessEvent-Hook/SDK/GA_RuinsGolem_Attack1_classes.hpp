#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_RuinsGolem_Attack1

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "GA_MonsterMeleeAttackBaseWithOptions_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_RuinsGolem_Attack1.GA_RuinsGolem_Attack1_C
// 0x0020 (0x0740 - 0x0720)
class UGA_RuinsGolem_Attack1_C final : public UGA_MonsterMeleeAttackBaseWithOptions_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_RuinsGolem_Attack1_C;            // 0x0720(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                 Payload_Target;                                    // 0x0728(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           Event_Tag;                                         // 0x0730(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          Combo_Triggered;                                   // 0x0738(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AbilityActivated(const struct FGameplayEventData& TriggerEventData);
	void EventReceived_53FD2F1343110844299A5DB46AFBE721(const struct FGameplayEventData& Payload);
	void ExecuteUbergraph_GA_RuinsGolem_Attack1(int32 EntryPoint);
	void K2_OnEndAbility(bool bWasCancelled);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_RuinsGolem_Attack1_C">();
	}
	static class UGA_RuinsGolem_Attack1_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_RuinsGolem_Attack1_C>();
	}
};
static_assert(alignof(UGA_RuinsGolem_Attack1_C) == 0x000008, "Wrong alignment on UGA_RuinsGolem_Attack1_C");
static_assert(sizeof(UGA_RuinsGolem_Attack1_C) == 0x000740, "Wrong size on UGA_RuinsGolem_Attack1_C");
static_assert(offsetof(UGA_RuinsGolem_Attack1_C, UberGraphFrame_GA_RuinsGolem_Attack1_C) == 0x000720, "Member 'UGA_RuinsGolem_Attack1_C::UberGraphFrame_GA_RuinsGolem_Attack1_C' has a wrong offset!");
static_assert(offsetof(UGA_RuinsGolem_Attack1_C, Payload_Target) == 0x000728, "Member 'UGA_RuinsGolem_Attack1_C::Payload_Target' has a wrong offset!");
static_assert(offsetof(UGA_RuinsGolem_Attack1_C, Event_Tag) == 0x000730, "Member 'UGA_RuinsGolem_Attack1_C::Event_Tag' has a wrong offset!");
static_assert(offsetof(UGA_RuinsGolem_Attack1_C, Combo_Triggered) == 0x000738, "Member 'UGA_RuinsGolem_Attack1_C::Combo_Triggered' has a wrong offset!");

}

