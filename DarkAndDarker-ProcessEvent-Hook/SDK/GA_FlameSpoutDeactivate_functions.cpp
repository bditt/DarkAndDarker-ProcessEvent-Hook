#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_FlameSpoutDeactivate

#include "Basic.hpp"

#include "GA_FlameSpoutDeactivate_classes.hpp"
#include "GA_FlameSpoutDeactivate_parameters.hpp"


namespace SDK
{

// Function GA_FlameSpoutDeactivate.GA_FlameSpoutDeactivate_C.EventReceived_BAE8241E4992256FE025C3B5840FF2DD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_FlameSpoutDeactivate_C::EventReceived_BAE8241E4992256FE025C3B5840FF2DD(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_FlameSpoutDeactivate_C", "EventReceived_BAE8241E4992256FE025C3B5840FF2DD");

	Params::GA_FlameSpoutDeactivate_C_EventReceived_BAE8241E4992256FE025C3B5840FF2DD Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_FlameSpoutDeactivate.GA_FlameSpoutDeactivate_C.ExecuteUbergraph_GA_FlameSpoutDeactivate
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_FlameSpoutDeactivate_C::ExecuteUbergraph_GA_FlameSpoutDeactivate(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_FlameSpoutDeactivate_C", "ExecuteUbergraph_GA_FlameSpoutDeactivate");

	Params::GA_FlameSpoutDeactivate_C_ExecuteUbergraph_GA_FlameSpoutDeactivate Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_FlameSpoutDeactivate.GA_FlameSpoutDeactivate_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               EventData                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_FlameSpoutDeactivate_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_FlameSpoutDeactivate_C", "K2_ActivateAbilityFromEvent");

	Params::GA_FlameSpoutDeactivate_C_K2_ActivateAbilityFromEvent Parms{};

	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_FlameSpoutDeactivate.GA_FlameSpoutDeactivate_C.OnFinish_8AD04CB04396038F0C5A4B832DCEC3A2
// (BlueprintCallable, BlueprintEvent)

void UGA_FlameSpoutDeactivate_C::OnFinish_8AD04CB04396038F0C5A4B832DCEC3A2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_FlameSpoutDeactivate_C", "OnFinish_8AD04CB04396038F0C5A4B832DCEC3A2");

	UObject::ProcessEvent(Func, nullptr);
}

}

