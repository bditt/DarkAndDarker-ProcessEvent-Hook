#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_DivineStrike

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_SpellCasting_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_DivineStrike.GA_DivineStrike_C
// 0x0008 (0x0670 - 0x0668)
class UGA_DivineStrike_C final : public UGA_SpellCasting_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0668(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void AbilityActivated_BP(const struct FGameplayEventData& TriggerEventData, bool bIsSocketSightBlocked);
	void Cancelled_2B68FF8B419907B9CD8B50B7178829B0(const struct FGameplayAbilityTargetDataHandle& Data);
	void ExecuteUbergraph_GA_DivineStrike(int32 EntryPoint);
	void ValidData_2B68FF8B419907B9CD8B50B7178829B0(const struct FGameplayAbilityTargetDataHandle& Data);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_DivineStrike_C">();
	}
	static class UGA_DivineStrike_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_DivineStrike_C>();
	}
};
static_assert(alignof(UGA_DivineStrike_C) == 0x000008, "Wrong alignment on UGA_DivineStrike_C");
static_assert(sizeof(UGA_DivineStrike_C) == 0x000670, "Wrong size on UGA_DivineStrike_C");
static_assert(offsetof(UGA_DivineStrike_C, UberGraphFrame) == 0x000668, "Member 'UGA_DivineStrike_C::UberGraphFrame' has a wrong offset!");

}

