#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_GhostKing_Teleport

#include "Basic.hpp"

#include "GA_GhostKing_Teleport_classes.hpp"
#include "GA_GhostKing_Teleport_parameters.hpp"


namespace SDK
{

// Function GA_GhostKing_Teleport.GA_GhostKing_Teleport_C.AbilityActivated
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               TriggerEventData                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_GhostKing_Teleport_C::AbilityActivated(const struct FGameplayEventData& TriggerEventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_GhostKing_Teleport_C", "AbilityActivated");

	Params::GA_GhostKing_Teleport_C_AbilityActivated Parms{};

	Parms.TriggerEventData = std::move(TriggerEventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_GhostKing_Teleport.GA_GhostKing_Teleport_C.EventReceived_A1697A204058999C82AF6E9CBAC06768
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_GhostKing_Teleport_C::EventReceived_A1697A204058999C82AF6E9CBAC06768(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_GhostKing_Teleport_C", "EventReceived_A1697A204058999C82AF6E9CBAC06768");

	Params::GA_GhostKing_Teleport_C_EventReceived_A1697A204058999C82AF6E9CBAC06768 Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_GhostKing_Teleport.GA_GhostKing_Teleport_C.ExecuteUbergraph_GA_GhostKing_Teleport
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_GhostKing_Teleport_C::ExecuteUbergraph_GA_GhostKing_Teleport(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_GhostKing_Teleport_C", "ExecuteUbergraph_GA_GhostKing_Teleport");

	Params::GA_GhostKing_Teleport_C_ExecuteUbergraph_GA_GhostKing_Teleport Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_GhostKing_Teleport.GA_GhostKing_Teleport_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_GhostKing_Teleport_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_GhostKing_Teleport_C", "K2_OnEndAbility");

	Params::GA_GhostKing_Teleport_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_GhostKing_Teleport.GA_GhostKing_Teleport_C.Move Timer
// (BlueprintCallable, BlueprintEvent)

void UGA_GhostKing_Teleport_C::Move_Timer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_GhostKing_Teleport_C", "Move Timer");

	UObject::ProcessEvent(Func, nullptr);
}

}

