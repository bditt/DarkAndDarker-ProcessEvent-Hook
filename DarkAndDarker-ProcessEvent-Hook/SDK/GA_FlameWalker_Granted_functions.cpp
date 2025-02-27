#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_FlameWalker_Granted

#include "Basic.hpp"

#include "GA_FlameWalker_Granted_classes.hpp"
#include "GA_FlameWalker_Granted_parameters.hpp"


namespace SDK
{

// Function GA_FlameWalker_Granted.GA_FlameWalker_Granted_C.EventReceived_39E254914674AFEB62D45C9632F6F7D6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_FlameWalker_Granted_C::EventReceived_39E254914674AFEB62D45C9632F6F7D6(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_FlameWalker_Granted_C", "EventReceived_39E254914674AFEB62D45C9632F6F7D6");

	Params::GA_FlameWalker_Granted_C_EventReceived_39E254914674AFEB62D45C9632F6F7D6 Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_FlameWalker_Granted.GA_FlameWalker_Granted_C.ExecuteUbergraph_GA_FlameWalker_Granted
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_FlameWalker_Granted_C::ExecuteUbergraph_GA_FlameWalker_Granted(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_FlameWalker_Granted_C", "ExecuteUbergraph_GA_FlameWalker_Granted");

	Params::GA_FlameWalker_Granted_C_ExecuteUbergraph_GA_FlameWalker_Granted Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_FlameWalker_Granted.GA_FlameWalker_Granted_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               EventData                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_FlameWalker_Granted_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_FlameWalker_Granted_C", "K2_ActivateAbilityFromEvent");

	Params::GA_FlameWalker_Granted_C_K2_ActivateAbilityFromEvent Parms{};

	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_FlameWalker_Granted.GA_FlameWalker_Granted_C.Removed_DBA8F520476E8B218B4DE2BABE7C4358
// (BlueprintCallable, BlueprintEvent)

void UGA_FlameWalker_Granted_C::Removed_DBA8F520476E8B218B4DE2BABE7C4358()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_FlameWalker_Granted_C", "Removed_DBA8F520476E8B218B4DE2BABE7C4358");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_FlameWalker_Granted.GA_FlameWalker_Granted_C.SpawnAoe
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     InGameplayTag                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_FlameWalker_Granted_C::SpawnAoe(const struct FGameplayTag& InGameplayTag, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_FlameWalker_Granted_C", "SpawnAoe");

	Params::GA_FlameWalker_Granted_C_SpawnAoe Parms{};

	Parms.InGameplayTag = std::move(InGameplayTag);

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}

}

