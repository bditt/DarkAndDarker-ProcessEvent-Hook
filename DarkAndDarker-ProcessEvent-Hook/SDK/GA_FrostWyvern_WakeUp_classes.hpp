#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_FrostWyvern_WakeUp

#include "Basic.hpp"

#include "GA_MonsterStanceChange_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_FrostWyvern_WakeUp.GA_FrostWyvern_WakeUp_C
// 0x0000 (0x06B0 - 0x06B0)
class UGA_FrostWyvern_WakeUp_C final : public UGA_MonsterStanceChange_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_FrostWyvern_WakeUp_C">();
	}
	static class UGA_FrostWyvern_WakeUp_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_FrostWyvern_WakeUp_C>();
	}
};
static_assert(alignof(UGA_FrostWyvern_WakeUp_C) == 0x000008, "Wrong alignment on UGA_FrostWyvern_WakeUp_C");
static_assert(sizeof(UGA_FrostWyvern_WakeUp_C) == 0x0006B0, "Wrong size on UGA_FrostWyvern_WakeUp_C");

}

