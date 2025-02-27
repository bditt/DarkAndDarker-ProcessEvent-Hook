#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_FrostSkeletonGuardman_Attack4_Counter

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GA_FrostSkeletonGuardman_Attack4_Counter.GA_FrostSkeletonGuardman_Attack4_Counter_C.AbilityActivated
// 0x00B0 (0x00B0 - 0x0000)
struct GA_FrostSkeletonGuardman_Attack4_Counter_C_AbilityActivated final
{
public:
	struct FGameplayEventData                     TriggerEventData;                                  // 0x0000(0x00B0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GA_FrostSkeletonGuardman_Attack4_Counter_C_AbilityActivated) == 0x000008, "Wrong alignment on GA_FrostSkeletonGuardman_Attack4_Counter_C_AbilityActivated");
static_assert(sizeof(GA_FrostSkeletonGuardman_Attack4_Counter_C_AbilityActivated) == 0x0000B0, "Wrong size on GA_FrostSkeletonGuardman_Attack4_Counter_C_AbilityActivated");
static_assert(offsetof(GA_FrostSkeletonGuardman_Attack4_Counter_C_AbilityActivated, TriggerEventData) == 0x000000, "Member 'GA_FrostSkeletonGuardman_Attack4_Counter_C_AbilityActivated::TriggerEventData' has a wrong offset!");

// Function GA_FrostSkeletonGuardman_Attack4_Counter.GA_FrostSkeletonGuardman_Attack4_Counter_C.ExecuteUbergraph_GA_FrostSkeletonGuardman_Attack4_Counter
// 0x00D8 (0x00D8 - 0x0000)
struct GA_FrostSkeletonGuardman_Attack4_Counter_C_ExecuteUbergraph_GA_FrostSkeletonGuardman_Attack4_Counter final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4DDD[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_DCMonsterBase_C*                    K2Node_DynamicCast_AsBP_DCMonster_Base;            // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4DDE[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_Event_TriggerEventData;                     // 0x0020(0x00B0)(ConstParm)
	class AAIController*                          CallFunc_GetAIController_ReturnValue;              // 0x00D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_FrostSkeletonGuardman_Attack4_Counter_C_ExecuteUbergraph_GA_FrostSkeletonGuardman_Attack4_Counter) == 0x000008, "Wrong alignment on GA_FrostSkeletonGuardman_Attack4_Counter_C_ExecuteUbergraph_GA_FrostSkeletonGuardman_Attack4_Counter");
static_assert(sizeof(GA_FrostSkeletonGuardman_Attack4_Counter_C_ExecuteUbergraph_GA_FrostSkeletonGuardman_Attack4_Counter) == 0x0000D8, "Wrong size on GA_FrostSkeletonGuardman_Attack4_Counter_C_ExecuteUbergraph_GA_FrostSkeletonGuardman_Attack4_Counter");
static_assert(offsetof(GA_FrostSkeletonGuardman_Attack4_Counter_C_ExecuteUbergraph_GA_FrostSkeletonGuardman_Attack4_Counter, EntryPoint) == 0x000000, "Member 'GA_FrostSkeletonGuardman_Attack4_Counter_C_ExecuteUbergraph_GA_FrostSkeletonGuardman_Attack4_Counter::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_FrostSkeletonGuardman_Attack4_Counter_C_ExecuteUbergraph_GA_FrostSkeletonGuardman_Attack4_Counter, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000008, "Member 'GA_FrostSkeletonGuardman_Attack4_Counter_C_ExecuteUbergraph_GA_FrostSkeletonGuardman_Attack4_Counter::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_FrostSkeletonGuardman_Attack4_Counter_C_ExecuteUbergraph_GA_FrostSkeletonGuardman_Attack4_Counter, K2Node_DynamicCast_AsBP_DCMonster_Base) == 0x000010, "Member 'GA_FrostSkeletonGuardman_Attack4_Counter_C_ExecuteUbergraph_GA_FrostSkeletonGuardman_Attack4_Counter::K2Node_DynamicCast_AsBP_DCMonster_Base' has a wrong offset!");
static_assert(offsetof(GA_FrostSkeletonGuardman_Attack4_Counter_C_ExecuteUbergraph_GA_FrostSkeletonGuardman_Attack4_Counter, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'GA_FrostSkeletonGuardman_Attack4_Counter_C_ExecuteUbergraph_GA_FrostSkeletonGuardman_Attack4_Counter::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_FrostSkeletonGuardman_Attack4_Counter_C_ExecuteUbergraph_GA_FrostSkeletonGuardman_Attack4_Counter, K2Node_Event_TriggerEventData) == 0x000020, "Member 'GA_FrostSkeletonGuardman_Attack4_Counter_C_ExecuteUbergraph_GA_FrostSkeletonGuardman_Attack4_Counter::K2Node_Event_TriggerEventData' has a wrong offset!");
static_assert(offsetof(GA_FrostSkeletonGuardman_Attack4_Counter_C_ExecuteUbergraph_GA_FrostSkeletonGuardman_Attack4_Counter, CallFunc_GetAIController_ReturnValue) == 0x0000D0, "Member 'GA_FrostSkeletonGuardman_Attack4_Counter_C_ExecuteUbergraph_GA_FrostSkeletonGuardman_Attack4_Counter::CallFunc_GetAIController_ReturnValue' has a wrong offset!");

}

