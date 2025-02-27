#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DrawbridgeWheel

#include "Basic.hpp"

#include "BP_DrawbridgeWheel_classes.hpp"
#include "BP_DrawbridgeWheel_parameters.hpp"


namespace SDK
{

// Function BP_DrawbridgeWheel.BP_DrawbridgeWheel_C.ExecuteUbergraph_BP_DrawbridgeWheel
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DrawbridgeWheel_C::ExecuteUbergraph_BP_DrawbridgeWheel(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DrawbridgeWheel_C", "ExecuteUbergraph_BP_DrawbridgeWheel");

	Params::BP_DrawbridgeWheel_C_ExecuteUbergraph_BP_DrawbridgeWheel Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DrawbridgeWheel.BP_DrawbridgeWheel_C.OnWheelACtionStart
// (BlueprintEvent)

void ABP_DrawbridgeWheel_C::OnWheelACtionStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DrawbridgeWheel_C", "OnWheelACtionStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DrawbridgeWheel.BP_DrawbridgeWheel_C.OnWheelACtionStop
// (BlueprintEvent)

void ABP_DrawbridgeWheel_C::OnWheelACtionStop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DrawbridgeWheel_C", "OnWheelACtionStop");

	UObject::ProcessEvent(Func, nullptr);
}

}

