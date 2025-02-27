#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_LivingStatue_AttackPhase

#include "Basic.hpp"

#include "GA_LivingStatue_AttackPhase_classes.hpp"
#include "GA_LivingStatue_AttackPhase_parameters.hpp"


namespace SDK
{

// Function GA_LivingStatue_AttackPhase.GA_LivingStatue_AttackPhase_C.AbilityActivated
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               TriggerEventData                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_LivingStatue_AttackPhase_C::AbilityActivated(const struct FGameplayEventData& TriggerEventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_LivingStatue_AttackPhase_C", "AbilityActivated");

	Params::GA_LivingStatue_AttackPhase_C_AbilityActivated Parms{};

	Parms.TriggerEventData = std::move(TriggerEventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_LivingStatue_AttackPhase.GA_LivingStatue_AttackPhase_C.EventReceived_805E085F4F1B5723369105A0F8D9B70D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     EventTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData               EventData                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_LivingStatue_AttackPhase_C::EventReceived_805E085F4F1B5723369105A0F8D9B70D(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_LivingStatue_AttackPhase_C", "EventReceived_805E085F4F1B5723369105A0F8D9B70D");

	Params::GA_LivingStatue_AttackPhase_C_EventReceived_805E085F4F1B5723369105A0F8D9B70D Parms{};

	Parms.EventTag = std::move(EventTag);
	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_LivingStatue_AttackPhase.GA_LivingStatue_AttackPhase_C.ExecuteUbergraph_GA_LivingStatue_AttackPhase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_LivingStatue_AttackPhase_C::ExecuteUbergraph_GA_LivingStatue_AttackPhase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_LivingStatue_AttackPhase_C", "ExecuteUbergraph_GA_LivingStatue_AttackPhase");

	Params::GA_LivingStatue_AttackPhase_C_ExecuteUbergraph_GA_LivingStatue_AttackPhase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_LivingStatue_AttackPhase.GA_LivingStatue_AttackPhase_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_LivingStatue_AttackPhase_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_LivingStatue_AttackPhase_C", "K2_OnEndAbility");

	Params::GA_LivingStatue_AttackPhase_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_LivingStatue_AttackPhase.GA_LivingStatue_AttackPhase_C.�@t��
// (BlueprintCallable, BlueprintEvent)

void UGA_LivingStatue_AttackPhase_C::___t__()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_LivingStatue_AttackPhase_C", "�@t��");

	UObject::ProcessEvent(Func, nullptr);
}

}

