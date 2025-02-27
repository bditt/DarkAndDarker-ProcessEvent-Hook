#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_DemonBat_FlyToHanging

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function GA_DemonBat_FlyToHanging.GA_DemonBat_FlyToHanging_C.AbilityActivated
// 0x00B0 (0x00B0 - 0x0000)
struct GA_DemonBat_FlyToHanging_C_AbilityActivated final
{
public:
	struct FGameplayEventData                     TriggerEventData;                                  // 0x0000(0x00B0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GA_DemonBat_FlyToHanging_C_AbilityActivated) == 0x000008, "Wrong alignment on GA_DemonBat_FlyToHanging_C_AbilityActivated");
static_assert(sizeof(GA_DemonBat_FlyToHanging_C_AbilityActivated) == 0x0000B0, "Wrong size on GA_DemonBat_FlyToHanging_C_AbilityActivated");
static_assert(offsetof(GA_DemonBat_FlyToHanging_C_AbilityActivated, TriggerEventData) == 0x000000, "Member 'GA_DemonBat_FlyToHanging_C_AbilityActivated::TriggerEventData' has a wrong offset!");

// Function GA_DemonBat_FlyToHanging.GA_DemonBat_FlyToHanging_C.ExecuteUbergraph_GA_DemonBat_FlyToHanging
// 0x00E8 (0x00E8 - 0x0000)
struct GA_DemonBat_FlyToHanging_C_ExecuteUbergraph_GA_DemonBat_FlyToHanging final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4192[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FPrimaryAssetId>                K2Node_MakeArray_Array;                            // 0x0008(0x0010)(ConstParm, ReferenceParm)
	bool                                          K2Node_Event_bWasCancelled;                        // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4193[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_Event_TriggerEventData;                     // 0x0020(0x00B0)(ConstParm)
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x00D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FActiveGameplayEffectHandle>    CallFunc_ApplyGameplayEffectByIds_ReturnValue;     // 0x00D8(0x0010)(ReferenceParm)
};
static_assert(alignof(GA_DemonBat_FlyToHanging_C_ExecuteUbergraph_GA_DemonBat_FlyToHanging) == 0x000008, "Wrong alignment on GA_DemonBat_FlyToHanging_C_ExecuteUbergraph_GA_DemonBat_FlyToHanging");
static_assert(sizeof(GA_DemonBat_FlyToHanging_C_ExecuteUbergraph_GA_DemonBat_FlyToHanging) == 0x0000E8, "Wrong size on GA_DemonBat_FlyToHanging_C_ExecuteUbergraph_GA_DemonBat_FlyToHanging");
static_assert(offsetof(GA_DemonBat_FlyToHanging_C_ExecuteUbergraph_GA_DemonBat_FlyToHanging, EntryPoint) == 0x000000, "Member 'GA_DemonBat_FlyToHanging_C_ExecuteUbergraph_GA_DemonBat_FlyToHanging::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_DemonBat_FlyToHanging_C_ExecuteUbergraph_GA_DemonBat_FlyToHanging, K2Node_MakeArray_Array) == 0x000008, "Member 'GA_DemonBat_FlyToHanging_C_ExecuteUbergraph_GA_DemonBat_FlyToHanging::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(GA_DemonBat_FlyToHanging_C_ExecuteUbergraph_GA_DemonBat_FlyToHanging, K2Node_Event_bWasCancelled) == 0x000018, "Member 'GA_DemonBat_FlyToHanging_C_ExecuteUbergraph_GA_DemonBat_FlyToHanging::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GA_DemonBat_FlyToHanging_C_ExecuteUbergraph_GA_DemonBat_FlyToHanging, K2Node_Event_TriggerEventData) == 0x000020, "Member 'GA_DemonBat_FlyToHanging_C_ExecuteUbergraph_GA_DemonBat_FlyToHanging::K2Node_Event_TriggerEventData' has a wrong offset!");
static_assert(offsetof(GA_DemonBat_FlyToHanging_C_ExecuteUbergraph_GA_DemonBat_FlyToHanging, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x0000D0, "Member 'GA_DemonBat_FlyToHanging_C_ExecuteUbergraph_GA_DemonBat_FlyToHanging::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_DemonBat_FlyToHanging_C_ExecuteUbergraph_GA_DemonBat_FlyToHanging, CallFunc_ApplyGameplayEffectByIds_ReturnValue) == 0x0000D8, "Member 'GA_DemonBat_FlyToHanging_C_ExecuteUbergraph_GA_DemonBat_FlyToHanging::CallFunc_ApplyGameplayEffectByIds_ReturnValue' has a wrong offset!");

// Function GA_DemonBat_FlyToHanging.GA_DemonBat_FlyToHanging_C.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct GA_DemonBat_FlyToHanging_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_DemonBat_FlyToHanging_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GA_DemonBat_FlyToHanging_C_K2_OnEndAbility");
static_assert(sizeof(GA_DemonBat_FlyToHanging_C_K2_OnEndAbility) == 0x000001, "Wrong size on GA_DemonBat_FlyToHanging_C_K2_OnEndAbility");
static_assert(offsetof(GA_DemonBat_FlyToHanging_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GA_DemonBat_FlyToHanging_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

}

