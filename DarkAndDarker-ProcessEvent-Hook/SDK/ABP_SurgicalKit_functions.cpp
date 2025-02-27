#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_SurgicalKit

#include "Basic.hpp"

#include "ABP_SurgicalKit_classes.hpp"
#include "ABP_SurgicalKit_parameters.hpp"


namespace SDK
{

// Function ABP_SurgicalKit.ABP_SurgicalKit_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        Param_AnimGraph                                        (Parm, OutParm, NoDestructor)

void UABP_SurgicalKit_C::AnimGraph(struct FPoseLink* Param_AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_SurgicalKit_C", "AnimGraph");

	Params::ABP_SurgicalKit_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph != nullptr)
		*Param_AnimGraph = std::move(Parms.Param_AnimGraph);
}


// Function ABP_SurgicalKit.ABP_SurgicalKit_C.ExecuteUbergraph_ABP_SurgicalKit
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_SurgicalKit_C::ExecuteUbergraph_ABP_SurgicalKit(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_SurgicalKit_C", "ExecuteUbergraph_ABP_SurgicalKit");

	Params::ABP_SurgicalKit_C_ExecuteUbergraph_ABP_SurgicalKit Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

