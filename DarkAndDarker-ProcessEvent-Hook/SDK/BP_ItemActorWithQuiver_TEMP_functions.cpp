#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ItemActorWithQuiver_TEMP

#include "Basic.hpp"

#include "BP_ItemActorWithQuiver_TEMP_classes.hpp"
#include "BP_ItemActorWithQuiver_TEMP_parameters.hpp"


namespace SDK
{

// Function BP_ItemActorWithQuiver_TEMP.BP_ItemActorWithQuiver_TEMP_C.AmmoCountUpdated
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ItemActorWithQuiver_TEMP_C::AmmoCountUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ItemActorWithQuiver_TEMP_C", "AmmoCountUpdated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ItemActorWithQuiver_TEMP.BP_ItemActorWithQuiver_TEMP_C.AttachQuiverMeshComponentToSocket
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             InSocketName                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemActorWithQuiver_TEMP_C::AttachQuiverMeshComponentToSocket(class FName InSocketName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ItemActorWithQuiver_TEMP_C", "AttachQuiverMeshComponentToSocket");

	Params::BP_ItemActorWithQuiver_TEMP_C_AttachQuiverMeshComponentToSocket Parms{};

	Parms.InSocketName = InSocketName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ItemActorWithQuiver_TEMP.BP_ItemActorWithQuiver_TEMP_C.ExecuteUbergraph_BP_ItemActorWithQuiver_TEMP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemActorWithQuiver_TEMP_C::ExecuteUbergraph_BP_ItemActorWithQuiver_TEMP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ItemActorWithQuiver_TEMP_C", "ExecuteUbergraph_BP_ItemActorWithQuiver_TEMP");

	Params::BP_ItemActorWithQuiver_TEMP_C_ExecuteUbergraph_BP_ItemActorWithQuiver_TEMP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ItemActorWithQuiver_TEMP.BP_ItemActorWithQuiver_TEMP_C.OnAttachedEquipSocket
// (Event, Protected, BlueprintEvent)

void ABP_ItemActorWithQuiver_TEMP_C::OnAttachedEquipSocket()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ItemActorWithQuiver_TEMP_C", "OnAttachedEquipSocket");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ItemActorWithQuiver_TEMP.BP_ItemActorWithQuiver_TEMP_C.OnAttachedSheathSocket
// (Event, Protected, BlueprintEvent)

void ABP_ItemActorWithQuiver_TEMP_C::OnAttachedSheathSocket()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ItemActorWithQuiver_TEMP_C", "OnAttachedSheathSocket");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ItemActorWithQuiver_TEMP.BP_ItemActorWithQuiver_TEMP_C.OnAttachmentReplication
// (Event, Protected, BlueprintEvent)

void ABP_ItemActorWithQuiver_TEMP_C::OnAttachmentReplication()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ItemActorWithQuiver_TEMP_C", "OnAttachmentReplication");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ItemActorWithQuiver_TEMP.BP_ItemActorWithQuiver_TEMP_C.OnMessageReceived_1405972642FA7B590F2BD9AFA6734179
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMsgBaseNode*                     ProxyObject                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_ItemActorWithQuiver_TEMP_C::OnMessageReceived_1405972642FA7B590F2BD9AFA6734179(class UMsgBaseNode* ProxyObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ItemActorWithQuiver_TEMP_C", "OnMessageReceived_1405972642FA7B590F2BD9AFA6734179");

	Params::BP_ItemActorWithQuiver_TEMP_C_OnMessageReceived_1405972642FA7B590F2BD9AFA6734179 Parms{};

	Parms.ProxyObject = ProxyObject;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ItemActorWithQuiver_TEMP.BP_ItemActorWithQuiver_TEMP_C.OnMontageFinished
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_ItemActorWithQuiver_TEMP_C::OnMontageFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ItemActorWithQuiver_TEMP_C", "OnMontageFinished");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ItemActorWithQuiver_TEMP.BP_ItemActorWithQuiver_TEMP_C.PreReduceAmmoCount
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                                   ReduceCount                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemActorWithQuiver_TEMP_C::PreReduceAmmoCount(int32 ReduceCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ItemActorWithQuiver_TEMP_C", "PreReduceAmmoCount");

	Params::BP_ItemActorWithQuiver_TEMP_C_PreReduceAmmoCount Parms{};

	Parms.ReduceCount = ReduceCount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ItemActorWithQuiver_TEMP.BP_ItemActorWithQuiver_TEMP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ItemActorWithQuiver_TEMP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ItemActorWithQuiver_TEMP_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

