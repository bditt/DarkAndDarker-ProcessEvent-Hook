#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_OilLantern_Projectile_Collision

#include "Basic.hpp"

#include "GA_OilLantern_Projectile_Collision_classes.hpp"
#include "GA_OilLantern_Projectile_Collision_parameters.hpp"


namespace SDK
{

// Function GA_OilLantern_Projectile_Collision.GA_OilLantern_Projectile_Collision_C.ExecuteUbergraph_GA_OilLantern_Projectile_Collision
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_OilLantern_Projectile_Collision_C::ExecuteUbergraph_GA_OilLantern_Projectile_Collision(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_OilLantern_Projectile_Collision_C", "ExecuteUbergraph_GA_OilLantern_Projectile_Collision");

	Params::GA_OilLantern_Projectile_Collision_C_ExecuteUbergraph_GA_OilLantern_Projectile_Collision Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_OilLantern_Projectile_Collision.GA_OilLantern_Projectile_Collision_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_OilLantern_Projectile_Collision_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_OilLantern_Projectile_Collision_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}

}

