#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_ChoraleOfClarityGranted

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GA_MusicGranted_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_ChoraleOfClarityGranted.GA_ChoraleOfClarityGranted_C
// 0x0048 (0x0600 - 0x05B8)
class UGA_ChoraleOfClarityGranted_C final : public UGA_MusicGranted_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_ChoraleOfClarityGranted_C;       // 0x05B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FPrimaryAssetId                        SpellRechargeConst;                                // 0x05C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPrimaryAssetId                        SpellRechargeIntervalConst;                        // 0x05D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  EffectActivationTags;                              // 0x05E0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_GA_ChoraleOfClarityGranted(int32 EntryPoint);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void OnFinished_C8B6EBF246016F8671F1C59CA8233EB0(int32 ActionNumber);
	void OnPerformAction_C8B6EBF246016F8671F1C59CA8233EB0(int32 ActionNumber);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_ChoraleOfClarityGranted_C">();
	}
	static class UGA_ChoraleOfClarityGranted_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_ChoraleOfClarityGranted_C>();
	}
};
static_assert(alignof(UGA_ChoraleOfClarityGranted_C) == 0x000008, "Wrong alignment on UGA_ChoraleOfClarityGranted_C");
static_assert(sizeof(UGA_ChoraleOfClarityGranted_C) == 0x000600, "Wrong size on UGA_ChoraleOfClarityGranted_C");
static_assert(offsetof(UGA_ChoraleOfClarityGranted_C, UberGraphFrame_GA_ChoraleOfClarityGranted_C) == 0x0005B8, "Member 'UGA_ChoraleOfClarityGranted_C::UberGraphFrame_GA_ChoraleOfClarityGranted_C' has a wrong offset!");
static_assert(offsetof(UGA_ChoraleOfClarityGranted_C, SpellRechargeConst) == 0x0005C0, "Member 'UGA_ChoraleOfClarityGranted_C::SpellRechargeConst' has a wrong offset!");
static_assert(offsetof(UGA_ChoraleOfClarityGranted_C, SpellRechargeIntervalConst) == 0x0005D0, "Member 'UGA_ChoraleOfClarityGranted_C::SpellRechargeIntervalConst' has a wrong offset!");
static_assert(offsetof(UGA_ChoraleOfClarityGranted_C, EffectActivationTags) == 0x0005E0, "Member 'UGA_ChoraleOfClarityGranted_C::EffectActivationTags' has a wrong offset!");

}

