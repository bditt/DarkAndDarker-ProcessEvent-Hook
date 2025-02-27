#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FrozenTorch

#include "Basic.hpp"

#include "BP_FrozenTorch_classes.hpp"
#include "BP_FrozenTorch_parameters.hpp"


namespace SDK
{

// Function BP_FrozenTorch.BP_FrozenTorch_C.ExecuteUbergraph_BP_FrozenTorch
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FrozenTorch_C::ExecuteUbergraph_BP_FrozenTorch(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FrozenTorch_C", "ExecuteUbergraph_BP_FrozenTorch");

	Params::BP_FrozenTorch_C_ExecuteUbergraph_BP_FrozenTorch Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FrozenTorch.BP_FrozenTorch_C.FX_UpdateMaterial
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsActivating                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FrozenTorch_C::FX_UpdateMaterial(bool IsActivating)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FrozenTorch_C", "FX_UpdateMaterial");

	Params::BP_FrozenTorch_C_FX_UpdateMaterial Parms{};

	Parms.IsActivating = IsActivating;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FrozenTorch.BP_FrozenTorch_C.Timeline__FinishedFunc
// (BlueprintEvent)

void ABP_FrozenTorch_C::Timeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FrozenTorch_C", "Timeline__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FrozenTorch.BP_FrozenTorch_C.Timeline__UpdateFunc
// (BlueprintEvent)

void ABP_FrozenTorch_C::Timeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FrozenTorch_C", "Timeline__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}

}

