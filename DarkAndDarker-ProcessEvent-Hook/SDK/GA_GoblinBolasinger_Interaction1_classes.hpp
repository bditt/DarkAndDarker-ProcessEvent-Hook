#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_GoblinBolasinger_Interaction1

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_PlayMontageAndWaitForEventBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_GoblinBolasinger_Interaction1.GA_GoblinBolasinger_Interaction1_C
// 0x0008 (0x0680 - 0x0678)
class UGA_GoblinBolasinger_Interaction1_C final : public UGA_PlayMontageAndWaitForEventBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_GoblinBolasinger_Interaction1_C; // 0x0678(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void AbilityActivated(const struct FGameplayEventData& TriggerEventData);
	void EventReceived_D02F265B4536722E9A69F8B474E0FEE9(const struct FGameplayEventData& Payload);
	void ExecuteUbergraph_GA_GoblinBolasinger_Interaction1(int32 EntryPoint);
	void K2_OnEndAbility(bool bWasCancelled);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_GoblinBolasinger_Interaction1_C">();
	}
	static class UGA_GoblinBolasinger_Interaction1_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_GoblinBolasinger_Interaction1_C>();
	}
};
static_assert(alignof(UGA_GoblinBolasinger_Interaction1_C) == 0x000008, "Wrong alignment on UGA_GoblinBolasinger_Interaction1_C");
static_assert(sizeof(UGA_GoblinBolasinger_Interaction1_C) == 0x000680, "Wrong size on UGA_GoblinBolasinger_Interaction1_C");
static_assert(offsetof(UGA_GoblinBolasinger_Interaction1_C, UberGraphFrame_GA_GoblinBolasinger_Interaction1_C) == 0x000678, "Member 'UGA_GoblinBolasinger_Interaction1_C::UberGraphFrame_GA_GoblinBolasinger_Interaction1_C' has a wrong offset!");

}

