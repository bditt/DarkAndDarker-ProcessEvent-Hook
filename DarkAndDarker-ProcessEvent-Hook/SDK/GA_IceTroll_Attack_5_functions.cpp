#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_IceTroll_Attack_5

#include "Basic.hpp"

#include "GA_IceTroll_Attack_5_classes.hpp"
#include "GA_IceTroll_Attack_5_parameters.hpp"


namespace SDK
{

// Function GA_IceTroll_Attack_5.GA_IceTroll_Attack_5_C.ExecuteUbergraph_GA_IceTroll_Attack_5
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_IceTroll_Attack_5_C::ExecuteUbergraph_GA_IceTroll_Attack_5(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_IceTroll_Attack_5_C", "ExecuteUbergraph_GA_IceTroll_Attack_5");

	Params::GA_IceTroll_Attack_5_C_ExecuteUbergraph_GA_IceTroll_Attack_5 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_IceTroll_Attack_5.GA_IceTroll_Attack_5_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_IceTroll_Attack_5_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_IceTroll_Attack_5_C", "K2_OnEndAbility");

	Params::GA_IceTroll_Attack_5_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}

}

