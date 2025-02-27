#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_ElegantReclineRest

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_DCRest_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_ElegantReclineRest.GA_ElegantReclineRest_C
// 0x0008 (0x05E0 - 0x05D8)
class UGA_ElegantReclineRest_C final : public UGA_DCRest_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_ElegantReclineRest_C;            // 0x05D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_GA_ElegantReclineRest(int32 EntryPoint);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void K2_OnEndAbility(bool bWasCancelled);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_ElegantReclineRest_C">();
	}
	static class UGA_ElegantReclineRest_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_ElegantReclineRest_C>();
	}
};
static_assert(alignof(UGA_ElegantReclineRest_C) == 0x000008, "Wrong alignment on UGA_ElegantReclineRest_C");
static_assert(sizeof(UGA_ElegantReclineRest_C) == 0x0005E0, "Wrong size on UGA_ElegantReclineRest_C");
static_assert(offsetof(UGA_ElegantReclineRest_C, UberGraphFrame_GA_ElegantReclineRest_C) == 0x0005D8, "Member 'UGA_ElegantReclineRest_C::UberGraphFrame_GA_ElegantReclineRest_C' has a wrong offset!");

}

