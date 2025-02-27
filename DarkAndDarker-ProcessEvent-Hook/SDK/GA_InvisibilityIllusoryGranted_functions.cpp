#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_InvisibilityIllusoryGranted

#include "Basic.hpp"

#include "GA_InvisibilityIllusoryGranted_classes.hpp"
#include "GA_InvisibilityIllusoryGranted_parameters.hpp"


namespace SDK
{

// Function GA_InvisibilityIllusoryGranted.GA_InvisibilityIllusoryGranted_C.ExecuteUbergraph_GA_InvisibilityIllusoryGranted
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_InvisibilityIllusoryGranted_C::ExecuteUbergraph_GA_InvisibilityIllusoryGranted(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_InvisibilityIllusoryGranted_C", "ExecuteUbergraph_GA_InvisibilityIllusoryGranted");

	Params::GA_InvisibilityIllusoryGranted_C_ExecuteUbergraph_GA_InvisibilityIllusoryGranted Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_InvisibilityIllusoryGranted.GA_InvisibilityIllusoryGranted_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               EventData                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_InvisibilityIllusoryGranted_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_InvisibilityIllusoryGranted_C", "K2_ActivateAbilityFromEvent");

	Params::GA_InvisibilityIllusoryGranted_C_K2_ActivateAbilityFromEvent Parms{};

	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_InvisibilityIllusoryGranted.GA_InvisibilityIllusoryGranted_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_InvisibilityIllusoryGranted_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_InvisibilityIllusoryGranted_C", "K2_OnEndAbility");

	Params::GA_InvisibilityIllusoryGranted_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_InvisibilityIllusoryGranted.GA_InvisibilityIllusoryGranted_C.OnChange_6171E4F94DECB8195FD5B5964C23B80F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   OldValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   NewValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_InvisibilityIllusoryGranted_C::OnChange_6171E4F94DECB8195FD5B5964C23B80F(float OldValue, float NewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_InvisibilityIllusoryGranted_C", "OnChange_6171E4F94DECB8195FD5B5964C23B80F");

	Params::GA_InvisibilityIllusoryGranted_C_OnChange_6171E4F94DECB8195FD5B5964C23B80F Parms{};

	Parms.OldValue = OldValue;
	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);
}

}

