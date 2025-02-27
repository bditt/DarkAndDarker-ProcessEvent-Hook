#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_BloodstainedBlade

#include "Basic.hpp"

#include "GA_BloodstainedBlade_classes.hpp"
#include "GA_BloodstainedBlade_parameters.hpp"


namespace SDK
{

// Function GA_BloodstainedBlade.GA_BloodstainedBlade_C.AbilityActivated_BP
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               TriggerEventData                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    bIsSocketSightBlocked                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_BloodstainedBlade_C::AbilityActivated_BP(const struct FGameplayEventData& TriggerEventData, bool bIsSocketSightBlocked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_BloodstainedBlade_C", "AbilityActivated_BP");

	Params::GA_BloodstainedBlade_C_AbilityActivated_BP Parms{};

	Parms.TriggerEventData = std::move(TriggerEventData);
	Parms.bIsSocketSightBlocked = bIsSocketSightBlocked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_BloodstainedBlade.GA_BloodstainedBlade_C.Cancelled_BB77A930441E6D8286CAEB903C4A9D74
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle Data                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_BloodstainedBlade_C::Cancelled_BB77A930441E6D8286CAEB903C4A9D74(const struct FGameplayAbilityTargetDataHandle& Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_BloodstainedBlade_C", "Cancelled_BB77A930441E6D8286CAEB903C4A9D74");

	Params::GA_BloodstainedBlade_C_Cancelled_BB77A930441E6D8286CAEB903C4A9D74 Parms{};

	Parms.Data = std::move(Data);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_BloodstainedBlade.GA_BloodstainedBlade_C.ExecuteUbergraph_GA_BloodstainedBlade
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_BloodstainedBlade_C::ExecuteUbergraph_GA_BloodstainedBlade(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_BloodstainedBlade_C", "ExecuteUbergraph_GA_BloodstainedBlade");

	Params::GA_BloodstainedBlade_C_ExecuteUbergraph_GA_BloodstainedBlade Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_BloodstainedBlade.GA_BloodstainedBlade_C.ValidData_BB77A930441E6D8286CAEB903C4A9D74
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle Data                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_BloodstainedBlade_C::ValidData_BB77A930441E6D8286CAEB903C4A9D74(const struct FGameplayAbilityTargetDataHandle& Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_BloodstainedBlade_C", "ValidData_BB77A930441E6D8286CAEB903C4A9D74");

	Params::GA_BloodstainedBlade_C_ValidData_BB77A930441E6D8286CAEB903C4A9D74 Parms{};

	Parms.Data = std::move(Data);

	UObject::ProcessEvent(Func, &Parms);
}

}

