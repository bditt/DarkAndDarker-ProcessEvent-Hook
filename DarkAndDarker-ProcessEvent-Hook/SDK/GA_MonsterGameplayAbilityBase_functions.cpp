#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_MonsterGameplayAbilityBase

#include "Basic.hpp"

#include "GA_MonsterGameplayAbilityBase_classes.hpp"
#include "GA_MonsterGameplayAbilityBase_parameters.hpp"


namespace SDK
{

// Function GA_MonsterGameplayAbilityBase.GA_MonsterGameplayAbilityBase_C.GetBBTargetActor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          Return_Value                                           (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGA_MonsterGameplayAbilityBase_C::GetBBTargetActor(bool* Result, class UObject** Return_Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_MonsterGameplayAbilityBase_C", "GetBBTargetActor");

	Params::GA_MonsterGameplayAbilityBase_C_GetBBTargetActor Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

	if (Return_Value != nullptr)
		*Return_Value = Parms.Return_Value;
}


// Function GA_MonsterGameplayAbilityBase.GA_MonsterGameplayAbilityBase_C.GetBBTargetActorToCharacterBase
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ADCCharacterBase*                 As_DCCharacter_Base                                    (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGA_MonsterGameplayAbilityBase_C::GetBBTargetActorToCharacterBase(bool* Result, class ADCCharacterBase** As_DCCharacter_Base)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_MonsterGameplayAbilityBase_C", "GetBBTargetActorToCharacterBase");

	Params::GA_MonsterGameplayAbilityBase_C_GetBBTargetActorToCharacterBase Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

	if (As_DCCharacter_Base != nullptr)
		*As_DCCharacter_Base = Parms.As_DCCharacter_Base;
}


// Function GA_MonsterGameplayAbilityBase.GA_MonsterGameplayAbilityBase_C.GetBBTargetActorToMonsterBase
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_DCMonsterBaseWithOptions_C*   DCMonsterBaseWithOptions                               (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGA_MonsterGameplayAbilityBase_C::GetBBTargetActorToMonsterBase(bool* Result, class ABP_DCMonsterBaseWithOptions_C** DCMonsterBaseWithOptions)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_MonsterGameplayAbilityBase_C", "GetBBTargetActorToMonsterBase");

	Params::GA_MonsterGameplayAbilityBase_C_GetBBTargetActorToMonsterBase Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

	if (DCMonsterBaseWithOptions != nullptr)
		*DCMonsterBaseWithOptions = Parms.DCMonsterBaseWithOptions;
}


// Function GA_MonsterGameplayAbilityBase.GA_MonsterGameplayAbilityBase_C.Unable To Move Check
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGA_MonsterGameplayAbilityBase_C::Unable_To_Move_Check()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_MonsterGameplayAbilityBase_C", "Unable To Move Check");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_MonsterGameplayAbilityBase.GA_MonsterGameplayAbilityBase_C.Unable To Move Check Timer
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTimerHandle                     TimerHandle                                            (Parm, OutParm, NoDestructor, HasGetValueTypeHash)

void UGA_MonsterGameplayAbilityBase_C::Unable_To_Move_Check_Timer(struct FTimerHandle* TimerHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_MonsterGameplayAbilityBase_C", "Unable To Move Check Timer");

	Params::GA_MonsterGameplayAbilityBase_C_Unable_To_Move_Check_Timer Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (TimerHandle != nullptr)
		*TimerHandle = std::move(Parms.TimerHandle);
}

}

