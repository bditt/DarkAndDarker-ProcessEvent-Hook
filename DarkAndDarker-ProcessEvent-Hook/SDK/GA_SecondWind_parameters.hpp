#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_SecondWind

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function GA_SecondWind.GA_SecondWind_C.ExecuteUbergraph_GA_SecondWind
// 0x0060 (0x0060 - 0x0000)
struct GA_SecondWind_C_ExecuteUbergraph_GA_SecondWind final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           K2Node_Event_SkillTag;                             // 0x0004(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           K2Node_Event_CooldownTag;                          // 0x000C(0x0008)(NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5741[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  CallFunc_MakeGameplayTagContainerFromTag_ReturnValue; // 0x0018(0x0020)()
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue; // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue; // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5742[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput;    // 0x0048(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasMatchingGameplayTag_ReturnValue;       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_SecondWind_C_ExecuteUbergraph_GA_SecondWind) == 0x000008, "Wrong alignment on GA_SecondWind_C_ExecuteUbergraph_GA_SecondWind");
static_assert(sizeof(GA_SecondWind_C_ExecuteUbergraph_GA_SecondWind) == 0x000060, "Wrong size on GA_SecondWind_C_ExecuteUbergraph_GA_SecondWind");
static_assert(offsetof(GA_SecondWind_C_ExecuteUbergraph_GA_SecondWind, EntryPoint) == 0x000000, "Member 'GA_SecondWind_C_ExecuteUbergraph_GA_SecondWind::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_SecondWind_C_ExecuteUbergraph_GA_SecondWind, K2Node_Event_SkillTag) == 0x000004, "Member 'GA_SecondWind_C_ExecuteUbergraph_GA_SecondWind::K2Node_Event_SkillTag' has a wrong offset!");
static_assert(offsetof(GA_SecondWind_C_ExecuteUbergraph_GA_SecondWind, K2Node_Event_CooldownTag) == 0x00000C, "Member 'GA_SecondWind_C_ExecuteUbergraph_GA_SecondWind::K2Node_Event_CooldownTag' has a wrong offset!");
static_assert(offsetof(GA_SecondWind_C_ExecuteUbergraph_GA_SecondWind, CallFunc_MakeGameplayTagContainerFromTag_ReturnValue) == 0x000018, "Member 'GA_SecondWind_C_ExecuteUbergraph_GA_SecondWind::CallFunc_MakeGameplayTagContainerFromTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SecondWind_C_ExecuteUbergraph_GA_SecondWind, CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue) == 0x000038, "Member 'GA_SecondWind_C_ExecuteUbergraph_GA_SecondWind::CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SecondWind_C_ExecuteUbergraph_GA_SecondWind, CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue) == 0x000040, "Member 'GA_SecondWind_C_ExecuteUbergraph_GA_SecondWind::CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SecondWind_C_ExecuteUbergraph_GA_SecondWind, CallFunc_HasMatchingGameplayTag_self_CastInput) == 0x000048, "Member 'GA_SecondWind_C_ExecuteUbergraph_GA_SecondWind::CallFunc_HasMatchingGameplayTag_self_CastInput' has a wrong offset!");
static_assert(offsetof(GA_SecondWind_C_ExecuteUbergraph_GA_SecondWind, CallFunc_HasMatchingGameplayTag_ReturnValue) == 0x000058, "Member 'GA_SecondWind_C_ExecuteUbergraph_GA_SecondWind::CallFunc_HasMatchingGameplayTag_ReturnValue' has a wrong offset!");

// Function GA_SecondWind.GA_SecondWind_C.ServerOnSkillActivate
// 0x0010 (0x0010 - 0x0000)
struct GA_SecondWind_C_ServerOnSkillActivate final
{
public:
	struct FGameplayTag                           SkillTag;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           CooldownTag;                                       // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_SecondWind_C_ServerOnSkillActivate) == 0x000004, "Wrong alignment on GA_SecondWind_C_ServerOnSkillActivate");
static_assert(sizeof(GA_SecondWind_C_ServerOnSkillActivate) == 0x000010, "Wrong size on GA_SecondWind_C_ServerOnSkillActivate");
static_assert(offsetof(GA_SecondWind_C_ServerOnSkillActivate, SkillTag) == 0x000000, "Member 'GA_SecondWind_C_ServerOnSkillActivate::SkillTag' has a wrong offset!");
static_assert(offsetof(GA_SecondWind_C_ServerOnSkillActivate, CooldownTag) == 0x000008, "Member 'GA_SecondWind_C_ServerOnSkillActivate::CooldownTag' has a wrong offset!");

}

