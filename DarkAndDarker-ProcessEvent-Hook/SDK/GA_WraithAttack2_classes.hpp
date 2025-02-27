#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_WraithAttack2

#include "Basic.hpp"

#include "GA_MonsterMeleeAttackBaseWithOptions_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_WraithAttack2.GA_WraithAttack2_C
// 0x0000 (0x0720 - 0x0720)
class UGA_WraithAttack2_C final : public UGA_MonsterMeleeAttackBaseWithOptions_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_WraithAttack2_C">();
	}
	static class UGA_WraithAttack2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_WraithAttack2_C>();
	}
};
static_assert(alignof(UGA_WraithAttack2_C) == 0x000008, "Wrong alignment on UGA_WraithAttack2_C");
static_assert(sizeof(UGA_WraithAttack2_C) == 0x000720, "Wrong size on UGA_WraithAttack2_C");

}

