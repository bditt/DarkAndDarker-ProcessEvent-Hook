#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_Mimic_Medium

#include "Basic.hpp"

#include "ABP_Mimic_Medium_classes.hpp"
#include "ABP_Mimic_Medium_parameters.hpp"


namespace SDK
{

// Function ABP_Mimic_Medium.ABP_Mimic_Medium_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        Param_AnimGraph                                        (Parm, OutParm, NoDestructor)

void UABP_Mimic_Medium_C::AnimGraph(struct FPoseLink* Param_AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Mimic_Medium_C", "AnimGraph");

	Params::ABP_Mimic_Medium_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph != nullptr)
		*Param_AnimGraph = std::move(Parms.Param_AnimGraph);
}


// Function ABP_Mimic_Medium.ABP_Mimic_Medium_C.BlueprintThreadSafeUpdateAnimation
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Mimic_Medium_C::BlueprintThreadSafeUpdateAnimation(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Mimic_Medium_C", "BlueprintThreadSafeUpdateAnimation");

	Params::ABP_Mimic_Medium_C_BlueprintThreadSafeUpdateAnimation Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_Mimic_Medium.ABP_Mimic_Medium_C.ExecuteUbergraph_ABP_Mimic_Medium
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Mimic_Medium_C::ExecuteUbergraph_ABP_Mimic_Medium(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Mimic_Medium_C", "ExecuteUbergraph_ABP_Mimic_Medium");

	Params::ABP_Mimic_Medium_C_ExecuteUbergraph_ABP_Mimic_Medium Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

