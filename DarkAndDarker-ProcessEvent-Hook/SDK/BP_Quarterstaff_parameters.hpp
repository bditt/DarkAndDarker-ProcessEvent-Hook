#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Quarterstaff

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function BP_Quarterstaff.BP_Quarterstaff_C.ExecuteUbergraph_BP_Quarterstaff
// 0x0014 (0x0014 - 0x0000)
struct BP_Quarterstaff_C_ExecuteUbergraph_BP_Quarterstaff final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           K2Node_Event_InGameplayTag;                        // 0x0004(0x0008)(ConstParm, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_InCount;                              // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_MatchesTag_ReturnValue;                   // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Quarterstaff_C_ExecuteUbergraph_BP_Quarterstaff) == 0x000004, "Wrong alignment on BP_Quarterstaff_C_ExecuteUbergraph_BP_Quarterstaff");
static_assert(sizeof(BP_Quarterstaff_C_ExecuteUbergraph_BP_Quarterstaff) == 0x000014, "Wrong size on BP_Quarterstaff_C_ExecuteUbergraph_BP_Quarterstaff");
static_assert(offsetof(BP_Quarterstaff_C_ExecuteUbergraph_BP_Quarterstaff, EntryPoint) == 0x000000, "Member 'BP_Quarterstaff_C_ExecuteUbergraph_BP_Quarterstaff::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Quarterstaff_C_ExecuteUbergraph_BP_Quarterstaff, K2Node_Event_InGameplayTag) == 0x000004, "Member 'BP_Quarterstaff_C_ExecuteUbergraph_BP_Quarterstaff::K2Node_Event_InGameplayTag' has a wrong offset!");
static_assert(offsetof(BP_Quarterstaff_C_ExecuteUbergraph_BP_Quarterstaff, K2Node_Event_InCount) == 0x00000C, "Member 'BP_Quarterstaff_C_ExecuteUbergraph_BP_Quarterstaff::K2Node_Event_InCount' has a wrong offset!");
static_assert(offsetof(BP_Quarterstaff_C_ExecuteUbergraph_BP_Quarterstaff, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000010, "Member 'BP_Quarterstaff_C_ExecuteUbergraph_BP_Quarterstaff::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Quarterstaff_C_ExecuteUbergraph_BP_Quarterstaff, CallFunc_MatchesTag_ReturnValue) == 0x000011, "Member 'BP_Quarterstaff_C_ExecuteUbergraph_BP_Quarterstaff::CallFunc_MatchesTag_ReturnValue' has a wrong offset!");

// Function BP_Quarterstaff.BP_Quarterstaff_C.GameplayTagUpdated
// 0x000C (0x000C - 0x0000)
struct BP_Quarterstaff_C_GameplayTagUpdated final
{
public:
	struct FGameplayTag                           InGameplayTag;                                     // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	int32                                         InCount;                                           // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Quarterstaff_C_GameplayTagUpdated) == 0x000004, "Wrong alignment on BP_Quarterstaff_C_GameplayTagUpdated");
static_assert(sizeof(BP_Quarterstaff_C_GameplayTagUpdated) == 0x00000C, "Wrong size on BP_Quarterstaff_C_GameplayTagUpdated");
static_assert(offsetof(BP_Quarterstaff_C_GameplayTagUpdated, InGameplayTag) == 0x000000, "Member 'BP_Quarterstaff_C_GameplayTagUpdated::InGameplayTag' has a wrong offset!");
static_assert(offsetof(BP_Quarterstaff_C_GameplayTagUpdated, InCount) == 0x000008, "Member 'BP_Quarterstaff_C_GameplayTagUpdated::InCount' has a wrong offset!");

}

