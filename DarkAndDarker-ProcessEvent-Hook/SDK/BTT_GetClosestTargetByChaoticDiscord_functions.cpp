#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTT_GetClosestTargetByChaoticDiscord

#include "Basic.hpp"

#include "BTT_GetClosestTargetByChaoticDiscord_classes.hpp"
#include "BTT_GetClosestTargetByChaoticDiscord_parameters.hpp"


namespace SDK
{

// Function BTT_GetClosestTargetByChaoticDiscord.BTT_GetClosestTargetByChaoticDiscord_C.ExecuteUbergraph_BTT_GetClosestTargetByChaoticDiscord
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTT_GetClosestTargetByChaoticDiscord_C::ExecuteUbergraph_BTT_GetClosestTargetByChaoticDiscord(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTT_GetClosestTargetByChaoticDiscord_C", "ExecuteUbergraph_BTT_GetClosestTargetByChaoticDiscord");

	Params::BTT_GetClosestTargetByChaoticDiscord_C_ExecuteUbergraph_BTT_GetClosestTargetByChaoticDiscord Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BTT_GetClosestTargetByChaoticDiscord.BTT_GetClosestTargetByChaoticDiscord_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*                    OwnerController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBTT_GetClosestTargetByChaoticDiscord_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTT_GetClosestTargetByChaoticDiscord_C", "ReceiveExecuteAI");

	Params::BTT_GetClosestTargetByChaoticDiscord_C_ReceiveExecuteAI Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}

}

