#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_PlayerCharacterCapture

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "DungeonCrawler_structs.hpp"
#include "DungeonCrawler_classes.hpp"
#include "ABP_PlayerCharacterCapture_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_PlayerCharacterCapture.ABP_PlayerCharacterCapture_C
// 0x2920 (0x2F80 - 0x0660)
class UABP_PlayerCharacterCapture_C final : public UDCPlayerCharacterAnimInstanceBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0660(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct ABP_PlayerCharacterCapture::FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                           // 0x0668(0x000B)(HasGetValueTypeHash)
	uint8                                         Pad_3E4F[0x5];                                     // 0x0673(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0678(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0680(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0688(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_4;                    // 0x06A8(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_7;                       // 0x06F0(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_3;                    // 0x0710(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_6;                       // 0x0758(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x0778(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_5;                       // 0x07C0(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine_4;                      // 0x07E0(0x00C8)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_5;                    // 0x08A8(0x0080)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend_2;                  // 0x0928(0x00F0)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_9;                   // 0x0A18(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x0A60(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_4;                       // 0x0AA8(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine_3;                      // 0x0AC8(0x00C8)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_4;                    // 0x0B90(0x0080)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_10;                    // 0x0C10(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_9;                     // 0x0C38(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_8;                     // 0x0C60(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x0C88(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x0CB0(0x0028)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_5;             // 0x0CD8(0x0020)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_5;             // 0x0CF8(0x0020)()
	struct FAnimNode_HandIKRetargeting            AnimGraphNode_HandIKRetargeting_1;                 // 0x0D18(0x0120)()
	struct FAnimNode_LegIK                        AnimGraphNode_LegIK_2;                             // 0x0E38(0x00F8)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_7;                     // 0x0F30(0x0028)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_3;                       // 0x0F58(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_4;             // 0x0F78(0x0020)()
	struct FAnimNode_HandIKRetargeting            AnimGraphNode_HandIKRetargeting;                   // 0x0F98(0x0120)()
	struct FAnimNode_LegIK                        AnimGraphNode_LegIK_1;                             // 0x10B8(0x00F8)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_4;             // 0x11B0(0x0020)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_6;                     // 0x11D0(0x0028)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;                       // 0x11F8(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine_2;                      // 0x1218(0x00C8)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_3;                    // 0x12E0(0x0080)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_5;                     // 0x1360(0x0028)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_3;             // 0x1388(0x0020)()
	struct FAnimNode_LegIK                        AnimGraphNode_LegIK;                               // 0x13A8(0x00F8)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_3;             // 0x14A0(0x0020)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_2;                    // 0x14C0(0x0080)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_9;                        // 0x1540(0x0128)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_3;                              // 0x1668(0x0048)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_2;                              // 0x16B0(0x0048)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_1;                              // 0x16F8(0x0048)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x1740(0x0048)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend_1;                  // 0x1788(0x00F0)()
	struct FAnimNode_RandomPlayer                 AnimGraphNode_RandomPlayer_6;                      // 0x1878(0x0078)()
	struct FAnimNode_RandomPlayer                 AnimGraphNode_RandomPlayer_5;                      // 0x18F0(0x0078)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_8;                   // 0x1968(0x0048)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_7;                   // 0x19B0(0x0048)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_6;                   // 0x19F8(0x0048)()
	struct FAnimNode_RandomPlayer                 AnimGraphNode_RandomPlayer_4;                      // 0x1A40(0x0078)()
	struct FAnimNode_RandomPlayer                 AnimGraphNode_RandomPlayer_3;                      // 0x1AB8(0x0078)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_5;                   // 0x1B30(0x0048)()
	struct FAnimNode_RandomPlayer                 AnimGraphNode_RandomPlayer_2;                      // 0x1B78(0x0078)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_4;                   // 0x1BF0(0x0048)()
	struct FAnimNode_RandomPlayer                 AnimGraphNode_RandomPlayer_1;                      // 0x1C38(0x0078)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_3;                   // 0x1CB0(0x0048)()
	struct FAnimNode_RandomPlayer                 AnimGraphNode_RandomPlayer;                        // 0x1CF8(0x0078)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x1D70(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine_1;                      // 0x1D90(0x00C8)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2;             // 0x1E58(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2;             // 0x1E78(0x0020)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_8;                        // 0x1E98(0x0128)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_2;                   // 0x1FC0(0x0048)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_7;                        // 0x2008(0x0128)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_6;                        // 0x2130(0x0128)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_5;                        // 0x2258(0x0128)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_1;                    // 0x2380(0x0080)()
	struct FDCAnimNode_CharSkinModBone            DCAnimGraphNode_CharSkinModBone;                   // 0x2400(0x00F8)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_4;                     // 0x24F8(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_3;                     // 0x2520(0x0028)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_1;                   // 0x2548(0x0048)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;             // 0x2590(0x0020)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;             // 0x25B0(0x0020)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x25D0(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x25F0(0x00C8)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;                      // 0x26B8(0x0080)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_2;                     // 0x2738(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_1;                     // 0x2760(0x0028)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x2788(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x27A8(0x0020)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool;                     // 0x27C8(0x0048)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_4;                        // 0x2810(0x0128)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_3;                        // 0x2938(0x0128)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;                       // 0x2A60(0x0028)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend;                    // 0x2A88(0x00F0)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x2B78(0x0048)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_2;                        // 0x2BC0(0x0128)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_1;                        // 0x2CE8(0x0128)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;                          // 0x2E10(0x0128)()
	class UAnimSequence*                          ItemStandIdleAnimation;                            // 0x2F38(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                          SecondItemStandIdleAnimation;                      // 0x2F40(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          bSecondaryItemSet;                                 // 0x2F48(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bPrimaryItemSet;                                   // 0x2F49(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bTwoHandedItemSet;                                 // 0x2F4A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsGroundMoving;                                   // 0x2F4B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsWomanHead;                                      // 0x2F4C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsWomanElfHead;                                   // 0x2F4D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsOrcHead;                                        // 0x2F4E(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsLizardmanHead;                                  // 0x2F4F(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        IKHandRWeight;                                     // 0x2F50(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        SmokingPipeCurveValue;                             // 0x2F58(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CupOfCoffeeCurveValue;                             // 0x2F60(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        SetAlwaysFloatOne;                                 // 0x2F68(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsLycanHead;                                      // 0x2F70(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsFelidianPantherManHead;                         // 0x2F71(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsFelidianCatWomanHead;                           // 0x2F72(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnChangedStandIdle(class UAnimSequence* Param_ItemStandIdleAnimation, const struct FGameplayTag& ItemHandType, const struct FGameplayTag& ItemSlotType);
	void ExecuteUbergraph_ABP_PlayerCharacterCapture(int32 EntryPoint);
	void BlueprintThreadSafeUpdateAnimation(float DeltaTime);
	void AnimGraph(struct FPoseLink* Param_AnimGraph);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_PlayerCharacterCapture_C">();
	}
	static class UABP_PlayerCharacterCapture_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_PlayerCharacterCapture_C>();
	}
};
static_assert(alignof(UABP_PlayerCharacterCapture_C) == 0x000010, "Wrong alignment on UABP_PlayerCharacterCapture_C");
static_assert(sizeof(UABP_PlayerCharacterCapture_C) == 0x002F80, "Wrong size on UABP_PlayerCharacterCapture_C");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, UberGraphFrame) == 0x000660, "Member 'UABP_PlayerCharacterCapture_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, __AnimBlueprintMutables) == 0x000668, "Member 'UABP_PlayerCharacterCapture_C::__AnimBlueprintMutables' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, AnimBlueprintExtension_PropertyAccess) == 0x000678, "Member 'UABP_PlayerCharacterCapture_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, AnimBlueprintExtension_Base) == 0x000680, "Member 'UABP_PlayerCharacterCapture_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, AnimGraphNode_Root) == 0x000688, "Member 'UABP_PlayerCharacterCapture_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, AnimGraphNode_SequencePlayer_4) == 0x0006A8, "Member 'UABP_PlayerCharacterCapture_C::AnimGraphNode_SequencePlayer_4' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, AnimGraphNode_StateResult_7) == 0x0006F0, "Member 'UABP_PlayerCharacterCapture_C::AnimGraphNode_StateResult_7' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, AnimGraphNode_SequencePlayer_3) == 0x000710, "Member 'UABP_PlayerCharacterCapture_C::AnimGraphNode_SequencePlayer_3' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, AnimGraphNode_StateResult_6) == 0x000758, "Member 'UABP_PlayerCharacterCapture_C::AnimGraphNode_StateResult_6' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, AnimGraphNode_SequencePlayer_2) == 0x000778, "Member 'UABP_PlayerCharacterCapture_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, AnimGraphNode_StateResult_5) == 0x0007C0, "Member 'UABP_PlayerCharacterCapture_C::AnimGraphNode_StateResult_5' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, AnimGraphNode_StateMachine_4) == 0x0007E0, "Member 'UABP_PlayerCharacterCapture_C::AnimGraphNode_StateMachine_4' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, AnimGraphNode_SaveCachedPose_5) == 0x0008A8, "Member 'UABP_PlayerCharacterCapture_C::AnimGraphNode_SaveCachedPose_5' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, AnimGraphNode_LayeredBoneBlend_2) == 0x000928, "Member 'UABP_PlayerCharacterCapture_C::AnimGraphNode_LayeredBoneBlend_2' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, AnimGraphNode_BlendListByBool_9) == 0x000A18, "Member 'UABP_PlayerCharacterCapture_C::AnimGraphNode_BlendListByBool_9' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, AnimGraphNode_SequencePlayer_1) == 0x000A60, "Member 'UABP_PlayerCharacterCapture_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, AnimGraphNode_StateResult_4) == 0x000AA8, "Member 'UABP_PlayerCharacterCapture_C::AnimGraphNode_StateResult_4' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, AnimGraphNode_StateMachine_3) == 0x000AC8, "Member 'UABP_PlayerCharacterCapture_C::AnimGraphNode_StateMachine_3' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, AnimGraphNode_SaveCachedPose_4) == 0x000B90, "Member 'UABP_PlayerCharacterCapture_C::AnimGraphNode_SaveCachedPose_4' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, AnimGraphNode_UseCachedPose_10) == 0x000C10, "Member 'UABP_PlayerCharacterCapture_C::AnimGraphNode_UseCachedPose_10' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, AnimGraphNode_UseCachedPose_9) == 0x000C38, "Member 'UABP_PlayerCharacterCapture_C::AnimGraphNode_UseCachedPose_9' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, AnimGraphNode_UseCachedPose_8) == 0x000C60, "Member 'UABP_PlayerCharacterCapture_C::AnimGraphNode_UseCachedPose_8' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, AnimGraphNode_TransitionResult_1) == 0x000C88, "Member 'UABP_PlayerCharacterCapture_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, AnimGraphNode_TransitionResult) == 0x000CB0, "Member 'UABP_PlayerCharacterCapture_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, AnimGraphNode_ComponentToLocalSpace_5) == 0x000CD8, "Member 'UABP_PlayerCharacterCapture_C::AnimGraphNode_ComponentToLocalSpace_5' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, AnimGraphNode_LocalToComponentSpace_5) == 0x000CF8, "Member 'UABP_PlayerCharacterCapture_C::AnimGraphNode_LocalToComponentSpace_5' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, AnimGraphNode_HandIKRetargeting_1) == 0x000D18, "Member 'UABP_PlayerCharacterCapture_C::AnimGraphNode_HandIKRetargeting_1' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, AnimGraphNode_LegIK_2) == 0x000E38, "Member 'UABP_PlayerCharacterCapture_C::AnimGraphNode_LegIK_2' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, AnimGraphNode_UseCachedPose_7) == 0x000F30, "Member 'UABP_PlayerCharacterCapture_C::AnimGraphNode_UseCachedPose_7' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, AnimGraphNode_StateResult_3) == 0x000F58, "Member 'UABP_PlayerCharacterCapture_C::AnimGraphNode_StateResult_3' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, AnimGraphNode_ComponentToLocalSpace_4) == 0x000F78, "Member 'UABP_PlayerCharacterCapture_C::AnimGraphNode_ComponentToLocalSpace_4' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, AnimGraphNode_HandIKRetargeting) == 0x000F98, "Member 'UABP_PlayerCharacterCapture_C::AnimGraphNode_HandIKRetargeting' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, AnimGraphNode_LegIK_1) == 0x0010B8, "Member 'UABP_PlayerCharacterCapture_C::AnimGraphNode_LegIK_1' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, AnimGraphNode_LocalToComponentSpace_4) == 0x0011B0, "Member 'UABP_PlayerCharacterCapture_C::AnimGraphNode_LocalToComponentSpace_4' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, AnimGraphNode_UseCachedPose_6) == 0x0011D0, "Member 'UABP_PlayerCharacterCapture_C::AnimGraphNode_UseCachedPose_6' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, AnimGraphNode_StateResult_2) == 0x0011F8, "Member 'UABP_PlayerCharacterCapture_C::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, AnimGraphNode_StateMachine_2) == 0x001218, "Member 'UABP_PlayerCharacterCapture_C::AnimGraphNode_StateMachine_2' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, AnimGraphNode_SaveCachedPose_3) == 0x0012E0, "Member 'UABP_PlayerCharacterCapture_C::AnimGraphNode_SaveCachedPose_3' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, AnimGraphNode_UseCachedPose_5) == 0x001360, "Member 'UABP_PlayerCharacterCapture_C::AnimGraphNode_UseCachedPose_5' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, AnimGraphNode_LocalToComponentSpace_3) == 0x001388, "Member 'UABP_PlayerCharacterCapture_C::AnimGraphNode_LocalToComponentSpace_3' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, AnimGraphNode_LegIK) == 0x0013A8, "Member 'UABP_PlayerCharacterCapture_C::AnimGraphNode_LegIK' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, AnimGraphNode_ComponentToLocalSpace_3) == 0x0014A0, "Member 'UABP_PlayerCharacterCapture_C::AnimGraphNode_ComponentToLocalSpace_3' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, AnimGraphNode_SaveCachedPose_2) == 0x0014C0, "Member 'UABP_PlayerCharacterCapture_C::AnimGraphNode_SaveCachedPose_2' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, AnimGraphNode_ModifyBone_9) == 0x001540, "Member 'UABP_PlayerCharacterCapture_C::AnimGraphNode_ModifyBone_9' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, AnimGraphNode_Slot_3) == 0x001668, "Member 'UABP_PlayerCharacterCapture_C::AnimGraphNode_Slot_3' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, AnimGraphNode_Slot_2) == 0x0016B0, "Member 'UABP_PlayerCharacterCapture_C::AnimGraphNode_Slot_2' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, AnimGraphNode_Slot_1) == 0x0016F8, "Member 'UABP_PlayerCharacterCapture_C::AnimGraphNode_Slot_1' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, AnimGraphNode_Slot) == 0x001740, "Member 'UABP_PlayerCharacterCapture_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, AnimGraphNode_LayeredBoneBlend_1) == 0x001788, "Member 'UABP_PlayerCharacterCapture_C::AnimGraphNode_LayeredBoneBlend_1' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, AnimGraphNode_RandomPlayer_6) == 0x001878, "Member 'UABP_PlayerCharacterCapture_C::AnimGraphNode_RandomPlayer_6' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, AnimGraphNode_RandomPlayer_5) == 0x0018F0, "Member 'UABP_PlayerCharacterCapture_C::AnimGraphNode_RandomPlayer_5' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, AnimGraphNode_BlendListByBool_8) == 0x001968, "Member 'UABP_PlayerCharacterCapture_C::AnimGraphNode_BlendListByBool_8' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, AnimGraphNode_BlendListByBool_7) == 0x0019B0, "Member 'UABP_PlayerCharacterCapture_C::AnimGraphNode_BlendListByBool_7' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, AnimGraphNode_BlendListByBool_6) == 0x0019F8, "Member 'UABP_PlayerCharacterCapture_C::AnimGraphNode_BlendListByBool_6' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, AnimGraphNode_RandomPlayer_4) == 0x001A40, "Member 'UABP_PlayerCharacterCapture_C::AnimGraphNode_RandomPlayer_4' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, AnimGraphNode_RandomPlayer_3) == 0x001AB8, "Member 'UABP_PlayerCharacterCapture_C::AnimGraphNode_RandomPlayer_3' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, AnimGraphNode_BlendListByBool_5) == 0x001B30, "Member 'UABP_PlayerCharacterCapture_C::AnimGraphNode_BlendListByBool_5' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, AnimGraphNode_RandomPlayer_2) == 0x001B78, "Member 'UABP_PlayerCharacterCapture_C::AnimGraphNode_RandomPlayer_2' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, AnimGraphNode_BlendListByBool_4) == 0x001BF0, "Member 'UABP_PlayerCharacterCapture_C::AnimGraphNode_BlendListByBool_4' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, AnimGraphNode_RandomPlayer_1) == 0x001C38, "Member 'UABP_PlayerCharacterCapture_C::AnimGraphNode_RandomPlayer_1' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, AnimGraphNode_BlendListByBool_3) == 0x001CB0, "Member 'UABP_PlayerCharacterCapture_C::AnimGraphNode_BlendListByBool_3' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, AnimGraphNode_RandomPlayer) == 0x001CF8, "Member 'UABP_PlayerCharacterCapture_C::AnimGraphNode_RandomPlayer' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, AnimGraphNode_StateResult_1) == 0x001D70, "Member 'UABP_PlayerCharacterCapture_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, AnimGraphNode_StateMachine_1) == 0x001D90, "Member 'UABP_PlayerCharacterCapture_C::AnimGraphNode_StateMachine_1' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, AnimGraphNode_LocalToComponentSpace_2) == 0x001E58, "Member 'UABP_PlayerCharacterCapture_C::AnimGraphNode_LocalToComponentSpace_2' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, AnimGraphNode_ComponentToLocalSpace_2) == 0x001E78, "Member 'UABP_PlayerCharacterCapture_C::AnimGraphNode_ComponentToLocalSpace_2' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, AnimGraphNode_ModifyBone_8) == 0x001E98, "Member 'UABP_PlayerCharacterCapture_C::AnimGraphNode_ModifyBone_8' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, AnimGraphNode_BlendListByBool_2) == 0x001FC0, "Member 'UABP_PlayerCharacterCapture_C::AnimGraphNode_BlendListByBool_2' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, AnimGraphNode_ModifyBone_7) == 0x002008, "Member 'UABP_PlayerCharacterCapture_C::AnimGraphNode_ModifyBone_7' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, AnimGraphNode_ModifyBone_6) == 0x002130, "Member 'UABP_PlayerCharacterCapture_C::AnimGraphNode_ModifyBone_6' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, AnimGraphNode_ModifyBone_5) == 0x002258, "Member 'UABP_PlayerCharacterCapture_C::AnimGraphNode_ModifyBone_5' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, AnimGraphNode_SaveCachedPose_1) == 0x002380, "Member 'UABP_PlayerCharacterCapture_C::AnimGraphNode_SaveCachedPose_1' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, DCAnimGraphNode_CharSkinModBone) == 0x002400, "Member 'UABP_PlayerCharacterCapture_C::DCAnimGraphNode_CharSkinModBone' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, AnimGraphNode_UseCachedPose_4) == 0x0024F8, "Member 'UABP_PlayerCharacterCapture_C::AnimGraphNode_UseCachedPose_4' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, AnimGraphNode_UseCachedPose_3) == 0x002520, "Member 'UABP_PlayerCharacterCapture_C::AnimGraphNode_UseCachedPose_3' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, AnimGraphNode_BlendListByBool_1) == 0x002548, "Member 'UABP_PlayerCharacterCapture_C::AnimGraphNode_BlendListByBool_1' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, AnimGraphNode_ComponentToLocalSpace_1) == 0x002590, "Member 'UABP_PlayerCharacterCapture_C::AnimGraphNode_ComponentToLocalSpace_1' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, AnimGraphNode_LocalToComponentSpace_1) == 0x0025B0, "Member 'UABP_PlayerCharacterCapture_C::AnimGraphNode_LocalToComponentSpace_1' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, AnimGraphNode_StateResult) == 0x0025D0, "Member 'UABP_PlayerCharacterCapture_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, AnimGraphNode_StateMachine) == 0x0025F0, "Member 'UABP_PlayerCharacterCapture_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, AnimGraphNode_SaveCachedPose) == 0x0026B8, "Member 'UABP_PlayerCharacterCapture_C::AnimGraphNode_SaveCachedPose' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, AnimGraphNode_UseCachedPose_2) == 0x002738, "Member 'UABP_PlayerCharacterCapture_C::AnimGraphNode_UseCachedPose_2' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, AnimGraphNode_UseCachedPose_1) == 0x002760, "Member 'UABP_PlayerCharacterCapture_C::AnimGraphNode_UseCachedPose_1' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, AnimGraphNode_LocalToComponentSpace) == 0x002788, "Member 'UABP_PlayerCharacterCapture_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, AnimGraphNode_ComponentToLocalSpace) == 0x0027A8, "Member 'UABP_PlayerCharacterCapture_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, AnimGraphNode_BlendListByBool) == 0x0027C8, "Member 'UABP_PlayerCharacterCapture_C::AnimGraphNode_BlendListByBool' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, AnimGraphNode_ModifyBone_4) == 0x002810, "Member 'UABP_PlayerCharacterCapture_C::AnimGraphNode_ModifyBone_4' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, AnimGraphNode_ModifyBone_3) == 0x002938, "Member 'UABP_PlayerCharacterCapture_C::AnimGraphNode_ModifyBone_3' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, AnimGraphNode_UseCachedPose) == 0x002A60, "Member 'UABP_PlayerCharacterCapture_C::AnimGraphNode_UseCachedPose' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, AnimGraphNode_LayeredBoneBlend) == 0x002A88, "Member 'UABP_PlayerCharacterCapture_C::AnimGraphNode_LayeredBoneBlend' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, AnimGraphNode_SequencePlayer) == 0x002B78, "Member 'UABP_PlayerCharacterCapture_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, AnimGraphNode_ModifyBone_2) == 0x002BC0, "Member 'UABP_PlayerCharacterCapture_C::AnimGraphNode_ModifyBone_2' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, AnimGraphNode_ModifyBone_1) == 0x002CE8, "Member 'UABP_PlayerCharacterCapture_C::AnimGraphNode_ModifyBone_1' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, AnimGraphNode_ModifyBone) == 0x002E10, "Member 'UABP_PlayerCharacterCapture_C::AnimGraphNode_ModifyBone' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, ItemStandIdleAnimation) == 0x002F38, "Member 'UABP_PlayerCharacterCapture_C::ItemStandIdleAnimation' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, SecondItemStandIdleAnimation) == 0x002F40, "Member 'UABP_PlayerCharacterCapture_C::SecondItemStandIdleAnimation' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, bSecondaryItemSet) == 0x002F48, "Member 'UABP_PlayerCharacterCapture_C::bSecondaryItemSet' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, bPrimaryItemSet) == 0x002F49, "Member 'UABP_PlayerCharacterCapture_C::bPrimaryItemSet' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, bTwoHandedItemSet) == 0x002F4A, "Member 'UABP_PlayerCharacterCapture_C::bTwoHandedItemSet' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, bIsGroundMoving) == 0x002F4B, "Member 'UABP_PlayerCharacterCapture_C::bIsGroundMoving' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, bIsWomanHead) == 0x002F4C, "Member 'UABP_PlayerCharacterCapture_C::bIsWomanHead' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, bIsWomanElfHead) == 0x002F4D, "Member 'UABP_PlayerCharacterCapture_C::bIsWomanElfHead' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, bIsOrcHead) == 0x002F4E, "Member 'UABP_PlayerCharacterCapture_C::bIsOrcHead' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, bIsLizardmanHead) == 0x002F4F, "Member 'UABP_PlayerCharacterCapture_C::bIsLizardmanHead' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, IKHandRWeight) == 0x002F50, "Member 'UABP_PlayerCharacterCapture_C::IKHandRWeight' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, SmokingPipeCurveValue) == 0x002F58, "Member 'UABP_PlayerCharacterCapture_C::SmokingPipeCurveValue' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, CupOfCoffeeCurveValue) == 0x002F60, "Member 'UABP_PlayerCharacterCapture_C::CupOfCoffeeCurveValue' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, SetAlwaysFloatOne) == 0x002F68, "Member 'UABP_PlayerCharacterCapture_C::SetAlwaysFloatOne' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, bIsLycanHead) == 0x002F70, "Member 'UABP_PlayerCharacterCapture_C::bIsLycanHead' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, bIsFelidianPantherManHead) == 0x002F71, "Member 'UABP_PlayerCharacterCapture_C::bIsFelidianPantherManHead' has a wrong offset!");
static_assert(offsetof(UABP_PlayerCharacterCapture_C, bIsFelidianCatWomanHead) == 0x002F72, "Member 'UABP_PlayerCharacterCapture_C::bIsFelidianCatWomanHead' has a wrong offset!");

}

