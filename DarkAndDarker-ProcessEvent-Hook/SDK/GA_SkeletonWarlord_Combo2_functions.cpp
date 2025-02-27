#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_SkeletonWarlord_Combo2

#include "Basic.hpp"

#include "GA_SkeletonWarlord_Combo2_classes.hpp"
#include "GA_SkeletonWarlord_Combo2_parameters.hpp"


namespace SDK
{

// Function GA_SkeletonWarlord_Combo2.GA_SkeletonWarlord_Combo2_C.AbilityActivated
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               TriggerEventData                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_SkeletonWarlord_Combo2_C::AbilityActivated(const struct FGameplayEventData& TriggerEventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_SkeletonWarlord_Combo2_C", "AbilityActivated");

	Params::GA_SkeletonWarlord_Combo2_C_AbilityActivated Parms{};

	Parms.TriggerEventData = std::move(TriggerEventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_SkeletonWarlord_Combo2.GA_SkeletonWarlord_Combo2_C.EventReceived_E4F41D3B43AD548E3B55F6877DD81A9F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_SkeletonWarlord_Combo2_C::EventReceived_E4F41D3B43AD548E3B55F6877DD81A9F(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_SkeletonWarlord_Combo2_C", "EventReceived_E4F41D3B43AD548E3B55F6877DD81A9F");

	Params::GA_SkeletonWarlord_Combo2_C_EventReceived_E4F41D3B43AD548E3B55F6877DD81A9F Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_SkeletonWarlord_Combo2.GA_SkeletonWarlord_Combo2_C.ExecuteUbergraph_GA_SkeletonWarlord_Combo2
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_SkeletonWarlord_Combo2_C::ExecuteUbergraph_GA_SkeletonWarlord_Combo2(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_SkeletonWarlord_Combo2_C", "ExecuteUbergraph_GA_SkeletonWarlord_Combo2");

	Params::GA_SkeletonWarlord_Combo2_C_ExecuteUbergraph_GA_SkeletonWarlord_Combo2 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

