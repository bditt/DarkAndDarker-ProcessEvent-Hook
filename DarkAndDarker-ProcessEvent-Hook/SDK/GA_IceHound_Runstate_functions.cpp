#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_IceHound_Runstate

#include "Basic.hpp"

#include "GA_IceHound_Runstate_classes.hpp"
#include "GA_IceHound_Runstate_parameters.hpp"


namespace SDK
{

// Function GA_IceHound_Runstate.GA_IceHound_Runstate_C.AbilityActivated
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               TriggerEventData                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_IceHound_Runstate_C::AbilityActivated(const struct FGameplayEventData& TriggerEventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_IceHound_Runstate_C", "AbilityActivated");

	Params::GA_IceHound_Runstate_C_AbilityActivated Parms{};

	Parms.TriggerEventData = std::move(TriggerEventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_IceHound_Runstate.GA_IceHound_Runstate_C.EventReceived_29FED12D4D1526DD7F1B689E0C47D3BC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_IceHound_Runstate_C::EventReceived_29FED12D4D1526DD7F1B689E0C47D3BC(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_IceHound_Runstate_C", "EventReceived_29FED12D4D1526DD7F1B689E0C47D3BC");

	Params::GA_IceHound_Runstate_C_EventReceived_29FED12D4D1526DD7F1B689E0C47D3BC Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_IceHound_Runstate.GA_IceHound_Runstate_C.ExecuteUbergraph_GA_IceHound_Runstate
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_IceHound_Runstate_C::ExecuteUbergraph_GA_IceHound_Runstate(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_IceHound_Runstate_C", "ExecuteUbergraph_GA_IceHound_Runstate");

	Params::GA_IceHound_Runstate_C_ExecuteUbergraph_GA_IceHound_Runstate Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_IceHound_Runstate.GA_IceHound_Runstate_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_IceHound_Runstate_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_IceHound_Runstate_C", "K2_OnEndAbility");

	Params::GA_IceHound_Runstate_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}

}

