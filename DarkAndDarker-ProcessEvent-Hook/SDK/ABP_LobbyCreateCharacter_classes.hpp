#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_LobbyCreateCharacter

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "ABP_LobbyCreateCharacter_structs.hpp"
#include "DungeonCrawler_structs.hpp"
#include "DungeonCrawler_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_LobbyCreateCharacter.ABP_LobbyCreateCharacter_C
// 0x0B90 (0x0F90 - 0x0400)
class UABP_LobbyCreateCharacter_C final : public UDCAnimInstanceV2
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0400(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct ABP_LobbyCreateCharacter::FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                           // 0x0408(0x0008)(HasGetValueTypeHash)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0410(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0418(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0420(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x0440(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;                       // 0x0488(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine_2;                      // 0x04A8(0x00C8)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend;                    // 0x0570(0x00F0)()
	struct FAnimNode_RandomPlayer                 AnimGraphNode_RandomPlayer_6;                      // 0x0660(0x0078)()
	struct FAnimNode_RandomPlayer                 AnimGraphNode_RandomPlayer_5;                      // 0x06D8(0x0078)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_6;                   // 0x0750(0x0048)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_5;                   // 0x0798(0x0048)()
	struct FAnimNode_RandomPlayer                 AnimGraphNode_RandomPlayer_4;                      // 0x07E0(0x0078)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_4;                   // 0x0858(0x0048)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_3;                   // 0x08A0(0x0048)()
	struct FAnimNode_RandomPlayer                 AnimGraphNode_RandomPlayer_3;                      // 0x08E8(0x0078)()
	struct FAnimNode_RandomPlayer                 AnimGraphNode_RandomPlayer_2;                      // 0x0960(0x0078)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_2;                   // 0x09D8(0x0048)()
	struct FAnimNode_RandomPlayer                 AnimGraphNode_RandomPlayer_1;                      // 0x0A20(0x0078)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_1;                   // 0x0A98(0x0048)()
	struct FAnimNode_RandomPlayer                 AnimGraphNode_RandomPlayer;                        // 0x0AE0(0x0078)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x0B58(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine_1;                      // 0x0B78(0x00C8)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;                      // 0x0C40(0x0080)()
	struct FDCAnimNode_CharSkinModBone            DCAnimGraphNode_CharSkinModBone;                   // 0x0CC0(0x00F8)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_1;                     // 0x0DB8(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;                       // 0x0DE0(0x0028)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool;                     // 0x0E08(0x0048)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x0E50(0x0020)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x0E70(0x0020)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x0E90(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x0EB0(0x00C8)()
	class UAnimSequenceBase*                      IdleAnim;                                          // 0x0F78(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UObject*                                ObjectPartHead;                                    // 0x0F80(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void AnimGraph(struct FPoseLink* Param_AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_LobbyCreateCharacter_AnimGraphNode_BlendListByBool_3A78C95348710E9DA4A4C299D8EAF0F0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_LobbyCreateCharacter_AnimGraphNode_BlendListByBool_4F9FCB92406EBED965BFA288CF3A9296();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_LobbyCreateCharacter_AnimGraphNode_BlendListByBool_79C6DF5D422463DF43CAA781B6F94753();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_LobbyCreateCharacter_AnimGraphNode_BlendListByBool_AAA40BD349277D8B304403A121C946C4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_LobbyCreateCharacter_AnimGraphNode_BlendListByBool_C955D31447C85B5AFC73B5B44B55E445();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_LobbyCreateCharacter_AnimGraphNode_BlendListByBool_FC5071F2492314ED71E7F3B468105DD5();
	void ExecuteUbergraph_ABP_LobbyCreateCharacter(int32 EntryPoint);
	void OnChangedStandIdle(class UAnimSequence* ItemStandIdleAnimation, const struct FGameplayTag& ItemHandType, const struct FGameplayTag& ItemSlotType);
	void UpdateIdleAnim();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_LobbyCreateCharacter_C">();
	}
	static class UABP_LobbyCreateCharacter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_LobbyCreateCharacter_C>();
	}
};
static_assert(alignof(UABP_LobbyCreateCharacter_C) == 0x000010, "Wrong alignment on UABP_LobbyCreateCharacter_C");
static_assert(sizeof(UABP_LobbyCreateCharacter_C) == 0x000F90, "Wrong size on UABP_LobbyCreateCharacter_C");
static_assert(offsetof(UABP_LobbyCreateCharacter_C, UberGraphFrame) == 0x000400, "Member 'UABP_LobbyCreateCharacter_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABP_LobbyCreateCharacter_C, __AnimBlueprintMutables) == 0x000408, "Member 'UABP_LobbyCreateCharacter_C::__AnimBlueprintMutables' has a wrong offset!");
static_assert(offsetof(UABP_LobbyCreateCharacter_C, AnimBlueprintExtension_PropertyAccess) == 0x000410, "Member 'UABP_LobbyCreateCharacter_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UABP_LobbyCreateCharacter_C, AnimBlueprintExtension_Base) == 0x000418, "Member 'UABP_LobbyCreateCharacter_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UABP_LobbyCreateCharacter_C, AnimGraphNode_Root) == 0x000420, "Member 'UABP_LobbyCreateCharacter_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UABP_LobbyCreateCharacter_C, AnimGraphNode_SequencePlayer) == 0x000440, "Member 'UABP_LobbyCreateCharacter_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UABP_LobbyCreateCharacter_C, AnimGraphNode_StateResult_2) == 0x000488, "Member 'UABP_LobbyCreateCharacter_C::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(UABP_LobbyCreateCharacter_C, AnimGraphNode_StateMachine_2) == 0x0004A8, "Member 'UABP_LobbyCreateCharacter_C::AnimGraphNode_StateMachine_2' has a wrong offset!");
static_assert(offsetof(UABP_LobbyCreateCharacter_C, AnimGraphNode_LayeredBoneBlend) == 0x000570, "Member 'UABP_LobbyCreateCharacter_C::AnimGraphNode_LayeredBoneBlend' has a wrong offset!");
static_assert(offsetof(UABP_LobbyCreateCharacter_C, AnimGraphNode_RandomPlayer_6) == 0x000660, "Member 'UABP_LobbyCreateCharacter_C::AnimGraphNode_RandomPlayer_6' has a wrong offset!");
static_assert(offsetof(UABP_LobbyCreateCharacter_C, AnimGraphNode_RandomPlayer_5) == 0x0006D8, "Member 'UABP_LobbyCreateCharacter_C::AnimGraphNode_RandomPlayer_5' has a wrong offset!");
static_assert(offsetof(UABP_LobbyCreateCharacter_C, AnimGraphNode_BlendListByBool_6) == 0x000750, "Member 'UABP_LobbyCreateCharacter_C::AnimGraphNode_BlendListByBool_6' has a wrong offset!");
static_assert(offsetof(UABP_LobbyCreateCharacter_C, AnimGraphNode_BlendListByBool_5) == 0x000798, "Member 'UABP_LobbyCreateCharacter_C::AnimGraphNode_BlendListByBool_5' has a wrong offset!");
static_assert(offsetof(UABP_LobbyCreateCharacter_C, AnimGraphNode_RandomPlayer_4) == 0x0007E0, "Member 'UABP_LobbyCreateCharacter_C::AnimGraphNode_RandomPlayer_4' has a wrong offset!");
static_assert(offsetof(UABP_LobbyCreateCharacter_C, AnimGraphNode_BlendListByBool_4) == 0x000858, "Member 'UABP_LobbyCreateCharacter_C::AnimGraphNode_BlendListByBool_4' has a wrong offset!");
static_assert(offsetof(UABP_LobbyCreateCharacter_C, AnimGraphNode_BlendListByBool_3) == 0x0008A0, "Member 'UABP_LobbyCreateCharacter_C::AnimGraphNode_BlendListByBool_3' has a wrong offset!");
static_assert(offsetof(UABP_LobbyCreateCharacter_C, AnimGraphNode_RandomPlayer_3) == 0x0008E8, "Member 'UABP_LobbyCreateCharacter_C::AnimGraphNode_RandomPlayer_3' has a wrong offset!");
static_assert(offsetof(UABP_LobbyCreateCharacter_C, AnimGraphNode_RandomPlayer_2) == 0x000960, "Member 'UABP_LobbyCreateCharacter_C::AnimGraphNode_RandomPlayer_2' has a wrong offset!");
static_assert(offsetof(UABP_LobbyCreateCharacter_C, AnimGraphNode_BlendListByBool_2) == 0x0009D8, "Member 'UABP_LobbyCreateCharacter_C::AnimGraphNode_BlendListByBool_2' has a wrong offset!");
static_assert(offsetof(UABP_LobbyCreateCharacter_C, AnimGraphNode_RandomPlayer_1) == 0x000A20, "Member 'UABP_LobbyCreateCharacter_C::AnimGraphNode_RandomPlayer_1' has a wrong offset!");
static_assert(offsetof(UABP_LobbyCreateCharacter_C, AnimGraphNode_BlendListByBool_1) == 0x000A98, "Member 'UABP_LobbyCreateCharacter_C::AnimGraphNode_BlendListByBool_1' has a wrong offset!");
static_assert(offsetof(UABP_LobbyCreateCharacter_C, AnimGraphNode_RandomPlayer) == 0x000AE0, "Member 'UABP_LobbyCreateCharacter_C::AnimGraphNode_RandomPlayer' has a wrong offset!");
static_assert(offsetof(UABP_LobbyCreateCharacter_C, AnimGraphNode_StateResult_1) == 0x000B58, "Member 'UABP_LobbyCreateCharacter_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UABP_LobbyCreateCharacter_C, AnimGraphNode_StateMachine_1) == 0x000B78, "Member 'UABP_LobbyCreateCharacter_C::AnimGraphNode_StateMachine_1' has a wrong offset!");
static_assert(offsetof(UABP_LobbyCreateCharacter_C, AnimGraphNode_SaveCachedPose) == 0x000C40, "Member 'UABP_LobbyCreateCharacter_C::AnimGraphNode_SaveCachedPose' has a wrong offset!");
static_assert(offsetof(UABP_LobbyCreateCharacter_C, DCAnimGraphNode_CharSkinModBone) == 0x000CC0, "Member 'UABP_LobbyCreateCharacter_C::DCAnimGraphNode_CharSkinModBone' has a wrong offset!");
static_assert(offsetof(UABP_LobbyCreateCharacter_C, AnimGraphNode_UseCachedPose_1) == 0x000DB8, "Member 'UABP_LobbyCreateCharacter_C::AnimGraphNode_UseCachedPose_1' has a wrong offset!");
static_assert(offsetof(UABP_LobbyCreateCharacter_C, AnimGraphNode_UseCachedPose) == 0x000DE0, "Member 'UABP_LobbyCreateCharacter_C::AnimGraphNode_UseCachedPose' has a wrong offset!");
static_assert(offsetof(UABP_LobbyCreateCharacter_C, AnimGraphNode_BlendListByBool) == 0x000E08, "Member 'UABP_LobbyCreateCharacter_C::AnimGraphNode_BlendListByBool' has a wrong offset!");
static_assert(offsetof(UABP_LobbyCreateCharacter_C, AnimGraphNode_ComponentToLocalSpace) == 0x000E50, "Member 'UABP_LobbyCreateCharacter_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UABP_LobbyCreateCharacter_C, AnimGraphNode_LocalToComponentSpace) == 0x000E70, "Member 'UABP_LobbyCreateCharacter_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UABP_LobbyCreateCharacter_C, AnimGraphNode_StateResult) == 0x000E90, "Member 'UABP_LobbyCreateCharacter_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UABP_LobbyCreateCharacter_C, AnimGraphNode_StateMachine) == 0x000EB0, "Member 'UABP_LobbyCreateCharacter_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UABP_LobbyCreateCharacter_C, IdleAnim) == 0x000F78, "Member 'UABP_LobbyCreateCharacter_C::IdleAnim' has a wrong offset!");
static_assert(offsetof(UABP_LobbyCreateCharacter_C, ObjectPartHead) == 0x000F80, "Member 'UABP_LobbyCreateCharacter_C::ObjectPartHead' has a wrong offset!");

}

