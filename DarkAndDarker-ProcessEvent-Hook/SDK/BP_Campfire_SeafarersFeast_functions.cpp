#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Campfire_SeafarersFeast

#include "Basic.hpp"

#include "BP_Campfire_SeafarersFeast_classes.hpp"
#include "BP_Campfire_SeafarersFeast_parameters.hpp"


namespace SDK
{

// Function BP_Campfire_SeafarersFeast.BP_Campfire_SeafarersFeast_C.Activate Particle System
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Campfire_SeafarersFeast_C::Activate_Particle_System()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Campfire_SeafarersFeast_C", "Activate Particle System");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Campfire_SeafarersFeast.BP_Campfire_SeafarersFeast_C.Deactivate Particle System
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Campfire_SeafarersFeast_C::Deactivate_Particle_System()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Campfire_SeafarersFeast_C", "Deactivate Particle System");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Campfire_SeafarersFeast.BP_Campfire_SeafarersFeast_C.ExecuteUbergraph_BP_Campfire_SeafarersFeast
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Campfire_SeafarersFeast_C::ExecuteUbergraph_BP_Campfire_SeafarersFeast(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Campfire_SeafarersFeast_C", "ExecuteUbergraph_BP_Campfire_SeafarersFeast");

	Params::BP_Campfire_SeafarersFeast_C_ExecuteUbergraph_BP_Campfire_SeafarersFeast Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Campfire_SeafarersFeast.BP_Campfire_SeafarersFeast_C.InteractTargetInfoName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Param_Name                                             (Parm, OutParm)

void ABP_Campfire_SeafarersFeast_C::InteractTargetInfoName(class FText* Param_Name)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Campfire_SeafarersFeast_C", "InteractTargetInfoName");

	Params::BP_Campfire_SeafarersFeast_C_InteractTargetInfoName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_Name != nullptr)
		*Param_Name = std::move(Parms.Param_Name);
}


// Function BP_Campfire_SeafarersFeast.BP_Campfire_SeafarersFeast_C.InteractTargetInfoRarity
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     RarityTag                                              (Parm, OutParm, NoDestructor, HasGetValueTypeHash)

void ABP_Campfire_SeafarersFeast_C::InteractTargetInfoRarity(struct FGameplayTag* RarityTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Campfire_SeafarersFeast_C", "InteractTargetInfoRarity");

	Params::BP_Campfire_SeafarersFeast_C_InteractTargetInfoRarity Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (RarityTag != nullptr)
		*RarityTag = std::move(Parms.RarityTag);
}


// Function BP_Campfire_SeafarersFeast.BP_Campfire_SeafarersFeast_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Campfire_SeafarersFeast_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Campfire_SeafarersFeast_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

