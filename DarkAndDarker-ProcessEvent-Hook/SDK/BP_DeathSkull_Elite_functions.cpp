#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DeathSkull_Elite

#include "Basic.hpp"

#include "BP_DeathSkull_Elite_classes.hpp"
#include "BP_DeathSkull_Elite_parameters.hpp"


namespace SDK
{

// Function BP_DeathSkull_Elite.BP_DeathSkull_Elite_C.ExecuteUbergraph_BP_DeathSkull_Elite
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DeathSkull_Elite_C::ExecuteUbergraph_BP_DeathSkull_Elite(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DeathSkull_Elite_C", "ExecuteUbergraph_BP_DeathSkull_Elite");

	Params::BP_DeathSkull_Elite_C_ExecuteUbergraph_BP_DeathSkull_Elite Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

