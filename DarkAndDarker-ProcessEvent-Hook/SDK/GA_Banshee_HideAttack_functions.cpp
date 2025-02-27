#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Banshee_HideAttack

#include "Basic.hpp"

#include "GA_Banshee_HideAttack_classes.hpp"
#include "GA_Banshee_HideAttack_parameters.hpp"


namespace SDK
{

// Function GA_Banshee_HideAttack.GA_Banshee_HideAttack_C.AbilityActivated
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               TriggerEventData                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Banshee_HideAttack_C::AbilityActivated(const struct FGameplayEventData& TriggerEventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Banshee_HideAttack_C", "AbilityActivated");

	Params::GA_Banshee_HideAttack_C_AbilityActivated Parms{};

	Parms.TriggerEventData = std::move(TriggerEventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Banshee_HideAttack.GA_Banshee_HideAttack_C.Dealt Damage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGA_Banshee_HideAttack_C::Dealt_Damage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Banshee_HideAttack_C", "Dealt Damage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Banshee_HideAttack.GA_Banshee_HideAttack_C.EventReceived_11DF9BE64BBDFA81FCF7D896868922DC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     EventTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData               EventData                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Banshee_HideAttack_C::EventReceived_11DF9BE64BBDFA81FCF7D896868922DC(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Banshee_HideAttack_C", "EventReceived_11DF9BE64BBDFA81FCF7D896868922DC");

	Params::GA_Banshee_HideAttack_C_EventReceived_11DF9BE64BBDFA81FCF7D896868922DC Parms{};

	Parms.EventTag = std::move(EventTag);
	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Banshee_HideAttack.GA_Banshee_HideAttack_C.ExecuteUbergraph_GA_Banshee_HideAttack
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Banshee_HideAttack_C::ExecuteUbergraph_GA_Banshee_HideAttack(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Banshee_HideAttack_C", "ExecuteUbergraph_GA_Banshee_HideAttack");

	Params::GA_Banshee_HideAttack_C_ExecuteUbergraph_GA_Banshee_HideAttack Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Banshee_HideAttack.GA_Banshee_HideAttack_C.Get Location In Combat Area
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector UGA_Banshee_HideAttack_C::Get_Location_In_Combat_Area(const struct FVector& Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Banshee_HideAttack_C", "Get Location In Combat Area");

	Params::GA_Banshee_HideAttack_C_Get_Location_In_Combat_Area Parms{};

	Parms.Location = std::move(Location);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function GA_Banshee_HideAttack.GA_Banshee_HideAttack_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Banshee_HideAttack_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Banshee_HideAttack_C", "K2_OnEndAbility");

	Params::GA_Banshee_HideAttack_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}

}

