#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MetaPlayerController

#include "Basic.hpp"

#include "BP_MetaPlayerController_classes.hpp"
#include "BP_MetaPlayerController_parameters.hpp"


namespace SDK
{

// Function BP_MetaPlayerController.BP_MetaPlayerController_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MetaPlayerController_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MetaPlayerController_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MetaPlayerController.BP_MetaPlayerController_C.UpdateGameState
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameStateData                   InGameStateData                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void ABP_MetaPlayerController_C::UpdateGameState(const struct FGameStateData& InGameStateData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MetaPlayerController_C", "UpdateGameState");

	Params::BP_MetaPlayerController_C_UpdateGameState Parms{};

	Parms.InGameStateData = std::move(InGameStateData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MetaPlayerController.BP_MetaPlayerController_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MetaPlayerController_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MetaPlayerController_C", "ReceiveEndPlay");

	Params::BP_MetaPlayerController_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MetaPlayerController.BP_MetaPlayerController_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MetaPlayerController_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MetaPlayerController_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MetaPlayerController.BP_MetaPlayerController_C.OnMessageReceived_3755F1624595889A6EF5B7AC11AD61F2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMsgBaseNode*                     ProxyObject                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MetaPlayerController_C::OnMessageReceived_3755F1624595889A6EF5B7AC11AD61F2(class UMsgBaseNode* ProxyObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MetaPlayerController_C", "OnMessageReceived_3755F1624595889A6EF5B7AC11AD61F2");

	Params::BP_MetaPlayerController_C_OnMessageReceived_3755F1624595889A6EF5B7AC11AD61F2 Parms{};

	Parms.ProxyObject = ProxyObject;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MetaPlayerController.BP_MetaPlayerController_C.OnLoadSoundData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Object                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MetaPlayerController_C::OnLoadSoundData(class UObject* Object)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MetaPlayerController_C", "OnLoadSoundData");

	Params::BP_MetaPlayerController_C_OnLoadSoundData Parms{};

	Parms.Object = Object;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MetaPlayerController.BP_MetaPlayerController_C.FreeMouse
// (BlueprintCallable, BlueprintEvent)

void ABP_MetaPlayerController_C::FreeMouse()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MetaPlayerController_C", "FreeMouse");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MetaPlayerController.BP_MetaPlayerController_C.ExecuteUbergraph_BP_MetaPlayerController
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MetaPlayerController_C::ExecuteUbergraph_BP_MetaPlayerController(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MetaPlayerController_C", "ExecuteUbergraph_BP_MetaPlayerController");

	Params::BP_MetaPlayerController_C_ExecuteUbergraph_BP_MetaPlayerController Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MetaPlayerController.BP_MetaPlayerController_C.EventFMsgSucceedWidgetMoveItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMsgSucceedWidgetMoveItem        Msg                                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_MetaPlayerController_C::EventFMsgSucceedWidgetMoveItem(const struct FMsgSucceedWidgetMoveItem& Msg)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MetaPlayerController_C", "EventFMsgSucceedWidgetMoveItem");

	Params::BP_MetaPlayerController_C_EventFMsgSucceedWidgetMoveItem Parms{};

	Parms.Msg = std::move(Msg);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MetaPlayerController.BP_MetaPlayerController_C.BndEvt__BP_MetaPlayerController_DCMetaTradeComponent_K2Node_ComponentBoundEvent_0_DCTradeSucceedEvent__DelegateSignature
// (BlueprintEvent)

void ABP_MetaPlayerController_C::BndEvt__BP_MetaPlayerController_DCMetaTradeComponent_K2Node_ComponentBoundEvent_0_DCTradeSucceedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MetaPlayerController_C", "BndEvt__BP_MetaPlayerController_DCMetaTradeComponent_K2Node_ComponentBoundEvent_0_DCTradeSucceedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MetaPlayerController.BP_MetaPlayerController_C.BindMouse
// (BlueprintCallable, BlueprintEvent)

void ABP_MetaPlayerController_C::BindMouse()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MetaPlayerController_C", "BindMouse");

	UObject::ProcessEvent(Func, nullptr);
}

}

