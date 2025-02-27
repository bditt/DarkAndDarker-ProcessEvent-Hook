#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Banshee_FogMissile1

#include "Basic.hpp"

#include "BP_Banshee_FogMissile1_classes.hpp"
#include "BP_Banshee_FogMissile1_parameters.hpp"


namespace SDK
{

// Function BP_Banshee_FogMissile1.BP_Banshee_FogMissile1_C.BndEvt__BP_Banshee_FogMissile1_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_Banshee_FogMissile1_C::BndEvt__BP_Banshee_FogMissile1_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Banshee_FogMissile1_C", "BndEvt__BP_Banshee_FogMissile1_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");

	Params::BP_Banshee_FogMissile1_C_BndEvt__BP_Banshee_FogMissile1_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Banshee_FogMissile1.BP_Banshee_FogMissile1_C.Call Explosion GC
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Param_Direction                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Banshee_FogMissile1_C::Call_Explosion_GC(const struct FVector& Location, const struct FVector& Param_Direction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Banshee_FogMissile1_C", "Call Explosion GC");

	Params::BP_Banshee_FogMissile1_C_Call_Explosion_GC Parms{};

	Parms.Location = std::move(Location);
	Parms.Param_Direction = std::move(Param_Direction);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Banshee_FogMissile1.BP_Banshee_FogMissile1_C.ExecuteUbergraph_BP_Banshee_FogMissile1
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Banshee_FogMissile1_C::ExecuteUbergraph_BP_Banshee_FogMissile1(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Banshee_FogMissile1_C", "ExecuteUbergraph_BP_Banshee_FogMissile1");

	Params::BP_Banshee_FogMissile1_C_ExecuteUbergraph_BP_Banshee_FogMissile1 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Banshee_FogMissile1.BP_Banshee_FogMissile1_C.ProjectileHit
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FHitResult                       Hit                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                                    bIsAttached                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                       ActorPrevTickTransform                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Banshee_FogMissile1_C::ProjectileHit(const struct FHitResult& Hit, bool bIsAttached, const struct FTransform& ActorPrevTickTransform)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Banshee_FogMissile1_C", "ProjectileHit");

	Params::BP_Banshee_FogMissile1_C_ProjectileHit Parms{};

	Parms.Hit = std::move(Hit);
	Parms.bIsAttached = bIsAttached;
	Parms.ActorPrevTickTransform = std::move(ActorPrevTickTransform);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Banshee_FogMissile1.BP_Banshee_FogMissile1_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Banshee_FogMissile1_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Banshee_FogMissile1_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Banshee_FogMissile1.BP_Banshee_FogMissile1_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Banshee_FogMissile1_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Banshee_FogMissile1_C", "ReceiveTick");

	Params::BP_Banshee_FogMissile1_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

}

