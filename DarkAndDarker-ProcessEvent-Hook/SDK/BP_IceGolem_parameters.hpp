#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_IceGolem

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function BP_IceGolem.BP_IceGolem_C.ExecuteUbergraph_BP_IceGolem
// 0x0068 (0x0068 - 0x0000)
struct BP_IceGolem_C_ExecuteUbergraph_BP_IceGolem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           K2Node_Event_InGameplayTag;                        // 0x0004(0x0008)(ConstParm, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_InCount;                              // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;   // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4FEF[0x6];                                     // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimInstance*                          CallFunc_GetAnimInstance_ReturnValue;              // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UABP_IceGolem_C*                        K2Node_DynamicCast_AsABP_Ice_Golem;                // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4FF0[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UABP_IceGolem_C*                        K2Node_DynamicCast_AsABP_Ice_Golem_1;              // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4FF1[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_OtherActor_1;                         // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_PlayerCharacter_C*                  K2Node_DynamicCast_AsBP_Player_Character;          // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4FF2[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_OtherActor;                           // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_AddUnique_ReturnValue;              // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_RemoveItem_ReturnValue;             // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_IceGolem_C_ExecuteUbergraph_BP_IceGolem) == 0x000008, "Wrong alignment on BP_IceGolem_C_ExecuteUbergraph_BP_IceGolem");
static_assert(sizeof(BP_IceGolem_C_ExecuteUbergraph_BP_IceGolem) == 0x000068, "Wrong size on BP_IceGolem_C_ExecuteUbergraph_BP_IceGolem");
static_assert(offsetof(BP_IceGolem_C_ExecuteUbergraph_BP_IceGolem, EntryPoint) == 0x000000, "Member 'BP_IceGolem_C_ExecuteUbergraph_BP_IceGolem::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_IceGolem_C_ExecuteUbergraph_BP_IceGolem, K2Node_Event_InGameplayTag) == 0x000004, "Member 'BP_IceGolem_C_ExecuteUbergraph_BP_IceGolem::K2Node_Event_InGameplayTag' has a wrong offset!");
static_assert(offsetof(BP_IceGolem_C_ExecuteUbergraph_BP_IceGolem, K2Node_Event_InCount) == 0x00000C, "Member 'BP_IceGolem_C_ExecuteUbergraph_BP_IceGolem::K2Node_Event_InCount' has a wrong offset!");
static_assert(offsetof(BP_IceGolem_C_ExecuteUbergraph_BP_IceGolem, CallFunc_Greater_IntInt_ReturnValue) == 0x000010, "Member 'BP_IceGolem_C_ExecuteUbergraph_BP_IceGolem::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IceGolem_C_ExecuteUbergraph_BP_IceGolem, GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess) == 0x000011, "Member 'BP_IceGolem_C_ExecuteUbergraph_BP_IceGolem::GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_IceGolem_C_ExecuteUbergraph_BP_IceGolem, CallFunc_GetAnimInstance_ReturnValue) == 0x000018, "Member 'BP_IceGolem_C_ExecuteUbergraph_BP_IceGolem::CallFunc_GetAnimInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IceGolem_C_ExecuteUbergraph_BP_IceGolem, K2Node_DynamicCast_AsABP_Ice_Golem) == 0x000020, "Member 'BP_IceGolem_C_ExecuteUbergraph_BP_IceGolem::K2Node_DynamicCast_AsABP_Ice_Golem' has a wrong offset!");
static_assert(offsetof(BP_IceGolem_C_ExecuteUbergraph_BP_IceGolem, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'BP_IceGolem_C_ExecuteUbergraph_BP_IceGolem::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_IceGolem_C_ExecuteUbergraph_BP_IceGolem, K2Node_DynamicCast_AsABP_Ice_Golem_1) == 0x000030, "Member 'BP_IceGolem_C_ExecuteUbergraph_BP_IceGolem::K2Node_DynamicCast_AsABP_Ice_Golem_1' has a wrong offset!");
static_assert(offsetof(BP_IceGolem_C_ExecuteUbergraph_BP_IceGolem, K2Node_DynamicCast_bSuccess_1) == 0x000038, "Member 'BP_IceGolem_C_ExecuteUbergraph_BP_IceGolem::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_IceGolem_C_ExecuteUbergraph_BP_IceGolem, K2Node_Event_OtherActor_1) == 0x000040, "Member 'BP_IceGolem_C_ExecuteUbergraph_BP_IceGolem::K2Node_Event_OtherActor_1' has a wrong offset!");
static_assert(offsetof(BP_IceGolem_C_ExecuteUbergraph_BP_IceGolem, K2Node_DynamicCast_AsBP_Player_Character) == 0x000048, "Member 'BP_IceGolem_C_ExecuteUbergraph_BP_IceGolem::K2Node_DynamicCast_AsBP_Player_Character' has a wrong offset!");
static_assert(offsetof(BP_IceGolem_C_ExecuteUbergraph_BP_IceGolem, K2Node_DynamicCast_bSuccess_2) == 0x000050, "Member 'BP_IceGolem_C_ExecuteUbergraph_BP_IceGolem::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_IceGolem_C_ExecuteUbergraph_BP_IceGolem, K2Node_Event_OtherActor) == 0x000058, "Member 'BP_IceGolem_C_ExecuteUbergraph_BP_IceGolem::K2Node_Event_OtherActor' has a wrong offset!");
static_assert(offsetof(BP_IceGolem_C_ExecuteUbergraph_BP_IceGolem, CallFunc_Array_AddUnique_ReturnValue) == 0x000060, "Member 'BP_IceGolem_C_ExecuteUbergraph_BP_IceGolem::CallFunc_Array_AddUnique_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IceGolem_C_ExecuteUbergraph_BP_IceGolem, CallFunc_Array_RemoveItem_ReturnValue) == 0x000064, "Member 'BP_IceGolem_C_ExecuteUbergraph_BP_IceGolem::CallFunc_Array_RemoveItem_ReturnValue' has a wrong offset!");

// Function BP_IceGolem.BP_IceGolem_C.GameplayTagUpdated
// 0x000C (0x000C - 0x0000)
struct BP_IceGolem_C_GameplayTagUpdated final
{
public:
	struct FGameplayTag                           InGameplayTag;                                     // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	int32                                         InCount;                                           // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_IceGolem_C_GameplayTagUpdated) == 0x000004, "Wrong alignment on BP_IceGolem_C_GameplayTagUpdated");
static_assert(sizeof(BP_IceGolem_C_GameplayTagUpdated) == 0x00000C, "Wrong size on BP_IceGolem_C_GameplayTagUpdated");
static_assert(offsetof(BP_IceGolem_C_GameplayTagUpdated, InGameplayTag) == 0x000000, "Member 'BP_IceGolem_C_GameplayTagUpdated::InGameplayTag' has a wrong offset!");
static_assert(offsetof(BP_IceGolem_C_GameplayTagUpdated, InCount) == 0x000008, "Member 'BP_IceGolem_C_GameplayTagUpdated::InCount' has a wrong offset!");

// Function BP_IceGolem.BP_IceGolem_C.Phase Count Function
// 0x0008 (0x0008 - 0x0000)
struct BP_IceGolem_C_Phase_Count_Function final
{
public:
	int32                                         CallFunc_RandomIntegerInRange_ReturnValue;         // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_IceGolem_C_Phase_Count_Function) == 0x000004, "Wrong alignment on BP_IceGolem_C_Phase_Count_Function");
static_assert(sizeof(BP_IceGolem_C_Phase_Count_Function) == 0x000008, "Wrong size on BP_IceGolem_C_Phase_Count_Function");
static_assert(offsetof(BP_IceGolem_C_Phase_Count_Function, CallFunc_RandomIntegerInRange_ReturnValue) == 0x000000, "Member 'BP_IceGolem_C_Phase_Count_Function::CallFunc_RandomIntegerInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_IceGolem_C_Phase_Count_Function, CallFunc_Add_IntInt_ReturnValue) == 0x000004, "Member 'BP_IceGolem_C_Phase_Count_Function::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function BP_IceGolem.BP_IceGolem_C.ReceiveActorBeginOverlap
// 0x0008 (0x0008 - 0x0000)
struct BP_IceGolem_C_ReceiveActorBeginOverlap final
{
public:
	class AActor*                                 OtherActor;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_IceGolem_C_ReceiveActorBeginOverlap) == 0x000008, "Wrong alignment on BP_IceGolem_C_ReceiveActorBeginOverlap");
static_assert(sizeof(BP_IceGolem_C_ReceiveActorBeginOverlap) == 0x000008, "Wrong size on BP_IceGolem_C_ReceiveActorBeginOverlap");
static_assert(offsetof(BP_IceGolem_C_ReceiveActorBeginOverlap, OtherActor) == 0x000000, "Member 'BP_IceGolem_C_ReceiveActorBeginOverlap::OtherActor' has a wrong offset!");

// Function BP_IceGolem.BP_IceGolem_C.ReceiveActorEndOverlap
// 0x0008 (0x0008 - 0x0000)
struct BP_IceGolem_C_ReceiveActorEndOverlap final
{
public:
	class AActor*                                 OtherActor;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_IceGolem_C_ReceiveActorEndOverlap) == 0x000008, "Wrong alignment on BP_IceGolem_C_ReceiveActorEndOverlap");
static_assert(sizeof(BP_IceGolem_C_ReceiveActorEndOverlap) == 0x000008, "Wrong size on BP_IceGolem_C_ReceiveActorEndOverlap");
static_assert(offsetof(BP_IceGolem_C_ReceiveActorEndOverlap, OtherActor) == 0x000000, "Member 'BP_IceGolem_C_ReceiveActorEndOverlap::OtherActor' has a wrong offset!");

}

