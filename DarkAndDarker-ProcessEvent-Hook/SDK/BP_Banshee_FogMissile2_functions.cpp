#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Banshee_FogMissile2

#include "Basic.hpp"

#include "BP_Banshee_FogMissile2_classes.hpp"
#include "BP_Banshee_FogMissile2_parameters.hpp"


namespace SDK
{

// Function BP_Banshee_FogMissile2.BP_Banshee_FogMissile2_C.ExecuteUbergraph_BP_Banshee_FogMissile2
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Banshee_FogMissile2_C::ExecuteUbergraph_BP_Banshee_FogMissile2(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Banshee_FogMissile2_C", "ExecuteUbergraph_BP_Banshee_FogMissile2");

	Params::BP_Banshee_FogMissile2_C_ExecuteUbergraph_BP_Banshee_FogMissile2 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Banshee_FogMissile2.BP_Banshee_FogMissile2_C.GameplayTagUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     InGameplayTag                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// int32                                   InCount                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Banshee_FogMissile2_C::GameplayTagUpdated(const struct FGameplayTag& InGameplayTag, int32 InCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Banshee_FogMissile2_C", "GameplayTagUpdated");

	Params::BP_Banshee_FogMissile2_C_GameplayTagUpdated Parms{};

	Parms.InGameplayTag = std::move(InGameplayTag);
	Parms.InCount = InCount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Banshee_FogMissile2.BP_Banshee_FogMissile2_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Banshee_FogMissile2_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Banshee_FogMissile2_C", "ReceiveActorBeginOverlap");

	Params::BP_Banshee_FogMissile2_C_ReceiveActorBeginOverlap Parms{};

	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Banshee_FogMissile2.BP_Banshee_FogMissile2_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Banshee_FogMissile2_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Banshee_FogMissile2_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Banshee_FogMissile2.BP_Banshee_FogMissile2_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Banshee_FogMissile2_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Banshee_FogMissile2_C", "ReceiveTick");

	Params::BP_Banshee_FogMissile2_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Banshee_FogMissile2.BP_Banshee_FogMissile2_C.Spawn FX And Destroy
// (BlueprintCallable, BlueprintEvent)

void ABP_Banshee_FogMissile2_C::Spawn_FX_And_Destroy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Banshee_FogMissile2_C", "Spawn FX And Destroy");

	UObject::ProcessEvent(Func, nullptr);
}

}

