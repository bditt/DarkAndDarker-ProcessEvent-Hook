#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_HealingPotion

#include "Basic.hpp"

#include "BP_HealingPotion_classes.hpp"
#include "BP_HealingPotion_parameters.hpp"


namespace SDK
{

// Function BP_HealingPotion.BP_HealingPotion_C.ExecuteUbergraph_BP_HealingPotion
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HealingPotion_C::ExecuteUbergraph_BP_HealingPotion(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HealingPotion_C", "ExecuteUbergraph_BP_HealingPotion");

	Params::BP_HealingPotion_C_ExecuteUbergraph_BP_HealingPotion Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HealingPotion.BP_HealingPotion_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_HealingPotion_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HealingPotion_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_HealingPotion.BP_HealingPotion_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HealingPotion_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HealingPotion_C", "ReceiveTick");

	Params::BP_HealingPotion_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

}

