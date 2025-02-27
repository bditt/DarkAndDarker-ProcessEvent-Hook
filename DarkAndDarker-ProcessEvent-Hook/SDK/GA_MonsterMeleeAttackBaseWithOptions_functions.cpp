#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_MonsterMeleeAttackBaseWithOptions

#include "Basic.hpp"

#include "GA_MonsterMeleeAttackBaseWithOptions_classes.hpp"
#include "GA_MonsterMeleeAttackBaseWithOptions_parameters.hpp"


namespace SDK
{

// Function GA_MonsterMeleeAttackBaseWithOptions.GA_MonsterMeleeAttackBaseWithOptions_C.AbilityActivated
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               TriggerEventData                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_MonsterMeleeAttackBaseWithOptions_C::AbilityActivated(const struct FGameplayEventData& TriggerEventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_MonsterMeleeAttackBaseWithOptions_C", "AbilityActivated");

	Params::GA_MonsterMeleeAttackBaseWithOptions_C_AbilityActivated Parms{};

	Parms.TriggerEventData = std::move(TriggerEventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_MonsterMeleeAttackBaseWithOptions.GA_MonsterMeleeAttackBaseWithOptions_C.EventReceived_95DCC296493E3A36038DED83D7616167
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_MonsterMeleeAttackBaseWithOptions_C::EventReceived_95DCC296493E3A36038DED83D7616167(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_MonsterMeleeAttackBaseWithOptions_C", "EventReceived_95DCC296493E3A36038DED83D7616167");

	Params::GA_MonsterMeleeAttackBaseWithOptions_C_EventReceived_95DCC296493E3A36038DED83D7616167 Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_MonsterMeleeAttackBaseWithOptions.GA_MonsterMeleeAttackBaseWithOptions_C.EventReceived_B16E8F464CD39A7D82CF9CAD51B75D82
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     EventTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData               EventData                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_MonsterMeleeAttackBaseWithOptions_C::EventReceived_B16E8F464CD39A7D82CF9CAD51B75D82(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_MonsterMeleeAttackBaseWithOptions_C", "EventReceived_B16E8F464CD39A7D82CF9CAD51B75D82");

	Params::GA_MonsterMeleeAttackBaseWithOptions_C_EventReceived_B16E8F464CD39A7D82CF9CAD51B75D82 Parms{};

	Parms.EventTag = std::move(EventTag);
	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_MonsterMeleeAttackBaseWithOptions.GA_MonsterMeleeAttackBaseWithOptions_C.ExecuteUbergraph_GA_MonsterMeleeAttackBaseWithOptions
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_MonsterMeleeAttackBaseWithOptions_C::ExecuteUbergraph_GA_MonsterMeleeAttackBaseWithOptions(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_MonsterMeleeAttackBaseWithOptions_C", "ExecuteUbergraph_GA_MonsterMeleeAttackBaseWithOptions");

	Params::GA_MonsterMeleeAttackBaseWithOptions_C_ExecuteUbergraph_GA_MonsterMeleeAttackBaseWithOptions Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_MonsterMeleeAttackBaseWithOptions.GA_MonsterMeleeAttackBaseWithOptions_C.GetAvailableLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          DestLocation                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Location                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_MonsterMeleeAttackBaseWithOptions_C::GetAvailableLocation(const struct FVector& DestLocation, bool* Result, struct FVector* Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_MonsterMeleeAttackBaseWithOptions_C", "GetAvailableLocation");

	Params::GA_MonsterMeleeAttackBaseWithOptions_C_GetAvailableLocation Parms{};

	Parms.DestLocation = std::move(DestLocation);

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

	if (Location != nullptr)
		*Location = std::move(Parms.Location);
}


// Function GA_MonsterMeleeAttackBaseWithOptions.GA_MonsterMeleeAttackBaseWithOptions_C.GetBBTargetActor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          Return_Value                                           (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGA_MonsterMeleeAttackBaseWithOptions_C::GetBBTargetActor(bool* Result, class UObject** Return_Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_MonsterMeleeAttackBaseWithOptions_C", "GetBBTargetActor");

	Params::GA_MonsterMeleeAttackBaseWithOptions_C_GetBBTargetActor Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

	if (Return_Value != nullptr)
		*Return_Value = Parms.Return_Value;
}


// Function GA_MonsterMeleeAttackBaseWithOptions.GA_MonsterMeleeAttackBaseWithOptions_C.GetBBTargetActorToCharacterBase
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ADCCharacterBase*                 As_DCCharacter_Base                                    (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGA_MonsterMeleeAttackBaseWithOptions_C::GetBBTargetActorToCharacterBase(bool* Result, class ADCCharacterBase** As_DCCharacter_Base)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_MonsterMeleeAttackBaseWithOptions_C", "GetBBTargetActorToCharacterBase");

	Params::GA_MonsterMeleeAttackBaseWithOptions_C_GetBBTargetActorToCharacterBase Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

	if (As_DCCharacter_Base != nullptr)
		*As_DCCharacter_Base = Parms.As_DCCharacter_Base;
}


// Function GA_MonsterMeleeAttackBaseWithOptions.GA_MonsterMeleeAttackBaseWithOptions_C.GetBBTargetActorToMonsterBase
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_DCMonsterBaseWithOptions_C*   DCMonsterBaseWithOptions                               (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGA_MonsterMeleeAttackBaseWithOptions_C::GetBBTargetActorToMonsterBase(bool* Result, class ABP_DCMonsterBaseWithOptions_C** DCMonsterBaseWithOptions)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_MonsterMeleeAttackBaseWithOptions_C", "GetBBTargetActorToMonsterBase");

	Params::GA_MonsterMeleeAttackBaseWithOptions_C_GetBBTargetActorToMonsterBase Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

	if (DCMonsterBaseWithOptions != nullptr)
		*DCMonsterBaseWithOptions = Parms.DCMonsterBaseWithOptions;
}


// Function GA_MonsterMeleeAttackBaseWithOptions.GA_MonsterMeleeAttackBaseWithOptions_C.GetSignal
// (BlueprintCallable, BlueprintEvent)

void UGA_MonsterMeleeAttackBaseWithOptions_C::GetSignal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_MonsterMeleeAttackBaseWithOptions_C", "GetSignal");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_MonsterMeleeAttackBaseWithOptions.GA_MonsterMeleeAttackBaseWithOptions_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_MonsterMeleeAttackBaseWithOptions_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_MonsterMeleeAttackBaseWithOptions_C", "K2_OnEndAbility");

	Params::GA_MonsterMeleeAttackBaseWithOptions_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_MonsterMeleeAttackBaseWithOptions.GA_MonsterMeleeAttackBaseWithOptions_C.OnFinish_237210C047AC334B6F6EFAB48C3790F4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsArrivedDestLocation                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_MonsterMeleeAttackBaseWithOptions_C::OnFinish_237210C047AC334B6F6EFAB48C3790F4(bool IsArrivedDestLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_MonsterMeleeAttackBaseWithOptions_C", "OnFinish_237210C047AC334B6F6EFAB48C3790F4");

	Params::GA_MonsterMeleeAttackBaseWithOptions_C_OnFinish_237210C047AC334B6F6EFAB48C3790F4 Parms{};

	Parms.IsArrivedDestLocation = IsArrivedDestLocation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_MonsterMeleeAttackBaseWithOptions.GA_MonsterMeleeAttackBaseWithOptions_C.OnFinish_73831B584F90FE2D55D4F7B95AFEE710
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsArrivedDestLocation                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_MonsterMeleeAttackBaseWithOptions_C::OnFinish_73831B584F90FE2D55D4F7B95AFEE710(bool IsArrivedDestLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_MonsterMeleeAttackBaseWithOptions_C", "OnFinish_73831B584F90FE2D55D4F7B95AFEE710");

	Params::GA_MonsterMeleeAttackBaseWithOptions_C_OnFinish_73831B584F90FE2D55D4F7B95AFEE710 Parms{};

	Parms.IsArrivedDestLocation = IsArrivedDestLocation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_MonsterMeleeAttackBaseWithOptions.GA_MonsterMeleeAttackBaseWithOptions_C.StartRotate Event
// (BlueprintCallable, BlueprintEvent)

void UGA_MonsterMeleeAttackBaseWithOptions_C::StartRotate_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_MonsterMeleeAttackBaseWithOptions_C", "StartRotate Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_MonsterMeleeAttackBaseWithOptions.GA_MonsterMeleeAttackBaseWithOptions_C.StopRotate Event
// (BlueprintCallable, BlueprintEvent)

void UGA_MonsterMeleeAttackBaseWithOptions_C::StopRotate_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_MonsterMeleeAttackBaseWithOptions_C", "StopRotate Event");

	UObject::ProcessEvent(Func, nullptr);
}

}

