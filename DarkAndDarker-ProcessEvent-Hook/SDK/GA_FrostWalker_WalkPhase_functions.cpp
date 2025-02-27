#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_FrostWalker_WalkPhase

#include "Basic.hpp"

#include "GA_FrostWalker_WalkPhase_classes.hpp"
#include "GA_FrostWalker_WalkPhase_parameters.hpp"


namespace SDK
{

// Function GA_FrostWalker_WalkPhase.GA_FrostWalker_WalkPhase_C.AbilityActivated
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               TriggerEventData                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_FrostWalker_WalkPhase_C::AbilityActivated(const struct FGameplayEventData& TriggerEventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_FrostWalker_WalkPhase_C", "AbilityActivated");

	Params::GA_FrostWalker_WalkPhase_C_AbilityActivated Parms{};

	Parms.TriggerEventData = std::move(TriggerEventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_FrostWalker_WalkPhase.GA_FrostWalker_WalkPhase_C.Cehck Distance
// (BlueprintCallable, BlueprintEvent)

void UGA_FrostWalker_WalkPhase_C::Cehck_Distance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_FrostWalker_WalkPhase_C", "Cehck Distance");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_FrostWalker_WalkPhase.GA_FrostWalker_WalkPhase_C.ExecuteUbergraph_GA_FrostWalker_WalkPhase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_FrostWalker_WalkPhase_C::ExecuteUbergraph_GA_FrostWalker_WalkPhase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_FrostWalker_WalkPhase_C", "ExecuteUbergraph_GA_FrostWalker_WalkPhase");

	Params::GA_FrostWalker_WalkPhase_C_ExecuteUbergraph_GA_FrostWalker_WalkPhase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_FrostWalker_WalkPhase.GA_FrostWalker_WalkPhase_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_FrostWalker_WalkPhase_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_FrostWalker_WalkPhase_C", "K2_OnEndAbility");

	Params::GA_FrostWalker_WalkPhase_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_FrostWalker_WalkPhase.GA_FrostWalker_WalkPhase_C.SpawnAoe
// (BlueprintCallable, BlueprintEvent)

void UGA_FrostWalker_WalkPhase_C::SpawnAoe()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_FrostWalker_WalkPhase_C", "SpawnAoe");

	UObject::ProcessEvent(Func, nullptr);
}

}

