#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Mimic_Medium_Block

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_PlayMontageAndWaitForEventBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Mimic_Medium_Block.GA_Mimic_Medium_Block_C
// 0x0008 (0x0680 - 0x0678)
class UGA_Mimic_Medium_Block_C final : public UGA_PlayMontageAndWaitForEventBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_Mimic_Medium_Block_C;            // 0x0678(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void AbilityActivated(const struct FGameplayEventData& TriggerEventData);
	void EventReceived_A9DA7C014F460F86E96E0591DAE16358(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GA_Mimic_Medium_Block(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Mimic_Medium_Block_C">();
	}
	static class UGA_Mimic_Medium_Block_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Mimic_Medium_Block_C>();
	}
};
static_assert(alignof(UGA_Mimic_Medium_Block_C) == 0x000008, "Wrong alignment on UGA_Mimic_Medium_Block_C");
static_assert(sizeof(UGA_Mimic_Medium_Block_C) == 0x000680, "Wrong size on UGA_Mimic_Medium_Block_C");
static_assert(offsetof(UGA_Mimic_Medium_Block_C, UberGraphFrame_GA_Mimic_Medium_Block_C) == 0x000678, "Member 'UGA_Mimic_Medium_Block_C::UberGraphFrame_GA_Mimic_Medium_Block_C' has a wrong offset!");

}

