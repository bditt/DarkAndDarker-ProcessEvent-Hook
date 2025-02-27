#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Longsword_UniquePassive

#include "Basic.hpp"

#include "GA_Longsword_UniquePassive_classes.hpp"
#include "GA_Longsword_UniquePassive_parameters.hpp"


namespace SDK
{

// Function GA_Longsword_UniquePassive.GA_Longsword_UniquePassive_C.ExecuteUbergraph_GA_Longsword_UniquePassive
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Longsword_UniquePassive_C::ExecuteUbergraph_GA_Longsword_UniquePassive(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Longsword_UniquePassive_C", "ExecuteUbergraph_GA_Longsword_UniquePassive");

	Params::GA_Longsword_UniquePassive_C_ExecuteUbergraph_GA_Longsword_UniquePassive Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Longsword_UniquePassive.GA_Longsword_UniquePassive_C.OnHit
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               EventData                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Longsword_UniquePassive_C::OnHit(const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Longsword_UniquePassive_C", "OnHit");

	Params::GA_Longsword_UniquePassive_C_OnHit Parms{};

	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}

}

