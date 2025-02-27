#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_FallingIcicle_Activate

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GA_FallingIcicle_Activate.GA_FallingIcicle_Activate_C.AddedOnTarget_78C4AE954970F1F6B54CC4B290BB5C8D
// 0x0008 (0x0008 - 0x0000)
struct GA_FallingIcicle_Activate_C_AddedOnTarget_78C4AE954970F1F6B54CC4B290BB5C8D final
{
public:
	class AActor*                                 TargetActor;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_FallingIcicle_Activate_C_AddedOnTarget_78C4AE954970F1F6B54CC4B290BB5C8D) == 0x000008, "Wrong alignment on GA_FallingIcicle_Activate_C_AddedOnTarget_78C4AE954970F1F6B54CC4B290BB5C8D");
static_assert(sizeof(GA_FallingIcicle_Activate_C_AddedOnTarget_78C4AE954970F1F6B54CC4B290BB5C8D) == 0x000008, "Wrong size on GA_FallingIcicle_Activate_C_AddedOnTarget_78C4AE954970F1F6B54CC4B290BB5C8D");
static_assert(offsetof(GA_FallingIcicle_Activate_C_AddedOnTarget_78C4AE954970F1F6B54CC4B290BB5C8D, TargetActor) == 0x000000, "Member 'GA_FallingIcicle_Activate_C_AddedOnTarget_78C4AE954970F1F6B54CC4B290BB5C8D::TargetActor' has a wrong offset!");

