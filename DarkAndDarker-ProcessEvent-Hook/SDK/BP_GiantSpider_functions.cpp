#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GiantSpider

#include "Basic.hpp"

#include "BP_GiantSpider_classes.hpp"
#include "BP_GiantSpider_parameters.hpp"


namespace SDK
{

// Function BP_GiantSpider.BP_GiantSpider_C.ExecuteUbergraph_BP_GiantSpider
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GiantSpider_C::ExecuteUbergraph_BP_GiantSpider(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GiantSpider_C", "ExecuteUbergraph_BP_GiantSpider");

	Params::BP_GiantSpider_C_ExecuteUbergraph_BP_GiantSpider Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GiantSpider.BP_GiantSpider_C.GameplayTagUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     InGameplayTag                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// int32                                   InCount                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GiantSpider_C::GameplayTagUpdated(const struct FGameplayTag& InGameplayTag, int32 InCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GiantSpider_C", "GameplayTagUpdated");

	Params::BP_GiantSpider_C_GameplayTagUpdated Parms{};

	Parms.InGameplayTag = std::move(InGameplayTag);
	Parms.InCount = InCount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GiantSpider.BP_GiantSpider_C.OnSetAI
// (Event, Protected, BlueprintEvent)

void ABP_GiantSpider_C::OnSetAI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GiantSpider_C", "OnSetAI");

	UObject::ProcessEvent(Func, nullptr);
}

}

