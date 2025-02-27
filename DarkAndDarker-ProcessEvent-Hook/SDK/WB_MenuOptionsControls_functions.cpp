#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_MenuOptionsControls

#include "Basic.hpp"

#include "WB_MenuOptionsControls_classes.hpp"
#include "WB_MenuOptionsControls_parameters.hpp"


namespace SDK
{

// Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.UpdateWhisperButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDCWhisperReceiveType                   NewParam                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_MenuOptionsControls_C::UpdateWhisperButton(EDCWhisperReceiveType NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_MenuOptionsControls_C", "UpdateWhisperButton");

	Params::WB_MenuOptionsControls_C_UpdateWhisperButton Parms{};

	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.OnStreamingModeHovered
// (BlueprintCallable, BlueprintEvent)

void UWB_MenuOptionsControls_C::OnStreamingModeHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_MenuOptionsControls_C", "OnStreamingModeHovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.OnSliderHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWB_MenuOptionSlot_Slider_C*      Slider                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWB_MenuOptionsControls_C::OnSliderHovered(class UWB_MenuOptionSlot_Slider_C* Slider)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_MenuOptionsControls_C", "OnSliderHovered");

	Params::WB_MenuOptionsControls_C_OnSliderHovered Parms{};

	Parms.Slider = Slider;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.OnOptionWidgetHovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetSwitcher*                  Btn_Switcher                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWB_MenuOptionsControls_C::OnOptionWidgetHovered(class UWidgetSwitcher* Btn_Switcher)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_MenuOptionsControls_C", "OnOptionWidgetHovered");

	Params::WB_MenuOptionsControls_C_OnOptionWidgetHovered Parms{};

