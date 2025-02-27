#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_FrostGiantShielder_Attack2

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "GA_MonsterMeleeAttackBaseWithOptions_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_FrostGiantShielder_Attack2.GA_FrostGiantShielder_Attack2_C
// 0x00C0 (0x07E0 - 0x0720)
class UGA_FrostGiantShielder_Attack2_C final : public UGA_MonsterMeleeAttackBaseWithOptions_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_FrostGiantShielder_Attack2_C;    // 0x0720(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FTimerHandle                           Set_Rotation_Event_TimerHandle;                    // 0x0728(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     Trigger_Event_Data;                                // 0x0730(0x00B0)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void AbilityActivated(const struct FGameplayEventData& TriggerEventData);
	void EventReceived_D8F5FC0D4EAF0B594194478B5CDA0B62(const struct FGameplayEventData& Payload);
	void ExecuteUbergraph_GA_FrostGiantShielder_Attack2(int32 EntryPoint);
	void K2_OnEndAbility(bool bWasCancelled);
	void ServerTargetDataReceived(const struct FGameplayTag& EventTag, const struct FGameplayTag& InChannelTag, const struct FGameplayEventData& EventData);
	void Set_Rotation_Event();
	void StartRotate_Event();
	void StopRotate_Event();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_FrostGiantShielder_Attack2_C">();
	}
	static class UGA_FrostGiantShielder_Attack2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_FrostGiantShielder_Attack2_C>();
	}
};
static_assert(alignof(UGA_FrostGiantShielder_Attack2_C) == 0x000008, "Wrong alignment on UGA_FrostGiantShielder_Attack2_C");
static_assert(sizeof(UGA_FrostGiantShielder_Attack2_C) == 0x0007E0, "Wrong size on UGA_FrostGiantShielder_Attack2_C");
static_assert(offsetof(UGA_FrostGiantShielder_Attack2_C, UberGraphFrame_GA_FrostGiantShielder_Attack2_C) == 0x000720, "Member 'UGA_FrostGiantShielder_Attack2_C::UberGraphFrame_GA_FrostGiantShielder_Attack2_C' has a wrong offset!");
static_assert(offsetof(UGA_FrostGiantShielder_Attack2_C, Set_Rotation_Event_TimerHandle) == 0x000728, "Member 'UGA_FrostGiantShielder_Attack2_C::Set_Rotation_Event_TimerHandle' has a wrong offset!");
static_assert(offsetof(UGA_FrostGiantShielder_Attack2_C, Trigger_Event_Data) == 0x000730, "Member 'UGA_FrostGiantShielder_Attack2_C::Trigger_Event_Data' has a wrong offset!");

}

