#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Drawbridge

#include "Basic.hpp"

#include "BP_Drawbridge_classes.hpp"
#include "BP_Drawbridge_parameters.hpp"


namespace SDK
{

// Function BP_Drawbridge.BP_Drawbridge_C.ExecuteUbergraph_BP_Drawbridge
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Drawbridge_C::ExecuteUbergraph_BP_Drawbridge(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Drawbridge_C", "ExecuteUbergraph_BP_Drawbridge");

	Params::BP_Drawbridge_C_ExecuteUbergraph_BP_Drawbridge Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Drawbridge.BP_Drawbridge_C.OnDrawbridgeActionStart
// (BlueprintEvent)

void ABP_Drawbridge_C::OnDrawbridgeActionStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Drawbridge_C", "OnDrawbridgeActionStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Drawbridge.BP_Drawbridge_C.OnDrawbridgeActionStop
// (BlueprintEvent)

void ABP_Drawbridge_C::OnDrawbridgeActionStop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Drawbridge_C", "OnDrawbridgeActionStop");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Drawbridge.BP_Drawbridge_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Drawbridge_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Drawbridge_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

