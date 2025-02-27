#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LavaMonster_Common

#include "Basic.hpp"

#include "BP_LavaMonster_Common_classes.hpp"
#include "BP_LavaMonster_Common_parameters.hpp"


namespace SDK
{

// Function BP_LavaMonster_Common.BP_LavaMonster_Common_C.BndEvt__BP_Lich_DCGameObjectLink_K2Node_ComponentBoundEvent_3_DCGameObjectLinkComponentUMsgGameLinkerRequest__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// struct FObjectLinkRequestEvent          RecvEvent                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObjectLinkMetaDataBlueprint*     SendEventParam                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_LavaMonster_Common_C::BndEvt__BP_Lich_DCGameObjectLink_K2Node_ComponentBoundEvent_3_DCGameObjectLinkComponentUMsgGameLinkerRequest__DelegateSignature(const struct FObjectLinkRequestEvent& RecvEvent, class UObjectLinkMetaDataBlueprint* SendEventParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LavaMonster_Common_C", "BndEvt__BP_Lich_DCGameObjectLink_K2Node_ComponentBoundEvent_3_DCGameObjectLinkComponentUMsgGameLinkerRequest__DelegateSignature");

	Params::BP_LavaMonster_Common_C_BndEvt__BP_Lich_DCGameObjectLink_K2Node_ComponentBoundEvent_3_DCGameObjectLinkComponentUMsgGameLinkerRequest__DelegateSignature Parms{};

	Parms.RecvEvent = std::move(RecvEvent);
	Parms.SendEventParam = SendEventParam;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LavaMonster_Common.BP_LavaMonster_Common_C.Call Wake Up
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_LavaMonster_Common_C::Call_Wake_Up()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LavaMonster_Common_C", "Call Wake Up");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LavaMonster_Common.BP_LavaMonster_Common_C.ExecuteUbergraph_BP_LavaMonster_Common
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LavaMonster_Common_C::ExecuteUbergraph_BP_LavaMonster_Common(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LavaMonster_Common_C", "ExecuteUbergraph_BP_LavaMonster_Common");

	Params::BP_LavaMonster_Common_C_ExecuteUbergraph_BP_LavaMonster_Common Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LavaMonster_Common.BP_LavaMonster_Common_C.GameplayTagUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     InGameplayTag                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// int32                                   InCount                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LavaMonster_Common_C::GameplayTagUpdated(const struct FGameplayTag& InGameplayTag, int32 InCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LavaMonster_Common_C", "GameplayTagUpdated");

	Params::BP_LavaMonster_Common_C_GameplayTagUpdated Parms{};

	Parms.InGameplayTag = std::move(InGameplayTag);
	Parms.InCount = InCount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LavaMonster_Common.BP_LavaMonster_Common_C.MoveFailTimeout
// (BlueprintCallable, BlueprintEvent)

void ABP_LavaMonster_Common_C::MoveFailTimeout()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LavaMonster_Common_C", "MoveFailTimeout");

	UObject::ProcessEvent(Func, nullptr);
}

}

