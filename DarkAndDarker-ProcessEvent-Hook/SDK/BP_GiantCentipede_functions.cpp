#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GiantCentipede

#include "Basic.hpp"

#include "BP_GiantCentipede_classes.hpp"
#include "BP_GiantCentipede_parameters.hpp"


namespace SDK
{

// Function BP_GiantCentipede.BP_GiantCentipede_C.ExecuteUbergraph_BP_GiantCentipede
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GiantCentipede_C::ExecuteUbergraph_BP_GiantCentipede(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GiantCentipede_C", "ExecuteUbergraph_BP_GiantCentipede");

	Params::BP_GiantCentipede_C_ExecuteUbergraph_BP_GiantCentipede Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GiantCentipede.BP_GiantCentipede_C.GameplayTagUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     InGameplayTag                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// int32                                   InCount                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GiantCentipede_C::GameplayTagUpdated(const struct FGameplayTag& InGameplayTag, int32 InCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GiantCentipede_C", "GameplayTagUpdated");

	Params::BP_GiantCentipede_C_GameplayTagUpdated Parms{};

	Parms.InGameplayTag = std::move(InGameplayTag);
	Parms.InCount = InCount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GiantCentipede.BP_GiantCentipede_C.OnFMsgGASAttributeNotifyBlueprint
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FMsgGASAttributeNotify           InMsg                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void ABP_GiantCentipede_C::OnFMsgGASAttributeNotifyBlueprint(const struct FMsgGASAttributeNotify& InMsg)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GiantCentipede_C", "OnFMsgGASAttributeNotifyBlueprint");

	Params::BP_GiantCentipede_C_OnFMsgGASAttributeNotifyBlueprint Parms{};

	Parms.InMsg = std::move(InMsg);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GiantCentipede.BP_GiantCentipede_C.OnSetAI
// (Event, Protected, BlueprintEvent)

void ABP_GiantCentipede_C::OnSetAI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GiantCentipede_C", "OnSetAI");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GiantCentipede.BP_GiantCentipede_C.RandomizePosition
// (BlueprintCallable, BlueprintEvent)

void ABP_GiantCentipede_C::RandomizePosition()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GiantCentipede_C", "RandomizePosition");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GiantCentipede.BP_GiantCentipede_C.Removed_52E302D841D5B338C73EF98C045E573C
// (BlueprintCallable, BlueprintEvent)

void ABP_GiantCentipede_C::Removed_52E302D841D5B338C73EF98C045E573C()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GiantCentipede_C", "Removed_52E302D841D5B338C73EF98C045E573C");

	UObject::ProcessEvent(Func, nullptr);
}

}