// Function GA_FallingIcicle_Activate.GA_FallingIcicle_Activate_C.ExecuteUbergraph_GA_FallingIcicle_Activate
// 0x0430 (0x0430 - 0x0000)
struct GA_FallingIcicle_Activate_C_ExecuteUbergraph_GA_FallingIcicle_Activate final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5638[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     Temp_struct_Variable;                              // 0x0008(0x00B0)(ConstParm)
	TArray<struct FActiveGameplayEffectHandle>    CallFunc_ApplyEffectContainer_ReturnValue;         // 0x00B8(0x0010)(ReferenceParm)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x00C8(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_CustomEvent_ProjectileActor;                // 0x00D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class AActor* ProjectileActor)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x00E0(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Temp_object_Variable;                              // 0x00F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     Temp_struct_Variable_1;                            // 0x00F8(0x00B0)(ConstParm)
	class ABP_FallingIcicleProjectile_C*          K2Node_DynamicCast_AsBP_Falling_Icicle_Projectile; // 0x01A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5639[0x7];                                     // 0x01B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Conv_DoubleToVector_ReturnValue;          // 0x01B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_CustomEvent_TargetActor;                    // 0x01D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class AActor* TargetActor)>    K2Node_CreateDelegate_OutputDelegate_2;            // 0x01D8(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x01E8(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UDCAT_WaitGameplayTagsAdded*            CallFunc_WaitGameplayTagsAdded_ReturnValue;        // 0x01F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     Temp_struct_Variable_2;                            // 0x0200(0x00B0)(ConstParm)
	TArray<struct FActiveGameplayEffectHandle>    CallFunc_ApplyEffectContainer_ReturnValue_1;       // 0x02B0(0x0010)(ReferenceParm)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x02C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bWasCancelled;                        // 0x02C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_563A[0x6];                                     // 0x02C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x02C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_FallingIcicleActor_C*               K2Node_DynamicCast_AsBP_Falling_Icicle_Actor;      // 0x02D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x02D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_563B[0x3];                                     // 0x02D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;            // 0x02DC(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_563C[0x4];                                     // 0x02EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetActorUpVector_ReturnValue;             // 0x02F0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x0308(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentScale_ReturnValue;         // 0x0320(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_Conv_VectorToRotator_ReturnValue;         // 0x0338(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0350(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_563D[0x8];                                     // 0x0368(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0370(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDCAT_SpawnProjectile*                  CallFunc_SpawnProjectile_ReturnValue;              // 0x03D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_RandomFloatInRange_ReturnValue;           // 0x03D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGameplayTaskOwnerInterface> CallFunc_TaskWaitDelay_TaskOwner_CastInput;        // 0x03E0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UGameplayTask_WaitDelay*                CallFunc_TaskWaitDelay_ReturnValue;                // 0x03F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x03F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x03F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_563E[0x6];                                     // 0x03FA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IGameplayTaskOwnerInterface> CallFunc_TaskWaitDelay_TaskOwner_CastInput_1;      // 0x0400(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UGameplayTask_WaitDelay*                CallFunc_TaskWaitDelay_ReturnValue_1;              // 0x0410(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1; // 0x0418(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0420(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_563F[0x3];                                     // 0x0421(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_TaskWaitDelay_Time_ImplicitCast;          // 0x0424(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_FallingIcicle_Activate_C_ExecuteUbergraph_GA_FallingIcicle_Activate) == 0x000010, "Wrong alignment on GA_FallingIcicle_Activate_C_ExecuteUbergraph_GA_FallingIcicle_Activate");
static_assert(sizeof(GA_FallingIcicle_Activate_C_ExecuteUbergraph_GA_FallingIcicle_Activate) == 0x000430, "Wrong size on GA_FallingIcicle_Activate_C_ExecuteUbergraph_GA_FallingIcicle_Activate");
static_assert(offsetof(GA_FallingIcicle_Activate_C_ExecuteUbergraph_GA_FallingIcicle_Activate, EntryPoint) == 0x000000, "Member 'GA_FallingIcicle_Activate_C_ExecuteUbergraph_GA_FallingIcicle_Activate::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_FallingIcicle_Activate_C_ExecuteUbergraph_GA_FallingIcicle_Activate, Temp_struct_Variable) == 0x000008, "Member 'GA_FallingIcicle_Activate_C_ExecuteUbergraph_GA_FallingIcicle_Activate::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GA_FallingIcicle_Activate_C_ExecuteUbergraph_GA_FallingIcicle_Activate, CallFunc_ApplyEffectContainer_ReturnValue) == 0x0000B8, "Member 'GA_FallingIcicle_Activate_C_ExecuteUbergraph_GA_FallingIcicle_Activate::CallFunc_ApplyEffectContainer_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_FallingIcicle_Activate_C_ExecuteUbergraph_GA_FallingIcicle_Activate, K2Node_CreateDelegate_OutputDelegate) == 0x0000C8, "Member 'GA_FallingIcicle_Activate_C_ExecuteUbergraph_GA_FallingIcicle_Activate::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_FallingIcicle_Activate_C_ExecuteUbergraph_GA_FallingIcicle_Activate, K2Node_CustomEvent_ProjectileActor) == 0x0000D8, "Member 'GA_FallingIcicle_Activate_C_ExecuteUbergraph_GA_FallingIcicle_Activate::K2Node_CustomEvent_ProjectileActor' has a wrong offset!");
static_assert(offsetof(GA_FallingIcicle_Activate_C_ExecuteUbergraph_GA_FallingIcicle_Activate, K2Node_CreateDelegate_OutputDelegate_1) == 0x0000E0, "Member 'GA_FallingIcicle_Activate_C_ExecuteUbergraph_GA_FallingIcicle_Activate::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GA_FallingIcicle_Activate_C_ExecuteUbergraph_GA_FallingIcicle_Activate, Temp_object_Variable) == 0x0000F0, "Member 'GA_FallingIcicle_Activate_C_ExecuteUbergraph_GA_FallingIcicle_Activate::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(GA_FallingIcicle_Activate_C_ExecuteUbergraph_GA_FallingIcicle_Activate, Temp_struct_Variable_1) == 0x0000F8, "Member 'GA_FallingIcicle_Activate_C_ExecuteUbergraph_GA_FallingIcicle_Activate::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(GA_FallingIcicle_Activate_C_ExecuteUbergraph_GA_FallingIcicle_Activate, K2Node_DynamicCast_AsBP_Falling_Icicle_Projectile) == 0x0001A8, "Member 'GA_FallingIcicle_Activate_C_ExecuteUbergraph_GA_FallingIcicle_Activate::K2Node_DynamicCast_AsBP_Falling_Icicle_Projectile' has a wrong offset!");
static_assert(offsetof(GA_FallingIcicle_Activate_C_ExecuteUbergraph_GA_FallingIcicle_Activate, K2Node_DynamicCast_bSuccess) == 0x0001B0, "Member 'GA_FallingIcicle_Activate_C_ExecuteUbergraph_GA_FallingIcicle_Activate::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_FallingIcicle_Activate_C_ExecuteUbergraph_GA_FallingIcicle_Activate, CallFunc_Conv_DoubleToVector_ReturnValue) == 0x0001B8, "Member 'GA_FallingIcicle_Activate_C_ExecuteUbergraph_GA_FallingIcicle_Activate::CallFunc_Conv_DoubleToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_FallingIcicle_Activate_C_ExecuteUbergraph_GA_FallingIcicle_Activate, K2Node_CustomEvent_TargetActor) == 0x0001D0, "Member 'GA_FallingIcicle_Activate_C_ExecuteUbergraph_GA_FallingIcicle_Activate::K2Node_CustomEvent_TargetActor' has a wrong offset!");
static_assert(offsetof(GA_FallingIcicle_Activate_C_ExecuteUbergraph_GA_FallingIcicle_Activate, K2Node_CreateDelegate_OutputDelegate_2) == 0x0001D8, "Member 'GA_FallingIcicle_Activate_C_ExecuteUbergraph_GA_FallingIcicle_Activate::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(GA_FallingIcicle_Activate_C_ExecuteUbergraph_GA_FallingIcicle_Activate, K2Node_CreateDelegate_OutputDelegate_3) == 0x0001E8, "Member 'GA_FallingIcicle_Activate_C_ExecuteUbergraph_GA_FallingIcicle_Activate::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(GA_FallingIcicle_Activate_C_ExecuteUbergraph_GA_FallingIcicle_Activate, CallFunc_WaitGameplayTagsAdded_ReturnValue) == 0x0001F8, "Member 'GA_FallingIcicle_Activate_C_ExecuteUbergraph_GA_FallingIcicle_Activate::CallFunc_WaitGameplayTagsAdded_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_FallingIcicle_Activate_C_ExecuteUbergraph_GA_FallingIcicle_Activate, Temp_struct_Variable_2) == 0x000200, "Member 'GA_FallingIcicle_Activate_C_ExecuteUbergraph_GA_FallingIcicle_Activate::Temp_struct_Variable_2' has a wrong offset!");
static_assert(offsetof(GA_FallingIcicle_Activate_C_ExecuteUbergraph_GA_FallingIcicle_Activate, CallFunc_ApplyEffectContainer_ReturnValue_1) == 0x0002B0, "Member 'GA_FallingIcicle_Activate_C_ExecuteUbergraph_GA_FallingIcicle_Activate::CallFunc_ApplyEffectContainer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_FallingIcicle_Activate_C_ExecuteUbergraph_GA_FallingIcicle_Activate, CallFunc_IsValid_ReturnValue) == 0x0002C0, "Member 'GA_FallingIcicle_Activate_C_ExecuteUbergraph_GA_FallingIcicle_Activate::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_FallingIcicle_Activate_C_ExecuteUbergraph_GA_FallingIcicle_Activate, K2Node_Event_bWasCancelled) == 0x0002C1, "Member 'GA_FallingIcicle_Activate_C_ExecuteUbergraph_GA_FallingIcicle_Activate::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GA_FallingIcicle_Activate_C_ExecuteUbergraph_GA_FallingIcicle_Activate, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x0002C8, "Member 'GA_FallingIcicle_Activate_C_ExecuteUbergraph_GA_FallingIcicle_Activate::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_FallingIcicle_Activate_C_ExecuteUbergraph_GA_FallingIcicle_Activate, K2Node_DynamicCast_AsBP_Falling_Icicle_Actor) == 0x0002D0, "Member 'GA_FallingIcicle_Activate_C_ExecuteUbergraph_GA_FallingIcicle_Activate::K2Node_DynamicCast_AsBP_Falling_Icicle_Actor' has a wrong offset!");
static_assert(offsetof(GA_FallingIcicle_Activate_C_ExecuteUbergraph_GA_FallingIcicle_Activate, K2Node_DynamicCast_bSuccess_1) == 0x0002D8, "Member 'GA_FallingIcicle_Activate_C_ExecuteUbergraph_GA_FallingIcicle_Activate::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GA_FallingIcicle_Activate_C_ExecuteUbergraph_GA_FallingIcicle_Activate, K2Node_CreateDelegate_OutputDelegate_4) == 0x0002DC, "Member 'GA_FallingIcicle_Activate_C_ExecuteUbergraph_GA_FallingIcicle_Activate::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(GA_FallingIcicle_Activate_C_ExecuteUbergraph_GA_FallingIcicle_Activate, CallFunc_GetActorUpVector_ReturnValue) == 0x0002F0, "Member 'GA_FallingIcicle_Activate_C_ExecuteUbergraph_GA_FallingIcicle_Activate::CallFunc_GetActorUpVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_FallingIcicle_Activate_C_ExecuteUbergraph_GA_FallingIcicle_Activate, CallFunc_Multiply_VectorVector_ReturnValue) == 0x000308, "Member 'GA_FallingIcicle_Activate_C_ExecuteUbergraph_GA_FallingIcicle_Activate::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_FallingIcicle_Activate_C_ExecuteUbergraph_GA_FallingIcicle_Activate, CallFunc_K2_GetComponentScale_ReturnValue) == 0x000320, "Member 'GA_FallingIcicle_Activate_C_ExecuteUbergraph_GA_FallingIcicle_Activate::CallFunc_K2_GetComponentScale_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_FallingIcicle_Activate_C_ExecuteUbergraph_GA_FallingIcicle_Activate, CallFunc_Conv_VectorToRotator_ReturnValue) == 0x000338, "Member 'GA_FallingIcicle_Activate_C_ExecuteUbergraph_GA_FallingIcicle_Activate::CallFunc_Conv_VectorToRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_FallingIcicle_Activate_C_ExecuteUbergraph_GA_FallingIcicle_Activate, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000350, "Member 'GA_FallingIcicle_Activate_C_ExecuteUbergraph_GA_FallingIcicle_Activate::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_FallingIcicle_Activate_C_ExecuteUbergraph_GA_FallingIcicle_Activate, CallFunc_MakeTransform_ReturnValue) == 0x000370, "Member 'GA_FallingIcicle_Activate_C_ExecuteUbergraph_GA_FallingIcicle_Activate::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_FallingIcicle_Activate_C_ExecuteUbergraph_GA_FallingIcicle_Activate, CallFunc_SpawnProjectile_ReturnValue) == 0x0003D0, "Member 'GA_FallingIcicle_Activate_C_ExecuteUbergraph_GA_FallingIcicle_Activate::CallFunc_SpawnProjectile_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_FallingIcicle_Activate_C_ExecuteUbergraph_GA_FallingIcicle_Activate, CallFunc_RandomFloatInRange_ReturnValue) == 0x0003D8, "Member 'GA_FallingIcicle_Activate_C_ExecuteUbergraph_GA_FallingIcicle_Activate::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_FallingIcicle_Activate_C_ExecuteUbergraph_GA_FallingIcicle_Activate, CallFunc_TaskWaitDelay_TaskOwner_CastInput) == 0x0003E0, "Member 'GA_FallingIcicle_Activate_C_ExecuteUbergraph_GA_FallingIcicle_Activate::CallFunc_TaskWaitDelay_TaskOwner_CastInput' has a wrong offset!");
static_assert(offsetof(GA_FallingIcicle_Activate_C_ExecuteUbergraph_GA_FallingIcicle_Activate, CallFunc_TaskWaitDelay_ReturnValue) == 0x0003F0, "Member 'GA_FallingIcicle_Activate_C_ExecuteUbergraph_GA_FallingIcicle_Activate::CallFunc_TaskWaitDelay_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_FallingIcicle_Activate_C_ExecuteUbergraph_GA_FallingIcicle_Activate, CallFunc_IsValid_ReturnValue_1) == 0x0003F8, "Member 'GA_FallingIcicle_Activate_C_ExecuteUbergraph_GA_FallingIcicle_Activate::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_FallingIcicle_Activate_C_ExecuteUbergraph_GA_FallingIcicle_Activate, CallFunc_IsValid_ReturnValue_2) == 0x0003F9, "Member 'GA_FallingIcicle_Activate_C_ExecuteUbergraph_GA_FallingIcicle_Activate::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_FallingIcicle_Activate_C_ExecuteUbergraph_GA_FallingIcicle_Activate, CallFunc_TaskWaitDelay_TaskOwner_CastInput_1) == 0x000400, "Member 'GA_FallingIcicle_Activate_C_ExecuteUbergraph_GA_FallingIcicle_Activate::CallFunc_TaskWaitDelay_TaskOwner_CastInput_1' has a wrong offset!");
static_assert(offsetof(GA_FallingIcicle_Activate_C_ExecuteUbergraph_GA_FallingIcicle_Activate, CallFunc_TaskWaitDelay_ReturnValue_1) == 0x000410, "Member 'GA_FallingIcicle_Activate_C_ExecuteUbergraph_GA_FallingIcicle_Activate::CallFunc_TaskWaitDelay_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_FallingIcicle_Activate_C_ExecuteUbergraph_GA_FallingIcicle_Activate, CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1) == 0x000418, "Member 'GA_FallingIcicle_Activate_C_ExecuteUbergraph_GA_FallingIcicle_Activate::CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_FallingIcicle_Activate_C_ExecuteUbergraph_GA_FallingIcicle_Activate, CallFunc_IsValid_ReturnValue_3) == 0x000420, "Member 'GA_FallingIcicle_Activate_C_ExecuteUbergraph_GA_FallingIcicle_Activate::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GA_FallingIcicle_Activate_C_ExecuteUbergraph_GA_FallingIcicle_Activate, CallFunc_TaskWaitDelay_Time_ImplicitCast) == 0x000424, "Member 'GA_FallingIcicle_Activate_C_ExecuteUbergraph_GA_FallingIcicle_Activate::CallFunc_TaskWaitDelay_Time_ImplicitCast' has a wrong offset!");

