#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_IceKoboldAxeman_Calling_Base

#include "Basic.hpp"

#include "GA_IceKoboldAxeman_Calling_Base_classes.hpp"
#include "GA_IceKoboldAxeman_Calling_Base_parameters.hpp"


namespace SDK
{

// Function GA_IceKoboldAxeman_Calling_Base.GA_IceKoboldAxeman_Calling_Base_C.AbilityActivated
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               TriggerEventData                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_IceKoboldAxeman_Calling_Base_C::AbilityActivated(const struct FGameplayEventData& TriggerEventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_IceKoboldAxeman_Calling_Base_C", "AbilityActivated");

	Params::GA_IceKoboldAxeman_Calling_Base_C_AbilityActivated Parms{};

	Parms.TriggerEventData = std::move(TriggerEventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_IceKoboldAxeman_Calling_Base.GA_IceKoboldAxeman_Calling_Base_C.ExecuteUbergraph_GA_IceKoboldAxeman_Calling_Base
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_IceKoboldAxeman_Calling_Base_C::ExecuteUbergraph_GA_IceKoboldAxeman_Calling_Base(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_IceKoboldAxeman_Calling_Base_C", "ExecuteUbergraph_GA_IceKoboldAxeman_Calling_Base");

	Params::GA_IceKoboldAxeman_Calling_Base_C_ExecuteUbergraph_GA_IceKoboldAxeman_Calling_Base Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_IceKoboldAxeman_Calling_Base.GA_IceKoboldAxeman_Calling_Base_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_IceKoboldAxeman_Calling_Base_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_IceKoboldAxeman_Calling_Base_C", "K2_OnEndAbility");

	Params::GA_IceKoboldAxeman_Calling_Base_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}

}

