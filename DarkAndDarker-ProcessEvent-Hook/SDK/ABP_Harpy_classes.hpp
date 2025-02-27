#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_Harpy

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "ABP_Harpy_structs.hpp"
#include "DungeonCrawler_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_Harpy.ABP_Harpy_C
// 0x0FC0 (0x14F0 - 0x0530)
class UABP_Harpy_C final : public UDCMonsterAnimInstanceBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0530(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct ABP_Harpy::FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                           // 0x0538(0x0010)(HasGetValueTypeHash)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0548(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0550(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0558(0x0020)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_10;                 // 0x0578(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_9;                  // 0x05A0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_8;                  // 0x05C8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_7;                  // 0x05F0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_6;                  // 0x0618(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_5;                  // 0x0640(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_5;                    // 0x0668(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_6;                       // 0x06B0(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_4;                    // 0x06D0(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_5;                       // 0x0718(0x0020)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer_1;                  // 0x0738(0x0070)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_4;                       // 0x07A8(0x0020)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer;                    // 0x07C8(0x0070)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_3;                       // 0x0838(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine_1;                      // 0x0858(0x00C8)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_4;                  // 0x0920(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_3;                  // 0x0948(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_2;                  // 0x0970(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x0998(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x09C0(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_3;                    // 0x09E8(0x0048)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_7;                     // 0x0A30(0x0028)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend_3;                  // 0x0A58(0x00F0)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_1;                   // 0x0B48(0x0048)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_6;                     // 0x0B90(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x0BB8(0x0048)()
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive_2;                     // 0x0C00(0x00C8)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_5;                     // 0x0CC8(0x0028)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend_2;                  // 0x0CF0(0x00F0)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;                       // 0x0DE0(0x0020)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_4;                     // 0x0E00(0x0028)()
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive_1;                     // 0x0E28(0x00C8)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x0EF0(0x0048)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_3;                     // 0x0F38(0x0028)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend_1;                  // 0x0F60(0x00F0)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool;                     // 0x1050(0x0048)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_2;                     // 0x1098(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_1;                     // 0x10C0(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x10E8(0x0048)()
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive;                       // 0x1130(0x00C8)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend;                    // 0x11F8(0x00F0)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x12E8(0x0020)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;                       // 0x1308(0x0028)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x1330(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x1350(0x00C8)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;                      // 0x1418(0x0080)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x1498(0x0048)()
	bool                                          Is_Land;                                           // 0x14E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Land_Death;                                        // 0x14E1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Air_Death;                                         // 0x14E2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Falling;                                           // 0x14E3(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Play_Hit_Reaction_Not_Falling;                     // 0x14E4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Play_Hit_Reaction_Not_Falling_Flip_Flop;           // 0x14E5(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AnimGraph(struct FPoseLink* Param_AnimGraph);
	void BlueprintThreadSafeUpdateAnimation(float DeltaTime);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_ABP_Harpy(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_Harpy_C">();
	}
	static class UABP_Harpy_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_Harpy_C>();
	}
};
static_assert(alignof(UABP_Harpy_C) == 0x000010, "Wrong alignment on UABP_Harpy_C");
static_assert(sizeof(UABP_Harpy_C) == 0x0014F0, "Wrong size on UABP_Harpy_C");
static_assert(offsetof(UABP_Harpy_C, UberGraphFrame) == 0x000530, "Member 'UABP_Harpy_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABP_Harpy_C, __AnimBlueprintMutables) == 0x000538, "Member 'UABP_Harpy_C::__AnimBlueprintMutables' has a wrong offset!");
static_assert(offsetof(UABP_Harpy_C, AnimBlueprintExtension_PropertyAccess) == 0x000548, "Member 'UABP_Harpy_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UABP_Harpy_C, AnimBlueprintExtension_Base) == 0x000550, "Member 'UABP_Harpy_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UABP_Harpy_C, AnimGraphNode_Root) == 0x000558, "Member 'UABP_Harpy_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UABP_Harpy_C, AnimGraphNode_TransitionResult_10) == 0x000578, "Member 'UABP_Harpy_C::AnimGraphNode_TransitionResult_10' has a wrong offset!");
static_assert(offsetof(UABP_Harpy_C, AnimGraphNode_TransitionResult_9) == 0x0005A0, "Member 'UABP_Harpy_C::AnimGraphNode_TransitionResult_9' has a wrong offset!");
static_assert(offsetof(UABP_Harpy_C, AnimGraphNode_TransitionResult_8) == 0x0005C8, "Member 'UABP_Harpy_C::AnimGraphNode_TransitionResult_8' has a wrong offset!");
static_assert(offsetof(UABP_Harpy_C, AnimGraphNode_TransitionResult_7) == 0x0005F0, "Member 'UABP_Harpy_C::AnimGraphNode_TransitionResult_7' has a wrong offset!");
static_assert(offsetof(UABP_Harpy_C, AnimGraphNode_TransitionResult_6) == 0x000618, "Member 'UABP_Harpy_C::AnimGraphNode_TransitionResult_6' has a wrong offset!");
static_assert(offsetof(UABP_Harpy_C, AnimGraphNode_TransitionResult_5) == 0x000640, "Member 'UABP_Harpy_C::AnimGraphNode_TransitionResult_5' has a wrong offset!");
static_assert(offsetof(UABP_Harpy_C, AnimGraphNode_SequencePlayer_5) == 0x000668, "Member 'UABP_Harpy_C::AnimGraphNode_SequencePlayer_5' has a wrong offset!");
static_assert(offsetof(UABP_Harpy_C, AnimGraphNode_StateResult_6) == 0x0006B0, "Member 'UABP_Harpy_C::AnimGraphNode_StateResult_6' has a wrong offset!");
static_assert(offsetof(UABP_Harpy_C, AnimGraphNode_SequencePlayer_4) == 0x0006D0, "Member 'UABP_Harpy_C::AnimGraphNode_SequencePlayer_4' has a wrong offset!");
static_assert(offsetof(UABP_Harpy_C, AnimGraphNode_StateResult_5) == 0x000718, "Member 'UABP_Harpy_C::AnimGraphNode_StateResult_5' has a wrong offset!");
static_assert(offsetof(UABP_Harpy_C, AnimGraphNode_BlendSpacePlayer_1) == 0x000738, "Member 'UABP_Harpy_C::AnimGraphNode_BlendSpacePlayer_1' has a wrong offset!");
static_assert(offsetof(UABP_Harpy_C, AnimGraphNode_StateResult_4) == 0x0007A8, "Member 'UABP_Harpy_C::AnimGraphNode_StateResult_4' has a wrong offset!");
static_assert(offsetof(UABP_Harpy_C, AnimGraphNode_BlendSpacePlayer) == 0x0007C8, "Member 'UABP_Harpy_C::AnimGraphNode_BlendSpacePlayer' has a wrong offset!");
static_assert(offsetof(UABP_Harpy_C, AnimGraphNode_StateResult_3) == 0x000838, "Member 'UABP_Harpy_C::AnimGraphNode_StateResult_3' has a wrong offset!");
static_assert(offsetof(UABP_Harpy_C, AnimGraphNode_StateMachine_1) == 0x000858, "Member 'UABP_Harpy_C::AnimGraphNode_StateMachine_1' has a wrong offset!");
static_assert(offsetof(UABP_Harpy_C, AnimGraphNode_TransitionResult_4) == 0x000920, "Member 'UABP_Harpy_C::AnimGraphNode_TransitionResult_4' has a wrong offset!");
static_assert(offsetof(UABP_Harpy_C, AnimGraphNode_TransitionResult_3) == 0x000948, "Member 'UABP_Harpy_C::AnimGraphNode_TransitionResult_3' has a wrong offset!");
static_assert(offsetof(UABP_Harpy_C, AnimGraphNode_TransitionResult_2) == 0x000970, "Member 'UABP_Harpy_C::AnimGraphNode_TransitionResult_2' has a wrong offset!");
static_assert(offsetof(UABP_Harpy_C, AnimGraphNode_TransitionResult_1) == 0x000998, "Member 'UABP_Harpy_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(UABP_Harpy_C, AnimGraphNode_TransitionResult) == 0x0009C0, "Member 'UABP_Harpy_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UABP_Harpy_C, AnimGraphNode_SequencePlayer_3) == 0x0009E8, "Member 'UABP_Harpy_C::AnimGraphNode_SequencePlayer_3' has a wrong offset!");
static_assert(offsetof(UABP_Harpy_C, AnimGraphNode_UseCachedPose_7) == 0x000A30, "Member 'UABP_Harpy_C::AnimGraphNode_UseCachedPose_7' has a wrong offset!");
static_assert(offsetof(UABP_Harpy_C, AnimGraphNode_LayeredBoneBlend_3) == 0x000A58, "Member 'UABP_Harpy_C::AnimGraphNode_LayeredBoneBlend_3' has a wrong offset!");
static_assert(offsetof(UABP_Harpy_C, AnimGraphNode_BlendListByBool_1) == 0x000B48, "Member 'UABP_Harpy_C::AnimGraphNode_BlendListByBool_1' has a wrong offset!");
static_assert(offsetof(UABP_Harpy_C, AnimGraphNode_UseCachedPose_6) == 0x000B90, "Member 'UABP_Harpy_C::AnimGraphNode_UseCachedPose_6' has a wrong offset!");
static_assert(offsetof(UABP_Harpy_C, AnimGraphNode_SequencePlayer_2) == 0x000BB8, "Member 'UABP_Harpy_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(UABP_Harpy_C, AnimGraphNode_ApplyAdditive_2) == 0x000C00, "Member 'UABP_Harpy_C::AnimGraphNode_ApplyAdditive_2' has a wrong offset!");
static_assert(offsetof(UABP_Harpy_C, AnimGraphNode_UseCachedPose_5) == 0x000CC8, "Member 'UABP_Harpy_C::AnimGraphNode_UseCachedPose_5' has a wrong offset!");
static_assert(offsetof(UABP_Harpy_C, AnimGraphNode_LayeredBoneBlend_2) == 0x000CF0, "Member 'UABP_Harpy_C::AnimGraphNode_LayeredBoneBlend_2' has a wrong offset!");
static_assert(offsetof(UABP_Harpy_C, AnimGraphNode_StateResult_2) == 0x000DE0, "Member 'UABP_Harpy_C::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(UABP_Harpy_C, AnimGraphNode_UseCachedPose_4) == 0x000E00, "Member 'UABP_Harpy_C::AnimGraphNode_UseCachedPose_4' has a wrong offset!");
static_assert(offsetof(UABP_Harpy_C, AnimGraphNode_ApplyAdditive_1) == 0x000E28, "Member 'UABP_Harpy_C::AnimGraphNode_ApplyAdditive_1' has a wrong offset!");
static_assert(offsetof(UABP_Harpy_C, AnimGraphNode_SequencePlayer_1) == 0x000EF0, "Member 'UABP_Harpy_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UABP_Harpy_C, AnimGraphNode_UseCachedPose_3) == 0x000F38, "Member 'UABP_Harpy_C::AnimGraphNode_UseCachedPose_3' has a wrong offset!");
static_assert(offsetof(UABP_Harpy_C, AnimGraphNode_LayeredBoneBlend_1) == 0x000F60, "Member 'UABP_Harpy_C::AnimGraphNode_LayeredBoneBlend_1' has a wrong offset!");
static_assert(offsetof(UABP_Harpy_C, AnimGraphNode_BlendListByBool) == 0x001050, "Member 'UABP_Harpy_C::AnimGraphNode_BlendListByBool' has a wrong offset!");
static_assert(offsetof(UABP_Harpy_C, AnimGraphNode_UseCachedPose_2) == 0x001098, "Member 'UABP_Harpy_C::AnimGraphNode_UseCachedPose_2' has a wrong offset!");
static_assert(offsetof(UABP_Harpy_C, AnimGraphNode_UseCachedPose_1) == 0x0010C0, "Member 'UABP_Harpy_C::AnimGraphNode_UseCachedPose_1' has a wrong offset!");
static_assert(offsetof(UABP_Harpy_C, AnimGraphNode_SequencePlayer) == 0x0010E8, "Member 'UABP_Harpy_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UABP_Harpy_C, AnimGraphNode_ApplyAdditive) == 0x001130, "Member 'UABP_Harpy_C::AnimGraphNode_ApplyAdditive' has a wrong offset!");
static_assert(offsetof(UABP_Harpy_C, AnimGraphNode_LayeredBoneBlend) == 0x0011F8, "Member 'UABP_Harpy_C::AnimGraphNode_LayeredBoneBlend' has a wrong offset!");
static_assert(offsetof(UABP_Harpy_C, AnimGraphNode_StateResult_1) == 0x0012E8, "Member 'UABP_Harpy_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UABP_Harpy_C, AnimGraphNode_UseCachedPose) == 0x001308, "Member 'UABP_Harpy_C::AnimGraphNode_UseCachedPose' has a wrong offset!");
static_assert(offsetof(UABP_Harpy_C, AnimGraphNode_StateResult) == 0x001330, "Member 'UABP_Harpy_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UABP_Harpy_C, AnimGraphNode_StateMachine) == 0x001350, "Member 'UABP_Harpy_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UABP_Harpy_C, AnimGraphNode_SaveCachedPose) == 0x001418, "Member 'UABP_Harpy_C::AnimGraphNode_SaveCachedPose' has a wrong offset!");
static_assert(offsetof(UABP_Harpy_C, AnimGraphNode_Slot) == 0x001498, "Member 'UABP_Harpy_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UABP_Harpy_C, Is_Land) == 0x0014E0, "Member 'UABP_Harpy_C::Is_Land' has a wrong offset!");
static_assert(offsetof(UABP_Harpy_C, Land_Death) == 0x0014E1, "Member 'UABP_Harpy_C::Land_Death' has a wrong offset!");
static_assert(offsetof(UABP_Harpy_C, Air_Death) == 0x0014E2, "Member 'UABP_Harpy_C::Air_Death' has a wrong offset!");
static_assert(offsetof(UABP_Harpy_C, Falling) == 0x0014E3, "Member 'UABP_Harpy_C::Falling' has a wrong offset!");
static_assert(offsetof(UABP_Harpy_C, Play_Hit_Reaction_Not_Falling) == 0x0014E4, "Member 'UABP_Harpy_C::Play_Hit_Reaction_Not_Falling' has a wrong offset!");
static_assert(offsetof(UABP_Harpy_C, Play_Hit_Reaction_Not_Falling_Flip_Flop) == 0x0014E5, "Member 'UABP_Harpy_C::Play_Hit_Reaction_Not_Falling_Flip_Flop' has a wrong offset!");

}

