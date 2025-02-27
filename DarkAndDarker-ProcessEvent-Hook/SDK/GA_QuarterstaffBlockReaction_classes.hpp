#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_QuarterstaffBlockReaction

#include "Basic.hpp"

#include "GA_PlayerCharBlockReactionBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_QuarterstaffBlockReaction.GA_QuarterstaffBlockReaction_C
// 0x0000 (0x05E8 - 0x05E8)
class UGA_QuarterstaffBlockReaction_C final : public UGA_PlayerCharBlockReactionBase_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_QuarterstaffBlockReaction_C">();
	}
	static class UGA_QuarterstaffBlockReaction_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_QuarterstaffBlockReaction_C>();
	}
};
static_assert(alignof(UGA_QuarterstaffBlockReaction_C) == 0x000008, "Wrong alignment on UGA_QuarterstaffBlockReaction_C");
static_assert(sizeof(UGA_QuarterstaffBlockReaction_C) == 0x0005E8, "Wrong size on UGA_QuarterstaffBlockReaction_C");

}

