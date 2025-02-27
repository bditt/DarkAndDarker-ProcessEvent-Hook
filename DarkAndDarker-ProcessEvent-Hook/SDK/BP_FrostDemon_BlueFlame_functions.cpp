#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FrostDemon_BlueFlame

#include "Basic.hpp"

#include "BP_FrostDemon_BlueFlame_classes.hpp"
#include "BP_FrostDemon_BlueFlame_parameters.hpp"


namespace SDK
{

// Function BP_FrostDemon_BlueFlame.BP_FrostDemon_BlueFlame_C.EffectDeactivated
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_FrostDemon_BlueFlame_C::EffectDeactivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FrostDemon_BlueFlame_C", "EffectDeactivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FrostDemon_BlueFlame.BP_FrostDemon_BlueFlame_C.ExecuteUbergraph_BP_FrostDemon_BlueFlame
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FrostDemon_BlueFlame_C::ExecuteUbergraph_BP_FrostDemon_BlueFlame(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FrostDemon_BlueFlame_C", "ExecuteUbergraph_BP_FrostDemon_BlueFlame");

	Params::BP_FrostDemon_BlueFlame_C_ExecuteUbergraph_BP_FrostDemon_BlueFlame Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FrostDemon_BlueFlame.BP_FrostDemon_BlueFlame_C.GameplayTagUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     InGameplayTag                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// int32                                   InCount                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FrostDemon_BlueFlame_C::GameplayTagUpdated(const struct FGameplayTag& InGameplayTag, int32 InCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FrostDemon_BlueFlame_C", "GameplayTagUpdated");

	Params::BP_FrostDemon_BlueFlame_C_GameplayTagUpdated Parms{};

	Parms.InGameplayTag = std::move(InGameplayTag);
	Parms.InCount = InCount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FrostDemon_BlueFlame.BP_FrostDemon_BlueFlame_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_FrostDemon_BlueFlame_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FrostDemon_BlueFlame_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

