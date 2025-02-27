#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GoblinBolaslinger

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "DungeonCrawler_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function BP_GoblinBolaslinger.BP_GoblinBolaslinger_C.ExecuteUbergraph_BP_GoblinBolaslinger
// 0x08A0 (0x08A0 - 0x0000)
struct BP_GoblinBolaslinger_C_ExecuteUbergraph_BP_GoblinBolaslinger final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           K2Node_Event_InGameplayTag;                        // 0x0004(0x0008)(ConstParm, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_InCount;                              // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_GameplayTag_ReturnValue;       // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_GameplayTag_ReturnValue_1;     // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_GameplayTag_ReturnValue_2;     // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_37AB[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMsgGASAttributeNotify                 K2Node_Event_InMsg;                                // 0x0018(0x0720)(ConstParm, ContainsInstancedReference)
	class AActor*                                 CallFunc_DCEffectContextGetInstigatorActor_ReturnValue; // 0x0738(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0740(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     K2Node_MakeStruct_GameplayEventData;               // 0x0748(0x00B0)()
	bool                                          CallFunc_EqualEqual_GameplayAttributeGameplayAttribute_ReturnValue; // 0x07F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_37AC[0x7];                                     // 0x07F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_RandomFloatInRange_ReturnValue;           // 0x0800(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0808(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x0809(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x080A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x080B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetDistanceTo_ReturnValue;                // 0x080C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x0810(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasMatchingGameplayTag_ReturnValue;       // 0x0811(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_37AD[0x6];                                     // 0x0812(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FGameplayTag>                   K2Node_MakeArray_Array;                            // 0x0818(0x0010)(ConstParm, ReferenceParm)
	struct FGameplayTagContainer                  CallFunc_MakeGameplayTagContainerFromArray_ReturnValue; // 0x0828(0x0020)()
	bool                                          CallFunc_HasAnyMatchingGameplayTags_ReturnValue;   // 0x0848(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_37AE[0x7];                                     // 0x0849(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimInstance*                          CallFunc_GetAnimInstance_ReturnValue;              // 0x0850(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UABP_GoblinBolaslinger_C*               K2Node_DynamicCast_AsABP_Goblin_Bolaslinger;       // 0x0858(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0860(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_37AF[0x7];                                     // 0x0861(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UABP_GoblinBolaslinger_C*               K2Node_DynamicCast_AsABP_Goblin_Bolaslinger_1;     // 0x0868(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0870(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_37B0[0x7];                                     // 0x0871(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UABP_GoblinBolaslinger_C*               K2Node_DynamicCast_AsABP_Goblin_Bolaslinger_2;     // 0x0878(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0880(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_37B1[0x7];                                     // 0x0881(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Subtract_DoubleDouble_B_ImplicitCast;     // 0x0888(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_A_ImplicitCast;     // 0x0890(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Less_DoubleDouble_A_ImplicitCast;         // 0x0898(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GoblinBolaslinger_C_ExecuteUbergraph_BP_GoblinBolaslinger) == 0x000008, "Wrong alignment on BP_GoblinBolaslinger_C_ExecuteUbergraph_BP_GoblinBolaslinger");
