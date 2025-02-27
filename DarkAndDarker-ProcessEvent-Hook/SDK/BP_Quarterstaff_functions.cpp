#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Quarterstaff

#include "Basic.hpp"

#include "BP_Quarterstaff_classes.hpp"
#include "BP_Quarterstaff_parameters.hpp"


namespace SDK
{

// Function BP_Quarterstaff.BP_Quarterstaff_C.ExecuteUbergraph_BP_Quarterstaff
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Quarterstaff_C::ExecuteUbergraph_BP_Quarterstaff(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Quarterstaff_C", "ExecuteUbergraph_BP_Quarterstaff");

	Params::BP_Quarterstaff_C_ExecuteUbergraph_BP_Quarterstaff Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Quarterstaff.BP_Quarterstaff_C.GameplayTagUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     InGameplayTag                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// int32                                   InCount                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Quarterstaff_C::GameplayTagUpdated(const struct FGameplayTag& InGameplayTag, int32 InCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Quarterstaff_C", "GameplayTagUpdated");

	Params::BP_Quarterstaff_C_GameplayTagUpdated Parms{};

	Parms.InGameplayTag = std::move(InGameplayTag);
	Parms.InCount = InCount;

	UObject::ProcessEvent(Func, &Parms);
}

}

