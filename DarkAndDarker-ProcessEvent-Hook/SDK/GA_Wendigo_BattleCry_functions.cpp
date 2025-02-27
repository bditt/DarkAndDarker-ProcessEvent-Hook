#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Wendigo_BattleCry

#include "Basic.hpp"

#include "GA_Wendigo_BattleCry_classes.hpp"
#include "GA_Wendigo_BattleCry_parameters.hpp"


namespace SDK
{

// Function GA_Wendigo_BattleCry.GA_Wendigo_BattleCry_C.AbilityActivated
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               TriggerEventData                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Wendigo_BattleCry_C::AbilityActivated(const struct FGameplayEventData& TriggerEventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Wendigo_BattleCry_C", "AbilityActivated");

	Params::GA_Wendigo_BattleCry_C_AbilityActivated Parms{};

	Parms.TriggerEventData = std::move(TriggerEventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Wendigo_BattleCry.GA_Wendigo_BattleCry_C.ExecuteUbergraph_GA_Wendigo_BattleCry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Wendigo_BattleCry_C::ExecuteUbergraph_GA_Wendigo_BattleCry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Wendigo_BattleCry_C", "ExecuteUbergraph_GA_Wendigo_BattleCry");

	Params::GA_Wendigo_BattleCry_C_ExecuteUbergraph_GA_Wendigo_BattleCry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

