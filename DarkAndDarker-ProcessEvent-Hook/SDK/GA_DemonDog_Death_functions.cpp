#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_DemonDog_Death

#include "Basic.hpp"

#include "GA_DemonDog_Death_classes.hpp"
#include "GA_DemonDog_Death_parameters.hpp"


namespace SDK
{

// Function GA_DemonDog_Death.GA_DemonDog_Death_C.ExecuteUbergraph_GA_DemonDog_Death
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_DemonDog_Death_C::ExecuteUbergraph_GA_DemonDog_Death(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_DemonDog_Death_C", "ExecuteUbergraph_GA_DemonDog_Death");

	Params::GA_DemonDog_Death_C_ExecuteUbergraph_GA_DemonDog_Death Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_DemonDog_Death.GA_DemonDog_Death_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_DemonDog_Death_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_DemonDog_Death_C", "K2_OnEndAbility");

	Params::GA_DemonDog_Death_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}

}

