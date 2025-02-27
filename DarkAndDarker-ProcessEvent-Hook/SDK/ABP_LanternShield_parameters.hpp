#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_LanternShield

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function ABP_LanternShield.ABP_LanternShield_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct ABP_LanternShield_C_AnimGraph final
{
public:
	struct FPoseLink                              Param_AnimGraph;                                   // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(ABP_LanternShield_C_AnimGraph) == 0x000008, "Wrong alignment on ABP_LanternShield_C_AnimGraph");
static_assert(sizeof(ABP_LanternShield_C_AnimGraph) == 0x000010, "Wrong size on ABP_LanternShield_C_AnimGraph");
static_assert(offsetof(ABP_LanternShield_C_AnimGraph, Param_AnimGraph) == 0x000000, "Member 'ABP_LanternShield_C_AnimGraph::Param_AnimGraph' has a wrong offset!");

// Function ABP_LanternShield.ABP_LanternShield_C.ExecuteUbergraph_ABP_LanternShield
// 0x0014 (0x0014 - 0x0000)
struct ABP_LanternShield_C_ExecuteUbergraph_ABP_LanternShield final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           K2Node_Event_InGameplayTag;                        // 0x0004(0x0008)(ConstParm, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_InCount;                              // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;   // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_LanternShield_C_ExecuteUbergraph_ABP_LanternShield) == 0x000004, "Wrong alignment on ABP_LanternShield_C_ExecuteUbergraph_ABP_LanternShield");
static_assert(sizeof(ABP_LanternShield_C_ExecuteUbergraph_ABP_LanternShield) == 0x000014, "Wrong size on ABP_LanternShield_C_ExecuteUbergraph_ABP_LanternShield");
static_assert(offsetof(ABP_LanternShield_C_ExecuteUbergraph_ABP_LanternShield, EntryPoint) == 0x000000, "Member 'ABP_LanternShield_C_ExecuteUbergraph_ABP_LanternShield::EntryPoint' has a wrong offset!");
static_assert(offsetof(ABP_LanternShield_C_ExecuteUbergraph_ABP_LanternShield, K2Node_Event_InGameplayTag) == 0x000004, "Member 'ABP_LanternShield_C_ExecuteUbergraph_ABP_LanternShield::K2Node_Event_InGameplayTag' has a wrong offset!");
static_assert(offsetof(ABP_LanternShield_C_ExecuteUbergraph_ABP_LanternShield, K2Node_Event_InCount) == 0x00000C, "Member 'ABP_LanternShield_C_ExecuteUbergraph_ABP_LanternShield::K2Node_Event_InCount' has a wrong offset!");
static_assert(offsetof(ABP_LanternShield_C_ExecuteUbergraph_ABP_LanternShield, GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess) == 0x000010, "Member 'ABP_LanternShield_C_ExecuteUbergraph_ABP_LanternShield::GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess' has a wrong offset!");
static_assert(offsetof(ABP_LanternShield_C_ExecuteUbergraph_ABP_LanternShield, CallFunc_Greater_IntInt_ReturnValue) == 0x000011, "Member 'ABP_LanternShield_C_ExecuteUbergraph_ABP_LanternShield::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

// Function ABP_LanternShield.ABP_LanternShield_C.GameplayTagUpdated
// 0x000C (0x000C - 0x0000)
struct ABP_LanternShield_C_GameplayTagUpdated final
{
public:
	struct FGameplayTag                           InGameplayTag;                                     // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	int32                                         InCount;                                           // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_LanternShield_C_GameplayTagUpdated) == 0x000004, "Wrong alignment on ABP_LanternShield_C_GameplayTagUpdated");
static_assert(sizeof(ABP_LanternShield_C_GameplayTagUpdated) == 0x00000C, "Wrong size on ABP_LanternShield_C_GameplayTagUpdated");
static_assert(offsetof(ABP_LanternShield_C_GameplayTagUpdated, InGameplayTag) == 0x000000, "Member 'ABP_LanternShield_C_GameplayTagUpdated::InGameplayTag' has a wrong offset!");
static_assert(offsetof(ABP_LanternShield_C_GameplayTagUpdated, InCount) == 0x000008, "Member 'ABP_LanternShield_C_GameplayTagUpdated::InCount' has a wrong offset!");

}

