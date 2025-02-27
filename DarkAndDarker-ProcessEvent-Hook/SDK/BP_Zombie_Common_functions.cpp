#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Zombie_Common

#include "Basic.hpp"

#include "BP_Zombie_Common_classes.hpp"
#include "BP_Zombie_Common_parameters.hpp"


namespace SDK
{

// Function BP_Zombie_Common.BP_Zombie_Common_C.ExecuteUbergraph_BP_Zombie_Common
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Zombie_Common_C::ExecuteUbergraph_BP_Zombie_Common(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Zombie_Common_C", "ExecuteUbergraph_BP_Zombie_Common");

	Params::BP_Zombie_Common_C_ExecuteUbergraph_BP_Zombie_Common Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Zombie_Common.BP_Zombie_Common_C.GameplayTagUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     InGameplayTag                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// int32                                   InCount                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Zombie_Common_C::GameplayTagUpdated(const struct FGameplayTag& InGameplayTag, int32 InCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Zombie_Common_C", "GameplayTagUpdated");

	Params::BP_Zombie_Common_C_GameplayTagUpdated Parms{};

	Parms.InGameplayTag = std::move(InGameplayTag);
	Parms.InCount = InCount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Zombie_Common.BP_Zombie_Common_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Zombie_Common_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Zombie_Common_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Zombie_Common.BP_Zombie_Common_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Zombie_Common_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Zombie_Common_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

