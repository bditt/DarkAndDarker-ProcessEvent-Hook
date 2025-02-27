#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FallingDebrisProjectileBase

#include "Basic.hpp"

#include "BP_FallingDebrisProjectileBase_classes.hpp"
#include "BP_FallingDebrisProjectileBase_parameters.hpp"


namespace SDK
{

// Function BP_FallingDebrisProjectileBase.BP_FallingDebrisProjectileBase_C.ExecuteUbergraph_BP_FallingDebrisProjectileBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FallingDebrisProjectileBase_C::ExecuteUbergraph_BP_FallingDebrisProjectileBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FallingDebrisProjectileBase_C", "ExecuteUbergraph_BP_FallingDebrisProjectileBase");

	Params::BP_FallingDebrisProjectileBase_C_ExecuteUbergraph_BP_FallingDebrisProjectileBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FallingDebrisProjectileBase.BP_FallingDebrisProjectileBase_C.GameplayTagUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     InGameplayTag                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// int32                                   InCount                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FallingDebrisProjectileBase_C::GameplayTagUpdated(const struct FGameplayTag& InGameplayTag, int32 InCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FallingDebrisProjectileBase_C", "GameplayTagUpdated");

	Params::BP_FallingDebrisProjectileBase_C_GameplayTagUpdated Parms{};

	Parms.InGameplayTag = std::move(InGameplayTag);
	Parms.InCount = InCount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FallingDebrisProjectileBase.BP_FallingDebrisProjectileBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_FallingDebrisProjectileBase_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FallingDebrisProjectileBase_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

