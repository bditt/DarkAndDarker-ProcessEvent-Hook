#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_RecklessAttack

#include "Basic.hpp"

#include "GA_RecklessAttack_classes.hpp"
#include "GA_RecklessAttack_parameters.hpp"


namespace SDK
{

// Function GA_RecklessAttack.GA_RecklessAttack_C.EventReceived_22676BF44A86DF25C537C694500CCF60
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     EventTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData               EventData                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_RecklessAttack_C::EventReceived_22676BF44A86DF25C537C694500CCF60(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_RecklessAttack_C", "EventReceived_22676BF44A86DF25C537C694500CCF60");

	Params::GA_RecklessAttack_C_EventReceived_22676BF44A86DF25C537C694500CCF60 Parms{};

	Parms.EventTag = std::move(EventTag);
	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_RecklessAttack.GA_RecklessAttack_C.ExecuteUbergraph_GA_RecklessAttack
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_RecklessAttack_C::ExecuteUbergraph_GA_RecklessAttack(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_RecklessAttack_C", "ExecuteUbergraph_GA_RecklessAttack");

	Params::GA_RecklessAttack_C_ExecuteUbergraph_GA_RecklessAttack Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_RecklessAttack.GA_RecklessAttack_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_RecklessAttack_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_RecklessAttack_C", "K2_OnEndAbility");

	Params::GA_RecklessAttack_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_RecklessAttack.GA_RecklessAttack_C.ServerOnSkillActivate
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     SkillTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                     CooldownTag                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_RecklessAttack_C::ServerOnSkillActivate(const struct FGameplayTag& SkillTag, const struct FGameplayTag& CooldownTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_RecklessAttack_C", "ServerOnSkillActivate");

	Params::GA_RecklessAttack_C_ServerOnSkillActivate Parms{};

	Parms.SkillTag = std::move(SkillTag);
	Parms.CooldownTag = std::move(CooldownTag);

	UObject::ProcessEvent(Func, &Parms);
}

}

