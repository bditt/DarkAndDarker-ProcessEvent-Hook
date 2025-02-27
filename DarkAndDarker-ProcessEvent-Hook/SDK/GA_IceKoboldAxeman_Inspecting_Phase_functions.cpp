#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_IceKoboldAxeman_Inspecting_Phase

#include "Basic.hpp"

#include "GA_IceKoboldAxeman_Inspecting_Phase_classes.hpp"
#include "GA_IceKoboldAxeman_Inspecting_Phase_parameters.hpp"


namespace SDK
{

// Function GA_IceKoboldAxeman_Inspecting_Phase.GA_IceKoboldAxeman_Inspecting_Phase_C.AbilityActivated
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               TriggerEventData                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_IceKoboldAxeman_Inspecting_Phase_C::AbilityActivated(const struct FGameplayEventData& TriggerEventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_IceKoboldAxeman_Inspecting_Phase_C", "AbilityActivated");

	Params::GA_IceKoboldAxeman_Inspecting_Phase_C_AbilityActivated Parms{};

	Parms.TriggerEventData = std::move(TriggerEventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_IceKoboldAxeman_Inspecting_Phase.GA_IceKoboldAxeman_Inspecting_Phase_C.EventReceived_2C109241447FB983C0B334AD76A8BDF8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_IceKoboldAxeman_Inspecting_Phase_C::EventReceived_2C109241447FB983C0B334AD76A8BDF8(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_IceKoboldAxeman_Inspecting_Phase_C", "EventReceived_2C109241447FB983C0B334AD76A8BDF8");

	Params::GA_IceKoboldAxeman_Inspecting_Phase_C_EventReceived_2C109241447FB983C0B334AD76A8BDF8 Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_IceKoboldAxeman_Inspecting_Phase.GA_IceKoboldAxeman_Inspecting_Phase_C.ExecuteUbergraph_GA_IceKoboldAxeman_Inspecting_Phase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_IceKoboldAxeman_Inspecting_Phase_C::ExecuteUbergraph_GA_IceKoboldAxeman_Inspecting_Phase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_IceKoboldAxeman_Inspecting_Phase_C", "ExecuteUbergraph_GA_IceKoboldAxeman_Inspecting_Phase");

	Params::GA_IceKoboldAxeman_Inspecting_Phase_C_ExecuteUbergraph_GA_IceKoboldAxeman_Inspecting_Phase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_IceKoboldAxeman_Inspecting_Phase.GA_IceKoboldAxeman_Inspecting_Phase_C.GA_KoboldStoneAxe_InspectingPhase_AutoGenFunc
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_IceKoboldAxeman_Inspecting_Phase_C::GA_KoboldStoneAxe_InspectingPhase_AutoGenFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_IceKoboldAxeman_Inspecting_Phase_C", "GA_KoboldStoneAxe_InspectingPhase_AutoGenFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_IceKoboldAxeman_Inspecting_Phase.GA_IceKoboldAxeman_Inspecting_Phase_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_IceKoboldAxeman_Inspecting_Phase_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_IceKoboldAxeman_Inspecting_Phase_C", "K2_OnEndAbility");

	Params::GA_IceKoboldAxeman_Inspecting_Phase_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_IceKoboldAxeman_Inspecting_Phase.GA_IceKoboldAxeman_Inspecting_Phase_C.OnFail_A6942E6543705A0366F67F9C03322619
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EPathFollowingResult                    MovementResult                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_IceKoboldAxeman_Inspecting_Phase_C::OnFail_A6942E6543705A0366F67F9C03322619(EPathFollowingResult MovementResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_IceKoboldAxeman_Inspecting_Phase_C", "OnFail_A6942E6543705A0366F67F9C03322619");

	Params::GA_IceKoboldAxeman_Inspecting_Phase_C_OnFail_A6942E6543705A0366F67F9C03322619 Parms{};

	Parms.MovementResult = MovementResult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_IceKoboldAxeman_Inspecting_Phase.GA_IceKoboldAxeman_Inspecting_Phase_C.OnFinish_72D991504DB25B7407C153A7FE45883B
// (BlueprintCallable, BlueprintEvent)

void UGA_IceKoboldAxeman_Inspecting_Phase_C::OnFinish_72D991504DB25B7407C153A7FE45883B()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_IceKoboldAxeman_Inspecting_Phase_C", "OnFinish_72D991504DB25B7407C153A7FE45883B");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_IceKoboldAxeman_Inspecting_Phase.GA_IceKoboldAxeman_Inspecting_Phase_C.OnSuccess_A6942E6543705A0366F67F9C03322619
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EPathFollowingResult                    MovementResult                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_IceKoboldAxeman_Inspecting_Phase_C::OnSuccess_A6942E6543705A0366F67F9C03322619(EPathFollowingResult MovementResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_IceKoboldAxeman_Inspecting_Phase_C", "OnSuccess_A6942E6543705A0366F67F9C03322619");

	Params::GA_IceKoboldAxeman_Inspecting_Phase_C_OnSuccess_A6942E6543705A0366F67F9C03322619 Parms{};

	Parms.MovementResult = MovementResult;

	UObject::ProcessEvent(Func, &Parms);
}

}

