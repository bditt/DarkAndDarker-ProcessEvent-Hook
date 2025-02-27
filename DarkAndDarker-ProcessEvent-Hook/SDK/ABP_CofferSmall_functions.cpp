#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_CofferSmall

#include "Basic.hpp"

#include "ABP_CofferSmall_classes.hpp"
#include "ABP_CofferSmall_parameters.hpp"


namespace SDK
{

// Function ABP_CofferSmall.ABP_CofferSmall_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        Param_AnimGraph                                        (Parm, OutParm, NoDestructor)

void UABP_CofferSmall_C::AnimGraph(struct FPoseLink* Param_AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_CofferSmall_C", "AnimGraph");

	Params::ABP_CofferSmall_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph != nullptr)
		*Param_AnimGraph = std::move(Parms.Param_AnimGraph);
}


// Function ABP_CofferSmall.ABP_CofferSmall_C.BlueprintBeginPlay
// (Event, Public, BlueprintEvent)

void UABP_CofferSmall_C::BlueprintBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_CofferSmall_C", "BlueprintBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_CofferSmall.ABP_CofferSmall_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CofferSmall_AnimGraphNode_TransitionResult_07FCEC9F4DCC35FF060F3FB5028E163E
// (BlueprintEvent)

void UABP_CofferSmall_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CofferSmall_AnimGraphNode_TransitionResult_07FCEC9F4DCC35FF060F3FB5028E163E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_CofferSmall_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CofferSmall_AnimGraphNode_TransitionResult_07FCEC9F4DCC35FF060F3FB5028E163E");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_CofferSmall.ABP_CofferSmall_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CofferSmall_AnimGraphNode_TransitionResult_729DC9B74399E9F85D61D6B2E364D4D0
// (BlueprintEvent)

void UABP_CofferSmall_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CofferSmall_AnimGraphNode_TransitionResult_729DC9B74399E9F85D61D6B2E364D4D0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_CofferSmall_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CofferSmall_AnimGraphNode_TransitionResult_729DC9B74399E9F85D61D6B2E364D4D0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_CofferSmall.ABP_CofferSmall_C.ExecuteUbergraph_ABP_CofferSmall
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_CofferSmall_C::ExecuteUbergraph_ABP_CofferSmall(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_CofferSmall_C", "ExecuteUbergraph_ABP_CofferSmall");

	Params::ABP_CofferSmall_C_ExecuteUbergraph_ABP_CofferSmall Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

