#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_ThornyBrambleDeactivate

#include "Basic.hpp"

#include "GA_ThornyBrambleDeactivate_classes.hpp"
#include "GA_ThornyBrambleDeactivate_parameters.hpp"


namespace SDK
{

// Function GA_ThornyBrambleDeactivate.GA_ThornyBrambleDeactivate_C.ExecuteUbergraph_GA_ThornyBrambleDeactivate
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_ThornyBrambleDeactivate_C::ExecuteUbergraph_GA_ThornyBrambleDeactivate(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_ThornyBrambleDeactivate_C", "ExecuteUbergraph_GA_ThornyBrambleDeactivate");

	Params::GA_ThornyBrambleDeactivate_C_ExecuteUbergraph_GA_ThornyBrambleDeactivate Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_ThornyBrambleDeactivate.GA_ThornyBrambleDeactivate_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_ThornyBrambleDeactivate_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_ThornyBrambleDeactivate_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_ThornyBrambleDeactivate.GA_ThornyBrambleDeactivate_C.OnFinish_E371C157467D14B21AE61BBD68EA0BAF
// (BlueprintCallable, BlueprintEvent)

void UGA_ThornyBrambleDeactivate_C::OnFinish_E371C157467D14B21AE61BBD68EA0BAF()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_ThornyBrambleDeactivate_C", "OnFinish_E371C157467D14B21AE61BBD68EA0BAF");

	UObject::ProcessEvent(Func, nullptr);
}

}

