#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_GhostKing_Scream

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_PlayMontageAndWaitForEventBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_GhostKing_Scream.GA_GhostKing_Scream_C
// 0x0018 (0x0690 - 0x0678)
class UGA_GhostKing_Scream_C final : public UGA_PlayMontageAndWaitForEventBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_GhostKing_Scream_C;              // 0x0678(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class ABP_GhostKing_Common_C*                 As_BP_Ghost_King;                                  // 0x0680(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Target;                                            // 0x0688(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void AbilityActivated(const struct FGameplayEventData& TriggerEventData);
	void EventReceived_EF2338D248B93425A4E548942DF6FAB7(const struct FGameplayEventData& Payload);
	void ExecuteUbergraph_GA_GhostKing_Scream(int32 EntryPoint);
	void K2_OnEndAbility(bool bWasCancelled);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_GhostKing_Scream_C">();
	}
	static class UGA_GhostKing_Scream_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_GhostKing_Scream_C>();
	}
};
static_assert(alignof(UGA_GhostKing_Scream_C) == 0x000008, "Wrong alignment on UGA_GhostKing_Scream_C");
static_assert(sizeof(UGA_GhostKing_Scream_C) == 0x000690, "Wrong size on UGA_GhostKing_Scream_C");
static_assert(offsetof(UGA_GhostKing_Scream_C, UberGraphFrame_GA_GhostKing_Scream_C) == 0x000678, "Member 'UGA_GhostKing_Scream_C::UberGraphFrame_GA_GhostKing_Scream_C' has a wrong offset!");
static_assert(offsetof(UGA_GhostKing_Scream_C, As_BP_Ghost_King) == 0x000680, "Member 'UGA_GhostKing_Scream_C::As_BP_Ghost_King' has a wrong offset!");
static_assert(offsetof(UGA_GhostKing_Scream_C, Target) == 0x000688, "Member 'UGA_GhostKing_Scream_C::Target' has a wrong offset!");

}