	Parms.Btn_Switcher = Btn_Switcher;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.OnMouseSenitivityHovered
// (BlueprintCallable, BlueprintEvent)

void UWB_MenuOptionsControls_C::OnMouseSenitivityHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_MenuOptionsControls_C", "OnMouseSenitivityHovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.OnLowViolenceModeHover
// (BlueprintCallable, BlueprintEvent)

void UWB_MenuOptionsControls_C::OnLowViolenceModeHover()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_MenuOptionsControls_C", "OnLowViolenceModeHover");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.OnLangaugeComboBoxHovered
// (BlueprintCallable, BlueprintEvent)

void UWB_MenuOptionsControls_C::OnLangaugeComboBoxHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_MenuOptionsControls_C", "OnLangaugeComboBoxHovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.OnKnightLinkHover
// (BlueprintCallable, BlueprintEvent)

void UWB_MenuOptionsControls_C::OnKnightLinkHover()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_MenuOptionsControls_C", "OnKnightLinkHover");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.OnInvertMouseVerticalHovered
// (BlueprintCallable, BlueprintEvent)

void UWB_MenuOptionsControls_C::OnInvertMouseVerticalHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_MenuOptionsControls_C", "OnInvertMouseVerticalHovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.OnInvertMouseHorizontalAxisHovered
// (BlueprintCallable, BlueprintEvent)

void UWB_MenuOptionsControls_C::OnInvertMouseHorizontalAxisHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_MenuOptionsControls_C", "OnInvertMouseHorizontalAxisHovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.OnGameUserSettingControls
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameUserSettingControls         NewValue                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameUserSettingControls         OldValue                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWB_MenuOptionsControls_C::OnGameUserSettingControls(const struct FGameUserSettingControls& NewValue, const struct FGameUserSettingControls& OldValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_MenuOptionsControls_C", "OnGameUserSettingControls");

	Params::WB_MenuOptionsControls_C_OnGameUserSettingControls Parms{};

	Parms.NewValue = std::move(NewValue);
	Parms.OldValue = std::move(OldValue);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.OnDeathCamSlotHovered
// (BlueprintCallable, BlueprintEvent)

void UWB_MenuOptionsControls_C::OnDeathCamSlotHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_MenuOptionsControls_C", "OnDeathCamSlotHovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.OnAutoNextUtilitySlotHovered
// (BlueprintCallable, BlueprintEvent)

void UWB_MenuOptionsControls_C::OnAutoNextUtilitySlotHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_MenuOptionsControls_C", "OnAutoNextUtilitySlotHovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.OnAutoFillUtilitySlotHovered
// (BlueprintCallable, BlueprintEvent)

void UWB_MenuOptionsControls_C::OnAutoFillUtilitySlotHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_MenuOptionsControls_C", "OnAutoFillUtilitySlotHovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.InitOptionWidgetBinding
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_MenuOptionsControls_C::InitOptionWidgetBinding()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_MenuOptionsControls_C", "InitOptionWidgetBinding");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.ExecuteUbergraph_WB_MenuOptionsControls
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_MenuOptionsControls_C::ExecuteUbergraph_WB_MenuOptionsControls(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_MenuOptionsControls_C", "ExecuteUbergraph_WB_MenuOptionsControls");

	Params::WB_MenuOptionsControls_C_ExecuteUbergraph_WB_MenuOptionsControls Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_MenuOptionsControls_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_MenuOptionsControls_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.BndEvt__WB_MenuOptionsControls_WhisperFriendButton_K2Node_ComponentBoundEvent_29_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWB_MenuOptionsControls_C::BndEvt__WB_MenuOptionsControls_WhisperFriendButton_K2Node_ComponentBoundEvent_29_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_MenuOptionsControls_C", "BndEvt__WB_MenuOptionsControls_WhisperFriendButton_K2Node_ComponentBoundEvent_29_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.BndEvt__WB_MenuOptionsControls_WhisperFriendButton_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWB_MenuOptionsControls_C::BndEvt__WB_MenuOptionsControls_WhisperFriendButton_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_MenuOptionsControls_C", "BndEvt__WB_MenuOptionsControls_WhisperFriendButton_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.BndEvt__WB_MenuOptionsControls_WhisperBlockButton_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWB_MenuOptionsControls_C::BndEvt__WB_MenuOptionsControls_WhisperBlockButton_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_MenuOptionsControls_C", "BndEvt__WB_MenuOptionsControls_WhisperBlockButton_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.BndEvt__WB_MenuOptionsControls_WhisperBlockButton_K2Node_ComponentBoundEvent_30_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWB_MenuOptionsControls_C::BndEvt__WB_MenuOptionsControls_WhisperBlockButton_K2Node_ComponentBoundEvent_30_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_MenuOptionsControls_C", "BndEvt__WB_MenuOptionsControls_WhisperBlockButton_K2Node_ComponentBoundEvent_30_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.BndEvt__WB_MenuOptionsControls_WhisperAllButton_K2Node_ComponentBoundEvent_27_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWB_MenuOptionsControls_C::BndEvt__WB_MenuOptionsControls_WhisperAllButton_K2Node_ComponentBoundEvent_27_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_MenuOptionsControls_C", "BndEvt__WB_MenuOptionsControls_WhisperAllButton_K2Node_ComponentBoundEvent_27_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.BndEvt__WB_MenuOptionsControls_WhisperAllButton_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWB_MenuOptionsControls_C::BndEvt__WB_MenuOptionsControls_WhisperAllButton_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_MenuOptionsControls_C", "BndEvt__WB_MenuOptionsControls_WhisperAllButton_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.BndEvt__WB_MenuOptionsControls_Btn_Whisper_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWB_MenuOptionsControls_C::BndEvt__WB_MenuOptionsControls_Btn_Whisper_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_MenuOptionsControls_C", "BndEvt__WB_MenuOptionsControls_Btn_Whisper_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.Get_DeathCamSlotWidget_Visibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWB_MenuOptionsControls_C::Get_DeathCamSlotWidget_Visibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_MenuOptionsControls_C", "Get_DeathCamSlotWidget_Visibility");

	Params::WB_MenuOptionsControls_C_Get_DeathCamSlotWidget_Visibility Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWB_MenuOptionsControls_C::BP_GetDesiredFocusTarget() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_MenuOptionsControls_C", "BP_GetDesiredFocusTarget");

	Params::WB_MenuOptionsControls_C_BP_GetDesiredFocusTarget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

