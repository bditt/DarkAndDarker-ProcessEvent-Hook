#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_SkeletonArcherDeath

#include "Basic.hpp"

#include "GA_MonsterDeath_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_SkeletonArcherDeath.GA_SkeletonArcherDeath_C
// 0x0000 (0x05F0 - 0x05F0)
class UGA_SkeletonArcherDeath_C final : public UGA_MonsterDeath_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_SkeletonArcherDeath_C">();
	}
	static class UGA_SkeletonArcherDeath_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_SkeletonArcherDeath_C>();
	}
};
static_assert(alignof(UGA_SkeletonArcherDeath_C) == 0x000008, "Wrong alignment on UGA_SkeletonArcherDeath_C");
static_assert(sizeof(UGA_SkeletonArcherDeath_C) == 0x0005F0, "Wrong size on UGA_SkeletonArcherDeath_C");

}

