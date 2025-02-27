#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_LanternShieldRiposteAttack01

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_PlayerCharMeleeAttack_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_LanternShieldRiposteAttack01.GA_LanternShieldRiposteAttack01_C
// 0x0008 (0x06D8 - 0x06D0)
class UGA_LanternShieldRiposteAttack01_C final : public UGA_PlayerCharMeleeAttack_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x06D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void AbilityActivated(const struct FGameplayEventData& TriggerEventData);
	void ExecuteUbergraph_GA_LanternShieldRiposteAttack01(int32 EntryPoint);
	void K2_OnEndAbility(bool bWasCancelled);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_LanternShieldRiposteAttack01_C">();
	}
	static class UGA_LanternShieldRiposteAttack01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_LanternShieldRiposteAttack01_C>();
	}
};
static_assert(alignof(UGA_LanternShieldRiposteAttack01_C) == 0x000008, "Wrong alignment on UGA_LanternShieldRiposteAttack01_C");
static_assert(sizeof(UGA_LanternShieldRiposteAttack01_C) == 0x0006D8, "Wrong size on UGA_LanternShieldRiposteAttack01_C");
static_assert(offsetof(UGA_LanternShieldRiposteAttack01_C, UberGraphFrame) == 0x0006D0, "Member 'UGA_LanternShieldRiposteAttack01_C::UberGraphFrame' has a wrong offset!");

}

