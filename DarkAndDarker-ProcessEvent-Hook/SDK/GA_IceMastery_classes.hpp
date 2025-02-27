#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_IceMastery

#include "Basic.hpp"

#include "GA_ActivateOnAbilityHandleData_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_IceMastery.GA_IceMastery_C
// 0x0008 (0x05A8 - 0x05A0)
class UGA_IceMastery_C final : public UGA_ActivateOnAbilityHandleData_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x05A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void EventReceived_412B5870434F7BF51522BC99588BCEB5(const struct FGameplayEventData& Payload);
	void ExecuteUbergraph_GA_IceMastery(int32 EntryPoint);
	void K2_ActivateAbility();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_IceMastery_C">();
	}
	static class UGA_IceMastery_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_IceMastery_C>();
	}
};
static_assert(alignof(UGA_IceMastery_C) == 0x000008, "Wrong alignment on UGA_IceMastery_C");
static_assert(sizeof(UGA_IceMastery_C) == 0x0005A8, "Wrong size on UGA_IceMastery_C");
static_assert(offsetof(UGA_IceMastery_C, UberGraphFrame) == 0x0005A0, "Member 'UGA_IceMastery_C::UberGraphFrame' has a wrong offset!");

}

