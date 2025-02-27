#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_DemonDog_DashAttack

#include "Basic.hpp"

#include "GA_DemonDog_DashAttack_classes.hpp"
#include "GA_DemonDog_DashAttack_parameters.hpp"


namespace SDK
{

// Function GA_DemonDog_DashAttack.GA_DemonDog_DashAttack_C.AbilityActivated
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               TriggerEventData                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_DemonDog_DashAttack_C::AbilityActivated(const struct FGameplayEventData& TriggerEventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_DemonDog_DashAttack_C", "AbilityActivated");

	Params::GA_DemonDog_DashAttack_C_AbilityActivated Parms{};

	Parms.TriggerEventData = std::move(TriggerEventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_DemonDog_DashAttack.GA_DemonDog_DashAttack_C.EventReceived_6A2D151A41895208B55271BC106A0EF7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_DemonDog_DashAttack_C::EventReceived_6A2D151A41895208B55271BC106A0EF7(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_DemonDog_DashAttack_C", "EventReceived_6A2D151A41895208B55271BC106A0EF7");

	Params::GA_DemonDog_DashAttack_C_EventReceived_6A2D151A41895208B55271BC106A0EF7 Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_DemonDog_DashAttack.GA_DemonDog_DashAttack_C.ExecuteUbergraph_GA_DemonDog_DashAttack
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_DemonDog_DashAttack_C::ExecuteUbergraph_GA_DemonDog_DashAttack(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_DemonDog_DashAttack_C", "ExecuteUbergraph_GA_DemonDog_DashAttack");

	Params::GA_DemonDog_DashAttack_C_ExecuteUbergraph_GA_DemonDog_DashAttack Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_DemonDog_DashAttack.GA_DemonDog_DashAttack_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_DemonDog_DashAttack_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_DemonDog_DashAttack_C", "K2_OnEndAbility");

	Params::GA_DemonDog_DashAttack_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}

}

