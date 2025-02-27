#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_GiantBat_Attack1

#include "Basic.hpp"

#include "GA_GiantBat_Attack1_classes.hpp"
#include "GA_GiantBat_Attack1_parameters.hpp"


namespace SDK
{

// Function GA_GiantBat_Attack1.GA_GiantBat_Attack1_C.AbilityActivated
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               TriggerEventData                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_GiantBat_Attack1_C::AbilityActivated(const struct FGameplayEventData& TriggerEventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_GiantBat_Attack1_C", "AbilityActivated");

	Params::GA_GiantBat_Attack1_C_AbilityActivated Parms{};

	Parms.TriggerEventData = std::move(TriggerEventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_GiantBat_Attack1.GA_GiantBat_Attack1_C.EventReceived_89DFD7BC4DE1144A2B5028AE4B4B0B46
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_GiantBat_Attack1_C::EventReceived_89DFD7BC4DE1144A2B5028AE4B4B0B46(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_GiantBat_Attack1_C", "EventReceived_89DFD7BC4DE1144A2B5028AE4B4B0B46");

	Params::GA_GiantBat_Attack1_C_EventReceived_89DFD7BC4DE1144A2B5028AE4B4B0B46 Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_GiantBat_Attack1.GA_GiantBat_Attack1_C.ExecuteUbergraph_GA_GiantBat_Attack1
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_GiantBat_Attack1_C::ExecuteUbergraph_GA_GiantBat_Attack1(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_GiantBat_Attack1_C", "ExecuteUbergraph_GA_GiantBat_Attack1");

	Params::GA_GiantBat_Attack1_C_ExecuteUbergraph_GA_GiantBat_Attack1 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_GiantBat_Attack1.GA_GiantBat_Attack1_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_GiantBat_Attack1_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_GiantBat_Attack1_C", "K2_OnEndAbility");

	Params::GA_GiantBat_Attack1_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_GiantBat_Attack1.GA_GiantBat_Attack1_C.OnFinish_372A32544DABC7B360308B88A192A4E4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsArrivedDestLocation                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_GiantBat_Attack1_C::OnFinish_372A32544DABC7B360308B88A192A4E4(bool IsArrivedDestLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_GiantBat_Attack1_C", "OnFinish_372A32544DABC7B360308B88A192A4E4");

	Params::GA_GiantBat_Attack1_C_OnFinish_372A32544DABC7B360308B88A192A4E4 Parms{};

	Parms.IsArrivedDestLocation = IsArrivedDestLocation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_GiantBat_Attack1.GA_GiantBat_Attack1_C.OnFinish_A59D6A7B48D10C8B0CB09485131D3822
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsArrivedDestLocation                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_GiantBat_Attack1_C::OnFinish_A59D6A7B48D10C8B0CB09485131D3822(bool IsArrivedDestLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_GiantBat_Attack1_C", "OnFinish_A59D6A7B48D10C8B0CB09485131D3822");

	Params::GA_GiantBat_Attack1_C_OnFinish_A59D6A7B48D10C8B0CB09485131D3822 Parms{};

	Parms.IsArrivedDestLocation = IsArrivedDestLocation;

	UObject::ProcessEvent(Func, &Parms);
}

}

