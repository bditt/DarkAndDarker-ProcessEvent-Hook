#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_DeathSkull

#include "Basic.hpp"

#include "ABP_DeathSkull_classes.hpp"
#include "ABP_DeathSkull_parameters.hpp"


namespace SDK
{

// Function ABP_DeathSkull.ABP_DeathSkull_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        Param_AnimGraph                                        (Parm, OutParm, NoDestructor)

void UABP_DeathSkull_C::AnimGraph(struct FPoseLink* Param_AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_DeathSkull_C", "AnimGraph");

	Params::ABP_DeathSkull_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph != nullptr)
		*Param_AnimGraph = std::move(Parms.Param_AnimGraph);
}


// Function ABP_DeathSkull.ABP_DeathSkull_C.ExecuteUbergraph_ABP_DeathSkull
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_DeathSkull_C::ExecuteUbergraph_ABP_DeathSkull(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_DeathSkull_C", "ExecuteUbergraph_ABP_DeathSkull");

	Params::ABP_DeathSkull_C_ExecuteUbergraph_ABP_DeathSkull Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

