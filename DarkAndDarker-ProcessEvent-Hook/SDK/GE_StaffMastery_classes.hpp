#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GE_StaffMastery

#include "Basic.hpp"

#include "GE_Inf_MagicalDamageWeapon_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GE_StaffMastery.GE_StaffMastery_C
// 0x0000 (0x0A70 - 0x0A70)
class UGE_StaffMastery_C final : public UGE_Inf_MagicalDamageWeapon_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_StaffMastery_C">();
	}
	static class UGE_StaffMastery_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_StaffMastery_C>();
	}
};
static_assert(alignof(UGE_StaffMastery_C) == 0x000008, "Wrong alignment on UGE_StaffMastery_C");
static_assert(sizeof(UGE_StaffMastery_C) == 0x000A70, "Wrong size on UGE_StaffMastery_C");

}

