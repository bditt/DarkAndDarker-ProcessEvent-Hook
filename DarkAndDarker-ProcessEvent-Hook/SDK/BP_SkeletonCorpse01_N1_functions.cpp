#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SkeletonCorpse01_N1

#include "Basic.hpp"

#include "BP_SkeletonCorpse01_N1_classes.hpp"
#include "BP_SkeletonCorpse01_N1_parameters.hpp"


namespace SDK
{

// Function BP_SkeletonCorpse01_N1.BP_SkeletonCorpse01_N1_C.ExecuteUbergraph_BP_SkeletonCorpse01_N1
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkeletonCorpse01_N1_C::ExecuteUbergraph_BP_SkeletonCorpse01_N1(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkeletonCorpse01_N1_C", "ExecuteUbergraph_BP_SkeletonCorpse01_N1");

	Params::BP_SkeletonCorpse01_N1_C_ExecuteUbergraph_BP_SkeletonCorpse01_N1 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkeletonCorpse01_N1.BP_SkeletonCorpse01_N1_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SkeletonCorpse01_N1_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkeletonCorpse01_N1_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

