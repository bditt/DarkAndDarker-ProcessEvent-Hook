#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_SpiritBond

#include "Basic.hpp"

#include "GA_SpiritBond_classes.hpp"
#include "GA_SpiritBond_parameters.hpp"


namespace SDK
{

// Function GA_SpiritBond.GA_SpiritBond_C.Added_F70B1606444A974A2E7CB282CC0B32D2
// (BlueprintCallable, BlueprintEvent)

void UGA_SpiritBond_C::Added_F70B1606444A974A2E7CB282CC0B32D2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_SpiritBond_C", "Added_F70B1606444A974A2E7CB282CC0B32D2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_SpiritBond.GA_SpiritBond_C.ApplyEffect
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ADCPlayerCharacterBase*           Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                                    bIsApplied                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_SpiritBond_C::ApplyEffect(class ADCPlayerCharacterBase* Target, bool* bIsApplied)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_SpiritBond_C", "ApplyEffect");

	Params::GA_SpiritBond_C_ApplyEffect Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);

	if (bIsApplied != nullptr)
		*bIsApplied = Parms.bIsApplied;
}


// Function GA_SpiritBond.GA_SpiritBond_C.EventReceived_3D1B10094EE151A1A1C36EB06FA7C2EC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_SpiritBond_C::EventReceived_3D1B10094EE151A1A1C36EB06FA7C2EC(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_SpiritBond_C", "EventReceived_3D1B10094EE151A1A1C36EB06FA7C2EC");

	Params::GA_SpiritBond_C_EventReceived_3D1B10094EE151A1A1C36EB06FA7C2EC Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_SpiritBond.GA_SpiritBond_C.ExecuteUbergraph_GA_SpiritBond
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_SpiritBond_C::ExecuteUbergraph_GA_SpiritBond(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_SpiritBond_C", "ExecuteUbergraph_GA_SpiritBond");

	Params::GA_SpiritBond_C_ExecuteUbergraph_GA_SpiritBond Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_SpiritBond.GA_SpiritBond_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               EventData                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_SpiritBond_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_SpiritBond_C", "K2_ActivateAbilityFromEvent");

	Params::GA_SpiritBond_C_K2_ActivateAbilityFromEvent Parms{};

	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_SpiritBond.GA_SpiritBond_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_SpiritBond_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_SpiritBond_C", "K2_OnEndAbility");

	Params::GA_SpiritBond_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_SpiritBond.GA_SpiritBond_C.Removed_14D17A3E4A09E443C6AC65B118AA9C48
// (BlueprintCallable, BlueprintEvent)

void UGA_SpiritBond_C::Removed_14D17A3E4A09E443C6AC65B118AA9C48()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_SpiritBond_C", "Removed_14D17A3E4A09E443C6AC65B118AA9C48");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_SpiritBond.GA_SpiritBond_C.Removed_6AFB1F554C984F9BC7D38DA2D9DDBED5
// (BlueprintCallable, BlueprintEvent)

void UGA_SpiritBond_C::Removed_6AFB1F554C984F9BC7D38DA2D9DDBED5()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_SpiritBond_C", "Removed_6AFB1F554C984F9BC7D38DA2D9DDBED5");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_SpiritBond.GA_SpiritBond_C.RemoveEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ADCPlayerCharacterBase*           Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGA_SpiritBond_C::RemoveEffect(class ADCPlayerCharacterBase* Character)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_SpiritBond_C", "RemoveEffect");

	Params::GA_SpiritBond_C_RemoveEffect Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);
}

}

