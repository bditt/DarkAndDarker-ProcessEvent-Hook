#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_SkeletonWarlord_Order_Bombing

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_PlayMontageAndWaitForEventBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_SkeletonWarlord_Order_Bombing.GA_SkeletonWarlord_Order_Bombing_C
// 0x0008 (0x0680 - 0x0678)
class UGA_SkeletonWarlord_Order_Bombing_C final : public UGA_PlayMontageAndWaitForEventBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_SkeletonWarlord_Order_Bombing_C; // 0x0678(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void AbilityActivated(const struct FGameplayEventData& TriggerEventData);
	void EventReceived_BCFAC1BA463673E3C7CDE086F73B792E(const struct FGameplayEventData& Payload);
	void ExecuteUbergraph_GA_SkeletonWarlord_Order_Bombing(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_SkeletonWarlord_Order_Bombing_C">();
	}
	static class UGA_SkeletonWarlord_Order_Bombing_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_SkeletonWarlord_Order_Bombing_C>();
	}
};
static_assert(alignof(UGA_SkeletonWarlord_Order_Bombing_C) == 0x000008, "Wrong alignment on UGA_SkeletonWarlord_Order_Bombing_C");
static_assert(sizeof(UGA_SkeletonWarlord_Order_Bombing_C) == 0x000680, "Wrong size on UGA_SkeletonWarlord_Order_Bombing_C");
static_assert(offsetof(UGA_SkeletonWarlord_Order_Bombing_C, UberGraphFrame_GA_SkeletonWarlord_Order_Bombing_C) == 0x000678, "Member 'UGA_SkeletonWarlord_Order_Bombing_C::UberGraphFrame_GA_SkeletonWarlord_Order_Bombing_C' has a wrong offset!");

}

