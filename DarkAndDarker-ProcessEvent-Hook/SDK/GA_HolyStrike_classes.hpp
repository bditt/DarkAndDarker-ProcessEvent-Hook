#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_HolyStrike

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GA_SpellCastingAndInstall_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_HolyStrike.GA_HolyStrike_C
// 0x0018 (0x0700 - 0x06E8)
class UGA_HolyStrike_C final : public UGA_SpellCastingAndInstall_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_HolyStrike_C;                    // 0x06E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FPrimaryAssetId                        DelayTime;                                         // 0x06F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void Event_Installed_Ground();
	void ExecuteUbergraph_GA_HolyStrike(int32 EntryPoint);
	void OnFinish_A6096E7C4F6846C62F9868846D8D6A90();
	void OnSpellBlasted(const TArray<struct FActiveGameplayEffectHandle>& EffectHandles, const struct FGameplayEventData& EventData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_HolyStrike_C">();
	}
	static class UGA_HolyStrike_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_HolyStrike_C>();
	}
};
static_assert(alignof(UGA_HolyStrike_C) == 0x000008, "Wrong alignment on UGA_HolyStrike_C");
static_assert(sizeof(UGA_HolyStrike_C) == 0x000700, "Wrong size on UGA_HolyStrike_C");
static_assert(offsetof(UGA_HolyStrike_C, UberGraphFrame_GA_HolyStrike_C) == 0x0006E8, "Member 'UGA_HolyStrike_C::UberGraphFrame_GA_HolyStrike_C' has a wrong offset!");
static_assert(offsetof(UGA_HolyStrike_C, DelayTime) == 0x0006F0, "Member 'UGA_HolyStrike_C::DelayTime' has a wrong offset!");

}

