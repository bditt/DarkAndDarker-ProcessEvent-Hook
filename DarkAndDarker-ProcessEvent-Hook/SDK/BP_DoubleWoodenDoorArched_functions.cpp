#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DoubleWoodenDoorArched

#include "Basic.hpp"

#include "BP_DoubleWoodenDoorArched_classes.hpp"
#include "BP_DoubleWoodenDoorArched_parameters.hpp"


namespace SDK
{

// Function BP_DoubleWoodenDoorArched.BP_DoubleWoodenDoorArched_C.ExecuteUbergraph_BP_DoubleWoodenDoorArched
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DoubleWoodenDoorArched_C::ExecuteUbergraph_BP_DoubleWoodenDoorArched(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DoubleWoodenDoorArched_C", "ExecuteUbergraph_BP_DoubleWoodenDoorArched");

	Params::BP_DoubleWoodenDoorArched_C_ExecuteUbergraph_BP_DoubleWoodenDoorArched Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DoubleWoodenDoorArched.BP_DoubleWoodenDoorArched_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_DoubleWoodenDoorArched_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DoubleWoodenDoorArched_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

