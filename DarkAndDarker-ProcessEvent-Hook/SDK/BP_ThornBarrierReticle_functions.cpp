#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ThornBarrierReticle

#include "Basic.hpp"

#include "BP_ThornBarrierReticle_classes.hpp"
#include "BP_ThornBarrierReticle_parameters.hpp"


namespace SDK
{

// Function BP_ThornBarrierReticle.BP_ThornBarrierReticle_C.ExecuteUbergraph_BP_ThornBarrierReticle
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ThornBarrierReticle_C::ExecuteUbergraph_BP_ThornBarrierReticle(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ThornBarrierReticle_C", "ExecuteUbergraph_BP_ThornBarrierReticle");

	Params::BP_ThornBarrierReticle_C_ExecuteUbergraph_BP_ThornBarrierReticle Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ThornBarrierReticle.BP_ThornBarrierReticle_C.OnParametersInitialized
// (Event, Public, BlueprintEvent)

void ABP_ThornBarrierReticle_C::OnParametersInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ThornBarrierReticle_C", "OnParametersInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ThornBarrierReticle.BP_ThornBarrierReticle_C.OnValidTargetChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    bNewValue                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ThornBarrierReticle_C::OnValidTargetChanged(bool bNewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ThornBarrierReticle_C", "OnValidTargetChanged");

	Params::BP_ThornBarrierReticle_C_OnValidTargetChanged Parms{};

	Parms.bNewValue = bNewValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ThornBarrierReticle.BP_ThornBarrierReticle_C.SetReticleMaterialParamVector
// (Event, Public, BlueprintEvent)
// Parameters:
// class FName                             ParamName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ThornBarrierReticle_C::SetReticleMaterialParamVector(class FName ParamName, const struct FVector& Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ThornBarrierReticle_C", "SetReticleMaterialParamVector");

	Params::BP_ThornBarrierReticle_C_SetReticleMaterialParamVector Parms{};

	Parms.ParamName = ParamName;
	Parms.Value = std::move(Value);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ThornBarrierReticle.BP_ThornBarrierReticle_C.SetSizeVectors
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ThornBarrierReticle_C::SetSizeVectors()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ThornBarrierReticle_C", "SetSizeVectors");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ThornBarrierReticle.BP_ThornBarrierReticle_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ThornBarrierReticle_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ThornBarrierReticle_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

