#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_SkeletonRoyalGuard_SoulPass

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_MonsterProjectileAttackBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_SkeletonRoyalGuard_SoulPass.GA_SkeletonRoyalGuard_SoulPass_C
// 0x0008 (0x0850 - 0x0848)
class UGA_SkeletonRoyalGuard_SoulPass_C final : public UGA_MonsterProjectileAttackBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_SkeletonRoyalGuard_SoulPass_C;   // 0x0848(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void AbilityActivated(const struct FGameplayEventData& TriggerEventData);
	void ExecuteUbergraph_GA_SkeletonRoyalGuard_SoulPass(int32 EntryPoint);
	void K2_OnEndAbility(bool bWasCancelled);
	void OnSuccess_9EBD3ADF4752405F227DB8A792D798D8(class AActor* ProjectileActor);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_SkeletonRoyalGuard_SoulPass_C">();
	}
	static class UGA_SkeletonRoyalGuard_SoulPass_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_SkeletonRoyalGuard_SoulPass_C>();
	}
};
static_assert(alignof(UGA_SkeletonRoyalGuard_SoulPass_C) == 0x000008, "Wrong alignment on UGA_SkeletonRoyalGuard_SoulPass_C");
static_assert(sizeof(UGA_SkeletonRoyalGuard_SoulPass_C) == 0x000850, "Wrong size on UGA_SkeletonRoyalGuard_SoulPass_C");
static_assert(offsetof(UGA_SkeletonRoyalGuard_SoulPass_C, UberGraphFrame_GA_SkeletonRoyalGuard_SoulPass_C) == 0x000848, "Member 'UGA_SkeletonRoyalGuard_SoulPass_C::UberGraphFrame_GA_SkeletonRoyalGuard_SoulPass_C' has a wrong offset!");

}

