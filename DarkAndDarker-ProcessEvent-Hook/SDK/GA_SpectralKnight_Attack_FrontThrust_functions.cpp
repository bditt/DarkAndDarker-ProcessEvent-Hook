#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_SpectralKnight_Attack_FrontThrust

#include "Basic.hpp"

#include "GA_SpectralKnight_Attack_FrontThrust_classes.hpp"
#include "GA_SpectralKnight_Attack_FrontThrust_parameters.hpp"


namespace SDK
{

// Function GA_SpectralKnight_Attack_FrontThrust.GA_SpectralKnight_Attack_FrontThrust_C.AbilityActivated
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               TriggerEventData                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_SpectralKnight_Attack_FrontThrust_C::AbilityActivated(const struct FGameplayEventData& TriggerEventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_SpectralKnight_Attack_FrontThrust_C", "AbilityActivated");

	Params::GA_SpectralKnight_Attack_FrontThrust_C_AbilityActivated Parms{};

	Parms.TriggerEventData = std::move(TriggerEventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_SpectralKnight_Attack_FrontThrust.GA_SpectralKnight_Attack_FrontThrust_C.EventReceived_2D879A2B45A1EE847A6296B6E47E3ADA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_SpectralKnight_Attack_FrontThrust_C::EventReceived_2D879A2B45A1EE847A6296B6E47E3ADA(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_SpectralKnight_Attack_FrontThrust_C", "EventReceived_2D879A2B45A1EE847A6296B6E47E3ADA");

	Params::GA_SpectralKnight_Attack_FrontThrust_C_EventReceived_2D879A2B45A1EE847A6296B6E47E3ADA Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_SpectralKnight_Attack_FrontThrust.GA_SpectralKnight_Attack_FrontThrust_C.ExecuteUbergraph_GA_SpectralKnight_Attack_FrontThrust
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_SpectralKnight_Attack_FrontThrust_C::ExecuteUbergraph_GA_SpectralKnight_Attack_FrontThrust(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_SpectralKnight_Attack_FrontThrust_C", "ExecuteUbergraph_GA_SpectralKnight_Attack_FrontThrust");

	Params::GA_SpectralKnight_Attack_FrontThrust_C_ExecuteUbergraph_GA_SpectralKnight_Attack_FrontThrust Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_SpectralKnight_Attack_FrontThrust.GA_SpectralKnight_Attack_FrontThrust_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_SpectralKnight_Attack_FrontThrust_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_SpectralKnight_Attack_FrontThrust_C", "K2_OnEndAbility");

	Params::GA_SpectralKnight_Attack_FrontThrust_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}

}