static_assert(sizeof(BP_GoblinBolaslinger_C_ExecuteUbergraph_BP_GoblinBolaslinger) == 0x0008A0, "Wrong size on BP_GoblinBolaslinger_C_ExecuteUbergraph_BP_GoblinBolaslinger");
static_assert(offsetof(BP_GoblinBolaslinger_C_ExecuteUbergraph_BP_GoblinBolaslinger, EntryPoint) == 0x000000, "Member 'BP_GoblinBolaslinger_C_ExecuteUbergraph_BP_GoblinBolaslinger::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_GoblinBolaslinger_C_ExecuteUbergraph_BP_GoblinBolaslinger, K2Node_Event_InGameplayTag) == 0x000004, "Member 'BP_GoblinBolaslinger_C_ExecuteUbergraph_BP_GoblinBolaslinger::K2Node_Event_InGameplayTag' has a wrong offset!");
static_assert(offsetof(BP_GoblinBolaslinger_C_ExecuteUbergraph_BP_GoblinBolaslinger, K2Node_Event_InCount) == 0x00000C, "Member 'BP_GoblinBolaslinger_C_ExecuteUbergraph_BP_GoblinBolaslinger::K2Node_Event_InCount' has a wrong offset!");
static_assert(offsetof(BP_GoblinBolaslinger_C_ExecuteUbergraph_BP_GoblinBolaslinger, CallFunc_Greater_IntInt_ReturnValue) == 0x000010, "Member 'BP_GoblinBolaslinger_C_ExecuteUbergraph_BP_GoblinBolaslinger::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GoblinBolaslinger_C_ExecuteUbergraph_BP_GoblinBolaslinger, CallFunc_EqualEqual_GameplayTag_ReturnValue) == 0x000011, "Member 'BP_GoblinBolaslinger_C_ExecuteUbergraph_BP_GoblinBolaslinger::CallFunc_EqualEqual_GameplayTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GoblinBolaslinger_C_ExecuteUbergraph_BP_GoblinBolaslinger, CallFunc_EqualEqual_GameplayTag_ReturnValue_1) == 0x000012, "Member 'BP_GoblinBolaslinger_C_ExecuteUbergraph_BP_GoblinBolaslinger::CallFunc_EqualEqual_GameplayTag_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_GoblinBolaslinger_C_ExecuteUbergraph_BP_GoblinBolaslinger, CallFunc_EqualEqual_GameplayTag_ReturnValue_2) == 0x000013, "Member 'BP_GoblinBolaslinger_C_ExecuteUbergraph_BP_GoblinBolaslinger::CallFunc_EqualEqual_GameplayTag_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_GoblinBolaslinger_C_ExecuteUbergraph_BP_GoblinBolaslinger, K2Node_Event_InMsg) == 0x000018, "Member 'BP_GoblinBolaslinger_C_ExecuteUbergraph_BP_GoblinBolaslinger::K2Node_Event_InMsg' has a wrong offset!");
static_assert(offsetof(BP_GoblinBolaslinger_C_ExecuteUbergraph_BP_GoblinBolaslinger, CallFunc_DCEffectContextGetInstigatorActor_ReturnValue) == 0x000738, "Member 'BP_GoblinBolaslinger_C_ExecuteUbergraph_BP_GoblinBolaslinger::CallFunc_DCEffectContextGetInstigatorActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GoblinBolaslinger_C_ExecuteUbergraph_BP_GoblinBolaslinger, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000740, "Member 'BP_GoblinBolaslinger_C_ExecuteUbergraph_BP_GoblinBolaslinger::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GoblinBolaslinger_C_ExecuteUbergraph_BP_GoblinBolaslinger, K2Node_MakeStruct_GameplayEventData) == 0x000748, "Member 'BP_GoblinBolaslinger_C_ExecuteUbergraph_BP_GoblinBolaslinger::K2Node_MakeStruct_GameplayEventData' has a wrong offset!");
static_assert(offsetof(BP_GoblinBolaslinger_C_ExecuteUbergraph_BP_GoblinBolaslinger, CallFunc_EqualEqual_GameplayAttributeGameplayAttribute_ReturnValue) == 0x0007F8, "Member 'BP_GoblinBolaslinger_C_ExecuteUbergraph_BP_GoblinBolaslinger::CallFunc_EqualEqual_GameplayAttributeGameplayAttribute_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GoblinBolaslinger_C_ExecuteUbergraph_BP_GoblinBolaslinger, CallFunc_RandomFloatInRange_ReturnValue) == 0x000800, "Member 'BP_GoblinBolaslinger_C_ExecuteUbergraph_BP_GoblinBolaslinger::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GoblinBolaslinger_C_ExecuteUbergraph_BP_GoblinBolaslinger, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000808, "Member 'BP_GoblinBolaslinger_C_ExecuteUbergraph_BP_GoblinBolaslinger::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GoblinBolaslinger_C_ExecuteUbergraph_BP_GoblinBolaslinger, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x000809, "Member 'BP_GoblinBolaslinger_C_ExecuteUbergraph_BP_GoblinBolaslinger::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GoblinBolaslinger_C_ExecuteUbergraph_BP_GoblinBolaslinger, CallFunc_GreaterEqual_DoubleDouble_ReturnValue) == 0x00080A, "Member 'BP_GoblinBolaslinger_C_ExecuteUbergraph_BP_GoblinBolaslinger::CallFunc_GreaterEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GoblinBolaslinger_C_ExecuteUbergraph_BP_GoblinBolaslinger, CallFunc_BooleanOR_ReturnValue) == 0x00080B, "Member 'BP_GoblinBolaslinger_C_ExecuteUbergraph_BP_GoblinBolaslinger::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GoblinBolaslinger_C_ExecuteUbergraph_BP_GoblinBolaslinger, CallFunc_GetDistanceTo_ReturnValue) == 0x00080C, "Member 'BP_GoblinBolaslinger_C_ExecuteUbergraph_BP_GoblinBolaslinger::CallFunc_GetDistanceTo_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GoblinBolaslinger_C_ExecuteUbergraph_BP_GoblinBolaslinger, CallFunc_Less_DoubleDouble_ReturnValue) == 0x000810, "Member 'BP_GoblinBolaslinger_C_ExecuteUbergraph_BP_GoblinBolaslinger::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GoblinBolaslinger_C_ExecuteUbergraph_BP_GoblinBolaslinger, CallFunc_HasMatchingGameplayTag_ReturnValue) == 0x000811, "Member 'BP_GoblinBolaslinger_C_ExecuteUbergraph_BP_GoblinBolaslinger::CallFunc_HasMatchingGameplayTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GoblinBolaslinger_C_ExecuteUbergraph_BP_GoblinBolaslinger, K2Node_MakeArray_Array) == 0x000818, "Member 'BP_GoblinBolaslinger_C_ExecuteUbergraph_BP_GoblinBolaslinger::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_GoblinBolaslinger_C_ExecuteUbergraph_BP_GoblinBolaslinger, CallFunc_MakeGameplayTagContainerFromArray_ReturnValue) == 0x000828, "Member 'BP_GoblinBolaslinger_C_ExecuteUbergraph_BP_GoblinBolaslinger::CallFunc_MakeGameplayTagContainerFromArray_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GoblinBolaslinger_C_ExecuteUbergraph_BP_GoblinBolaslinger, CallFunc_HasAnyMatchingGameplayTags_ReturnValue) == 0x000848, "Member 'BP_GoblinBolaslinger_C_ExecuteUbergraph_BP_GoblinBolaslinger::CallFunc_HasAnyMatchingGameplayTags_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GoblinBolaslinger_C_ExecuteUbergraph_BP_GoblinBolaslinger, CallFunc_GetAnimInstance_ReturnValue) == 0x000850, "Member 'BP_GoblinBolaslinger_C_ExecuteUbergraph_BP_GoblinBolaslinger::CallFunc_GetAnimInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GoblinBolaslinger_C_ExecuteUbergraph_BP_GoblinBolaslinger, K2Node_DynamicCast_AsABP_Goblin_Bolaslinger) == 0x000858, "Member 'BP_GoblinBolaslinger_C_ExecuteUbergraph_BP_GoblinBolaslinger::K2Node_DynamicCast_AsABP_Goblin_Bolaslinger' has a wrong offset!");
static_assert(offsetof(BP_GoblinBolaslinger_C_ExecuteUbergraph_BP_GoblinBolaslinger, K2Node_DynamicCast_bSuccess) == 0x000860, "Member 'BP_GoblinBolaslinger_C_ExecuteUbergraph_BP_GoblinBolaslinger::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_GoblinBolaslinger_C_ExecuteUbergraph_BP_GoblinBolaslinger, K2Node_DynamicCast_AsABP_Goblin_Bolaslinger_1) == 0x000868, "Member 'BP_GoblinBolaslinger_C_ExecuteUbergraph_BP_GoblinBolaslinger::K2Node_DynamicCast_AsABP_Goblin_Bolaslinger_1' has a wrong offset!");
static_assert(offsetof(BP_GoblinBolaslinger_C_ExecuteUbergraph_BP_GoblinBolaslinger, K2Node_DynamicCast_bSuccess_1) == 0x000870, "Member 'BP_GoblinBolaslinger_C_ExecuteUbergraph_BP_GoblinBolaslinger::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_GoblinBolaslinger_C_ExecuteUbergraph_BP_GoblinBolaslinger, K2Node_DynamicCast_AsABP_Goblin_Bolaslinger_2) == 0x000878, "Member 'BP_GoblinBolaslinger_C_ExecuteUbergraph_BP_GoblinBolaslinger::K2Node_DynamicCast_AsABP_Goblin_Bolaslinger_2' has a wrong offset!");
static_assert(offsetof(BP_GoblinBolaslinger_C_ExecuteUbergraph_BP_GoblinBolaslinger, K2Node_DynamicCast_bSuccess_2) == 0x000880, "Member 'BP_GoblinBolaslinger_C_ExecuteUbergraph_BP_GoblinBolaslinger::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_GoblinBolaslinger_C_ExecuteUbergraph_BP_GoblinBolaslinger, CallFunc_Subtract_DoubleDouble_B_ImplicitCast) == 0x000888, "Member 'BP_GoblinBolaslinger_C_ExecuteUbergraph_BP_GoblinBolaslinger::CallFunc_Subtract_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_GoblinBolaslinger_C_ExecuteUbergraph_BP_GoblinBolaslinger, CallFunc_Subtract_DoubleDouble_A_ImplicitCast) == 0x000890, "Member 'BP_GoblinBolaslinger_C_ExecuteUbergraph_BP_GoblinBolaslinger::CallFunc_Subtract_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_GoblinBolaslinger_C_ExecuteUbergraph_BP_GoblinBolaslinger, CallFunc_Less_DoubleDouble_A_ImplicitCast) == 0x000898, "Member 'BP_GoblinBolaslinger_C_ExecuteUbergraph_BP_GoblinBolaslinger::CallFunc_Less_DoubleDouble_A_ImplicitCast' has a wrong offset!");

// Function BP_GoblinBolaslinger.BP_GoblinBolaslinger_C.GameplayTagUpdated
// 0x000C (0x000C - 0x0000)
struct BP_GoblinBolaslinger_C_GameplayTagUpdated final
{
public:
	struct FGameplayTag                           InGameplayTag;                                     // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	int32                                         InCount;                                           // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GoblinBolaslinger_C_GameplayTagUpdated) == 0x000004, "Wrong alignment on BP_GoblinBolaslinger_C_GameplayTagUpdated");
static_assert(sizeof(BP_GoblinBolaslinger_C_GameplayTagUpdated) == 0x00000C, "Wrong size on BP_GoblinBolaslinger_C_GameplayTagUpdated");
static_assert(offsetof(BP_GoblinBolaslinger_C_GameplayTagUpdated, InGameplayTag) == 0x000000, "Member 'BP_GoblinBolaslinger_C_GameplayTagUpdated::InGameplayTag' has a wrong offset!");
static_assert(offsetof(BP_GoblinBolaslinger_C_GameplayTagUpdated, InCount) == 0x000008, "Member 'BP_GoblinBolaslinger_C_GameplayTagUpdated::InCount' has a wrong offset!");

// Function BP_GoblinBolaslinger.BP_GoblinBolaslinger_C.OnFMsgGASAttributeNotifyBlueprint
// 0x0720 (0x0720 - 0x0000)
struct BP_GoblinBolaslinger_C_OnFMsgGASAttributeNotifyBlueprint final
{
public:
	struct FMsgGASAttributeNotify                 InMsg;                                             // 0x0000(0x0720)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(BP_GoblinBolaslinger_C_OnFMsgGASAttributeNotifyBlueprint) == 0x000008, "Wrong alignment on BP_GoblinBolaslinger_C_OnFMsgGASAttributeNotifyBlueprint");
static_assert(sizeof(BP_GoblinBolaslinger_C_OnFMsgGASAttributeNotifyBlueprint) == 0x000720, "Wrong size on BP_GoblinBolaslinger_C_OnFMsgGASAttributeNotifyBlueprint");
static_assert(offsetof(BP_GoblinBolaslinger_C_OnFMsgGASAttributeNotifyBlueprint, InMsg) == 0x000000, "Member 'BP_GoblinBolaslinger_C_OnFMsgGASAttributeNotifyBlueprint::InMsg' has a wrong offset!");

}

