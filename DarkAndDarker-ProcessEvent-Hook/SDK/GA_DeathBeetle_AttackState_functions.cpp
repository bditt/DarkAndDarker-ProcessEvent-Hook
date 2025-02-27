#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_DeathBeetle_AttackState

#include "Basic.hpp"

#include "GA_DeathBeetle_AttackState_classes.hpp"
#include "GA_DeathBeetle_AttackState_parameters.hpp"


namespace SDK
{

// Function GA_DeathBeetle_AttackState.GA_DeathBeetle_AttackState_C.AbilityActivated
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               TriggerEventData                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_DeathBeetle_AttackState_C::AbilityActivated(const struct FGameplayEventData& TriggerEventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_DeathBeetle_AttackState_C", "AbilityActivated");

	Params::GA_DeathBeetle_AttackState_C_AbilityActivated Parms{};

	Parms.TriggerEventData = std::move(TriggerEventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_DeathBeetle_AttackState.GA_DeathBeetle_AttackState_C.EventReceived_39775F904A1DD664E264DAA8ECD95886
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_DeathBeetle_AttackState_C::EventReceived_39775F904A1DD664E264DAA8ECD95886(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_DeathBeetle_AttackState_C", "EventReceived_39775F904A1DD664E264DAA8ECD95886");

	Params::GA_DeathBeetle_AttackState_C_EventReceived_39775F904A1DD664E264DAA8ECD95886 Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_DeathBeetle_AttackState.GA_DeathBeetle_AttackState_C.ExecuteUbergraph_GA_DeathBeetle_AttackState
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_DeathBeetle_AttackState_C::ExecuteUbergraph_GA_DeathBeetle_AttackState(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_DeathBeetle_AttackState_C", "ExecuteUbergraph_GA_DeathBeetle_AttackState");

	Params::GA_DeathBeetle_AttackState_C_ExecuteUbergraph_GA_DeathBeetle_AttackState Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

