#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_GhostKing_EarthQuake

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GA_PlayMontageAndWaitForEventBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_GhostKing_EarthQuake.GA_GhostKing_EarthQuake_C
// 0x0028 (0x06A0 - 0x0678)
class UGA_GhostKing_EarthQuake_C final : public UGA_PlayMontageAndWaitForEventBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_GhostKing_EarthQuake_C;          // 0x0678(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class ABP_GhostKing_Common_C*                 As_BP_Ghost_King;                                  // 0x0680(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_GameSpawner_C*                      Spawner;                                           // 0x0688(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPrimaryAssetId                        In_Monster_Id;                                     // 0x0690(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void AbilityActivated(const struct FGameplayEventData& TriggerEventData);
	void EventReceived_A76EDFB5460926AE7B38D69A78D29398(const struct FGameplayEventData& Payload);
	void EventReceived_A902270D42A9465CE85A55A3BFA70716(const struct FGameplayEventData& Payload);
	void ExecuteUbergraph_GA_GhostKing_EarthQuake(int32 EntryPoint);
	void K2_OnEndAbility(bool bWasCancelled);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_GhostKing_EarthQuake_C">();
	}
	static class UGA_GhostKing_EarthQuake_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_GhostKing_EarthQuake_C>();
	}
};
static_assert(alignof(UGA_GhostKing_EarthQuake_C) == 0x000008, "Wrong alignment on UGA_GhostKing_EarthQuake_C");
static_assert(sizeof(UGA_GhostKing_EarthQuake_C) == 0x0006A0, "Wrong size on UGA_GhostKing_EarthQuake_C");
static_assert(offsetof(UGA_GhostKing_EarthQuake_C, UberGraphFrame_GA_GhostKing_EarthQuake_C) == 0x000678, "Member 'UGA_GhostKing_EarthQuake_C::UberGraphFrame_GA_GhostKing_EarthQuake_C' has a wrong offset!");
static_assert(offsetof(UGA_GhostKing_EarthQuake_C, As_BP_Ghost_King) == 0x000680, "Member 'UGA_GhostKing_EarthQuake_C::As_BP_Ghost_King' has a wrong offset!");
static_assert(offsetof(UGA_GhostKing_EarthQuake_C, Spawner) == 0x000688, "Member 'UGA_GhostKing_EarthQuake_C::Spawner' has a wrong offset!");
static_assert(offsetof(UGA_GhostKing_EarthQuake_C, In_Monster_Id) == 0x000690, "Member 'UGA_GhostKing_EarthQuake_C::In_Monster_Id' has a wrong offset!");

}

