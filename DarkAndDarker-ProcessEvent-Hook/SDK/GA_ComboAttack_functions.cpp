#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_ComboAttack

#include "Basic.hpp"

#include "GA_ComboAttack_classes.hpp"
#include "GA_ComboAttack_parameters.hpp"


namespace SDK
{

// Function GA_ComboAttack.GA_ComboAttack_C.EventReceived_0EF528F1414939B2DA8CE9A5C5B64691
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     EventTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData               EventData                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_ComboAttack_C::EventReceived_0EF528F1414939B2DA8CE9A5C5B64691(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_ComboAttack_C", "EventReceived_0EF528F1414939B2DA8CE9A5C5B64691");

	Params::GA_ComboAttack_C_EventReceived_0EF528F1414939B2DA8CE9A5C5B64691 Parms{};

	Parms.EventTag = std::move(EventTag);
	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_ComboAttack.GA_ComboAttack_C.ExecuteUbergraph_GA_ComboAttack
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_ComboAttack_C::ExecuteUbergraph_GA_ComboAttack(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_ComboAttack_C", "ExecuteUbergraph_GA_ComboAttack");

	Params::GA_ComboAttack_C_ExecuteUbergraph_GA_ComboAttack Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_ComboAttack.GA_ComboAttack_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               EventData                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_ComboAttack_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_ComboAttack_C", "K2_ActivateAbilityFromEvent");

	Params::GA_ComboAttack_C_K2_ActivateAbilityFromEvent Parms{};

	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_ComboAttack.GA_ComboAttack_C.OnFinish_DE8698AB4425C1292B02AFB106318041
// (BlueprintCallable, BlueprintEvent)

void UGA_ComboAttack_C::OnFinish_DE8698AB4425C1292B02AFB106318041()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_ComboAttack_C", "OnFinish_DE8698AB4425C1292B02AFB106318041");

	UObject::ProcessEvent(Func, nullptr);
}

}

