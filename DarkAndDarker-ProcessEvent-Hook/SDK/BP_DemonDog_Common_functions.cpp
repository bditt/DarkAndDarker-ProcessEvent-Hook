#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DemonDog_Common

#include "Basic.hpp"

#include "BP_DemonDog_Common_classes.hpp"
#include "BP_DemonDog_Common_parameters.hpp"


namespace SDK
{

// Function BP_DemonDog_Common.BP_DemonDog_Common_C.Added_2CE881894DEE30E678B9548D67969F60
// (BlueprintCallable, BlueprintEvent)

void ABP_DemonDog_Common_C::Added_2CE881894DEE30E678B9548D67969F60()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DemonDog_Common_C", "Added_2CE881894DEE30E678B9548D67969F60");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DemonDog_Common.BP_DemonDog_Common_C.ExecuteUbergraph_BP_DemonDog_Common
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DemonDog_Common_C::ExecuteUbergraph_BP_DemonDog_Common(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DemonDog_Common_C", "ExecuteUbergraph_BP_DemonDog_Common");

	Params::BP_DemonDog_Common_C_ExecuteUbergraph_BP_DemonDog_Common Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DemonDog_Common.BP_DemonDog_Common_C.GameplayTagUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     InGameplayTag                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// int32                                   InCount                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DemonDog_Common_C::GameplayTagUpdated(const struct FGameplayTag& InGameplayTag, int32 InCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DemonDog_Common_C", "GameplayTagUpdated");

	Params::BP_DemonDog_Common_C_GameplayTagUpdated Parms{};

	Parms.InGameplayTag = std::move(InGameplayTag);
	Parms.InCount = InCount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DemonDog_Common.BP_DemonDog_Common_C.OnSetAI
// (Event, Protected, BlueprintEvent)

void ABP_DemonDog_Common_C::OnSetAI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DemonDog_Common_C", "OnSetAI");

	UObject::ProcessEvent(Func, nullptr);
}

}

