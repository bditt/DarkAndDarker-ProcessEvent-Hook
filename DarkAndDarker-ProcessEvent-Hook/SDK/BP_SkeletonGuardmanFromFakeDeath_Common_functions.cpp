#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SkeletonGuardmanFromFakeDeath_Common

#include "Basic.hpp"

#include "BP_SkeletonGuardmanFromFakeDeath_Common_classes.hpp"
#include "BP_SkeletonGuardmanFromFakeDeath_Common_parameters.hpp"


namespace SDK
{

// Function BP_SkeletonGuardmanFromFakeDeath_Common.BP_SkeletonGuardmanFromFakeDeath_Common_C.ExecuteUbergraph_BP_SkeletonGuardmanFromFakeDeath_Common
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkeletonGuardmanFromFakeDeath_Common_C::ExecuteUbergraph_BP_SkeletonGuardmanFromFakeDeath_Common(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkeletonGuardmanFromFakeDeath_Common_C", "ExecuteUbergraph_BP_SkeletonGuardmanFromFakeDeath_Common");

	Params::BP_SkeletonGuardmanFromFakeDeath_Common_C_ExecuteUbergraph_BP_SkeletonGuardmanFromFakeDeath_Common Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkeletonGuardmanFromFakeDeath_Common.BP_SkeletonGuardmanFromFakeDeath_Common_C.GameplayTagUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     InGameplayTag                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// int32                                   InCount                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkeletonGuardmanFromFakeDeath_Common_C::GameplayTagUpdated(const struct FGameplayTag& InGameplayTag, int32 InCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkeletonGuardmanFromFakeDeath_Common_C", "GameplayTagUpdated");

	Params::BP_SkeletonGuardmanFromFakeDeath_Common_C_GameplayTagUpdated Parms{};

	Parms.InGameplayTag = std::move(InGameplayTag);
	Parms.InCount = InCount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkeletonGuardmanFromFakeDeath_Common.BP_SkeletonGuardmanFromFakeDeath_Common_C.InteractFound
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                           Interacter                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              InteractPart                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_SkeletonGuardmanFromFakeDeath_Common_C::InteractFound(class AActor* Interacter, class UPrimitiveComponent* InteractPart)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkeletonGuardmanFromFakeDeath_Common_C", "InteractFound");

	Params::BP_SkeletonGuardmanFromFakeDeath_Common_C_InteractFound Parms{};

	Parms.Interacter = Interacter;
	Parms.InteractPart = InteractPart;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkeletonGuardmanFromFakeDeath_Common.BP_SkeletonGuardmanFromFakeDeath_Common_C.InteractLost
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                           Interacter                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_SkeletonGuardmanFromFakeDeath_Common_C::InteractLost(class AActor* Interacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkeletonGuardmanFromFakeDeath_Common_C", "InteractLost");

	Params::BP_SkeletonGuardmanFromFakeDeath_Common_C_InteractLost Parms{};

	Parms.Interacter = Interacter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkeletonGuardmanFromFakeDeath_Common.BP_SkeletonGuardmanFromFakeDeath_Common_C.OnAsyncInitialized
// (Event, Protected, BlueprintEvent)

void ABP_SkeletonGuardmanFromFakeDeath_Common_C::OnAsyncInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkeletonGuardmanFromFakeDeath_Common_C", "OnAsyncInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SkeletonGuardmanFromFakeDeath_Common.BP_SkeletonGuardmanFromFakeDeath_Common_C.OnStuckByShield
// (Event, Public, BlueprintEvent)
// Parameters:
// class ADCCharacterBase*                 InInstigator                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                           InEffectCauser                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_SkeletonGuardmanFromFakeDeath_Common_C::OnStuckByShield(class ADCCharacterBase* InInstigator, class AActor* InEffectCauser)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkeletonGuardmanFromFakeDeath_Common_C", "OnStuckByShield");

	Params::BP_SkeletonGuardmanFromFakeDeath_Common_C_OnStuckByShield Parms{};

	Parms.InInstigator = InInstigator;
	Parms.InEffectCauser = InEffectCauser;

	UObject::ProcessEvent(Func, &Parms);
}

}

