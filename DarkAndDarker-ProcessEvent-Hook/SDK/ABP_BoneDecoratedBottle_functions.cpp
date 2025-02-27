#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_BoneDecoratedBottle

#include "Basic.hpp"

#include "ABP_BoneDecoratedBottle_classes.hpp"
#include "ABP_BoneDecoratedBottle_parameters.hpp"


namespace SDK
{

// Function ABP_BoneDecoratedBottle.ABP_BoneDecoratedBottle_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        Param_AnimGraph                                        (Parm, OutParm, NoDestructor)

void UABP_BoneDecoratedBottle_C::AnimGraph(struct FPoseLink* Param_AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_BoneDecoratedBottle_C", "AnimGraph");

	Params::ABP_BoneDecoratedBottle_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph != nullptr)
		*Param_AnimGraph = std::move(Parms.Param_AnimGraph);
}


// Function ABP_BoneDecoratedBottle.ABP_BoneDecoratedBottle_C.BlueprintThreadSafeUpdateAnimation
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_BoneDecoratedBottle_C::BlueprintThreadSafeUpdateAnimation(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_BoneDecoratedBottle_C", "BlueprintThreadSafeUpdateAnimation");

	Params::ABP_BoneDecoratedBottle_C_BlueprintThreadSafeUpdateAnimation Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_BoneDecoratedBottle.ABP_BoneDecoratedBottle_C.ExecuteUbergraph_ABP_BoneDecoratedBottle
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_BoneDecoratedBottle_C::ExecuteUbergraph_ABP_BoneDecoratedBottle(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_BoneDecoratedBottle_C", "ExecuteUbergraph_ABP_BoneDecoratedBottle");

	Params::ABP_BoneDecoratedBottle_C_ExecuteUbergraph_ABP_BoneDecoratedBottle Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_BoneDecoratedBottle.ABP_BoneDecoratedBottle_C.OnItemDataUpdated
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FItemData                        ItemData                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UABP_BoneDecoratedBottle_C::OnItemDataUpdated(const struct FItemData& ItemData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_BoneDecoratedBottle_C", "OnItemDataUpdated");

	Params::ABP_BoneDecoratedBottle_C_OnItemDataUpdated Parms{};

	Parms.ItemData = std::move(ItemData);

	UObject::ProcessEvent(Func, &Parms);
}

}

