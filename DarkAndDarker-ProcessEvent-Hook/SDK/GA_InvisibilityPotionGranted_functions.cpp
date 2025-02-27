#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_InvisibilityPotionGranted

#include "Basic.hpp"

#include "GA_InvisibilityPotionGranted_classes.hpp"
#include "GA_InvisibilityPotionGranted_parameters.hpp"


namespace SDK
{

// Function GA_InvisibilityPotionGranted.GA_InvisibilityPotionGranted_C.ExecuteUbergraph_GA_InvisibilityPotionGranted
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_InvisibilityPotionGranted_C::ExecuteUbergraph_GA_InvisibilityPotionGranted(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_InvisibilityPotionGranted_C", "ExecuteUbergraph_GA_InvisibilityPotionGranted");

	Params::GA_InvisibilityPotionGranted_C_ExecuteUbergraph_GA_InvisibilityPotionGranted Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_InvisibilityPotionGranted.GA_InvisibilityPotionGranted_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               EventData                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_InvisibilityPotionGranted_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_InvisibilityPotionGranted_C", "K2_ActivateAbilityFromEvent");

	Params::GA_InvisibilityPotionGranted_C_K2_ActivateAbilityFromEvent Parms{};

	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_InvisibilityPotionGranted.GA_InvisibilityPotionGranted_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_InvisibilityPotionGranted_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_InvisibilityPotionGranted_C", "K2_OnEndAbility");

	Params::GA_InvisibilityPotionGranted_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_InvisibilityPotionGranted.GA_InvisibilityPotionGranted_C.OnChange_2A946EE74ABF944157D8C4A9D3B54AD9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   OldValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   NewValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_InvisibilityPotionGranted_C::OnChange_2A946EE74ABF944157D8C4A9D3B54AD9(float OldValue, float NewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_InvisibilityPotionGranted_C", "OnChange_2A946EE74ABF944157D8C4A9D3B54AD9");

	Params::GA_InvisibilityPotionGranted_C_OnChange_2A946EE74ABF944157D8C4A9D3B54AD9 Parms{};

	Parms.OldValue = OldValue;
	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_InvisibilityPotionGranted.GA_InvisibilityPotionGranted_C.OnVelocityChange_F4B28BF1497069E0F790FB9D0EDFEB73
// (BlueprintCallable, BlueprintEvent)

void UGA_InvisibilityPotionGranted_C::OnVelocityChange_F4B28BF1497069E0F790FB9D0EDFEB73()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_InvisibilityPotionGranted_C", "OnVelocityChange_F4B28BF1497069E0F790FB9D0EDFEB73");

	UObject::ProcessEvent(Func, nullptr);
}

}

