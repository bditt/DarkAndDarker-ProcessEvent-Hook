#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_AdrenalineRush

#include "Basic.hpp"

#include "GA_AdrenalineRush_classes.hpp"
#include "GA_AdrenalineRush_parameters.hpp"


namespace SDK
{

// Function GA_AdrenalineRush.GA_AdrenalineRush_C.ExecuteUbergraph_GA_AdrenalineRush
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_AdrenalineRush_C::ExecuteUbergraph_GA_AdrenalineRush(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_AdrenalineRush_C", "ExecuteUbergraph_GA_AdrenalineRush");

	Params::GA_AdrenalineRush_C_ExecuteUbergraph_GA_AdrenalineRush Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_AdrenalineRush.GA_AdrenalineRush_C.ServerBuffRemoved
// (Event, Protected, BlueprintEvent)

void UGA_AdrenalineRush_C::ServerBuffRemoved()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_AdrenalineRush_C", "ServerBuffRemoved");

	UObject::ProcessEvent(Func, nullptr);
}

}

