#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DemonBat_Common

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_DemonBat_Common.BP_DemonBat_Common_C.ExecuteUbergraph_BP_DemonBat_Common
// 0x02E0 (0x02E0 - 0x0000)
struct BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1944[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1945[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_BreakVector_X;                            // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           K2Node_Event_InGameplayTag;                        // 0x0040(0x0008)(ConstParm, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_InCount;                              // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1946[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         Temp_object_Variable;                              // 0x0050(0x0010)(ConstParm, ReferenceParm)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;   // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1947[0x6];                                     // 0x0062(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<EObjectTypeQuery>                      K2Node_MakeArray_Array;                            // 0x0068(0x0010)(ConstParm, ReferenceParm)
	class AAIController*                          CallFunc_GetAIController_ReturnValue;              // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAIPerceptionComponent*                 CallFunc_GetAIPerceptionComponent_ReturnValue;     // 0x0080(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AAIController*                          CallFunc_GetAIController_ReturnValue_1;            // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAIPerceptionComponent*                 CallFunc_GetAIPerceptionComponent_ReturnValue_1;   // 0x0090(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetSightRange_ReturnValue;                // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasMatchingGameplayTag_ReturnValue;       // 0x0099(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1948[0x6];                                     // 0x009A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue_1;    // 0x00A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X_1;                          // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y_1;                          // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z_1;                          // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x00D8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_LineTraceSingleForObjects_OutHit;         // 0x00F0(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_LineTraceSingleForObjects_ReturnValue;    // 0x01D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x01D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x01DA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1949[0x1];                                     // 0x01DB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x01DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x01E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_194A[0x4];                                     // 0x01E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x01E8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x0200(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x0218(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x0230(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x0248(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x0250(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x0258(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0260(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_BoneName;                  // 0x0268(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0270(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x0274(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x0278(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_194B[0x4];                                     // 0x027C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x0280(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x0298(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X_2;                          // 0x02B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y_2;                          // 0x02B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z_2;                          // 0x02C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue_1;      // 0x02C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x02D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetSightRange_ReturnValue_1;              // 0x02D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_194C[0x3];                                     // 0x02D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_SetSightRange_SightRange_ImplicitCast;    // 0x02DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common) == 0x000008, "Wrong alignment on BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common");
static_assert(sizeof(BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common) == 0x0002E0, "Wrong size on BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common");
static_assert(offsetof(BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common, EntryPoint) == 0x000000, "Member 'BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000008, "Member 'BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common, CallFunc_HasAuthority_ReturnValue) == 0x000020, "Member 'BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common, CallFunc_BreakVector_X) == 0x000028, "Member 'BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common, CallFunc_BreakVector_Y) == 0x000030, "Member 'BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common, CallFunc_BreakVector_Z) == 0x000038, "Member 'BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common, K2Node_Event_InGameplayTag) == 0x000040, "Member 'BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common::K2Node_Event_InGameplayTag' has a wrong offset!");
static_assert(offsetof(BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common, K2Node_Event_InCount) == 0x000048, "Member 'BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common::K2Node_Event_InCount' has a wrong offset!");
static_assert(offsetof(BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common, Temp_object_Variable) == 0x000050, "Member 'BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common, CallFunc_Greater_IntInt_ReturnValue) == 0x000060, "Member 'BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common, GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess) == 0x000061, "Member 'BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common::GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common, K2Node_MakeArray_Array) == 0x000068, "Member 'BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common, CallFunc_GetAIController_ReturnValue) == 0x000078, "Member 'BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common::CallFunc_GetAIController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common, CallFunc_GetAIPerceptionComponent_ReturnValue) == 0x000080, "Member 'BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common::CallFunc_GetAIPerceptionComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common, CallFunc_GetAIController_ReturnValue_1) == 0x000088, "Member 'BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common::CallFunc_GetAIController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common, CallFunc_GetAIPerceptionComponent_ReturnValue_1) == 0x000090, "Member 'BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common::CallFunc_GetAIPerceptionComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common, CallFunc_SetSightRange_ReturnValue) == 0x000098, "Member 'BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common::CallFunc_SetSightRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common, CallFunc_HasMatchingGameplayTag_ReturnValue) == 0x000099, "Member 'BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common::CallFunc_HasMatchingGameplayTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common, CallFunc_K2_GetComponentLocation_ReturnValue_1) == 0x0000A0, "Member 'BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common::CallFunc_K2_GetComponentLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common, CallFunc_BreakVector_X_1) == 0x0000B8, "Member 'BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common, CallFunc_BreakVector_Y_1) == 0x0000C0, "Member 'BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common, CallFunc_BreakVector_Z_1) == 0x0000C8, "Member 'BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x0000D0, "Member 'BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common, CallFunc_MakeVector_ReturnValue) == 0x0000D8, "Member 'BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common, CallFunc_LineTraceSingleForObjects_OutHit) == 0x0000F0, "Member 'BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common::CallFunc_LineTraceSingleForObjects_OutHit' has a wrong offset!");
static_assert(offsetof(BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common, CallFunc_LineTraceSingleForObjects_ReturnValue) == 0x0001D8, "Member 'BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common::CallFunc_LineTraceSingleForObjects_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common, CallFunc_BreakHitResult_bBlockingHit) == 0x0001D9, "Member 'BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common, CallFunc_BreakHitResult_bInitialOverlap) == 0x0001DA, "Member 'BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common, CallFunc_BreakHitResult_Time) == 0x0001DC, "Member 'BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common, CallFunc_BreakHitResult_Distance) == 0x0001E0, "Member 'BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common, CallFunc_BreakHitResult_Location) == 0x0001E8, "Member 'BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common, CallFunc_BreakHitResult_ImpactPoint) == 0x000200, "Member 'BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common, CallFunc_BreakHitResult_Normal) == 0x000218, "Member 'BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common, CallFunc_BreakHitResult_ImpactNormal) == 0x000230, "Member 'BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common, CallFunc_BreakHitResult_PhysMat) == 0x000248, "Member 'BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common, CallFunc_BreakHitResult_HitActor) == 0x000250, "Member 'BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common, CallFunc_BreakHitResult_HitComponent) == 0x000258, "Member 'BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common, CallFunc_BreakHitResult_HitBoneName) == 0x000260, "Member 'BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common, CallFunc_BreakHitResult_BoneName) == 0x000268, "Member 'BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common::CallFunc_BreakHitResult_BoneName' has a wrong offset!");
static_assert(offsetof(BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common, CallFunc_BreakHitResult_HitItem) == 0x000270, "Member 'BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common, CallFunc_BreakHitResult_ElementIndex) == 0x000274, "Member 'BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common, CallFunc_BreakHitResult_FaceIndex) == 0x000278, "Member 'BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common, CallFunc_BreakHitResult_TraceStart) == 0x000280, "Member 'BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common, CallFunc_BreakHitResult_TraceEnd) == 0x000298, "Member 'BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common, CallFunc_BreakVector_X_2) == 0x0002B0, "Member 'BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common::CallFunc_BreakVector_X_2' has a wrong offset!");
static_assert(offsetof(BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common, CallFunc_BreakVector_Y_2) == 0x0002B8, "Member 'BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common::CallFunc_BreakVector_Y_2' has a wrong offset!");
static_assert(offsetof(BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common, CallFunc_BreakVector_Z_2) == 0x0002C0, "Member 'BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common::CallFunc_BreakVector_Z_2' has a wrong offset!");
static_assert(offsetof(BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common, CallFunc_Subtract_DoubleDouble_ReturnValue_1) == 0x0002C8, "Member 'BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common::CallFunc_Subtract_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common, CallFunc_Add_DoubleDouble_ReturnValue) == 0x0002D0, "Member 'BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common, CallFunc_SetSightRange_ReturnValue_1) == 0x0002D8, "Member 'BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common::CallFunc_SetSightRange_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common, CallFunc_SetSightRange_SightRange_ImplicitCast) == 0x0002DC, "Member 'BP_DemonBat_Common_C_ExecuteUbergraph_BP_DemonBat_Common::CallFunc_SetSightRange_SightRange_ImplicitCast' has a wrong offset!");

// Function BP_DemonBat_Common.BP_DemonBat_Common_C.GameplayTagUpdated
// 0x000C (0x000C - 0x0000)
struct BP_DemonBat_Common_C_GameplayTagUpdated final
{
public:
	struct FGameplayTag                           InGameplayTag;                                     // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	int32                                         InCount;                                           // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DemonBat_Common_C_GameplayTagUpdated) == 0x000004, "Wrong alignment on BP_DemonBat_Common_C_GameplayTagUpdated");
static_assert(sizeof(BP_DemonBat_Common_C_GameplayTagUpdated) == 0x00000C, "Wrong size on BP_DemonBat_Common_C_GameplayTagUpdated");
static_assert(offsetof(BP_DemonBat_Common_C_GameplayTagUpdated, InGameplayTag) == 0x000000, "Member 'BP_DemonBat_Common_C_GameplayTagUpdated::InGameplayTag' has a wrong offset!");
static_assert(offsetof(BP_DemonBat_Common_C_GameplayTagUpdated, InCount) == 0x000008, "Member 'BP_DemonBat_Common_C_GameplayTagUpdated::InCount' has a wrong offset!");

}

