#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_QuickVoiceSetting

#include "Basic.hpp"

#include "WB_QuickVoiceSetting_classes.hpp"
#include "WB_QuickVoiceSetting_parameters.hpp"


namespace SDK
{

// Function WB_QuickVoiceSetting.WB_QuickVoiceSetting_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_QuickVoiceSetting_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_QuickVoiceSetting_C", "PreConstruct");

	Params::WB_QuickVoiceSetting_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_QuickVoiceSetting.WB_QuickVoiceSetting_C.OnbVoipGlobal
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    NewValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    OldValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_QuickVoiceSetting_C::OnbVoipGlobal(bool NewValue, bool OldValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_QuickVoiceSetting_C", "OnbVoipGlobal");

	Params::WB_QuickVoiceSetting_C_OnbVoipGlobal Parms{};

	Parms.NewValue = NewValue;
	Parms.OldValue = OldValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_QuickVoiceSetting.WB_QuickVoiceSetting_C.ExecuteUbergraph_WB_QuickVoiceSetting
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_QuickVoiceSetting_C::ExecuteUbergraph_WB_QuickVoiceSetting(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_QuickVoiceSetting_C", "ExecuteUbergraph_WB_QuickVoiceSetting");

	Params::WB_QuickVoiceSetting_C_ExecuteUbergraph_WB_QuickVoiceSetting Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_QuickVoiceSetting.WB_QuickVoiceSetting_C.BndEvt__WB_QuickVoiceSetting_Proximity_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWB_QuickVoiceSetting_C::BndEvt__WB_QuickVoiceSetting_Proximity_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_QuickVoiceSetting_C", "BndEvt__WB_QuickVoiceSetting_Proximity_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_QuickVoiceSetting.WB_QuickVoiceSetting_C.BndEvt__WB_QuickVoiceSetting_PartyOnly_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWB_QuickVoiceSetting_C::BndEvt__WB_QuickVoiceSetting_PartyOnly_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_QuickVoiceSetting_C", "BndEvt__WB_QuickVoiceSetting_PartyOnly_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}

}

