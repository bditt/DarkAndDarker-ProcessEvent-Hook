#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_RayOfDarkness

#include "Basic.hpp"

#include "GA_RayOfDarkness_classes.hpp"
#include "GA_RayOfDarkness_parameters.hpp"


namespace SDK
{

// Function GA_RayOfDarkness.GA_RayOfDarkness_C.AbilityActivated_BP
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               TriggerEventData                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    bIsSocketSightBlocked                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_RayOfDarkness_C::AbilityActivated_BP(const struct FGameplayEventData& TriggerEventData, bool bIsSocketSightBlocked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_RayOfDarkness_C", "AbilityActivated_BP");

	Params::GA_RayOfDarkness_C_AbilityActivated_BP Parms{};

	Parms.TriggerEventData = std::move(TriggerEventData);
	Parms.bIsSocketSightBlocked = bIsSocketSightBlocked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_RayOfDarkness.GA_RayOfDarkness_C.Cancelled_98E6F47F408C6A76B4B087A4F907F7D4
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle Data                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_RayOfDarkness_C::Cancelled_98E6F47F408C6A76B4B087A4F907F7D4(const struct FGameplayAbilityTargetDataHandle& Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_RayOfDarkness_C", "Cancelled_98E6F47F408C6A76B4B087A4F907F7D4");

	Params::GA_RayOfDarkness_C_Cancelled_98E6F47F408C6A76B4B087A4F907F7D4 Parms{};

	Parms.Data = std::move(Data);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_RayOfDarkness.GA_RayOfDarkness_C.ExecuteUbergraph_GA_RayOfDarkness
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_RayOfDarkness_C::ExecuteUbergraph_GA_RayOfDarkness(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_RayOfDarkness_C", "ExecuteUbergraph_GA_RayOfDarkness");

	Params::GA_RayOfDarkness_C_ExecuteUbergraph_GA_RayOfDarkness Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_RayOfDarkness.GA_RayOfDarkness_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_RayOfDarkness_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_RayOfDarkness_C", "K2_OnEndAbility");

	Params::GA_RayOfDarkness_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_RayOfDarkness.GA_RayOfDarkness_C.RemoveAppliedEffectFromPrevTarget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGA_RayOfDarkness_C::RemoveAppliedEffectFromPrevTarget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_RayOfDarkness_C", "RemoveAppliedEffectFromPrevTarget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_RayOfDarkness.GA_RayOfDarkness_C.ValidData_98E6F47F408C6A76B4B087A4F907F7D4
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle Data                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_RayOfDarkness_C::ValidData_98E6F47F408C6A76B4B087A4F907F7D4(const struct FGameplayAbilityTargetDataHandle& Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_RayOfDarkness_C", "ValidData_98E6F47F408C6A76B4B087A4F907F7D4");

	Params::GA_RayOfDarkness_C_ValidData_98E6F47F408C6A76B4B087A4F907F7D4 Parms{};

	Parms.Data = std::move(Data);

	UObject::ProcessEvent(Func, &Parms);
}

}

