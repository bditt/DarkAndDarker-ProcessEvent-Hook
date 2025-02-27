#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Shield_ShieldSlam

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "DungeonCrawler_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function GA_Shield_ShieldSlam.GA_Shield_ShieldSlam_C.AbilityActivated
// 0x00B0 (0x00B0 - 0x0000)
struct GA_Shield_ShieldSlam_C_AbilityActivated final
{
public:
	struct FGameplayEventData                     TriggerEventData;                                  // 0x0000(0x00B0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GA_Shield_ShieldSlam_C_AbilityActivated) == 0x000008, "Wrong alignment on GA_Shield_ShieldSlam_C_AbilityActivated");
static_assert(sizeof(GA_Shield_ShieldSlam_C_AbilityActivated) == 0x0000B0, "Wrong size on GA_Shield_ShieldSlam_C_AbilityActivated");
static_assert(offsetof(GA_Shield_ShieldSlam_C_AbilityActivated, TriggerEventData) == 0x000000, "Member 'GA_Shield_ShieldSlam_C_AbilityActivated::TriggerEventData' has a wrong offset!");

// Function GA_Shield_ShieldSlam.GA_Shield_ShieldSlam_C.ExecuteUbergraph_GA_Shield_ShieldSlam
// 0x06E0 (0x06E0 - 0x0000)
struct GA_Shield_ShieldSlam_C_ExecuteUbergraph_GA_Shield_ShieldSlam final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_45BC[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Conv_DoubleToVector_ReturnValue;          // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     K2Node_Event_TriggerEventData;                     // 0x0020(0x00B0)(ConstParm)
	bool                                          K2Node_Event_bWasCancelled;                        // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_HasAuthority_ReturnValue;              // 0x00D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_HasAuthority_ReturnValue_1;            // 0x00D2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_45BD[0x5];                                     // 0x00D3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_GetCurrentSourceObject_ReturnValue;       // 0x00D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                                CallFunc_GetCurrentSourceObject_ReturnValue_1;     // 0x00E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AItemActor*                             K2Node_DynamicCast_AsItem_Actor;                   // 0x00E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_45BE[0x7];                                     // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AItemActor*                             K2Node_DynamicCast_AsItem_Actor_1;                 // 0x00F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_45BF[0x3];                                     // 0x0101(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           K2Node_Event_EventTag;                             // 0x0104(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           K2Node_Event_InChannelTag;                         // 0x010C(0x0008)(NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_45C0[0x4];                                     // 0x0114(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_Event_EventData;                            // 0x0118(0x00B0)()
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0x01C8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RemoveActiveGameplayEffect_ReturnValue;   // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_45C1[0x7];                                     // 0x01D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_GetHitResultFromTargetData_ReturnValue;   // 0x01D8(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x02C0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x02D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x02D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_45C2[0x2];                                     // 0x02DA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x02DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x02E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_45C3[0x4];                                     // 0x02E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x02E8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x0300(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x0318(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x0330(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x0348(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x0350(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x0358(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0360(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_BoneName;                  // 0x0368(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0370(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x0374(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x0378(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_45C4[0x4];                                     // 0x037C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x0380(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x0398(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADCCharacterBase*                       K2Node_DynamicCast_AsDCCharacter_Base;             // 0x03B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x03B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_45C5[0x7];                                     // 0x03B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDesignDataGameplayEffect              CallFunc_GetDesignDataGameplayEffect_ReturnValue;  // 0x03C0(0x02A0)()
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0660(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            CallFunc_ApplyGameplayEffect_ReturnValue;          // 0x0678(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0680(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Normal_ReturnValue;                       // 0x0698(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x06B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x06C8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Shield_ShieldSlam_C_ExecuteUbergraph_GA_Shield_ShieldSlam) == 0x000008, "Wrong alignment on GA_Shield_ShieldSlam_C_ExecuteUbergraph_GA_Shield_ShieldSlam");
static_assert(sizeof(GA_Shield_ShieldSlam_C_ExecuteUbergraph_GA_Shield_ShieldSlam) == 0x0006E0, "Wrong size on GA_Shield_ShieldSlam_C_ExecuteUbergraph_GA_Shield_ShieldSlam");
static_assert(offsetof(GA_Shield_ShieldSlam_C_ExecuteUbergraph_GA_Shield_ShieldSlam, EntryPoint) == 0x000000, "Member 'GA_Shield_ShieldSlam_C_ExecuteUbergraph_GA_Shield_ShieldSlam::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Shield_ShieldSlam_C_ExecuteUbergraph_GA_Shield_ShieldSlam, CallFunc_Conv_DoubleToVector_ReturnValue) == 0x000008, "Member 'GA_Shield_ShieldSlam_C_ExecuteUbergraph_GA_Shield_ShieldSlam::CallFunc_Conv_DoubleToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Shield_ShieldSlam_C_ExecuteUbergraph_GA_Shield_ShieldSlam, K2Node_Event_TriggerEventData) == 0x000020, "Member 'GA_Shield_ShieldSlam_C_ExecuteUbergraph_GA_Shield_ShieldSlam::K2Node_Event_TriggerEventData' has a wrong offset!");
static_assert(offsetof(GA_Shield_ShieldSlam_C_ExecuteUbergraph_GA_Shield_ShieldSlam, K2Node_Event_bWasCancelled) == 0x0000D0, "Member 'GA_Shield_ShieldSlam_C_ExecuteUbergraph_GA_Shield_ShieldSlam::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GA_Shield_ShieldSlam_C_ExecuteUbergraph_GA_Shield_ShieldSlam, CallFunc_K2_HasAuthority_ReturnValue) == 0x0000D1, "Member 'GA_Shield_ShieldSlam_C_ExecuteUbergraph_GA_Shield_ShieldSlam::CallFunc_K2_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Shield_ShieldSlam_C_ExecuteUbergraph_GA_Shield_ShieldSlam, CallFunc_K2_HasAuthority_ReturnValue_1) == 0x0000D2, "Member 'GA_Shield_ShieldSlam_C_ExecuteUbergraph_GA_Shield_ShieldSlam::CallFunc_K2_HasAuthority_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Shield_ShieldSlam_C_ExecuteUbergraph_GA_Shield_ShieldSlam, CallFunc_GetCurrentSourceObject_ReturnValue) == 0x0000D8, "Member 'GA_Shield_ShieldSlam_C_ExecuteUbergraph_GA_Shield_ShieldSlam::CallFunc_GetCurrentSourceObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Shield_ShieldSlam_C_ExecuteUbergraph_GA_Shield_ShieldSlam, CallFunc_GetCurrentSourceObject_ReturnValue_1) == 0x0000E0, "Member 'GA_Shield_ShieldSlam_C_ExecuteUbergraph_GA_Shield_ShieldSlam::CallFunc_GetCurrentSourceObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Shield_ShieldSlam_C_ExecuteUbergraph_GA_Shield_ShieldSlam, K2Node_DynamicCast_AsItem_Actor) == 0x0000E8, "Member 'GA_Shield_ShieldSlam_C_ExecuteUbergraph_GA_Shield_ShieldSlam::K2Node_DynamicCast_AsItem_Actor' has a wrong offset!");
static_assert(offsetof(GA_Shield_ShieldSlam_C_ExecuteUbergraph_GA_Shield_ShieldSlam, K2Node_DynamicCast_bSuccess) == 0x0000F0, "Member 'GA_Shield_ShieldSlam_C_ExecuteUbergraph_GA_Shield_ShieldSlam::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Shield_ShieldSlam_C_ExecuteUbergraph_GA_Shield_ShieldSlam, K2Node_DynamicCast_AsItem_Actor_1) == 0x0000F8, "Member 'GA_Shield_ShieldSlam_C_ExecuteUbergraph_GA_Shield_ShieldSlam::K2Node_DynamicCast_AsItem_Actor_1' has a wrong offset!");
static_assert(offsetof(GA_Shield_ShieldSlam_C_ExecuteUbergraph_GA_Shield_ShieldSlam, K2Node_DynamicCast_bSuccess_1) == 0x000100, "Member 'GA_Shield_ShieldSlam_C_ExecuteUbergraph_GA_Shield_ShieldSlam::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GA_Shield_ShieldSlam_C_ExecuteUbergraph_GA_Shield_ShieldSlam, K2Node_Event_EventTag) == 0x000104, "Member 'GA_Shield_ShieldSlam_C_ExecuteUbergraph_GA_Shield_ShieldSlam::K2Node_Event_EventTag' has a wrong offset!");
static_assert(offsetof(GA_Shield_ShieldSlam_C_ExecuteUbergraph_GA_Shield_ShieldSlam, K2Node_Event_InChannelTag) == 0x00010C, "Member 'GA_Shield_ShieldSlam_C_ExecuteUbergraph_GA_Shield_ShieldSlam::K2Node_Event_InChannelTag' has a wrong offset!");
static_assert(offsetof(GA_Shield_ShieldSlam_C_ExecuteUbergraph_GA_Shield_ShieldSlam, K2Node_Event_EventData) == 0x000118, "Member 'GA_Shield_ShieldSlam_C_ExecuteUbergraph_GA_Shield_ShieldSlam::K2Node_Event_EventData' has a wrong offset!");
static_assert(offsetof(GA_Shield_ShieldSlam_C_ExecuteUbergraph_GA_Shield_ShieldSlam, CallFunc_GetAbilitySystemComponent_ReturnValue) == 0x0001C8, "Member 'GA_Shield_ShieldSlam_C_ExecuteUbergraph_GA_Shield_ShieldSlam::CallFunc_GetAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Shield_ShieldSlam_C_ExecuteUbergraph_GA_Shield_ShieldSlam, CallFunc_RemoveActiveGameplayEffect_ReturnValue) == 0x0001D0, "Member 'GA_Shield_ShieldSlam_C_ExecuteUbergraph_GA_Shield_ShieldSlam::CallFunc_RemoveActiveGameplayEffect_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Shield_ShieldSlam_C_ExecuteUbergraph_GA_Shield_ShieldSlam, CallFunc_GetHitResultFromTargetData_ReturnValue) == 0x0001D8, "Member 'GA_Shield_ShieldSlam_C_ExecuteUbergraph_GA_Shield_ShieldSlam::CallFunc_GetHitResultFromTargetData_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Shield_ShieldSlam_C_ExecuteUbergraph_GA_Shield_ShieldSlam, CallFunc_K2_GetActorLocation_ReturnValue) == 0x0002C0, "Member 'GA_Shield_ShieldSlam_C_ExecuteUbergraph_GA_Shield_ShieldSlam::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Shield_ShieldSlam_C_ExecuteUbergraph_GA_Shield_ShieldSlam, CallFunc_BreakHitResult_bBlockingHit) == 0x0002D8, "Member 'GA_Shield_ShieldSlam_C_ExecuteUbergraph_GA_Shield_ShieldSlam::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(GA_Shield_ShieldSlam_C_ExecuteUbergraph_GA_Shield_ShieldSlam, CallFunc_BreakHitResult_bInitialOverlap) == 0x0002D9, "Member 'GA_Shield_ShieldSlam_C_ExecuteUbergraph_GA_Shield_ShieldSlam::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(GA_Shield_ShieldSlam_C_ExecuteUbergraph_GA_Shield_ShieldSlam, CallFunc_BreakHitResult_Time) == 0x0002DC, "Member 'GA_Shield_ShieldSlam_C_ExecuteUbergraph_GA_Shield_ShieldSlam::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(GA_Shield_ShieldSlam_C_ExecuteUbergraph_GA_Shield_ShieldSlam, CallFunc_BreakHitResult_Distance) == 0x0002E0, "Member 'GA_Shield_ShieldSlam_C_ExecuteUbergraph_GA_Shield_ShieldSlam::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(GA_Shield_ShieldSlam_C_ExecuteUbergraph_GA_Shield_ShieldSlam, CallFunc_BreakHitResult_Location) == 0x0002E8, "Member 'GA_Shield_ShieldSlam_C_ExecuteUbergraph_GA_Shield_ShieldSlam::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(GA_Shield_ShieldSlam_C_ExecuteUbergraph_GA_Shield_ShieldSlam, CallFunc_BreakHitResult_ImpactPoint) == 0x000300, "Member 'GA_Shield_ShieldSlam_C_ExecuteUbergraph_GA_Shield_ShieldSlam::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(GA_Shield_ShieldSlam_C_ExecuteUbergraph_GA_Shield_ShieldSlam, CallFunc_BreakHitResult_Normal) == 0x000318, "Member 'GA_Shield_ShieldSlam_C_ExecuteUbergraph_GA_Shield_ShieldSlam::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(GA_Shield_ShieldSlam_C_ExecuteUbergraph_GA_Shield_ShieldSlam, CallFunc_BreakHitResult_ImpactNormal) == 0x000330, "Member 'GA_Shield_ShieldSlam_C_ExecuteUbergraph_GA_Shield_ShieldSlam::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(GA_Shield_ShieldSlam_C_ExecuteUbergraph_GA_Shield_ShieldSlam, CallFunc_BreakHitResult_PhysMat) == 0x000348, "Member 'GA_Shield_ShieldSlam_C_ExecuteUbergraph_GA_Shield_ShieldSlam::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(GA_Shield_ShieldSlam_C_ExecuteUbergraph_GA_Shield_ShieldSlam, CallFunc_BreakHitResult_HitActor) == 0x000350, "Member 'GA_Shield_ShieldSlam_C_ExecuteUbergraph_GA_Shield_ShieldSlam::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(GA_Shield_ShieldSlam_C_ExecuteUbergraph_GA_Shield_ShieldSlam, CallFunc_BreakHitResult_HitComponent) == 0x000358, "Member 'GA_Shield_ShieldSlam_C_ExecuteUbergraph_GA_Shield_ShieldSlam::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(GA_Shield_ShieldSlam_C_ExecuteUbergraph_GA_Shield_ShieldSlam, CallFunc_BreakHitResult_HitBoneName) == 0x000360, "Member 'GA_Shield_ShieldSlam_C_ExecuteUbergraph_GA_Shield_ShieldSlam::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(GA_Shield_ShieldSlam_C_ExecuteUbergraph_GA_Shield_ShieldSlam, CallFunc_BreakHitResult_BoneName) == 0x000368, "Member 'GA_Shield_ShieldSlam_C_ExecuteUbergraph_GA_Shield_ShieldSlam::CallFunc_BreakHitResult_BoneName' has a wrong offset!");
static_assert(offsetof(GA_Shield_ShieldSlam_C_ExecuteUbergraph_GA_Shield_ShieldSlam, CallFunc_BreakHitResult_HitItem) == 0x000370, "Member 'GA_Shield_ShieldSlam_C_ExecuteUbergraph_GA_Shield_ShieldSlam::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(GA_Shield_ShieldSlam_C_ExecuteUbergraph_GA_Shield_ShieldSlam, CallFunc_BreakHitResult_ElementIndex) == 0x000374, "Member 'GA_Shield_ShieldSlam_C_ExecuteUbergraph_GA_Shield_ShieldSlam::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(GA_Shield_ShieldSlam_C_ExecuteUbergraph_GA_Shield_ShieldSlam, CallFunc_BreakHitResult_FaceIndex) == 0x000378, "Member 'GA_Shield_ShieldSlam_C_ExecuteUbergraph_GA_Shield_ShieldSlam::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(GA_Shield_ShieldSlam_C_ExecuteUbergraph_GA_Shield_ShieldSlam, CallFunc_BreakHitResult_TraceStart) == 0x000380, "Member 'GA_Shield_ShieldSlam_C_ExecuteUbergraph_GA_Shield_ShieldSlam::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(GA_Shield_ShieldSlam_C_ExecuteUbergraph_GA_Shield_ShieldSlam, CallFunc_BreakHitResult_TraceEnd) == 0x000398, "Member 'GA_Shield_ShieldSlam_C_ExecuteUbergraph_GA_Shield_ShieldSlam::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(GA_Shield_ShieldSlam_C_ExecuteUbergraph_GA_Shield_ShieldSlam, K2Node_DynamicCast_AsDCCharacter_Base) == 0x0003B0, "Member 'GA_Shield_ShieldSlam_C_ExecuteUbergraph_GA_Shield_ShieldSlam::K2Node_DynamicCast_AsDCCharacter_Base' has a wrong offset!");
static_assert(offsetof(GA_Shield_ShieldSlam_C_ExecuteUbergraph_GA_Shield_ShieldSlam, K2Node_DynamicCast_bSuccess_2) == 0x0003B8, "Member 'GA_Shield_ShieldSlam_C_ExecuteUbergraph_GA_Shield_ShieldSlam::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(GA_Shield_ShieldSlam_C_ExecuteUbergraph_GA_Shield_ShieldSlam, CallFunc_GetDesignDataGameplayEffect_ReturnValue) == 0x0003C0, "Member 'GA_Shield_ShieldSlam_C_ExecuteUbergraph_GA_Shield_ShieldSlam::CallFunc_GetDesignDataGameplayEffect_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Shield_ShieldSlam_C_ExecuteUbergraph_GA_Shield_ShieldSlam, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000660, "Member 'GA_Shield_ShieldSlam_C_ExecuteUbergraph_GA_Shield_ShieldSlam::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Shield_ShieldSlam_C_ExecuteUbergraph_GA_Shield_ShieldSlam, CallFunc_ApplyGameplayEffect_ReturnValue) == 0x000678, "Member 'GA_Shield_ShieldSlam_C_ExecuteUbergraph_GA_Shield_ShieldSlam::CallFunc_ApplyGameplayEffect_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Shield_ShieldSlam_C_ExecuteUbergraph_GA_Shield_ShieldSlam, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000680, "Member 'GA_Shield_ShieldSlam_C_ExecuteUbergraph_GA_Shield_ShieldSlam::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Shield_ShieldSlam_C_ExecuteUbergraph_GA_Shield_ShieldSlam, CallFunc_Normal_ReturnValue) == 0x000698, "Member 'GA_Shield_ShieldSlam_C_ExecuteUbergraph_GA_Shield_ShieldSlam::CallFunc_Normal_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Shield_ShieldSlam_C_ExecuteUbergraph_GA_Shield_ShieldSlam, CallFunc_Multiply_VectorVector_ReturnValue) == 0x0006B0, "Member 'GA_Shield_ShieldSlam_C_ExecuteUbergraph_GA_Shield_ShieldSlam::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Shield_ShieldSlam_C_ExecuteUbergraph_GA_Shield_ShieldSlam, CallFunc_Add_VectorVector_ReturnValue) == 0x0006C8, "Member 'GA_Shield_ShieldSlam_C_ExecuteUbergraph_GA_Shield_ShieldSlam::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");

// Function GA_Shield_ShieldSlam.GA_Shield_ShieldSlam_C.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct GA_Shield_ShieldSlam_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Shield_ShieldSlam_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GA_Shield_ShieldSlam_C_K2_OnEndAbility");
static_assert(sizeof(GA_Shield_ShieldSlam_C_K2_OnEndAbility) == 0x000001, "Wrong size on GA_Shield_ShieldSlam_C_K2_OnEndAbility");
static_assert(offsetof(GA_Shield_ShieldSlam_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GA_Shield_ShieldSlam_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

// Function GA_Shield_ShieldSlam.GA_Shield_ShieldSlam_C.ServerTargetDataReceived
// 0x00C0 (0x00C0 - 0x0000)
struct GA_Shield_ShieldSlam_C_ServerTargetDataReceived final
{
public:
	struct FGameplayTag                           EventTag;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           InChannelTag;                                      // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     EventData;                                         // 0x0010(0x00B0)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GA_Shield_ShieldSlam_C_ServerTargetDataReceived) == 0x000008, "Wrong alignment on GA_Shield_ShieldSlam_C_ServerTargetDataReceived");
static_assert(sizeof(GA_Shield_ShieldSlam_C_ServerTargetDataReceived) == 0x0000C0, "Wrong size on GA_Shield_ShieldSlam_C_ServerTargetDataReceived");
static_assert(offsetof(GA_Shield_ShieldSlam_C_ServerTargetDataReceived, EventTag) == 0x000000, "Member 'GA_Shield_ShieldSlam_C_ServerTargetDataReceived::EventTag' has a wrong offset!");
static_assert(offsetof(GA_Shield_ShieldSlam_C_ServerTargetDataReceived, InChannelTag) == 0x000008, "Member 'GA_Shield_ShieldSlam_C_ServerTargetDataReceived::InChannelTag' has a wrong offset!");
static_assert(offsetof(GA_Shield_ShieldSlam_C_ServerTargetDataReceived, EventData) == 0x000010, "Member 'GA_Shield_ShieldSlam_C_ServerTargetDataReceived::EventData' has a wrong offset!");

}

