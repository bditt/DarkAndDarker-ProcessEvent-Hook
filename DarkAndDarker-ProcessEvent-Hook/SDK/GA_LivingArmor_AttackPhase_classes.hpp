#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_LivingArmor_AttackPhase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "GA_MonsterGameplayAbilityBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_LivingArmor_AttackPhase.GA_LivingArmor_AttackPhase_C
// 0x00D0 (0x0698 - 0x05C8)
class UGA_LivingArmor_AttackPhase_C final : public UGA_MonsterGameplayAbilityBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x05C8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayEventData                     Trigger_Event_Data;                                // 0x05D0(0x00B0)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FGameplayTag>                   Event_Tag;                                         // 0x0680(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class ABP_LivingArmor_C*                      As_BP_Living_Armor;                                // 0x0690(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void AbilityActivated(const struct FGameplayEventData& TriggerEventData);
	void EventReceived_4598DE6E4FE5440D08994A842CB6DB5A(const struct FGameplayEventData& Payload);
	void ExecuteUbergraph_GA_LivingArmor_AttackPhase(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_LivingArmor_AttackPhase_C">();
	}
	static class UGA_LivingArmor_AttackPhase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_LivingArmor_AttackPhase_C>();
	}
};
static_assert(alignof(UGA_LivingArmor_AttackPhase_C) == 0x000008, "Wrong alignment on UGA_LivingArmor_AttackPhase_C");
static_assert(sizeof(UGA_LivingArmor_AttackPhase_C) == 0x000698, "Wrong size on UGA_LivingArmor_AttackPhase_C");
static_assert(offsetof(UGA_LivingArmor_AttackPhase_C, UberGraphFrame) == 0x0005C8, "Member 'UGA_LivingArmor_AttackPhase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_LivingArmor_AttackPhase_C, Trigger_Event_Data) == 0x0005D0, "Member 'UGA_LivingArmor_AttackPhase_C::Trigger_Event_Data' has a wrong offset!");
static_assert(offsetof(UGA_LivingArmor_AttackPhase_C, Event_Tag) == 0x000680, "Member 'UGA_LivingArmor_AttackPhase_C::Event_Tag' has a wrong offset!");
static_assert(offsetof(UGA_LivingArmor_AttackPhase_C, As_BP_Living_Armor) == 0x000690, "Member 'UGA_LivingArmor_AttackPhase_C::As_BP_Living_Armor' has a wrong offset!");

}

