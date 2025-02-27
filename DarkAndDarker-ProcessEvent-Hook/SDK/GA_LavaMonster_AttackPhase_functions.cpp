#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_LavaMonster_AttackPhase

#include "Basic.hpp"

#include "GA_LavaMonster_AttackPhase_classes.hpp"
#include "GA_LavaMonster_AttackPhase_parameters.hpp"


namespace SDK
{

// Function GA_LavaMonster_AttackPhase.GA_LavaMonster_AttackPhase_C.AbilityActivated
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               TriggerEventData                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_LavaMonster_AttackPhase_C::AbilityActivated(const struct FGameplayEventData& TriggerEventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_LavaMonster_AttackPhase_C", "AbilityActivated");

	Params::GA_LavaMonster_AttackPhase_C_AbilityActivated Parms{};

	Parms.TriggerEventData = std::move(TriggerEventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_LavaMonster_AttackPhase.GA_LavaMonster_AttackPhase_C.EventReceived_EC911C75464C4C17118BF492921C63D8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_LavaMonster_AttackPhase_C::EventReceived_EC911C75464C4C17118BF492921C63D8(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_LavaMonster_AttackPhase_C", "EventReceived_EC911C75464C4C17118BF492921C63D8");

	Params::GA_LavaMonster_AttackPhase_C_EventReceived_EC911C75464C4C17118BF492921C63D8 Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_LavaMonster_AttackPhase.GA_LavaMonster_AttackPhase_C.ExecuteUbergraph_GA_LavaMonster_AttackPhase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_LavaMonster_AttackPhase_C::ExecuteUbergraph_GA_LavaMonster_AttackPhase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_LavaMonster_AttackPhase_C", "ExecuteUbergraph_GA_LavaMonster_AttackPhase");

	Params::GA_LavaMonster_AttackPhase_C_ExecuteUbergraph_GA_LavaMonster_AttackPhase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

