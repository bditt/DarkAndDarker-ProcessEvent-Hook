#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_FrostWyvern_Special_SummonElemental

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function GA_FrostWyvern_Special_SummonElemental.GA_FrostWyvern_Special_SummonElemental_C.AbilityActivated
// 0x00B0 (0x00B0 - 0x0000)
struct GA_FrostWyvern_Special_SummonElemental_C_AbilityActivated final
{
public:
	struct FGameplayEventData                     TriggerEventData;                                  // 0x0000(0x00B0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GA_FrostWyvern_Special_SummonElemental_C_AbilityActivated) == 0x000008, "Wrong alignment on GA_FrostWyvern_Special_SummonElemental_C_AbilityActivated");
static_assert(sizeof(GA_FrostWyvern_Special_SummonElemental_C_AbilityActivated) == 0x0000B0, "Wrong size on GA_FrostWyvern_Special_SummonElemental_C_AbilityActivated");
static_assert(offsetof(GA_FrostWyvern_Special_SummonElemental_C_AbilityActivated, TriggerEventData) == 0x000000, "Member 'GA_FrostWyvern_Special_SummonElemental_C_AbilityActivated::TriggerEventData' has a wrong offset!");

// Function GA_FrostWyvern_Special_SummonElemental.GA_FrostWyvern_Special_SummonElemental_C.ExecuteUbergraph_GA_FrostWyvern_Special_SummonElemental
// 0x02E0 (0x02E0 - 0x0000)
struct GA_FrostWyvern_Special_SummonElemental_C_ExecuteUbergraph_GA_FrostWyvern_Special_SummonElemental final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3EF7[0x1];                                     // 0x000F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_Event_TriggerEventData;                     // 0x0010(0x00B0)(ConstParm)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3EF8[0x7];                                     // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x00C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_FrostWyvern_C*                      K2Node_DynamicCast_AsBP_Frost_Wyvern;              // 0x00D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3EF9[0x3];                                     // 0x00D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_Spawn_Index;                    // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x00E8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Clamp_ReturnValue;                        // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3EFA[0x4];                                     // 0x0104(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ADCMonsterBase*                         CallFunc_SpawnMonster_ReturnValue;                 // 0x0108(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_FrostElemental_C*                   K2Node_DynamicCast_AsBP_Frost_Elemental;           // 0x0110(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3EFB[0x7];                                     // 0x0119(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ADCCharacterBase*                       CallFunc_Array_Get_Item;                           // 0x0120(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0128(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3EFC[0x7];                                     // 0x0141(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_FindLookAtRotation_ReturnValue;           // 0x0148(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         Temp_int_Variable_1;                               // 0x0160(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3EFD[0x4];                                     // 0x0164(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ADCCharacterBase*                       CallFunc_Array_Random_OutItem;                     // 0x0168(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Random_OutIndex;                    // 0x0170(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0174(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x0175(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3EFE[0x2];                                     // 0x0176(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0178(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3EFF[0x4];                                     // 0x017C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_RandomFloatInRange_ReturnValue;           // 0x0180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_2;        // 0x0188(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x01A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	double                                        CallFunc_RandomFloatInRange_ReturnValue_1;         // 0x01B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetForwardVector_ReturnValue;             // 0x01C0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_DoubleToVector_ReturnValue;          // 0x01D8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x01F0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F00[0x8];                                     // 0x0208(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0210(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0270(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0288(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetRandomLocationInNavigableRadius_RandomLocation; // 0x0290(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_GetRandomLocationInNavigableRadius_ReturnValue; // 0x02A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F01[0x7];                                     // 0x02A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_GameSpawner_C*                      CallFunc_FinishSpawningActor_ReturnValue;          // 0x02B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_AddUnique_ReturnValue;              // 0x02B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F02[0x4];                                     // 0x02BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBlackboardComponent*                   CallFunc_GetBlackboard_ReturnValue;                // 0x02C0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_MakeLiteralName_ReturnValue;              // 0x02C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MakeRotator_Yaw_ImplicitCast;             // 0x02D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_FrostWyvern_Special_SummonElemental_C_ExecuteUbergraph_GA_FrostWyvern_Special_SummonElemental) == 0x000010, "Wrong alignment on GA_FrostWyvern_Special_SummonElemental_C_ExecuteUbergraph_GA_FrostWyvern_Special_SummonElemental");
static_assert(sizeof(GA_FrostWyvern_Special_SummonElemental_C_ExecuteUbergraph_GA_FrostWyvern_Special_SummonElemental) == 0x0002E0, "Wrong size on GA_FrostWyvern_Special_SummonElemental_C_ExecuteUbergraph_GA_FrostWyvern_Special_SummonElemental");
static_assert(offsetof(GA_FrostWyvern_Special_SummonElemental_C_ExecuteUbergraph_GA_FrostWyvern_Special_SummonElemental, EntryPoint) == 0x000000, "Member 'GA_FrostWyvern_Special_SummonElemental_C_ExecuteUbergraph_GA_FrostWyvern_Special_SummonElemental::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_FrostWyvern_Special_SummonElemental_C_ExecuteUbergraph_GA_FrostWyvern_Special_SummonElemental, Temp_int_Variable) == 0x000004, "Member 'GA_FrostWyvern_Special_SummonElemental_C_ExecuteUbergraph_GA_FrostWyvern_Special_SummonElemental::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(GA_FrostWyvern_Special_SummonElemental_C_ExecuteUbergraph_GA_FrostWyvern_Special_SummonElemental, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'GA_FrostWyvern_Special_SummonElemental_C_ExecuteUbergraph_GA_FrostWyvern_Special_SummonElemental::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_FrostWyvern_Special_SummonElemental_C_ExecuteUbergraph_GA_FrostWyvern_Special_SummonElemental, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00000C, "Member 'GA_FrostWyvern_Special_SummonElemental_C_ExecuteUbergraph_GA_FrostWyvern_Special_SummonElemental::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_FrostWyvern_Special_SummonElemental_C_ExecuteUbergraph_GA_FrostWyvern_Special_SummonElemental, Temp_bool_Variable) == 0x00000D, "Member 'GA_FrostWyvern_Special_SummonElemental_C_ExecuteUbergraph_GA_FrostWyvern_Special_SummonElemental::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GA_FrostWyvern_Special_SummonElemental_C_ExecuteUbergraph_GA_FrostWyvern_Special_SummonElemental, CallFunc_Not_PreBool_ReturnValue) == 0x00000E, "Member 'GA_FrostWyvern_Special_SummonElemental_C_ExecuteUbergraph_GA_FrostWyvern_Special_SummonElemental::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_FrostWyvern_Special_SummonElemental_C_ExecuteUbergraph_GA_FrostWyvern_Special_SummonElemental, K2Node_Event_TriggerEventData) == 0x000010, "Member 'GA_FrostWyvern_Special_SummonElemental_C_ExecuteUbergraph_GA_FrostWyvern_Special_SummonElemental::K2Node_Event_TriggerEventData' has a wrong offset!");
static_assert(offsetof(GA_FrostWyvern_Special_SummonElemental_C_ExecuteUbergraph_GA_FrostWyvern_Special_SummonElemental, CallFunc_BooleanAND_ReturnValue) == 0x0000C0, "Member 'GA_FrostWyvern_Special_SummonElemental_C_ExecuteUbergraph_GA_FrostWyvern_Special_SummonElemental::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_FrostWyvern_Special_SummonElemental_C_ExecuteUbergraph_GA_FrostWyvern_Special_SummonElemental, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x0000C8, "Member 'GA_FrostWyvern_Special_SummonElemental_C_ExecuteUbergraph_GA_FrostWyvern_Special_SummonElemental::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_FrostWyvern_Special_SummonElemental_C_ExecuteUbergraph_GA_FrostWyvern_Special_SummonElemental, K2Node_DynamicCast_AsBP_Frost_Wyvern) == 0x0000D0, "Member 'GA_FrostWyvern_Special_SummonElemental_C_ExecuteUbergraph_GA_FrostWyvern_Special_SummonElemental::K2Node_DynamicCast_AsBP_Frost_Wyvern' has a wrong offset!");
static_assert(offsetof(GA_FrostWyvern_Special_SummonElemental_C_ExecuteUbergraph_GA_FrostWyvern_Special_SummonElemental, K2Node_DynamicCast_bSuccess) == 0x0000D8, "Member 'GA_FrostWyvern_Special_SummonElemental_C_ExecuteUbergraph_GA_FrostWyvern_Special_SummonElemental::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_FrostWyvern_Special_SummonElemental_C_ExecuteUbergraph_GA_FrostWyvern_Special_SummonElemental, K2Node_CustomEvent_Spawn_Index) == 0x0000DC, "Member 'GA_FrostWyvern_Special_SummonElemental_C_ExecuteUbergraph_GA_FrostWyvern_Special_SummonElemental::K2Node_CustomEvent_Spawn_Index' has a wrong offset!");
static_assert(offsetof(GA_FrostWyvern_Special_SummonElemental_C_ExecuteUbergraph_GA_FrostWyvern_Special_SummonElemental, CallFunc_Array_Length_ReturnValue) == 0x0000E0, "Member 'GA_FrostWyvern_Special_SummonElemental_C_ExecuteUbergraph_GA_FrostWyvern_Special_SummonElemental::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_FrostWyvern_Special_SummonElemental_C_ExecuteUbergraph_GA_FrostWyvern_Special_SummonElemental, CallFunc_Subtract_IntInt_ReturnValue) == 0x0000E4, "Member 'GA_FrostWyvern_Special_SummonElemental_C_ExecuteUbergraph_GA_FrostWyvern_Special_SummonElemental::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_FrostWyvern_Special_SummonElemental_C_ExecuteUbergraph_GA_FrostWyvern_Special_SummonElemental, CallFunc_K2_GetActorLocation_ReturnValue) == 0x0000E8, "Member 'GA_FrostWyvern_Special_SummonElemental_C_ExecuteUbergraph_GA_FrostWyvern_Special_SummonElemental::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_FrostWyvern_Special_SummonElemental_C_ExecuteUbergraph_GA_FrostWyvern_Special_SummonElemental, CallFunc_Clamp_ReturnValue) == 0x000100, "Member 'GA_FrostWyvern_Special_SummonElemental_C_ExecuteUbergraph_GA_FrostWyvern_Special_SummonElemental::CallFunc_Clamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_FrostWyvern_Special_SummonElemental_C_ExecuteUbergraph_GA_FrostWyvern_Special_SummonElemental, CallFunc_SpawnMonster_ReturnValue) == 0x000108, "Member 'GA_FrostWyvern_Special_SummonElemental_C_ExecuteUbergraph_GA_FrostWyvern_Special_SummonElemental::CallFunc_SpawnMonster_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_FrostWyvern_Special_SummonElemental_C_ExecuteUbergraph_GA_FrostWyvern_Special_SummonElemental, K2Node_DynamicCast_AsBP_Frost_Elemental) == 0x000110, "Member 'GA_FrostWyvern_Special_SummonElemental_C_ExecuteUbergraph_GA_FrostWyvern_Special_SummonElemental::K2Node_DynamicCast_AsBP_Frost_Elemental' has a wrong offset!");
static_assert(offsetof(GA_FrostWyvern_Special_SummonElemental_C_ExecuteUbergraph_GA_FrostWyvern_Special_SummonElemental, K2Node_DynamicCast_bSuccess_1) == 0x000118, "Member 'GA_FrostWyvern_Special_SummonElemental_C_ExecuteUbergraph_GA_FrostWyvern_Special_SummonElemental::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GA_FrostWyvern_Special_SummonElemental_C_ExecuteUbergraph_GA_FrostWyvern_Special_SummonElemental, CallFunc_Array_Get_Item) == 0x000120, "Member 'GA_FrostWyvern_Special_SummonElemental_C_ExecuteUbergraph_GA_FrostWyvern_Special_SummonElemental::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GA_FrostWyvern_Special_SummonElemental_C_ExecuteUbergraph_GA_FrostWyvern_Special_SummonElemental, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000128, "Member 'GA_FrostWyvern_Special_SummonElemental_C_ExecuteUbergraph_GA_FrostWyvern_Special_SummonElemental::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_FrostWyvern_Special_SummonElemental_C_ExecuteUbergraph_GA_FrostWyvern_Special_SummonElemental, CallFunc_IsValid_ReturnValue) == 0x000140, "Member 'GA_FrostWyvern_Special_SummonElemental_C_ExecuteUbergraph_GA_FrostWyvern_Special_SummonElemental::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_FrostWyvern_Special_SummonElemental_C_ExecuteUbergraph_GA_FrostWyvern_Special_SummonElemental, CallFunc_FindLookAtRotation_ReturnValue) == 0x000148, "Member 'GA_FrostWyvern_Special_SummonElemental_C_ExecuteUbergraph_GA_FrostWyvern_Special_SummonElemental::CallFunc_FindLookAtRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_FrostWyvern_Special_SummonElemental_C_ExecuteUbergraph_GA_FrostWyvern_Special_SummonElemental, Temp_int_Variable_1) == 0x000160, "Member 'GA_FrostWyvern_Special_SummonElemental_C_ExecuteUbergraph_GA_FrostWyvern_Special_SummonElemental::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(GA_FrostWyvern_Special_SummonElemental_C_ExecuteUbergraph_GA_FrostWyvern_Special_SummonElemental, CallFunc_Array_Random_OutItem) == 0x000168, "Member 'GA_FrostWyvern_Special_SummonElemental_C_ExecuteUbergraph_GA_FrostWyvern_Special_SummonElemental::CallFunc_Array_Random_OutItem' has a wrong offset!");
static_assert(offsetof(GA_FrostWyvern_Special_SummonElemental_C_ExecuteUbergraph_GA_FrostWyvern_Special_SummonElemental, CallFunc_Array_Random_OutIndex) == 0x000170, "Member 'GA_FrostWyvern_Special_SummonElemental_C_ExecuteUbergraph_GA_FrostWyvern_Special_SummonElemental::CallFunc_Array_Random_OutIndex' has a wrong offset!");
static_assert(offsetof(GA_FrostWyvern_Special_SummonElemental_C_ExecuteUbergraph_GA_FrostWyvern_Special_SummonElemental, CallFunc_IsValid_ReturnValue_1) == 0x000174, "Member 'GA_FrostWyvern_Special_SummonElemental_C_ExecuteUbergraph_GA_FrostWyvern_Special_SummonElemental::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_FrostWyvern_Special_SummonElemental_C_ExecuteUbergraph_GA_FrostWyvern_Special_SummonElemental, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x000175, "Member 'GA_FrostWyvern_Special_SummonElemental_C_ExecuteUbergraph_GA_FrostWyvern_Special_SummonElemental::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_FrostWyvern_Special_SummonElemental_C_ExecuteUbergraph_GA_FrostWyvern_Special_SummonElemental, CallFunc_Add_IntInt_ReturnValue_1) == 0x000178, "Member 'GA_FrostWyvern_Special_SummonElemental_C_ExecuteUbergraph_GA_FrostWyvern_Special_SummonElemental::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_FrostWyvern_Special_SummonElemental_C_ExecuteUbergraph_GA_FrostWyvern_Special_SummonElemental, CallFunc_RandomFloatInRange_ReturnValue) == 0x000180, "Member 'GA_FrostWyvern_Special_SummonElemental_C_ExecuteUbergraph_GA_FrostWyvern_Special_SummonElemental::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_FrostWyvern_Special_SummonElemental_C_ExecuteUbergraph_GA_FrostWyvern_Special_SummonElemental, CallFunc_K2_GetActorLocation_ReturnValue_2) == 0x000188, "Member 'GA_FrostWyvern_Special_SummonElemental_C_ExecuteUbergraph_GA_FrostWyvern_Special_SummonElemental::CallFunc_K2_GetActorLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_FrostWyvern_Special_SummonElemental_C_ExecuteUbergraph_GA_FrostWyvern_Special_SummonElemental, CallFunc_MakeRotator_ReturnValue) == 0x0001A0, "Member 'GA_FrostWyvern_Special_SummonElemental_C_ExecuteUbergraph_GA_FrostWyvern_Special_SummonElemental::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_FrostWyvern_Special_SummonElemental_C_ExecuteUbergraph_GA_FrostWyvern_Special_SummonElemental, CallFunc_RandomFloatInRange_ReturnValue_1) == 0x0001B8, "Member 'GA_FrostWyvern_Special_SummonElemental_C_ExecuteUbergraph_GA_FrostWyvern_Special_SummonElemental::CallFunc_RandomFloatInRange_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_FrostWyvern_Special_SummonElemental_C_ExecuteUbergraph_GA_FrostWyvern_Special_SummonElemental, CallFunc_GetForwardVector_ReturnValue) == 0x0001C0, "Member 'GA_FrostWyvern_Special_SummonElemental_C_ExecuteUbergraph_GA_FrostWyvern_Special_SummonElemental::CallFunc_GetForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_FrostWyvern_Special_SummonElemental_C_ExecuteUbergraph_GA_FrostWyvern_Special_SummonElemental, CallFunc_Conv_DoubleToVector_ReturnValue) == 0x0001D8, "Member 'GA_FrostWyvern_Special_SummonElemental_C_ExecuteUbergraph_GA_FrostWyvern_Special_SummonElemental::CallFunc_Conv_DoubleToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_FrostWyvern_Special_SummonElemental_C_ExecuteUbergraph_GA_FrostWyvern_Special_SummonElemental, CallFunc_Multiply_VectorVector_ReturnValue) == 0x0001F0, "Member 'GA_FrostWyvern_Special_SummonElemental_C_ExecuteUbergraph_GA_FrostWyvern_Special_SummonElemental::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_FrostWyvern_Special_SummonElemental_C_ExecuteUbergraph_GA_FrostWyvern_Special_SummonElemental, CallFunc_MakeTransform_ReturnValue) == 0x000210, "Member 'GA_FrostWyvern_Special_SummonElemental_C_ExecuteUbergraph_GA_FrostWyvern_Special_SummonElemental::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_FrostWyvern_Special_SummonElemental_C_ExecuteUbergraph_GA_FrostWyvern_Special_SummonElemental, CallFunc_Add_VectorVector_ReturnValue) == 0x000270, "Member 'GA_FrostWyvern_Special_SummonElemental_C_ExecuteUbergraph_GA_FrostWyvern_Special_SummonElemental::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_FrostWyvern_Special_SummonElemental_C_ExecuteUbergraph_GA_FrostWyvern_Special_SummonElemental, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000288, "Member 'GA_FrostWyvern_Special_SummonElemental_C_ExecuteUbergraph_GA_FrostWyvern_Special_SummonElemental::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_FrostWyvern_Special_SummonElemental_C_ExecuteUbergraph_GA_FrostWyvern_Special_SummonElemental, CallFunc_K2_GetRandomLocationInNavigableRadius_RandomLocation) == 0x000290, "Member 'GA_FrostWyvern_Special_SummonElemental_C_ExecuteUbergraph_GA_FrostWyvern_Special_SummonElemental::CallFunc_K2_GetRandomLocationInNavigableRadius_RandomLocation' has a wrong offset!");
static_assert(offsetof(GA_FrostWyvern_Special_SummonElemental_C_ExecuteUbergraph_GA_FrostWyvern_Special_SummonElemental, CallFunc_K2_GetRandomLocationInNavigableRadius_ReturnValue) == 0x0002A8, "Member 'GA_FrostWyvern_Special_SummonElemental_C_ExecuteUbergraph_GA_FrostWyvern_Special_SummonElemental::CallFunc_K2_GetRandomLocationInNavigableRadius_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_FrostWyvern_Special_SummonElemental_C_ExecuteUbergraph_GA_FrostWyvern_Special_SummonElemental, CallFunc_FinishSpawningActor_ReturnValue) == 0x0002B0, "Member 'GA_FrostWyvern_Special_SummonElemental_C_ExecuteUbergraph_GA_FrostWyvern_Special_SummonElemental::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_FrostWyvern_Special_SummonElemental_C_ExecuteUbergraph_GA_FrostWyvern_Special_SummonElemental, CallFunc_Array_AddUnique_ReturnValue) == 0x0002B8, "Member 'GA_FrostWyvern_Special_SummonElemental_C_ExecuteUbergraph_GA_FrostWyvern_Special_SummonElemental::CallFunc_Array_AddUnique_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_FrostWyvern_Special_SummonElemental_C_ExecuteUbergraph_GA_FrostWyvern_Special_SummonElemental, CallFunc_GetBlackboard_ReturnValue) == 0x0002C0, "Member 'GA_FrostWyvern_Special_SummonElemental_C_ExecuteUbergraph_GA_FrostWyvern_Special_SummonElemental::CallFunc_GetBlackboard_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_FrostWyvern_Special_SummonElemental_C_ExecuteUbergraph_GA_FrostWyvern_Special_SummonElemental, CallFunc_MakeLiteralName_ReturnValue) == 0x0002C8, "Member 'GA_FrostWyvern_Special_SummonElemental_C_ExecuteUbergraph_GA_FrostWyvern_Special_SummonElemental::CallFunc_MakeLiteralName_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_FrostWyvern_Special_SummonElemental_C_ExecuteUbergraph_GA_FrostWyvern_Special_SummonElemental, CallFunc_MakeRotator_Yaw_ImplicitCast) == 0x0002D0, "Member 'GA_FrostWyvern_Special_SummonElemental_C_ExecuteUbergraph_GA_FrostWyvern_Special_SummonElemental::CallFunc_MakeRotator_Yaw_ImplicitCast' has a wrong offset!");

// Function GA_FrostWyvern_Special_SummonElemental.GA_FrostWyvern_Special_SummonElemental_C.Spawn Elemental
// 0x0004 (0x0004 - 0x0000)
struct GA_FrostWyvern_Special_SummonElemental_C_Spawn_Elemental final
{
public:
	int32                                         Spawn_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_FrostWyvern_Special_SummonElemental_C_Spawn_Elemental) == 0x000004, "Wrong alignment on GA_FrostWyvern_Special_SummonElemental_C_Spawn_Elemental");
static_assert(sizeof(GA_FrostWyvern_Special_SummonElemental_C_Spawn_Elemental) == 0x000004, "Wrong size on GA_FrostWyvern_Special_SummonElemental_C_Spawn_Elemental");
static_assert(offsetof(GA_FrostWyvern_Special_SummonElemental_C_Spawn_Elemental, Spawn_Index) == 0x000000, "Member 'GA_FrostWyvern_Special_SummonElemental_C_Spawn_Elemental::Spawn_Index' has a wrong offset!");

}

