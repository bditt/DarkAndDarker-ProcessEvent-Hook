#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_SkeletonWarlord_SpawnCrystal

#include "Basic.hpp"

#include "GA_SkeletonWarlord_SpawnCrystal_classes.hpp"
#include "GA_SkeletonWarlord_SpawnCrystal_parameters.hpp"


namespace SDK
{

// Function GA_SkeletonWarlord_SpawnCrystal.GA_SkeletonWarlord_SpawnCrystal_C.AbilityActivated
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               TriggerEventData                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_SkeletonWarlord_SpawnCrystal_C::AbilityActivated(const struct FGameplayEventData& TriggerEventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_SkeletonWarlord_SpawnCrystal_C", "AbilityActivated");

	Params::GA_SkeletonWarlord_SpawnCrystal_C_AbilityActivated Parms{};

	Parms.TriggerEventData = std::move(TriggerEventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_SkeletonWarlord_SpawnCrystal.GA_SkeletonWarlord_SpawnCrystal_C.EventReceived_746469C14583A6999E7AFEBF91C8F8DD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_SkeletonWarlord_SpawnCrystal_C::EventReceived_746469C14583A6999E7AFEBF91C8F8DD(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_SkeletonWarlord_SpawnCrystal_C", "EventReceived_746469C14583A6999E7AFEBF91C8F8DD");

	Params::GA_SkeletonWarlord_SpawnCrystal_C_EventReceived_746469C14583A6999E7AFEBF91C8F8DD Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_SkeletonWarlord_SpawnCrystal.GA_SkeletonWarlord_SpawnCrystal_C.ExecuteUbergraph_GA_SkeletonWarlord_SpawnCrystal
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_SkeletonWarlord_SpawnCrystal_C::ExecuteUbergraph_GA_SkeletonWarlord_SpawnCrystal(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_SkeletonWarlord_SpawnCrystal_C", "ExecuteUbergraph_GA_SkeletonWarlord_SpawnCrystal");

	Params::GA_SkeletonWarlord_SpawnCrystal_C_ExecuteUbergraph_GA_SkeletonWarlord_SpawnCrystal Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

