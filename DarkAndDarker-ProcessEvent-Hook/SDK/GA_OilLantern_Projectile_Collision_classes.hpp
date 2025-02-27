#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_OilLantern_Projectile_Collision

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_AoeCallerFromProjectile_FireFloorBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_OilLantern_Projectile_Collision.GA_OilLantern_Projectile_Collision_C
// 0x0008 (0x0620 - 0x0618)
class UGA_OilLantern_Projectile_Collision_C final : public UGA_AoeCallerFromProjectile_FireFloorBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_OilLantern_Projectile_Collision_C; // 0x0618(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_GA_OilLantern_Projectile_Collision(int32 EntryPoint);
	void K2_ActivateAbility();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_OilLantern_Projectile_Collision_C">();
	}
	static class UGA_OilLantern_Projectile_Collision_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_OilLantern_Projectile_Collision_C>();
	}
};
static_assert(alignof(UGA_OilLantern_Projectile_Collision_C) == 0x000008, "Wrong alignment on UGA_OilLantern_Projectile_Collision_C");
static_assert(sizeof(UGA_OilLantern_Projectile_Collision_C) == 0x000620, "Wrong size on UGA_OilLantern_Projectile_Collision_C");
static_assert(offsetof(UGA_OilLantern_Projectile_Collision_C, UberGraphFrame_GA_OilLantern_Projectile_Collision_C) == 0x000618, "Member 'UGA_OilLantern_Projectile_Collision_C::UberGraphFrame_GA_OilLantern_Projectile_Collision_C' has a wrong offset!");

}

