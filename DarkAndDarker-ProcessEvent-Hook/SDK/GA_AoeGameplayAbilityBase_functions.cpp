#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_AoeGameplayAbilityBase

#include "Basic.hpp"

#include "GA_AoeGameplayAbilityBase_classes.hpp"
#include "GA_AoeGameplayAbilityBase_parameters.hpp"


namespace SDK
{

// Function GA_AoeGameplayAbilityBase.GA_AoeGameplayAbilityBase_C.Add GameplayCue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     GameplayCueTag                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_AoeGameplayAbilityBase_C::Add_GameplayCue(const struct FGameplayTag& GameplayCueTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_AoeGameplayAbilityBase_C", "Add GameplayCue");

	Params::GA_AoeGameplayAbilityBase_C_Add_GameplayCue Parms{};

	Parms.GameplayCueTag = std::move(GameplayCueTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_AoeGameplayAbilityBase.GA_AoeGameplayAbilityBase_C.Add GameplayTag
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FGameplayTag>             Add_Tags                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class ADCCharacterBase*                 Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGA_AoeGameplayAbilityBase_C::Add_GameplayTag(TArray<struct FGameplayTag>& Add_Tags, class ADCCharacterBase* Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_AoeGameplayAbilityBase_C", "Add GameplayTag");

	Params::GA_AoeGameplayAbilityBase_C_Add_GameplayTag Parms{};

	Parms.Add_Tags = std::move(Add_Tags);
	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);

	Add_Tags = std::move(Parms.Add_Tags);
}


// Function GA_AoeGameplayAbilityBase.GA_AoeGameplayAbilityBase_C.Apply Effect Monster Event
// (BlueprintCallable, BlueprintEvent)

void UGA_AoeGameplayAbilityBase_C::Apply_Effect_Monster_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_AoeGameplayAbilityBase_C", "Apply Effect Monster Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_AoeGameplayAbilityBase.GA_AoeGameplayAbilityBase_C.Apply Effect Player Event
// (BlueprintCallable, BlueprintEvent)

void UGA_AoeGameplayAbilityBase_C::Apply_Effect_Player_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_AoeGameplayAbilityBase_C", "Apply Effect Player Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_AoeGameplayAbilityBase.GA_AoeGameplayAbilityBase_C.Apply GameplayCue Monster Event
// (BlueprintCallable, BlueprintEvent)

void UGA_AoeGameplayAbilityBase_C::Apply_GameplayCue_Monster_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_AoeGameplayAbilityBase_C", "Apply GameplayCue Monster Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_AoeGameplayAbilityBase.GA_AoeGameplayAbilityBase_C.Apply GameplayCue Player Event
// (BlueprintCallable, BlueprintEvent)

void UGA_AoeGameplayAbilityBase_C::Apply_GameplayCue_Player_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_AoeGameplayAbilityBase_C", "Apply GameplayCue Player Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_AoeGameplayAbilityBase.GA_AoeGameplayAbilityBase_C.Apply GameplayEffect
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FGameplayTag>             Apply_Effect_Tags                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class ADCCharacterBase*                 Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGA_AoeGameplayAbilityBase_C::Apply_GameplayEffect(TArray<struct FGameplayTag>& Apply_Effect_Tags, class ADCCharacterBase* Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_AoeGameplayAbilityBase_C", "Apply GameplayEffect");

	Params::GA_AoeGameplayAbilityBase_C_Apply_GameplayEffect Parms{};

	Parms.Apply_Effect_Tags = std::move(Apply_Effect_Tags);
	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);

	Apply_Effect_Tags = std::move(Parms.Apply_Effect_Tags);
}


// Function GA_AoeGameplayAbilityBase.GA_AoeGameplayAbilityBase_C.Apply Tag Monster Event
// (BlueprintCallable, BlueprintEvent)

void UGA_AoeGameplayAbilityBase_C::Apply_Tag_Monster_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_AoeGameplayAbilityBase_C", "Apply Tag Monster Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_AoeGameplayAbilityBase.GA_AoeGameplayAbilityBase_C.Apply Tag Player Event
// (BlueprintCallable, BlueprintEvent)

