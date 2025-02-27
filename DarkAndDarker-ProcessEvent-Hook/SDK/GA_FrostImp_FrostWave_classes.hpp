#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_FrostImp_FrostWave

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_MonsterGameplayAbilityBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_FrostImp_FrostWave.GA_FrostImp_FrostWave_C
// 0x0018 (0x05E0 - 0x05C8)
class UGA_FrostImp_FrostWave_C final : public UGA_MonsterGameplayAbilityBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x05C8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class ABP_FrostImp_Common_C*                  As_BP_FrostImp;                                    // 0x05D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           Timer_Handle;                                      // 0x05D8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void AbilityActivated(const struct FGameplayEventData& TriggerEventData);
	void ExecuteUbergraph_GA_FrostImp_FrostWave(int32 EntryPoint);
	void K2_OnEndAbility(bool bWasCancelled);
	void Radius();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_FrostImp_FrostWave_C">();
	}
	static class UGA_FrostImp_FrostWave_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_FrostImp_FrostWave_C>();
	}
};
static_assert(alignof(UGA_FrostImp_FrostWave_C) == 0x000008, "Wrong alignment on UGA_FrostImp_FrostWave_C");
static_assert(sizeof(UGA_FrostImp_FrostWave_C) == 0x0005E0, "Wrong size on UGA_FrostImp_FrostWave_C");
static_assert(offsetof(UGA_FrostImp_FrostWave_C, UberGraphFrame) == 0x0005C8, "Member 'UGA_FrostImp_FrostWave_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_FrostImp_FrostWave_C, As_BP_FrostImp) == 0x0005D0, "Member 'UGA_FrostImp_FrostWave_C::As_BP_FrostImp' has a wrong offset!");
static_assert(offsetof(UGA_FrostImp_FrostWave_C, Timer_Handle) == 0x0005D8, "Member 'UGA_FrostImp_FrostWave_C::Timer_Handle' has a wrong offset!");

}

