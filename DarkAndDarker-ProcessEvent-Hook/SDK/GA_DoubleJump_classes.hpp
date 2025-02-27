#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_DoubleJump

#include "Basic.hpp"

#include "GA_ActivateOnAbilityHandleData_classes.hpp"
#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_DoubleJump.GA_DoubleJump_C
// 0x0010 (0x05B0 - 0x05A0)
class UGA_DoubleJump_C final : public UGA_ActivateOnAbilityHandleData_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x05A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                           EventTag;                                          // 0x05A8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_DoubleJump(int32 EntryPoint);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void K2_OnEndAbility(bool bWasCancelled);
	void OnMovementModeChanged_6F45F25043A9C81BF81F03B1AF335A6D(EMovementMode PrevMovementMode, EMovementMode NewMovementMode);
	void OnMovementModeChanged_81A53C23477AC181BC024094F1E3EEB9(EMovementMode PrevMovementMode, EMovementMode NewMovementMode);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_DoubleJump_C">();
	}
	static class UGA_DoubleJump_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_DoubleJump_C>();
	}
};
static_assert(alignof(UGA_DoubleJump_C) == 0x000008, "Wrong alignment on UGA_DoubleJump_C");
static_assert(sizeof(UGA_DoubleJump_C) == 0x0005B0, "Wrong size on UGA_DoubleJump_C");
static_assert(offsetof(UGA_DoubleJump_C, UberGraphFrame) == 0x0005A0, "Member 'UGA_DoubleJump_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_DoubleJump_C, EventTag) == 0x0005A8, "Member 'UGA_DoubleJump_C::EventTag' has a wrong offset!");

}