void UGA_AoeGameplayAbilityBase_C::Apply_Tag_Player_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_AoeGameplayAbilityBase_C", "Apply Tag Player Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_AoeGameplayAbilityBase.GA_AoeGameplayAbilityBase_C.Apply To Monster Set
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_AoeGameplayAbilityBase_C::Apply_To_Monster_Set()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_AoeGameplayAbilityBase_C", "Apply To Monster Set");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_AoeGameplayAbilityBase.GA_AoeGameplayAbilityBase_C.Apply To Player Set
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_AoeGameplayAbilityBase_C::Apply_To_Player_Set()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_AoeGameplayAbilityBase_C", "Apply To Player Set");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_AoeGameplayAbilityBase.GA_AoeGameplayAbilityBase_C.Check Target In List And Apply Monster
// (BlueprintCallable, BlueprintEvent)

void UGA_AoeGameplayAbilityBase_C::Check_Target_In_List_And_Apply_Monster()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_AoeGameplayAbilityBase_C", "Check Target In List And Apply Monster");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_AoeGameplayAbilityBase.GA_AoeGameplayAbilityBase_C.Check Target In List And Apply Player
// (BlueprintCallable, BlueprintEvent)

void UGA_AoeGameplayAbilityBase_C::Check_Target_In_List_And_Apply_Player()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_AoeGameplayAbilityBase_C", "Check Target In List And Apply Player");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_AoeGameplayAbilityBase.GA_AoeGameplayAbilityBase_C.Check Target To Cancel Ability
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_AoeGameplayAbilityBase_C::Check_Target_To_Cancel_Ability(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_AoeGameplayAbilityBase_C", "Check Target To Cancel Ability");

	Params::GA_AoeGameplayAbilityBase_C_Check_Target_To_Cancel_Ability Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function GA_AoeGameplayAbilityBase.GA_AoeGameplayAbilityBase_C.Execute GameplayCue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     GameplayCueTag                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_AoeGameplayAbilityBase_C::Execute_GameplayCue(const struct FGameplayTag& GameplayCueTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_AoeGameplayAbilityBase_C", "Execute GameplayCue");

	Params::GA_AoeGameplayAbilityBase_C_Execute_GameplayCue Parms{};

	Parms.GameplayCueTag = std::move(GameplayCueTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_AoeGameplayAbilityBase.GA_AoeGameplayAbilityBase_C.ExecuteUbergraph_GA_AoeGameplayAbilityBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_AoeGameplayAbilityBase_C::ExecuteUbergraph_GA_AoeGameplayAbilityBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_AoeGameplayAbilityBase_C", "ExecuteUbergraph_GA_AoeGameplayAbilityBase");

	Params::GA_AoeGameplayAbilityBase_C_ExecuteUbergraph_GA_AoeGameplayAbilityBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_AoeGameplayAbilityBase.GA_AoeGameplayAbilityBase_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               EventData                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_AoeGameplayAbilityBase_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_AoeGameplayAbilityBase_C", "K2_ActivateAbilityFromEvent");

	Params::GA_AoeGameplayAbilityBase_C_K2_ActivateAbilityFromEvent Parms{};

	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_AoeGameplayAbilityBase.GA_AoeGameplayAbilityBase_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_AoeGameplayAbilityBase_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_AoeGameplayAbilityBase_C", "K2_OnEndAbility");

	Params::GA_AoeGameplayAbilityBase_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_AoeGameplayAbilityBase.GA_AoeGameplayAbilityBase_C.Remove Target Out
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_Remove_Target_Out                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_AoeGameplayAbilityBase_C::Remove_Target_Out(bool* Param_Remove_Target_Out)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_AoeGameplayAbilityBase_C", "Remove Target Out");

	Params::GA_AoeGameplayAbilityBase_C_Remove_Target_Out Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_Remove_Target_Out != nullptr)
		*Param_Remove_Target_Out = Parms.Param_Remove_Target_Out;
}

}

