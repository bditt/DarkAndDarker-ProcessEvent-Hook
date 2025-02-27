#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_MummySpawn2

#include "Basic.hpp"

#include "GA_MummySpawn2_classes.hpp"
#include "GA_MummySpawn2_parameters.hpp"


namespace SDK
{

// Function GA_MummySpawn2.GA_MummySpawn2_C.AbilityActivated
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               TriggerEventData                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_MummySpawn2_C::AbilityActivated(const struct FGameplayEventData& TriggerEventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_MummySpawn2_C", "AbilityActivated");

	Params::GA_MummySpawn2_C_AbilityActivated Parms{};

	Parms.TriggerEventData = std::move(TriggerEventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_MummySpawn2.GA_MummySpawn2_C.ExecuteUbergraph_GA_MummySpawn2
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_MummySpawn2_C::ExecuteUbergraph_GA_MummySpawn2(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_MummySpawn2_C", "ExecuteUbergraph_GA_MummySpawn2");

	Params::GA_MummySpawn2_C_ExecuteUbergraph_GA_MummySpawn2 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

