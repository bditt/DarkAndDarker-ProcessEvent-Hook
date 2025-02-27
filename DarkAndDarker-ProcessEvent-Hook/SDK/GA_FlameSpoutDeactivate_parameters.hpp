#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_FlameSpoutDeactivate

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GA_FlameSpoutDeactivate.GA_FlameSpoutDeactivate_C.EventReceived_BAE8241E4992256FE025C3B5840FF2DD
// 0x00B0 (0x00B0 - 0x0000)
struct GA_FlameSpoutDeactivate_C_EventReceived_BAE8241E4992256FE025C3B5840FF2DD final
{
public:
	struct FGameplayEventData                     Payload;                                           // 0x0000(0x00B0)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GA_FlameSpoutDeactivate_C_EventReceived_BAE8241E4992256FE025C3B5840FF2DD) == 0x000008, "Wrong alignment on GA_FlameSpoutDeactivate_C_EventReceived_BAE8241E4992256FE025C3B5840FF2DD");
static_assert(sizeof(GA_FlameSpoutDeactivate_C_EventReceived_BAE8241E4992256FE025C3B5840FF2DD) == 0x0000B0, "Wrong size on GA_FlameSpoutDeactivate_C_EventReceived_BAE8241E4992256FE025C3B5840FF2DD");
static_assert(offsetof(GA_FlameSpoutDeactivate_C_EventReceived_BAE8241E4992256FE025C3B5840FF2DD, Payload) == 0x000000, "Member 'GA_FlameSpoutDeactivate_C_EventReceived_BAE8241E4992256FE025C3B5840FF2DD::Payload' has a wrong offset!");

// Function GA_FlameSpoutDeactivate.GA_FlameSpoutDeactivate_C.ExecuteUbergraph_GA_FlameSpoutDeactivate
// 0x0318 (0x0318 - 0x0000)
struct GA_FlameSpoutDeactivate_C_ExecuteUbergraph_GA_FlameSpoutDeactivate final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_43D2[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_CustomEvent_Payload;                        // 0x0018(0x00B0)()
	TDelegate<void(const struct FGameplayEventData& Payload)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x00C8(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     Temp_struct_Variable;                              // 0x00D8(0x00B0)()
	class UAbilityTask_WaitGameplayEvent*         CallFunc_WaitGameplayEvent_ReturnValue;            // 0x0188(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_43D3[0x7];                                     // 0x0191(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_Event_EventData;                            // 0x0198(0x00B0)(ConstParm)
	struct FGameplayEventData                     Temp_struct_Variable_1;                            // 0x0248(0x00B0)(ConstParm)
	TArray<struct FActiveGameplayEffectHandle>    CallFunc_ApplyEffectContainer_ReturnValue;         // 0x02F8(0x0010)(ReferenceParm)
	class UAbilityTask_WaitDelay*                 CallFunc_WaitDelay_ReturnValue;                    // 0x0308(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0310(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_FlameSpoutDeactivate_C_ExecuteUbergraph_GA_FlameSpoutDeactivate) == 0x000008, "Wrong alignment on GA_FlameSpoutDeactivate_C_ExecuteUbergraph_GA_FlameSpoutDeactivate");
static_assert(sizeof(GA_FlameSpoutDeactivate_C_ExecuteUbergraph_GA_FlameSpoutDeactivate) == 0x000318, "Wrong size on GA_FlameSpoutDeactivate_C_ExecuteUbergraph_GA_FlameSpoutDeactivate");
static_assert(offsetof(GA_FlameSpoutDeactivate_C_ExecuteUbergraph_GA_FlameSpoutDeactivate, EntryPoint) == 0x000000, "Member 'GA_FlameSpoutDeactivate_C_ExecuteUbergraph_GA_FlameSpoutDeactivate::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_FlameSpoutDeactivate_C_ExecuteUbergraph_GA_FlameSpoutDeactivate, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'GA_FlameSpoutDeactivate_C_ExecuteUbergraph_GA_FlameSpoutDeactivate::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_FlameSpoutDeactivate_C_ExecuteUbergraph_GA_FlameSpoutDeactivate, K2Node_CustomEvent_Payload) == 0x000018, "Member 'GA_FlameSpoutDeactivate_C_ExecuteUbergraph_GA_FlameSpoutDeactivate::K2Node_CustomEvent_Payload' has a wrong offset!");
static_assert(offsetof(GA_FlameSpoutDeactivate_C_ExecuteUbergraph_GA_FlameSpoutDeactivate, K2Node_CreateDelegate_OutputDelegate_1) == 0x0000C8, "Member 'GA_FlameSpoutDeactivate_C_ExecuteUbergraph_GA_FlameSpoutDeactivate::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GA_FlameSpoutDeactivate_C_ExecuteUbergraph_GA_FlameSpoutDeactivate, Temp_struct_Variable) == 0x0000D8, "Member 'GA_FlameSpoutDeactivate_C_ExecuteUbergraph_GA_FlameSpoutDeactivate::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GA_FlameSpoutDeactivate_C_ExecuteUbergraph_GA_FlameSpoutDeactivate, CallFunc_WaitGameplayEvent_ReturnValue) == 0x000188, "Member 'GA_FlameSpoutDeactivate_C_ExecuteUbergraph_GA_FlameSpoutDeactivate::CallFunc_WaitGameplayEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_FlameSpoutDeactivate_C_ExecuteUbergraph_GA_FlameSpoutDeactivate, CallFunc_IsValid_ReturnValue) == 0x000190, "Member 'GA_FlameSpoutDeactivate_C_ExecuteUbergraph_GA_FlameSpoutDeactivate::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_FlameSpoutDeactivate_C_ExecuteUbergraph_GA_FlameSpoutDeactivate, K2Node_Event_EventData) == 0x000198, "Member 'GA_FlameSpoutDeactivate_C_ExecuteUbergraph_GA_FlameSpoutDeactivate::K2Node_Event_EventData' has a wrong offset!");
static_assert(offsetof(GA_FlameSpoutDeactivate_C_ExecuteUbergraph_GA_FlameSpoutDeactivate, Temp_struct_Variable_1) == 0x000248, "Member 'GA_FlameSpoutDeactivate_C_ExecuteUbergraph_GA_FlameSpoutDeactivate::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(GA_FlameSpoutDeactivate_C_ExecuteUbergraph_GA_FlameSpoutDeactivate, CallFunc_ApplyEffectContainer_ReturnValue) == 0x0002F8, "Member 'GA_FlameSpoutDeactivate_C_ExecuteUbergraph_GA_FlameSpoutDeactivate::CallFunc_ApplyEffectContainer_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_FlameSpoutDeactivate_C_ExecuteUbergraph_GA_FlameSpoutDeactivate, CallFunc_WaitDelay_ReturnValue) == 0x000308, "Member 'GA_FlameSpoutDeactivate_C_ExecuteUbergraph_GA_FlameSpoutDeactivate::CallFunc_WaitDelay_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_FlameSpoutDeactivate_C_ExecuteUbergraph_GA_FlameSpoutDeactivate, CallFunc_IsValid_ReturnValue_1) == 0x000310, "Member 'GA_FlameSpoutDeactivate_C_ExecuteUbergraph_GA_FlameSpoutDeactivate::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function GA_FlameSpoutDeactivate.GA_FlameSpoutDeactivate_C.K2_ActivateAbilityFromEvent
// 0x00B0 (0x00B0 - 0x0000)
struct GA_FlameSpoutDeactivate_C_K2_ActivateAbilityFromEvent final
{
public:
	struct FGameplayEventData                     EventData;                                         // 0x0000(0x00B0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(GA_FlameSpoutDeactivate_C_K2_ActivateAbilityFromEvent) == 0x000008, "Wrong alignment on GA_FlameSpoutDeactivate_C_K2_ActivateAbilityFromEvent");
static_assert(sizeof(GA_FlameSpoutDeactivate_C_K2_ActivateAbilityFromEvent) == 0x0000B0, "Wrong size on GA_FlameSpoutDeactivate_C_K2_ActivateAbilityFromEvent");
static_assert(offsetof(GA_FlameSpoutDeactivate_C_K2_ActivateAbilityFromEvent, EventData) == 0x000000, "Member 'GA_FlameSpoutDeactivate_C_K2_ActivateAbilityFromEvent::EventData' has a wrong offset!");

}

