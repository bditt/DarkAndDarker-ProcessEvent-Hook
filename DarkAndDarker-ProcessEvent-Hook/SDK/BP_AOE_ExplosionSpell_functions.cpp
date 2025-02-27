#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AOE_ExplosionSpell

#include "Basic.hpp"

#include "BP_AOE_ExplosionSpell_classes.hpp"
#include "BP_AOE_ExplosionSpell_parameters.hpp"


namespace SDK
{

// Function BP_AOE_ExplosionSpell.BP_AOE_ExplosionSpell_C.BndEvt__BP_AOE_ExplosionSpell_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_AOE_ExplosionSpell_C::BndEvt__BP_AOE_ExplosionSpell_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AOE_ExplosionSpell_C", "BndEvt__BP_AOE_ExplosionSpell_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	Params::BP_AOE_ExplosionSpell_C_BndEvt__BP_AOE_ExplosionSpell_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AOE_ExplosionSpell.BP_AOE_ExplosionSpell_C.BndEvt__BP_AOE_ExplosionSpell_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AOE_ExplosionSpell_C::BndEvt__BP_AOE_ExplosionSpell_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AOE_ExplosionSpell_C", "BndEvt__BP_AOE_ExplosionSpell_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	Params::BP_AOE_ExplosionSpell_C_BndEvt__BP_AOE_ExplosionSpell_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AOE_ExplosionSpell.BP_AOE_ExplosionSpell_C.ExecuteUbergraph_BP_AOE_ExplosionSpell
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AOE_ExplosionSpell_C::ExecuteUbergraph_BP_AOE_ExplosionSpell(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AOE_ExplosionSpell_C", "ExecuteUbergraph_BP_AOE_ExplosionSpell");

	Params::BP_AOE_ExplosionSpell_C_ExecuteUbergraph_BP_AOE_ExplosionSpell Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AOE_ExplosionSpell.BP_AOE_ExplosionSpell_C.GetAoeData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Param_Radius                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsFireMastery                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AOE_ExplosionSpell_C::GetAoeData(double* Param_Radius, bool* IsFireMastery)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AOE_ExplosionSpell_C", "GetAoeData");

	Params::BP_AOE_ExplosionSpell_C_GetAoeData Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_Radius != nullptr)
		*Param_Radius = Parms.Param_Radius;

	if (IsFireMastery != nullptr)
		*IsFireMastery = Parms.IsFireMastery;
}


// Function BP_AOE_ExplosionSpell.BP_AOE_ExplosionSpell_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_AOE_ExplosionSpell_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AOE_ExplosionSpell_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AOE_ExplosionSpell.BP_AOE_ExplosionSpell_C.SetAoeData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  InRadius                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  InIntervalTime                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsFireMastery                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AOE_ExplosionSpell_C::SetAoeData(double InRadius, double InIntervalTime, bool IsFireMastery)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AOE_ExplosionSpell_C", "SetAoeData");

	Params::BP_AOE_ExplosionSpell_C_SetAoeData Parms{};

	Parms.InRadius = InRadius;
	Parms.InIntervalTime = InIntervalTime;
	Parms.IsFireMastery = IsFireMastery;

	UObject::ProcessEvent(Func, &Parms);
}

}

