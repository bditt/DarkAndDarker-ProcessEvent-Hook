#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Yeti_RunAttack

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_MonsterMeleeAttackBaseWithOptions_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Yeti_RunAttack.GA_Yeti_RunAttack_C
// 0x0008 (0x0728 - 0x0720)
class UGA_Yeti_RunAttack_C final : public UGA_MonsterMeleeAttackBaseWithOptions_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_Yeti_RunAttack_C;                // 0x0720(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_GA_Yeti_RunAttack(int32 EntryPoint);
	void ServerTargetDataReceived(const struct FGameplayTag& EventTag, const struct FGameplayTag& InChannelTag, const struct FGameplayEventData& EventData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Yeti_RunAttack_C">();
	}
	static class UGA_Yeti_RunAttack_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Yeti_RunAttack_C>();
	}
};
static_assert(alignof(UGA_Yeti_RunAttack_C) == 0x000008, "Wrong alignment on UGA_Yeti_RunAttack_C");
static_assert(sizeof(UGA_Yeti_RunAttack_C) == 0x000728, "Wrong size on UGA_Yeti_RunAttack_C");
static_assert(offsetof(UGA_Yeti_RunAttack_C, UberGraphFrame_GA_Yeti_RunAttack_C) == 0x000720, "Member 'UGA_Yeti_RunAttack_C::UberGraphFrame_GA_Yeti_RunAttack_C' has a wrong offset!");

}

