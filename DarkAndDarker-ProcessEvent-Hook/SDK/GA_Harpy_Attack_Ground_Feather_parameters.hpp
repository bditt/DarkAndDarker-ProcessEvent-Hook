#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Harpy_Attack_Ground_Feather

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function GA_Harpy_Attack_Ground_Feather.GA_Harpy_Attack_Ground_Feather_C.AbilityActivated
// 0x00B0 (0x00B0 - 0x0000)
struct GA_Harpy_Attack_Ground_Feather_C_AbilityActivated final
{
public:
	struct FGameplayEventData                     TriggerEventData;                                  // 0x0000(0x00B0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GA_Harpy_Attack_Ground_Feather_C_AbilityActivated) == 0x000008, "Wrong alignment on GA_Harpy_Attack_Ground_Feather_C_AbilityActivated");
static_assert(sizeof(GA_Harpy_Attack_Ground_Feather_C_AbilityActivated) == 0x0000B0, "Wrong size on GA_Harpy_Attack_Ground_Feather_C_AbilityActivated");
static_assert(offsetof(GA_Harpy_Attack_Ground_Feather_C_AbilityActivated, TriggerEventData) == 0x000000, "Member 'GA_Harpy_Attack_Ground_Feather_C_AbilityActivated::TriggerEventData' has a wrong offset!");

// Function GA_Harpy_Attack_Ground_Feather.GA_Harpy_Attack_Ground_Feather_C.ExecuteUbergraph_GA_Harpy_Attack_Ground_Feather
// 0x0128 (0x0128 - 0x0000)
struct GA_Harpy_Attack_Ground_Feather_C_ExecuteUbergraph_GA_Harpy_Attack_Ground_Feather final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Max_ReturnValue;                          // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_458E[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Array_Get_Item;                           // 0x0020(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X;                            // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bWasCancelled;                        // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_458F[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_Event_TriggerEventData;                     // 0x0058(0x00B0)(ConstParm)
	double                                        CallFunc_RandomFloatInRange_ReturnValue;           // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0110(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Harpy_Attack_Ground_Feather_C_ExecuteUbergraph_GA_Harpy_Attack_Ground_Feather) == 0x000008, "Wrong alignment on GA_Harpy_Attack_Ground_Feather_C_ExecuteUbergraph_GA_Harpy_Attack_Ground_Feather");
static_assert(sizeof(GA_Harpy_Attack_Ground_Feather_C_ExecuteUbergraph_GA_Harpy_Attack_Ground_Feather) == 0x000128, "Wrong size on GA_Harpy_Attack_Ground_Feather_C_ExecuteUbergraph_GA_Harpy_Attack_Ground_Feather");
static_assert(offsetof(GA_Harpy_Attack_Ground_Feather_C_ExecuteUbergraph_GA_Harpy_Attack_Ground_Feather, EntryPoint) == 0x000000, "Member 'GA_Harpy_Attack_Ground_Feather_C_ExecuteUbergraph_GA_Harpy_Attack_Ground_Feather::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Harpy_Attack_Ground_Feather_C_ExecuteUbergraph_GA_Harpy_Attack_Ground_Feather, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'GA_Harpy_Attack_Ground_Feather_C_ExecuteUbergraph_GA_Harpy_Attack_Ground_Feather::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(GA_Harpy_Attack_Ground_Feather_C_ExecuteUbergraph_GA_Harpy_Attack_Ground_Feather, CallFunc_Array_Length_ReturnValue) == 0x000008, "Member 'GA_Harpy_Attack_Ground_Feather_C_ExecuteUbergraph_GA_Harpy_Attack_Ground_Feather::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Harpy_Attack_Ground_Feather_C_ExecuteUbergraph_GA_Harpy_Attack_Ground_Feather, CallFunc_Subtract_IntInt_ReturnValue) == 0x00000C, "Member 'GA_Harpy_Attack_Ground_Feather_C_ExecuteUbergraph_GA_Harpy_Attack_Ground_Feather::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Harpy_Attack_Ground_Feather_C_ExecuteUbergraph_GA_Harpy_Attack_Ground_Feather, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x000010, "Member 'GA_Harpy_Attack_Ground_Feather_C_ExecuteUbergraph_GA_Harpy_Attack_Ground_Feather::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Harpy_Attack_Ground_Feather_C_ExecuteUbergraph_GA_Harpy_Attack_Ground_Feather, CallFunc_Max_ReturnValue) == 0x000014, "Member 'GA_Harpy_Attack_Ground_Feather_C_ExecuteUbergraph_GA_Harpy_Attack_Ground_Feather::CallFunc_Max_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Harpy_Attack_Ground_Feather_C_ExecuteUbergraph_GA_Harpy_Attack_Ground_Feather, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000018, "Member 'GA_Harpy_Attack_Ground_Feather_C_ExecuteUbergraph_GA_Harpy_Attack_Ground_Feather::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Harpy_Attack_Ground_Feather_C_ExecuteUbergraph_GA_Harpy_Attack_Ground_Feather, Temp_int_Array_Index_Variable) == 0x00001C, "Member 'GA_Harpy_Attack_Ground_Feather_C_ExecuteUbergraph_GA_Harpy_Attack_Ground_Feather::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(GA_Harpy_Attack_Ground_Feather_C_ExecuteUbergraph_GA_Harpy_Attack_Ground_Feather, CallFunc_Array_Get_Item) == 0x000020, "Member 'GA_Harpy_Attack_Ground_Feather_C_ExecuteUbergraph_GA_Harpy_Attack_Ground_Feather::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GA_Harpy_Attack_Ground_Feather_C_ExecuteUbergraph_GA_Harpy_Attack_Ground_Feather, CallFunc_BreakVector_X) == 0x000038, "Member 'GA_Harpy_Attack_Ground_Feather_C_ExecuteUbergraph_GA_Harpy_Attack_Ground_Feather::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(GA_Harpy_Attack_Ground_Feather_C_ExecuteUbergraph_GA_Harpy_Attack_Ground_Feather, CallFunc_BreakVector_Y) == 0x000040, "Member 'GA_Harpy_Attack_Ground_Feather_C_ExecuteUbergraph_GA_Harpy_Attack_Ground_Feather::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(GA_Harpy_Attack_Ground_Feather_C_ExecuteUbergraph_GA_Harpy_Attack_Ground_Feather, CallFunc_BreakVector_Z) == 0x000048, "Member 'GA_Harpy_Attack_Ground_Feather_C_ExecuteUbergraph_GA_Harpy_Attack_Ground_Feather::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(GA_Harpy_Attack_Ground_Feather_C_ExecuteUbergraph_GA_Harpy_Attack_Ground_Feather, K2Node_Event_bWasCancelled) == 0x000050, "Member 'GA_Harpy_Attack_Ground_Feather_C_ExecuteUbergraph_GA_Harpy_Attack_Ground_Feather::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GA_Harpy_Attack_Ground_Feather_C_ExecuteUbergraph_GA_Harpy_Attack_Ground_Feather, K2Node_Event_TriggerEventData) == 0x000058, "Member 'GA_Harpy_Attack_Ground_Feather_C_ExecuteUbergraph_GA_Harpy_Attack_Ground_Feather::K2Node_Event_TriggerEventData' has a wrong offset!");
static_assert(offsetof(GA_Harpy_Attack_Ground_Feather_C_ExecuteUbergraph_GA_Harpy_Attack_Ground_Feather, CallFunc_RandomFloatInRange_ReturnValue) == 0x000108, "Member 'GA_Harpy_Attack_Ground_Feather_C_ExecuteUbergraph_GA_Harpy_Attack_Ground_Feather::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Harpy_Attack_Ground_Feather_C_ExecuteUbergraph_GA_Harpy_Attack_Ground_Feather, CallFunc_MakeVector_ReturnValue) == 0x000110, "Member 'GA_Harpy_Attack_Ground_Feather_C_ExecuteUbergraph_GA_Harpy_Attack_Ground_Feather::CallFunc_MakeVector_ReturnValue' has a wrong offset!");

// Function GA_Harpy_Attack_Ground_Feather.GA_Harpy_Attack_Ground_Feather_C.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct GA_Harpy_Attack_Ground_Feather_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Harpy_Attack_Ground_Feather_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GA_Harpy_Attack_Ground_Feather_C_K2_OnEndAbility");
static_assert(sizeof(GA_Harpy_Attack_Ground_Feather_C_K2_OnEndAbility) == 0x000001, "Wrong size on GA_Harpy_Attack_Ground_Feather_C_K2_OnEndAbility");
static_assert(offsetof(GA_Harpy_Attack_Ground_Feather_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GA_Harpy_Attack_Ground_Feather_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

}

