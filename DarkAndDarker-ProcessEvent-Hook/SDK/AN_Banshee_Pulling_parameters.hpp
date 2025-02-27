#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AN_Banshee_Pulling

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function AN_Banshee_Pulling.AN_Banshee_Pulling_C.Received_Notify
// 0x0100 (0x0100 - 0x0000)
struct AN_Banshee_Pulling_C_Received_Notify final
{
public:
	class USkeletalMeshComponent*                 MeshComp;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Animation;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FAnimNotifyEventReference              EventReference;                                    // 0x0010(0x0030)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          ReturnValue;                                       // 0x0040(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsServer_ReturnValue;                     // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_48DC[0x6];                                     // 0x0042(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_Banshee_Common_C*                   K2Node_DynamicCast_AsBP_Banshee_Common;            // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_48DD[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetRightVector_ReturnValue;               // 0x0060(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X;                            // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_DoubleToVector_ReturnValue;          // 0x0090(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_DoesSocketExist_ReturnValue;              // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_48DE[0x7];                                     // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x00B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetSocketLocation_ReturnValue;            // 0x00C8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      CallFunc_SpawnSystemAttached_ReturnValue;          // 0x00E0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x00E8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AN_Banshee_Pulling_C_Received_Notify) == 0x000008, "Wrong alignment on AN_Banshee_Pulling_C_Received_Notify");
static_assert(sizeof(AN_Banshee_Pulling_C_Received_Notify) == 0x000100, "Wrong size on AN_Banshee_Pulling_C_Received_Notify");
static_assert(offsetof(AN_Banshee_Pulling_C_Received_Notify, MeshComp) == 0x000000, "Member 'AN_Banshee_Pulling_C_Received_Notify::MeshComp' has a wrong offset!");
static_assert(offsetof(AN_Banshee_Pulling_C_Received_Notify, Animation) == 0x000008, "Member 'AN_Banshee_Pulling_C_Received_Notify::Animation' has a wrong offset!");
static_assert(offsetof(AN_Banshee_Pulling_C_Received_Notify, EventReference) == 0x000010, "Member 'AN_Banshee_Pulling_C_Received_Notify::EventReference' has a wrong offset!");
static_assert(offsetof(AN_Banshee_Pulling_C_Received_Notify, ReturnValue) == 0x000040, "Member 'AN_Banshee_Pulling_C_Received_Notify::ReturnValue' has a wrong offset!");
static_assert(offsetof(AN_Banshee_Pulling_C_Received_Notify, CallFunc_IsServer_ReturnValue) == 0x000041, "Member 'AN_Banshee_Pulling_C_Received_Notify::CallFunc_IsServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(AN_Banshee_Pulling_C_Received_Notify, CallFunc_GetOwner_ReturnValue) == 0x000048, "Member 'AN_Banshee_Pulling_C_Received_Notify::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(AN_Banshee_Pulling_C_Received_Notify, K2Node_DynamicCast_AsBP_Banshee_Common) == 0x000050, "Member 'AN_Banshee_Pulling_C_Received_Notify::K2Node_DynamicCast_AsBP_Banshee_Common' has a wrong offset!");
static_assert(offsetof(AN_Banshee_Pulling_C_Received_Notify, K2Node_DynamicCast_bSuccess) == 0x000058, "Member 'AN_Banshee_Pulling_C_Received_Notify::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AN_Banshee_Pulling_C_Received_Notify, CallFunc_GetRightVector_ReturnValue) == 0x000060, "Member 'AN_Banshee_Pulling_C_Received_Notify::CallFunc_GetRightVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(AN_Banshee_Pulling_C_Received_Notify, CallFunc_BreakVector_X) == 0x000078, "Member 'AN_Banshee_Pulling_C_Received_Notify::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(AN_Banshee_Pulling_C_Received_Notify, CallFunc_BreakVector_Y) == 0x000080, "Member 'AN_Banshee_Pulling_C_Received_Notify::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(AN_Banshee_Pulling_C_Received_Notify, CallFunc_BreakVector_Z) == 0x000088, "Member 'AN_Banshee_Pulling_C_Received_Notify::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(AN_Banshee_Pulling_C_Received_Notify, CallFunc_Conv_DoubleToVector_ReturnValue) == 0x000090, "Member 'AN_Banshee_Pulling_C_Received_Notify::CallFunc_Conv_DoubleToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(AN_Banshee_Pulling_C_Received_Notify, CallFunc_DoesSocketExist_ReturnValue) == 0x0000A8, "Member 'AN_Banshee_Pulling_C_Received_Notify::CallFunc_DoesSocketExist_ReturnValue' has a wrong offset!");
static_assert(offsetof(AN_Banshee_Pulling_C_Received_Notify, CallFunc_Multiply_VectorVector_ReturnValue) == 0x0000B0, "Member 'AN_Banshee_Pulling_C_Received_Notify::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(AN_Banshee_Pulling_C_Received_Notify, CallFunc_GetSocketLocation_ReturnValue) == 0x0000C8, "Member 'AN_Banshee_Pulling_C_Received_Notify::CallFunc_GetSocketLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(AN_Banshee_Pulling_C_Received_Notify, CallFunc_SpawnSystemAttached_ReturnValue) == 0x0000E0, "Member 'AN_Banshee_Pulling_C_Received_Notify::CallFunc_SpawnSystemAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(AN_Banshee_Pulling_C_Received_Notify, CallFunc_Add_VectorVector_ReturnValue) == 0x0000E8, "Member 'AN_Banshee_Pulling_C_Received_Notify::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");

}

