#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GE_FireMastery

#include "Basic.hpp"

#include "GE_Inf_MagicalFireDamageMod_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GE_FireMastery.GE_FireMastery_C
// 0x0000 (0x0A70 - 0x0A70)
class UGE_FireMastery_C final : public UGE_Inf_MagicalFireDamageMod_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_FireMastery_C">();
	}
	static class UGE_FireMastery_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_FireMastery_C>();
	}
};
static_assert(alignof(UGE_FireMastery_C) == 0x000008, "Wrong alignment on UGE_FireMastery_C");
static_assert(sizeof(UGE_FireMastery_C) == 0x000A70, "Wrong size on UGE_FireMastery_C");

}

