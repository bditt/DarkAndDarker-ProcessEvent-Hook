#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_LichCurseState

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "GA_MonsterGameplayAbilityBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_LichCurseState.GA_LichCurseState_C
// 0x0018 (0x05E0 - 0x05C8)
class UGA_LichCurseState_C final : public UGA_MonsterGameplayAbilityBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x05C8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                           Event_Tag;                                         // 0x05D0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_Lich_Common_C*                      As_BP_Lich;                                        // 0x05D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void AbilityActivated(const struct FGameplayEventData& TriggerEventData);
	void EventReceived_9212A9594B6FFC3702D584854BF20D3E(const struct FGameplayEventData& Payload);
	void ExecuteUbergraph_GA_LichCurseState(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_LichCurseState_C">();
	}
	static class UGA_LichCurseState_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_LichCurseState_C>();
	}
};
static_assert(alignof(UGA_LichCurseState_C) == 0x000008, "Wrong alignment on UGA_LichCurseState_C");
static_assert(sizeof(UGA_LichCurseState_C) == 0x0005E0, "Wrong size on UGA_LichCurseState_C");
static_assert(offsetof(UGA_LichCurseState_C, UberGraphFrame) == 0x0005C8, "Member 'UGA_LichCurseState_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_LichCurseState_C, Event_Tag) == 0x0005D0, "Member 'UGA_LichCurseState_C::Event_Tag' has a wrong offset!");
static_assert(offsetof(UGA_LichCurseState_C, As_BP_Lich) == 0x0005D8, "Member 'UGA_LichCurseState_C::As_BP_Lich' has a wrong offset!");

}

