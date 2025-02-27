#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_FrostGiantBerserker_Attack_Phase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "GA_MonsterGameplayAbilityBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_FrostGiantBerserker_Attack_Phase.GA_FrostGiantBerserker_Attack_Phase_C
// 0x00C8 (0x0690 - 0x05C8)
class UGA_FrostGiantBerserker_Attack_Phase_C final : public UGA_MonsterGameplayAbilityBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x05C8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayEventData                     Trigger_Event_Data;                                // 0x05D0(0x00B0)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FGameplayTag>                   Close_Attack_Event_Tags;                           // 0x0680(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void AbilityActivated(const struct FGameplayEventData& TriggerEventData);
	void ExecuteUbergraph_GA_FrostGiantBerserker_Attack_Phase(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_FrostGiantBerserker_Attack_Phase_C">();
	}
	static class UGA_FrostGiantBerserker_Attack_Phase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_FrostGiantBerserker_Attack_Phase_C>();
	}
};
static_assert(alignof(UGA_FrostGiantBerserker_Attack_Phase_C) == 0x000008, "Wrong alignment on UGA_FrostGiantBerserker_Attack_Phase_C");
static_assert(sizeof(UGA_FrostGiantBerserker_Attack_Phase_C) == 0x000690, "Wrong size on UGA_FrostGiantBerserker_Attack_Phase_C");
static_assert(offsetof(UGA_FrostGiantBerserker_Attack_Phase_C, UberGraphFrame) == 0x0005C8, "Member 'UGA_FrostGiantBerserker_Attack_Phase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_FrostGiantBerserker_Attack_Phase_C, Trigger_Event_Data) == 0x0005D0, "Member 'UGA_FrostGiantBerserker_Attack_Phase_C::Trigger_Event_Data' has a wrong offset!");
static_assert(offsetof(UGA_FrostGiantBerserker_Attack_Phase_C, Close_Attack_Event_Tags) == 0x000680, "Member 'UGA_FrostGiantBerserker_Attack_Phase_C::Close_Attack_Event_Tags' has a wrong offset!");

}

