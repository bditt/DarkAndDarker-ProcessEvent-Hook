#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_VoiceVolumeSlider

#include "Basic.hpp"

#include "WB_VoiceVolumeSlider_classes.hpp"
#include "WB_VoiceVolumeSlider_parameters.hpp"


namespace SDK
{

// Function WB_VoiceVolumeSlider.WB_VoiceVolumeSlider_C.OnVoipUserData
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FVoipUserData                    NewValue                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FVoipUserData                    OldValue                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UWB_VoiceVolumeSlider_C::OnVoipUserData(const struct FVoipUserData& NewValue, const struct FVoipUserData& OldValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_VoiceVolumeSlider_C", "OnVoipUserData");

	Params::WB_VoiceVolumeSlider_C_OnVoipUserData Parms{};

	Parms.NewValue = std::move(NewValue);
	Parms.OldValue = std::move(OldValue);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_VoiceVolumeSlider.WB_VoiceVolumeSlider_C.OnVoipPartyData
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FVoipPartyData                   NewValue                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVoipPartyData                   OldValue                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWB_VoiceVolumeSlider_C::OnVoipPartyData(const struct FVoipPartyData& NewValue, const struct FVoipPartyData& OldValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_VoiceVolumeSlider_C", "OnVoipPartyData");

	Params::WB_VoiceVolumeSlider_C_OnVoipPartyData Parms{};

	Parms.NewValue = std::move(NewValue);
	Parms.OldValue = std::move(OldValue);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_VoiceVolumeSlider.WB_VoiceVolumeSlider_C.OnAccountId
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FDCAccountId                     NewValue                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// struct FDCAccountId                     OldValue                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void UWB_VoiceVolumeSlider_C::OnAccountId(const struct FDCAccountId& NewValue, const struct FDCAccountId& OldValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_VoiceVolumeSlider_C", "OnAccountId");

	Params::WB_VoiceVolumeSlider_C_OnAccountId Parms{};

	Parms.NewValue = std::move(NewValue);
	Parms.OldValue = std::move(OldValue);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_VoiceVolumeSlider.WB_VoiceVolumeSlider_C.ExecuteUbergraph_WB_VoiceVolumeSlider
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_VoiceVolumeSlider_C::ExecuteUbergraph_WB_VoiceVolumeSlider(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_VoiceVolumeSlider_C", "ExecuteUbergraph_WB_VoiceVolumeSlider");

	Params::WB_VoiceVolumeSlider_C_ExecuteUbergraph_WB_VoiceVolumeSlider Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_VoiceVolumeSlider.WB_VoiceVolumeSlider_C.BndEvt__WB_VoiceVolumeSlider_Slider_VoiceVolume_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_VoiceVolumeSlider_C::BndEvt__WB_VoiceVolumeSlider_Slider_VoiceVolume_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_VoiceVolumeSlider_C", "BndEvt__WB_VoiceVolumeSlider_Slider_VoiceVolume_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature");

	Params::WB_VoiceVolumeSlider_C_BndEvt__WB_VoiceVolumeSlider_Slider_VoiceVolume_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}

}

