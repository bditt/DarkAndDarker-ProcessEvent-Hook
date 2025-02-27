#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FrostSkeletonFootmanFromFakeDeath

#include "Basic.hpp"

#include "BP_FrostSkeletonFootmanFromFakeDeath_classes.hpp"
#include "BP_FrostSkeletonFootmanFromFakeDeath_parameters.hpp"


namespace SDK
{

// Function BP_FrostSkeletonFootmanFromFakeDeath.BP_FrostSkeletonFootmanFromFakeDeath_C.ExecuteUbergraph_BP_FrostSkeletonFootmanFromFakeDeath
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FrostSkeletonFootmanFromFakeDeath_C::ExecuteUbergraph_BP_FrostSkeletonFootmanFromFakeDeath(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FrostSkeletonFootmanFromFakeDeath_C", "ExecuteUbergraph_BP_FrostSkeletonFootmanFromFakeDeath");

	Params::BP_FrostSkeletonFootmanFromFakeDeath_C_ExecuteUbergraph_BP_FrostSkeletonFootmanFromFakeDeath Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FrostSkeletonFootmanFromFakeDeath.BP_FrostSkeletonFootmanFromFakeDeath_C.GameplayTagUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     InGameplayTag                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// int32                                   InCount                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FrostSkeletonFootmanFromFakeDeath_C::GameplayTagUpdated(const struct FGameplayTag& InGameplayTag, int32 InCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FrostSkeletonFootmanFromFakeDeath_C", "GameplayTagUpdated");

	Params::BP_FrostSkeletonFootmanFromFakeDeath_C_GameplayTagUpdated Parms{};

	Parms.InGameplayTag = std::move(InGameplayTag);
	Parms.InCount = InCount;

	UObject::ProcessEvent(Func, &Parms);
}

}

