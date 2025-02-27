#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_SkeletonRoyalGuard

#include "Basic.hpp"

#include "ABP_SkeletonRoyalGuard_structs.hpp"
#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "DungeonCrawler_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_SkeletonRoyalGuard.ABP_SkeletonRoyalGuard_C
// 0x0A70 (0x0FA0 - 0x0530)
class UABP_SkeletonRoyalGuard_C final : public UDCMonsterAnimInstanceBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0530(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct ABP_SkeletonRoyalGuard::FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                           // 0x0538(0x000C)(HasGetValueTypeHash)
	uint8                                         Pad_4A2C[0x4];                                     // 0x0544(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0548(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0550(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0558(0x0020)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x0578(0x0048)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_10;                 // 0x05C0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_9;                  // 0x05E8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_8;                  // 0x0610(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_7;                  // 0x0638(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_5;                    // 0x0660(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_6;                       // 0x06A8(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_4;                    // 0x06C8(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_5;                       // 0x0710(0x0020)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer;                    // 0x0730(0x0070)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_4;                       // 0x07A0(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine_1;                      // 0x07C0(0x00C8)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;                      // 0x0888(0x0080)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_6;                  // 0x0908(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_5;                  // 0x0930(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_4;                  // 0x0958(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_3;                  // 0x0980(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_2;                  // 0x09A8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x09D0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x09F8(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_3;                     // 0x0A20(0x0028)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_3;                       // 0x0A48(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_3;                    // 0x0A68(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x0AB0(0x0048)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_2;                     // 0x0AF8(0x0028)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_1;                   // 0x0B20(0x0048)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend_1;                  // 0x0B68(0x00F0)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;                       // 0x0C58(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x0C78(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x0CC0(0x0048)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_1;                     // 0x0D08(0x0028)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool;                     // 0x0D30(0x0048)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend;                    // 0x0D78(0x00F0)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x0E68(0x0020)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;                       // 0x0E88(0x0028)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x0EB0(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x0ED0(0x00C8)()

public:
	void AnimGraph(struct FPoseLink* Param_AnimGraph);
	void ExecuteUbergraph_ABP_SkeletonRoyalGuard(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_SkeletonRoyalGuard_C">();
	}
	static class UABP_SkeletonRoyalGuard_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_SkeletonRoyalGuard_C>();
	}
};
static_assert(alignof(UABP_SkeletonRoyalGuard_C) == 0x000010, "Wrong alignment on UABP_SkeletonRoyalGuard_C");
static_assert(sizeof(UABP_SkeletonRoyalGuard_C) == 0x000FA0, "Wrong size on UABP_SkeletonRoyalGuard_C");
static_assert(offsetof(UABP_SkeletonRoyalGuard_C, UberGraphFrame) == 0x000530, "Member 'UABP_SkeletonRoyalGuard_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABP_SkeletonRoyalGuard_C, __AnimBlueprintMutables) == 0x000538, "Member 'UABP_SkeletonRoyalGuard_C::__AnimBlueprintMutables' has a wrong offset!");
static_assert(offsetof(UABP_SkeletonRoyalGuard_C, AnimBlueprintExtension_PropertyAccess) == 0x000548, "Member 'UABP_SkeletonRoyalGuard_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UABP_SkeletonRoyalGuard_C, AnimBlueprintExtension_Base) == 0x000550, "Member 'UABP_SkeletonRoyalGuard_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UABP_SkeletonRoyalGuard_C, AnimGraphNode_Root) == 0x000558, "Member 'UABP_SkeletonRoyalGuard_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UABP_SkeletonRoyalGuard_C, AnimGraphNode_Slot) == 0x000578, "Member 'UABP_SkeletonRoyalGuard_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UABP_SkeletonRoyalGuard_C, AnimGraphNode_TransitionResult_10) == 0x0005C0, "Member 'UABP_SkeletonRoyalGuard_C::AnimGraphNode_TransitionResult_10' has a wrong offset!");
static_assert(offsetof(UABP_SkeletonRoyalGuard_C, AnimGraphNode_TransitionResult_9) == 0x0005E8, "Member 'UABP_SkeletonRoyalGuard_C::AnimGraphNode_TransitionResult_9' has a wrong offset!");
static_assert(offsetof(UABP_SkeletonRoyalGuard_C, AnimGraphNode_TransitionResult_8) == 0x000610, "Member 'UABP_SkeletonRoyalGuard_C::AnimGraphNode_TransitionResult_8' has a wrong offset!");
static_assert(offsetof(UABP_SkeletonRoyalGuard_C, AnimGraphNode_TransitionResult_7) == 0x000638, "Member 'UABP_SkeletonRoyalGuard_C::AnimGraphNode_TransitionResult_7' has a wrong offset!");
static_assert(offsetof(UABP_SkeletonRoyalGuard_C, AnimGraphNode_SequencePlayer_5) == 0x000660, "Member 'UABP_SkeletonRoyalGuard_C::AnimGraphNode_SequencePlayer_5' has a wrong offset!");
static_assert(offsetof(UABP_SkeletonRoyalGuard_C, AnimGraphNode_StateResult_6) == 0x0006A8, "Member 'UABP_SkeletonRoyalGuard_C::AnimGraphNode_StateResult_6' has a wrong offset!");
static_assert(offsetof(UABP_SkeletonRoyalGuard_C, AnimGraphNode_SequencePlayer_4) == 0x0006C8, "Member 'UABP_SkeletonRoyalGuard_C::AnimGraphNode_SequencePlayer_4' has a wrong offset!");
static_assert(offsetof(UABP_SkeletonRoyalGuard_C, AnimGraphNode_StateResult_5) == 0x000710, "Member 'UABP_SkeletonRoyalGuard_C::AnimGraphNode_StateResult_5' has a wrong offset!");
static_assert(offsetof(UABP_SkeletonRoyalGuard_C, AnimGraphNode_BlendSpacePlayer) == 0x000730, "Member 'UABP_SkeletonRoyalGuard_C::AnimGraphNode_BlendSpacePlayer' has a wrong offset!");
static_assert(offsetof(UABP_SkeletonRoyalGuard_C, AnimGraphNode_StateResult_4) == 0x0007A0, "Member 'UABP_SkeletonRoyalGuard_C::AnimGraphNode_StateResult_4' has a wrong offset!");
static_assert(offsetof(UABP_SkeletonRoyalGuard_C, AnimGraphNode_StateMachine_1) == 0x0007C0, "Member 'UABP_SkeletonRoyalGuard_C::AnimGraphNode_StateMachine_1' has a wrong offset!");
static_assert(offsetof(UABP_SkeletonRoyalGuard_C, AnimGraphNode_SaveCachedPose) == 0x000888, "Member 'UABP_SkeletonRoyalGuard_C::AnimGraphNode_SaveCachedPose' has a wrong offset!");
static_assert(offsetof(UABP_SkeletonRoyalGuard_C, AnimGraphNode_TransitionResult_6) == 0x000908, "Member 'UABP_SkeletonRoyalGuard_C::AnimGraphNode_TransitionResult_6' has a wrong offset!");
static_assert(offsetof(UABP_SkeletonRoyalGuard_C, AnimGraphNode_TransitionResult_5) == 0x000930, "Member 'UABP_SkeletonRoyalGuard_C::AnimGraphNode_TransitionResult_5' has a wrong offset!");
static_assert(offsetof(UABP_SkeletonRoyalGuard_C, AnimGraphNode_TransitionResult_4) == 0x000958, "Member 'UABP_SkeletonRoyalGuard_C::AnimGraphNode_TransitionResult_4' has a wrong offset!");
static_assert(offsetof(UABP_SkeletonRoyalGuard_C, AnimGraphNode_TransitionResult_3) == 0x000980, "Member 'UABP_SkeletonRoyalGuard_C::AnimGraphNode_TransitionResult_3' has a wrong offset!");
static_assert(offsetof(UABP_SkeletonRoyalGuard_C, AnimGraphNode_TransitionResult_2) == 0x0009A8, "Member 'UABP_SkeletonRoyalGuard_C::AnimGraphNode_TransitionResult_2' has a wrong offset!");
static_assert(offsetof(UABP_SkeletonRoyalGuard_C, AnimGraphNode_TransitionResult_1) == 0x0009D0, "Member 'UABP_SkeletonRoyalGuard_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(UABP_SkeletonRoyalGuard_C, AnimGraphNode_TransitionResult) == 0x0009F8, "Member 'UABP_SkeletonRoyalGuard_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UABP_SkeletonRoyalGuard_C, AnimGraphNode_UseCachedPose_3) == 0x000A20, "Member 'UABP_SkeletonRoyalGuard_C::AnimGraphNode_UseCachedPose_3' has a wrong offset!");
static_assert(offsetof(UABP_SkeletonRoyalGuard_C, AnimGraphNode_StateResult_3) == 0x000A48, "Member 'UABP_SkeletonRoyalGuard_C::AnimGraphNode_StateResult_3' has a wrong offset!");
static_assert(offsetof(UABP_SkeletonRoyalGuard_C, AnimGraphNode_SequencePlayer_3) == 0x000A68, "Member 'UABP_SkeletonRoyalGuard_C::AnimGraphNode_SequencePlayer_3' has a wrong offset!");
static_assert(offsetof(UABP_SkeletonRoyalGuard_C, AnimGraphNode_SequencePlayer_2) == 0x000AB0, "Member 'UABP_SkeletonRoyalGuard_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(UABP_SkeletonRoyalGuard_C, AnimGraphNode_UseCachedPose_2) == 0x000AF8, "Member 'UABP_SkeletonRoyalGuard_C::AnimGraphNode_UseCachedPose_2' has a wrong offset!");
static_assert(offsetof(UABP_SkeletonRoyalGuard_C, AnimGraphNode_BlendListByBool_1) == 0x000B20, "Member 'UABP_SkeletonRoyalGuard_C::AnimGraphNode_BlendListByBool_1' has a wrong offset!");
static_assert(offsetof(UABP_SkeletonRoyalGuard_C, AnimGraphNode_LayeredBoneBlend_1) == 0x000B68, "Member 'UABP_SkeletonRoyalGuard_C::AnimGraphNode_LayeredBoneBlend_1' has a wrong offset!");
static_assert(offsetof(UABP_SkeletonRoyalGuard_C, AnimGraphNode_StateResult_2) == 0x000C58, "Member 'UABP_SkeletonRoyalGuard_C::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(UABP_SkeletonRoyalGuard_C, AnimGraphNode_SequencePlayer_1) == 0x000C78, "Member 'UABP_SkeletonRoyalGuard_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UABP_SkeletonRoyalGuard_C, AnimGraphNode_SequencePlayer) == 0x000CC0, "Member 'UABP_SkeletonRoyalGuard_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UABP_SkeletonRoyalGuard_C, AnimGraphNode_UseCachedPose_1) == 0x000D08, "Member 'UABP_SkeletonRoyalGuard_C::AnimGraphNode_UseCachedPose_1' has a wrong offset!");
static_assert(offsetof(UABP_SkeletonRoyalGuard_C, AnimGraphNode_BlendListByBool) == 0x000D30, "Member 'UABP_SkeletonRoyalGuard_C::AnimGraphNode_BlendListByBool' has a wrong offset!");
static_assert(offsetof(UABP_SkeletonRoyalGuard_C, AnimGraphNode_LayeredBoneBlend) == 0x000D78, "Member 'UABP_SkeletonRoyalGuard_C::AnimGraphNode_LayeredBoneBlend' has a wrong offset!");
static_assert(offsetof(UABP_SkeletonRoyalGuard_C, AnimGraphNode_StateResult_1) == 0x000E68, "Member 'UABP_SkeletonRoyalGuard_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UABP_SkeletonRoyalGuard_C, AnimGraphNode_UseCachedPose) == 0x000E88, "Member 'UABP_SkeletonRoyalGuard_C::AnimGraphNode_UseCachedPose' has a wrong offset!");
static_assert(offsetof(UABP_SkeletonRoyalGuard_C, AnimGraphNode_StateResult) == 0x000EB0, "Member 'UABP_SkeletonRoyalGuard_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UABP_SkeletonRoyalGuard_C, AnimGraphNode_StateMachine) == 0x000ED0, "Member 'UABP_SkeletonRoyalGuard_C::AnimGraphNode_StateMachine' has a wrong offset!");

}