// Function GA_FallingIcicle_Activate.GA_FallingIcicle_Activate_C.FallingIcicleGameplayCueAdd
// 0x01C0 (0x01C0 - 0x0000)
struct GA_FallingIcicle_Activate_C_FallingIcicleGameplayCueAdd final
{
public:
	struct FGameplayTag                           InGameplayCueTag;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_FallingIcicleActor_C*               K2Node_DynamicCast_AsBP_Falling_Icicle_Actor;      // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5640[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x0020(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x0080(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x0098(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x00B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_RotatorToVector_ReturnValue;         // 0x00C8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 CallFunc_MakeGameplayCueParameters_ReturnValue;    // 0x00E0(0x00D8)(ContainsInstancedReference)
};
static_assert(alignof(GA_FallingIcicle_Activate_C_FallingIcicleGameplayCueAdd) == 0x000010, "Wrong alignment on GA_FallingIcicle_Activate_C_FallingIcicleGameplayCueAdd");
static_assert(sizeof(GA_FallingIcicle_Activate_C_FallingIcicleGameplayCueAdd) == 0x0001C0, "Wrong size on GA_FallingIcicle_Activate_C_FallingIcicleGameplayCueAdd");
static_assert(offsetof(GA_FallingIcicle_Activate_C_FallingIcicleGameplayCueAdd, InGameplayCueTag) == 0x000000, "Member 'GA_FallingIcicle_Activate_C_FallingIcicleGameplayCueAdd::InGameplayCueTag' has a wrong offset!");
static_assert(offsetof(GA_FallingIcicle_Activate_C_FallingIcicleGameplayCueAdd, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000008, "Member 'GA_FallingIcicle_Activate_C_FallingIcicleGameplayCueAdd::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_FallingIcicle_Activate_C_FallingIcicleGameplayCueAdd, K2Node_DynamicCast_AsBP_Falling_Icicle_Actor) == 0x000010, "Member 'GA_FallingIcicle_Activate_C_FallingIcicleGameplayCueAdd::K2Node_DynamicCast_AsBP_Falling_Icicle_Actor' has a wrong offset!");
static_assert(offsetof(GA_FallingIcicle_Activate_C_FallingIcicleGameplayCueAdd, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'GA_FallingIcicle_Activate_C_FallingIcicleGameplayCueAdd::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_FallingIcicle_Activate_C_FallingIcicleGameplayCueAdd, CallFunc_K2_GetComponentToWorld_ReturnValue) == 0x000020, "Member 'GA_FallingIcicle_Activate_C_FallingIcicleGameplayCueAdd::CallFunc_K2_GetComponentToWorld_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_FallingIcicle_Activate_C_FallingIcicleGameplayCueAdd, CallFunc_BreakTransform_Location) == 0x000080, "Member 'GA_FallingIcicle_Activate_C_FallingIcicleGameplayCueAdd::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(GA_FallingIcicle_Activate_C_FallingIcicleGameplayCueAdd, CallFunc_BreakTransform_Rotation) == 0x000098, "Member 'GA_FallingIcicle_Activate_C_FallingIcicleGameplayCueAdd::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(GA_FallingIcicle_Activate_C_FallingIcicleGameplayCueAdd, CallFunc_BreakTransform_Scale) == 0x0000B0, "Member 'GA_FallingIcicle_Activate_C_FallingIcicleGameplayCueAdd::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(GA_FallingIcicle_Activate_C_FallingIcicleGameplayCueAdd, CallFunc_Conv_RotatorToVector_ReturnValue) == 0x0000C8, "Member 'GA_FallingIcicle_Activate_C_FallingIcicleGameplayCueAdd::CallFunc_Conv_RotatorToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_FallingIcicle_Activate_C_FallingIcicleGameplayCueAdd, CallFunc_MakeGameplayCueParameters_ReturnValue) == 0x0000E0, "Member 'GA_FallingIcicle_Activate_C_FallingIcicleGameplayCueAdd::CallFunc_MakeGameplayCueParameters_ReturnValue' has a wrong offset!");

// Function GA_FallingIcicle_Activate.GA_FallingIcicle_Activate_C.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct GA_FallingIcicle_Activate_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_FallingIcicle_Activate_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GA_FallingIcicle_Activate_C_K2_OnEndAbility");
static_assert(sizeof(GA_FallingIcicle_Activate_C_K2_OnEndAbility) == 0x000001, "Wrong size on GA_FallingIcicle_Activate_C_K2_OnEndAbility");
static_assert(offsetof(GA_FallingIcicle_Activate_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GA_FallingIcicle_Activate_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

// Function GA_FallingIcicle_Activate.GA_FallingIcicle_Activate_C.OnSuccess_29954CE344F5458C5E8696BD02C3C3FC
// 0x0008 (0x0008 - 0x0000)
struct GA_FallingIcicle_Activate_C_OnSuccess_29954CE344F5458C5E8696BD02C3C3FC final
{
public:
	class AActor*                                 ProjectileActor;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_FallingIcicle_Activate_C_OnSuccess_29954CE344F5458C5E8696BD02C3C3FC) == 0x000008, "Wrong alignment on GA_FallingIcicle_Activate_C_OnSuccess_29954CE344F5458C5E8696BD02C3C3FC");
static_assert(sizeof(GA_FallingIcicle_Activate_C_OnSuccess_29954CE344F5458C5E8696BD02C3C3FC) == 0x000008, "Wrong size on GA_FallingIcicle_Activate_C_OnSuccess_29954CE344F5458C5E8696BD02C3C3FC");
static_assert(offsetof(GA_FallingIcicle_Activate_C_OnSuccess_29954CE344F5458C5E8696BD02C3C3FC, ProjectileActor) == 0x000000, "Member 'GA_FallingIcicle_Activate_C_OnSuccess_29954CE344F5458C5E8696BD02C3C3FC::ProjectileActor' has a wrong offset!");

// Function GA_FallingIcicle_Activate.GA_FallingIcicle_Activate_C.RemoveAllGameplayCue
// 0x0008 (0x0008 - 0x0000)
struct GA_FallingIcicle_Activate_C_RemoveAllGameplayCue final
{
public:
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_FallingIcicle_Activate_C_RemoveAllGameplayCue) == 0x000008, "Wrong alignment on GA_FallingIcicle_Activate_C_RemoveAllGameplayCue");
static_assert(sizeof(GA_FallingIcicle_Activate_C_RemoveAllGameplayCue) == 0x000008, "Wrong size on GA_FallingIcicle_Activate_C_RemoveAllGameplayCue");
static_assert(offsetof(GA_FallingIcicle_Activate_C_RemoveAllGameplayCue, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000000, "Member 'GA_FallingIcicle_Activate_C_RemoveAllGameplayCue::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");

}

