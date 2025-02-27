#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_Sabertooth

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ABP_Sabertooth_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "DungeonCrawler_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_Sabertooth.ABP_Sabertooth_C
// 0x0B10 (0x1040 - 0x0530)
class UABP_Sabertooth_C final : public UDCMonsterAnimInstanceBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0530(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct ABP_Sabertooth::FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                           // 0x0538(0x000C)(HasGetValueTypeHash)
	uint8                                         Pad_4A0A[0x4];                                     // 0x0544(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0548(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0550(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0558(0x0020)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;                      // 0x0578(0x0080)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_10;                 // 0x05F8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_9;                  // 0x0620(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_8;                  // 0x0648(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_7;                  // 0x0670(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_6;                  // 0x0698(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_4;                     // 0x06C0(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x06E8(0x0048)()
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive_1;                     // 0x0730(0x00C8)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_3;                     // 0x07F8(0x0028)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend_1;                  // 0x0820(0x00F0)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_5;                       // 0x0910(0x0020)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_2;                     // 0x0930(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x0958(0x0048)()
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive;                       // 0x09A0(0x00C8)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_1;                     // 0x0A68(0x0028)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend;                    // 0x0A90(0x00F0)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_4;                       // 0x0B80(0x0020)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;                       // 0x0BA0(0x0028)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_3;                       // 0x0BC8(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine_1;                      // 0x0BE8(0x00C8)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_5;                  // 0x0CB0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_4;                  // 0x0CD8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_3;                  // 0x0D00(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_2;                  // 0x0D28(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x0D50(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x0D78(0x0028)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer_1;                  // 0x0DA0(0x0070)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;                       // 0x0E10(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x0E30(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x0E78(0x0020)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer;                    // 0x0E98(0x0070)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x0F08(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x0F28(0x00C8)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x0FF0(0x0048)()
	bool                                          On_Combat;                                         // 0x1038(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AnimGraph(struct FPoseLink* Param_AnimGraph);
	void ExecuteUbergraph_ABP_Sabertooth(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_Sabertooth_C">();
	}
	static class UABP_Sabertooth_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_Sabertooth_C>();
	}
};
static_assert(alignof(UABP_Sabertooth_C) == 0x000010, "Wrong alignment on UABP_Sabertooth_C");
static_assert(sizeof(UABP_Sabertooth_C) == 0x001040, "Wrong size on UABP_Sabertooth_C");
static_assert(offsetof(UABP_Sabertooth_C, UberGraphFrame) == 0x000530, "Member 'UABP_Sabertooth_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABP_Sabertooth_C, __AnimBlueprintMutables) == 0x000538, "Member 'UABP_Sabertooth_C::__AnimBlueprintMutables' has a wrong offset!");
static_assert(offsetof(UABP_Sabertooth_C, AnimBlueprintExtension_PropertyAccess) == 0x000548, "Member 'UABP_Sabertooth_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UABP_Sabertooth_C, AnimBlueprintExtension_Base) == 0x000550, "Member 'UABP_Sabertooth_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UABP_Sabertooth_C, AnimGraphNode_Root) == 0x000558, "Member 'UABP_Sabertooth_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UABP_Sabertooth_C, AnimGraphNode_SaveCachedPose) == 0x000578, "Member 'UABP_Sabertooth_C::AnimGraphNode_SaveCachedPose' has a wrong offset!");
static_assert(offsetof(UABP_Sabertooth_C, AnimGraphNode_TransitionResult_10) == 0x0005F8, "Member 'UABP_Sabertooth_C::AnimGraphNode_TransitionResult_10' has a wrong offset!");
static_assert(offsetof(UABP_Sabertooth_C, AnimGraphNode_TransitionResult_9) == 0x000620, "Member 'UABP_Sabertooth_C::AnimGraphNode_TransitionResult_9' has a wrong offset!");
static_assert(offsetof(UABP_Sabertooth_C, AnimGraphNode_TransitionResult_8) == 0x000648, "Member 'UABP_Sabertooth_C::AnimGraphNode_TransitionResult_8' has a wrong offset!");
static_assert(offsetof(UABP_Sabertooth_C, AnimGraphNode_TransitionResult_7) == 0x000670, "Member 'UABP_Sabertooth_C::AnimGraphNode_TransitionResult_7' has a wrong offset!");
static_assert(offsetof(UABP_Sabertooth_C, AnimGraphNode_TransitionResult_6) == 0x000698, "Member 'UABP_Sabertooth_C::AnimGraphNode_TransitionResult_6' has a wrong offset!");
static_assert(offsetof(UABP_Sabertooth_C, AnimGraphNode_UseCachedPose_4) == 0x0006C0, "Member 'UABP_Sabertooth_C::AnimGraphNode_UseCachedPose_4' has a wrong offset!");
static_assert(offsetof(UABP_Sabertooth_C, AnimGraphNode_SequencePlayer_2) == 0x0006E8, "Member 'UABP_Sabertooth_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(UABP_Sabertooth_C, AnimGraphNode_ApplyAdditive_1) == 0x000730, "Member 'UABP_Sabertooth_C::AnimGraphNode_ApplyAdditive_1' has a wrong offset!");
static_assert(offsetof(UABP_Sabertooth_C, AnimGraphNode_UseCachedPose_3) == 0x0007F8, "Member 'UABP_Sabertooth_C::AnimGraphNode_UseCachedPose_3' has a wrong offset!");
static_assert(offsetof(UABP_Sabertooth_C, AnimGraphNode_LayeredBoneBlend_1) == 0x000820, "Member 'UABP_Sabertooth_C::AnimGraphNode_LayeredBoneBlend_1' has a wrong offset!");
static_assert(offsetof(UABP_Sabertooth_C, AnimGraphNode_StateResult_5) == 0x000910, "Member 'UABP_Sabertooth_C::AnimGraphNode_StateResult_5' has a wrong offset!");
static_assert(offsetof(UABP_Sabertooth_C, AnimGraphNode_UseCachedPose_2) == 0x000930, "Member 'UABP_Sabertooth_C::AnimGraphNode_UseCachedPose_2' has a wrong offset!");
static_assert(offsetof(UABP_Sabertooth_C, AnimGraphNode_SequencePlayer_1) == 0x000958, "Member 'UABP_Sabertooth_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UABP_Sabertooth_C, AnimGraphNode_ApplyAdditive) == 0x0009A0, "Member 'UABP_Sabertooth_C::AnimGraphNode_ApplyAdditive' has a wrong offset!");
static_assert(offsetof(UABP_Sabertooth_C, AnimGraphNode_UseCachedPose_1) == 0x000A68, "Member 'UABP_Sabertooth_C::AnimGraphNode_UseCachedPose_1' has a wrong offset!");
static_assert(offsetof(UABP_Sabertooth_C, AnimGraphNode_LayeredBoneBlend) == 0x000A90, "Member 'UABP_Sabertooth_C::AnimGraphNode_LayeredBoneBlend' has a wrong offset!");
static_assert(offsetof(UABP_Sabertooth_C, AnimGraphNode_StateResult_4) == 0x000B80, "Member 'UABP_Sabertooth_C::AnimGraphNode_StateResult_4' has a wrong offset!");
static_assert(offsetof(UABP_Sabertooth_C, AnimGraphNode_UseCachedPose) == 0x000BA0, "Member 'UABP_Sabertooth_C::AnimGraphNode_UseCachedPose' has a wrong offset!");
static_assert(offsetof(UABP_Sabertooth_C, AnimGraphNode_StateResult_3) == 0x000BC8, "Member 'UABP_Sabertooth_C::AnimGraphNode_StateResult_3' has a wrong offset!");
static_assert(offsetof(UABP_Sabertooth_C, AnimGraphNode_StateMachine_1) == 0x000BE8, "Member 'UABP_Sabertooth_C::AnimGraphNode_StateMachine_1' has a wrong offset!");
static_assert(offsetof(UABP_Sabertooth_C, AnimGraphNode_TransitionResult_5) == 0x000CB0, "Member 'UABP_Sabertooth_C::AnimGraphNode_TransitionResult_5' has a wrong offset!");
static_assert(offsetof(UABP_Sabertooth_C, AnimGraphNode_TransitionResult_4) == 0x000CD8, "Member 'UABP_Sabertooth_C::AnimGraphNode_TransitionResult_4' has a wrong offset!");
static_assert(offsetof(UABP_Sabertooth_C, AnimGraphNode_TransitionResult_3) == 0x000D00, "Member 'UABP_Sabertooth_C::AnimGraphNode_TransitionResult_3' has a wrong offset!");
static_assert(offsetof(UABP_Sabertooth_C, AnimGraphNode_TransitionResult_2) == 0x000D28, "Member 'UABP_Sabertooth_C::AnimGraphNode_TransitionResult_2' has a wrong offset!");
static_assert(offsetof(UABP_Sabertooth_C, AnimGraphNode_TransitionResult_1) == 0x000D50, "Member 'UABP_Sabertooth_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(UABP_Sabertooth_C, AnimGraphNode_TransitionResult) == 0x000D78, "Member 'UABP_Sabertooth_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UABP_Sabertooth_C, AnimGraphNode_BlendSpacePlayer_1) == 0x000DA0, "Member 'UABP_Sabertooth_C::AnimGraphNode_BlendSpacePlayer_1' has a wrong offset!");
static_assert(offsetof(UABP_Sabertooth_C, AnimGraphNode_StateResult_2) == 0x000E10, "Member 'UABP_Sabertooth_C::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(UABP_Sabertooth_C, AnimGraphNode_SequencePlayer) == 0x000E30, "Member 'UABP_Sabertooth_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UABP_Sabertooth_C, AnimGraphNode_StateResult_1) == 0x000E78, "Member 'UABP_Sabertooth_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UABP_Sabertooth_C, AnimGraphNode_BlendSpacePlayer) == 0x000E98, "Member 'UABP_Sabertooth_C::AnimGraphNode_BlendSpacePlayer' has a wrong offset!");
static_assert(offsetof(UABP_Sabertooth_C, AnimGraphNode_StateResult) == 0x000F08, "Member 'UABP_Sabertooth_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UABP_Sabertooth_C, AnimGraphNode_StateMachine) == 0x000F28, "Member 'UABP_Sabertooth_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UABP_Sabertooth_C, AnimGraphNode_Slot) == 0x000FF0, "Member 'UABP_Sabertooth_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UABP_Sabertooth_C, On_Combat) == 0x001038, "Member 'UABP_Sabertooth_C::On_Combat' has a wrong offset!");

}

