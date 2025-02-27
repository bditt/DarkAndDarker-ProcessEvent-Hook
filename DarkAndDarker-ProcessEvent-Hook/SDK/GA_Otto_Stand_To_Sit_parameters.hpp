#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Otto_Stand_To_Sit

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GA_Otto_Stand_To_Sit.GA_Otto_Stand_To_Sit_C.AbilityActivated
// 0x00B0 (0x00B0 - 0x0000)
struct GA_Otto_Stand_To_Sit_C_AbilityActivated final
{
public:
	struct FGameplayEventData                     TriggerEventData;                                  // 0x0000(0x00B0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GA_Otto_Stand_To_Sit_C_AbilityActivated) == 0x000008, "Wrong alignment on GA_Otto_Stand_To_Sit_C_AbilityActivated");
static_assert(sizeof(GA_Otto_Stand_To_Sit_C_AbilityActivated) == 0x0000B0, "Wrong size on GA_Otto_Stand_To_Sit_C_AbilityActivated");
static_assert(offsetof(GA_Otto_Stand_To_Sit_C_AbilityActivated, TriggerEventData) == 0x000000, "Member 'GA_Otto_Stand_To_Sit_C_AbilityActivated::TriggerEventData' has a wrong offset!");

// Function GA_Otto_Stand_To_Sit.GA_Otto_Stand_To_Sit_C.ExecuteUbergraph_GA_Otto_Stand_To_Sit
// 0x00D8 (0x00D8 - 0x0000)
struct GA_Otto_Stand_To_Sit_C_ExecuteUbergraph_GA_Otto_Stand_To_Sit final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5539[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_AddGameplayTag_ReturnValue;               // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_553A[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_Event_TriggerEventData;                     // 0x0018(0x00B0)(ConstParm)
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1; // 0x00C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RemoveGameplayTag_ReturnValue;            // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Otto_Stand_To_Sit_C_ExecuteUbergraph_GA_Otto_Stand_To_Sit) == 0x000008, "Wrong alignment on GA_Otto_Stand_To_Sit_C_ExecuteUbergraph_GA_Otto_Stand_To_Sit");
static_assert(sizeof(GA_Otto_Stand_To_Sit_C_ExecuteUbergraph_GA_Otto_Stand_To_Sit) == 0x0000D8, "Wrong size on GA_Otto_Stand_To_Sit_C_ExecuteUbergraph_GA_Otto_Stand_To_Sit");
static_assert(offsetof(GA_Otto_Stand_To_Sit_C_ExecuteUbergraph_GA_Otto_Stand_To_Sit, EntryPoint) == 0x000000, "Member 'GA_Otto_Stand_To_Sit_C_ExecuteUbergraph_GA_Otto_Stand_To_Sit::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Otto_Stand_To_Sit_C_ExecuteUbergraph_GA_Otto_Stand_To_Sit, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000008, "Member 'GA_Otto_Stand_To_Sit_C_ExecuteUbergraph_GA_Otto_Stand_To_Sit::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Otto_Stand_To_Sit_C_ExecuteUbergraph_GA_Otto_Stand_To_Sit, CallFunc_AddGameplayTag_ReturnValue) == 0x000010, "Member 'GA_Otto_Stand_To_Sit_C_ExecuteUbergraph_GA_Otto_Stand_To_Sit::CallFunc_AddGameplayTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Otto_Stand_To_Sit_C_ExecuteUbergraph_GA_Otto_Stand_To_Sit, K2Node_Event_TriggerEventData) == 0x000018, "Member 'GA_Otto_Stand_To_Sit_C_ExecuteUbergraph_GA_Otto_Stand_To_Sit::K2Node_Event_TriggerEventData' has a wrong offset!");
static_assert(offsetof(GA_Otto_Stand_To_Sit_C_ExecuteUbergraph_GA_Otto_Stand_To_Sit, CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1) == 0x0000C8, "Member 'GA_Otto_Stand_To_Sit_C_ExecuteUbergraph_GA_Otto_Stand_To_Sit::CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Otto_Stand_To_Sit_C_ExecuteUbergraph_GA_Otto_Stand_To_Sit, CallFunc_RemoveGameplayTag_ReturnValue) == 0x0000D0, "Member 'GA_Otto_Stand_To_Sit_C_ExecuteUbergraph_GA_Otto_Stand_To_Sit::CallFunc_RemoveGameplayTag_ReturnValue' has a wrong offset!");

}

