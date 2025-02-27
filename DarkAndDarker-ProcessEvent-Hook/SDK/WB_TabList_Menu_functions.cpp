#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_TabList_Menu

#include "Basic.hpp"

#include "WB_TabList_Menu_classes.hpp"
#include "WB_TabList_Menu_parameters.hpp"


namespace SDK
{

// Function WB_TabList_Menu.WB_TabList_Menu_C.ExecuteUbergraph_WB_TabList_Menu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_TabList_Menu_C::ExecuteUbergraph_WB_TabList_Menu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TabList_Menu_C", "ExecuteUbergraph_WB_TabList_Menu");

	Params::WB_TabList_Menu_C_ExecuteUbergraph_WB_TabList_Menu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_TabList_Menu.WB_TabList_Menu_C.EventOnTabSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             TabId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_TabList_Menu_C::EventOnTabSelected(class FName TabId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TabList_Menu_C", "EventOnTabSelected");

	Params::WB_TabList_Menu_C_EventOnTabSelected Parms{};

	Parms.TabId = TabId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_TabList_Menu.WB_TabList_Menu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_TabList_Menu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TabList_Menu_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

