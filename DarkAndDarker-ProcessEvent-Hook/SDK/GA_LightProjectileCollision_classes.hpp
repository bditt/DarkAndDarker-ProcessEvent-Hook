#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_LightProjectileCollision

#include "Basic.hpp"

#include "GA_ProjectileCollision_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_LightProjectileCollision.GA_LightProjectileCollision_C
// 0x0000 (0x05C0 - 0x05C0)
class UGA_LightProjectileCollision_C final : public UGA_ProjectileCollision_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_LightProjectileCollision_C">();
	}
	static class UGA_LightProjectileCollision_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_LightProjectileCollision_C>();
	}
};
static_assert(alignof(UGA_LightProjectileCollision_C) == 0x000008, "Wrong alignment on UGA_LightProjectileCollision_C");
static_assert(sizeof(UGA_LightProjectileCollision_C) == 0x0005C0, "Wrong size on UGA_LightProjectileCollision_C");

}

