#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AN_Slime_SetPhysicsStrength

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function AN_Slime_SetPhysicsStrength.AN_Slime_SetPhysicsStrength_C.Received_Notify
// 0x0060 (0x0060 - 0x0000)
struct AN_Slime_SetPhysicsStrength_C_Received_Notify final
{
public:
	class USkeletalMeshComponent*                 MeshComp;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Animation;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FAnimNotifyEventReference              EventReference;                                    // 0x0010(0x0030)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          ReturnValue;                                       // 0x0040(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_37D5[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_Slime_C*                            K2Node_DynamicCast_AsBP_Slime;                     // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_37D6[0x3];                                     // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_SetStrengthMultiplyer_InStrengthMultiplyer_ImplicitCast; // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AN_Slime_SetPhysicsStrength_C_Received_Notify) == 0x000008, "Wrong alignment on AN_Slime_SetPhysicsStrength_C_Received_Notify");
static_assert(sizeof(AN_Slime_SetPhysicsStrength_C_Received_Notify) == 0x000060, "Wrong size on AN_Slime_SetPhysicsStrength_C_Received_Notify");
static_assert(offsetof(AN_Slime_SetPhysicsStrength_C_Received_Notify, MeshComp) == 0x000000, "Member 'AN_Slime_SetPhysicsStrength_C_Received_Notify::MeshComp' has a wrong offset!");
static_assert(offsetof(AN_Slime_SetPhysicsStrength_C_Received_Notify, Animation) == 0x000008, "Member 'AN_Slime_SetPhysicsStrength_C_Received_Notify::Animation' has a wrong offset!");
static_assert(offsetof(AN_Slime_SetPhysicsStrength_C_Received_Notify, EventReference) == 0x000010, "Member 'AN_Slime_SetPhysicsStrength_C_Received_Notify::EventReference' has a wrong offset!");
static_assert(offsetof(AN_Slime_SetPhysicsStrength_C_Received_Notify, ReturnValue) == 0x000040, "Member 'AN_Slime_SetPhysicsStrength_C_Received_Notify::ReturnValue' has a wrong offset!");
static_assert(offsetof(AN_Slime_SetPhysicsStrength_C_Received_Notify, CallFunc_GetOwner_ReturnValue) == 0x000048, "Member 'AN_Slime_SetPhysicsStrength_C_Received_Notify::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(AN_Slime_SetPhysicsStrength_C_Received_Notify, K2Node_DynamicCast_AsBP_Slime) == 0x000050, "Member 'AN_Slime_SetPhysicsStrength_C_Received_Notify::K2Node_DynamicCast_AsBP_Slime' has a wrong offset!");
static_assert(offsetof(AN_Slime_SetPhysicsStrength_C_Received_Notify, K2Node_DynamicCast_bSuccess) == 0x000058, "Member 'AN_Slime_SetPhysicsStrength_C_Received_Notify::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AN_Slime_SetPhysicsStrength_C_Received_Notify, CallFunc_SetStrengthMultiplyer_InStrengthMultiplyer_ImplicitCast) == 0x00005C, "Member 'AN_Slime_SetPhysicsStrength_C_Received_Notify::CallFunc_SetStrengthMultiplyer_InStrengthMultiplyer_ImplicitCast' has a wrong offset!");

}

