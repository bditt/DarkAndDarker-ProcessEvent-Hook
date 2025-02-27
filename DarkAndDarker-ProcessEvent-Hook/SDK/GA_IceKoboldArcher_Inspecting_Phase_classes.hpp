#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_IceKoboldArcher_Inspecting_Phase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "GA_MonsterGameplayAbilityBase_classes.hpp"
#include "AIModule_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_IceKoboldArcher_Inspecting_Phase.GA_IceKoboldArcher_Inspecting_Phase_C
// 0x0038 (0x0600 - 0x05C8)
class UGA_IceKoboldArcher_Inspecting_Phase_C final : public UGA_MonsterGameplayAbilityBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x05C8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                           Event_Tag;                                         // 0x05D0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Destination;                                       // 0x05D8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           Stop_Movement_Timer_Handle;                        // 0x05F0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_WaitDelay*                 Delay_Async_Task;                                  // 0x05F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void AbilityActivated(const struct FGameplayEventData& TriggerEventData);
	void EventReceived_27A433494BF58B181FFD1D81C7114E58(const struct FGameplayEventData& Payload);
	void ExecuteUbergraph_GA_IceKoboldArcher_Inspecting_Phase(int32 EntryPoint);
	void GA_IceKoboldWoodenBowman_InspectingPhase_AutoGenFunc();
	void K2_OnEndAbility(bool bWasCancelled);
	void OnFail_F5224183471A7F29FF993E954C5E3AC3(EPathFollowingResult MovementResult);
	void OnFinish_B2751D7F4D6C10508BA446B107E4E738();
	void OnSuccess_F5224183471A7F29FF993E954C5E3AC3(EPathFollowingResult MovementResult);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_IceKoboldArcher_Inspecting_Phase_C">();
	}
	static class UGA_IceKoboldArcher_Inspecting_Phase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_IceKoboldArcher_Inspecting_Phase_C>();
	}
};
static_assert(alignof(UGA_IceKoboldArcher_Inspecting_Phase_C) == 0x000008, "Wrong alignment on UGA_IceKoboldArcher_Inspecting_Phase_C");
static_assert(sizeof(UGA_IceKoboldArcher_Inspecting_Phase_C) == 0x000600, "Wrong size on UGA_IceKoboldArcher_Inspecting_Phase_C");
static_assert(offsetof(UGA_IceKoboldArcher_Inspecting_Phase_C, UberGraphFrame) == 0x0005C8, "Member 'UGA_IceKoboldArcher_Inspecting_Phase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_IceKoboldArcher_Inspecting_Phase_C, Event_Tag) == 0x0005D0, "Member 'UGA_IceKoboldArcher_Inspecting_Phase_C::Event_Tag' has a wrong offset!");
static_assert(offsetof(UGA_IceKoboldArcher_Inspecting_Phase_C, Destination) == 0x0005D8, "Member 'UGA_IceKoboldArcher_Inspecting_Phase_C::Destination' has a wrong offset!");
static_assert(offsetof(UGA_IceKoboldArcher_Inspecting_Phase_C, Stop_Movement_Timer_Handle) == 0x0005F0, "Member 'UGA_IceKoboldArcher_Inspecting_Phase_C::Stop_Movement_Timer_Handle' has a wrong offset!");
static_assert(offsetof(UGA_IceKoboldArcher_Inspecting_Phase_C, Delay_Async_Task) == 0x0005F8, "Member 'UGA_IceKoboldArcher_Inspecting_Phase_C::Delay_Async_Task' has a wrong offset!");

}

