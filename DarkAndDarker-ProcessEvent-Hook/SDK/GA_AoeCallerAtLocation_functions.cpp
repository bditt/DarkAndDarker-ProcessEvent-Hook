#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_AoeCallerAtLocation

#include "Basic.hpp"

#include "GA_AoeCallerAtLocation_classes.hpp"
#include "GA_AoeCallerAtLocation_parameters.hpp"


namespace SDK
{

// Function GA_AoeCallerAtLocation.GA_AoeCallerAtLocation_C.ExecuteUbergraph_GA_AoeCallerAtLocation
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_AoeCallerAtLocation_C::ExecuteUbergraph_GA_AoeCallerAtLocation(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_AoeCallerAtLocation_C", "ExecuteUbergraph_GA_AoeCallerAtLocation");

	Params::GA_AoeCallerAtLocation_C_ExecuteUbergraph_GA_AoeCallerAtLocation Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_AoeCallerAtLocation.GA_AoeCallerAtLocation_C.Expire
// (BlueprintCallable, BlueprintEvent)

void UGA_AoeCallerAtLocation_C::Expire()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_AoeCallerAtLocation_C", "Expire");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_AoeCallerAtLocation.GA_AoeCallerAtLocation_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_AoeCallerAtLocation_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_AoeCallerAtLocation_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_AoeCallerAtLocation.GA_AoeCallerAtLocation_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_AoeCallerAtLocation_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_AoeCallerAtLocation_C", "K2_OnEndAbility");

	Params::GA_AoeCallerAtLocation_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_AoeCallerAtLocation.GA_AoeCallerAtLocation_C.SpawnAoe
// (BlueprintCallable, BlueprintEvent)

void UGA_AoeCallerAtLocation_C::SpawnAoe()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_AoeCallerAtLocation_C", "SpawnAoe");

	UObject::ProcessEvent(Func, nullptr);
}

}

