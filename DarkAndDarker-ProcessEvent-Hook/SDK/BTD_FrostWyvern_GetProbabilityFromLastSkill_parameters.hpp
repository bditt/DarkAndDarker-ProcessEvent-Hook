#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTD_FrostWyvern_GetProbabilityFromLastSkill

#include "Basic.hpp"


namespace SDK::Params
{

// Function BTD_FrostWyvern_GetProbabilityFromLastSkill.BTD_FrostWyvern_GetProbabilityFromLastSkill_C.PerformConditionCheckAI
// 0x0070 (0x0070 - 0x0000)
struct BTD_FrostWyvern_GetProbabilityFromLastSkill_C_PerformConditionCheckAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3EA8[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_RandomFloatInRange_ReturnValue;           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_FrostWyvern_C*                      K2Node_DynamicCast_AsBP_Frost_Wyvern;              // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3EA9[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_RandomFloatInRange_ReturnValue_1;         // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_RandomFloatInRange_ReturnValue_2;         // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3EAA[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3EAB[0x6];                                     // 0x0052(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FMin_ReturnValue;                         // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTD_FrostWyvern_GetProbabilityFromLastSkill_C_PerformConditionCheckAI) == 0x000008, "Wrong alignment on BTD_FrostWyvern_GetProbabilityFromLastSkill_C_PerformConditionCheckAI");
static_assert(sizeof(BTD_FrostWyvern_GetProbabilityFromLastSkill_C_PerformConditionCheckAI) == 0x000070, "Wrong size on BTD_FrostWyvern_GetProbabilityFromLastSkill_C_PerformConditionCheckAI");
static_assert(offsetof(BTD_FrostWyvern_GetProbabilityFromLastSkill_C_PerformConditionCheckAI, OwnerController) == 0x000000, "Member 'BTD_FrostWyvern_GetProbabilityFromLastSkill_C_PerformConditionCheckAI::OwnerController' has a wrong offset!");
static_assert(offsetof(BTD_FrostWyvern_GetProbabilityFromLastSkill_C_PerformConditionCheckAI, ControlledPawn) == 0x000008, "Member 'BTD_FrostWyvern_GetProbabilityFromLastSkill_C_PerformConditionCheckAI::ControlledPawn' has a wrong offset!");
static_assert(offsetof(BTD_FrostWyvern_GetProbabilityFromLastSkill_C_PerformConditionCheckAI, ReturnValue) == 0x000010, "Member 'BTD_FrostWyvern_GetProbabilityFromLastSkill_C_PerformConditionCheckAI::ReturnValue' has a wrong offset!");
static_assert(offsetof(BTD_FrostWyvern_GetProbabilityFromLastSkill_C_PerformConditionCheckAI, CallFunc_RandomFloatInRange_ReturnValue) == 0x000018, "Member 'BTD_FrostWyvern_GetProbabilityFromLastSkill_C_PerformConditionCheckAI::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTD_FrostWyvern_GetProbabilityFromLastSkill_C_PerformConditionCheckAI, K2Node_DynamicCast_AsBP_Frost_Wyvern) == 0x000020, "Member 'BTD_FrostWyvern_GetProbabilityFromLastSkill_C_PerformConditionCheckAI::K2Node_DynamicCast_AsBP_Frost_Wyvern' has a wrong offset!");
static_assert(offsetof(BTD_FrostWyvern_GetProbabilityFromLastSkill_C_PerformConditionCheckAI, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'BTD_FrostWyvern_GetProbabilityFromLastSkill_C_PerformConditionCheckAI::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BTD_FrostWyvern_GetProbabilityFromLastSkill_C_PerformConditionCheckAI, CallFunc_RandomFloatInRange_ReturnValue_1) == 0x000030, "Member 'BTD_FrostWyvern_GetProbabilityFromLastSkill_C_PerformConditionCheckAI::CallFunc_RandomFloatInRange_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BTD_FrostWyvern_GetProbabilityFromLastSkill_C_PerformConditionCheckAI, CallFunc_RandomFloatInRange_ReturnValue_2) == 0x000038, "Member 'BTD_FrostWyvern_GetProbabilityFromLastSkill_C_PerformConditionCheckAI::CallFunc_RandomFloatInRange_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BTD_FrostWyvern_GetProbabilityFromLastSkill_C_PerformConditionCheckAI, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x000040, "Member 'BTD_FrostWyvern_GetProbabilityFromLastSkill_C_PerformConditionCheckAI::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTD_FrostWyvern_GetProbabilityFromLastSkill_C_PerformConditionCheckAI, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000048, "Member 'BTD_FrostWyvern_GetProbabilityFromLastSkill_C_PerformConditionCheckAI::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTD_FrostWyvern_GetProbabilityFromLastSkill_C_PerformConditionCheckAI, CallFunc_GreaterEqual_DoubleDouble_ReturnValue) == 0x000050, "Member 'BTD_FrostWyvern_GetProbabilityFromLastSkill_C_PerformConditionCheckAI::CallFunc_GreaterEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTD_FrostWyvern_GetProbabilityFromLastSkill_C_PerformConditionCheckAI, CallFunc_BooleanOR_ReturnValue) == 0x000051, "Member 'BTD_FrostWyvern_GetProbabilityFromLastSkill_C_PerformConditionCheckAI::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTD_FrostWyvern_GetProbabilityFromLastSkill_C_PerformConditionCheckAI, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000058, "Member 'BTD_FrostWyvern_GetProbabilityFromLastSkill_C_PerformConditionCheckAI::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTD_FrostWyvern_GetProbabilityFromLastSkill_C_PerformConditionCheckAI, CallFunc_FMin_ReturnValue) == 0x000060, "Member 'BTD_FrostWyvern_GetProbabilityFromLastSkill_C_PerformConditionCheckAI::CallFunc_FMin_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTD_FrostWyvern_GetProbabilityFromLastSkill_C_PerformConditionCheckAI, K2Node_SwitchEnum_CmpSuccess) == 0x000068, "Member 'BTD_FrostWyvern_GetProbabilityFromLastSkill_C_PerformConditionCheckAI::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

}

