#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AoeDefineBase_Capsule

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_AoeDefineBase_Capsule.BP_AoeDefineBase_Capsule_C.ExecuteUbergraph_BP_AoeDefineBase_Capsule
// 0x0048 (0x0048 - 0x0000)
struct BP_AoeDefineBase_Capsule_C_ExecuteUbergraph_BP_AoeDefineBase_Capsule final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C80[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x0020(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_GetScaledCapsuleRadius_ReturnValue;       // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetScaledCapsuleHalfHeight_ReturnValue;   // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_DrawDebugCapsule_Duration_ImplicitCast;   // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AoeDefineBase_Capsule_C_ExecuteUbergraph_BP_AoeDefineBase_Capsule) == 0x000008, "Wrong alignment on BP_AoeDefineBase_Capsule_C_ExecuteUbergraph_BP_AoeDefineBase_Capsule");
static_assert(sizeof(BP_AoeDefineBase_Capsule_C_ExecuteUbergraph_BP_AoeDefineBase_Capsule) == 0x000048, "Wrong size on BP_AoeDefineBase_Capsule_C_ExecuteUbergraph_BP_AoeDefineBase_Capsule");
static_assert(offsetof(BP_AoeDefineBase_Capsule_C_ExecuteUbergraph_BP_AoeDefineBase_Capsule, EntryPoint) == 0x000000, "Member 'BP_AoeDefineBase_Capsule_C_ExecuteUbergraph_BP_AoeDefineBase_Capsule::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AoeDefineBase_Capsule_C_ExecuteUbergraph_BP_AoeDefineBase_Capsule, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000008, "Member 'BP_AoeDefineBase_Capsule_C_ExecuteUbergraph_BP_AoeDefineBase_Capsule::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AoeDefineBase_Capsule_C_ExecuteUbergraph_BP_AoeDefineBase_Capsule, CallFunc_K2_GetActorRotation_ReturnValue) == 0x000020, "Member 'BP_AoeDefineBase_Capsule_C_ExecuteUbergraph_BP_AoeDefineBase_Capsule::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AoeDefineBase_Capsule_C_ExecuteUbergraph_BP_AoeDefineBase_Capsule, CallFunc_GetScaledCapsuleRadius_ReturnValue) == 0x000038, "Member 'BP_AoeDefineBase_Capsule_C_ExecuteUbergraph_BP_AoeDefineBase_Capsule::CallFunc_GetScaledCapsuleRadius_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AoeDefineBase_Capsule_C_ExecuteUbergraph_BP_AoeDefineBase_Capsule, CallFunc_GetScaledCapsuleHalfHeight_ReturnValue) == 0x00003C, "Member 'BP_AoeDefineBase_Capsule_C_ExecuteUbergraph_BP_AoeDefineBase_Capsule::CallFunc_GetScaledCapsuleHalfHeight_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AoeDefineBase_Capsule_C_ExecuteUbergraph_BP_AoeDefineBase_Capsule, CallFunc_DrawDebugCapsule_Duration_ImplicitCast) == 0x000040, "Member 'BP_AoeDefineBase_Capsule_C_ExecuteUbergraph_BP_AoeDefineBase_Capsule::CallFunc_DrawDebugCapsule_Duration_ImplicitCast' has a wrong offset!");

// Function BP_AoeDefineBase_Capsule.BP_AoeDefineBase_Capsule_C.Set Collision Profile Activate
// 0x0008 (0x0008 - 0x0000)
struct BP_AoeDefineBase_Capsule_C_Set_Collision_Profile_Activate final
{
public:
	class UPrimitiveComponent*                    Target;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AoeDefineBase_Capsule_C_Set_Collision_Profile_Activate) == 0x000008, "Wrong alignment on BP_AoeDefineBase_Capsule_C_Set_Collision_Profile_Activate");
static_assert(sizeof(BP_AoeDefineBase_Capsule_C_Set_Collision_Profile_Activate) == 0x000008, "Wrong size on BP_AoeDefineBase_Capsule_C_Set_Collision_Profile_Activate");
static_assert(offsetof(BP_AoeDefineBase_Capsule_C_Set_Collision_Profile_Activate, Target) == 0x000000, "Member 'BP_AoeDefineBase_Capsule_C_Set_Collision_Profile_Activate::Target' has a wrong offset!");

// Function BP_AoeDefineBase_Capsule.BP_AoeDefineBase_Capsule_C.Set Collision Profile Deactivate
// 0x0008 (0x0008 - 0x0000)
struct BP_AoeDefineBase_Capsule_C_Set_Collision_Profile_Deactivate final
{
public:
	class UPrimitiveComponent*                    Target;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AoeDefineBase_Capsule_C_Set_Collision_Profile_Deactivate) == 0x000008, "Wrong alignment on BP_AoeDefineBase_Capsule_C_Set_Collision_Profile_Deactivate");
static_assert(sizeof(BP_AoeDefineBase_Capsule_C_Set_Collision_Profile_Deactivate) == 0x000008, "Wrong size on BP_AoeDefineBase_Capsule_C_Set_Collision_Profile_Deactivate");
static_assert(offsetof(BP_AoeDefineBase_Capsule_C_Set_Collision_Profile_Deactivate, Target) == 0x000000, "Member 'BP_AoeDefineBase_Capsule_C_Set_Collision_Profile_Deactivate::Target' has a wrong offset!");

}

