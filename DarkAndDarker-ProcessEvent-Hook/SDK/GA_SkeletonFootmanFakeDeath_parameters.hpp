#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_SkeletonFootmanFakeDeath

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GA_SkeletonFootmanFakeDeath.GA_SkeletonFootmanFakeDeath_C.AbilityActivated
// 0x00B0 (0x00B0 - 0x0000)
struct GA_SkeletonFootmanFakeDeath_C_AbilityActivated final
{
public:
	struct FGameplayEventData                     TriggerEventData;                                  // 0x0000(0x00B0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GA_SkeletonFootmanFakeDeath_C_AbilityActivated) == 0x000008, "Wrong alignment on GA_SkeletonFootmanFakeDeath_C_AbilityActivated");
static_assert(sizeof(GA_SkeletonFootmanFakeDeath_C_AbilityActivated) == 0x0000B0, "Wrong size on GA_SkeletonFootmanFakeDeath_C_AbilityActivated");
static_assert(offsetof(GA_SkeletonFootmanFakeDeath_C_AbilityActivated, TriggerEventData) == 0x000000, "Member 'GA_SkeletonFootmanFakeDeath_C_AbilityActivated::TriggerEventData' has a wrong offset!");

// Function GA_SkeletonFootmanFakeDeath.GA_SkeletonFootmanFakeDeath_C.ExecuteUbergraph_GA_SkeletonFootmanFakeDeath
// 0x00C0 (0x00C0 - 0x0000)
struct GA_SkeletonFootmanFakeDeath_C_ExecuteUbergraph_GA_SkeletonFootmanFakeDeath final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5266[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_Event_TriggerEventData;                     // 0x0008(0x00B0)(ConstParm)
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_SkeletonFootmanFakeDeath_C_ExecuteUbergraph_GA_SkeletonFootmanFakeDeath) == 0x000008, "Wrong alignment on GA_SkeletonFootmanFakeDeath_C_ExecuteUbergraph_GA_SkeletonFootmanFakeDeath");
static_assert(sizeof(GA_SkeletonFootmanFakeDeath_C_ExecuteUbergraph_GA_SkeletonFootmanFakeDeath) == 0x0000C0, "Wrong size on GA_SkeletonFootmanFakeDeath_C_ExecuteUbergraph_GA_SkeletonFootmanFakeDeath");
static_assert(offsetof(GA_SkeletonFootmanFakeDeath_C_ExecuteUbergraph_GA_SkeletonFootmanFakeDeath, EntryPoint) == 0x000000, "Member 'GA_SkeletonFootmanFakeDeath_C_ExecuteUbergraph_GA_SkeletonFootmanFakeDeath::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_SkeletonFootmanFakeDeath_C_ExecuteUbergraph_GA_SkeletonFootmanFakeDeath, K2Node_Event_TriggerEventData) == 0x000008, "Member 'GA_SkeletonFootmanFakeDeath_C_ExecuteUbergraph_GA_SkeletonFootmanFakeDeath::K2Node_Event_TriggerEventData' has a wrong offset!");
static_assert(offsetof(GA_SkeletonFootmanFakeDeath_C_ExecuteUbergraph_GA_SkeletonFootmanFakeDeath, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x0000B8, "Member 'GA_SkeletonFootmanFakeDeath_C_ExecuteUbergraph_GA_SkeletonFootmanFakeDeath::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");

}

