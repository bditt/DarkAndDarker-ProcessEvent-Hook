#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_SkeletonRoyalGuard_Spawn

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_PlayMontageAndWaitForEventBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_SkeletonRoyalGuard_Spawn.GA_SkeletonRoyalGuard_Spawn_C
// 0x0008 (0x0680 - 0x0678)
class UGA_SkeletonRoyalGuard_Spawn_C final : public UGA_PlayMontageAndWaitForEventBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_SkeletonRoyalGuard_Spawn_C;      // 0x0678(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void AbilityActivated(const struct FGameplayEventData& TriggerEventData);
	void ExecuteUbergraph_GA_SkeletonRoyalGuard_Spawn(int32 EntryPoint);
	void K2_OnEndAbility(bool bWasCancelled);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_SkeletonRoyalGuard_Spawn_C">();
	}
	static class UGA_SkeletonRoyalGuard_Spawn_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_SkeletonRoyalGuard_Spawn_C>();
	}
};
static_assert(alignof(UGA_SkeletonRoyalGuard_Spawn_C) == 0x000008, "Wrong alignment on UGA_SkeletonRoyalGuard_Spawn_C");
static_assert(sizeof(UGA_SkeletonRoyalGuard_Spawn_C) == 0x000680, "Wrong size on UGA_SkeletonRoyalGuard_Spawn_C");
static_assert(offsetof(UGA_SkeletonRoyalGuard_Spawn_C, UberGraphFrame_GA_SkeletonRoyalGuard_Spawn_C) == 0x000678, "Member 'UGA_SkeletonRoyalGuard_Spawn_C::UberGraphFrame_GA_SkeletonRoyalGuard_Spawn_C' has a wrong offset!");

}

