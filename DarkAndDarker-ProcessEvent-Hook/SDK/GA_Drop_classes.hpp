#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Drop

#include "Basic.hpp"

#include "DungeonCrawler_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Drop.GA_Drop_C
// 0x0000 (0x05C8 - 0x05C8)
class UGA_Drop_C final : public UGA_Drop
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Drop_C">();
	}
	static class UGA_Drop_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Drop_C>();
	}
};
static_assert(alignof(UGA_Drop_C) == 0x000008, "Wrong alignment on UGA_Drop_C");
static_assert(sizeof(UGA_Drop_C) == 0x0005C8, "Wrong size on UGA_Drop_C");

}

