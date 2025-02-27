#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Cockatrice_Roar

#include "Basic.hpp"

#include "GA_Cockatrice_Roar_classes.hpp"
#include "GA_Cockatrice_Roar_parameters.hpp"


namespace SDK
{

// Function GA_Cockatrice_Roar.GA_Cockatrice_Roar_C.AbilityActivated
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               TriggerEventData                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Cockatrice_Roar_C::AbilityActivated(const struct FGameplayEventData& TriggerEventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Cockatrice_Roar_C", "AbilityActivated");

	Params::GA_Cockatrice_Roar_C_AbilityActivated Parms{};

	Parms.TriggerEventData = std::move(TriggerEventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Cockatrice_Roar.GA_Cockatrice_Roar_C.EventReceived_F5F8C00F4E6E100DC493D8A5F327CBE9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Cockatrice_Roar_C::EventReceived_F5F8C00F4E6E100DC493D8A5F327CBE9(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Cockatrice_Roar_C", "EventReceived_F5F8C00F4E6E100DC493D8A5F327CBE9");

	Params::GA_Cockatrice_Roar_C_EventReceived_F5F8C00F4E6E100DC493D8A5F327CBE9 Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Cockatrice_Roar.GA_Cockatrice_Roar_C.ExecuteUbergraph_GA_Cockatrice_Roar
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Cockatrice_Roar_C::ExecuteUbergraph_GA_Cockatrice_Roar(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Cockatrice_Roar_C", "ExecuteUbergraph_GA_Cockatrice_Roar");

	Params::GA_Cockatrice_Roar_C_ExecuteUbergraph_GA_Cockatrice_Roar Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

