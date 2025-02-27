#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_LanternShieldLightDeactivate

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GA_LanternShieldLightDeactivate.GA_LanternShieldLightDeactivate_C.AbilityActivated
// 0x00B0 (0x00B0 - 0x0000)
struct GA_LanternShieldLightDeactivate_C_AbilityActivated final
{
public:
	struct FGameplayEventData                     TriggerEventData;                                  // 0x0000(0x00B0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GA_LanternShieldLightDeactivate_C_AbilityActivated) == 0x000008, "Wrong alignment on GA_LanternShieldLightDeactivate_C_AbilityActivated");
static_assert(sizeof(GA_LanternShieldLightDeactivate_C_AbilityActivated) == 0x0000B0, "Wrong size on GA_LanternShieldLightDeactivate_C_AbilityActivated");
static_assert(offsetof(GA_LanternShieldLightDeactivate_C_AbilityActivated, TriggerEventData) == 0x000000, "Member 'GA_LanternShieldLightDeactivate_C_AbilityActivated::TriggerEventData' has a wrong offset!");

// Function GA_LanternShieldLightDeactivate.GA_LanternShieldLightDeactivate_C.ExecuteUbergraph_GA_LanternShieldLightDeactivate
// 0x00D8 (0x00D8 - 0x0000)
struct GA_LanternShieldLightDeactivate_C_ExecuteUbergraph_GA_LanternShieldLightDeactivate final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_47C2[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_Event_TriggerEventData;                     // 0x0008(0x00B0)(ConstParm)
	class UObject*                                CallFunc_GetCurrentSourceObject_ReturnValue;       // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_HasAuthority_ReturnValue;              // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_47C3[0x7];                                     // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AItemActor*                             K2Node_DynamicCast_AsItem_Actor;                   // 0x00C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RemoveGameplayTag_ReturnValue;            // 0x00D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_LanternShieldLightDeactivate_C_ExecuteUbergraph_GA_LanternShieldLightDeactivate) == 0x000008, "Wrong alignment on GA_LanternShieldLightDeactivate_C_ExecuteUbergraph_GA_LanternShieldLightDeactivate");
static_assert(sizeof(GA_LanternShieldLightDeactivate_C_ExecuteUbergraph_GA_LanternShieldLightDeactivate) == 0x0000D8, "Wrong size on GA_LanternShieldLightDeactivate_C_ExecuteUbergraph_GA_LanternShieldLightDeactivate");
static_assert(offsetof(GA_LanternShieldLightDeactivate_C_ExecuteUbergraph_GA_LanternShieldLightDeactivate, EntryPoint) == 0x000000, "Member 'GA_LanternShieldLightDeactivate_C_ExecuteUbergraph_GA_LanternShieldLightDeactivate::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_LanternShieldLightDeactivate_C_ExecuteUbergraph_GA_LanternShieldLightDeactivate, K2Node_Event_TriggerEventData) == 0x000008, "Member 'GA_LanternShieldLightDeactivate_C_ExecuteUbergraph_GA_LanternShieldLightDeactivate::K2Node_Event_TriggerEventData' has a wrong offset!");
static_assert(offsetof(GA_LanternShieldLightDeactivate_C_ExecuteUbergraph_GA_LanternShieldLightDeactivate, CallFunc_GetCurrentSourceObject_ReturnValue) == 0x0000B8, "Member 'GA_LanternShieldLightDeactivate_C_ExecuteUbergraph_GA_LanternShieldLightDeactivate::CallFunc_GetCurrentSourceObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_LanternShieldLightDeactivate_C_ExecuteUbergraph_GA_LanternShieldLightDeactivate, CallFunc_K2_HasAuthority_ReturnValue) == 0x0000C0, "Member 'GA_LanternShieldLightDeactivate_C_ExecuteUbergraph_GA_LanternShieldLightDeactivate::CallFunc_K2_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_LanternShieldLightDeactivate_C_ExecuteUbergraph_GA_LanternShieldLightDeactivate, K2Node_DynamicCast_AsItem_Actor) == 0x0000C8, "Member 'GA_LanternShieldLightDeactivate_C_ExecuteUbergraph_GA_LanternShieldLightDeactivate::K2Node_DynamicCast_AsItem_Actor' has a wrong offset!");
static_assert(offsetof(GA_LanternShieldLightDeactivate_C_ExecuteUbergraph_GA_LanternShieldLightDeactivate, K2Node_DynamicCast_bSuccess) == 0x0000D0, "Member 'GA_LanternShieldLightDeactivate_C_ExecuteUbergraph_GA_LanternShieldLightDeactivate::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_LanternShieldLightDeactivate_C_ExecuteUbergraph_GA_LanternShieldLightDeactivate, CallFunc_RemoveGameplayTag_ReturnValue) == 0x0000D1, "Member 'GA_LanternShieldLightDeactivate_C_ExecuteUbergraph_GA_LanternShieldLightDeactivate::CallFunc_RemoveGameplayTag_ReturnValue' has a wrong offset!");

}

