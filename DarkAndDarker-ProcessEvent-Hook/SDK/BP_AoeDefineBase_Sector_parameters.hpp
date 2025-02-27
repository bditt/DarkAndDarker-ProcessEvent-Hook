#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AoeDefineBase_Sector

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_AoeDefineBase_Sector.BP_AoeDefineBase_Sector_C.AddBeginOverlapActor
// 0x0008 (0x0008 - 0x0000)
struct BP_AoeDefineBase_Sector_C_AddBeginOverlapActor final
{
public:
	class ADCCharacterBase*                       CharacterBase;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AoeDefineBase_Sector_C_AddBeginOverlapActor) == 0x000008, "Wrong alignment on BP_AoeDefineBase_Sector_C_AddBeginOverlapActor");
static_assert(sizeof(BP_AoeDefineBase_Sector_C_AddBeginOverlapActor) == 0x000008, "Wrong size on BP_AoeDefineBase_Sector_C_AddBeginOverlapActor");
static_assert(offsetof(BP_AoeDefineBase_Sector_C_AddBeginOverlapActor, CharacterBase) == 0x000000, "Member 'BP_AoeDefineBase_Sector_C_AddBeginOverlapActor::CharacterBase' has a wrong offset!");

// Function BP_AoeDefineBase_Sector.BP_AoeDefineBase_Sector_C.ExecuteUbergraph_BP_AoeDefineBase_Sector
// 0x0218 (0x0218 - 0x0000)
struct BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1CCB[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1CCC[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_1;        // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1CCD[0x3];                                     // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADCCharacterBase*                       K2Node_Event_CharacterBase_1;                      // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsActorTickEnabled_ReturnValue;           // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1CCE[0x3];                                     // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1CCF[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ADCCharacterBase*                       K2Node_Event_CharacterBase;                        // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsActorTickEnabled_ReturnValue_1;         // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1CD0[0x3];                                     // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1CD1[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_AoeDefineBase_C*                    K2Node_DynamicCast_AsBP_Aoe_Define_Base;           // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1CD2[0x7];                                     // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ADCCharacterBase*                       CallFunc_Array_Get_Item;                           // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_2;            // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Max_ReturnValue;                          // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FilterTargetsWithinDirectionAngleAndAllowedAngle_ReturnValue; // 0x00A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1CD3[0x3];                                     // 0x00A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1CD4[0x3];                                     // 0x00AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ADCCharacterBase*                       CallFunc_Array_Get_Item_1;                         // 0x00B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_3;               // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_3;            // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Max_ReturnValue_1;                        // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1CD5[0x4];                                     // 0x00C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_DoubleToVector_ReturnValue;          // 0x00D0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x00F8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue_1;                // 0x0110(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_GetForwardVector_ReturnValue;             // 0x0128(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetForwardVector_ReturnValue_1;           // 0x0140(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_DoubleToVector_ReturnValue_1;        // 0x0158(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x0170(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue_1;      // 0x0188(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x01A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x01B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_1;           // 0x01D0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_A_ImplicitCast;          // 0x01E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_A_ImplicitCast;     // 0x01F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetCapsuleRadius_Radius_ImplicitCast;     // 0x01F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FilterTargetsWithinDirectionAngleAndAllowedAngle_AllowedAngle_ImplicitCast; // 0x01FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_DrawDebugLine_Duration_ImplicitCast;      // 0x0200(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_DrawDebugLine_Duration_ImplicitCast_1;    // 0x0204(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_DrawDebugLine_Duration_ImplicitCast_2;    // 0x0208(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MakeRotator_Yaw_ImplicitCast;             // 0x020C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MakeRotator_Yaw_ImplicitCast_1;           // 0x0210(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector) == 0x000008, "Wrong alignment on BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector");
static_assert(sizeof(BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector) == 0x000218, "Wrong size on BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector");
static_assert(offsetof(BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector, EntryPoint) == 0x000000, "Member 'BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector, CallFunc_K2_GetActorRotation_ReturnValue) == 0x000008, "Member 'BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector, Temp_int_Array_Index_Variable) == 0x000020, "Member 'BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector, CallFunc_BreakRotator_Roll) == 0x000024, "Member 'BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector, CallFunc_BreakRotator_Pitch) == 0x000028, "Member 'BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector, CallFunc_BreakRotator_Yaw) == 0x00002C, "Member 'BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector, Temp_int_Loop_Counter_Variable) == 0x000030, "Member 'BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector, CallFunc_Subtract_IntInt_ReturnValue) == 0x000034, "Member 'BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000038, "Member 'BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector, Temp_int_Array_Index_Variable_1) == 0x00003C, "Member 'BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector, Temp_int_Loop_Counter_Variable_1) == 0x000040, "Member 'BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x000044, "Member 'BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector, CallFunc_GreaterEqual_IntInt_ReturnValue_1) == 0x000048, "Member 'BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector::CallFunc_GreaterEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector, K2Node_Event_DeltaSeconds) == 0x00004C, "Member 'BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector, K2Node_Event_CharacterBase_1) == 0x000050, "Member 'BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector::K2Node_Event_CharacterBase_1' has a wrong offset!");
static_assert(offsetof(BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector, CallFunc_IsActorTickEnabled_ReturnValue) == 0x000058, "Member 'BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector::CallFunc_IsActorTickEnabled_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector, CallFunc_Array_Length_ReturnValue) == 0x00005C, "Member 'BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector, CallFunc_Greater_IntInt_ReturnValue) == 0x000060, "Member 'BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector, K2Node_Event_CharacterBase) == 0x000068, "Member 'BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector::K2Node_Event_CharacterBase' has a wrong offset!");
static_assert(offsetof(BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector, CallFunc_IsActorTickEnabled_ReturnValue_1) == 0x000070, "Member 'BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector::CallFunc_IsActorTickEnabled_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector, CallFunc_Array_Length_ReturnValue_1) == 0x000074, "Member 'BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000078, "Member 'BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector, K2Node_DynamicCast_AsBP_Aoe_Define_Base) == 0x000080, "Member 'BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector::K2Node_DynamicCast_AsBP_Aoe_Define_Base' has a wrong offset!");
static_assert(offsetof(BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector, K2Node_DynamicCast_bSuccess) == 0x000088, "Member 'BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector, CallFunc_Array_Get_Item) == 0x000090, "Member 'BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector, CallFunc_Array_Length_ReturnValue_2) == 0x000098, "Member 'BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector, CallFunc_Subtract_IntInt_ReturnValue_2) == 0x00009C, "Member 'BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector::CallFunc_Subtract_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector, CallFunc_Max_ReturnValue) == 0x0000A0, "Member 'BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector::CallFunc_Max_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector, CallFunc_FilterTargetsWithinDirectionAngleAndAllowedAngle_ReturnValue) == 0x0000A4, "Member 'BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector::CallFunc_FilterTargetsWithinDirectionAngleAndAllowedAngle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector, CallFunc_Array_Find_ReturnValue) == 0x0000A8, "Member 'BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector::CallFunc_Array_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0000AC, "Member 'BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector, CallFunc_Array_Get_Item_1) == 0x0000B0, "Member 'BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector, CallFunc_Array_Length_ReturnValue_3) == 0x0000B8, "Member 'BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector::CallFunc_Array_Length_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector, CallFunc_Subtract_IntInt_ReturnValue_3) == 0x0000BC, "Member 'BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector::CallFunc_Subtract_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector, CallFunc_Max_ReturnValue_1) == 0x0000C0, "Member 'BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector::CallFunc_Max_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x0000C8, "Member 'BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector, CallFunc_Conv_DoubleToVector_ReturnValue) == 0x0000D0, "Member 'BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector::CallFunc_Conv_DoubleToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x0000E8, "Member 'BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector, CallFunc_Add_DoubleDouble_ReturnValue) == 0x0000F0, "Member 'BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector, CallFunc_MakeRotator_ReturnValue) == 0x0000F8, "Member 'BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector, CallFunc_MakeRotator_ReturnValue_1) == 0x000110, "Member 'BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector::CallFunc_MakeRotator_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector, CallFunc_GetForwardVector_ReturnValue) == 0x000128, "Member 'BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector::CallFunc_GetForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector, CallFunc_GetForwardVector_ReturnValue_1) == 0x000140, "Member 'BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector::CallFunc_GetForwardVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector, CallFunc_Conv_DoubleToVector_ReturnValue_1) == 0x000158, "Member 'BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector::CallFunc_Conv_DoubleToVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector, CallFunc_Multiply_VectorVector_ReturnValue) == 0x000170, "Member 'BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector, CallFunc_Multiply_VectorVector_ReturnValue_1) == 0x000188, "Member 'BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector::CallFunc_Multiply_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector, CallFunc_K2_GetActorLocation_ReturnValue) == 0x0001A0, "Member 'BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector, CallFunc_Add_VectorVector_ReturnValue) == 0x0001B8, "Member 'BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector, CallFunc_Add_VectorVector_ReturnValue_1) == 0x0001D0, "Member 'BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector::CallFunc_Add_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector, CallFunc_Add_DoubleDouble_A_ImplicitCast) == 0x0001E8, "Member 'BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector::CallFunc_Add_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector, CallFunc_Subtract_DoubleDouble_A_ImplicitCast) == 0x0001F0, "Member 'BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector::CallFunc_Subtract_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector, CallFunc_SetCapsuleRadius_Radius_ImplicitCast) == 0x0001F8, "Member 'BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector::CallFunc_SetCapsuleRadius_Radius_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector, CallFunc_FilterTargetsWithinDirectionAngleAndAllowedAngle_AllowedAngle_ImplicitCast) == 0x0001FC, "Member 'BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector::CallFunc_FilterTargetsWithinDirectionAngleAndAllowedAngle_AllowedAngle_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector, CallFunc_DrawDebugLine_Duration_ImplicitCast) == 0x000200, "Member 'BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector::CallFunc_DrawDebugLine_Duration_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector, CallFunc_DrawDebugLine_Duration_ImplicitCast_1) == 0x000204, "Member 'BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector::CallFunc_DrawDebugLine_Duration_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector, CallFunc_DrawDebugLine_Duration_ImplicitCast_2) == 0x000208, "Member 'BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector::CallFunc_DrawDebugLine_Duration_ImplicitCast_2' has a wrong offset!");
static_assert(offsetof(BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector, CallFunc_MakeRotator_Yaw_ImplicitCast) == 0x00020C, "Member 'BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector::CallFunc_MakeRotator_Yaw_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector, CallFunc_MakeRotator_Yaw_ImplicitCast_1) == 0x000210, "Member 'BP_AoeDefineBase_Sector_C_ExecuteUbergraph_BP_AoeDefineBase_Sector::CallFunc_MakeRotator_Yaw_ImplicitCast_1' has a wrong offset!");

// Function BP_AoeDefineBase_Sector.BP_AoeDefineBase_Sector_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_AoeDefineBase_Sector_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AoeDefineBase_Sector_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_AoeDefineBase_Sector_C_ReceiveTick");
static_assert(sizeof(BP_AoeDefineBase_Sector_C_ReceiveTick) == 0x000004, "Wrong size on BP_AoeDefineBase_Sector_C_ReceiveTick");
static_assert(offsetof(BP_AoeDefineBase_Sector_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_AoeDefineBase_Sector_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_AoeDefineBase_Sector.BP_AoeDefineBase_Sector_C.RemoveEndOverlapActor
// 0x0008 (0x0008 - 0x0000)
struct BP_AoeDefineBase_Sector_C_RemoveEndOverlapActor final
{
public:
	class ADCCharacterBase*                       CharacterBase;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AoeDefineBase_Sector_C_RemoveEndOverlapActor) == 0x000008, "Wrong alignment on BP_AoeDefineBase_Sector_C_RemoveEndOverlapActor");
static_assert(sizeof(BP_AoeDefineBase_Sector_C_RemoveEndOverlapActor) == 0x000008, "Wrong size on BP_AoeDefineBase_Sector_C_RemoveEndOverlapActor");
static_assert(offsetof(BP_AoeDefineBase_Sector_C_RemoveEndOverlapActor, CharacterBase) == 0x000000, "Member 'BP_AoeDefineBase_Sector_C_RemoveEndOverlapActor::CharacterBase' has a wrong offset!");

// Function BP_AoeDefineBase_Sector.BP_AoeDefineBase_Sector_C.Set Collision Profile Activate
// 0x0008 (0x0008 - 0x0000)
struct BP_AoeDefineBase_Sector_C_Set_Collision_Profile_Activate final
{
public:
	class UPrimitiveComponent*                    Target;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AoeDefineBase_Sector_C_Set_Collision_Profile_Activate) == 0x000008, "Wrong alignment on BP_AoeDefineBase_Sector_C_Set_Collision_Profile_Activate");
static_assert(sizeof(BP_AoeDefineBase_Sector_C_Set_Collision_Profile_Activate) == 0x000008, "Wrong size on BP_AoeDefineBase_Sector_C_Set_Collision_Profile_Activate");
static_assert(offsetof(BP_AoeDefineBase_Sector_C_Set_Collision_Profile_Activate, Target) == 0x000000, "Member 'BP_AoeDefineBase_Sector_C_Set_Collision_Profile_Activate::Target' has a wrong offset!");

// Function BP_AoeDefineBase_Sector.BP_AoeDefineBase_Sector_C.Set Collision Profile Deactivate
// 0x0008 (0x0008 - 0x0000)
struct BP_AoeDefineBase_Sector_C_Set_Collision_Profile_Deactivate final
{
public:
	class UPrimitiveComponent*                    Target;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AoeDefineBase_Sector_C_Set_Collision_Profile_Deactivate) == 0x000008, "Wrong alignment on BP_AoeDefineBase_Sector_C_Set_Collision_Profile_Deactivate");
static_assert(sizeof(BP_AoeDefineBase_Sector_C_Set_Collision_Profile_Deactivate) == 0x000008, "Wrong size on BP_AoeDefineBase_Sector_C_Set_Collision_Profile_Deactivate");
static_assert(offsetof(BP_AoeDefineBase_Sector_C_Set_Collision_Profile_Deactivate, Target) == 0x000000, "Member 'BP_AoeDefineBase_Sector_C_Set_Collision_Profile_Deactivate::Target' has a wrong offset!");

}

