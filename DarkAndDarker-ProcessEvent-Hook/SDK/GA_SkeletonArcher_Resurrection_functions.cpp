#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_SkeletonArcher_Resurrection

#include "Basic.hpp"

#include "GA_SkeletonArcher_Resurrection_classes.hpp"
#include "GA_SkeletonArcher_Resurrection_parameters.hpp"


namespace SDK
{

// Function GA_SkeletonArcher_Resurrection.GA_SkeletonArcher_Resurrection_C.AbilityActivated
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               TriggerEventData                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_SkeletonArcher_Resurrection_C::AbilityActivated(const struct FGameplayEventData& TriggerEventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_SkeletonArcher_Resurrection_C", "AbilityActivated");

	Params::GA_SkeletonArcher_Resurrection_C_AbilityActivated Parms{};

	Parms.TriggerEventData = std::move(TriggerEventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_SkeletonArcher_Resurrection.GA_SkeletonArcher_Resurrection_C.EventReceived_EE1A77D54863A53E3BBD218F729DD03D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     EventTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData               EventData                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_SkeletonArcher_Resurrection_C::EventReceived_EE1A77D54863A53E3BBD218F729DD03D(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_SkeletonArcher_Resurrection_C", "EventReceived_EE1A77D54863A53E3BBD218F729DD03D");

	Params::GA_SkeletonArcher_Resurrection_C_EventReceived_EE1A77D54863A53E3BBD218F729DD03D Parms{};

	Parms.EventTag = std::move(EventTag);
	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_SkeletonArcher_Resurrection.GA_SkeletonArcher_Resurrection_C.ExecuteUbergraph_GA_SkeletonArcher_Resurrection
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_SkeletonArcher_Resurrection_C::ExecuteUbergraph_GA_SkeletonArcher_Resurrection(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_SkeletonArcher_Resurrection_C", "ExecuteUbergraph_GA_SkeletonArcher_Resurrection");

	Params::GA_SkeletonArcher_Resurrection_C_ExecuteUbergraph_GA_SkeletonArcher_Resurrection Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_SkeletonArcher_Resurrection.GA_SkeletonArcher_Resurrection_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_SkeletonArcher_Resurrection_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_SkeletonArcher_Resurrection_C", "K2_OnEndAbility");

	Params::GA_SkeletonArcher_Resurrection_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_SkeletonArcher_Resurrection.GA_SkeletonArcher_Resurrection_C.OnBlendOut_EE1A77D54863A53E3BBD218F729DD03D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     EventTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData               EventData                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_SkeletonArcher_Resurrection_C::OnBlendOut_EE1A77D54863A53E3BBD218F729DD03D(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_SkeletonArcher_Resurrection_C", "OnBlendOut_EE1A77D54863A53E3BBD218F729DD03D");

	Params::GA_SkeletonArcher_Resurrection_C_OnBlendOut_EE1A77D54863A53E3BBD218F729DD03D Parms{};

	Parms.EventTag = std::move(EventTag);
	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_SkeletonArcher_Resurrection.GA_SkeletonArcher_Resurrection_C.OnCancelled_EE1A77D54863A53E3BBD218F729DD03D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     EventTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData               EventData                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_SkeletonArcher_Resurrection_C::OnCancelled_EE1A77D54863A53E3BBD218F729DD03D(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_SkeletonArcher_Resurrection_C", "OnCancelled_EE1A77D54863A53E3BBD218F729DD03D");

	Params::GA_SkeletonArcher_Resurrection_C_OnCancelled_EE1A77D54863A53E3BBD218F729DD03D Parms{};

	Parms.EventTag = std::move(EventTag);
	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_SkeletonArcher_Resurrection.GA_SkeletonArcher_Resurrection_C.OnCompleted_EE1A77D54863A53E3BBD218F729DD03D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     EventTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData               EventData                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_SkeletonArcher_Resurrection_C::OnCompleted_EE1A77D54863A53E3BBD218F729DD03D(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_SkeletonArcher_Resurrection_C", "OnCompleted_EE1A77D54863A53E3BBD218F729DD03D");

	Params::GA_SkeletonArcher_Resurrection_C_OnCompleted_EE1A77D54863A53E3BBD218F729DD03D Parms{};

	Parms.EventTag = std::move(EventTag);
	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_SkeletonArcher_Resurrection.GA_SkeletonArcher_Resurrection_C.OnInterrupted_EE1A77D54863A53E3BBD218F729DD03D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     EventTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData               EventData                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_SkeletonArcher_Resurrection_C::OnInterrupted_EE1A77D54863A53E3BBD218F729DD03D(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_SkeletonArcher_Resurrection_C", "OnInterrupted_EE1A77D54863A53E3BBD218F729DD03D");

	Params::GA_SkeletonArcher_Resurrection_C_OnInterrupted_EE1A77D54863A53E3BBD218F729DD03D Parms{};

	Parms.EventTag = std::move(EventTag);
	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}

}

