#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_CaveTroll_AddImpactPower

#include "Basic.hpp"

#include "GA_CaveTroll_AddImpactPower_classes.hpp"
#include "GA_CaveTroll_AddImpactPower_parameters.hpp"


namespace SDK
{

// Function GA_CaveTroll_AddImpactPower.GA_CaveTroll_AddImpactPower_C.AbilityActivated
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               TriggerEventData                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_CaveTroll_AddImpactPower_C::AbilityActivated(const struct FGameplayEventData& TriggerEventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_CaveTroll_AddImpactPower_C", "AbilityActivated");

	Params::GA_CaveTroll_AddImpactPower_C_AbilityActivated Parms{};

	Parms.TriggerEventData = std::move(TriggerEventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_CaveTroll_AddImpactPower.GA_CaveTroll_AddImpactPower_C.ExecuteUbergraph_GA_CaveTroll_AddImpactPower
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_CaveTroll_AddImpactPower_C::ExecuteUbergraph_GA_CaveTroll_AddImpactPower(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_CaveTroll_AddImpactPower_C", "ExecuteUbergraph_GA_CaveTroll_AddImpactPower");

	Params::GA_CaveTroll_AddImpactPower_C_ExecuteUbergraph_GA_CaveTroll_AddImpactPower Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

