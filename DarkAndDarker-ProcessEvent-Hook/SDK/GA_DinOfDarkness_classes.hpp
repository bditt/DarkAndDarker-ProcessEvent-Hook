#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_DinOfDarkness

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_MusicChanneling_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_DinOfDarkness.GA_DinOfDarkness_C
// 0x0008 (0x0858 - 0x0850)
class UGA_DinOfDarkness_C final : public UGA_MusicChanneling_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0850(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void AbilityActivated(const struct FGameplayEventData& TriggerEventData);
	void EventReceived_AC2364DD4838A9717F249F969D173499(const struct FGameplayEventData& Payload);
	void ExecuteUbergraph_GA_DinOfDarkness(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_DinOfDarkness_C">();
	}
	static class UGA_DinOfDarkness_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_DinOfDarkness_C>();
	}
};
static_assert(alignof(UGA_DinOfDarkness_C) == 0x000008, "Wrong alignment on UGA_DinOfDarkness_C");
static_assert(sizeof(UGA_DinOfDarkness_C) == 0x000858, "Wrong size on UGA_DinOfDarkness_C");
static_assert(offsetof(UGA_DinOfDarkness_C, UberGraphFrame) == 0x000850, "Member 'UGA_DinOfDarkness_C::UberGraphFrame' has a wrong offset!");

}

