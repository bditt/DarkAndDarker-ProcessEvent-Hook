#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_ExplosiveBottleActivateOnEquip

#include "Basic.hpp"

#include "GA_ExplosiveBottleActivateOnEquip_classes.hpp"
#include "GA_ExplosiveBottleActivateOnEquip_parameters.hpp"


namespace SDK
{

// Function GA_ExplosiveBottleActivateOnEquip.GA_ExplosiveBottleActivateOnEquip_C.Deactivated
// (Event, Protected, BlueprintEvent)

void UGA_ExplosiveBottleActivateOnEquip_C::Deactivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_ExplosiveBottleActivateOnEquip_C", "Deactivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_ExplosiveBottleActivateOnEquip.GA_ExplosiveBottleActivateOnEquip_C.ExecuteUbergraph_GA_ExplosiveBottleActivateOnEquip
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_ExplosiveBottleActivateOnEquip_C::ExecuteUbergraph_GA_ExplosiveBottleActivateOnEquip(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_ExplosiveBottleActivateOnEquip_C", "ExecuteUbergraph_GA_ExplosiveBottleActivateOnEquip");

	Params::GA_ExplosiveBottleActivateOnEquip_C_ExecuteUbergraph_GA_ExplosiveBottleActivateOnEquip Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

