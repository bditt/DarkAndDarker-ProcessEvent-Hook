#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_Mimic_Large

#include "Basic.hpp"

#include "ABP_Mimic_Large_classes.hpp"
#include "ABP_Mimic_Large_parameters.hpp"


namespace SDK
{

// Function ABP_Mimic_Large.ABP_Mimic_Large_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        Param_AnimGraph                                        (Parm, OutParm, NoDestructor)

void UABP_Mimic_Large_C::AnimGraph(struct FPoseLink* Param_AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Mimic_Large_C", "AnimGraph");

	Params::ABP_Mimic_Large_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph != nullptr)
		*Param_AnimGraph = std::move(Parms.Param_AnimGraph);
}


// Function ABP_Mimic_Large.ABP_Mimic_Large_C.BlueprintThreadSafeUpdateAnimation
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Mimic_Large_C::BlueprintThreadSafeUpdateAnimation(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Mimic_Large_C", "BlueprintThreadSafeUpdateAnimation");

	Params::ABP_Mimic_Large_C_BlueprintThreadSafeUpdateAnimation Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_Mimic_Large.ABP_Mimic_Large_C.ExecuteUbergraph_ABP_Mimic_Large
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Mimic_Large_C::ExecuteUbergraph_ABP_Mimic_Large(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Mimic_Large_C", "ExecuteUbergraph_ABP_Mimic_Large");

	Params::ABP_Mimic_Large_C_ExecuteUbergraph_ABP_Mimic_Large Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

