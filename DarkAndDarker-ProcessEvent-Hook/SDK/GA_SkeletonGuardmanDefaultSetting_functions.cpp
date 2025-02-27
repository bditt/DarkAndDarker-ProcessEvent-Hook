#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_SkeletonGuardmanDefaultSetting

#include "Basic.hpp"

#include "GA_SkeletonGuardmanDefaultSetting_classes.hpp"
#include "GA_SkeletonGuardmanDefaultSetting_parameters.hpp"


namespace SDK
{

// Function GA_SkeletonGuardmanDefaultSetting.GA_SkeletonGuardmanDefaultSetting_C.AbilityActivated
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               TriggerEventData                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_SkeletonGuardmanDefaultSetting_C::AbilityActivated(const struct FGameplayEventData& TriggerEventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_SkeletonGuardmanDefaultSetting_C", "AbilityActivated");

	Params::GA_SkeletonGuardmanDefaultSetting_C_AbilityActivated Parms{};

	Parms.TriggerEventData = std::move(TriggerEventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_SkeletonGuardmanDefaultSetting.GA_SkeletonGuardmanDefaultSetting_C.EventReceived_2B77E3CC4AD34889AA615EA96094536E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     EventTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData               EventData                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_SkeletonGuardmanDefaultSetting_C::EventReceived_2B77E3CC4AD34889AA615EA96094536E(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_SkeletonGuardmanDefaultSetting_C", "EventReceived_2B77E3CC4AD34889AA615EA96094536E");

	Params::GA_SkeletonGuardmanDefaultSetting_C_EventReceived_2B77E3CC4AD34889AA615EA96094536E Parms{};

	Parms.EventTag = std::move(EventTag);
	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_SkeletonGuardmanDefaultSetting.GA_SkeletonGuardmanDefaultSetting_C.ExecuteUbergraph_GA_SkeletonGuardmanDefaultSetting
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_SkeletonGuardmanDefaultSetting_C::ExecuteUbergraph_GA_SkeletonGuardmanDefaultSetting(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_SkeletonGuardmanDefaultSetting_C", "ExecuteUbergraph_GA_SkeletonGuardmanDefaultSetting");

	Params::GA_SkeletonGuardmanDefaultSetting_C_ExecuteUbergraph_GA_SkeletonGuardmanDefaultSetting Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

