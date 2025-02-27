#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SurvivalBowArrowProjectile

#include "Basic.hpp"

#include "BP_ProjectileActor_classes.hpp"
#include "Engine_structs.hpp"
#include "AkAudio_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SurvivalBowArrowProjectile.BP_SurvivalBowArrowProjectile_C
// 0x0000 (0x0790 - 0x0790)
class ABP_SurvivalBowArrowProjectile_C final : public ABP_ProjectileActor_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_SurvivalBowArrowProjectile_C;    // 0x0788(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_SurvivalBowArrowProjectile(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SurvivalBowArrowProjectile_C">();
	}
	static class ABP_SurvivalBowArrowProjectile_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SurvivalBowArrowProjectile_C>();
	}
};
static_assert(alignof(ABP_SurvivalBowArrowProjectile_C) == 0x000010, "Wrong alignment on ABP_SurvivalBowArrowProjectile_C");
static_assert(sizeof(ABP_SurvivalBowArrowProjectile_C) == 0x000790, "Wrong size on ABP_SurvivalBowArrowProjectile_C");
static_assert(offsetof(ABP_SurvivalBowArrowProjectile_C, UberGraphFrame_BP_SurvivalBowArrowProjectile_C) == 0x000788, "Member 'ABP_SurvivalBowArrowProjectile_C::UberGraphFrame_BP_SurvivalBowArrowProjectile_C' has a wrong offset!");

}

