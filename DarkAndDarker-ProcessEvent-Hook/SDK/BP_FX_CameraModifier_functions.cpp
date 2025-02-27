#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FX_CameraModifier

#include "Basic.hpp"

#include "BP_FX_CameraModifier_classes.hpp"
#include "BP_FX_CameraModifier_parameters.hpp"


namespace SDK
{

// Function BP_FX_CameraModifier.BP_FX_CameraModifier_C.BlueprintModifyPostProcess
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   PostProcessBlendWeight                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPostProcessSettings             PostProcessSettings                                    (Parm, OutParm)

void UBP_FX_CameraModifier_C::BlueprintModifyPostProcess(float DeltaTime, float* PostProcessBlendWeight, struct FPostProcessSettings* PostProcessSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FX_CameraModifier_C", "BlueprintModifyPostProcess");

	Params::BP_FX_CameraModifier_C_BlueprintModifyPostProcess Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

	if (PostProcessBlendWeight != nullptr)
		*PostProcessBlendWeight = Parms.PostProcessBlendWeight;

	if (PostProcessSettings != nullptr)
		*PostProcessSettings = std::move(Parms.PostProcessSettings);
}


// Function BP_FX_CameraModifier.BP_FX_CameraModifier_C.CreateMID
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_FX_CameraModifier_C::CreateMID()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FX_CameraModifier_C", "CreateMID");

	UObject::ProcessEvent(Func, nullptr);
}

}

