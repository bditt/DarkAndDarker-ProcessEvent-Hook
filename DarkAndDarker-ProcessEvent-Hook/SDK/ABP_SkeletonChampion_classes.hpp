#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_SkeletonChampion

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ABP_SkeletonChampion_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "DungeonCrawler_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_SkeletonChampion.ABP_SkeletonChampion_C
// 0x1080 (0x15B0 - 0x0530)
class UABP_SkeletonChampion_C final : public UDCMonsterAnimInstanceBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0530(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct ABP_SkeletonChampion::FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                           // 0x0538(0x000C)(HasGetValueTypeHash)
	uint8                                         Pad_477A[0x4];                                     // 0x0544(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0548(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0550(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0558(0x0020)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_10;                 // 0x0578(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_9;                  // 0x05A0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_8;                  // 0x05C8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_7;                  // 0x05F0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_6;                  // 0x0618(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_4;                    // 0x0640(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_3;                    // 0x0688(0x0048)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_6;                     // 0x06D0(0x0028)()
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive_3;                     // 0x06F8(0x00C8)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_5;                     // 0x07C0(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_4;                     // 0x07E8(0x0028)()
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive_2;                     // 0x0810(0x00C8)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend_1;                  // 0x08D8(0x00F0)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;             // 0x09C8(0x0020)()
	struct FAnimNode_LegIK                        AnimGraphNode_LegIK_1;                             // 0x09E8(0x00F8)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;             // 0x0AE0(0x0020)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_1;                   // 0x0B00(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_5;                       // 0x0B48(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x0B68(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x0BB0(0x0048)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_3;                     // 0x0BF8(0x0028)()
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive_1;                     // 0x0C20(0x00C8)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_2;                     // 0x0CE8(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_1;                     // 0x0D10(0x0028)()
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive;                       // 0x0D38(0x00C8)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend;                    // 0x0E00(0x00F0)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x0EF0(0x0020)()
	struct FAnimNode_LegIK                        AnimGraphNode_LegIK;                               // 0x0F10(0x00F8)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x1008(0x0020)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool;                     // 0x1028(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_4;                       // 0x1070(0x0020)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;                       // 0x1090(0x0028)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_3;                       // 0x10B8(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine_1;                      // 0x10D8(0x00C8)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_5;                  // 0x11A0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_4;                  // 0x11C8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_3;                  // 0x11F0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_2;                  // 0x1218(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x1240(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x1268(0x0028)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer_1;                  // 0x1290(0x0070)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;                       // 0x1300(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x1320(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x1368(0x0020)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer;                    // 0x1388(0x0070)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x13F8(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x1418(0x00C8)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;                      // 0x14E0(0x0080)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x1560(0x0048)()
	bool                                          InCombat;                                          // 0x15A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AnimGraph(struct FPoseLink* Param_AnimGraph);
	void ExecuteUbergraph_ABP_SkeletonChampion(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_SkeletonChampion_C">();
	}
	static class UABP_SkeletonChampion_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_SkeletonChampion_C>();
	}
};
static_assert(alignof(UABP_SkeletonChampion_C) == 0x000010, "Wrong alignment on UABP_SkeletonChampion_C");
static_assert(sizeof(UABP_SkeletonChampion_C) == 0x0015B0, "Wrong size on UABP_SkeletonChampion_C");
static_assert(offsetof(UABP_SkeletonChampion_C, UberGraphFrame) == 0x000530, "Member 'UABP_SkeletonChampion_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABP_SkeletonChampion_C, __AnimBlueprintMutables) == 0x000538, "Member 'UABP_SkeletonChampion_C::__AnimBlueprintMutables' has a wrong offset!");
static_assert(offsetof(UABP_SkeletonChampion_C, AnimBlueprintExtension_PropertyAccess) == 0x000548, "Member 'UABP_SkeletonChampion_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UABP_SkeletonChampion_C, AnimBlueprintExtension_Base) == 0x000550, "Member 'UABP_SkeletonChampion_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UABP_SkeletonChampion_C, AnimGraphNode_Root) == 0x000558, "Member 'UABP_SkeletonChampion_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UABP_SkeletonChampion_C, AnimGraphNode_TransitionResult_10) == 0x000578, "Member 'UABP_SkeletonChampion_C::AnimGraphNode_TransitionResult_10' has a wrong offset!");
static_assert(offsetof(UABP_SkeletonChampion_C, AnimGraphNode_TransitionResult_9) == 0x0005A0, "Member 'UABP_SkeletonChampion_C::AnimGraphNode_TransitionResult_9' has a wrong offset!");
static_assert(offsetof(UABP_SkeletonChampion_C, AnimGraphNode_TransitionResult_8) == 0x0005C8, "Member 'UABP_SkeletonChampion_C::AnimGraphNode_TransitionResult_8' has a wrong offset!");
static_assert(offsetof(UABP_SkeletonChampion_C, AnimGraphNode_TransitionResult_7) == 0x0005F0, "Member 'UABP_SkeletonChampion_C::AnimGraphNode_TransitionResult_7' has a wrong offset!");
static_assert(offsetof(UABP_SkeletonChampion_C, AnimGraphNode_TransitionResult_6) == 0x000618, "Member 'UABP_SkeletonChampion_C::AnimGraphNode_TransitionResult_6' has a wrong offset!");
static_assert(offsetof(UABP_SkeletonChampion_C, AnimGraphNode_SequencePlayer_4) == 0x000640, "Member 'UABP_SkeletonChampion_C::AnimGraphNode_SequencePlayer_4' has a wrong offset!");
static_assert(offsetof(UABP_SkeletonChampion_C, AnimGraphNode_SequencePlayer_3) == 0x000688, "Member 'UABP_SkeletonChampion_C::AnimGraphNode_SequencePlayer_3' has a wrong offset!");
static_assert(offsetof(UABP_SkeletonChampion_C, AnimGraphNode_UseCachedPose_6) == 0x0006D0, "Member 'UABP_SkeletonChampion_C::AnimGraphNode_UseCachedPose_6' has a wrong offset!");
static_assert(offsetof(UABP_SkeletonChampion_C, AnimGraphNode_ApplyAdditive_3) == 0x0006F8, "Member 'UABP_SkeletonChampion_C::AnimGraphNode_ApplyAdditive_3' has a wrong offset!");
static_assert(offsetof(UABP_SkeletonChampion_C, AnimGraphNode_UseCachedPose_5) == 0x0007C0, "Member 'UABP_SkeletonChampion_C::AnimGraphNode_UseCachedPose_5' has a wrong offset!");
static_assert(offsetof(UABP_SkeletonChampion_C, AnimGraphNode_UseCachedPose_4) == 0x0007E8, "Member 'UABP_SkeletonChampion_C::AnimGraphNode_UseCachedPose_4' has a wrong offset!");
static_assert(offsetof(UABP_SkeletonChampion_C, AnimGraphNode_ApplyAdditive_2) == 0x000810, "Member 'UABP_SkeletonChampion_C::AnimGraphNode_ApplyAdditive_2' has a wrong offset!");
static_assert(offsetof(UABP_SkeletonChampion_C, AnimGraphNode_LayeredBoneBlend_1) == 0x0008D8, "Member 'UABP_SkeletonChampion_C::AnimGraphNode_LayeredBoneBlend_1' has a wrong offset!");
static_assert(offsetof(UABP_SkeletonChampion_C, AnimGraphNode_LocalToComponentSpace_1) == 0x0009C8, "Member 'UABP_SkeletonChampion_C::AnimGraphNode_LocalToComponentSpace_1' has a wrong offset!");
static_assert(offsetof(UABP_SkeletonChampion_C, AnimGraphNode_LegIK_1) == 0x0009E8, "Member 'UABP_SkeletonChampion_C::AnimGraphNode_LegIK_1' has a wrong offset!");
static_assert(offsetof(UABP_SkeletonChampion_C, AnimGraphNode_ComponentToLocalSpace_1) == 0x000AE0, "Member 'UABP_SkeletonChampion_C::AnimGraphNode_ComponentToLocalSpace_1' has a wrong offset!");
static_assert(offsetof(UABP_SkeletonChampion_C, AnimGraphNode_BlendListByBool_1) == 0x000B00, "Member 'UABP_SkeletonChampion_C::AnimGraphNode_BlendListByBool_1' has a wrong offset!");
static_assert(offsetof(UABP_SkeletonChampion_C, AnimGraphNode_StateResult_5) == 0x000B48, "Member 'UABP_SkeletonChampion_C::AnimGraphNode_StateResult_5' has a wrong offset!");
static_assert(offsetof(UABP_SkeletonChampion_C, AnimGraphNode_SequencePlayer_2) == 0x000B68, "Member 'UABP_SkeletonChampion_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(UABP_SkeletonChampion_C, AnimGraphNode_SequencePlayer_1) == 0x000BB0, "Member 'UABP_SkeletonChampion_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UABP_SkeletonChampion_C, AnimGraphNode_UseCachedPose_3) == 0x000BF8, "Member 'UABP_SkeletonChampion_C::AnimGraphNode_UseCachedPose_3' has a wrong offset!");
static_assert(offsetof(UABP_SkeletonChampion_C, AnimGraphNode_ApplyAdditive_1) == 0x000C20, "Member 'UABP_SkeletonChampion_C::AnimGraphNode_ApplyAdditive_1' has a wrong offset!");
static_assert(offsetof(UABP_SkeletonChampion_C, AnimGraphNode_UseCachedPose_2) == 0x000CE8, "Member 'UABP_SkeletonChampion_C::AnimGraphNode_UseCachedPose_2' has a wrong offset!");
static_assert(offsetof(UABP_SkeletonChampion_C, AnimGraphNode_UseCachedPose_1) == 0x000D10, "Member 'UABP_SkeletonChampion_C::AnimGraphNode_UseCachedPose_1' has a wrong offset!");
static_assert(offsetof(UABP_SkeletonChampion_C, AnimGraphNode_ApplyAdditive) == 0x000D38, "Member 'UABP_SkeletonChampion_C::AnimGraphNode_ApplyAdditive' has a wrong offset!");
static_assert(offsetof(UABP_SkeletonChampion_C, AnimGraphNode_LayeredBoneBlend) == 0x000E00, "Member 'UABP_SkeletonChampion_C::AnimGraphNode_LayeredBoneBlend' has a wrong offset!");
static_assert(offsetof(UABP_SkeletonChampion_C, AnimGraphNode_LocalToComponentSpace) == 0x000EF0, "Member 'UABP_SkeletonChampion_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UABP_SkeletonChampion_C, AnimGraphNode_LegIK) == 0x000F10, "Member 'UABP_SkeletonChampion_C::AnimGraphNode_LegIK' has a wrong offset!");
static_assert(offsetof(UABP_SkeletonChampion_C, AnimGraphNode_ComponentToLocalSpace) == 0x001008, "Member 'UABP_SkeletonChampion_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UABP_SkeletonChampion_C, AnimGraphNode_BlendListByBool) == 0x001028, "Member 'UABP_SkeletonChampion_C::AnimGraphNode_BlendListByBool' has a wrong offset!");
static_assert(offsetof(UABP_SkeletonChampion_C, AnimGraphNode_StateResult_4) == 0x001070, "Member 'UABP_SkeletonChampion_C::AnimGraphNode_StateResult_4' has a wrong offset!");
static_assert(offsetof(UABP_SkeletonChampion_C, AnimGraphNode_UseCachedPose) == 0x001090, "Member 'UABP_SkeletonChampion_C::AnimGraphNode_UseCachedPose' has a wrong offset!");
static_assert(offsetof(UABP_SkeletonChampion_C, AnimGraphNode_StateResult_3) == 0x0010B8, "Member 'UABP_SkeletonChampion_C::AnimGraphNode_StateResult_3' has a wrong offset!");
static_assert(offsetof(UABP_SkeletonChampion_C, AnimGraphNode_StateMachine_1) == 0x0010D8, "Member 'UABP_SkeletonChampion_C::AnimGraphNode_StateMachine_1' has a wrong offset!");
static_assert(offsetof(UABP_SkeletonChampion_C, AnimGraphNode_TransitionResult_5) == 0x0011A0, "Member 'UABP_SkeletonChampion_C::AnimGraphNode_TransitionResult_5' has a wrong offset!");
static_assert(offsetof(UABP_SkeletonChampion_C, AnimGraphNode_TransitionResult_4) == 0x0011C8, "Member 'UABP_SkeletonChampion_C::AnimGraphNode_TransitionResult_4' has a wrong offset!");
static_assert(offsetof(UABP_SkeletonChampion_C, AnimGraphNode_TransitionResult_3) == 0x0011F0, "Member 'UABP_SkeletonChampion_C::AnimGraphNode_TransitionResult_3' has a wrong offset!");
static_assert(offsetof(UABP_SkeletonChampion_C, AnimGraphNode_TransitionResult_2) == 0x001218, "Member 'UABP_SkeletonChampion_C::AnimGraphNode_TransitionResult_2' has a wrong offset!");
static_assert(offsetof(UABP_SkeletonChampion_C, AnimGraphNode_TransitionResult_1) == 0x001240, "Member 'UABP_SkeletonChampion_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(UABP_SkeletonChampion_C, AnimGraphNode_TransitionResult) == 0x001268, "Member 'UABP_SkeletonChampion_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UABP_SkeletonChampion_C, AnimGraphNode_BlendSpacePlayer_1) == 0x001290, "Member 'UABP_SkeletonChampion_C::AnimGraphNode_BlendSpacePlayer_1' has a wrong offset!");
static_assert(offsetof(UABP_SkeletonChampion_C, AnimGraphNode_StateResult_2) == 0x001300, "Member 'UABP_SkeletonChampion_C::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(UABP_SkeletonChampion_C, AnimGraphNode_SequencePlayer) == 0x001320, "Member 'UABP_SkeletonChampion_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UABP_SkeletonChampion_C, AnimGraphNode_StateResult_1) == 0x001368, "Member 'UABP_SkeletonChampion_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UABP_SkeletonChampion_C, AnimGraphNode_BlendSpacePlayer) == 0x001388, "Member 'UABP_SkeletonChampion_C::AnimGraphNode_BlendSpacePlayer' has a wrong offset!");
static_assert(offsetof(UABP_SkeletonChampion_C, AnimGraphNode_StateResult) == 0x0013F8, "Member 'UABP_SkeletonChampion_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UABP_SkeletonChampion_C, AnimGraphNode_StateMachine) == 0x001418, "Member 'UABP_SkeletonChampion_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UABP_SkeletonChampion_C, AnimGraphNode_SaveCachedPose) == 0x0014E0, "Member 'UABP_SkeletonChampion_C::AnimGraphNode_SaveCachedPose' has a wrong offset!");
static_assert(offsetof(UABP_SkeletonChampion_C, AnimGraphNode_Slot) == 0x001560, "Member 'UABP_SkeletonChampion_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UABP_SkeletonChampion_C, InCombat) == 0x0015A8, "Member 'UABP_SkeletonChampion_C::InCombat' has a wrong offset!");

}

