#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_CaveTroll_Attack_SpinningPhase

#include "Basic.hpp"

#include "GA_CaveTroll_Attack_SpinningPhase_classes.hpp"
#include "GA_CaveTroll_Attack_SpinningPhase_parameters.hpp"


namespace SDK
{

// Function GA_CaveTroll_Attack_SpinningPhase.GA_CaveTroll_Attack_SpinningPhase_C.AbilityActivated
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               TriggerEventData                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_CaveTroll_Attack_SpinningPhase_C::AbilityActivated(const struct FGameplayEventData& TriggerEventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_CaveTroll_Attack_SpinningPhase_C", "AbilityActivated");

	Params::GA_CaveTroll_Attack_SpinningPhase_C_AbilityActivated Parms{};

	Parms.TriggerEventData = std::move(TriggerEventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_CaveTroll_Attack_SpinningPhase.GA_CaveTroll_Attack_SpinningPhase_C.EventReceived_5E2CE7824445841FB45C2FA20500B434
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_CaveTroll_Attack_SpinningPhase_C::EventReceived_5E2CE7824445841FB45C2FA20500B434(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_CaveTroll_Attack_SpinningPhase_C", "EventReceived_5E2CE7824445841FB45C2FA20500B434");

	Params::GA_CaveTroll_Attack_SpinningPhase_C_EventReceived_5E2CE7824445841FB45C2FA20500B434 Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_CaveTroll_Attack_SpinningPhase.GA_CaveTroll_Attack_SpinningPhase_C.ExecuteUbergraph_GA_CaveTroll_Attack_SpinningPhase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_CaveTroll_Attack_SpinningPhase_C::ExecuteUbergraph_GA_CaveTroll_Attack_SpinningPhase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_CaveTroll_Attack_SpinningPhase_C", "ExecuteUbergraph_GA_CaveTroll_Attack_SpinningPhase");

	Params::GA_CaveTroll_Attack_SpinningPhase_C_ExecuteUbergraph_GA_CaveTroll_Attack_SpinningPhase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_CaveTroll_Attack_SpinningPhase.GA_CaveTroll_Attack_SpinningPhase_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_CaveTroll_Attack_SpinningPhase_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_CaveTroll_Attack_SpinningPhase_C", "K2_OnEndAbility");

	Params::GA_CaveTroll_Attack_SpinningPhase_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}

}

