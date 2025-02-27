#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_GoblinMage_Attack

#include "Basic.hpp"

#include "GA_GoblinMage_Attack_classes.hpp"
#include "GA_GoblinMage_Attack_parameters.hpp"


namespace SDK
{

// Function GA_GoblinMage_Attack.GA_GoblinMage_Attack_C.CreateProjectiles
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     EventTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData               EventData                                              (BlueprintVisible, BlueprintReadOnly, Parm)
// float                                   FirePower                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          StartLocation                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_GoblinMage_Attack_C::CreateProjectiles(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData, float FirePower, const struct FVector& StartLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_GoblinMage_Attack_C", "CreateProjectiles");

	Params::GA_GoblinMage_Attack_C_CreateProjectiles Parms{};

	Parms.EventTag = std::move(EventTag);
	Parms.EventData = std::move(EventData);
	Parms.FirePower = FirePower;
	Parms.StartLocation = std::move(StartLocation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_GoblinMage_Attack.GA_GoblinMage_Attack_C.ExecuteUbergraph_GA_GoblinMage_Attack
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_GoblinMage_Attack_C::ExecuteUbergraph_GA_GoblinMage_Attack(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_GoblinMage_Attack_C", "ExecuteUbergraph_GA_GoblinMage_Attack");

	Params::GA_GoblinMage_Attack_C_ExecuteUbergraph_GA_GoblinMage_Attack Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_GoblinMage_Attack.GA_GoblinMage_Attack_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_GoblinMage_Attack_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_GoblinMage_Attack_C", "K2_OnEndAbility");

	Params::GA_GoblinMage_Attack_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_GoblinMage_Attack.GA_GoblinMage_Attack_C.Set Fire Angle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGA_GoblinMage_Attack_C::Set_Fire_Angle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_GoblinMage_Attack_C", "Set Fire Angle");

	UObject::ProcessEvent(Func, nullptr);
}

}

