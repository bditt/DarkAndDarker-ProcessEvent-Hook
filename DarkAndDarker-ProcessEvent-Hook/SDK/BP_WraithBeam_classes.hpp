#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_WraithBeam

#include "Basic.hpp"

#include "BP_ProjectileActor_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_WraithBeam.BP_WraithBeam_C
// 0x0000 (0x0790 - 0x0790)
class ABP_WraithBeam_C final : public ABP_ProjectileActor_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_WraithBeam_C">();
	}
	static class ABP_WraithBeam_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_WraithBeam_C>();
	}
};
static_assert(alignof(ABP_WraithBeam_C) == 0x000010, "Wrong alignment on ABP_WraithBeam_C");
static_assert(sizeof(ABP_WraithBeam_C) == 0x000790, "Wrong size on ABP_WraithBeam_C");

}

