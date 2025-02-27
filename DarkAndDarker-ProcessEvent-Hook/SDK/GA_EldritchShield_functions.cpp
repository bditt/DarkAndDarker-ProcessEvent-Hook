#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_EldritchShield

#include "Basic.hpp"

#include "GA_EldritchShield_classes.hpp"
#include "GA_EldritchShield_parameters.hpp"


namespace SDK
{

// Function GA_EldritchShield.GA_EldritchShield_C.AbilityActivated_BP
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               TriggerEventData                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    bIsSocketSightBlocked                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_EldritchShield_C::AbilityActivated_BP(const struct FGameplayEventData& TriggerEventData, bool bIsSocketSightBlocked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_EldritchShield_C", "AbilityActivated_BP");

	Params::GA_EldritchShield_C_AbilityActivated_BP Parms{};

	Parms.TriggerEventData = std::move(TriggerEventData);
	Parms.bIsSocketSightBlocked = bIsSocketSightBlocked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_EldritchShield.GA_EldritchShield_C.Cancelled_F41F0BD8456D4E56E4C1BFAB619DE0FD
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle Data                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_EldritchShield_C::Cancelled_F41F0BD8456D4E56E4C1BFAB619DE0FD(const struct FGameplayAbilityTargetDataHandle& Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_EldritchShield_C", "Cancelled_F41F0BD8456D4E56E4C1BFAB619DE0FD");

	Params::GA_EldritchShield_C_Cancelled_F41F0BD8456D4E56E4C1BFAB619DE0FD Parms{};

	Parms.Data = std::move(Data);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_EldritchShield.GA_EldritchShield_C.ExecuteUbergraph_GA_EldritchShield
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_EldritchShield_C::ExecuteUbergraph_GA_EldritchShield(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_EldritchShield_C", "ExecuteUbergraph_GA_EldritchShield");

	Params::GA_EldritchShield_C_ExecuteUbergraph_GA_EldritchShield Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_EldritchShield.GA_EldritchShield_C.ValidData_F41F0BD8456D4E56E4C1BFAB619DE0FD
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle Data                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_EldritchShield_C::ValidData_F41F0BD8456D4E56E4C1BFAB619DE0FD(const struct FGameplayAbilityTargetDataHandle& Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_EldritchShield_C", "ValidData_F41F0BD8456D4E56E4C1BFAB619DE0FD");

	Params::GA_EldritchShield_C_ValidData_F41F0BD8456D4E56E4C1BFAB619DE0FD Parms{};

	Parms.Data = std::move(Data);

	UObject::ProcessEvent(Func, &Parms);
}

}

