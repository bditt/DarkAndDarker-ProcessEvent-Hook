#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Campfire_Darkflame

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function BP_Campfire_Darkflame.BP_Campfire_Darkflame_C.ExecuteUbergraph_BP_Campfire_Darkflame
// 0x0014 (0x0014 - 0x0000)
struct BP_Campfire_Darkflame_C_ExecuteUbergraph_BP_Campfire_Darkflame final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           K2Node_Event_InGameplayTag;                        // 0x0004(0x0008)(ConstParm, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_InCount;                              // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsServer_ReturnValue;                     // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Campfire_Darkflame_C_ExecuteUbergraph_BP_Campfire_Darkflame) == 0x000004, "Wrong alignment on BP_Campfire_Darkflame_C_ExecuteUbergraph_BP_Campfire_Darkflame");
static_assert(sizeof(BP_Campfire_Darkflame_C_ExecuteUbergraph_BP_Campfire_Darkflame) == 0x000014, "Wrong size on BP_Campfire_Darkflame_C_ExecuteUbergraph_BP_Campfire_Darkflame");
static_assert(offsetof(BP_Campfire_Darkflame_C_ExecuteUbergraph_BP_Campfire_Darkflame, EntryPoint) == 0x000000, "Member 'BP_Campfire_Darkflame_C_ExecuteUbergraph_BP_Campfire_Darkflame::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Campfire_Darkflame_C_ExecuteUbergraph_BP_Campfire_Darkflame, K2Node_Event_InGameplayTag) == 0x000004, "Member 'BP_Campfire_Darkflame_C_ExecuteUbergraph_BP_Campfire_Darkflame::K2Node_Event_InGameplayTag' has a wrong offset!");
static_assert(offsetof(BP_Campfire_Darkflame_C_ExecuteUbergraph_BP_Campfire_Darkflame, K2Node_Event_InCount) == 0x00000C, "Member 'BP_Campfire_Darkflame_C_ExecuteUbergraph_BP_Campfire_Darkflame::K2Node_Event_InCount' has a wrong offset!");
static_assert(offsetof(BP_Campfire_Darkflame_C_ExecuteUbergraph_BP_Campfire_Darkflame, CallFunc_IsServer_ReturnValue) == 0x000010, "Member 'BP_Campfire_Darkflame_C_ExecuteUbergraph_BP_Campfire_Darkflame::CallFunc_IsServer_ReturnValue' has a wrong offset!");

// Function BP_Campfire_Darkflame.BP_Campfire_Darkflame_C.GameplayTagUpdated
// 0x000C (0x000C - 0x0000)
struct BP_Campfire_Darkflame_C_GameplayTagUpdated final
{
public:
	struct FGameplayTag                           InGameplayTag;                                     // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	int32                                         InCount;                                           // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Campfire_Darkflame_C_GameplayTagUpdated) == 0x000004, "Wrong alignment on BP_Campfire_Darkflame_C_GameplayTagUpdated");
static_assert(sizeof(BP_Campfire_Darkflame_C_GameplayTagUpdated) == 0x00000C, "Wrong size on BP_Campfire_Darkflame_C_GameplayTagUpdated");
static_assert(offsetof(BP_Campfire_Darkflame_C_GameplayTagUpdated, InGameplayTag) == 0x000000, "Member 'BP_Campfire_Darkflame_C_GameplayTagUpdated::InGameplayTag' has a wrong offset!");
static_assert(offsetof(BP_Campfire_Darkflame_C_GameplayTagUpdated, InCount) == 0x000008, "Member 'BP_Campfire_Darkflame_C_GameplayTagUpdated::InCount' has a wrong offset!");

}

