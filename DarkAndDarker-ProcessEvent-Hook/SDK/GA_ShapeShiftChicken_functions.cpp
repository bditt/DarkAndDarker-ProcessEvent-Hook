#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_ShapeShiftChicken

#include "Basic.hpp"

#include "GA_ShapeShiftChicken_classes.hpp"
#include "GA_ShapeShiftChicken_parameters.hpp"


namespace SDK
{

// Function GA_ShapeShiftChicken.GA_ShapeShiftChicken_C.AbilityActivated
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               TriggerEventData                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_ShapeShiftChicken_C::AbilityActivated(const struct FGameplayEventData& TriggerEventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_ShapeShiftChicken_C", "AbilityActivated");

	Params::GA_ShapeShiftChicken_C_AbilityActivated Parms{};

	Parms.TriggerEventData = std::move(TriggerEventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_ShapeShiftChicken.GA_ShapeShiftChicken_C.ExecuteUbergraph_GA_ShapeShiftChicken
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_ShapeShiftChicken_C::ExecuteUbergraph_GA_ShapeShiftChicken(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_ShapeShiftChicken_C", "ExecuteUbergraph_GA_ShapeShiftChicken");

	Params::GA_ShapeShiftChicken_C_ExecuteUbergraph_GA_ShapeShiftChicken Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_ShapeShiftChicken.GA_ShapeShiftChicken_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_ShapeShiftChicken_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_ShapeShiftChicken_C", "K2_OnEndAbility");

	Params::GA_ShapeShiftChicken_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_ShapeShiftChicken.GA_ShapeShiftChicken_C.OnMovementModeChanged_29B2943E4003654706CBCFAD0742C66C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMovementMode                           PrevMovementMode                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EMovementMode                           NewMovementMode                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_ShapeShiftChicken_C::OnMovementModeChanged_29B2943E4003654706CBCFAD0742C66C(EMovementMode PrevMovementMode, EMovementMode NewMovementMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_ShapeShiftChicken_C", "OnMovementModeChanged_29B2943E4003654706CBCFAD0742C66C");

	Params::GA_ShapeShiftChicken_C_OnMovementModeChanged_29B2943E4003654706CBCFAD0742C66C Parms{};

	Parms.PrevMovementMode = PrevMovementMode;
	Parms.NewMovementMode = NewMovementMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_ShapeShiftChicken.GA_ShapeShiftChicken_C.OnMovementModeChanged_999CA5C04C3776C3AFB15EADE1F37480
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMovementMode                           PrevMovementMode                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EMovementMode                           NewMovementMode                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_ShapeShiftChicken_C::OnMovementModeChanged_999CA5C04C3776C3AFB15EADE1F37480(EMovementMode PrevMovementMode, EMovementMode NewMovementMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_ShapeShiftChicken_C", "OnMovementModeChanged_999CA5C04C3776C3AFB15EADE1F37480");

	Params::GA_ShapeShiftChicken_C_OnMovementModeChanged_999CA5C04C3776C3AFB15EADE1F37480 Parms{};

	Parms.PrevMovementMode = PrevMovementMode;
	Parms.NewMovementMode = NewMovementMode;

	UObject::ProcessEvent(Func, &Parms);
}

}

