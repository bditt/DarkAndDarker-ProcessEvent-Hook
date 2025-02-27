#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_CurseofPain

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function GA_CurseofPain.GA_CurseofPain_C.AbilityActivated_BP
// 0x00B8 (0x00B8 - 0x0000)
struct GA_CurseofPain_C_AbilityActivated_BP final
{
public:
	struct FGameplayEventData                     TriggerEventData;                                  // 0x0000(0x00B0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          bIsSocketSightBlocked;                             // 0x00B0(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_CurseofPain_C_AbilityActivated_BP) == 0x000008, "Wrong alignment on GA_CurseofPain_C_AbilityActivated_BP");
static_assert(sizeof(GA_CurseofPain_C_AbilityActivated_BP) == 0x0000B8, "Wrong size on GA_CurseofPain_C_AbilityActivated_BP");
static_assert(offsetof(GA_CurseofPain_C_AbilityActivated_BP, TriggerEventData) == 0x000000, "Member 'GA_CurseofPain_C_AbilityActivated_BP::TriggerEventData' has a wrong offset!");
static_assert(offsetof(GA_CurseofPain_C_AbilityActivated_BP, bIsSocketSightBlocked) == 0x0000B0, "Member 'GA_CurseofPain_C_AbilityActivated_BP::bIsSocketSightBlocked' has a wrong offset!");

// Function GA_CurseofPain.GA_CurseofPain_C.Cancelled_B76A5055469BECD50C74599607DE5AF4
// 0x0028 (0x0028 - 0x0000)
struct GA_CurseofPain_C_Cancelled_B76A5055469BECD50C74599607DE5AF4 final
{
public:
	struct FGameplayAbilityTargetDataHandle       Data;                                              // 0x0000(0x0028)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(GA_CurseofPain_C_Cancelled_B76A5055469BECD50C74599607DE5AF4) == 0x000008, "Wrong alignment on GA_CurseofPain_C_Cancelled_B76A5055469BECD50C74599607DE5AF4");
static_assert(sizeof(GA_CurseofPain_C_Cancelled_B76A5055469BECD50C74599607DE5AF4) == 0x000028, "Wrong size on GA_CurseofPain_C_Cancelled_B76A5055469BECD50C74599607DE5AF4");
static_assert(offsetof(GA_CurseofPain_C_Cancelled_B76A5055469BECD50C74599607DE5AF4, Data) == 0x000000, "Member 'GA_CurseofPain_C_Cancelled_B76A5055469BECD50C74599607DE5AF4::Data' has a wrong offset!");

// Function GA_CurseofPain.GA_CurseofPain_C.ExecuteUbergraph_GA_CurseofPain
// 0x0550 (0x0550 - 0x0000)
struct GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_57C5[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_Data_1;                         // 0x0010(0x0028)(ConstParm)
	TDelegate<void(struct FGameplayAbilityTargetDataHandle& Data)> K2Node_CreateDelegate_OutputDelegate;              // 0x0038(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_Data;                           // 0x0048(0x0028)(ConstParm)
	TDelegate<void(struct FGameplayAbilityTargetDataHandle& Data)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0070(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle       Temp_struct_Variable;                              // 0x0080(0x0028)()
	class UAbilityTask_WaitTargetData*            CallFunc_WaitTargetData_ReturnValue;               // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_57C6[0x7];                                     // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameplayAbilityTargetActor*            CallFunc_BeginSpawningActor_SpawnedActor;          // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BeginSpawningActor_ReturnValue;           // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_57C7[0x6];                                     // 0x00C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_GetHitResultFromTargetData_ReturnValue;   // 0x00C8(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          Temp_bool_Variable;                                // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CastToTarget_ReturnValue;                 // 0x01B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CastToTarget_ReturnValue_1;               // 0x01B2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CastToTarget_ReturnValue_2;               // 0x01B3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CastToTarget_ReturnValue_3;               // 0x01B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x01B5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x01B6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_57C8[0x1];                                     // 0x01B7(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x01B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x01BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x01C0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x01D8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x01F0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x0208(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x0220(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x0228(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x0230(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0238(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_BoneName;                  // 0x0240(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0248(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x024C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x0250(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_57C9[0x4];                                     // 0x0254(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x0258(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x0270(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit_1;            // 0x0288(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap_1;         // 0x0289(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_57CA[0x2];                                     // 0x028A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time_1;                    // 0x028C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance_1;                // 0x0290(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_57CB[0x4];                                     // 0x0294(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_Location_1;                // 0x0298(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint_1;             // 0x02B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal_1;                  // 0x02C8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal_1;            // 0x02E0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat_1;                 // 0x02F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor_1;                // 0x0300(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent_1;            // 0x0308(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName_1;             // 0x0310(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_BoneName_1;                // 0x0318(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem_1;                 // 0x0320(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex_1;            // 0x0324(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex_1;               // 0x0328(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_57CC[0x4];                                     // 0x032C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_TraceStart_1;              // 0x0330(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd_1;                // 0x0348(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0360(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasMatchingGameplayTag_ReturnValue;       // 0x0368(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_57CD[0x7];                                     // 0x0369(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayCueParameters                 CallFunc_MakeGameplayCueParameters_ReturnValue;    // 0x0370(0x00D8)(ContainsInstancedReference)
	bool                                          CallFunc_HasMatchingGameplayTag_ReturnValue_1;     // 0x0448(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_57CE[0x7];                                     // 0x0449(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ADCCharacterBase*                       K2Node_DynamicCast_AsDCCharacter_Base;             // 0x0450(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0458(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDead_ReturnValue;                       // 0x0459(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_57CF[0x2];                                     // 0x045A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetRange_ReturnValue;                     // 0x045C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetAimRadius_ReturnValue;                 // 0x0460(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_57D0[0x4];                                     // 0x0464(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1; // 0x0468(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     K2Node_Event_TriggerEventData;                     // 0x0470(0x00B0)(ConstParm)
	bool                                          K2Node_Event_bIsSocketSightBlocked;                // 0x0520(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_57D1[0x7];                                     // 0x0521(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_As_________________;            // 0x0528(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0538(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasMatchingGameplayTag_ReturnValue_2;     // 0x0539(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_57D2[0x6];                                     // 0x053A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_SetDoublePropertyByName_Value_ImplicitCast; // 0x0540(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_SetDoublePropertyByName_Value_ImplicitCast_1; // 0x0548(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain) == 0x000008, "Wrong alignment on GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain");
static_assert(sizeof(GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain) == 0x000550, "Wrong size on GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain");
static_assert(offsetof(GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain, EntryPoint) == 0x000000, "Member 'GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000008, "Member 'GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain, K2Node_CustomEvent_Data_1) == 0x000010, "Member 'GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain::K2Node_CustomEvent_Data_1' has a wrong offset!");
static_assert(offsetof(GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain, K2Node_CreateDelegate_OutputDelegate) == 0x000038, "Member 'GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain, K2Node_CustomEvent_Data) == 0x000048, "Member 'GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain::K2Node_CustomEvent_Data' has a wrong offset!");
static_assert(offsetof(GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain, K2Node_CreateDelegate_OutputDelegate_1) == 0x000070, "Member 'GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain, Temp_struct_Variable) == 0x000080, "Member 'GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain, CallFunc_WaitTargetData_ReturnValue) == 0x0000A8, "Member 'GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain::CallFunc_WaitTargetData_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain, CallFunc_IsValid_ReturnValue) == 0x0000B0, "Member 'GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain, CallFunc_BeginSpawningActor_SpawnedActor) == 0x0000B8, "Member 'GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain::CallFunc_BeginSpawningActor_SpawnedActor' has a wrong offset!");
static_assert(offsetof(GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain, CallFunc_BeginSpawningActor_ReturnValue) == 0x0000C0, "Member 'GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain::CallFunc_BeginSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain, CallFunc_IsValid_ReturnValue_1) == 0x0000C1, "Member 'GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain, CallFunc_GetHitResultFromTargetData_ReturnValue) == 0x0000C8, "Member 'GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain::CallFunc_GetHitResultFromTargetData_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain, Temp_bool_Variable) == 0x0001B0, "Member 'GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain, CallFunc_CastToTarget_ReturnValue) == 0x0001B1, "Member 'GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain::CallFunc_CastToTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain, CallFunc_CastToTarget_ReturnValue_1) == 0x0001B2, "Member 'GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain::CallFunc_CastToTarget_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain, CallFunc_CastToTarget_ReturnValue_2) == 0x0001B3, "Member 'GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain::CallFunc_CastToTarget_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain, CallFunc_CastToTarget_ReturnValue_3) == 0x0001B4, "Member 'GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain::CallFunc_CastToTarget_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain, CallFunc_BreakHitResult_bBlockingHit) == 0x0001B5, "Member 'GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain, CallFunc_BreakHitResult_bInitialOverlap) == 0x0001B6, "Member 'GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain, CallFunc_BreakHitResult_Time) == 0x0001B8, "Member 'GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain, CallFunc_BreakHitResult_Distance) == 0x0001BC, "Member 'GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain, CallFunc_BreakHitResult_Location) == 0x0001C0, "Member 'GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain, CallFunc_BreakHitResult_ImpactPoint) == 0x0001D8, "Member 'GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain, CallFunc_BreakHitResult_Normal) == 0x0001F0, "Member 'GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain, CallFunc_BreakHitResult_ImpactNormal) == 0x000208, "Member 'GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain, CallFunc_BreakHitResult_PhysMat) == 0x000220, "Member 'GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain, CallFunc_BreakHitResult_HitActor) == 0x000228, "Member 'GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain, CallFunc_BreakHitResult_HitComponent) == 0x000230, "Member 'GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain, CallFunc_BreakHitResult_HitBoneName) == 0x000238, "Member 'GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain, CallFunc_BreakHitResult_BoneName) == 0x000240, "Member 'GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain::CallFunc_BreakHitResult_BoneName' has a wrong offset!");
static_assert(offsetof(GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain, CallFunc_BreakHitResult_HitItem) == 0x000248, "Member 'GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain, CallFunc_BreakHitResult_ElementIndex) == 0x00024C, "Member 'GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain, CallFunc_BreakHitResult_FaceIndex) == 0x000250, "Member 'GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain, CallFunc_BreakHitResult_TraceStart) == 0x000258, "Member 'GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain, CallFunc_BreakHitResult_TraceEnd) == 0x000270, "Member 'GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain, CallFunc_BreakHitResult_bBlockingHit_1) == 0x000288, "Member 'GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain::CallFunc_BreakHitResult_bBlockingHit_1' has a wrong offset!");
static_assert(offsetof(GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain, CallFunc_BreakHitResult_bInitialOverlap_1) == 0x000289, "Member 'GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain::CallFunc_BreakHitResult_bInitialOverlap_1' has a wrong offset!");
static_assert(offsetof(GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain, CallFunc_BreakHitResult_Time_1) == 0x00028C, "Member 'GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain::CallFunc_BreakHitResult_Time_1' has a wrong offset!");
static_assert(offsetof(GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain, CallFunc_BreakHitResult_Distance_1) == 0x000290, "Member 'GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain::CallFunc_BreakHitResult_Distance_1' has a wrong offset!");
static_assert(offsetof(GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain, CallFunc_BreakHitResult_Location_1) == 0x000298, "Member 'GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain::CallFunc_BreakHitResult_Location_1' has a wrong offset!");
static_assert(offsetof(GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain, CallFunc_BreakHitResult_ImpactPoint_1) == 0x0002B0, "Member 'GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain::CallFunc_BreakHitResult_ImpactPoint_1' has a wrong offset!");
static_assert(offsetof(GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain, CallFunc_BreakHitResult_Normal_1) == 0x0002C8, "Member 'GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain::CallFunc_BreakHitResult_Normal_1' has a wrong offset!");
static_assert(offsetof(GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain, CallFunc_BreakHitResult_ImpactNormal_1) == 0x0002E0, "Member 'GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain::CallFunc_BreakHitResult_ImpactNormal_1' has a wrong offset!");
static_assert(offsetof(GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain, CallFunc_BreakHitResult_PhysMat_1) == 0x0002F8, "Member 'GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain::CallFunc_BreakHitResult_PhysMat_1' has a wrong offset!");
static_assert(offsetof(GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain, CallFunc_BreakHitResult_HitActor_1) == 0x000300, "Member 'GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain::CallFunc_BreakHitResult_HitActor_1' has a wrong offset!");
static_assert(offsetof(GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain, CallFunc_BreakHitResult_HitComponent_1) == 0x000308, "Member 'GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain::CallFunc_BreakHitResult_HitComponent_1' has a wrong offset!");
static_assert(offsetof(GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain, CallFunc_BreakHitResult_HitBoneName_1) == 0x000310, "Member 'GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain::CallFunc_BreakHitResult_HitBoneName_1' has a wrong offset!");
static_assert(offsetof(GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain, CallFunc_BreakHitResult_BoneName_1) == 0x000318, "Member 'GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain::CallFunc_BreakHitResult_BoneName_1' has a wrong offset!");
static_assert(offsetof(GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain, CallFunc_BreakHitResult_HitItem_1) == 0x000320, "Member 'GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain::CallFunc_BreakHitResult_HitItem_1' has a wrong offset!");
static_assert(offsetof(GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain, CallFunc_BreakHitResult_ElementIndex_1) == 0x000324, "Member 'GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain::CallFunc_BreakHitResult_ElementIndex_1' has a wrong offset!");
static_assert(offsetof(GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain, CallFunc_BreakHitResult_FaceIndex_1) == 0x000328, "Member 'GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain::CallFunc_BreakHitResult_FaceIndex_1' has a wrong offset!");
static_assert(offsetof(GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain, CallFunc_BreakHitResult_TraceStart_1) == 0x000330, "Member 'GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain::CallFunc_BreakHitResult_TraceStart_1' has a wrong offset!");
static_assert(offsetof(GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain, CallFunc_BreakHitResult_TraceEnd_1) == 0x000348, "Member 'GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain::CallFunc_BreakHitResult_TraceEnd_1' has a wrong offset!");
static_assert(offsetof(GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000360, "Member 'GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain, CallFunc_HasMatchingGameplayTag_ReturnValue) == 0x000368, "Member 'GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain::CallFunc_HasMatchingGameplayTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain, CallFunc_MakeGameplayCueParameters_ReturnValue) == 0x000370, "Member 'GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain::CallFunc_MakeGameplayCueParameters_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain, CallFunc_HasMatchingGameplayTag_ReturnValue_1) == 0x000448, "Member 'GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain::CallFunc_HasMatchingGameplayTag_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain, K2Node_DynamicCast_AsDCCharacter_Base) == 0x000450, "Member 'GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain::K2Node_DynamicCast_AsDCCharacter_Base' has a wrong offset!");
static_assert(offsetof(GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain, K2Node_DynamicCast_bSuccess) == 0x000458, "Member 'GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain, CallFunc_IsDead_ReturnValue) == 0x000459, "Member 'GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain::CallFunc_IsDead_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain, CallFunc_GetRange_ReturnValue) == 0x00045C, "Member 'GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain::CallFunc_GetRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain, CallFunc_GetAimRadius_ReturnValue) == 0x000460, "Member 'GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain::CallFunc_GetAimRadius_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain, CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1) == 0x000468, "Member 'GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain::CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain, K2Node_Event_TriggerEventData) == 0x000470, "Member 'GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain::K2Node_Event_TriggerEventData' has a wrong offset!");
static_assert(offsetof(GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain, K2Node_Event_bIsSocketSightBlocked) == 0x000520, "Member 'GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain::K2Node_Event_bIsSocketSightBlocked' has a wrong offset!");
static_assert(offsetof(GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain, K2Node_DynamicCast_As_________________) == 0x000528, "Member 'GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain::K2Node_DynamicCast_As_________________' has a wrong offset!");
static_assert(offsetof(GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain, K2Node_DynamicCast_bSuccess_1) == 0x000538, "Member 'GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain, CallFunc_HasMatchingGameplayTag_ReturnValue_2) == 0x000539, "Member 'GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain::CallFunc_HasMatchingGameplayTag_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain, CallFunc_SetDoublePropertyByName_Value_ImplicitCast) == 0x000540, "Member 'GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain::CallFunc_SetDoublePropertyByName_Value_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain, CallFunc_SetDoublePropertyByName_Value_ImplicitCast_1) == 0x000548, "Member 'GA_CurseofPain_C_ExecuteUbergraph_GA_CurseofPain::CallFunc_SetDoublePropertyByName_Value_ImplicitCast_1' has a wrong offset!");

// Function GA_CurseofPain.GA_CurseofPain_C.ValidData_B76A5055469BECD50C74599607DE5AF4
// 0x0028 (0x0028 - 0x0000)
struct GA_CurseofPain_C_ValidData_B76A5055469BECD50C74599607DE5AF4 final
{
public:
	struct FGameplayAbilityTargetDataHandle       Data;                                              // 0x0000(0x0028)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(GA_CurseofPain_C_ValidData_B76A5055469BECD50C74599607DE5AF4) == 0x000008, "Wrong alignment on GA_CurseofPain_C_ValidData_B76A5055469BECD50C74599607DE5AF4");
static_assert(sizeof(GA_CurseofPain_C_ValidData_B76A5055469BECD50C74599607DE5AF4) == 0x000028, "Wrong size on GA_CurseofPain_C_ValidData_B76A5055469BECD50C74599607DE5AF4");
static_assert(offsetof(GA_CurseofPain_C_ValidData_B76A5055469BECD50C74599607DE5AF4, Data) == 0x000000, "Member 'GA_CurseofPain_C_ValidData_B76A5055469BECD50C74599607DE5AF4::Data' has a wrong offset!");

}

