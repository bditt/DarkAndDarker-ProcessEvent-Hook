#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MoonlightRadiantCloak_Preview

#include "Basic.hpp"

#include "BP_MoonlightRadiantCloak_Preview_classes.hpp"
#include "BP_MoonlightRadiantCloak_Preview_parameters.hpp"


namespace SDK
{

// Function BP_MoonlightRadiantCloak_Preview.BP_MoonlightRadiantCloak_Preview_C.ExecuteUbergraph_BP_MoonlightRadiantCloak_Preview
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MoonlightRadiantCloak_Preview_C::ExecuteUbergraph_BP_MoonlightRadiantCloak_Preview(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MoonlightRadiantCloak_Preview_C", "ExecuteUbergraph_BP_MoonlightRadiantCloak_Preview");

	Params::BP_MoonlightRadiantCloak_Preview_C_ExecuteUbergraph_BP_MoonlightRadiantCloak_Preview Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MoonlightRadiantCloak_Preview.BP_MoonlightRadiantCloak_Preview_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MoonlightRadiantCloak_Preview_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MoonlightRadiantCloak_Preview_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

