#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Mimic_Large_Base

#include "Basic.hpp"

#include "BP_Mimic_Large_Base_classes.hpp"
#include "BP_Mimic_Large_Base_parameters.hpp"


namespace SDK
{

// Function BP_Mimic_Large_Base.BP_Mimic_Large_Base_C.ExecuteUbergraph_BP_Mimic_Large_Base
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Mimic_Large_Base_C::ExecuteUbergraph_BP_Mimic_Large_Base(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Mimic_Large_Base_C", "ExecuteUbergraph_BP_Mimic_Large_Base");

	Params::BP_Mimic_Large_Base_C_ExecuteUbergraph_BP_Mimic_Large_Base Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Mimic_Large_Base.BP_Mimic_Large_Base_C.GameplayTagUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     InGameplayTag                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// int32                                   InCount                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Mimic_Large_Base_C::GameplayTagUpdated(const struct FGameplayTag& InGameplayTag, int32 InCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Mimic_Large_Base_C", "GameplayTagUpdated");

	Params::BP_Mimic_Large_Base_C_GameplayTagUpdated Parms{};

	Parms.InGameplayTag = std::move(InGameplayTag);
	Parms.InCount = InCount;

	UObject::ProcessEvent(Func, &Parms);
}

}

