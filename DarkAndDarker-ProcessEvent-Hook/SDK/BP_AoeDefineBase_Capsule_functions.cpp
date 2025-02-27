#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AoeDefineBase_Capsule

#include "Basic.hpp"

#include "BP_AoeDefineBase_Capsule_classes.hpp"
#include "BP_AoeDefineBase_Capsule_parameters.hpp"


namespace SDK
{

// Function BP_AoeDefineBase_Capsule.BP_AoeDefineBase_Capsule_C.ExecuteUbergraph_BP_AoeDefineBase_Capsule
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AoeDefineBase_Capsule_C::ExecuteUbergraph_BP_AoeDefineBase_Capsule(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AoeDefineBase_Capsule_C", "ExecuteUbergraph_BP_AoeDefineBase_Capsule");

	Params::BP_AoeDefineBase_Capsule_C_ExecuteUbergraph_BP_AoeDefineBase_Capsule Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AoeDefineBase_Capsule.BP_AoeDefineBase_Capsule_C.Preceding Time over
// (BlueprintCallable, BlueprintEvent)

void ABP_AoeDefineBase_Capsule_C::Preceding_Time_over()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AoeDefineBase_Capsule_C", "Preceding Time over");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AoeDefineBase_Capsule.BP_AoeDefineBase_Capsule_C.Set Collision Profile Activate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_AoeDefineBase_Capsule_C::Set_Collision_Profile_Activate(class UPrimitiveComponent* Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AoeDefineBase_Capsule_C", "Set Collision Profile Activate");

	Params::BP_AoeDefineBase_Capsule_C_Set_Collision_Profile_Activate Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AoeDefineBase_Capsule.BP_AoeDefineBase_Capsule_C.Set Collision Profile Deactivate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_AoeDefineBase_Capsule_C::Set_Collision_Profile_Deactivate(class UPrimitiveComponent* Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AoeDefineBase_Capsule_C", "Set Collision Profile Deactivate");

	Params::BP_AoeDefineBase_Capsule_C_Set_Collision_Profile_Deactivate Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);
}

}

