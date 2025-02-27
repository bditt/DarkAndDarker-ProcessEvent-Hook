#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_ItemUniqueTooltipStat

#include "Basic.hpp"

#include "WB_ItemUniqueTooltipStat_classes.hpp"
#include "WB_ItemUniqueTooltipStat_parameters.hpp"


namespace SDK
{

// Function WB_ItemUniqueTooltipStat.WB_ItemUniqueTooltipStat_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                          ListItemObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWB_ItemUniqueTooltipStat_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ItemUniqueTooltipStat_C", "OnListItemObjectSet");

	Params::WB_ItemUniqueTooltipStat_C_OnListItemObjectSet Parms{};

	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_ItemUniqueTooltipStat.WB_ItemUniqueTooltipStat_C.ExecuteUbergraph_WB_ItemUniqueTooltipStat
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ItemUniqueTooltipStat_C::ExecuteUbergraph_WB_ItemUniqueTooltipStat(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ItemUniqueTooltipStat_C", "ExecuteUbergraph_WB_ItemUniqueTooltipStat");

	Params::WB_ItemUniqueTooltipStat_C_ExecuteUbergraph_WB_ItemUniqueTooltipStat Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

