#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_FrostWalker_IceCloud

#include "Basic.hpp"

#include "GA_FrostWalker_IceCloud_classes.hpp"
#include "GA_FrostWalker_IceCloud_parameters.hpp"


namespace SDK
{

// Function GA_FrostWalker_IceCloud.GA_FrostWalker_IceCloud_C.ExecuteUbergraph_GA_FrostWalker_IceCloud
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_FrostWalker_IceCloud_C::ExecuteUbergraph_GA_FrostWalker_IceCloud(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_FrostWalker_IceCloud_C", "ExecuteUbergraph_GA_FrostWalker_IceCloud");

	Params::GA_FrostWalker_IceCloud_C_ExecuteUbergraph_GA_FrostWalker_IceCloud Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_FrostWalker_IceCloud.GA_FrostWalker_IceCloud_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_FrostWalker_IceCloud_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_FrostWalker_IceCloud_C", "K2_OnEndAbility");

	Params::GA_FrostWalker_IceCloud_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}

}

