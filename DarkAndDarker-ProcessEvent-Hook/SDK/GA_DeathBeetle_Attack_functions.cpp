#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_DeathBeetle_Attack

#include "Basic.hpp"

#include "GA_DeathBeetle_Attack_classes.hpp"
#include "GA_DeathBeetle_Attack_parameters.hpp"


namespace SDK
{

// Function GA_DeathBeetle_Attack.GA_DeathBeetle_Attack_C.AbilityActivated
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               TriggerEventData                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_DeathBeetle_Attack_C::AbilityActivated(const struct FGameplayEventData& TriggerEventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_DeathBeetle_Attack_C", "AbilityActivated");

	Params::GA_DeathBeetle_Attack_C_AbilityActivated Parms{};

	Parms.TriggerEventData = std::move(TriggerEventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_DeathBeetle_Attack.GA_DeathBeetle_Attack_C.EventReceived_200D1D174F8ECECE70651CBC26926225
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     EventTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData               EventData                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_DeathBeetle_Attack_C::EventReceived_200D1D174F8ECECE70651CBC26926225(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_DeathBeetle_Attack_C", "EventReceived_200D1D174F8ECECE70651CBC26926225");

	Params::GA_DeathBeetle_Attack_C_EventReceived_200D1D174F8ECECE70651CBC26926225 Parms{};

	Parms.EventTag = std::move(EventTag);
	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_DeathBeetle_Attack.GA_DeathBeetle_Attack_C.ExecuteUbergraph_GA_DeathBeetle_Attack
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_DeathBeetle_Attack_C::ExecuteUbergraph_GA_DeathBeetle_Attack(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_DeathBeetle_Attack_C", "ExecuteUbergraph_GA_DeathBeetle_Attack");

	Params::GA_DeathBeetle_Attack_C_ExecuteUbergraph_GA_DeathBeetle_Attack Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_DeathBeetle_Attack.GA_DeathBeetle_Attack_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_DeathBeetle_Attack_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_DeathBeetle_Attack_C", "K2_OnEndAbility");

	Params::GA_DeathBeetle_Attack_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}

}

