#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Torch

#include "Basic.hpp"

#include "BP_Torch_classes.hpp"
#include "BP_Torch_parameters.hpp"


namespace SDK
{

// Function BP_Torch.BP_Torch_C.ExecuteUbergraph_BP_Torch
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Torch_C::ExecuteUbergraph_BP_Torch(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Torch_C", "ExecuteUbergraph_BP_Torch");

	Params::BP_Torch_C_ExecuteUbergraph_BP_Torch Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Torch.BP_Torch_C.FX_UpdateMaterial
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsActivating                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Torch_C::FX_UpdateMaterial(bool IsActivating)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Torch_C", "FX_UpdateMaterial");

	Params::BP_Torch_C_FX_UpdateMaterial Parms{};

	Parms.IsActivating = IsActivating;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Torch.BP_Torch_C.GameplayTagUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     InGameplayTag                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// int32                                   InCount                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Torch_C::GameplayTagUpdated(const struct FGameplayTag& InGameplayTag, int32 InCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Torch_C", "GameplayTagUpdated");

	Params::BP_Torch_C_GameplayTagUpdated Parms{};

	Parms.InGameplayTag = std::move(InGameplayTag);
	Parms.InCount = InCount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Torch.BP_Torch_C.OnAttachedSheathSocket
// (Event, Protected, BlueprintEvent)

void ABP_Torch_C::OnAttachedSheathSocket()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Torch_C", "OnAttachedSheathSocket");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Torch.BP_Torch_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ABP_Torch_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Torch_C", "Timeline_0__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Torch.BP_Torch_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ABP_Torch_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Torch_C", "Timeline_0__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Torch.BP_Torch_C.Timeline_1__FinishedFunc
// (BlueprintEvent)

void ABP_Torch_C::Timeline_1__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Torch_C", "Timeline_1__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Torch.BP_Torch_C.Timeline_1__UpdateFunc
// (BlueprintEvent)

void ABP_Torch_C::Timeline_1__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Torch_C", "Timeline_1__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Torch.BP_Torch_C.Turnoff0__FinishedFunc
// (BlueprintEvent)

void ABP_Torch_C::Turnoff0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Torch_C", "Turnoff0__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Torch.BP_Torch_C.Turnoff0__UpdateFunc
// (BlueprintEvent)

void ABP_Torch_C::Turnoff0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Torch_C", "Turnoff0__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Torch.BP_Torch_C.Turnon0__FinishedFunc
// (BlueprintEvent)

void ABP_Torch_C::Turnon0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Torch_C", "Turnon0__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Torch.BP_Torch_C.Turnon0__UpdateFunc
// (BlueprintEvent)

void ABP_Torch_C::Turnon0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Torch_C", "Turnon0__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}

}

