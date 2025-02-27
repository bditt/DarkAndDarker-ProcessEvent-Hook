#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_Credit

#include "Basic.hpp"

#include "WB_Credit_classes.hpp"
#include "WB_Credit_parameters.hpp"


namespace SDK
{

// Function WB_Credit.WB_Credit_C.OnVisibilityChanged_t��
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility                        Invisibility                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Credit_C::OnVisibilityChanged_t__(ESlateVisibility Invisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Credit_C", "OnVisibilityChanged_t��");

	Params::WB_Credit_C_OnVisibilityChanged_t__ Parms{};

	Parms.Invisibility = Invisibility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_Credit.WB_Credit_C.ExecuteUbergraph_WB_Credit
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Credit_C::ExecuteUbergraph_WB_Credit(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Credit_C", "ExecuteUbergraph_WB_Credit");

	Params::WB_Credit_C_ExecuteUbergraph_WB_Credit Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_Credit.WB_Credit_C.CreditButtonClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButtonBase*                Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWB_Credit_C::CreditButtonClicked(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Credit_C", "CreditButtonClicked");

	Params::WB_Credit_C_CreditButtonClicked Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_Credit.WB_Credit_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_Credit_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Credit_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_Credit.WB_Credit_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWB_Credit_C::BP_GetDesiredFocusTarget() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Credit_C", "BP_GetDesiredFocusTarget");

	Params::WB_Credit_C_BP_GetDesiredFocusTarget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

