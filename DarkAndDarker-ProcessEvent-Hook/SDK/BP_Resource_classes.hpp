#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Resource

#include "Basic.hpp"

#include "DungeonCrawler_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Resource.BP_Resource_C
// 0x0000 (0x03D8 - 0x03D8)
class UBP_Resource_C final : public UDCResource
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Resource_C">();
	}
	static class UBP_Resource_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Resource_C>();
	}
};
static_assert(alignof(UBP_Resource_C) == 0x000008, "Wrong alignment on UBP_Resource_C");
static_assert(sizeof(UBP_Resource_C) == 0x0003D8, "Wrong size on UBP_Resource_C");

}

