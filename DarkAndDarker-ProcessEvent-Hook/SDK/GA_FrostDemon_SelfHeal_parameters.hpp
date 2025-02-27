#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_FrostDemon_SelfHeal

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GA_FrostDemon_SelfHeal.GA_FrostDemon_SelfHeal_C.AbilityActivated
// 0x00B0 (0x00B0 - 0x0000)
struct GA_FrostDemon_SelfHeal_C_AbilityActivated final
{
public:
	struct FGameplayEventData                     TriggerEventData;                                  // 0x0000(0x00B0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GA_FrostDemon_SelfHeal_C_AbilityActivated) == 0x000008, "Wrong alignment on GA_FrostDemon_SelfHeal_C_AbilityActivated");
static_assert(sizeof(GA_FrostDemon_SelfHeal_C_AbilityActivated) == 0x0000B0, "Wrong size on GA_FrostDemon_SelfHeal_C_AbilityActivated");
static_assert(offsetof(GA_FrostDemon_SelfHeal_C_AbilityActivated, TriggerEventData) == 0x000000, "Member 'GA_FrostDemon_SelfHeal_C_AbilityActivated::TriggerEventData' has a wrong offset!");

// Function GA_FrostDemon_SelfHeal.GA_FrostDemon_SelfHeal_C.ExecuteUbergraph_GA_FrostDemon_SelfHeal
// 0x0180 (0x0180 - 0x0000)
struct GA_FrostDemon_SelfHeal_C_ExecuteUbergraph_GA_FrostDemon_SelfHeal final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14B0[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     K2Node_MakeStruct_GameplayEventData;               // 0x0010(0x00B0)()
	struct FGameplayEventData                     K2Node_Event_TriggerEventData;                     // 0x00C0(0x00B0)(ConstParm)
	TArray<struct FActiveGameplayEffectHandle>    CallFunc_ApplyEffectContainer_ReturnValue;         // 0x0170(0x0010)(ReferenceParm)
};
static_assert(alignof(GA_FrostDemon_SelfHeal_C_ExecuteUbergraph_GA_FrostDemon_SelfHeal) == 0x000008, "Wrong alignment on GA_FrostDemon_SelfHeal_C_ExecuteUbergraph_GA_FrostDemon_SelfHeal");
static_assert(sizeof(GA_FrostDemon_SelfHeal_C_ExecuteUbergraph_GA_FrostDemon_SelfHeal) == 0x000180, "Wrong size on GA_FrostDemon_SelfHeal_C_ExecuteUbergraph_GA_FrostDemon_SelfHeal");
static_assert(offsetof(GA_FrostDemon_SelfHeal_C_ExecuteUbergraph_GA_FrostDemon_SelfHeal, EntryPoint) == 0x000000, "Member 'GA_FrostDemon_SelfHeal_C_ExecuteUbergraph_GA_FrostDemon_SelfHeal::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_FrostDemon_SelfHeal_C_ExecuteUbergraph_GA_FrostDemon_SelfHeal, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000008, "Member 'GA_FrostDemon_SelfHeal_C_ExecuteUbergraph_GA_FrostDemon_SelfHeal::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_FrostDemon_SelfHeal_C_ExecuteUbergraph_GA_FrostDemon_SelfHeal, K2Node_MakeStruct_GameplayEventData) == 0x000010, "Member 'GA_FrostDemon_SelfHeal_C_ExecuteUbergraph_GA_FrostDemon_SelfHeal::K2Node_MakeStruct_GameplayEventData' has a wrong offset!");
static_assert(offsetof(GA_FrostDemon_SelfHeal_C_ExecuteUbergraph_GA_FrostDemon_SelfHeal, K2Node_Event_TriggerEventData) == 0x0000C0, "Member 'GA_FrostDemon_SelfHeal_C_ExecuteUbergraph_GA_FrostDemon_SelfHeal::K2Node_Event_TriggerEventData' has a wrong offset!");
static_assert(offsetof(GA_FrostDemon_SelfHeal_C_ExecuteUbergraph_GA_FrostDemon_SelfHeal, CallFunc_ApplyEffectContainer_ReturnValue) == 0x000170, "Member 'GA_FrostDemon_SelfHeal_C_ExecuteUbergraph_GA_FrostDemon_SelfHeal::CallFunc_ApplyEffectContainer_ReturnValue' has a wrong offset!");

}

