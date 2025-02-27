#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FrostSkeletonGuardmanShield

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_DCItemActor_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_FrostSkeletonGuardmanShield.BP_FrostSkeletonGuardmanShield_C
// 0x0008 (0x0570 - 0x0568)
class ABP_FrostSkeletonGuardmanShield_C : public ABP_DCItemActor_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0568(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_FrostSkeletonGuardmanShield(int32 EntryPoint);
	void GameplayTagUpdated(const struct FGameplayTag& InGameplayTag, int32 InCount);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FrostSkeletonGuardmanShield_C">();
	}
	static class ABP_FrostSkeletonGuardmanShield_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_FrostSkeletonGuardmanShield_C>();
	}
};
static_assert(alignof(ABP_FrostSkeletonGuardmanShield_C) == 0x000008, "Wrong alignment on ABP_FrostSkeletonGuardmanShield_C");
static_assert(sizeof(ABP_FrostSkeletonGuardmanShield_C) == 0x000570, "Wrong size on ABP_FrostSkeletonGuardmanShield_C");
static_assert(offsetof(ABP_FrostSkeletonGuardmanShield_C, UberGraphFrame) == 0x000568, "Member 'ABP_FrostSkeletonGuardmanShield_C::UberGraphFrame' has a wrong offset!");

}

