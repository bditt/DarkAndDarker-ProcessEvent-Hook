#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_MenuOptionToggleSwitchSlot

#include "Basic.hpp"

#include "WB_MenuOptionToggleSwitchSlot_classes.hpp"
#include "WB_MenuOptionToggleSwitchSlot_parameters.hpp"


namespace SDK
{

// Function WB_MenuOptionToggleSwitchSlot.WB_MenuOptionToggleSwitchSlot_C.UpdateButtonText
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             LeftText                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FText                             RightText                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWB_MenuOptionToggleSwitchSlot_C::UpdateButtonText(const class FText& LeftText, const class FText& RightText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_MenuOptionToggleSwitchSlot_C", "UpdateButtonText");

	Params::WB_MenuOptionToggleSwitchSlot_C_UpdateButtonText Parms{};

	Parms.LeftText = std::move(LeftText);
	Parms.RightText = std::move(RightText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_MenuOptionToggleSwitchSlot.WB_MenuOptionToggleSwitchSlot_C.SetButtomText
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_MenuOptionToggleSwitchSlot_C::SetButtomText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_MenuOptionToggleSwitchSlot_C", "SetButtomText");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_MenuOptionToggleSwitchSlot.WB_MenuOptionToggleSwitchSlot_C.OnToggleSwitch
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    InSwitch                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_MenuOptionToggleSwitchSlot_C::OnToggleSwitch(bool InSwitch)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_MenuOptionToggleSwitchSlot_C", "OnToggleSwitch");

	Params::WB_MenuOptionToggleSwitchSlot_C_OnToggleSwitch Parms{};

	Parms.InSwitch = InSwitch;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_MenuOptionToggleSwitchSlot.WB_MenuOptionToggleSwitchSlot_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_MenuOptionToggleSwitchSlot_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_MenuOptionToggleSwitchSlot_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_MenuOptionToggleSwitchSlot.WB_MenuOptionToggleSwitchSlot_C.GetPrimaryGamepadFocusWidget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWB_MenuOptionToggleSwitchSlot_C::GetPrimaryGamepadFocusWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_MenuOptionToggleSwitchSlot_C", "GetPrimaryGamepadFocusWidget");

	Params::WB_MenuOptionToggleSwitchSlot_C_GetPrimaryGamepadFocusWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_MenuOptionToggleSwitchSlot.WB_MenuOptionToggleSwitchSlot_C.ExecuteUbergraph_WB_MenuOptionToggleSwitchSlot
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_MenuOptionToggleSwitchSlot_C::ExecuteUbergraph_WB_MenuOptionToggleSwitchSlot(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_MenuOptionToggleSwitchSlot_C", "ExecuteUbergraph_WB_MenuOptionToggleSwitchSlot");

	Params::WB_MenuOptionToggleSwitchSlot_C_ExecuteUbergraph_WB_MenuOptionToggleSwitchSlot Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_MenuOptionToggleSwitchSlot.WB_MenuOptionToggleSwitchSlot_C.ChangeButtonActivated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWB_OptionCheckButton01_C*        ActivateButton                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWB_OptionCheckButton01_C*        DeactivateButton                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWB_MenuOptionToggleSwitchSlot_C::ChangeButtonActivated(class UWB_OptionCheckButton01_C* ActivateButton, class UWB_OptionCheckButton01_C* DeactivateButton)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_MenuOptionToggleSwitchSlot_C", "ChangeButtonActivated");

	Params::WB_MenuOptionToggleSwitchSlot_C_ChangeButtonActivated Parms{};

	Parms.ActivateButton = ActivateButton;
	Parms.DeactivateButton = DeactivateButton;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_MenuOptionToggleSwitchSlot.WB_MenuOptionToggleSwitchSlot_C.SetOptionButtonTile
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWB_OptionCheckButton01_C*        OptionButton                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                             InTitle                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UWB_MenuOptionToggleSwitchSlot_C::SetOptionButtonTile(class UWB_OptionCheckButton01_C* OptionButton, const class FText& InTitle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_MenuOptionToggleSwitchSlot_C", "SetOptionButtonTile");

	Params::WB_MenuOptionToggleSwitchSlot_C_SetOptionButtonTile Parms{};

	Parms.OptionButton = OptionButton;
	Parms.InTitle = std::move(InTitle);

	UObject::ProcessEvent(Func, &Parms);
}

}

