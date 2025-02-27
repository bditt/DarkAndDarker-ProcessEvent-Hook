#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_LivingArmor_SlashAttack_L

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "GA_MonsterMeleeAttackBaseWithOptions_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_LivingArmor_SlashAttack_L.GA_LivingArmor_SlashAttack_L_C
// 0x00C8 (0x07E8 - 0x0720)
class UGA_LivingArmor_SlashAttack_L_C final : public UGA_MonsterMeleeAttackBaseWithOptions_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_LivingArmor_SlashAttack_L_C;     // 0x0720(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayEventData                     Trigger_Event_Data;                                // 0x0728(0x00B0)(Edit, BlueprintVisible, DisableEditOnInstance)
	class ABP_LivingArmor_C*                      As_BP_Living_Armor;                                // 0x07D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          Combo_Triggered;                                   // 0x07E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AbilityActivated(const struct FGameplayEventData& TriggerEventData);
	void EventReceived_0C35345F4ED15E10EBC27D9295020FEB(const struct FGameplayEventData& Payload);
	void EventReceived_791AC99F40E23E0F7BE48487AA7A9B37(const struct FGameplayEventData& Payload);
	void ExecuteUbergraph_GA_LivingArmor_SlashAttack_L(int32 EntryPoint);
	void K2_OnEndAbility(bool bWasCancelled);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_LivingArmor_SlashAttack_L_C">();
	}
	static class UGA_LivingArmor_SlashAttack_L_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_LivingArmor_SlashAttack_L_C>();
	}
};
static_assert(alignof(UGA_LivingArmor_SlashAttack_L_C) == 0x000008, "Wrong alignment on UGA_LivingArmor_SlashAttack_L_C");
static_assert(sizeof(UGA_LivingArmor_SlashAttack_L_C) == 0x0007E8, "Wrong size on UGA_LivingArmor_SlashAttack_L_C");
static_assert(offsetof(UGA_LivingArmor_SlashAttack_L_C, UberGraphFrame_GA_LivingArmor_SlashAttack_L_C) == 0x000720, "Member 'UGA_LivingArmor_SlashAttack_L_C::UberGraphFrame_GA_LivingArmor_SlashAttack_L_C' has a wrong offset!");
static_assert(offsetof(UGA_LivingArmor_SlashAttack_L_C, Trigger_Event_Data) == 0x000728, "Member 'UGA_LivingArmor_SlashAttack_L_C::Trigger_Event_Data' has a wrong offset!");
static_assert(offsetof(UGA_LivingArmor_SlashAttack_L_C, As_BP_Living_Armor) == 0x0007D8, "Member 'UGA_LivingArmor_SlashAttack_L_C::As_BP_Living_Armor' has a wrong offset!");
static_assert(offsetof(UGA_LivingArmor_SlashAttack_L_C, Combo_Triggered) == 0x0007E0, "Member 'UGA_LivingArmor_SlashAttack_L_C::Combo_Triggered' has a wrong offset!");

}

