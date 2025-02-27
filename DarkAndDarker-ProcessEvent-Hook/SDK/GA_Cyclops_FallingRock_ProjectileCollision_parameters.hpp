#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Cyclops_FallingRock_ProjectileCollision

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GA_Cyclops_FallingRock_ProjectileCollision.GA_Cyclops_FallingRock_ProjectileCollision_C.ExecuteUbergraph_GA_Cyclops_FallingRock_ProjectileCollision
// 0x02F8 (0x02F8 - 0x0000)
struct GA_Cyclops_FallingRock_ProjectileCollision_C_ExecuteUbergraph_GA_Cyclops_FallingRock_ProjectileCollision final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C41[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C42[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_Event_Hit;                                  // 0x0018(0x00E8)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x0100(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x0109(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C43[0x2];                                     // 0x010A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x010C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C44[0x4];                                     // 0x0114(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x0118(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x0130(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x0148(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x0160(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x0178(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x0180(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x0188(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_BoneName;                  // 0x0198(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x01A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x01A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x01A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C45[0x4];                                     // 0x01AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x01B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x01C8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         K2Node_MakeArray_Array;                            // 0x01E0(0x0010)(ConstParm, ReferenceParm)
	bool                                          CallFunc_Get_Actors_In_Range_And_Angle_From_Location_Result; // 0x01F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C46[0x7];                                     // 0x01F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ADCCharacterBase*>               CallFunc_Get_Actors_In_Range_And_Angle_From_Location_DCCharacterBase; // 0x01F8(0x0010)(ReferenceParm)
	class ADCCharacterBase*                       CallFunc_Array_Get_Item;                           // 0x0208(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0210(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C47[0x4];                                     // 0x0214(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_MakeStruct_GameplayEventData;               // 0x0218(0x00B0)()
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x02C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C48[0x4];                                     // 0x02CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FActiveGameplayEffectHandle>    CallFunc_ApplyPremadeSpecArray_ReturnValue;        // 0x02D0(0x0010)(ReferenceParm)
	int32                                         CallFunc_Max_ReturnValue;                          // 0x02E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C49[0x4];                                     // 0x02E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_Cyclops_Common_C*                   K2Node_DynamicCast_AsBP_Cyclops_Common;            // 0x02E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x02F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Cyclops_FallingRock_ProjectileCollision_C_ExecuteUbergraph_GA_Cyclops_FallingRock_ProjectileCollision) == 0x000008, "Wrong alignment on GA_Cyclops_FallingRock_ProjectileCollision_C_ExecuteUbergraph_GA_Cyclops_FallingRock_ProjectileCollision");
static_assert(sizeof(GA_Cyclops_FallingRock_ProjectileCollision_C_ExecuteUbergraph_GA_Cyclops_FallingRock_ProjectileCollision) == 0x0002F8, "Wrong size on GA_Cyclops_FallingRock_ProjectileCollision_C_ExecuteUbergraph_GA_Cyclops_FallingRock_ProjectileCollision");
static_assert(offsetof(GA_Cyclops_FallingRock_ProjectileCollision_C_ExecuteUbergraph_GA_Cyclops_FallingRock_ProjectileCollision, EntryPoint) == 0x000000, "Member 'GA_Cyclops_FallingRock_ProjectileCollision_C_ExecuteUbergraph_GA_Cyclops_FallingRock_ProjectileCollision::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Cyclops_FallingRock_ProjectileCollision_C_ExecuteUbergraph_GA_Cyclops_FallingRock_ProjectileCollision, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'GA_Cyclops_FallingRock_ProjectileCollision_C_ExecuteUbergraph_GA_Cyclops_FallingRock_ProjectileCollision::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(GA_Cyclops_FallingRock_ProjectileCollision_C_ExecuteUbergraph_GA_Cyclops_FallingRock_ProjectileCollision, CallFunc_Subtract_IntInt_ReturnValue) == 0x000008, "Member 'GA_Cyclops_FallingRock_ProjectileCollision_C_ExecuteUbergraph_GA_Cyclops_FallingRock_ProjectileCollision::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Cyclops_FallingRock_ProjectileCollision_C_ExecuteUbergraph_GA_Cyclops_FallingRock_ProjectileCollision, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x00000C, "Member 'GA_Cyclops_FallingRock_ProjectileCollision_C_ExecuteUbergraph_GA_Cyclops_FallingRock_ProjectileCollision::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Cyclops_FallingRock_ProjectileCollision_C_ExecuteUbergraph_GA_Cyclops_FallingRock_ProjectileCollision, Temp_int_Array_Index_Variable) == 0x000010, "Member 'GA_Cyclops_FallingRock_ProjectileCollision_C_ExecuteUbergraph_GA_Cyclops_FallingRock_ProjectileCollision::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(GA_Cyclops_FallingRock_ProjectileCollision_C_ExecuteUbergraph_GA_Cyclops_FallingRock_ProjectileCollision, K2Node_Event_Hit) == 0x000018, "Member 'GA_Cyclops_FallingRock_ProjectileCollision_C_ExecuteUbergraph_GA_Cyclops_FallingRock_ProjectileCollision::K2Node_Event_Hit' has a wrong offset!");
static_assert(offsetof(GA_Cyclops_FallingRock_ProjectileCollision_C_ExecuteUbergraph_GA_Cyclops_FallingRock_ProjectileCollision, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000100, "Member 'GA_Cyclops_FallingRock_ProjectileCollision_C_ExecuteUbergraph_GA_Cyclops_FallingRock_ProjectileCollision::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Cyclops_FallingRock_ProjectileCollision_C_ExecuteUbergraph_GA_Cyclops_FallingRock_ProjectileCollision, CallFunc_BreakHitResult_bBlockingHit) == 0x000108, "Member 'GA_Cyclops_FallingRock_ProjectileCollision_C_ExecuteUbergraph_GA_Cyclops_FallingRock_ProjectileCollision::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(GA_Cyclops_FallingRock_ProjectileCollision_C_ExecuteUbergraph_GA_Cyclops_FallingRock_ProjectileCollision, CallFunc_BreakHitResult_bInitialOverlap) == 0x000109, "Member 'GA_Cyclops_FallingRock_ProjectileCollision_C_ExecuteUbergraph_GA_Cyclops_FallingRock_ProjectileCollision::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(GA_Cyclops_FallingRock_ProjectileCollision_C_ExecuteUbergraph_GA_Cyclops_FallingRock_ProjectileCollision, CallFunc_BreakHitResult_Time) == 0x00010C, "Member 'GA_Cyclops_FallingRock_ProjectileCollision_C_ExecuteUbergraph_GA_Cyclops_FallingRock_ProjectileCollision::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(GA_Cyclops_FallingRock_ProjectileCollision_C_ExecuteUbergraph_GA_Cyclops_FallingRock_ProjectileCollision, CallFunc_BreakHitResult_Distance) == 0x000110, "Member 'GA_Cyclops_FallingRock_ProjectileCollision_C_ExecuteUbergraph_GA_Cyclops_FallingRock_ProjectileCollision::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(GA_Cyclops_FallingRock_ProjectileCollision_C_ExecuteUbergraph_GA_Cyclops_FallingRock_ProjectileCollision, CallFunc_BreakHitResult_Location) == 0x000118, "Member 'GA_Cyclops_FallingRock_ProjectileCollision_C_ExecuteUbergraph_GA_Cyclops_FallingRock_ProjectileCollision::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(GA_Cyclops_FallingRock_ProjectileCollision_C_ExecuteUbergraph_GA_Cyclops_FallingRock_ProjectileCollision, CallFunc_BreakHitResult_ImpactPoint) == 0x000130, "Member 'GA_Cyclops_FallingRock_ProjectileCollision_C_ExecuteUbergraph_GA_Cyclops_FallingRock_ProjectileCollision::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(GA_Cyclops_FallingRock_ProjectileCollision_C_ExecuteUbergraph_GA_Cyclops_FallingRock_ProjectileCollision, CallFunc_BreakHitResult_Normal) == 0x000148, "Member 'GA_Cyclops_FallingRock_ProjectileCollision_C_ExecuteUbergraph_GA_Cyclops_FallingRock_ProjectileCollision::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(GA_Cyclops_FallingRock_ProjectileCollision_C_ExecuteUbergraph_GA_Cyclops_FallingRock_ProjectileCollision, CallFunc_BreakHitResult_ImpactNormal) == 0x000160, "Member 'GA_Cyclops_FallingRock_ProjectileCollision_C_ExecuteUbergraph_GA_Cyclops_FallingRock_ProjectileCollision::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(GA_Cyclops_FallingRock_ProjectileCollision_C_ExecuteUbergraph_GA_Cyclops_FallingRock_ProjectileCollision, CallFunc_BreakHitResult_PhysMat) == 0x000178, "Member 'GA_Cyclops_FallingRock_ProjectileCollision_C_ExecuteUbergraph_GA_Cyclops_FallingRock_ProjectileCollision::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(GA_Cyclops_FallingRock_ProjectileCollision_C_ExecuteUbergraph_GA_Cyclops_FallingRock_ProjectileCollision, CallFunc_BreakHitResult_HitActor) == 0x000180, "Member 'GA_Cyclops_FallingRock_ProjectileCollision_C_ExecuteUbergraph_GA_Cyclops_FallingRock_ProjectileCollision::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(GA_Cyclops_FallingRock_ProjectileCollision_C_ExecuteUbergraph_GA_Cyclops_FallingRock_ProjectileCollision, CallFunc_BreakHitResult_HitComponent) == 0x000188, "Member 'GA_Cyclops_FallingRock_ProjectileCollision_C_ExecuteUbergraph_GA_Cyclops_FallingRock_ProjectileCollision::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(GA_Cyclops_FallingRock_ProjectileCollision_C_ExecuteUbergraph_GA_Cyclops_FallingRock_ProjectileCollision, CallFunc_BreakHitResult_HitBoneName) == 0x000190, "Member 'GA_Cyclops_FallingRock_ProjectileCollision_C_ExecuteUbergraph_GA_Cyclops_FallingRock_ProjectileCollision::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(GA_Cyclops_FallingRock_ProjectileCollision_C_ExecuteUbergraph_GA_Cyclops_FallingRock_ProjectileCollision, CallFunc_BreakHitResult_BoneName) == 0x000198, "Member 'GA_Cyclops_FallingRock_ProjectileCollision_C_ExecuteUbergraph_GA_Cyclops_FallingRock_ProjectileCollision::CallFunc_BreakHitResult_BoneName' has a wrong offset!");
static_assert(offsetof(GA_Cyclops_FallingRock_ProjectileCollision_C_ExecuteUbergraph_GA_Cyclops_FallingRock_ProjectileCollision, CallFunc_BreakHitResult_HitItem) == 0x0001A0, "Member 'GA_Cyclops_FallingRock_ProjectileCollision_C_ExecuteUbergraph_GA_Cyclops_FallingRock_ProjectileCollision::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(GA_Cyclops_FallingRock_ProjectileCollision_C_ExecuteUbergraph_GA_Cyclops_FallingRock_ProjectileCollision, CallFunc_BreakHitResult_ElementIndex) == 0x0001A4, "Member 'GA_Cyclops_FallingRock_ProjectileCollision_C_ExecuteUbergraph_GA_Cyclops_FallingRock_ProjectileCollision::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(GA_Cyclops_FallingRock_ProjectileCollision_C_ExecuteUbergraph_GA_Cyclops_FallingRock_ProjectileCollision, CallFunc_BreakHitResult_FaceIndex) == 0x0001A8, "Member 'GA_Cyclops_FallingRock_ProjectileCollision_C_ExecuteUbergraph_GA_Cyclops_FallingRock_ProjectileCollision::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(GA_Cyclops_FallingRock_ProjectileCollision_C_ExecuteUbergraph_GA_Cyclops_FallingRock_ProjectileCollision, CallFunc_BreakHitResult_TraceStart) == 0x0001B0, "Member 'GA_Cyclops_FallingRock_ProjectileCollision_C_ExecuteUbergraph_GA_Cyclops_FallingRock_ProjectileCollision::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(GA_Cyclops_FallingRock_ProjectileCollision_C_ExecuteUbergraph_GA_Cyclops_FallingRock_ProjectileCollision, CallFunc_BreakHitResult_TraceEnd) == 0x0001C8, "Member 'GA_Cyclops_FallingRock_ProjectileCollision_C_ExecuteUbergraph_GA_Cyclops_FallingRock_ProjectileCollision::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(GA_Cyclops_FallingRock_ProjectileCollision_C_ExecuteUbergraph_GA_Cyclops_FallingRock_ProjectileCollision, K2Node_MakeArray_Array) == 0x0001E0, "Member 'GA_Cyclops_FallingRock_ProjectileCollision_C_ExecuteUbergraph_GA_Cyclops_FallingRock_ProjectileCollision::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(GA_Cyclops_FallingRock_ProjectileCollision_C_ExecuteUbergraph_GA_Cyclops_FallingRock_ProjectileCollision, CallFunc_Get_Actors_In_Range_And_Angle_From_Location_Result) == 0x0001F0, "Member 'GA_Cyclops_FallingRock_ProjectileCollision_C_ExecuteUbergraph_GA_Cyclops_FallingRock_ProjectileCollision::CallFunc_Get_Actors_In_Range_And_Angle_From_Location_Result' has a wrong offset!");
static_assert(offsetof(GA_Cyclops_FallingRock_ProjectileCollision_C_ExecuteUbergraph_GA_Cyclops_FallingRock_ProjectileCollision, CallFunc_Get_Actors_In_Range_And_Angle_From_Location_DCCharacterBase) == 0x0001F8, "Member 'GA_Cyclops_FallingRock_ProjectileCollision_C_ExecuteUbergraph_GA_Cyclops_FallingRock_ProjectileCollision::CallFunc_Get_Actors_In_Range_And_Angle_From_Location_DCCharacterBase' has a wrong offset!");
static_assert(offsetof(GA_Cyclops_FallingRock_ProjectileCollision_C_ExecuteUbergraph_GA_Cyclops_FallingRock_ProjectileCollision, CallFunc_Array_Get_Item) == 0x000208, "Member 'GA_Cyclops_FallingRock_ProjectileCollision_C_ExecuteUbergraph_GA_Cyclops_FallingRock_ProjectileCollision::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GA_Cyclops_FallingRock_ProjectileCollision_C_ExecuteUbergraph_GA_Cyclops_FallingRock_ProjectileCollision, CallFunc_Array_Length_ReturnValue) == 0x000210, "Member 'GA_Cyclops_FallingRock_ProjectileCollision_C_ExecuteUbergraph_GA_Cyclops_FallingRock_ProjectileCollision::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Cyclops_FallingRock_ProjectileCollision_C_ExecuteUbergraph_GA_Cyclops_FallingRock_ProjectileCollision, K2Node_MakeStruct_GameplayEventData) == 0x000218, "Member 'GA_Cyclops_FallingRock_ProjectileCollision_C_ExecuteUbergraph_GA_Cyclops_FallingRock_ProjectileCollision::K2Node_MakeStruct_GameplayEventData' has a wrong offset!");
static_assert(offsetof(GA_Cyclops_FallingRock_ProjectileCollision_C_ExecuteUbergraph_GA_Cyclops_FallingRock_ProjectileCollision, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x0002C8, "Member 'GA_Cyclops_FallingRock_ProjectileCollision_C_ExecuteUbergraph_GA_Cyclops_FallingRock_ProjectileCollision::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Cyclops_FallingRock_ProjectileCollision_C_ExecuteUbergraph_GA_Cyclops_FallingRock_ProjectileCollision, CallFunc_ApplyPremadeSpecArray_ReturnValue) == 0x0002D0, "Member 'GA_Cyclops_FallingRock_ProjectileCollision_C_ExecuteUbergraph_GA_Cyclops_FallingRock_ProjectileCollision::CallFunc_ApplyPremadeSpecArray_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Cyclops_FallingRock_ProjectileCollision_C_ExecuteUbergraph_GA_Cyclops_FallingRock_ProjectileCollision, CallFunc_Max_ReturnValue) == 0x0002E0, "Member 'GA_Cyclops_FallingRock_ProjectileCollision_C_ExecuteUbergraph_GA_Cyclops_FallingRock_ProjectileCollision::CallFunc_Max_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Cyclops_FallingRock_ProjectileCollision_C_ExecuteUbergraph_GA_Cyclops_FallingRock_ProjectileCollision, K2Node_DynamicCast_AsBP_Cyclops_Common) == 0x0002E8, "Member 'GA_Cyclops_FallingRock_ProjectileCollision_C_ExecuteUbergraph_GA_Cyclops_FallingRock_ProjectileCollision::K2Node_DynamicCast_AsBP_Cyclops_Common' has a wrong offset!");
static_assert(offsetof(GA_Cyclops_FallingRock_ProjectileCollision_C_ExecuteUbergraph_GA_Cyclops_FallingRock_ProjectileCollision, K2Node_DynamicCast_bSuccess) == 0x0002F0, "Member 'GA_Cyclops_FallingRock_ProjectileCollision_C_ExecuteUbergraph_GA_Cyclops_FallingRock_ProjectileCollision::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function GA_Cyclops_FallingRock_ProjectileCollision.GA_Cyclops_FallingRock_ProjectileCollision_C.TargetDataReceived
// 0x00E8 (0x00E8 - 0x0000)
struct GA_Cyclops_FallingRock_ProjectileCollision_C_TargetDataReceived final
{
public:
	struct FHitResult                             Hit;                                               // 0x0000(0x00E8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(GA_Cyclops_FallingRock_ProjectileCollision_C_TargetDataReceived) == 0x000008, "Wrong alignment on GA_Cyclops_FallingRock_ProjectileCollision_C_TargetDataReceived");
static_assert(sizeof(GA_Cyclops_FallingRock_ProjectileCollision_C_TargetDataReceived) == 0x0000E8, "Wrong size on GA_Cyclops_FallingRock_ProjectileCollision_C_TargetDataReceived");
static_assert(offsetof(GA_Cyclops_FallingRock_ProjectileCollision_C_TargetDataReceived, Hit) == 0x000000, "Member 'GA_Cyclops_FallingRock_ProjectileCollision_C_TargetDataReceived::Hit' has a wrong offset!");

}

