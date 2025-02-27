#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_IceSpider

#include "Basic.hpp"

#include "BP_IceSpider_classes.hpp"
#include "BP_IceSpider_parameters.hpp"


namespace SDK
{

// Function BP_IceSpider.BP_IceSpider_C.ExecuteUbergraph_BP_IceSpider
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IceSpider_C::ExecuteUbergraph_BP_IceSpider(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_IceSpider_C", "ExecuteUbergraph_BP_IceSpider");

	Params::BP_IceSpider_C_ExecuteUbergraph_BP_IceSpider Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_IceSpider.BP_IceSpider_C.OnFMsgGASAttributeNotifyBlueprint
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FMsgGASAttributeNotify           InMsg                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void ABP_IceSpider_C::OnFMsgGASAttributeNotifyBlueprint(const struct FMsgGASAttributeNotify& InMsg)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_IceSpider_C", "OnFMsgGASAttributeNotifyBlueprint");

	Params::BP_IceSpider_C_OnFMsgGASAttributeNotifyBlueprint Parms{};

	Parms.InMsg = std::move(InMsg);

	UObject::ProcessEvent(Func, &Parms);
}

}

