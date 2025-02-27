#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_DeathBeetle_AttackState

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_MonsterGameplayAbilityBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_DeathBeetle_AttackState.GA_DeathBeetle_AttackState_C
// 0x0008 (0x05D0 - 0x05C8)
class UGA_DeathBeetle_AttackState_C final : public UGA_MonsterGameplayAbilityBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x05C8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void AbilityActivated(const struct FGameplayEventData& TriggerEventData);
	void EventReceived_39775F904A1DD664E264DAA8ECD95886(const struct FGameplayEventData& Payload);
	void ExecuteUbergraph_GA_DeathBeetle_AttackState(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_DeathBeetle_AttackState_C">();
	}
	static class UGA_DeathBeetle_AttackState_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_DeathBeetle_AttackState_C>();
	}
};
static_assert(alignof(UGA_DeathBeetle_AttackState_C) == 0x000008, "Wrong alignment on UGA_DeathBeetle_AttackState_C");
static_assert(sizeof(UGA_DeathBeetle_AttackState_C) == 0x0005D0, "Wrong size on UGA_DeathBeetle_AttackState_C");
static_assert(offsetof(UGA_DeathBeetle_AttackState_C, UberGraphFrame) == 0x0005C8, "Member 'UGA_DeathBeetle_AttackState_C::UberGraphFrame' has a wrong offset!");

}

