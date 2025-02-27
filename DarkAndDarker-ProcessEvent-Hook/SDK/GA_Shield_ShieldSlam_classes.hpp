#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Shield_ShieldSlam

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "DungeonCrawler_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Shield_ShieldSlam.GA_Shield_ShieldSlam_C
// 0x0020 (0x06F0 - 0x06D0)
class UGA_Shield_ShieldSlam_C : public UGA_PlayerCharMeleeAttackBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x06D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FActiveGameplayEffectHandle            Item_Activate_Effect_Handle;                       // 0x06D8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPrimaryAssetId                        Item_Activate_Effect_Id;                           // 0x06E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void AbilityActivated(const struct FGameplayEventData& TriggerEventData);
	void ExecuteUbergraph_GA_Shield_ShieldSlam(int32 EntryPoint);
	void K2_OnEndAbility(bool bWasCancelled);
	void ServerTargetDataReceived(const struct FGameplayTag& EventTag, const struct FGameplayTag& InChannelTag, const struct FGameplayEventData& EventData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Shield_ShieldSlam_C">();
	}
	static class UGA_Shield_ShieldSlam_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Shield_ShieldSlam_C>();
	}
};
static_assert(alignof(UGA_Shield_ShieldSlam_C) == 0x000008, "Wrong alignment on UGA_Shield_ShieldSlam_C");
static_assert(sizeof(UGA_Shield_ShieldSlam_C) == 0x0006F0, "Wrong size on UGA_Shield_ShieldSlam_C");
static_assert(offsetof(UGA_Shield_ShieldSlam_C, UberGraphFrame) == 0x0006D0, "Member 'UGA_Shield_ShieldSlam_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Shield_ShieldSlam_C, Item_Activate_Effect_Handle) == 0x0006D8, "Member 'UGA_Shield_ShieldSlam_C::Item_Activate_Effect_Handle' has a wrong offset!");
static_assert(offsetof(UGA_Shield_ShieldSlam_C, Item_Activate_Effect_Id) == 0x0006E0, "Member 'UGA_Shield_ShieldSlam_C::Item_Activate_Effect_Id' has a wrong offset!");

}

