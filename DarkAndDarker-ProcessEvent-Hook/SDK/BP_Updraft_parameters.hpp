#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Updraft

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AkAudio_structs.hpp"


namespace SDK::Params
{

// Function BP_Updraft.BP_Updraft_C.BndEvt__BP_Updraft_Capsule Updraft Collision_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature
// 0x0108 (0x0108 - 0x0000)
struct BP_Updraft_C_BndEvt__BP_Updraft_Capsule_Updraft_Collision_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5BFF[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x00E8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_Updraft_C_BndEvt__BP_Updraft_Capsule_Updraft_Collision_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_Updraft_C_BndEvt__BP_Updraft_Capsule_Updraft_Collision_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(BP_Updraft_C_BndEvt__BP_Updraft_Capsule_Updraft_Collision_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature) == 0x000108, "Wrong size on BP_Updraft_C_BndEvt__BP_Updraft_Capsule_Updraft_Collision_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(BP_Updraft_C_BndEvt__BP_Updraft_Capsule_Updraft_Collision_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'BP_Updraft_C_BndEvt__BP_Updraft_Capsule_Updraft_Collision_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_Updraft_C_BndEvt__BP_Updraft_Capsule_Updraft_Collision_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BP_Updraft_C_BndEvt__BP_Updraft_Capsule_Updraft_Collision_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_Updraft_C_BndEvt__BP_Updraft_Capsule_Updraft_Collision_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BP_Updraft_C_BndEvt__BP_Updraft_Capsule_Updraft_Collision_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_Updraft_C_BndEvt__BP_Updraft_Capsule_Updraft_Collision_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'BP_Updraft_C_BndEvt__BP_Updraft_Capsule_Updraft_Collision_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_Updraft_C_BndEvt__BP_Updraft_Capsule_Updraft_Collision_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'BP_Updraft_C_BndEvt__BP_Updraft_Capsule_Updraft_Collision_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_Updraft_C_BndEvt__BP_Updraft_Capsule_Updraft_Collision_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'BP_Updraft_C_BndEvt__BP_Updraft_Capsule_Updraft_Collision_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

// Function BP_Updraft.BP_Updraft_C.BndEvt__BP_Updraft_Capsule Updraft Collision_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct BP_Updraft_C_BndEvt__BP_Updraft_Capsule_Updraft_Collision_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Updraft_C_BndEvt__BP_Updraft_Capsule_Updraft_Collision_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_Updraft_C_BndEvt__BP_Updraft_Capsule_Updraft_Collision_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature");
static_assert(sizeof(BP_Updraft_C_BndEvt__BP_Updraft_Capsule_Updraft_Collision_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature) == 0x000020, "Wrong size on BP_Updraft_C_BndEvt__BP_Updraft_Capsule_Updraft_Collision_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature");
static_assert(offsetof(BP_Updraft_C_BndEvt__BP_Updraft_Capsule_Updraft_Collision_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'BP_Updraft_C_BndEvt__BP_Updraft_Capsule_Updraft_Collision_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_Updraft_C_BndEvt__BP_Updraft_Capsule_Updraft_Collision_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BP_Updraft_C_BndEvt__BP_Updraft_Capsule_Updraft_Collision_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_Updraft_C_BndEvt__BP_Updraft_Capsule_Updraft_Collision_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BP_Updraft_C_BndEvt__BP_Updraft_Capsule_Updraft_Collision_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_Updraft_C_BndEvt__BP_Updraft_Capsule_Updraft_Collision_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'BP_Updraft_C_BndEvt__BP_Updraft_Capsule_Updraft_Collision_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");

// Function BP_Updraft.BP_Updraft_C.ExecuteUbergraph_BP_Updraft
// 0x0178 (0x0178 - 0x0000)
struct BP_Updraft_C_ExecuteUbergraph_BP_Updraft final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable;                            // 0x0004(0x0010)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable_1;                          // 0x0014(0x0010)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C00[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent_1;  // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor_1;           // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp_1;            // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex_1;       // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;             // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C01[0x3];                                     // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;            // 0x0048(0x00E8)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x0130(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x0138(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x0140(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C02[0x4];                                     // 0x014C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PlayerCharacter_C*                  K2Node_DynamicCast_AsBP_Player_Character;          // 0x0150(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C03[0x7];                                     // 0x0159(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PlayerCharacter_C*                  K2Node_DynamicCast_AsBP_Player_Character_1;        // 0x0160(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;          // 0x0169(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C04[0x2];                                     // 0x016A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PostAkEvent_ReturnValue;                  // 0x016C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue_1;        // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C05[0x3];                                     // 0x0171(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PostAkEvent_ReturnValue_1;                // 0x0174(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Updraft_C_ExecuteUbergraph_BP_Updraft) == 0x000008, "Wrong alignment on BP_Updraft_C_ExecuteUbergraph_BP_Updraft");
static_assert(sizeof(BP_Updraft_C_ExecuteUbergraph_BP_Updraft) == 0x000178, "Wrong size on BP_Updraft_C_ExecuteUbergraph_BP_Updraft");
static_assert(offsetof(BP_Updraft_C_ExecuteUbergraph_BP_Updraft, EntryPoint) == 0x000000, "Member 'BP_Updraft_C_ExecuteUbergraph_BP_Updraft::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Updraft_C_ExecuteUbergraph_BP_Updraft, Temp_delegate_Variable) == 0x000004, "Member 'BP_Updraft_C_ExecuteUbergraph_BP_Updraft::Temp_delegate_Variable' has a wrong offset!");
static_assert(offsetof(BP_Updraft_C_ExecuteUbergraph_BP_Updraft, Temp_delegate_Variable_1) == 0x000014, "Member 'BP_Updraft_C_ExecuteUbergraph_BP_Updraft::Temp_delegate_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_Updraft_C_ExecuteUbergraph_BP_Updraft, K2Node_ComponentBoundEvent_OverlappedComponent_1) == 0x000028, "Member 'BP_Updraft_C_ExecuteUbergraph_BP_Updraft::K2Node_ComponentBoundEvent_OverlappedComponent_1' has a wrong offset!");
static_assert(offsetof(BP_Updraft_C_ExecuteUbergraph_BP_Updraft, K2Node_ComponentBoundEvent_OtherActor_1) == 0x000030, "Member 'BP_Updraft_C_ExecuteUbergraph_BP_Updraft::K2Node_ComponentBoundEvent_OtherActor_1' has a wrong offset!");
static_assert(offsetof(BP_Updraft_C_ExecuteUbergraph_BP_Updraft, K2Node_ComponentBoundEvent_OtherComp_1) == 0x000038, "Member 'BP_Updraft_C_ExecuteUbergraph_BP_Updraft::K2Node_ComponentBoundEvent_OtherComp_1' has a wrong offset!");
static_assert(offsetof(BP_Updraft_C_ExecuteUbergraph_BP_Updraft, K2Node_ComponentBoundEvent_OtherBodyIndex_1) == 0x000040, "Member 'BP_Updraft_C_ExecuteUbergraph_BP_Updraft::K2Node_ComponentBoundEvent_OtherBodyIndex_1' has a wrong offset!");
static_assert(offsetof(BP_Updraft_C_ExecuteUbergraph_BP_Updraft, K2Node_ComponentBoundEvent_bFromSweep) == 0x000044, "Member 'BP_Updraft_C_ExecuteUbergraph_BP_Updraft::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_Updraft_C_ExecuteUbergraph_BP_Updraft, K2Node_ComponentBoundEvent_SweepResult) == 0x000048, "Member 'BP_Updraft_C_ExecuteUbergraph_BP_Updraft::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(BP_Updraft_C_ExecuteUbergraph_BP_Updraft, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x000130, "Member 'BP_Updraft_C_ExecuteUbergraph_BP_Updraft::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_Updraft_C_ExecuteUbergraph_BP_Updraft, K2Node_ComponentBoundEvent_OtherActor) == 0x000138, "Member 'BP_Updraft_C_ExecuteUbergraph_BP_Updraft::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(BP_Updraft_C_ExecuteUbergraph_BP_Updraft, K2Node_ComponentBoundEvent_OtherComp) == 0x000140, "Member 'BP_Updraft_C_ExecuteUbergraph_BP_Updraft::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(BP_Updraft_C_ExecuteUbergraph_BP_Updraft, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x000148, "Member 'BP_Updraft_C_ExecuteUbergraph_BP_Updraft::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_Updraft_C_ExecuteUbergraph_BP_Updraft, K2Node_DynamicCast_AsBP_Player_Character) == 0x000150, "Member 'BP_Updraft_C_ExecuteUbergraph_BP_Updraft::K2Node_DynamicCast_AsBP_Player_Character' has a wrong offset!");
static_assert(offsetof(BP_Updraft_C_ExecuteUbergraph_BP_Updraft, K2Node_DynamicCast_bSuccess) == 0x000158, "Member 'BP_Updraft_C_ExecuteUbergraph_BP_Updraft::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_Updraft_C_ExecuteUbergraph_BP_Updraft, K2Node_DynamicCast_AsBP_Player_Character_1) == 0x000160, "Member 'BP_Updraft_C_ExecuteUbergraph_BP_Updraft::K2Node_DynamicCast_AsBP_Player_Character_1' has a wrong offset!");
static_assert(offsetof(BP_Updraft_C_ExecuteUbergraph_BP_Updraft, K2Node_DynamicCast_bSuccess_1) == 0x000168, "Member 'BP_Updraft_C_ExecuteUbergraph_BP_Updraft::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_Updraft_C_ExecuteUbergraph_BP_Updraft, CallFunc_IsLocallyControlled_ReturnValue) == 0x000169, "Member 'BP_Updraft_C_ExecuteUbergraph_BP_Updraft::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Updraft_C_ExecuteUbergraph_BP_Updraft, CallFunc_PostAkEvent_ReturnValue) == 0x00016C, "Member 'BP_Updraft_C_ExecuteUbergraph_BP_Updraft::CallFunc_PostAkEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Updraft_C_ExecuteUbergraph_BP_Updraft, CallFunc_IsLocallyControlled_ReturnValue_1) == 0x000170, "Member 'BP_Updraft_C_ExecuteUbergraph_BP_Updraft::CallFunc_IsLocallyControlled_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Updraft_C_ExecuteUbergraph_BP_Updraft, CallFunc_PostAkEvent_ReturnValue_1) == 0x000174, "Member 'BP_Updraft_C_ExecuteUbergraph_BP_Updraft::CallFunc_PostAkEvent_ReturnValue_1' has a wrong offset!");

}

