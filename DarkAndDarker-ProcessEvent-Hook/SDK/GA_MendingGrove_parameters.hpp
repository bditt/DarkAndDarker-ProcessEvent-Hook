#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_MendingGrove

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function GA_MendingGrove.GA_MendingGrove_C.AbilityActivated_BP
// 0x00B8 (0x00B8 - 0x0000)
struct GA_MendingGrove_C_AbilityActivated_BP final
{
public:
	struct FGameplayEventData                     TriggerEventData;                                  // 0x0000(0x00B0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          bIsSocketSightBlocked;                             // 0x00B0(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_MendingGrove_C_AbilityActivated_BP) == 0x000008, "Wrong alignment on GA_MendingGrove_C_AbilityActivated_BP");
static_assert(sizeof(GA_MendingGrove_C_AbilityActivated_BP) == 0x0000B8, "Wrong size on GA_MendingGrove_C_AbilityActivated_BP");
static_assert(offsetof(GA_MendingGrove_C_AbilityActivated_BP, TriggerEventData) == 0x000000, "Member 'GA_MendingGrove_C_AbilityActivated_BP::TriggerEventData' has a wrong offset!");
static_assert(offsetof(GA_MendingGrove_C_AbilityActivated_BP, bIsSocketSightBlocked) == 0x0000B0, "Member 'GA_MendingGrove_C_AbilityActivated_BP::bIsSocketSightBlocked' has a wrong offset!");

// Function GA_MendingGrove.GA_MendingGrove_C.ExecuteUbergraph_GA_MendingGrove
// 0x0340 (0x0340 - 0x0000)
struct GA_MendingGrove_C_ExecuteUbergraph_GA_MendingGrove final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetAreaRadius_ReturnValue;                // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     Temp_struct_Variable;                              // 0x0008(0x00B0)(ConstParm)
	struct FGameplayEventData                     K2Node_Event_TriggerEventData;                     // 0x00B8(0x00B0)(ConstParm)
	bool                                          K2Node_Event_bIsSocketSightBlocked;                // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5849[0x7];                                     // 0x0169(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x0170(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityActorInfo              CallFunc_GetActorInfo_ReturnValue;                 // 0x0178(0x0048)(ContainsInstancedReference)
	class UCharacterMovementComponent*            K2Node_DynamicCast_As_____________;                // 0x01C0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x01C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsMovingOnGround_ReturnValue;             // 0x01C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x01CA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x01CB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Time;                      // 0x01CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x01D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_584A[0x4];                                     // 0x01D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x01D8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x01F0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x0208(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x0220(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x0238(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x0240(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x0248(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0250(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_BoneName;                  // 0x0258(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0260(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x0264(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x0268(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_584B[0x4];                                     // 0x026C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x0270(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x0288(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotFromZ_ReturnValue;                 // 0x02A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_584C[0x8];                                     // 0x02B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x02C0(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0320(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_Aoe_MendingGrove_C*                 CallFunc_FinishSpawningActor_ReturnValue;          // 0x0328(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_SetDoublePropertyByName_Value_ImplicitCast; // 0x0330(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_MendingGrove_C_ExecuteUbergraph_GA_MendingGrove) == 0x000010, "Wrong alignment on GA_MendingGrove_C_ExecuteUbergraph_GA_MendingGrove");
static_assert(sizeof(GA_MendingGrove_C_ExecuteUbergraph_GA_MendingGrove) == 0x000340, "Wrong size on GA_MendingGrove_C_ExecuteUbergraph_GA_MendingGrove");
static_assert(offsetof(GA_MendingGrove_C_ExecuteUbergraph_GA_MendingGrove, EntryPoint) == 0x000000, "Member 'GA_MendingGrove_C_ExecuteUbergraph_GA_MendingGrove::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_MendingGrove_C_ExecuteUbergraph_GA_MendingGrove, CallFunc_GetAreaRadius_ReturnValue) == 0x000004, "Member 'GA_MendingGrove_C_ExecuteUbergraph_GA_MendingGrove::CallFunc_GetAreaRadius_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_MendingGrove_C_ExecuteUbergraph_GA_MendingGrove, Temp_struct_Variable) == 0x000008, "Member 'GA_MendingGrove_C_ExecuteUbergraph_GA_MendingGrove::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GA_MendingGrove_C_ExecuteUbergraph_GA_MendingGrove, K2Node_Event_TriggerEventData) == 0x0000B8, "Member 'GA_MendingGrove_C_ExecuteUbergraph_GA_MendingGrove::K2Node_Event_TriggerEventData' has a wrong offset!");
static_assert(offsetof(GA_MendingGrove_C_ExecuteUbergraph_GA_MendingGrove, K2Node_Event_bIsSocketSightBlocked) == 0x000168, "Member 'GA_MendingGrove_C_ExecuteUbergraph_GA_MendingGrove::K2Node_Event_bIsSocketSightBlocked' has a wrong offset!");
static_assert(offsetof(GA_MendingGrove_C_ExecuteUbergraph_GA_MendingGrove, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000170, "Member 'GA_MendingGrove_C_ExecuteUbergraph_GA_MendingGrove::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_MendingGrove_C_ExecuteUbergraph_GA_MendingGrove, CallFunc_GetActorInfo_ReturnValue) == 0x000178, "Member 'GA_MendingGrove_C_ExecuteUbergraph_GA_MendingGrove::CallFunc_GetActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_MendingGrove_C_ExecuteUbergraph_GA_MendingGrove, K2Node_DynamicCast_As_____________) == 0x0001C0, "Member 'GA_MendingGrove_C_ExecuteUbergraph_GA_MendingGrove::K2Node_DynamicCast_As_____________' has a wrong offset!");
static_assert(offsetof(GA_MendingGrove_C_ExecuteUbergraph_GA_MendingGrove, K2Node_DynamicCast_bSuccess) == 0x0001C8, "Member 'GA_MendingGrove_C_ExecuteUbergraph_GA_MendingGrove::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_MendingGrove_C_ExecuteUbergraph_GA_MendingGrove, CallFunc_IsMovingOnGround_ReturnValue) == 0x0001C9, "Member 'GA_MendingGrove_C_ExecuteUbergraph_GA_MendingGrove::CallFunc_IsMovingOnGround_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_MendingGrove_C_ExecuteUbergraph_GA_MendingGrove, CallFunc_BreakHitResult_bBlockingHit) == 0x0001CA, "Member 'GA_MendingGrove_C_ExecuteUbergraph_GA_MendingGrove::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(GA_MendingGrove_C_ExecuteUbergraph_GA_MendingGrove, CallFunc_BreakHitResult_bInitialOverlap) == 0x0001CB, "Member 'GA_MendingGrove_C_ExecuteUbergraph_GA_MendingGrove::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(GA_MendingGrove_C_ExecuteUbergraph_GA_MendingGrove, CallFunc_BreakHitResult_Time) == 0x0001CC, "Member 'GA_MendingGrove_C_ExecuteUbergraph_GA_MendingGrove::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(GA_MendingGrove_C_ExecuteUbergraph_GA_MendingGrove, CallFunc_BreakHitResult_Distance) == 0x0001D0, "Member 'GA_MendingGrove_C_ExecuteUbergraph_GA_MendingGrove::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(GA_MendingGrove_C_ExecuteUbergraph_GA_MendingGrove, CallFunc_BreakHitResult_Location) == 0x0001D8, "Member 'GA_MendingGrove_C_ExecuteUbergraph_GA_MendingGrove::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(GA_MendingGrove_C_ExecuteUbergraph_GA_MendingGrove, CallFunc_BreakHitResult_ImpactPoint) == 0x0001F0, "Member 'GA_MendingGrove_C_ExecuteUbergraph_GA_MendingGrove::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(GA_MendingGrove_C_ExecuteUbergraph_GA_MendingGrove, CallFunc_BreakHitResult_Normal) == 0x000208, "Member 'GA_MendingGrove_C_ExecuteUbergraph_GA_MendingGrove::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(GA_MendingGrove_C_ExecuteUbergraph_GA_MendingGrove, CallFunc_BreakHitResult_ImpactNormal) == 0x000220, "Member 'GA_MendingGrove_C_ExecuteUbergraph_GA_MendingGrove::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(GA_MendingGrove_C_ExecuteUbergraph_GA_MendingGrove, CallFunc_BreakHitResult_PhysMat) == 0x000238, "Member 'GA_MendingGrove_C_ExecuteUbergraph_GA_MendingGrove::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(GA_MendingGrove_C_ExecuteUbergraph_GA_MendingGrove, CallFunc_BreakHitResult_HitActor) == 0x000240, "Member 'GA_MendingGrove_C_ExecuteUbergraph_GA_MendingGrove::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(GA_MendingGrove_C_ExecuteUbergraph_GA_MendingGrove, CallFunc_BreakHitResult_HitComponent) == 0x000248, "Member 'GA_MendingGrove_C_ExecuteUbergraph_GA_MendingGrove::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(GA_MendingGrove_C_ExecuteUbergraph_GA_MendingGrove, CallFunc_BreakHitResult_HitBoneName) == 0x000250, "Member 'GA_MendingGrove_C_ExecuteUbergraph_GA_MendingGrove::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(GA_MendingGrove_C_ExecuteUbergraph_GA_MendingGrove, CallFunc_BreakHitResult_BoneName) == 0x000258, "Member 'GA_MendingGrove_C_ExecuteUbergraph_GA_MendingGrove::CallFunc_BreakHitResult_BoneName' has a wrong offset!");
static_assert(offsetof(GA_MendingGrove_C_ExecuteUbergraph_GA_MendingGrove, CallFunc_BreakHitResult_HitItem) == 0x000260, "Member 'GA_MendingGrove_C_ExecuteUbergraph_GA_MendingGrove::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(GA_MendingGrove_C_ExecuteUbergraph_GA_MendingGrove, CallFunc_BreakHitResult_ElementIndex) == 0x000264, "Member 'GA_MendingGrove_C_ExecuteUbergraph_GA_MendingGrove::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(GA_MendingGrove_C_ExecuteUbergraph_GA_MendingGrove, CallFunc_BreakHitResult_FaceIndex) == 0x000268, "Member 'GA_MendingGrove_C_ExecuteUbergraph_GA_MendingGrove::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(GA_MendingGrove_C_ExecuteUbergraph_GA_MendingGrove, CallFunc_BreakHitResult_TraceStart) == 0x000270, "Member 'GA_MendingGrove_C_ExecuteUbergraph_GA_MendingGrove::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(GA_MendingGrove_C_ExecuteUbergraph_GA_MendingGrove, CallFunc_BreakHitResult_TraceEnd) == 0x000288, "Member 'GA_MendingGrove_C_ExecuteUbergraph_GA_MendingGrove::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(GA_MendingGrove_C_ExecuteUbergraph_GA_MendingGrove, CallFunc_MakeRotFromZ_ReturnValue) == 0x0002A0, "Member 'GA_MendingGrove_C_ExecuteUbergraph_GA_MendingGrove::CallFunc_MakeRotFromZ_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_MendingGrove_C_ExecuteUbergraph_GA_MendingGrove, CallFunc_MakeTransform_ReturnValue) == 0x0002C0, "Member 'GA_MendingGrove_C_ExecuteUbergraph_GA_MendingGrove::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_MendingGrove_C_ExecuteUbergraph_GA_MendingGrove, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000320, "Member 'GA_MendingGrove_C_ExecuteUbergraph_GA_MendingGrove::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_MendingGrove_C_ExecuteUbergraph_GA_MendingGrove, CallFunc_FinishSpawningActor_ReturnValue) == 0x000328, "Member 'GA_MendingGrove_C_ExecuteUbergraph_GA_MendingGrove::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_MendingGrove_C_ExecuteUbergraph_GA_MendingGrove, CallFunc_SetDoublePropertyByName_Value_ImplicitCast) == 0x000330, "Member 'GA_MendingGrove_C_ExecuteUbergraph_GA_MendingGrove::CallFunc_SetDoublePropertyByName_Value_ImplicitCast' has a wrong offset!");

}

