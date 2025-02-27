#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DoubleAxe_Unique

#include "Basic.hpp"

#include "BP_DoubleAxe_Unique_classes.hpp"
#include "BP_DoubleAxe_Unique_parameters.hpp"


namespace SDK
{

// Function BP_DoubleAxe_Unique.BP_DoubleAxe_Unique_C.Activate
// (BlueprintCallable, BlueprintEvent)

void ABP_DoubleAxe_Unique_C::Activate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DoubleAxe_Unique_C", "Activate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DoubleAxe_Unique.BP_DoubleAxe_Unique_C.Deactivate
// (BlueprintCallable, BlueprintEvent)

void ABP_DoubleAxe_Unique_C::Deactivate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DoubleAxe_Unique_C", "Deactivate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DoubleAxe_Unique.BP_DoubleAxe_Unique_C.ExecuteUbergraph_BP_DoubleAxe_Unique
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DoubleAxe_Unique_C::ExecuteUbergraph_BP_DoubleAxe_Unique(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DoubleAxe_Unique_C", "ExecuteUbergraph_BP_DoubleAxe_Unique");

	Params::BP_DoubleAxe_Unique_C_ExecuteUbergraph_BP_DoubleAxe_Unique Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

