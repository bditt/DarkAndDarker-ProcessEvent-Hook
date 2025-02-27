#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_SummonTreant

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function GA_SummonTreant.GA_SummonTreant_C.AbilityActivated_BP
// 0x00B8 (0x00B8 - 0x0000)
struct GA_SummonTreant_C_AbilityActivated_BP final
{
public:
	struct FGameplayEventData                     TriggerEventData;                                  // 0x0000(0x00B0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          bIsSocketSightBlocked;                             // 0x00B0(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_SummonTreant_C_AbilityActivated_BP) == 0x000008, "Wrong alignment on GA_SummonTreant_C_AbilityActivated_BP");
static_assert(sizeof(GA_SummonTreant_C_AbilityActivated_BP) == 0x0000B8, "Wrong size on GA_SummonTreant_C_AbilityActivated_BP");
static_assert(offsetof(GA_SummonTreant_C_AbilityActivated_BP, TriggerEventData) == 0x000000, "Member 'GA_SummonTreant_C_AbilityActivated_BP::TriggerEventData' has a wrong offset!");
static_assert(offsetof(GA_SummonTreant_C_AbilityActivated_BP, bIsSocketSightBlocked) == 0x0000B0, "Member 'GA_SummonTreant_C_AbilityActivated_BP::bIsSocketSightBlocked' has a wrong offset!");

// Function GA_SummonTreant.GA_SummonTreant_C.ExecuteUbergraph_GA_SummonTreant
// 0x04A0 (0x04A0 - 0x0000)
struct GA_SummonTreant_C_ExecuteUbergraph_GA_SummonTreant final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_589A[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     Temp_struct_Variable;                              // 0x0008(0x00B0)(ConstParm)
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1; // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_DynamicCast_As_;                            // 0x00C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_589B[0x7];                                     // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ADCPlayerCharacterBase*                 K2Node_DynamicCast_AsDCPlayer_Character_Base;      // 0x00D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_589C[0xF];                                     // 0x00E1(0x000F)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x00F0(0x0060)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     K2Node_Event_TriggerEventData;                     // 0x0150(0x00B0)(ConstParm)
	bool                                          K2Node_Event_bIsSocketSightBlocked;                // 0x0200(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_589D[0x7];                                     // 0x0201(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x0208(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x0220(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x0238(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_GetHitResultFromTargetData_ReturnValue;   // 0x0250(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0338(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x0339(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x033A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_589E[0x1];                                     // 0x033B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x033C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x0340(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_589F[0x4];                                     // 0x0344(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x0348(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x0360(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x0378(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x0390(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x03A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x03B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x03B8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x03C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_BoneName;                  // 0x03C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x03D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x03D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x03D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_58A0[0x4];                                     // 0x03DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x03E0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x03F8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0410(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0x0470(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0478(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue; // 0x0480(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_58A1[0x4];                                     // 0x0484(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_GameSpawner_C*                      CallFunc_FinishSpawningActor_ReturnValue;          // 0x0488(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TargetDataHasHitResult_ReturnValue;       // 0x0490(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_58A2[0x7];                                     // 0x0491(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ADCMonsterBase*                         CallFunc_SpawnMonster_ReturnValue;                 // 0x0498(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_SummonTreant_C_ExecuteUbergraph_GA_SummonTreant) == 0x000010, "Wrong alignment on GA_SummonTreant_C_ExecuteUbergraph_GA_SummonTreant");
static_assert(sizeof(GA_SummonTreant_C_ExecuteUbergraph_GA_SummonTreant) == 0x0004A0, "Wrong size on GA_SummonTreant_C_ExecuteUbergraph_GA_SummonTreant");
static_assert(offsetof(GA_SummonTreant_C_ExecuteUbergraph_GA_SummonTreant, EntryPoint) == 0x000000, "Member 'GA_SummonTreant_C_ExecuteUbergraph_GA_SummonTreant::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_SummonTreant_C_ExecuteUbergraph_GA_SummonTreant, Temp_struct_Variable) == 0x000008, "Member 'GA_SummonTreant_C_ExecuteUbergraph_GA_SummonTreant::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GA_SummonTreant_C_ExecuteUbergraph_GA_SummonTreant, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x0000B8, "Member 'GA_SummonTreant_C_ExecuteUbergraph_GA_SummonTreant::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SummonTreant_C_ExecuteUbergraph_GA_SummonTreant, CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1) == 0x0000C0, "Member 'GA_SummonTreant_C_ExecuteUbergraph_GA_SummonTreant::CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_SummonTreant_C_ExecuteUbergraph_GA_SummonTreant, K2Node_DynamicCast_As_) == 0x0000C8, "Member 'GA_SummonTreant_C_ExecuteUbergraph_GA_SummonTreant::K2Node_DynamicCast_As_' has a wrong offset!");
static_assert(offsetof(GA_SummonTreant_C_ExecuteUbergraph_GA_SummonTreant, K2Node_DynamicCast_bSuccess) == 0x0000D0, "Member 'GA_SummonTreant_C_ExecuteUbergraph_GA_SummonTreant::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_SummonTreant_C_ExecuteUbergraph_GA_SummonTreant, K2Node_DynamicCast_AsDCPlayer_Character_Base) == 0x0000D8, "Member 'GA_SummonTreant_C_ExecuteUbergraph_GA_SummonTreant::K2Node_DynamicCast_AsDCPlayer_Character_Base' has a wrong offset!");
static_assert(offsetof(GA_SummonTreant_C_ExecuteUbergraph_GA_SummonTreant, K2Node_DynamicCast_bSuccess_1) == 0x0000E0, "Member 'GA_SummonTreant_C_ExecuteUbergraph_GA_SummonTreant::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GA_SummonTreant_C_ExecuteUbergraph_GA_SummonTreant, CallFunc_GetTransform_ReturnValue) == 0x0000F0, "Member 'GA_SummonTreant_C_ExecuteUbergraph_GA_SummonTreant::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SummonTreant_C_ExecuteUbergraph_GA_SummonTreant, K2Node_Event_TriggerEventData) == 0x000150, "Member 'GA_SummonTreant_C_ExecuteUbergraph_GA_SummonTreant::K2Node_Event_TriggerEventData' has a wrong offset!");
static_assert(offsetof(GA_SummonTreant_C_ExecuteUbergraph_GA_SummonTreant, K2Node_Event_bIsSocketSightBlocked) == 0x000200, "Member 'GA_SummonTreant_C_ExecuteUbergraph_GA_SummonTreant::K2Node_Event_bIsSocketSightBlocked' has a wrong offset!");
static_assert(offsetof(GA_SummonTreant_C_ExecuteUbergraph_GA_SummonTreant, CallFunc_BreakTransform_Location) == 0x000208, "Member 'GA_SummonTreant_C_ExecuteUbergraph_GA_SummonTreant::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(GA_SummonTreant_C_ExecuteUbergraph_GA_SummonTreant, CallFunc_BreakTransform_Rotation) == 0x000220, "Member 'GA_SummonTreant_C_ExecuteUbergraph_GA_SummonTreant::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(GA_SummonTreant_C_ExecuteUbergraph_GA_SummonTreant, CallFunc_BreakTransform_Scale) == 0x000238, "Member 'GA_SummonTreant_C_ExecuteUbergraph_GA_SummonTreant::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(GA_SummonTreant_C_ExecuteUbergraph_GA_SummonTreant, CallFunc_GetHitResultFromTargetData_ReturnValue) == 0x000250, "Member 'GA_SummonTreant_C_ExecuteUbergraph_GA_SummonTreant::CallFunc_GetHitResultFromTargetData_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SummonTreant_C_ExecuteUbergraph_GA_SummonTreant, CallFunc_IsValid_ReturnValue) == 0x000338, "Member 'GA_SummonTreant_C_ExecuteUbergraph_GA_SummonTreant::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SummonTreant_C_ExecuteUbergraph_GA_SummonTreant, CallFunc_BreakHitResult_bBlockingHit) == 0x000339, "Member 'GA_SummonTreant_C_ExecuteUbergraph_GA_SummonTreant::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(GA_SummonTreant_C_ExecuteUbergraph_GA_SummonTreant, CallFunc_BreakHitResult_bInitialOverlap) == 0x00033A, "Member 'GA_SummonTreant_C_ExecuteUbergraph_GA_SummonTreant::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(GA_SummonTreant_C_ExecuteUbergraph_GA_SummonTreant, CallFunc_BreakHitResult_Time) == 0x00033C, "Member 'GA_SummonTreant_C_ExecuteUbergraph_GA_SummonTreant::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(GA_SummonTreant_C_ExecuteUbergraph_GA_SummonTreant, CallFunc_BreakHitResult_Distance) == 0x000340, "Member 'GA_SummonTreant_C_ExecuteUbergraph_GA_SummonTreant::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(GA_SummonTreant_C_ExecuteUbergraph_GA_SummonTreant, CallFunc_BreakHitResult_Location) == 0x000348, "Member 'GA_SummonTreant_C_ExecuteUbergraph_GA_SummonTreant::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(GA_SummonTreant_C_ExecuteUbergraph_GA_SummonTreant, CallFunc_BreakHitResult_ImpactPoint) == 0x000360, "Member 'GA_SummonTreant_C_ExecuteUbergraph_GA_SummonTreant::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(GA_SummonTreant_C_ExecuteUbergraph_GA_SummonTreant, CallFunc_BreakHitResult_Normal) == 0x000378, "Member 'GA_SummonTreant_C_ExecuteUbergraph_GA_SummonTreant::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(GA_SummonTreant_C_ExecuteUbergraph_GA_SummonTreant, CallFunc_BreakHitResult_ImpactNormal) == 0x000390, "Member 'GA_SummonTreant_C_ExecuteUbergraph_GA_SummonTreant::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(GA_SummonTreant_C_ExecuteUbergraph_GA_SummonTreant, CallFunc_BreakHitResult_PhysMat) == 0x0003A8, "Member 'GA_SummonTreant_C_ExecuteUbergraph_GA_SummonTreant::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(GA_SummonTreant_C_ExecuteUbergraph_GA_SummonTreant, CallFunc_BreakHitResult_HitActor) == 0x0003B0, "Member 'GA_SummonTreant_C_ExecuteUbergraph_GA_SummonTreant::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(GA_SummonTreant_C_ExecuteUbergraph_GA_SummonTreant, CallFunc_BreakHitResult_HitComponent) == 0x0003B8, "Member 'GA_SummonTreant_C_ExecuteUbergraph_GA_SummonTreant::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(GA_SummonTreant_C_ExecuteUbergraph_GA_SummonTreant, CallFunc_BreakHitResult_HitBoneName) == 0x0003C0, "Member 'GA_SummonTreant_C_ExecuteUbergraph_GA_SummonTreant::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(GA_SummonTreant_C_ExecuteUbergraph_GA_SummonTreant, CallFunc_BreakHitResult_BoneName) == 0x0003C8, "Member 'GA_SummonTreant_C_ExecuteUbergraph_GA_SummonTreant::CallFunc_BreakHitResult_BoneName' has a wrong offset!");
static_assert(offsetof(GA_SummonTreant_C_ExecuteUbergraph_GA_SummonTreant, CallFunc_BreakHitResult_HitItem) == 0x0003D0, "Member 'GA_SummonTreant_C_ExecuteUbergraph_GA_SummonTreant::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(GA_SummonTreant_C_ExecuteUbergraph_GA_SummonTreant, CallFunc_BreakHitResult_ElementIndex) == 0x0003D4, "Member 'GA_SummonTreant_C_ExecuteUbergraph_GA_SummonTreant::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(GA_SummonTreant_C_ExecuteUbergraph_GA_SummonTreant, CallFunc_BreakHitResult_FaceIndex) == 0x0003D8, "Member 'GA_SummonTreant_C_ExecuteUbergraph_GA_SummonTreant::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(GA_SummonTreant_C_ExecuteUbergraph_GA_SummonTreant, CallFunc_BreakHitResult_TraceStart) == 0x0003E0, "Member 'GA_SummonTreant_C_ExecuteUbergraph_GA_SummonTreant::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(GA_SummonTreant_C_ExecuteUbergraph_GA_SummonTreant, CallFunc_BreakHitResult_TraceEnd) == 0x0003F8, "Member 'GA_SummonTreant_C_ExecuteUbergraph_GA_SummonTreant::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(GA_SummonTreant_C_ExecuteUbergraph_GA_SummonTreant, CallFunc_MakeTransform_ReturnValue) == 0x000410, "Member 'GA_SummonTreant_C_ExecuteUbergraph_GA_SummonTreant::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SummonTreant_C_ExecuteUbergraph_GA_SummonTreant, CallFunc_GetAbilitySystemComponent_ReturnValue) == 0x000470, "Member 'GA_SummonTreant_C_ExecuteUbergraph_GA_SummonTreant::CallFunc_GetAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SummonTreant_C_ExecuteUbergraph_GA_SummonTreant, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000478, "Member 'GA_SummonTreant_C_ExecuteUbergraph_GA_SummonTreant::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SummonTreant_C_ExecuteUbergraph_GA_SummonTreant, CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue) == 0x000480, "Member 'GA_SummonTreant_C_ExecuteUbergraph_GA_SummonTreant::CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SummonTreant_C_ExecuteUbergraph_GA_SummonTreant, CallFunc_FinishSpawningActor_ReturnValue) == 0x000488, "Member 'GA_SummonTreant_C_ExecuteUbergraph_GA_SummonTreant::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SummonTreant_C_ExecuteUbergraph_GA_SummonTreant, CallFunc_TargetDataHasHitResult_ReturnValue) == 0x000490, "Member 'GA_SummonTreant_C_ExecuteUbergraph_GA_SummonTreant::CallFunc_TargetDataHasHitResult_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SummonTreant_C_ExecuteUbergraph_GA_SummonTreant, CallFunc_SpawnMonster_ReturnValue) == 0x000498, "Member 'GA_SummonTreant_C_ExecuteUbergraph_GA_SummonTreant::CallFunc_SpawnMonster_ReturnValue' has a wrong offset!");

}

