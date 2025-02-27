#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_Otto

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "E_Otto_StanceType_structs.hpp"
#include "DungeonCrawler_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_Otto.ABP_Otto_C
// 0x0560 (0x0A90 - 0x0530)
class UABP_Otto_C final : public UDCMonsterAnimInstanceBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0530(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0538(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0540(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0548(0x0020)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_12;                 // 0x0568(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_11;                 // 0x0590(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_10;                 // 0x05B8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_9;                  // 0x05E0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_8;                  // 0x0608(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_7;                  // 0x0630(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_6;                  // 0x0658(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_5;                  // 0x0680(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_4;                  // 0x06A8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_3;                  // 0x06D0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_2;                  // 0x06F8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x0720(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x0748(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x0770(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_3;                       // 0x07B8(0x0020)()
	struct FAnimNode_RandomPlayer                 AnimGraphNode_RandomPlayer_1;                      // 0x07D8(0x0078)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;                       // 0x0850(0x0020)()
	struct FAnimNode_RandomPlayer                 AnimGraphNode_RandomPlayer;                        // 0x0870(0x0078)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x08E8(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x0908(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x0950(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x0970(0x00C8)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x0A38(0x0048)()
	E_Otto_StanceType                             Stance;                                            // 0x0A80(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SleepStance;                                       // 0x0A81(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          StandStance;                                       // 0x0A82(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SitStance;                                         // 0x0A83(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LieStance;                                         // 0x0A84(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Added_802EA04D45BE39398AD314A0EBB7B4CD();
	void Added_9F2231B346CCE4626A7A4F8AC7D43CEA();
	void Added_D8E194F34B546738A6FAAFBCCC55DAC6();
	void Added_F702C9C640E64D2D140233B87E67AF0A();
	void AnimGraph(struct FPoseLink* Param_AnimGraph);
	void BlueprintInitializeAnimation();
	void BlueprintThreadSafeUpdateAnimation(float DeltaTime);
	void ExecuteUbergraph_ABP_Otto(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_Otto_C">();
	}
	static class UABP_Otto_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_Otto_C>();
	}
};
static_assert(alignof(UABP_Otto_C) == 0x000010, "Wrong alignment on UABP_Otto_C");
static_assert(sizeof(UABP_Otto_C) == 0x000A90, "Wrong size on UABP_Otto_C");
static_assert(offsetof(UABP_Otto_C, UberGraphFrame) == 0x000530, "Member 'UABP_Otto_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABP_Otto_C, AnimBlueprintExtension_PropertyAccess) == 0x000538, "Member 'UABP_Otto_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UABP_Otto_C, AnimBlueprintExtension_Base) == 0x000540, "Member 'UABP_Otto_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UABP_Otto_C, AnimGraphNode_Root) == 0x000548, "Member 'UABP_Otto_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UABP_Otto_C, AnimGraphNode_TransitionResult_12) == 0x000568, "Member 'UABP_Otto_C::AnimGraphNode_TransitionResult_12' has a wrong offset!");
static_assert(offsetof(UABP_Otto_C, AnimGraphNode_TransitionResult_11) == 0x000590, "Member 'UABP_Otto_C::AnimGraphNode_TransitionResult_11' has a wrong offset!");
static_assert(offsetof(UABP_Otto_C, AnimGraphNode_TransitionResult_10) == 0x0005B8, "Member 'UABP_Otto_C::AnimGraphNode_TransitionResult_10' has a wrong offset!");
static_assert(offsetof(UABP_Otto_C, AnimGraphNode_TransitionResult_9) == 0x0005E0, "Member 'UABP_Otto_C::AnimGraphNode_TransitionResult_9' has a wrong offset!");
static_assert(offsetof(UABP_Otto_C, AnimGraphNode_TransitionResult_8) == 0x000608, "Member 'UABP_Otto_C::AnimGraphNode_TransitionResult_8' has a wrong offset!");
static_assert(offsetof(UABP_Otto_C, AnimGraphNode_TransitionResult_7) == 0x000630, "Member 'UABP_Otto_C::AnimGraphNode_TransitionResult_7' has a wrong offset!");
static_assert(offsetof(UABP_Otto_C, AnimGraphNode_TransitionResult_6) == 0x000658, "Member 'UABP_Otto_C::AnimGraphNode_TransitionResult_6' has a wrong offset!");
static_assert(offsetof(UABP_Otto_C, AnimGraphNode_TransitionResult_5) == 0x000680, "Member 'UABP_Otto_C::AnimGraphNode_TransitionResult_5' has a wrong offset!");
static_assert(offsetof(UABP_Otto_C, AnimGraphNode_TransitionResult_4) == 0x0006A8, "Member 'UABP_Otto_C::AnimGraphNode_TransitionResult_4' has a wrong offset!");
static_assert(offsetof(UABP_Otto_C, AnimGraphNode_TransitionResult_3) == 0x0006D0, "Member 'UABP_Otto_C::AnimGraphNode_TransitionResult_3' has a wrong offset!");
static_assert(offsetof(UABP_Otto_C, AnimGraphNode_TransitionResult_2) == 0x0006F8, "Member 'UABP_Otto_C::AnimGraphNode_TransitionResult_2' has a wrong offset!");
static_assert(offsetof(UABP_Otto_C, AnimGraphNode_TransitionResult_1) == 0x000720, "Member 'UABP_Otto_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(UABP_Otto_C, AnimGraphNode_TransitionResult) == 0x000748, "Member 'UABP_Otto_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UABP_Otto_C, AnimGraphNode_SequencePlayer_1) == 0x000770, "Member 'UABP_Otto_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UABP_Otto_C, AnimGraphNode_StateResult_3) == 0x0007B8, "Member 'UABP_Otto_C::AnimGraphNode_StateResult_3' has a wrong offset!");
static_assert(offsetof(UABP_Otto_C, AnimGraphNode_RandomPlayer_1) == 0x0007D8, "Member 'UABP_Otto_C::AnimGraphNode_RandomPlayer_1' has a wrong offset!");
static_assert(offsetof(UABP_Otto_C, AnimGraphNode_StateResult_2) == 0x000850, "Member 'UABP_Otto_C::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(UABP_Otto_C, AnimGraphNode_RandomPlayer) == 0x000870, "Member 'UABP_Otto_C::AnimGraphNode_RandomPlayer' has a wrong offset!");
static_assert(offsetof(UABP_Otto_C, AnimGraphNode_StateResult_1) == 0x0008E8, "Member 'UABP_Otto_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UABP_Otto_C, AnimGraphNode_SequencePlayer) == 0x000908, "Member 'UABP_Otto_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UABP_Otto_C, AnimGraphNode_StateResult) == 0x000950, "Member 'UABP_Otto_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UABP_Otto_C, AnimGraphNode_StateMachine) == 0x000970, "Member 'UABP_Otto_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UABP_Otto_C, AnimGraphNode_Slot) == 0x000A38, "Member 'UABP_Otto_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UABP_Otto_C, Stance) == 0x000A80, "Member 'UABP_Otto_C::Stance' has a wrong offset!");
static_assert(offsetof(UABP_Otto_C, SleepStance) == 0x000A81, "Member 'UABP_Otto_C::SleepStance' has a wrong offset!");
static_assert(offsetof(UABP_Otto_C, StandStance) == 0x000A82, "Member 'UABP_Otto_C::StandStance' has a wrong offset!");
static_assert(offsetof(UABP_Otto_C, SitStance) == 0x000A83, "Member 'UABP_Otto_C::SitStance' has a wrong offset!");
static_assert(offsetof(UABP_Otto_C, LieStance) == 0x000A84, "Member 'UABP_Otto_C::LieStance' has a wrong offset!");

}

