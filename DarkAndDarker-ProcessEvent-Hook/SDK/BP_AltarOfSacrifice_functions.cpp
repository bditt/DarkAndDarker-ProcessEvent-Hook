#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AltarOfSacrifice

#include "Basic.hpp"

#include "BP_AltarOfSacrifice_classes.hpp"
#include "BP_AltarOfSacrifice_parameters.hpp"


namespace SDK
{

// Function BP_AltarOfSacrifice.BP_AltarOfSacrifice_C.BndEvt__BP_TorchOn_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_AltarOfSacrifice_C::BndEvt__BP_TorchOn_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AltarOfSacrifice_C", "BndEvt__BP_TorchOn_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	Params::BP_AltarOfSacrifice_C_BndEvt__BP_TorchOn_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AltarOfSacrifice.BP_AltarOfSacrifice_C.BndEvt__BP_TorchOn_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AltarOfSacrifice_C::BndEvt__BP_TorchOn_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AltarOfSacrifice_C", "BndEvt__BP_TorchOn_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	Params::BP_AltarOfSacrifice_C_BndEvt__BP_TorchOn_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AltarOfSacrifice.BP_AltarOfSacrifice_C.BroadcastSystemMessage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PlayerCharacter_C*            Param_Interacter                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                             SystemMessage                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_AltarOfSacrifice_C::BroadcastSystemMessage(class ABP_PlayerCharacter_C* Param_Interacter, const class FText& SystemMessage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AltarOfSacrifice_C", "BroadcastSystemMessage");

	Params::BP_AltarOfSacrifice_C_BroadcastSystemMessage Parms{};

	Parms.Param_Interacter = Param_Interacter;
	Parms.SystemMessage = std::move(SystemMessage);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AltarOfSacrifice.BP_AltarOfSacrifice_C.EffectResurrectionOff
// (BlueprintCallable, BlueprintEvent)

void ABP_AltarOfSacrifice_C::EffectResurrectionOff()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AltarOfSacrifice_C", "EffectResurrectionOff");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AltarOfSacrifice.BP_AltarOfSacrifice_C.ExecuteUbergraph_BP_AltarOfSacrifice
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AltarOfSacrifice_C::ExecuteUbergraph_BP_AltarOfSacrifice(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AltarOfSacrifice_C", "ExecuteUbergraph_BP_AltarOfSacrifice");

	Params::BP_AltarOfSacrifice_C_ExecuteUbergraph_BP_AltarOfSacrifice Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AltarOfSacrifice.BP_AltarOfSacrifice_C.GameplayTagUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     InGameplayTag                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// int32                                   InCount                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AltarOfSacrifice_C::GameplayTagUpdated(const struct FGameplayTag& InGameplayTag, int32 InCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AltarOfSacrifice_C", "GameplayTagUpdated");

	Params::BP_AltarOfSacrifice_C_GameplayTagUpdated Parms{};

	Parms.InGameplayTag = std::move(InGameplayTag);
	Parms.InCount = InCount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AltarOfSacrifice.BP_AltarOfSacrifice_C.InteractFailed
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                           Param_Interacter                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                     EventTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_AltarOfSacrifice_C::InteractFailed(class AActor* Param_Interacter, const struct FGameplayTag& EventTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AltarOfSacrifice_C", "InteractFailed");

	Params::BP_AltarOfSacrifice_C_InteractFailed Parms{};

	Parms.Param_Interacter = Param_Interacter;
	Parms.EventTag = std::move(EventTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AltarOfSacrifice.BP_AltarOfSacrifice_C.InteractStarted
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                           Param_Interacter                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                     EventTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_AltarOfSacrifice_C::InteractStarted(class AActor* Param_Interacter, const struct FGameplayTag& EventTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AltarOfSacrifice_C", "InteractStarted");

	Params::BP_AltarOfSacrifice_C_InteractStarted Parms{};

	Parms.Param_Interacter = Param_Interacter;
	Parms.EventTag = std::move(EventTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AltarOfSacrifice.BP_AltarOfSacrifice_C.InteractSucceed
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                           Param_Interacter                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                     StateTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                     TriggerTag                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       HitResult                                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_AltarOfSacrifice_C::InteractSucceed(class AActor* Param_Interacter, const struct FGameplayTag& StateTag, const struct FGameplayTag& TriggerTag, const struct FHitResult& HitResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AltarOfSacrifice_C", "InteractSucceed");

	Params::BP_AltarOfSacrifice_C_InteractSucceed Parms{};

	Parms.Param_Interacter = Param_Interacter;
	Parms.StateTag = std::move(StateTag);
	Parms.TriggerTag = std::move(TriggerTag);
	Parms.HitResult = std::move(HitResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AltarOfSacrifice.BP_AltarOfSacrifice_C.IsEnoughHealth
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PlayerCharacter_C*            Param_Interacter                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AltarOfSacrifice_C::IsEnoughHealth(class ABP_PlayerCharacter_C* Param_Interacter, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AltarOfSacrifice_C", "IsEnoughHealth");

	Params::BP_AltarOfSacrifice_C_IsEnoughHealth Parms{};

	Parms.Param_Interacter = Param_Interacter;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function BP_AltarOfSacrifice.BP_AltarOfSacrifice_C.OnRep_EffectResurrectionOn
// (BlueprintCallable, BlueprintEvent)

void ABP_AltarOfSacrifice_C::OnRep_EffectResurrectionOn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AltarOfSacrifice_C", "OnRep_EffectResurrectionOn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AltarOfSacrifice.BP_AltarOfSacrifice_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AltarOfSacrifice_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AltarOfSacrifice_C", "ReceiveEndPlay");

	Params::BP_AltarOfSacrifice_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AltarOfSacrifice.BP_AltarOfSacrifice_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ABP_AltarOfSacrifice_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AltarOfSacrifice_C", "Timeline_0__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AltarOfSacrifice.BP_AltarOfSacrifice_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ABP_AltarOfSacrifice_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AltarOfSacrifice_C", "Timeline_0__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AltarOfSacrifice.BP_AltarOfSacrifice_C.Timeline_1__FinishedFunc
// (BlueprintEvent)

void ABP_AltarOfSacrifice_C::Timeline_1__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AltarOfSacrifice_C", "Timeline_1__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AltarOfSacrifice.BP_AltarOfSacrifice_C.Timeline_1__UpdateFunc
// (BlueprintEvent)

void ABP_AltarOfSacrifice_C::Timeline_1__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AltarOfSacrifice_C", "Timeline_1__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}

}

