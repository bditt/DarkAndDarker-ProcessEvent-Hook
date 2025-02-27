#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TrapBase_StaticMesh

#include "Basic.hpp"

#include "BP_TrapBase_StaticMesh_classes.hpp"
#include "BP_TrapBase_StaticMesh_parameters.hpp"


namespace SDK
{

// Function BP_TrapBase_StaticMesh.BP_TrapBase_StaticMesh_C.BndEvt__BP_HuntingTrapProp_DCTagCollisionDetector_K2Node_ComponentBoundEvent_3_GameplayTagCollisionDetectedSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bDetected                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAccountDataReplication          AccountDataReplication                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_TrapBase_StaticMesh_C::BndEvt__BP_HuntingTrapProp_DCTagCollisionDetector_K2Node_ComponentBoundEvent_3_GameplayTagCollisionDetectedSignature__DelegateSignature(bool bDetected, const struct FAccountDataReplication& AccountDataReplication)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TrapBase_StaticMesh_C", "BndEvt__BP_HuntingTrapProp_DCTagCollisionDetector_K2Node_ComponentBoundEvent_3_GameplayTagCollisionDetectedSignature__DelegateSignature");

	Params::BP_TrapBase_StaticMesh_C_BndEvt__BP_HuntingTrapProp_DCTagCollisionDetector_K2Node_ComponentBoundEvent_3_GameplayTagCollisionDetectedSignature__DelegateSignature Parms{};

	Parms.bDetected = bDetected;
	Parms.AccountDataReplication = std::move(AccountDataReplication);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TrapBase_StaticMesh.BP_TrapBase_StaticMesh_C.ExecuteUbergraph_BP_TrapBase_StaticMesh
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TrapBase_StaticMesh_C::ExecuteUbergraph_BP_TrapBase_StaticMesh(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TrapBase_StaticMesh_C", "ExecuteUbergraph_BP_TrapBase_StaticMesh");

	Params::BP_TrapBase_StaticMesh_C_ExecuteUbergraph_BP_TrapBase_StaticMesh Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TrapBase_StaticMesh.BP_TrapBase_StaticMesh_C.InteractFailed
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                           Interacter                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                     EventTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_TrapBase_StaticMesh_C::InteractFailed(class AActor* Interacter, const struct FGameplayTag& EventTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TrapBase_StaticMesh_C", "InteractFailed");

	Params::BP_TrapBase_StaticMesh_C_InteractFailed Parms{};

	Parms.Interacter = Interacter;
	Parms.EventTag = std::move(EventTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TrapBase_StaticMesh.BP_TrapBase_StaticMesh_C.OffTrapDetecting
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_TrapBase_StaticMesh_C::OffTrapDetecting()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TrapBase_StaticMesh_C", "OffTrapDetecting");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TrapBase_StaticMesh.BP_TrapBase_StaticMesh_C.OnTrapDetecting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsDetecting                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAccountDataReplication          AccountDataReplication                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_TrapBase_StaticMesh_C::OnTrapDetecting(bool IsDetecting, const struct FAccountDataReplication& AccountDataReplication)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TrapBase_StaticMesh_C", "OnTrapDetecting");

	Params::BP_TrapBase_StaticMesh_C_OnTrapDetecting Parms{};

	Parms.IsDetecting = IsDetecting;
	Parms.AccountDataReplication = std::move(AccountDataReplication);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TrapBase_StaticMesh.BP_TrapBase_StaticMesh_C.OnTrapDetectingByInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsDetecting                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TrapBase_StaticMesh_C::OnTrapDetectingByInteract(bool IsDetecting)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TrapBase_StaticMesh_C", "OnTrapDetectingByInteract");

	Params::BP_TrapBase_StaticMesh_C_OnTrapDetectingByInteract Parms{};

	Parms.IsDetecting = IsDetecting;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TrapBase_StaticMesh.BP_TrapBase_StaticMesh_C.TryReduceTrapDisarmingItemCount
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Interacter                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_TrapBase_StaticMesh_C::TryReduceTrapDisarmingItemCount(class AActor* Interacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TrapBase_StaticMesh_C", "TryReduceTrapDisarmingItemCount");

	Params::BP_TrapBase_StaticMesh_C_TryReduceTrapDisarmingItemCount Parms{};

	Parms.Interacter = Interacter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TrapBase_StaticMesh.BP_TrapBase_StaticMesh_C.UpdateInteractDepthValue
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                                   DepthValue                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TrapBase_StaticMesh_C::UpdateInteractDepthValue(int32 DepthValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TrapBase_StaticMesh_C", "UpdateInteractDepthValue");

	Params::BP_TrapBase_StaticMesh_C_UpdateInteractDepthValue Parms{};

	Parms.DepthValue = DepthValue;

	UObject::ProcessEvent(Func, &Parms);
}

}

