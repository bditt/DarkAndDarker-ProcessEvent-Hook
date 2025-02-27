#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_StoneTomb01

#include "Basic.hpp"

#include "ABP_StoneTomb01_classes.hpp"
#include "ABP_StoneTomb01_parameters.hpp"


namespace SDK
{

// Function ABP_StoneTomb01.ABP_StoneTomb01_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        Param_AnimGraph                                        (Parm, OutParm, NoDestructor)

void UABP_StoneTomb01_C::AnimGraph(struct FPoseLink* Param_AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_StoneTomb01_C", "AnimGraph");

	Params::ABP_StoneTomb01_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph != nullptr)
		*Param_AnimGraph = std::move(Parms.Param_AnimGraph);
}


// Function ABP_StoneTomb01.ABP_StoneTomb01_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_StoneTomb01_AnimGraphNode_TransitionResult_7617E39044210A7B7D3E4DA165C6148B
// (BlueprintEvent)

void UABP_StoneTomb01_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_StoneTomb01_AnimGraphNode_TransitionResult_7617E39044210A7B7D3E4DA165C6148B()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_StoneTomb01_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_StoneTomb01_AnimGraphNode_TransitionResult_7617E39044210A7B7D3E4DA165C6148B");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_StoneTomb01.ABP_StoneTomb01_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_StoneTomb01_AnimGraphNode_TransitionResult_8BC0A01143FDF06FADFB11BBBF95DC41
// (BlueprintEvent)

void UABP_StoneTomb01_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_StoneTomb01_AnimGraphNode_TransitionResult_8BC0A01143FDF06FADFB11BBBF95DC41()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_StoneTomb01_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_StoneTomb01_AnimGraphNode_TransitionResult_8BC0A01143FDF06FADFB11BBBF95DC41");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_StoneTomb01.ABP_StoneTomb01_C.ExecuteUbergraph_ABP_StoneTomb01
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_StoneTomb01_C::ExecuteUbergraph_ABP_StoneTomb01(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_StoneTomb01_C", "ExecuteUbergraph_ABP_StoneTomb01");

	Params::ABP_StoneTomb01_C_ExecuteUbergraph_ABP_StoneTomb01 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

