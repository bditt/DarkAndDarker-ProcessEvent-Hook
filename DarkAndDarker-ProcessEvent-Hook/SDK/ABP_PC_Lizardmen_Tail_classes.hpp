#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_PC_Lizardmen_Tail

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ABP_PC_Lizardmen_Tail_structs.hpp"
#include "KawaiiPhysics_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "DungeonCrawler_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_PC_Lizardmen_Tail.ABP_PC_Lizardmen_Tail_C
// 0x1C40 (0x22A0 - 0x0660)
class UABP_PC_Lizardmen_Tail_C final : public UDCPlayerCharacterAnimInstanceBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0660(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct ABP_PC_Lizardmen_Tail::FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                           // 0x0668(0x0028)(HasGetValueTypeHash)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0690(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0698(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x06A0(0x0020)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_4;                   // 0x06C0(0x0048)()
	uint8                                         Pad_3CA9[0x8];                                     // 0x0708(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics;                       // 0x0710(0x07A0)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;             // 0x0EB0(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;             // 0x0ED0(0x0020)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer_3;                  // 0x0EF0(0x0070)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer_2;                  // 0x0F60(0x0070)()
	struct FAnimNode_RotationOffsetBlendSpace     AnimGraphNode_RotationOffsetBlendSpace_3;          // 0x0FD0(0x0118)()
	struct FAnimNode_RotationOffsetBlendSpace     AnimGraphNode_RotationOffsetBlendSpace_2;          // 0x10E8(0x0118)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_3;                    // 0x1200(0x0048)()
	struct FAnimNode_TwoWayBlend                  AnimGraphNode_TwoWayBlend_1;                       // 0x1248(0x00C8)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_3;                   // 0x1310(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x1358(0x0048)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_2;                   // 0x13A0(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x13E8(0x0048)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_1;                   // 0x1430(0x0048)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool;                     // 0x1478(0x0048)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x14C0(0x0020)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer_1;                  // 0x14E0(0x0070)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer;                    // 0x1550(0x0070)()
	struct FAnimNode_RotationOffsetBlendSpace     AnimGraphNode_RotationOffsetBlendSpace_1;          // 0x15C0(0x0118)()
	struct FAnimNode_RotationOffsetBlendSpace     AnimGraphNode_RotationOffsetBlendSpace;            // 0x16D8(0x0118)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x17F0(0x0048)()
	struct FAnimNode_TwoWayBlend                  AnimGraphNode_TwoWayBlend;                         // 0x1838(0x00C8)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x1900(0x0020)()
	struct FAnimNode_RigidBody                    AnimGraphNode_RigidBody;                           // 0x1920(0x0950)()
	double                                        IsResting;                                         // 0x2270(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimInstance*                          GetParentAnimInstance;                             // 0x2278(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsLizardmenHead;                                  // 0x2280(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CAA[0x3];                                     // 0x2281(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKawaiiPhysicsSettings                 KawaiiPhysicsSettings;                             // 0x2284(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void AnimGraph(struct FPoseLink* Param_AnimGraph);
	void BlueprintInitializeAnimation();
	void BlueprintThreadSafeUpdateAnimation(float DeltaTime);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_ABP_PC_Lizardmen_Tail(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_PC_Lizardmen_Tail_C">();
	}
	static class UABP_PC_Lizardmen_Tail_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_PC_Lizardmen_Tail_C>();
	}
};
static_assert(alignof(UABP_PC_Lizardmen_Tail_C) == 0x000010, "Wrong alignment on UABP_PC_Lizardmen_Tail_C");
static_assert(sizeof(UABP_PC_Lizardmen_Tail_C) == 0x0022A0, "Wrong size on UABP_PC_Lizardmen_Tail_C");
static_assert(offsetof(UABP_PC_Lizardmen_Tail_C, UberGraphFrame) == 0x000660, "Member 'UABP_PC_Lizardmen_Tail_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABP_PC_Lizardmen_Tail_C, __AnimBlueprintMutables) == 0x000668, "Member 'UABP_PC_Lizardmen_Tail_C::__AnimBlueprintMutables' has a wrong offset!");
static_assert(offsetof(UABP_PC_Lizardmen_Tail_C, AnimBlueprintExtension_PropertyAccess) == 0x000690, "Member 'UABP_PC_Lizardmen_Tail_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UABP_PC_Lizardmen_Tail_C, AnimBlueprintExtension_Base) == 0x000698, "Member 'UABP_PC_Lizardmen_Tail_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UABP_PC_Lizardmen_Tail_C, AnimGraphNode_Root) == 0x0006A0, "Member 'UABP_PC_Lizardmen_Tail_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UABP_PC_Lizardmen_Tail_C, AnimGraphNode_BlendListByBool_4) == 0x0006C0, "Member 'UABP_PC_Lizardmen_Tail_C::AnimGraphNode_BlendListByBool_4' has a wrong offset!");
static_assert(offsetof(UABP_PC_Lizardmen_Tail_C, AnimGraphNode_KawaiiPhysics) == 0x000710, "Member 'UABP_PC_Lizardmen_Tail_C::AnimGraphNode_KawaiiPhysics' has a wrong offset!");
static_assert(offsetof(UABP_PC_Lizardmen_Tail_C, AnimGraphNode_LocalToComponentSpace_1) == 0x000EB0, "Member 'UABP_PC_Lizardmen_Tail_C::AnimGraphNode_LocalToComponentSpace_1' has a wrong offset!");
static_assert(offsetof(UABP_PC_Lizardmen_Tail_C, AnimGraphNode_ComponentToLocalSpace_1) == 0x000ED0, "Member 'UABP_PC_Lizardmen_Tail_C::AnimGraphNode_ComponentToLocalSpace_1' has a wrong offset!");
static_assert(offsetof(UABP_PC_Lizardmen_Tail_C, AnimGraphNode_BlendSpacePlayer_3) == 0x000EF0, "Member 'UABP_PC_Lizardmen_Tail_C::AnimGraphNode_BlendSpacePlayer_3' has a wrong offset!");
static_assert(offsetof(UABP_PC_Lizardmen_Tail_C, AnimGraphNode_BlendSpacePlayer_2) == 0x000F60, "Member 'UABP_PC_Lizardmen_Tail_C::AnimGraphNode_BlendSpacePlayer_2' has a wrong offset!");
static_assert(offsetof(UABP_PC_Lizardmen_Tail_C, AnimGraphNode_RotationOffsetBlendSpace_3) == 0x000FD0, "Member 'UABP_PC_Lizardmen_Tail_C::AnimGraphNode_RotationOffsetBlendSpace_3' has a wrong offset!");
static_assert(offsetof(UABP_PC_Lizardmen_Tail_C, AnimGraphNode_RotationOffsetBlendSpace_2) == 0x0010E8, "Member 'UABP_PC_Lizardmen_Tail_C::AnimGraphNode_RotationOffsetBlendSpace_2' has a wrong offset!");
static_assert(offsetof(UABP_PC_Lizardmen_Tail_C, AnimGraphNode_SequencePlayer_3) == 0x001200, "Member 'UABP_PC_Lizardmen_Tail_C::AnimGraphNode_SequencePlayer_3' has a wrong offset!");
static_assert(offsetof(UABP_PC_Lizardmen_Tail_C, AnimGraphNode_TwoWayBlend_1) == 0x001248, "Member 'UABP_PC_Lizardmen_Tail_C::AnimGraphNode_TwoWayBlend_1' has a wrong offset!");
static_assert(offsetof(UABP_PC_Lizardmen_Tail_C, AnimGraphNode_BlendListByBool_3) == 0x001310, "Member 'UABP_PC_Lizardmen_Tail_C::AnimGraphNode_BlendListByBool_3' has a wrong offset!");
static_assert(offsetof(UABP_PC_Lizardmen_Tail_C, AnimGraphNode_SequencePlayer_2) == 0x001358, "Member 'UABP_PC_Lizardmen_Tail_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(UABP_PC_Lizardmen_Tail_C, AnimGraphNode_BlendListByBool_2) == 0x0013A0, "Member 'UABP_PC_Lizardmen_Tail_C::AnimGraphNode_BlendListByBool_2' has a wrong offset!");
static_assert(offsetof(UABP_PC_Lizardmen_Tail_C, AnimGraphNode_SequencePlayer_1) == 0x0013E8, "Member 'UABP_PC_Lizardmen_Tail_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UABP_PC_Lizardmen_Tail_C, AnimGraphNode_BlendListByBool_1) == 0x001430, "Member 'UABP_PC_Lizardmen_Tail_C::AnimGraphNode_BlendListByBool_1' has a wrong offset!");
static_assert(offsetof(UABP_PC_Lizardmen_Tail_C, AnimGraphNode_BlendListByBool) == 0x001478, "Member 'UABP_PC_Lizardmen_Tail_C::AnimGraphNode_BlendListByBool' has a wrong offset!");
static_assert(offsetof(UABP_PC_Lizardmen_Tail_C, AnimGraphNode_LocalToComponentSpace) == 0x0014C0, "Member 'UABP_PC_Lizardmen_Tail_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UABP_PC_Lizardmen_Tail_C, AnimGraphNode_BlendSpacePlayer_1) == 0x0014E0, "Member 'UABP_PC_Lizardmen_Tail_C::AnimGraphNode_BlendSpacePlayer_1' has a wrong offset!");
static_assert(offsetof(UABP_PC_Lizardmen_Tail_C, AnimGraphNode_BlendSpacePlayer) == 0x001550, "Member 'UABP_PC_Lizardmen_Tail_C::AnimGraphNode_BlendSpacePlayer' has a wrong offset!");
static_assert(offsetof(UABP_PC_Lizardmen_Tail_C, AnimGraphNode_RotationOffsetBlendSpace_1) == 0x0015C0, "Member 'UABP_PC_Lizardmen_Tail_C::AnimGraphNode_RotationOffsetBlendSpace_1' has a wrong offset!");
static_assert(offsetof(UABP_PC_Lizardmen_Tail_C, AnimGraphNode_RotationOffsetBlendSpace) == 0x0016D8, "Member 'UABP_PC_Lizardmen_Tail_C::AnimGraphNode_RotationOffsetBlendSpace' has a wrong offset!");
static_assert(offsetof(UABP_PC_Lizardmen_Tail_C, AnimGraphNode_SequencePlayer) == 0x0017F0, "Member 'UABP_PC_Lizardmen_Tail_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UABP_PC_Lizardmen_Tail_C, AnimGraphNode_TwoWayBlend) == 0x001838, "Member 'UABP_PC_Lizardmen_Tail_C::AnimGraphNode_TwoWayBlend' has a wrong offset!");
static_assert(offsetof(UABP_PC_Lizardmen_Tail_C, AnimGraphNode_ComponentToLocalSpace) == 0x001900, "Member 'UABP_PC_Lizardmen_Tail_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UABP_PC_Lizardmen_Tail_C, AnimGraphNode_RigidBody) == 0x001920, "Member 'UABP_PC_Lizardmen_Tail_C::AnimGraphNode_RigidBody' has a wrong offset!");
static_assert(offsetof(UABP_PC_Lizardmen_Tail_C, IsResting) == 0x002270, "Member 'UABP_PC_Lizardmen_Tail_C::IsResting' has a wrong offset!");
static_assert(offsetof(UABP_PC_Lizardmen_Tail_C, GetParentAnimInstance) == 0x002278, "Member 'UABP_PC_Lizardmen_Tail_C::GetParentAnimInstance' has a wrong offset!");
static_assert(offsetof(UABP_PC_Lizardmen_Tail_C, bIsLizardmenHead) == 0x002280, "Member 'UABP_PC_Lizardmen_Tail_C::bIsLizardmenHead' has a wrong offset!");
static_assert(offsetof(UABP_PC_Lizardmen_Tail_C, KawaiiPhysicsSettings) == 0x002284, "Member 'UABP_PC_Lizardmen_Tail_C::KawaiiPhysicsSettings' has a wrong offset!");

}

