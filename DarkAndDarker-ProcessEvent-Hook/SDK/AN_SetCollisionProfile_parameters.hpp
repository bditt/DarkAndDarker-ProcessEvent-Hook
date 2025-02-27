#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AN_SetCollisionProfile

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function AN_SetCollisionProfile.AN_SetCollisionProfile_C.Received_Notify
// 0x0060 (0x0060 - 0x0000)
struct AN_SetCollisionProfile_C_Received_Notify final
{
public:
	class USkeletalMeshComponent*                 MeshComp;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Animation;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FAnimNotifyEventReference              EventReference;                                    // 0x0010(0x0030)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          ReturnValue;                                       // 0x0040(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsServer_ReturnValue;                     // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49AC[0x6];                                     // 0x0042(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ADCMonsterBase*                         K2Node_DynamicCast_AsDCMonster_Base;               // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_InteractableWithoutHit_ReturnValue;       // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_InteractableOnly_ReturnValue;             // 0x005A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Interactable_ReturnValue;                 // 0x005B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Death_ReturnValue;                        // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Normal_ReturnValue;                       // 0x005D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Burrow_ReturnValue;                       // 0x005E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x005F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AN_SetCollisionProfile_C_Received_Notify) == 0x000008, "Wrong alignment on AN_SetCollisionProfile_C_Received_Notify");
static_assert(sizeof(AN_SetCollisionProfile_C_Received_Notify) == 0x000060, "Wrong size on AN_SetCollisionProfile_C_Received_Notify");
static_assert(offsetof(AN_SetCollisionProfile_C_Received_Notify, MeshComp) == 0x000000, "Member 'AN_SetCollisionProfile_C_Received_Notify::MeshComp' has a wrong offset!");
static_assert(offsetof(AN_SetCollisionProfile_C_Received_Notify, Animation) == 0x000008, "Member 'AN_SetCollisionProfile_C_Received_Notify::Animation' has a wrong offset!");
static_assert(offsetof(AN_SetCollisionProfile_C_Received_Notify, EventReference) == 0x000010, "Member 'AN_SetCollisionProfile_C_Received_Notify::EventReference' has a wrong offset!");
static_assert(offsetof(AN_SetCollisionProfile_C_Received_Notify, ReturnValue) == 0x000040, "Member 'AN_SetCollisionProfile_C_Received_Notify::ReturnValue' has a wrong offset!");
static_assert(offsetof(AN_SetCollisionProfile_C_Received_Notify, CallFunc_IsServer_ReturnValue) == 0x000041, "Member 'AN_SetCollisionProfile_C_Received_Notify::CallFunc_IsServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(AN_SetCollisionProfile_C_Received_Notify, CallFunc_GetOwner_ReturnValue) == 0x000048, "Member 'AN_SetCollisionProfile_C_Received_Notify::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(AN_SetCollisionProfile_C_Received_Notify, K2Node_DynamicCast_AsDCMonster_Base) == 0x000050, "Member 'AN_SetCollisionProfile_C_Received_Notify::K2Node_DynamicCast_AsDCMonster_Base' has a wrong offset!");
static_assert(offsetof(AN_SetCollisionProfile_C_Received_Notify, K2Node_DynamicCast_bSuccess) == 0x000058, "Member 'AN_SetCollisionProfile_C_Received_Notify::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AN_SetCollisionProfile_C_Received_Notify, CallFunc_InteractableWithoutHit_ReturnValue) == 0x000059, "Member 'AN_SetCollisionProfile_C_Received_Notify::CallFunc_InteractableWithoutHit_ReturnValue' has a wrong offset!");
static_assert(offsetof(AN_SetCollisionProfile_C_Received_Notify, CallFunc_InteractableOnly_ReturnValue) == 0x00005A, "Member 'AN_SetCollisionProfile_C_Received_Notify::CallFunc_InteractableOnly_ReturnValue' has a wrong offset!");
static_assert(offsetof(AN_SetCollisionProfile_C_Received_Notify, CallFunc_Interactable_ReturnValue) == 0x00005B, "Member 'AN_SetCollisionProfile_C_Received_Notify::CallFunc_Interactable_ReturnValue' has a wrong offset!");
static_assert(offsetof(AN_SetCollisionProfile_C_Received_Notify, CallFunc_Death_ReturnValue) == 0x00005C, "Member 'AN_SetCollisionProfile_C_Received_Notify::CallFunc_Death_ReturnValue' has a wrong offset!");
static_assert(offsetof(AN_SetCollisionProfile_C_Received_Notify, CallFunc_Normal_ReturnValue) == 0x00005D, "Member 'AN_SetCollisionProfile_C_Received_Notify::CallFunc_Normal_ReturnValue' has a wrong offset!");
static_assert(offsetof(AN_SetCollisionProfile_C_Received_Notify, CallFunc_Burrow_ReturnValue) == 0x00005E, "Member 'AN_SetCollisionProfile_C_Received_Notify::CallFunc_Burrow_ReturnValue' has a wrong offset!");
static_assert(offsetof(AN_SetCollisionProfile_C_Received_Notify, K2Node_SwitchEnum_CmpSuccess) == 0x00005F, "Member 'AN_SetCollisionProfile_C_Received_Notify::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

}

