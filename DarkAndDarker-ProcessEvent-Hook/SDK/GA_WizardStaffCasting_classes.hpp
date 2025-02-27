#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_WizardStaffCasting

#include "Basic.hpp"

#include "GA_PlayerSpellCast_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_WizardStaffCasting.GA_WizardStaffCasting_C
// 0x0000 (0x0818 - 0x0818)
class UGA_WizardStaffCasting_C final : public UGA_PlayerSpellCast_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_WizardStaffCasting_C">();
	}
	static class UGA_WizardStaffCasting_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_WizardStaffCasting_C>();
	}
};
static_assert(alignof(UGA_WizardStaffCasting_C) == 0x000008, "Wrong alignment on UGA_WizardStaffCasting_C");
static_assert(sizeof(UGA_WizardStaffCasting_C) == 0x000818, "Wrong size on UGA_WizardStaffCasting_C");

}

