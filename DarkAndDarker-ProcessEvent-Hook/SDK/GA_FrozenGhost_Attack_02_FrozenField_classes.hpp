#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_FrozenGhost_Attack_02_FrozenField

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_AoeCallerAtLocationFromMontage_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_FrozenGhost_Attack_02_FrozenField.GA_FrozenGhost_Attack_02_FrozenField_C
// 0x0008 (0x0700 - 0x06F8)
class UGA_FrozenGhost_Attack_02_FrozenField_C final : public UGA_AoeCallerAtLocationFromMontage_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_FrozenGhost_Attack_02_FrozenField_C; // 0x06F8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void AbilityActivated(const struct FGameplayEventData& TriggerEventData);
	void EventReceived_E66B8FA44B2D9AE4E308F2A075C1A5E9(const struct FGameplayEventData& Payload);
	void ExecuteUbergraph_GA_FrozenGhost_Attack_02_FrozenField(int32 EntryPoint);
	void K2_OnEndAbility(bool bWasCancelled);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_FrozenGhost_Attack_02_FrozenField_C">();
	}
	static class UGA_FrozenGhost_Attack_02_FrozenField_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_FrozenGhost_Attack_02_FrozenField_C>();
	}
};
static_assert(alignof(UGA_FrozenGhost_Attack_02_FrozenField_C) == 0x000008, "Wrong alignment on UGA_FrozenGhost_Attack_02_FrozenField_C");
static_assert(sizeof(UGA_FrozenGhost_Attack_02_FrozenField_C) == 0x000700, "Wrong size on UGA_FrozenGhost_Attack_02_FrozenField_C");
static_assert(offsetof(UGA_FrozenGhost_Attack_02_FrozenField_C, UberGraphFrame_GA_FrozenGhost_Attack_02_FrozenField_C) == 0x0006F8, "Member 'UGA_FrozenGhost_Attack_02_FrozenField_C::UberGraphFrame_GA_FrozenGhost_Attack_02_FrozenField_C' has a wrong offset!");

}

