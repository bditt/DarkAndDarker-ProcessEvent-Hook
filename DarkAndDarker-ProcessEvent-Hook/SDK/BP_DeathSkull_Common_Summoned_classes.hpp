#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DeathSkull_Common_Summoned

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_DeathSkull_Common_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_DeathSkull_Common_Summoned.BP_DeathSkull_Common_Summoned_C
// 0x0000 (0x1480 - 0x1480)
class ABP_DeathSkull_Common_Summoned_C : public ABP_DeathSkull_Common_C
{
public:
	uint8                                         Pad_12AC[0x4];                                     // 0x1474(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_DeathSkull_Common_Summoned_C;    // 0x1478(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_DeathSkull_Common_Summoned(int32 EntryPoint);
	void ReceiveBeginPlay();
	void OnSetAI();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DeathSkull_Common_Summoned_C">();
	}
	static class ABP_DeathSkull_Common_Summoned_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_DeathSkull_Common_Summoned_C>();
	}
};
static_assert(alignof(ABP_DeathSkull_Common_Summoned_C) == 0x000010, "Wrong alignment on ABP_DeathSkull_Common_Summoned_C");
static_assert(sizeof(ABP_DeathSkull_Common_Summoned_C) == 0x001480, "Wrong size on ABP_DeathSkull_Common_Summoned_C");
static_assert(offsetof(ABP_DeathSkull_Common_Summoned_C, UberGraphFrame_BP_DeathSkull_Common_Summoned_C) == 0x001478, "Member 'ABP_DeathSkull_Common_Summoned_C::UberGraphFrame_BP_DeathSkull_Common_Summoned_C' has a wrong offset!");

}

