#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_ItemTagCollider

#include "Basic.hpp"

#include "GA_ItemTagCollider_classes.hpp"
#include "GA_ItemTagCollider_parameters.hpp"


namespace SDK
{

// Function GA_ItemTagCollider.GA_ItemTagCollider_C.GetColliderRadius
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Radius                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_ItemTagCollider_C::GetColliderRadius(double* Radius)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_ItemTagCollider_C", "GetColliderRadius");

	Params::GA_ItemTagCollider_C_GetColliderRadius Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Radius != nullptr)
		*Radius = Parms.Radius;
}

}

