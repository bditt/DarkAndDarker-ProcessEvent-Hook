#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_ThornBarrier_Deactivate

#include "Basic.hpp"

#include "GA_ThornBarrier_Deactivate_classes.hpp"
#include "GA_ThornBarrier_Deactivate_parameters.hpp"


namespace SDK
{

// Function GA_ThornBarrier_Deactivate.GA_ThornBarrier_Deactivate_C.ExecuteUbergraph_GA_ThornBarrier_Deactivate
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_ThornBarrier_Deactivate_C::ExecuteUbergraph_GA_ThornBarrier_Deactivate(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_ThornBarrier_Deactivate_C", "ExecuteUbergraph_GA_ThornBarrier_Deactivate");

	Params::GA_ThornBarrier_Deactivate_C_ExecuteUbergraph_GA_ThornBarrier_Deactivate Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_ThornBarrier_Deactivate.GA_ThornBarrier_Deactivate_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_ThornBarrier_Deactivate_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_ThornBarrier_Deactivate_C", "K2_OnEndAbility");

	Params::GA_ThornBarrier_Deactivate_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}

}

