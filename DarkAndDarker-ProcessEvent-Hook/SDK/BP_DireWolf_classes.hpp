#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DireWolf

#include "Basic.hpp"

#include "BP_CommonWolf_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_DireWolf.BP_DireWolf_C
// 0x0000 (0x1470 - 0x1470)
class ABP_DireWolf_C : public ABP_CommonWolf_C
{
public:
	uint8                                         Pad_4BE8[0x3];                                     // 0x1461(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         MonsterGrade;                                      // 0x1464(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DireWolf_C">();
	}
	static class ABP_DireWolf_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_DireWolf_C>();
	}
};
static_assert(alignof(ABP_DireWolf_C) == 0x000010, "Wrong alignment on ABP_DireWolf_C");
static_assert(sizeof(ABP_DireWolf_C) == 0x001470, "Wrong size on ABP_DireWolf_C");
static_assert(offsetof(ABP_DireWolf_C, MonsterGrade) == 0x001464, "Member 'ABP_DireWolf_C::MonsterGrade' has a wrong offset!");

}

