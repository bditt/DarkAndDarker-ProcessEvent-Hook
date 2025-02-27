#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_RoundShieldGuard

#include "Basic.hpp"

#include "GA_PlayerGuardBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_RoundShieldGuard.GA_RoundShieldGuard_C
// 0x0000 (0x0600 - 0x0600)
class UGA_RoundShieldGuard_C final : public UGA_PlayerGuardBase_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_RoundShieldGuard_C">();
	}
	static class UGA_RoundShieldGuard_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_RoundShieldGuard_C>();
	}
};
static_assert(alignof(UGA_RoundShieldGuard_C) == 0x000008, "Wrong alignment on UGA_RoundShieldGuard_C");
static_assert(sizeof(UGA_RoundShieldGuard_C) == 0x000600, "Wrong size on UGA_RoundShieldGuard_C");

}

