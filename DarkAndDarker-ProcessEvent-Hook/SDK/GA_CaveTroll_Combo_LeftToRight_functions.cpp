#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_CaveTroll_Combo_LeftToRight

#include "Basic.hpp"

#include "GA_CaveTroll_Combo_LeftToRight_classes.hpp"
#include "GA_CaveTroll_Combo_LeftToRight_parameters.hpp"


namespace SDK
{

// Function GA_CaveTroll_Combo_LeftToRight.GA_CaveTroll_Combo_LeftToRight_C.AbilityActivated
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               TriggerEventData                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_CaveTroll_Combo_LeftToRight_C::AbilityActivated(const struct FGameplayEventData& TriggerEventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_CaveTroll_Combo_LeftToRight_C", "AbilityActivated");

	Params::GA_CaveTroll_Combo_LeftToRight_C_AbilityActivated Parms{};

	Parms.TriggerEventData = std::move(TriggerEventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_CaveTroll_Combo_LeftToRight.GA_CaveTroll_Combo_LeftToRight_C.EventReceived_A925733446D6E2DB0FC4F1A7F5CD2C71
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_CaveTroll_Combo_LeftToRight_C::EventReceived_A925733446D6E2DB0FC4F1A7F5CD2C71(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_CaveTroll_Combo_LeftToRight_C", "EventReceived_A925733446D6E2DB0FC4F1A7F5CD2C71");

	Params::GA_CaveTroll_Combo_LeftToRight_C_EventReceived_A925733446D6E2DB0FC4F1A7F5CD2C71 Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_CaveTroll_Combo_LeftToRight.GA_CaveTroll_Combo_LeftToRight_C.ExecuteUbergraph_GA_CaveTroll_Combo_LeftToRight
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_CaveTroll_Combo_LeftToRight_C::ExecuteUbergraph_GA_CaveTroll_Combo_LeftToRight(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_CaveTroll_Combo_LeftToRight_C", "ExecuteUbergraph_GA_CaveTroll_Combo_LeftToRight");

	Params::GA_CaveTroll_Combo_LeftToRight_C_ExecuteUbergraph_GA_CaveTroll_Combo_LeftToRight Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_CaveTroll_Combo_LeftToRight.GA_CaveTroll_Combo_LeftToRight_C.ServerTargetDataReceived
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     EventTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                     InChannelTag                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData               EventData                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_CaveTroll_Combo_LeftToRight_C::ServerTargetDataReceived(const struct FGameplayTag& EventTag, const struct FGameplayTag& InChannelTag, const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_CaveTroll_Combo_LeftToRight_C", "ServerTargetDataReceived");

	Params::GA_CaveTroll_Combo_LeftToRight_C_ServerTargetDataReceived Parms{};

	Parms.EventTag = std::move(EventTag);
	Parms.InChannelTag = std::move(InChannelTag);
	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_CaveTroll_Combo_LeftToRight.GA_CaveTroll_Combo_LeftToRight_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_CaveTroll_Combo_LeftToRight_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_CaveTroll_Combo_LeftToRight_C", "K2_OnEndAbility");

	Params::GA_CaveTroll_Combo_LeftToRight_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}

}

