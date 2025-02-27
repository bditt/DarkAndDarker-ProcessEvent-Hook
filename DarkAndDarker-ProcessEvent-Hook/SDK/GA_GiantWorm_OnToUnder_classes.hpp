#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_GiantWorm_OnToUnder

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_PlayMontageAndWaitForEventBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_GiantWorm_OnToUnder.GA_GiantWorm_OnToUnder_C
// 0x0010 (0x0688 - 0x0678)
class UGA_GiantWorm_OnToUnder_C final : public UGA_PlayMontageAndWaitForEventBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_GiantWorm_OnToUnder_C;           // 0x0678(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class ABP_GiantWorm_C*                        As_BP_Giant_Worm;                                  // 0x0680(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void AbilityActivated(const struct FGameplayEventData& TriggerEventData);
	void EventReceived_86C180884578AEE1E4F568AF696F6482(const struct FGameplayEventData& Payload);
	void ExecuteUbergraph_GA_GiantWorm_OnToUnder(int32 EntryPoint);
	void K2_OnEndAbility(bool bWasCancelled);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_GiantWorm_OnToUnder_C">();
	}
	static class UGA_GiantWorm_OnToUnder_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_GiantWorm_OnToUnder_C>();
	}
};
static_assert(alignof(UGA_GiantWorm_OnToUnder_C) == 0x000008, "Wrong alignment on UGA_GiantWorm_OnToUnder_C");
static_assert(sizeof(UGA_GiantWorm_OnToUnder_C) == 0x000688, "Wrong size on UGA_GiantWorm_OnToUnder_C");
static_assert(offsetof(UGA_GiantWorm_OnToUnder_C, UberGraphFrame_GA_GiantWorm_OnToUnder_C) == 0x000678, "Member 'UGA_GiantWorm_OnToUnder_C::UberGraphFrame_GA_GiantWorm_OnToUnder_C' has a wrong offset!");
static_assert(offsetof(UGA_GiantWorm_OnToUnder_C, As_BP_Giant_Worm) == 0x000680, "Member 'UGA_GiantWorm_OnToUnder_C::As_BP_Giant_Worm' has a wrong offset!");

}

