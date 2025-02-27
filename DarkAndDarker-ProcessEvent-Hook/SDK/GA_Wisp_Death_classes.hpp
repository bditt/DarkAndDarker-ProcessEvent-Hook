#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Wisp_Death

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_MonsterDeath_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Wisp_Death.GA_Wisp_Death_C
// 0x0020 (0x0610 - 0x05F0)
class UGA_Wisp_Death_C : public UGA_MonsterDeath_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_Wisp_Death_C;                    // 0x05F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class ABP_DCMonsterBaseWithOptions_C*         As_BP_DCMonster_Base_With_Options;                 // 0x05F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             Activate_Effect_Event_Dispatch;                    // 0x0600(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void AbilityActivated(const struct FGameplayEventData& TriggerEventData);
	void Activate_Effect();
	void Activate_Effect_Event_Dispatch__DelegateSignature();
	void EventReceived_A2C3D5EC4D6443972507938CFD3998CA(const struct FGameplayEventData& Payload);
	void ExecuteUbergraph_GA_Wisp_Death(int32 EntryPoint);
	void Pre_BeforeDeath();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Wisp_Death_C">();
	}
	static class UGA_Wisp_Death_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Wisp_Death_C>();
	}
};
static_assert(alignof(UGA_Wisp_Death_C) == 0x000008, "Wrong alignment on UGA_Wisp_Death_C");
static_assert(sizeof(UGA_Wisp_Death_C) == 0x000610, "Wrong size on UGA_Wisp_Death_C");
static_assert(offsetof(UGA_Wisp_Death_C, UberGraphFrame_GA_Wisp_Death_C) == 0x0005F0, "Member 'UGA_Wisp_Death_C::UberGraphFrame_GA_Wisp_Death_C' has a wrong offset!");
static_assert(offsetof(UGA_Wisp_Death_C, As_BP_DCMonster_Base_With_Options) == 0x0005F8, "Member 'UGA_Wisp_Death_C::As_BP_DCMonster_Base_With_Options' has a wrong offset!");
static_assert(offsetof(UGA_Wisp_Death_C, Activate_Effect_Event_Dispatch) == 0x000600, "Member 'UGA_Wisp_Death_C::Activate_Effect_Event_Dispatch' has a wrong offset!");

}

