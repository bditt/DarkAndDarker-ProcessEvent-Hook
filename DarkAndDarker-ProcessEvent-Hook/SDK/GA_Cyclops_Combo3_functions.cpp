#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Cyclops_Combo3

#include "Basic.hpp"

#include "GA_Cyclops_Combo3_classes.hpp"
#include "GA_Cyclops_Combo3_parameters.hpp"


namespace SDK
{

// Function GA_Cyclops_Combo3.GA_Cyclops_Combo3_C.AbilityActivated
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               TriggerEventData                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Cyclops_Combo3_C::AbilityActivated(const struct FGameplayEventData& TriggerEventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Cyclops_Combo3_C", "AbilityActivated");

	Params::GA_Cyclops_Combo3_C_AbilityActivated Parms{};

	Parms.TriggerEventData = std::move(TriggerEventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Cyclops_Combo3.GA_Cyclops_Combo3_C.EventReceived_A6930F72446214E44EC8D1BE7F5D8603
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Cyclops_Combo3_C::EventReceived_A6930F72446214E44EC8D1BE7F5D8603(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Cyclops_Combo3_C", "EventReceived_A6930F72446214E44EC8D1BE7F5D8603");

	Params::GA_Cyclops_Combo3_C_EventReceived_A6930F72446214E44EC8D1BE7F5D8603 Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Cyclops_Combo3.GA_Cyclops_Combo3_C.ExecuteUbergraph_GA_Cyclops_Combo3
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Cyclops_Combo3_C::ExecuteUbergraph_GA_Cyclops_Combo3(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Cyclops_Combo3_C", "ExecuteUbergraph_GA_Cyclops_Combo3");

	Params::GA_Cyclops_Combo3_C_ExecuteUbergraph_GA_Cyclops_Combo3 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

