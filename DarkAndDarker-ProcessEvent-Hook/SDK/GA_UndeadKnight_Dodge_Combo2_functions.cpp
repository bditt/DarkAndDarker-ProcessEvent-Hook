#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_UndeadKnight_Dodge_Combo2

#include "Basic.hpp"

#include "GA_UndeadKnight_Dodge_Combo2_classes.hpp"
#include "GA_UndeadKnight_Dodge_Combo2_parameters.hpp"


namespace SDK
{

// Function GA_UndeadKnight_Dodge_Combo2.GA_UndeadKnight_Dodge_Combo2_C.AbilityActivated
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               TriggerEventData                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_UndeadKnight_Dodge_Combo2_C::AbilityActivated(const struct FGameplayEventData& TriggerEventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_UndeadKnight_Dodge_Combo2_C", "AbilityActivated");

	Params::GA_UndeadKnight_Dodge_Combo2_C_AbilityActivated Parms{};

	Parms.TriggerEventData = std::move(TriggerEventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_UndeadKnight_Dodge_Combo2.GA_UndeadKnight_Dodge_Combo2_C.EventReceived_8DB53CC341DA1261AF9E4693B61AEA7D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_UndeadKnight_Dodge_Combo2_C::EventReceived_8DB53CC341DA1261AF9E4693B61AEA7D(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_UndeadKnight_Dodge_Combo2_C", "EventReceived_8DB53CC341DA1261AF9E4693B61AEA7D");

	Params::GA_UndeadKnight_Dodge_Combo2_C_EventReceived_8DB53CC341DA1261AF9E4693B61AEA7D Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_UndeadKnight_Dodge_Combo2.GA_UndeadKnight_Dodge_Combo2_C.ExecuteUbergraph_GA_UndeadKnight_Dodge_Combo2
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_UndeadKnight_Dodge_Combo2_C::ExecuteUbergraph_GA_UndeadKnight_Dodge_Combo2(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_UndeadKnight_Dodge_Combo2_C", "ExecuteUbergraph_GA_UndeadKnight_Dodge_Combo2");

	Params::GA_UndeadKnight_Dodge_Combo2_C_ExecuteUbergraph_GA_UndeadKnight_Dodge_Combo2 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

