#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Earthquake

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GA_Earthquake.GA_Earthquake_C.AbilityActivated_BP
// 0x00B8 (0x00B8 - 0x0000)
struct GA_Earthquake_C_AbilityActivated_BP final
{
public:
	struct FGameplayEventData                     TriggerEventData;                                  // 0x0000(0x00B0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          bIsSocketSightBlocked;                             // 0x00B0(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Earthquake_C_AbilityActivated_BP) == 0x000008, "Wrong alignment on GA_Earthquake_C_AbilityActivated_BP");
static_assert(sizeof(GA_Earthquake_C_AbilityActivated_BP) == 0x0000B8, "Wrong size on GA_Earthquake_C_AbilityActivated_BP");
static_assert(offsetof(GA_Earthquake_C_AbilityActivated_BP, TriggerEventData) == 0x000000, "Member 'GA_Earthquake_C_AbilityActivated_BP::TriggerEventData' has a wrong offset!");
static_assert(offsetof(GA_Earthquake_C_AbilityActivated_BP, bIsSocketSightBlocked) == 0x0000B0, "Member 'GA_Earthquake_C_AbilityActivated_BP::bIsSocketSightBlocked' has a wrong offset!");

// Function GA_Earthquake.GA_Earthquake_C.EndSpell
// 0x0018 (0x0018 - 0x0000)
struct GA_Earthquake_C_EndSpell final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_57DB[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_AOE_Earthquake_C*                   K2Node_DynamicCast_AsBP_AOE_Earthquake;            // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Earthquake_C_EndSpell) == 0x000008, "Wrong alignment on GA_Earthquake_C_EndSpell");
static_assert(sizeof(GA_Earthquake_C_EndSpell) == 0x000018, "Wrong size on GA_Earthquake_C_EndSpell");
static_assert(offsetof(GA_Earthquake_C_EndSpell, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'GA_Earthquake_C_EndSpell::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Earthquake_C_EndSpell, K2Node_DynamicCast_AsBP_AOE_Earthquake) == 0x000008, "Member 'GA_Earthquake_C_EndSpell::K2Node_DynamicCast_AsBP_AOE_Earthquake' has a wrong offset!");
static_assert(offsetof(GA_Earthquake_C_EndSpell, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'GA_Earthquake_C_EndSpell::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function GA_Earthquake.GA_Earthquake_C.ExecuteUbergraph_GA_Earthquake
// 0x01D8 (0x01D8 - 0x0000)
struct GA_Earthquake_C_ExecuteUbergraph_GA_Earthquake final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_57DC[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_Event_TriggerEventData;                     // 0x0008(0x00B0)(ConstParm)
	bool                                          K2Node_Event_bIsSocketSightBlocked;                // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_57DD[0x7];                                     // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UDCAT_WaitAimDirectionChanged*          CallFunc_WaitAimDirectionChanged_ReturnValue;      // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TargetDataHasHitResult_ReturnValue;       // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_57DE[0x6];                                     // 0x00CA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_GetHitResultFromTargetData_ReturnValue;   // 0x00D0(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_SpawnAoe_Result;                          // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bWasCancelled;                        // 0x01B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_57DF[0x2];                                     // 0x01BA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x01BC(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_57E0[0x4];                                     // 0x01CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x01D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Earthquake_C_ExecuteUbergraph_GA_Earthquake) == 0x000008, "Wrong alignment on GA_Earthquake_C_ExecuteUbergraph_GA_Earthquake");
static_assert(sizeof(GA_Earthquake_C_ExecuteUbergraph_GA_Earthquake) == 0x0001D8, "Wrong size on GA_Earthquake_C_ExecuteUbergraph_GA_Earthquake");
static_assert(offsetof(GA_Earthquake_C_ExecuteUbergraph_GA_Earthquake, EntryPoint) == 0x000000, "Member 'GA_Earthquake_C_ExecuteUbergraph_GA_Earthquake::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Earthquake_C_ExecuteUbergraph_GA_Earthquake, K2Node_Event_TriggerEventData) == 0x000008, "Member 'GA_Earthquake_C_ExecuteUbergraph_GA_Earthquake::K2Node_Event_TriggerEventData' has a wrong offset!");
static_assert(offsetof(GA_Earthquake_C_ExecuteUbergraph_GA_Earthquake, K2Node_Event_bIsSocketSightBlocked) == 0x0000B8, "Member 'GA_Earthquake_C_ExecuteUbergraph_GA_Earthquake::K2Node_Event_bIsSocketSightBlocked' has a wrong offset!");
static_assert(offsetof(GA_Earthquake_C_ExecuteUbergraph_GA_Earthquake, CallFunc_WaitAimDirectionChanged_ReturnValue) == 0x0000C0, "Member 'GA_Earthquake_C_ExecuteUbergraph_GA_Earthquake::CallFunc_WaitAimDirectionChanged_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Earthquake_C_ExecuteUbergraph_GA_Earthquake, CallFunc_TargetDataHasHitResult_ReturnValue) == 0x0000C8, "Member 'GA_Earthquake_C_ExecuteUbergraph_GA_Earthquake::CallFunc_TargetDataHasHitResult_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Earthquake_C_ExecuteUbergraph_GA_Earthquake, CallFunc_IsValid_ReturnValue) == 0x0000C9, "Member 'GA_Earthquake_C_ExecuteUbergraph_GA_Earthquake::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Earthquake_C_ExecuteUbergraph_GA_Earthquake, CallFunc_GetHitResultFromTargetData_ReturnValue) == 0x0000D0, "Member 'GA_Earthquake_C_ExecuteUbergraph_GA_Earthquake::CallFunc_GetHitResultFromTargetData_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Earthquake_C_ExecuteUbergraph_GA_Earthquake, CallFunc_SpawnAoe_Result) == 0x0001B8, "Member 'GA_Earthquake_C_ExecuteUbergraph_GA_Earthquake::CallFunc_SpawnAoe_Result' has a wrong offset!");
static_assert(offsetof(GA_Earthquake_C_ExecuteUbergraph_GA_Earthquake, K2Node_Event_bWasCancelled) == 0x0001B9, "Member 'GA_Earthquake_C_ExecuteUbergraph_GA_Earthquake::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GA_Earthquake_C_ExecuteUbergraph_GA_Earthquake, K2Node_CreateDelegate_OutputDelegate) == 0x0001BC, "Member 'GA_Earthquake_C_ExecuteUbergraph_GA_Earthquake::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_Earthquake_C_ExecuteUbergraph_GA_Earthquake, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x0001D0, "Member 'GA_Earthquake_C_ExecuteUbergraph_GA_Earthquake::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");

// Function GA_Earthquake.GA_Earthquake_C.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct GA_Earthquake_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Earthquake_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GA_Earthquake_C_K2_OnEndAbility");
static_assert(sizeof(GA_Earthquake_C_K2_OnEndAbility) == 0x000001, "Wrong size on GA_Earthquake_C_K2_OnEndAbility");
static_assert(offsetof(GA_Earthquake_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GA_Earthquake_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

// Function GA_Earthquake.GA_Earthquake_C.SpawnAoe
// 0x0350 (0x0350 - 0x0000)
struct GA_Earthquake_C_SpawnAoe final
{
public:
	struct FHitResult                             HtResult;                                          // 0x0000(0x00E8)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          Result;                                            // 0x00E8(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_57E1[0x3];                                     // 0x00E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetAreaRadius_ReturnValue;                // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x00F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_57E2[0x2];                                     // 0x00F2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_57E3[0x4];                                     // 0x00FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x0100(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x0118(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x0130(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x0148(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x0160(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x0168(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x0170(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0178(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_BoneName;                  // 0x0180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0188(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x018C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x0190(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_57E4[0x4];                                     // 0x0194(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x0198(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x01B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x01C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_57E5[0x7];                                     // 0x01C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x01D0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_57E6[0x8];                                     // 0x01E8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x01F0(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_HasAuthority_ReturnValue;              // 0x0250(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_57E7[0x7];                                     // 0x0251(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_AOE_Earthquake_C*                   K2Node_DynamicCast_AsBP_AOE_Earthquake;            // 0x0258(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0260(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_57E8[0x7];                                     // 0x0261(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x0268(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ADCCharacterBase*                       K2Node_DynamicCast_AsDCCharacter_Base;             // 0x0270(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0278(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SpawnAoeDeferred_bSuccessfully;           // 0x0279(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_57E9[0x6];                                     // 0x027A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ADCAoeBase*                             CallFunc_SpawnAoeDeferred_ReturnValue;             // 0x0280(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_DeferredAoeFinish_bSuccessfully;          // 0x0288(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_57EA[0x7];                                     // 0x0289(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     Temp_struct_Variable;                              // 0x0290(0x00B0)(ConstParm)
	double                                        CallFunc_SetAoeData_Radius_ImplicitCast;           // 0x0340(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Earthquake_C_SpawnAoe) == 0x000010, "Wrong alignment on GA_Earthquake_C_SpawnAoe");
static_assert(sizeof(GA_Earthquake_C_SpawnAoe) == 0x000350, "Wrong size on GA_Earthquake_C_SpawnAoe");
static_assert(offsetof(GA_Earthquake_C_SpawnAoe, HtResult) == 0x000000, "Member 'GA_Earthquake_C_SpawnAoe::HtResult' has a wrong offset!");
static_assert(offsetof(GA_Earthquake_C_SpawnAoe, Result) == 0x0000E8, "Member 'GA_Earthquake_C_SpawnAoe::Result' has a wrong offset!");
static_assert(offsetof(GA_Earthquake_C_SpawnAoe, CallFunc_GetAreaRadius_ReturnValue) == 0x0000EC, "Member 'GA_Earthquake_C_SpawnAoe::CallFunc_GetAreaRadius_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Earthquake_C_SpawnAoe, CallFunc_BreakHitResult_bBlockingHit) == 0x0000F0, "Member 'GA_Earthquake_C_SpawnAoe::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(GA_Earthquake_C_SpawnAoe, CallFunc_BreakHitResult_bInitialOverlap) == 0x0000F1, "Member 'GA_Earthquake_C_SpawnAoe::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(GA_Earthquake_C_SpawnAoe, CallFunc_BreakHitResult_Time) == 0x0000F4, "Member 'GA_Earthquake_C_SpawnAoe::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(GA_Earthquake_C_SpawnAoe, CallFunc_BreakHitResult_Distance) == 0x0000F8, "Member 'GA_Earthquake_C_SpawnAoe::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(GA_Earthquake_C_SpawnAoe, CallFunc_BreakHitResult_Location) == 0x000100, "Member 'GA_Earthquake_C_SpawnAoe::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(GA_Earthquake_C_SpawnAoe, CallFunc_BreakHitResult_ImpactPoint) == 0x000118, "Member 'GA_Earthquake_C_SpawnAoe::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(GA_Earthquake_C_SpawnAoe, CallFunc_BreakHitResult_Normal) == 0x000130, "Member 'GA_Earthquake_C_SpawnAoe::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(GA_Earthquake_C_SpawnAoe, CallFunc_BreakHitResult_ImpactNormal) == 0x000148, "Member 'GA_Earthquake_C_SpawnAoe::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(GA_Earthquake_C_SpawnAoe, CallFunc_BreakHitResult_PhysMat) == 0x000160, "Member 'GA_Earthquake_C_SpawnAoe::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(GA_Earthquake_C_SpawnAoe, CallFunc_BreakHitResult_HitActor) == 0x000168, "Member 'GA_Earthquake_C_SpawnAoe::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(GA_Earthquake_C_SpawnAoe, CallFunc_BreakHitResult_HitComponent) == 0x000170, "Member 'GA_Earthquake_C_SpawnAoe::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(GA_Earthquake_C_SpawnAoe, CallFunc_BreakHitResult_HitBoneName) == 0x000178, "Member 'GA_Earthquake_C_SpawnAoe::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(GA_Earthquake_C_SpawnAoe, CallFunc_BreakHitResult_BoneName) == 0x000180, "Member 'GA_Earthquake_C_SpawnAoe::CallFunc_BreakHitResult_BoneName' has a wrong offset!");
static_assert(offsetof(GA_Earthquake_C_SpawnAoe, CallFunc_BreakHitResult_HitItem) == 0x000188, "Member 'GA_Earthquake_C_SpawnAoe::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(GA_Earthquake_C_SpawnAoe, CallFunc_BreakHitResult_ElementIndex) == 0x00018C, "Member 'GA_Earthquake_C_SpawnAoe::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(GA_Earthquake_C_SpawnAoe, CallFunc_BreakHitResult_FaceIndex) == 0x000190, "Member 'GA_Earthquake_C_SpawnAoe::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(GA_Earthquake_C_SpawnAoe, CallFunc_BreakHitResult_TraceStart) == 0x000198, "Member 'GA_Earthquake_C_SpawnAoe::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(GA_Earthquake_C_SpawnAoe, CallFunc_BreakHitResult_TraceEnd) == 0x0001B0, "Member 'GA_Earthquake_C_SpawnAoe::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(GA_Earthquake_C_SpawnAoe, CallFunc_IsValid_ReturnValue) == 0x0001C8, "Member 'GA_Earthquake_C_SpawnAoe::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Earthquake_C_SpawnAoe, CallFunc_Add_VectorVector_ReturnValue) == 0x0001D0, "Member 'GA_Earthquake_C_SpawnAoe::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Earthquake_C_SpawnAoe, CallFunc_MakeTransform_ReturnValue) == 0x0001F0, "Member 'GA_Earthquake_C_SpawnAoe::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Earthquake_C_SpawnAoe, CallFunc_K2_HasAuthority_ReturnValue) == 0x000250, "Member 'GA_Earthquake_C_SpawnAoe::CallFunc_K2_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Earthquake_C_SpawnAoe, K2Node_DynamicCast_AsBP_AOE_Earthquake) == 0x000258, "Member 'GA_Earthquake_C_SpawnAoe::K2Node_DynamicCast_AsBP_AOE_Earthquake' has a wrong offset!");
static_assert(offsetof(GA_Earthquake_C_SpawnAoe, K2Node_DynamicCast_bSuccess) == 0x000260, "Member 'GA_Earthquake_C_SpawnAoe::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Earthquake_C_SpawnAoe, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000268, "Member 'GA_Earthquake_C_SpawnAoe::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Earthquake_C_SpawnAoe, K2Node_DynamicCast_AsDCCharacter_Base) == 0x000270, "Member 'GA_Earthquake_C_SpawnAoe::K2Node_DynamicCast_AsDCCharacter_Base' has a wrong offset!");
static_assert(offsetof(GA_Earthquake_C_SpawnAoe, K2Node_DynamicCast_bSuccess_1) == 0x000278, "Member 'GA_Earthquake_C_SpawnAoe::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GA_Earthquake_C_SpawnAoe, CallFunc_SpawnAoeDeferred_bSuccessfully) == 0x000279, "Member 'GA_Earthquake_C_SpawnAoe::CallFunc_SpawnAoeDeferred_bSuccessfully' has a wrong offset!");
static_assert(offsetof(GA_Earthquake_C_SpawnAoe, CallFunc_SpawnAoeDeferred_ReturnValue) == 0x000280, "Member 'GA_Earthquake_C_SpawnAoe::CallFunc_SpawnAoeDeferred_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Earthquake_C_SpawnAoe, CallFunc_DeferredAoeFinish_bSuccessfully) == 0x000288, "Member 'GA_Earthquake_C_SpawnAoe::CallFunc_DeferredAoeFinish_bSuccessfully' has a wrong offset!");
static_assert(offsetof(GA_Earthquake_C_SpawnAoe, Temp_struct_Variable) == 0x000290, "Member 'GA_Earthquake_C_SpawnAoe::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GA_Earthquake_C_SpawnAoe, CallFunc_SetAoeData_Radius_ImplicitCast) == 0x000340, "Member 'GA_Earthquake_C_SpawnAoe::CallFunc_SetAoeData_Radius_ImplicitCast' has a wrong offset!");

}

