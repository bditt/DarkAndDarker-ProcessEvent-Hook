#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_ArcaneShield

#include "Basic.hpp"

#include "GA_PlayerSkillInstantAndWaitForEnd_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_ArcaneShield.GA_ArcaneShield_C
// 0x0008 (0x06E8 - 0x06E0)
class UGA_ArcaneShield_C final : public UGA_PlayerSkillInstantAndWaitForEnd_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x06E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_GA_ArcaneShield(int32 EntryPoint);
	void InvalidHandle_7D9C58AD4F43BA6F4618D789299B2871(const struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo);
	void OnRemoved_7D9C58AD4F43BA6F4618D789299B2871(const struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo);
	void ServerOnSkillActivate(const struct FGameplayTag& SkillTag, const struct FGameplayTag& CooldownTag);
	void ShieldBreakAttack();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_ArcaneShield_C">();
	}
	static class UGA_ArcaneShield_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_ArcaneShield_C>();
	}
};
static_assert(alignof(UGA_ArcaneShield_C) == 0x000008, "Wrong alignment on UGA_ArcaneShield_C");
static_assert(sizeof(UGA_ArcaneShield_C) == 0x0006E8, "Wrong size on UGA_ArcaneShield_C");
static_assert(offsetof(UGA_ArcaneShield_C, UberGraphFrame) == 0x0006E0, "Member 'UGA_ArcaneShield_C::UberGraphFrame' has a wrong offset!");

}

