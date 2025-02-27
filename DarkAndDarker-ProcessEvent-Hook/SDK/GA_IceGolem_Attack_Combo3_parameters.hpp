#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_IceGolem_Attack_Combo3

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GA_IceGolem_Attack_Combo3.GA_IceGolem_Attack_Combo3_C.AbilityActivated
// 0x00B0 (0x00B0 - 0x0000)
struct GA_IceGolem_Attack_Combo3_C_AbilityActivated final
{
public:
	struct FGameplayEventData                     TriggerEventData;                                  // 0x0000(0x00B0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GA_IceGolem_Attack_Combo3_C_AbilityActivated) == 0x000008, "Wrong alignment on GA_IceGolem_Attack_Combo3_C_AbilityActivated");
static_assert(sizeof(GA_IceGolem_Attack_Combo3_C_AbilityActivated) == 0x0000B0, "Wrong size on GA_IceGolem_Attack_Combo3_C_AbilityActivated");
static_assert(offsetof(GA_IceGolem_Attack_Combo3_C_AbilityActivated, TriggerEventData) == 0x000000, "Member 'GA_IceGolem_Attack_Combo3_C_AbilityActivated::TriggerEventData' has a wrong offset!");

// Function GA_IceGolem_Attack_Combo3.GA_IceGolem_Attack_Combo3_C.ExecuteUbergraph_GA_IceGolem_Attack_Combo3
// 0x00D8 (0x00D8 - 0x0000)
struct GA_IceGolem_Attack_Combo3_C_ExecuteUbergraph_GA_IceGolem_Attack_Combo3 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F1B[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_Event_TriggerEventData;                     // 0x0008(0x00B0)(ConstParm)
	bool                                          K2Node_Event_bWasCancelled;                        // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F1C[0x7];                                     // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_IceGolem_C*                         K2Node_DynamicCast_AsBP_Ice_Golem;                 // 0x00C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_IceGolem_Attack_Combo3_C_ExecuteUbergraph_GA_IceGolem_Attack_Combo3) == 0x000008, "Wrong alignment on GA_IceGolem_Attack_Combo3_C_ExecuteUbergraph_GA_IceGolem_Attack_Combo3");
static_assert(sizeof(GA_IceGolem_Attack_Combo3_C_ExecuteUbergraph_GA_IceGolem_Attack_Combo3) == 0x0000D8, "Wrong size on GA_IceGolem_Attack_Combo3_C_ExecuteUbergraph_GA_IceGolem_Attack_Combo3");
static_assert(offsetof(GA_IceGolem_Attack_Combo3_C_ExecuteUbergraph_GA_IceGolem_Attack_Combo3, EntryPoint) == 0x000000, "Member 'GA_IceGolem_Attack_Combo3_C_ExecuteUbergraph_GA_IceGolem_Attack_Combo3::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_IceGolem_Attack_Combo3_C_ExecuteUbergraph_GA_IceGolem_Attack_Combo3, K2Node_Event_TriggerEventData) == 0x000008, "Member 'GA_IceGolem_Attack_Combo3_C_ExecuteUbergraph_GA_IceGolem_Attack_Combo3::K2Node_Event_TriggerEventData' has a wrong offset!");
static_assert(offsetof(GA_IceGolem_Attack_Combo3_C_ExecuteUbergraph_GA_IceGolem_Attack_Combo3, K2Node_Event_bWasCancelled) == 0x0000B8, "Member 'GA_IceGolem_Attack_Combo3_C_ExecuteUbergraph_GA_IceGolem_Attack_Combo3::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GA_IceGolem_Attack_Combo3_C_ExecuteUbergraph_GA_IceGolem_Attack_Combo3, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x0000C0, "Member 'GA_IceGolem_Attack_Combo3_C_ExecuteUbergraph_GA_IceGolem_Attack_Combo3::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_IceGolem_Attack_Combo3_C_ExecuteUbergraph_GA_IceGolem_Attack_Combo3, K2Node_DynamicCast_AsBP_Ice_Golem) == 0x0000C8, "Member 'GA_IceGolem_Attack_Combo3_C_ExecuteUbergraph_GA_IceGolem_Attack_Combo3::K2Node_DynamicCast_AsBP_Ice_Golem' has a wrong offset!");
static_assert(offsetof(GA_IceGolem_Attack_Combo3_C_ExecuteUbergraph_GA_IceGolem_Attack_Combo3, K2Node_DynamicCast_bSuccess) == 0x0000D0, "Member 'GA_IceGolem_Attack_Combo3_C_ExecuteUbergraph_GA_IceGolem_Attack_Combo3::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function GA_IceGolem_Attack_Combo3.GA_IceGolem_Attack_Combo3_C.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct GA_IceGolem_Attack_Combo3_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_IceGolem_Attack_Combo3_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GA_IceGolem_Attack_Combo3_C_K2_OnEndAbility");
static_assert(sizeof(GA_IceGolem_Attack_Combo3_C_K2_OnEndAbility) == 0x000001, "Wrong size on GA_IceGolem_Attack_Combo3_C_K2_OnEndAbility");
static_assert(offsetof(GA_IceGolem_Attack_Combo3_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GA_IceGolem_Attack_Combo3_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

}

