#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Mummy_Attack5_Long

#include "Basic.hpp"

#include "GA_Mummy_Attack5_Long_classes.hpp"
#include "GA_Mummy_Attack5_Long_parameters.hpp"


namespace SDK
{

// Function GA_Mummy_Attack5_Long.GA_Mummy_Attack5_Long_C.ExecuteUbergraph_GA_Mummy_Attack5_Long
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Mummy_Attack5_Long_C::ExecuteUbergraph_GA_Mummy_Attack5_Long(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Mummy_Attack5_Long_C", "ExecuteUbergraph_GA_Mummy_Attack5_Long");

	Params::GA_Mummy_Attack5_Long_C_ExecuteUbergraph_GA_Mummy_Attack5_Long Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Mummy_Attack5_Long.GA_Mummy_Attack5_Long_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Mummy_Attack5_Long_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Mummy_Attack5_Long_C", "K2_OnEndAbility");

	Params::GA_Mummy_Attack5_Long_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}

}

