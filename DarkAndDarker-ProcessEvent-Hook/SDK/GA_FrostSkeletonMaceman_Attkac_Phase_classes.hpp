#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_FrostSkeletonMaceman_Attkac_Phase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "GA_MonsterGameplayAbilityBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_FrostSkeletonMaceman_Attkac_Phase.GA_FrostSkeletonMaceman_Attkac_Phase_C
// 0x00B8 (0x0680 - 0x05C8)
class UGA_FrostSkeletonMaceman_Attkac_Phase_C final : public UGA_MonsterGameplayAbilityBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x05C8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayEventData                     Trigger_Event_Data;                                // 0x05D0(0x00B0)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void AbilityActivated(const struct FGameplayEventData& TriggerEventData);
	void EventReceived_AFC1890F42B04DEF7C7F5687E6967E2D(const struct FGameplayEventData& Payload);
	void ExecuteUbergraph_GA_FrostSkeletonMaceman_Attkac_Phase(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_FrostSkeletonMaceman_Attkac_Phase_C">();
	}
	static class UGA_FrostSkeletonMaceman_Attkac_Phase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_FrostSkeletonMaceman_Attkac_Phase_C>();
	}
};
static_assert(alignof(UGA_FrostSkeletonMaceman_Attkac_Phase_C) == 0x000008, "Wrong alignment on UGA_FrostSkeletonMaceman_Attkac_Phase_C");
static_assert(sizeof(UGA_FrostSkeletonMaceman_Attkac_Phase_C) == 0x000680, "Wrong size on UGA_FrostSkeletonMaceman_Attkac_Phase_C");
static_assert(offsetof(UGA_FrostSkeletonMaceman_Attkac_Phase_C, UberGraphFrame) == 0x0005C8, "Member 'UGA_FrostSkeletonMaceman_Attkac_Phase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_FrostSkeletonMaceman_Attkac_Phase_C, Trigger_Event_Data) == 0x0005D0, "Member 'UGA_FrostSkeletonMaceman_Attkac_Phase_C::Trigger_Event_Data' has a wrong offset!");

}

