#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GE_CounterattackBuff

#include "Basic.hpp"

#include "GE_Dur_MoveSpeedModActionSpeedAdd_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GE_CounterattackBuff.GE_CounterattackBuff_C
// 0x0000 (0x0A70 - 0x0A70)
class UGE_CounterattackBuff_C final : public UGE_Dur_MoveSpeedModActionSpeedAdd_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_CounterattackBuff_C">();
	}
	static class UGE_CounterattackBuff_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_CounterattackBuff_C>();
	}
};
static_assert(alignof(UGE_CounterattackBuff_C) == 0x000008, "Wrong alignment on UGE_CounterattackBuff_C");
static_assert(sizeof(UGE_CounterattackBuff_C) == 0x000A70, "Wrong size on UGE_CounterattackBuff_C");

}

