#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_ResurrectionBless

#include "Basic.hpp"

#include "GA_ResurrectionBless_classes.hpp"
#include "GA_ResurrectionBless_parameters.hpp"


namespace SDK
{

// Function GA_ResurrectionBless.GA_ResurrectionBless_C.AbilityActivated
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               TriggerEventData                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_ResurrectionBless_C::AbilityActivated(const struct FGameplayEventData& TriggerEventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_ResurrectionBless_C", "AbilityActivated");

	Params::GA_ResurrectionBless_C_AbilityActivated Parms{};

	Parms.TriggerEventData = std::move(TriggerEventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_ResurrectionBless.GA_ResurrectionBless_C.ExecuteUbergraph_GA_ResurrectionBless
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_ResurrectionBless_C::ExecuteUbergraph_GA_ResurrectionBless(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_ResurrectionBless_C", "ExecuteUbergraph_GA_ResurrectionBless");

	Params::GA_ResurrectionBless_C_ExecuteUbergraph_GA_ResurrectionBless Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

