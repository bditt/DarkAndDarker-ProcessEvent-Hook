#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_PlayerCharacterCapture

#include "Basic.hpp"

#include "ABP_PlayerCharacterCapture_classes.hpp"
#include "ABP_PlayerCharacterCapture_parameters.hpp"


namespace SDK
{

// Function ABP_PlayerCharacterCapture.ABP_PlayerCharacterCapture_C.OnChangedStandIdle
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimSequence*                    Param_ItemStandIdleAnimation                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                     ItemHandType                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                     ItemSlotType                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UABP_PlayerCharacterCapture_C::OnChangedStandIdle(class UAnimSequence* Param_ItemStandIdleAnimation, const struct FGameplayTag& ItemHandType, const struct FGameplayTag& ItemSlotType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_PlayerCharacterCapture_C", "OnChangedStandIdle");

	Params::ABP_PlayerCharacterCapture_C_OnChangedStandIdle Parms{};

	Parms.Param_ItemStandIdleAnimation = Param_ItemStandIdleAnimation;
	Parms.ItemHandType = std::move(ItemHandType);
	Parms.ItemSlotType = std::move(ItemSlotType);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_PlayerCharacterCapture.ABP_PlayerCharacterCapture_C.ExecuteUbergraph_ABP_PlayerCharacterCapture
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_PlayerCharacterCapture_C::ExecuteUbergraph_ABP_PlayerCharacterCapture(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_PlayerCharacterCapture_C", "ExecuteUbergraph_ABP_PlayerCharacterCapture");

	Params::ABP_PlayerCharacterCapture_C_ExecuteUbergraph_ABP_PlayerCharacterCapture Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_PlayerCharacterCapture.ABP_PlayerCharacterCapture_C.BlueprintThreadSafeUpdateAnimation
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_PlayerCharacterCapture_C::BlueprintThreadSafeUpdateAnimation(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_PlayerCharacterCapture_C", "BlueprintThreadSafeUpdateAnimation");

	Params::ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_PlayerCharacterCapture.ABP_PlayerCharacterCapture_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        Param_AnimGraph                                        (Parm, OutParm, NoDestructor)

void UABP_PlayerCharacterCapture_C::AnimGraph(struct FPoseLink* Param_AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_PlayerCharacterCapture_C", "AnimGraph");

	Params::ABP_PlayerCharacterCapture_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph != nullptr)
		*Param_AnimGraph = std::move(Parms.Param_AnimGraph);
}

}

