#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_IceHarpy_Attack_Whirlwind

#include "Basic.hpp"

#include "GA_IceHarpy_Attack_Whirlwind_classes.hpp"
#include "GA_IceHarpy_Attack_Whirlwind_parameters.hpp"


namespace SDK
{

// Function GA_IceHarpy_Attack_Whirlwind.GA_IceHarpy_Attack_Whirlwind_C.AbilityActivated
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               TriggerEventData                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_IceHarpy_Attack_Whirlwind_C::AbilityActivated(const struct FGameplayEventData& TriggerEventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_IceHarpy_Attack_Whirlwind_C", "AbilityActivated");

	Params::GA_IceHarpy_Attack_Whirlwind_C_AbilityActivated Parms{};

	Parms.TriggerEventData = std::move(TriggerEventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_IceHarpy_Attack_Whirlwind.GA_IceHarpy_Attack_Whirlwind_C.Draw Whirlwind
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Left_Side                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_IceHarpy_Attack_Whirlwind_C::Draw_Whirlwind(bool Left_Side)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_IceHarpy_Attack_Whirlwind_C", "Draw Whirlwind");

	Params::GA_IceHarpy_Attack_Whirlwind_C_Draw_Whirlwind Parms{};

	Parms.Left_Side = Left_Side;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_IceHarpy_Attack_Whirlwind.GA_IceHarpy_Attack_Whirlwind_C.EventReceived_8A926ED049483123053938B1308043C1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_IceHarpy_Attack_Whirlwind_C::EventReceived_8A926ED049483123053938B1308043C1(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_IceHarpy_Attack_Whirlwind_C", "EventReceived_8A926ED049483123053938B1308043C1");

	Params::GA_IceHarpy_Attack_Whirlwind_C_EventReceived_8A926ED049483123053938B1308043C1 Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_IceHarpy_Attack_Whirlwind.GA_IceHarpy_Attack_Whirlwind_C.ExecuteUbergraph_GA_IceHarpy_Attack_Whirlwind
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_IceHarpy_Attack_Whirlwind_C::ExecuteUbergraph_GA_IceHarpy_Attack_Whirlwind(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_IceHarpy_Attack_Whirlwind_C", "ExecuteUbergraph_GA_IceHarpy_Attack_Whirlwind");

	Params::GA_IceHarpy_Attack_Whirlwind_C_ExecuteUbergraph_GA_IceHarpy_Attack_Whirlwind Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_IceHarpy_Attack_Whirlwind.GA_IceHarpy_Attack_Whirlwind_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_IceHarpy_Attack_Whirlwind_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_IceHarpy_Attack_Whirlwind_C", "K2_OnEndAbility");

	Params::GA_IceHarpy_Attack_Whirlwind_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_IceHarpy_Attack_Whirlwind.GA_IceHarpy_Attack_Whirlwind_C.NewFunction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGA_IceHarpy_Attack_Whirlwind_C::NewFunction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_IceHarpy_Attack_Whirlwind_C", "NewFunction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_IceHarpy_Attack_Whirlwind.GA_IceHarpy_Attack_Whirlwind_C.Set Initial Variables
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGA_IceHarpy_Attack_Whirlwind_C::Set_Initial_Variables()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_IceHarpy_Attack_Whirlwind_C", "Set Initial Variables");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_IceHarpy_Attack_Whirlwind.GA_IceHarpy_Attack_Whirlwind_C.Spawn LWhirlwind
// (BlueprintCallable, BlueprintEvent)

void UGA_IceHarpy_Attack_Whirlwind_C::Spawn_LWhirlwind()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_IceHarpy_Attack_Whirlwind_C", "Spawn LWhirlwind");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_IceHarpy_Attack_Whirlwind.GA_IceHarpy_Attack_Whirlwind_C.Spawn RWhirlwind
// (BlueprintCallable, BlueprintEvent)

void UGA_IceHarpy_Attack_Whirlwind_C::Spawn_RWhirlwind()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_IceHarpy_Attack_Whirlwind_C", "Spawn RWhirlwind");

	UObject::ProcessEvent(Func, nullptr);
}

}

