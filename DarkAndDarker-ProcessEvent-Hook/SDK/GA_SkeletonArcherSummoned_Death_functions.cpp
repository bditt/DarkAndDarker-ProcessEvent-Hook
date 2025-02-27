#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_SkeletonArcherSummoned_Death

#include "Basic.hpp"

#include "GA_SkeletonArcherSummoned_Death_classes.hpp"
#include "GA_SkeletonArcherSummoned_Death_parameters.hpp"


namespace SDK
{

// Function GA_SkeletonArcherSummoned_Death.GA_SkeletonArcherSummoned_Death_C.AbilityActivated
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               TriggerEventData                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_SkeletonArcherSummoned_Death_C::AbilityActivated(const struct FGameplayEventData& TriggerEventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_SkeletonArcherSummoned_Death_C", "AbilityActivated");

	Params::GA_SkeletonArcherSummoned_Death_C_AbilityActivated Parms{};

	Parms.TriggerEventData = std::move(TriggerEventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_SkeletonArcherSummoned_Death.GA_SkeletonArcherSummoned_Death_C.ExecuteUbergraph_GA_SkeletonArcherSummoned_Death
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_SkeletonArcherSummoned_Death_C::ExecuteUbergraph_GA_SkeletonArcherSummoned_Death(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_SkeletonArcherSummoned_Death_C", "ExecuteUbergraph_GA_SkeletonArcherSummoned_Death");

	Params::GA_SkeletonArcherSummoned_Death_C_ExecuteUbergraph_GA_SkeletonArcherSummoned_Death Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

