#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_UndeadKnight_Death

#include "Basic.hpp"

#include "GA_MonsterDeath_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_UndeadKnight_Death.GA_UndeadKnight_Death_C
// 0x0000 (0x05F0 - 0x05F0)
class UGA_UndeadKnight_Death_C final : public UGA_MonsterDeath_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_UndeadKnight_Death_C">();
	}
	static class UGA_UndeadKnight_Death_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_UndeadKnight_Death_C>();
	}
};
static_assert(alignof(UGA_UndeadKnight_Death_C) == 0x000008, "Wrong alignment on UGA_UndeadKnight_Death_C");
static_assert(sizeof(UGA_UndeadKnight_Death_C) == 0x0005F0, "Wrong size on UGA_UndeadKnight_Death_C");

}

