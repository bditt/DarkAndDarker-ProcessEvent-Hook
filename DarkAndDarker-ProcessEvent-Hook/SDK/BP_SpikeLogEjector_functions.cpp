#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SpikeLogEjector

#include "Basic.hpp"

#include "BP_SpikeLogEjector_classes.hpp"
#include "BP_SpikeLogEjector_parameters.hpp"


namespace SDK
{

// Function BP_SpikeLogEjector.BP_SpikeLogEjector_C.Activate
// (BlueprintCallable, BlueprintEvent)

void ABP_SpikeLogEjector_C::Activate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SpikeLogEjector_C", "Activate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SpikeLogEjector.BP_SpikeLogEjector_C.BndEvt__BP_SpikeLogEjector_DCGameObjectLink_K2Node_ComponentBoundEvent_0_DCGameObjectLinkComponentGameObjectLinkEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// struct FObjectLinkRequestEvent          RecvEvent                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObjectLinkMetaDataBlueprint*     SendEventParam                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_SpikeLogEjector_C::BndEvt__BP_SpikeLogEjector_DCGameObjectLink_K2Node_ComponentBoundEvent_0_DCGameObjectLinkComponentGameObjectLinkEvent__DelegateSignature(const struct FObjectLinkRequestEvent& RecvEvent, class UObjectLinkMetaDataBlueprint* SendEventParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SpikeLogEjector_C", "BndEvt__BP_SpikeLogEjector_DCGameObjectLink_K2Node_ComponentBoundEvent_0_DCGameObjectLinkComponentGameObjectLinkEvent__DelegateSignature");

	Params::BP_SpikeLogEjector_C_BndEvt__BP_SpikeLogEjector_DCGameObjectLink_K2Node_ComponentBoundEvent_0_DCGameObjectLinkComponentGameObjectLinkEvent__DelegateSignature Parms{};

	Parms.RecvEvent = std::move(RecvEvent);
	Parms.SendEventParam = SendEventParam;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SpikeLogEjector.BP_SpikeLogEjector_C.CreateSpikeLog
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_SpikeLog_C*                   SpikeLog                                               (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_SpikeLogEjector_C::CreateSpikeLog(class ABP_SpikeLog_C** SpikeLog)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SpikeLogEjector_C", "CreateSpikeLog");

	Params::BP_SpikeLogEjector_C_CreateSpikeLog Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (SpikeLog != nullptr)
		*SpikeLog = Parms.SpikeLog;
}


// Function BP_SpikeLogEjector.BP_SpikeLogEjector_C.EventMsgSound
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMsgSoundEvent                   InMsg                                                  (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_SpikeLogEjector_C::EventMsgSound(const struct FMsgSoundEvent& InMsg)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SpikeLogEjector_C", "EventMsgSound");

	Params::BP_SpikeLogEjector_C_EventMsgSound Parms{};

	Parms.InMsg = std::move(InMsg);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SpikeLogEjector.BP_SpikeLogEjector_C.ExecuteUbergraph_BP_SpikeLogEjector
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SpikeLogEjector_C::ExecuteUbergraph_BP_SpikeLogEjector(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SpikeLogEjector_C", "ExecuteUbergraph_BP_SpikeLogEjector");

	Params::BP_SpikeLogEjector_C_ExecuteUbergraph_BP_SpikeLogEjector Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SpikeLogEjector.BP_SpikeLogEjector_C.GameplayTagUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     InGameplayTag                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// int32                                   InCount                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SpikeLogEjector_C::GameplayTagUpdated(const struct FGameplayTag& InGameplayTag, int32 InCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SpikeLogEjector_C", "GameplayTagUpdated");

	Params::BP_SpikeLogEjector_C_GameplayTagUpdated Parms{};

	Parms.InGameplayTag = std::move(InGameplayTag);
	Parms.InCount = InCount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SpikeLogEjector.BP_SpikeLogEjector_C.InteractSucceed
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                           Interacter                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                     StateTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                     TriggerTag                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       HitResult                                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_SpikeLogEjector_C::InteractSucceed(class AActor* Interacter, const struct FGameplayTag& StateTag, const struct FGameplayTag& TriggerTag, const struct FHitResult& HitResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SpikeLogEjector_C", "InteractSucceed");

	Params::BP_SpikeLogEjector_C_InteractSucceed Parms{};

	Parms.Interacter = Interacter;
	Parms.StateTag = std::move(StateTag);
	Parms.TriggerTag = std::move(TriggerTag);
	Parms.HitResult = std::move(HitResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SpikeLogEjector.BP_SpikeLogEjector_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SpikeLogEjector_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SpikeLogEjector_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

