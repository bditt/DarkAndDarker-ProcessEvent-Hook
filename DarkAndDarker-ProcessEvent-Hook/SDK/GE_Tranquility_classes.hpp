#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GE_Tranquility

#include "Basic.hpp"

#include "GE_Dur_TagOnly_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GE_Tranquility.GE_Tranquility_C
// 0x0000 (0x0A70 - 0x0A70)
class UGE_Tranquility_C final : public UGE_Dur_TagOnly_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_Tranquility_C">();
	}
	static class UGE_Tranquility_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_Tranquility_C>();
	}
};
static_assert(alignof(UGE_Tranquility_C) == 0x000008, "Wrong alignment on UGE_Tranquility_C");
static_assert(sizeof(UGE_Tranquility_C) == 0x000A70, "Wrong size on UGE_Tranquility_C");

}

