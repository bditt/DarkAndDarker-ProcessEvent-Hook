#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_FrostWalker_IceAoe

#include "Basic.hpp"

#include "GA_AoeCallerAtLocation_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_FrostWalker_IceAoe.GA_FrostWalker_IceAoe_C
// 0x0000 (0x0608 - 0x0608)
class UGA_FrostWalker_IceAoe_C final : public UGA_AoeCallerAtLocation_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_FrostWalker_IceAoe_C">();
	}
	static class UGA_FrostWalker_IceAoe_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_FrostWalker_IceAoe_C>();
	}
};
static_assert(alignof(UGA_FrostWalker_IceAoe_C) == 0x000008, "Wrong alignment on UGA_FrostWalker_IceAoe_C");
static_assert(sizeof(UGA_FrostWalker_IceAoe_C) == 0x000608, "Wrong size on UGA_FrostWalker_IceAoe_C");

}

