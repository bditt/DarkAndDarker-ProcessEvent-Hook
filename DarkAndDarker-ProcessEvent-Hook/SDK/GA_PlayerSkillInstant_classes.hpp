#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_PlayerSkillInstant

#include "Basic.hpp"

#include "DungeonCrawler_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_PlayerSkillInstant.GA_PlayerSkillInstant_C
// 0x0000 (0x06D8 - 0x06D8)
class UGA_PlayerSkillInstant_C : public UGA_PlayerSkillInstantBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_PlayerSkillInstant_C">();
	}
	static class UGA_PlayerSkillInstant_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_PlayerSkillInstant_C>();
	}
};
static_assert(alignof(UGA_PlayerSkillInstant_C) == 0x000008, "Wrong alignment on UGA_PlayerSkillInstant_C");
static_assert(sizeof(UGA_PlayerSkillInstant_C) == 0x0006D8, "Wrong size on UGA_PlayerSkillInstant_C");

}

