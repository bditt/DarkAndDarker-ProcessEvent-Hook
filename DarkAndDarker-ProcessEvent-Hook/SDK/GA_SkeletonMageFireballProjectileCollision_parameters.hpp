#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_SkeletonMageFireballProjectileCollision

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GA_SkeletonMageFireballProjectileCollision.GA_SkeletonMageFireballProjectileCollision_C.ExecuteUbergraph_GA_SkeletonMageFireballProjectileCollision
// 0x0320 (0x0320 - 0x0000)
struct GA_SkeletonMageFireballProjectileCollision_C_ExecuteUbergraph_GA_SkeletonMageFireballProjectileCollision final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidClass_ReturnValue;                 // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54CC[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<EObjectTypeQuery>                      K2Node_MakeArray_Array;                            // 0x0010(0x0010)(ConstParm, ReferenceParm)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54CD[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         K2Node_MakeArray_Array_1;                          // 0x0030(0x0010)(ConstParm, ReferenceParm)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54CE[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_Event_Hit;                                  // 0x0048(0x00E8)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1; // 0x0130(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AProjectileActor*                       K2Node_DynamicCast_AsProjectile_Actor;             // 0x0138(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x0141(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x0142(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54CF[0x1];                                     // 0x0143(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x0144(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54D0[0x4];                                     // 0x014C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x0150(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x0168(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x0180(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x0198(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x01B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x01B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x01C0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x01C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_BoneName;                  // 0x01D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x01D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x01DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x01E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54D1[0x4];                                     // 0x01E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x01E8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x0200(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         CallFunc_SphereOverlapActors_OutActors;            // 0x0218(0x0010)(ReferenceParm)
	bool                                          CallFunc_SphereOverlapActors_ReturnValue;          // 0x0228(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54D2[0x7];                                     // 0x0229(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_DCMonsterBaseWithOptions_C*         K2Node_DynamicCast_AsBP_DCMonster_Base_with_Options; // 0x0230(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0238(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54D3[0x7];                                     // 0x0239(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0240(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CheckGradeType_ReturnValue;               // 0x0248(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54D4[0x7];                                     // 0x0249(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_MakeStruct_GameplayEventData;               // 0x0250(0x00B0)()
	TArray<struct FActiveGameplayEffectHandle>    CallFunc_ApplyPremadeSpecArray_ReturnValue;        // 0x0300(0x0010)(ReferenceParm)
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0x0310(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0318(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x031C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x031D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_SkeletonMageFireballProjectileCollision_C_ExecuteUbergraph_GA_SkeletonMageFireballProjectileCollision) == 0x000008, "Wrong alignment on GA_SkeletonMageFireballProjectileCollision_C_ExecuteUbergraph_GA_SkeletonMageFireballProjectileCollision");
static_assert(sizeof(GA_SkeletonMageFireballProjectileCollision_C_ExecuteUbergraph_GA_SkeletonMageFireballProjectileCollision) == 0x000320, "Wrong size on GA_SkeletonMageFireballProjectileCollision_C_ExecuteUbergraph_GA_SkeletonMageFireballProjectileCollision");
static_assert(offsetof(GA_SkeletonMageFireballProjectileCollision_C_ExecuteUbergraph_GA_SkeletonMageFireballProjectileCollision, EntryPoint) == 0x000000, "Member 'GA_SkeletonMageFireballProjectileCollision_C_ExecuteUbergraph_GA_SkeletonMageFireballProjectileCollision::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_SkeletonMageFireballProjectileCollision_C_ExecuteUbergraph_GA_SkeletonMageFireballProjectileCollision, Temp_int_Array_Index_Variable) == 0x000004, "Member 'GA_SkeletonMageFireballProjectileCollision_C_ExecuteUbergraph_GA_SkeletonMageFireballProjectileCollision::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(GA_SkeletonMageFireballProjectileCollision_C_ExecuteUbergraph_GA_SkeletonMageFireballProjectileCollision, CallFunc_IsValidClass_ReturnValue) == 0x000008, "Member 'GA_SkeletonMageFireballProjectileCollision_C_ExecuteUbergraph_GA_SkeletonMageFireballProjectileCollision::CallFunc_IsValidClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SkeletonMageFireballProjectileCollision_C_ExecuteUbergraph_GA_SkeletonMageFireballProjectileCollision, K2Node_MakeArray_Array) == 0x000010, "Member 'GA_SkeletonMageFireballProjectileCollision_C_ExecuteUbergraph_GA_SkeletonMageFireballProjectileCollision::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(GA_SkeletonMageFireballProjectileCollision_C_ExecuteUbergraph_GA_SkeletonMageFireballProjectileCollision, Temp_int_Loop_Counter_Variable) == 0x000020, "Member 'GA_SkeletonMageFireballProjectileCollision_C_ExecuteUbergraph_GA_SkeletonMageFireballProjectileCollision::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(GA_SkeletonMageFireballProjectileCollision_C_ExecuteUbergraph_GA_SkeletonMageFireballProjectileCollision, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000028, "Member 'GA_SkeletonMageFireballProjectileCollision_C_ExecuteUbergraph_GA_SkeletonMageFireballProjectileCollision::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SkeletonMageFireballProjectileCollision_C_ExecuteUbergraph_GA_SkeletonMageFireballProjectileCollision, K2Node_MakeArray_Array_1) == 0x000030, "Member 'GA_SkeletonMageFireballProjectileCollision_C_ExecuteUbergraph_GA_SkeletonMageFireballProjectileCollision::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(GA_SkeletonMageFireballProjectileCollision_C_ExecuteUbergraph_GA_SkeletonMageFireballProjectileCollision, CallFunc_Add_IntInt_ReturnValue) == 0x000040, "Member 'GA_SkeletonMageFireballProjectileCollision_C_ExecuteUbergraph_GA_SkeletonMageFireballProjectileCollision::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SkeletonMageFireballProjectileCollision_C_ExecuteUbergraph_GA_SkeletonMageFireballProjectileCollision, K2Node_Event_Hit) == 0x000048, "Member 'GA_SkeletonMageFireballProjectileCollision_C_ExecuteUbergraph_GA_SkeletonMageFireballProjectileCollision::K2Node_Event_Hit' has a wrong offset!");
static_assert(offsetof(GA_SkeletonMageFireballProjectileCollision_C_ExecuteUbergraph_GA_SkeletonMageFireballProjectileCollision, CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1) == 0x000130, "Member 'GA_SkeletonMageFireballProjectileCollision_C_ExecuteUbergraph_GA_SkeletonMageFireballProjectileCollision::CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_SkeletonMageFireballProjectileCollision_C_ExecuteUbergraph_GA_SkeletonMageFireballProjectileCollision, K2Node_DynamicCast_AsProjectile_Actor) == 0x000138, "Member 'GA_SkeletonMageFireballProjectileCollision_C_ExecuteUbergraph_GA_SkeletonMageFireballProjectileCollision::K2Node_DynamicCast_AsProjectile_Actor' has a wrong offset!");
static_assert(offsetof(GA_SkeletonMageFireballProjectileCollision_C_ExecuteUbergraph_GA_SkeletonMageFireballProjectileCollision, K2Node_DynamicCast_bSuccess) == 0x000140, "Member 'GA_SkeletonMageFireballProjectileCollision_C_ExecuteUbergraph_GA_SkeletonMageFireballProjectileCollision::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_SkeletonMageFireballProjectileCollision_C_ExecuteUbergraph_GA_SkeletonMageFireballProjectileCollision, CallFunc_BreakHitResult_bBlockingHit) == 0x000141, "Member 'GA_SkeletonMageFireballProjectileCollision_C_ExecuteUbergraph_GA_SkeletonMageFireballProjectileCollision::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(GA_SkeletonMageFireballProjectileCollision_C_ExecuteUbergraph_GA_SkeletonMageFireballProjectileCollision, CallFunc_BreakHitResult_bInitialOverlap) == 0x000142, "Member 'GA_SkeletonMageFireballProjectileCollision_C_ExecuteUbergraph_GA_SkeletonMageFireballProjectileCollision::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(GA_SkeletonMageFireballProjectileCollision_C_ExecuteUbergraph_GA_SkeletonMageFireballProjectileCollision, CallFunc_BreakHitResult_Time) == 0x000144, "Member 'GA_SkeletonMageFireballProjectileCollision_C_ExecuteUbergraph_GA_SkeletonMageFireballProjectileCollision::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(GA_SkeletonMageFireballProjectileCollision_C_ExecuteUbergraph_GA_SkeletonMageFireballProjectileCollision, CallFunc_BreakHitResult_Distance) == 0x000148, "Member 'GA_SkeletonMageFireballProjectileCollision_C_ExecuteUbergraph_GA_SkeletonMageFireballProjectileCollision::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(GA_SkeletonMageFireballProjectileCollision_C_ExecuteUbergraph_GA_SkeletonMageFireballProjectileCollision, CallFunc_BreakHitResult_Location) == 0x000150, "Member 'GA_SkeletonMageFireballProjectileCollision_C_ExecuteUbergraph_GA_SkeletonMageFireballProjectileCollision::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(GA_SkeletonMageFireballProjectileCollision_C_ExecuteUbergraph_GA_SkeletonMageFireballProjectileCollision, CallFunc_BreakHitResult_ImpactPoint) == 0x000168, "Member 'GA_SkeletonMageFireballProjectileCollision_C_ExecuteUbergraph_GA_SkeletonMageFireballProjectileCollision::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(GA_SkeletonMageFireballProjectileCollision_C_ExecuteUbergraph_GA_SkeletonMageFireballProjectileCollision, CallFunc_BreakHitResult_Normal) == 0x000180, "Member 'GA_SkeletonMageFireballProjectileCollision_C_ExecuteUbergraph_GA_SkeletonMageFireballProjectileCollision::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(GA_SkeletonMageFireballProjectileCollision_C_ExecuteUbergraph_GA_SkeletonMageFireballProjectileCollision, CallFunc_BreakHitResult_ImpactNormal) == 0x000198, "Member 'GA_SkeletonMageFireballProjectileCollision_C_ExecuteUbergraph_GA_SkeletonMageFireballProjectileCollision::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(GA_SkeletonMageFireballProjectileCollision_C_ExecuteUbergraph_GA_SkeletonMageFireballProjectileCollision, CallFunc_BreakHitResult_PhysMat) == 0x0001B0, "Member 'GA_SkeletonMageFireballProjectileCollision_C_ExecuteUbergraph_GA_SkeletonMageFireballProjectileCollision::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(GA_SkeletonMageFireballProjectileCollision_C_ExecuteUbergraph_GA_SkeletonMageFireballProjectileCollision, CallFunc_BreakHitResult_HitActor) == 0x0001B8, "Member 'GA_SkeletonMageFireballProjectileCollision_C_ExecuteUbergraph_GA_SkeletonMageFireballProjectileCollision::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(GA_SkeletonMageFireballProjectileCollision_C_ExecuteUbergraph_GA_SkeletonMageFireballProjectileCollision, CallFunc_BreakHitResult_HitComponent) == 0x0001C0, "Member 'GA_SkeletonMageFireballProjectileCollision_C_ExecuteUbergraph_GA_SkeletonMageFireballProjectileCollision::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(GA_SkeletonMageFireballProjectileCollision_C_ExecuteUbergraph_GA_SkeletonMageFireballProjectileCollision, CallFunc_BreakHitResult_HitBoneName) == 0x0001C8, "Member 'GA_SkeletonMageFireballProjectileCollision_C_ExecuteUbergraph_GA_SkeletonMageFireballProjectileCollision::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(GA_SkeletonMageFireballProjectileCollision_C_ExecuteUbergraph_GA_SkeletonMageFireballProjectileCollision, CallFunc_BreakHitResult_BoneName) == 0x0001D0, "Member 'GA_SkeletonMageFireballProjectileCollision_C_ExecuteUbergraph_GA_SkeletonMageFireballProjectileCollision::CallFunc_BreakHitResult_BoneName' has a wrong offset!");
static_assert(offsetof(GA_SkeletonMageFireballProjectileCollision_C_ExecuteUbergraph_GA_SkeletonMageFireballProjectileCollision, CallFunc_BreakHitResult_HitItem) == 0x0001D8, "Member 'GA_SkeletonMageFireballProjectileCollision_C_ExecuteUbergraph_GA_SkeletonMageFireballProjectileCollision::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(GA_SkeletonMageFireballProjectileCollision_C_ExecuteUbergraph_GA_SkeletonMageFireballProjectileCollision, CallFunc_BreakHitResult_ElementIndex) == 0x0001DC, "Member 'GA_SkeletonMageFireballProjectileCollision_C_ExecuteUbergraph_GA_SkeletonMageFireballProjectileCollision::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(GA_SkeletonMageFireballProjectileCollision_C_ExecuteUbergraph_GA_SkeletonMageFireballProjectileCollision, CallFunc_BreakHitResult_FaceIndex) == 0x0001E0, "Member 'GA_SkeletonMageFireballProjectileCollision_C_ExecuteUbergraph_GA_SkeletonMageFireballProjectileCollision::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(GA_SkeletonMageFireballProjectileCollision_C_ExecuteUbergraph_GA_SkeletonMageFireballProjectileCollision, CallFunc_BreakHitResult_TraceStart) == 0x0001E8, "Member 'GA_SkeletonMageFireballProjectileCollision_C_ExecuteUbergraph_GA_SkeletonMageFireballProjectileCollision::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(GA_SkeletonMageFireballProjectileCollision_C_ExecuteUbergraph_GA_SkeletonMageFireballProjectileCollision, CallFunc_BreakHitResult_TraceEnd) == 0x000200, "Member 'GA_SkeletonMageFireballProjectileCollision_C_ExecuteUbergraph_GA_SkeletonMageFireballProjectileCollision::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(GA_SkeletonMageFireballProjectileCollision_C_ExecuteUbergraph_GA_SkeletonMageFireballProjectileCollision, CallFunc_SphereOverlapActors_OutActors) == 0x000218, "Member 'GA_SkeletonMageFireballProjectileCollision_C_ExecuteUbergraph_GA_SkeletonMageFireballProjectileCollision::CallFunc_SphereOverlapActors_OutActors' has a wrong offset!");
static_assert(offsetof(GA_SkeletonMageFireballProjectileCollision_C_ExecuteUbergraph_GA_SkeletonMageFireballProjectileCollision, CallFunc_SphereOverlapActors_ReturnValue) == 0x000228, "Member 'GA_SkeletonMageFireballProjectileCollision_C_ExecuteUbergraph_GA_SkeletonMageFireballProjectileCollision::CallFunc_SphereOverlapActors_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SkeletonMageFireballProjectileCollision_C_ExecuteUbergraph_GA_SkeletonMageFireballProjectileCollision, K2Node_DynamicCast_AsBP_DCMonster_Base_with_Options) == 0x000230, "Member 'GA_SkeletonMageFireballProjectileCollision_C_ExecuteUbergraph_GA_SkeletonMageFireballProjectileCollision::K2Node_DynamicCast_AsBP_DCMonster_Base_with_Options' has a wrong offset!");
static_assert(offsetof(GA_SkeletonMageFireballProjectileCollision_C_ExecuteUbergraph_GA_SkeletonMageFireballProjectileCollision, K2Node_DynamicCast_bSuccess_1) == 0x000238, "Member 'GA_SkeletonMageFireballProjectileCollision_C_ExecuteUbergraph_GA_SkeletonMageFireballProjectileCollision::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GA_SkeletonMageFireballProjectileCollision_C_ExecuteUbergraph_GA_SkeletonMageFireballProjectileCollision, CallFunc_Array_Get_Item) == 0x000240, "Member 'GA_SkeletonMageFireballProjectileCollision_C_ExecuteUbergraph_GA_SkeletonMageFireballProjectileCollision::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GA_SkeletonMageFireballProjectileCollision_C_ExecuteUbergraph_GA_SkeletonMageFireballProjectileCollision, CallFunc_CheckGradeType_ReturnValue) == 0x000248, "Member 'GA_SkeletonMageFireballProjectileCollision_C_ExecuteUbergraph_GA_SkeletonMageFireballProjectileCollision::CallFunc_CheckGradeType_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SkeletonMageFireballProjectileCollision_C_ExecuteUbergraph_GA_SkeletonMageFireballProjectileCollision, K2Node_MakeStruct_GameplayEventData) == 0x000250, "Member 'GA_SkeletonMageFireballProjectileCollision_C_ExecuteUbergraph_GA_SkeletonMageFireballProjectileCollision::K2Node_MakeStruct_GameplayEventData' has a wrong offset!");
static_assert(offsetof(GA_SkeletonMageFireballProjectileCollision_C_ExecuteUbergraph_GA_SkeletonMageFireballProjectileCollision, CallFunc_ApplyPremadeSpecArray_ReturnValue) == 0x000300, "Member 'GA_SkeletonMageFireballProjectileCollision_C_ExecuteUbergraph_GA_SkeletonMageFireballProjectileCollision::CallFunc_ApplyPremadeSpecArray_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SkeletonMageFireballProjectileCollision_C_ExecuteUbergraph_GA_SkeletonMageFireballProjectileCollision, CallFunc_GetAbilitySystemComponent_ReturnValue) == 0x000310, "Member 'GA_SkeletonMageFireballProjectileCollision_C_ExecuteUbergraph_GA_SkeletonMageFireballProjectileCollision::CallFunc_GetAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SkeletonMageFireballProjectileCollision_C_ExecuteUbergraph_GA_SkeletonMageFireballProjectileCollision, CallFunc_Array_Length_ReturnValue) == 0x000318, "Member 'GA_SkeletonMageFireballProjectileCollision_C_ExecuteUbergraph_GA_SkeletonMageFireballProjectileCollision::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SkeletonMageFireballProjectileCollision_C_ExecuteUbergraph_GA_SkeletonMageFireballProjectileCollision, CallFunc_IsValid_ReturnValue) == 0x00031C, "Member 'GA_SkeletonMageFireballProjectileCollision_C_ExecuteUbergraph_GA_SkeletonMageFireballProjectileCollision::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SkeletonMageFireballProjectileCollision_C_ExecuteUbergraph_GA_SkeletonMageFireballProjectileCollision, CallFunc_Less_IntInt_ReturnValue) == 0x00031D, "Member 'GA_SkeletonMageFireballProjectileCollision_C_ExecuteUbergraph_GA_SkeletonMageFireballProjectileCollision::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function GA_SkeletonMageFireballProjectileCollision.GA_SkeletonMageFireballProjectileCollision_C.TargetDataReceived
// 0x00E8 (0x00E8 - 0x0000)
struct GA_SkeletonMageFireballProjectileCollision_C_TargetDataReceived final
{
public:
	struct FHitResult                             Hit;                                               // 0x0000(0x00E8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(GA_SkeletonMageFireballProjectileCollision_C_TargetDataReceived) == 0x000008, "Wrong alignment on GA_SkeletonMageFireballProjectileCollision_C_TargetDataReceived");
static_assert(sizeof(GA_SkeletonMageFireballProjectileCollision_C_TargetDataReceived) == 0x0000E8, "Wrong size on GA_SkeletonMageFireballProjectileCollision_C_TargetDataReceived");
static_assert(offsetof(GA_SkeletonMageFireballProjectileCollision_C_TargetDataReceived, Hit) == 0x000000, "Member 'GA_SkeletonMageFireballProjectileCollision_C_TargetDataReceived::Hit' has a wrong offset!");

}

