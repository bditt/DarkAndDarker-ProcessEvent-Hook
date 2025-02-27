#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_PlayerCharacterResurrection

#include "Basic.hpp"

#include "ABP_PlayerCharacterResurrection_classes.hpp"
#include "ABP_PlayerCharacterResurrection_parameters.hpp"


namespace SDK
{

// Function ABP_PlayerCharacterResurrection.ABP_PlayerCharacterResurrection_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        Param_AnimGraph                                        (Parm, OutParm, NoDestructor)

void UABP_PlayerCharacterResurrection_C::AnimGraph(struct FPoseLink* Param_AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_PlayerCharacterResurrection_C", "AnimGraph");

	Params::ABP_PlayerCharacterResurrection_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph != nullptr)
		*Param_AnimGraph = std::move(Parms.Param_AnimGraph);
}


// Function ABP_PlayerCharacterResurrection.ABP_PlayerCharacterResurrection_C.ExecuteUbergraph_ABP_PlayerCharacterResurrection
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_PlayerCharacterResurrection_C::ExecuteUbergraph_ABP_PlayerCharacterResurrection(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_PlayerCharacterResurrection_C", "ExecuteUbergraph_ABP_PlayerCharacterResurrection");

	Params::ABP_PlayerCharacterResurrection_C_ExecuteUbergraph_ABP_PlayerCharacterResurrection Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

