#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_Hydra3

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "ABP_Hydra3_structs.hpp"
#include "DungeonCrawler_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_Hydra3.ABP_Hydra3_C
// 0x09B0 (0x0EE0 - 0x0530)
class UABP_Hydra3_C final : public UDCMonsterAnimInstanceBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0530(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct ABP_Hydra3::FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                           // 0x0538(0x0003)(HasGetValueTypeHash)
	uint8                                         Pad_3C55[0x5];                                     // 0x053B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0540(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0548(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0550(0x0020)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_10;                 // 0x0570(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_9;                  // 0x0598(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_8;                  // 0x05C0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_7;                  // 0x05E8(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_4;                    // 0x0610(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_6;                       // 0x0658(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_3;                    // 0x0678(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_5;                       // 0x06C0(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x06E0(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_4;                       // 0x0728(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine_1;                      // 0x0748(0x00C8)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x0810(0x0048)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_6;                  // 0x0858(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_5;                  // 0x0880(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_4;                  // 0x08A8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_3;                  // 0x08D0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_2;                  // 0x08F8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x0920(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x0948(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_5;                     // 0x0970(0x0028)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_3;                       // 0x0998(0x0020)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_4;                     // 0x09B8(0x0028)()
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive_1;                     // 0x09E0(0x00C8)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_1;                   // 0x0AA8(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x0AF0(0x0048)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_3;                     // 0x0B38(0x0028)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;                       // 0x0B60(0x0020)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_2;                     // 0x0B80(0x0028)()
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive;                       // 0x0BA8(0x00C8)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool;                     // 0x0C70(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x0CB8(0x0048)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_1;                     // 0x0D00(0x0028)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x0D28(0x0020)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;                       // 0x0D48(0x0028)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x0D70(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x0D90(0x00C8)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;                      // 0x0E58(0x0080)()

public:
	void AnimGraph(struct FPoseLink* Param_AnimGraph);
	void ExecuteUbergraph_ABP_Hydra3(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_Hydra3_C">();
	}
	static class UABP_Hydra3_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_Hydra3_C>();
	}
};
static_assert(alignof(UABP_Hydra3_C) == 0x000010, "Wrong alignment on UABP_Hydra3_C");
static_assert(sizeof(UABP_Hydra3_C) == 0x000EE0, "Wrong size on UABP_Hydra3_C");
static_assert(offsetof(UABP_Hydra3_C, UberGraphFrame) == 0x000530, "Member 'UABP_Hydra3_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABP_Hydra3_C, __AnimBlueprintMutables) == 0x000538, "Member 'UABP_Hydra3_C::__AnimBlueprintMutables' has a wrong offset!");
static_assert(offsetof(UABP_Hydra3_C, AnimBlueprintExtension_PropertyAccess) == 0x000540, "Member 'UABP_Hydra3_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UABP_Hydra3_C, AnimBlueprintExtension_Base) == 0x000548, "Member 'UABP_Hydra3_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UABP_Hydra3_C, AnimGraphNode_Root) == 0x000550, "Member 'UABP_Hydra3_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UABP_Hydra3_C, AnimGraphNode_TransitionResult_10) == 0x000570, "Member 'UABP_Hydra3_C::AnimGraphNode_TransitionResult_10' has a wrong offset!");
static_assert(offsetof(UABP_Hydra3_C, AnimGraphNode_TransitionResult_9) == 0x000598, "Member 'UABP_Hydra3_C::AnimGraphNode_TransitionResult_9' has a wrong offset!");
static_assert(offsetof(UABP_Hydra3_C, AnimGraphNode_TransitionResult_8) == 0x0005C0, "Member 'UABP_Hydra3_C::AnimGraphNode_TransitionResult_8' has a wrong offset!");
static_assert(offsetof(UABP_Hydra3_C, AnimGraphNode_TransitionResult_7) == 0x0005E8, "Member 'UABP_Hydra3_C::AnimGraphNode_TransitionResult_7' has a wrong offset!");
static_assert(offsetof(UABP_Hydra3_C, AnimGraphNode_SequencePlayer_4) == 0x000610, "Member 'UABP_Hydra3_C::AnimGraphNode_SequencePlayer_4' has a wrong offset!");
static_assert(offsetof(UABP_Hydra3_C, AnimGraphNode_StateResult_6) == 0x000658, "Member 'UABP_Hydra3_C::AnimGraphNode_StateResult_6' has a wrong offset!");
static_assert(offsetof(UABP_Hydra3_C, AnimGraphNode_SequencePlayer_3) == 0x000678, "Member 'UABP_Hydra3_C::AnimGraphNode_SequencePlayer_3' has a wrong offset!");
static_assert(offsetof(UABP_Hydra3_C, AnimGraphNode_StateResult_5) == 0x0006C0, "Member 'UABP_Hydra3_C::AnimGraphNode_StateResult_5' has a wrong offset!");
static_assert(offsetof(UABP_Hydra3_C, AnimGraphNode_SequencePlayer_2) == 0x0006E0, "Member 'UABP_Hydra3_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(UABP_Hydra3_C, AnimGraphNode_StateResult_4) == 0x000728, "Member 'UABP_Hydra3_C::AnimGraphNode_StateResult_4' has a wrong offset!");
static_assert(offsetof(UABP_Hydra3_C, AnimGraphNode_StateMachine_1) == 0x000748, "Member 'UABP_Hydra3_C::AnimGraphNode_StateMachine_1' has a wrong offset!");
static_assert(offsetof(UABP_Hydra3_C, AnimGraphNode_Slot) == 0x000810, "Member 'UABP_Hydra3_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UABP_Hydra3_C, AnimGraphNode_TransitionResult_6) == 0x000858, "Member 'UABP_Hydra3_C::AnimGraphNode_TransitionResult_6' has a wrong offset!");
static_assert(offsetof(UABP_Hydra3_C, AnimGraphNode_TransitionResult_5) == 0x000880, "Member 'UABP_Hydra3_C::AnimGraphNode_TransitionResult_5' has a wrong offset!");
static_assert(offsetof(UABP_Hydra3_C, AnimGraphNode_TransitionResult_4) == 0x0008A8, "Member 'UABP_Hydra3_C::AnimGraphNode_TransitionResult_4' has a wrong offset!");
static_assert(offsetof(UABP_Hydra3_C, AnimGraphNode_TransitionResult_3) == 0x0008D0, "Member 'UABP_Hydra3_C::AnimGraphNode_TransitionResult_3' has a wrong offset!");
static_assert(offsetof(UABP_Hydra3_C, AnimGraphNode_TransitionResult_2) == 0x0008F8, "Member 'UABP_Hydra3_C::AnimGraphNode_TransitionResult_2' has a wrong offset!");
static_assert(offsetof(UABP_Hydra3_C, AnimGraphNode_TransitionResult_1) == 0x000920, "Member 'UABP_Hydra3_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(UABP_Hydra3_C, AnimGraphNode_TransitionResult) == 0x000948, "Member 'UABP_Hydra3_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UABP_Hydra3_C, AnimGraphNode_UseCachedPose_5) == 0x000970, "Member 'UABP_Hydra3_C::AnimGraphNode_UseCachedPose_5' has a wrong offset!");
static_assert(offsetof(UABP_Hydra3_C, AnimGraphNode_StateResult_3) == 0x000998, "Member 'UABP_Hydra3_C::AnimGraphNode_StateResult_3' has a wrong offset!");
static_assert(offsetof(UABP_Hydra3_C, AnimGraphNode_UseCachedPose_4) == 0x0009B8, "Member 'UABP_Hydra3_C::AnimGraphNode_UseCachedPose_4' has a wrong offset!");
static_assert(offsetof(UABP_Hydra3_C, AnimGraphNode_ApplyAdditive_1) == 0x0009E0, "Member 'UABP_Hydra3_C::AnimGraphNode_ApplyAdditive_1' has a wrong offset!");
static_assert(offsetof(UABP_Hydra3_C, AnimGraphNode_BlendListByBool_1) == 0x000AA8, "Member 'UABP_Hydra3_C::AnimGraphNode_BlendListByBool_1' has a wrong offset!");
static_assert(offsetof(UABP_Hydra3_C, AnimGraphNode_SequencePlayer_1) == 0x000AF0, "Member 'UABP_Hydra3_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UABP_Hydra3_C, AnimGraphNode_UseCachedPose_3) == 0x000B38, "Member 'UABP_Hydra3_C::AnimGraphNode_UseCachedPose_3' has a wrong offset!");
static_assert(offsetof(UABP_Hydra3_C, AnimGraphNode_StateResult_2) == 0x000B60, "Member 'UABP_Hydra3_C::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(UABP_Hydra3_C, AnimGraphNode_UseCachedPose_2) == 0x000B80, "Member 'UABP_Hydra3_C::AnimGraphNode_UseCachedPose_2' has a wrong offset!");
static_assert(offsetof(UABP_Hydra3_C, AnimGraphNode_ApplyAdditive) == 0x000BA8, "Member 'UABP_Hydra3_C::AnimGraphNode_ApplyAdditive' has a wrong offset!");
static_assert(offsetof(UABP_Hydra3_C, AnimGraphNode_BlendListByBool) == 0x000C70, "Member 'UABP_Hydra3_C::AnimGraphNode_BlendListByBool' has a wrong offset!");
static_assert(offsetof(UABP_Hydra3_C, AnimGraphNode_SequencePlayer) == 0x000CB8, "Member 'UABP_Hydra3_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UABP_Hydra3_C, AnimGraphNode_UseCachedPose_1) == 0x000D00, "Member 'UABP_Hydra3_C::AnimGraphNode_UseCachedPose_1' has a wrong offset!");
static_assert(offsetof(UABP_Hydra3_C, AnimGraphNode_StateResult_1) == 0x000D28, "Member 'UABP_Hydra3_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UABP_Hydra3_C, AnimGraphNode_UseCachedPose) == 0x000D48, "Member 'UABP_Hydra3_C::AnimGraphNode_UseCachedPose' has a wrong offset!");
static_assert(offsetof(UABP_Hydra3_C, AnimGraphNode_StateResult) == 0x000D70, "Member 'UABP_Hydra3_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UABP_Hydra3_C, AnimGraphNode_StateMachine) == 0x000D90, "Member 'UABP_Hydra3_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UABP_Hydra3_C, AnimGraphNode_SaveCachedPose) == 0x000E58, "Member 'UABP_Hydra3_C::AnimGraphNode_SaveCachedPose' has a wrong offset!");

}

