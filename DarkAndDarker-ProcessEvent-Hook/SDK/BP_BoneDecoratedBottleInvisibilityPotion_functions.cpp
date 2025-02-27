#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BoneDecoratedBottleInvisibilityPotion

#include "Basic.hpp"

#include "BP_BoneDecoratedBottleInvisibilityPotion_classes.hpp"
#include "BP_BoneDecoratedBottleInvisibilityPotion_parameters.hpp"


namespace SDK
{

// Function BP_BoneDecoratedBottleInvisibilityPotion.BP_BoneDecoratedBottleInvisibilityPotion_C.ExecuteUbergraph_BP_BoneDecoratedBottleInvisibilityPotion
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BoneDecoratedBottleInvisibilityPotion_C::ExecuteUbergraph_BP_BoneDecoratedBottleInvisibilityPotion(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BoneDecoratedBottleInvisibilityPotion_C", "ExecuteUbergraph_BP_BoneDecoratedBottleInvisibilityPotion");

	Params::BP_BoneDecoratedBottleInvisibilityPotion_C_ExecuteUbergraph_BP_BoneDecoratedBottleInvisibilityPotion Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BoneDecoratedBottleInvisibilityPotion.BP_BoneDecoratedBottleInvisibilityPotion_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_BoneDecoratedBottleInvisibilityPotion_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BoneDecoratedBottleInvisibilityPotion_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BoneDecoratedBottleInvisibilityPotion.BP_BoneDecoratedBottleInvisibilityPotion_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BoneDecoratedBottleInvisibilityPotion_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BoneDecoratedBottleInvisibilityPotion_C", "ReceiveTick");

	Params::BP_BoneDecoratedBottleInvisibilityPotion_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

}

