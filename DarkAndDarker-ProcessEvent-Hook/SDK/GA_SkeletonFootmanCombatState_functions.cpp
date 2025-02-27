#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_SkeletonFootmanCombatState

#include "Basic.hpp"

#include "GA_SkeletonFootmanCombatState_classes.hpp"
#include "GA_SkeletonFootmanCombatState_parameters.hpp"


namespace SDK
{

// Function GA_SkeletonFootmanCombatState.GA_SkeletonFootmanCombatState_C.AbilityActivated
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               TriggerEventData                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_SkeletonFootmanCombatState_C::AbilityActivated(const struct FGameplayEventData& TriggerEventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_SkeletonFootmanCombatState_C", "AbilityActivated");

	Params::GA_SkeletonFootmanCombatState_C_AbilityActivated Parms{};

	Parms.TriggerEventData = std::move(TriggerEventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_SkeletonFootmanCombatState.GA_SkeletonFootmanCombatState_C.EventReceived_9E4607554C20A2BC634F6781302662F9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     EventTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData               EventData                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_SkeletonFootmanCombatState_C::EventReceived_9E4607554C20A2BC634F6781302662F9(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_SkeletonFootmanCombatState_C", "EventReceived_9E4607554C20A2BC634F6781302662F9");

	Params::GA_SkeletonFootmanCombatState_C_EventReceived_9E4607554C20A2BC634F6781302662F9 Parms{};

	Parms.EventTag = std::move(EventTag);
	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_SkeletonFootmanCombatState.GA_SkeletonFootmanCombatState_C.ExecuteUbergraph_GA_SkeletonFootmanCombatState
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_SkeletonFootmanCombatState_C::ExecuteUbergraph_GA_SkeletonFootmanCombatState(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_SkeletonFootmanCombatState_C", "ExecuteUbergraph_GA_SkeletonFootmanCombatState");

	Params::GA_SkeletonFootmanCombatState_C_ExecuteUbergraph_GA_SkeletonFootmanCombatState Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

