#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_FrostSentinel

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "DungeonCrawler_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_FrostSentinel.ABP_FrostSentinel_C
// 0x0270 (0x07A0 - 0x0530)
class UABP_FrostSentinel_C final : public UDCMonsterAnimInstanceBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0530(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0538(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0540(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0548(0x0020)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x0568(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x0590(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x05B8(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x0600(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x0620(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x0668(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x0688(0x00C8)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x0750(0x0048)()

public:
	void AnimGraph(struct FPoseLink* Param_AnimGraph);
	void ExecuteUbergraph_ABP_FrostSentinel(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_FrostSentinel_C">();
	}
	static class UABP_FrostSentinel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_FrostSentinel_C>();
	}
};
static_assert(alignof(UABP_FrostSentinel_C) == 0x000010, "Wrong alignment on UABP_FrostSentinel_C");
static_assert(sizeof(UABP_FrostSentinel_C) == 0x0007A0, "Wrong size on UABP_FrostSentinel_C");
static_assert(offsetof(UABP_FrostSentinel_C, UberGraphFrame) == 0x000530, "Member 'UABP_FrostSentinel_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABP_FrostSentinel_C, AnimBlueprintExtension_PropertyAccess) == 0x000538, "Member 'UABP_FrostSentinel_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UABP_FrostSentinel_C, AnimBlueprintExtension_Base) == 0x000540, "Member 'UABP_FrostSentinel_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UABP_FrostSentinel_C, AnimGraphNode_Root) == 0x000548, "Member 'UABP_FrostSentinel_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UABP_FrostSentinel_C, AnimGraphNode_TransitionResult_1) == 0x000568, "Member 'UABP_FrostSentinel_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(UABP_FrostSentinel_C, AnimGraphNode_TransitionResult) == 0x000590, "Member 'UABP_FrostSentinel_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UABP_FrostSentinel_C, AnimGraphNode_SequencePlayer_1) == 0x0005B8, "Member 'UABP_FrostSentinel_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UABP_FrostSentinel_C, AnimGraphNode_StateResult_1) == 0x000600, "Member 'UABP_FrostSentinel_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UABP_FrostSentinel_C, AnimGraphNode_SequencePlayer) == 0x000620, "Member 'UABP_FrostSentinel_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UABP_FrostSentinel_C, AnimGraphNode_StateResult) == 0x000668, "Member 'UABP_FrostSentinel_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UABP_FrostSentinel_C, AnimGraphNode_StateMachine) == 0x000688, "Member 'UABP_FrostSentinel_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UABP_FrostSentinel_C, AnimGraphNode_Slot) == 0x000750, "Member 'UABP_FrostSentinel_C::AnimGraphNode_Slot' has a wrong offset!");

}

