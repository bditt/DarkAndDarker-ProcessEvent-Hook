#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DeathBeetle

#include "Basic.hpp"

#include "BP_DeathBeetle_classes.hpp"
#include "BP_DeathBeetle_parameters.hpp"


namespace SDK
{

// Function BP_DeathBeetle.BP_DeathBeetle_C.ExecuteUbergraph_BP_DeathBeetle
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DeathBeetle_C::ExecuteUbergraph_BP_DeathBeetle(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DeathBeetle_C", "ExecuteUbergraph_BP_DeathBeetle");

	Params::BP_DeathBeetle_C_ExecuteUbergraph_BP_DeathBeetle Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DeathBeetle.BP_DeathBeetle_C.OnBlizzardIndex
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                                   InIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DeathBeetle_C::OnBlizzardIndex(int32 InIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DeathBeetle_C", "OnBlizzardIndex");

	Params::BP_DeathBeetle_C_OnBlizzardIndex Parms{};

	Parms.InIndex = InIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DeathBeetle.BP_DeathBeetle_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_DeathBeetle_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DeathBeetle_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DeathBeetle.BP_DeathBeetle_C.Timeline__FinishedFunc
// (BlueprintEvent)

void ABP_DeathBeetle_C::Timeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DeathBeetle_C", "Timeline__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DeathBeetle.BP_DeathBeetle_C.Timeline__UpdateFunc
// (BlueprintEvent)

void ABP_DeathBeetle_C::Timeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DeathBeetle_C", "Timeline__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DeathBeetle.BP_DeathBeetle_C.Transition
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   CurrentPhaseIndex                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DeathBeetle_C::Transition(int32 CurrentPhaseIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DeathBeetle_C", "Transition");

	Params::BP_DeathBeetle_C_Transition Parms{};

	Parms.CurrentPhaseIndex = CurrentPhaseIndex;

	UObject::ProcessEvent(Func, &Parms);
}

}

