#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_Door

#include "Basic.hpp"

#include "ABP_Door_classes.hpp"
#include "ABP_Door_parameters.hpp"


namespace SDK
{

// Function ABP_Door.ABP_Door_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        Param_AnimGraph                                        (Parm, OutParm, NoDestructor)

void UABP_Door_C::AnimGraph(struct FPoseLink* Param_AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Door_C", "AnimGraph");

	Params::ABP_Door_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph != nullptr)
		*Param_AnimGraph = std::move(Parms.Param_AnimGraph);
}


// Function ABP_Door.ABP_Door_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Door_AnimGraphNode_TransitionResult_0924E39D4A29496ACD814EAC38BF2BF5
// (BlueprintEvent)

void UABP_Door_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Door_AnimGraphNode_TransitionResult_0924E39D4A29496ACD814EAC38BF2BF5()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Door_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Door_AnimGraphNode_TransitionResult_0924E39D4A29496ACD814EAC38BF2BF5");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_Door.ABP_Door_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Door_AnimGraphNode_TransitionResult_38EC38F54696A864E66A05A88B3CACCF
// (BlueprintEvent)

void UABP_Door_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Door_AnimGraphNode_TransitionResult_38EC38F54696A864E66A05A88B3CACCF()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Door_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Door_AnimGraphNode_TransitionResult_38EC38F54696A864E66A05A88B3CACCF");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_Door.ABP_Door_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Door_AnimGraphNode_TransitionResult_765EE8C848BFAB3A5BDBB389A5B8FC4A
// (BlueprintEvent)

void UABP_Door_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Door_AnimGraphNode_TransitionResult_765EE8C848BFAB3A5BDBB389A5B8FC4A()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Door_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Door_AnimGraphNode_TransitionResult_765EE8C848BFAB3A5BDBB389A5B8FC4A");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_Door.ABP_Door_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Door_AnimGraphNode_TransitionResult_8F377AE14DE82094A97556B062A5647F
// (BlueprintEvent)

void UABP_Door_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Door_AnimGraphNode_TransitionResult_8F377AE14DE82094A97556B062A5647F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Door_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Door_AnimGraphNode_TransitionResult_8F377AE14DE82094A97556B062A5647F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_Door.ABP_Door_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Door_AnimGraphNode_TransitionResult_EDC947BD45B5C1BDAD0053A8F7C854DA
// (BlueprintEvent)

void UABP_Door_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Door_AnimGraphNode_TransitionResult_EDC947BD45B5C1BDAD0053A8F7C854DA()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Door_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Door_AnimGraphNode_TransitionResult_EDC947BD45B5C1BDAD0053A8F7C854DA");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_Door.ABP_Door_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Door_AnimGraphNode_TransitionResult_EE0054E04F967EF52EEDA19CCF884130
// (BlueprintEvent)

void UABP_Door_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Door_AnimGraphNode_TransitionResult_EE0054E04F967EF52EEDA19CCF884130()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Door_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Door_AnimGraphNode_TransitionResult_EE0054E04F967EF52EEDA19CCF884130");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_Door.ABP_Door_C.ExecuteUbergraph_ABP_Door
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Door_C::ExecuteUbergraph_ABP_Door(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Door_C", "ExecuteUbergraph_ABP_Door");

	Params::ABP_Door_C_ExecuteUbergraph_ABP_Door Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

