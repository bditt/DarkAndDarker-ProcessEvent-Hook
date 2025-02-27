#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_HazeBladePassive

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GA_HazeBladePassive.GA_HazeBladePassive_C.EventReceived_34D934FA4FA4578DA7BE409456A12B87
// 0x00B0 (0x00B0 - 0x0000)
struct GA_HazeBladePassive_C_EventReceived_34D934FA4FA4578DA7BE409456A12B87 final
{
public:
	struct FGameplayEventData                     Payload;                                           // 0x0000(0x00B0)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GA_HazeBladePassive_C_EventReceived_34D934FA4FA4578DA7BE409456A12B87) == 0x000008, "Wrong alignment on GA_HazeBladePassive_C_EventReceived_34D934FA4FA4578DA7BE409456A12B87");
static_assert(sizeof(GA_HazeBladePassive_C_EventReceived_34D934FA4FA4578DA7BE409456A12B87) == 0x0000B0, "Wrong size on GA_HazeBladePassive_C_EventReceived_34D934FA4FA4578DA7BE409456A12B87");
static_assert(offsetof(GA_HazeBladePassive_C_EventReceived_34D934FA4FA4578DA7BE409456A12B87, Payload) == 0x000000, "Member 'GA_HazeBladePassive_C_EventReceived_34D934FA4FA4578DA7BE409456A12B87::Payload' has a wrong offset!");

// Function GA_HazeBladePassive.GA_HazeBladePassive_C.ExecuteUbergraph_GA_HazeBladePassive
// 0x0320 (0x0320 - 0x0000)
struct GA_HazeBladePassive_C_ExecuteUbergraph_GA_HazeBladePassive final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4542[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     K2Node_CustomEvent_Payload;                        // 0x0010(0x00B0)()
	TDelegate<void(const struct FGameplayEventData& Payload)> K2Node_CreateDelegate_OutputDelegate;              // 0x00C0(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     Temp_struct_Variable;                              // 0x00D0(0x00B0)()
	class UAbilityTask_WaitGameplayEvent*         CallFunc_WaitGameplayEvent_ReturnValue;            // 0x0180(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsMeleeAttackHit_ReturnValue;             // 0x0189(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4543[0x6];                                     // 0x018A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_EffectContextGetSourceObject_ReturnValue; // 0x0190(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     K2Node_MakeStruct_GameplayEventData;               // 0x0198(0x00B0)()
	struct FGameplayEventData                     K2Node_Event_EventData;                            // 0x0248(0x00B0)(ConstParm)
	TArray<struct FActiveGameplayEffectHandle>    CallFunc_ApplyEffectContainer_ReturnValue;         // 0x02F8(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1; // 0x0308(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                                CallFunc_GetCurrentSourceObject_ReturnValue;       // 0x0310(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0318(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x0319(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x031A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_HazeBladePassive_C_ExecuteUbergraph_GA_HazeBladePassive) == 0x000008, "Wrong alignment on GA_HazeBladePassive_C_ExecuteUbergraph_GA_HazeBladePassive");
static_assert(sizeof(GA_HazeBladePassive_C_ExecuteUbergraph_GA_HazeBladePassive) == 0x000320, "Wrong size on GA_HazeBladePassive_C_ExecuteUbergraph_GA_HazeBladePassive");
static_assert(offsetof(GA_HazeBladePassive_C_ExecuteUbergraph_GA_HazeBladePassive, EntryPoint) == 0x000000, "Member 'GA_HazeBladePassive_C_ExecuteUbergraph_GA_HazeBladePassive::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_HazeBladePassive_C_ExecuteUbergraph_GA_HazeBladePassive, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000008, "Member 'GA_HazeBladePassive_C_ExecuteUbergraph_GA_HazeBladePassive::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_HazeBladePassive_C_ExecuteUbergraph_GA_HazeBladePassive, K2Node_CustomEvent_Payload) == 0x000010, "Member 'GA_HazeBladePassive_C_ExecuteUbergraph_GA_HazeBladePassive::K2Node_CustomEvent_Payload' has a wrong offset!");
static_assert(offsetof(GA_HazeBladePassive_C_ExecuteUbergraph_GA_HazeBladePassive, K2Node_CreateDelegate_OutputDelegate) == 0x0000C0, "Member 'GA_HazeBladePassive_C_ExecuteUbergraph_GA_HazeBladePassive::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_HazeBladePassive_C_ExecuteUbergraph_GA_HazeBladePassive, Temp_struct_Variable) == 0x0000D0, "Member 'GA_HazeBladePassive_C_ExecuteUbergraph_GA_HazeBladePassive::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GA_HazeBladePassive_C_ExecuteUbergraph_GA_HazeBladePassive, CallFunc_WaitGameplayEvent_ReturnValue) == 0x000180, "Member 'GA_HazeBladePassive_C_ExecuteUbergraph_GA_HazeBladePassive::CallFunc_WaitGameplayEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_HazeBladePassive_C_ExecuteUbergraph_GA_HazeBladePassive, CallFunc_IsValid_ReturnValue) == 0x000188, "Member 'GA_HazeBladePassive_C_ExecuteUbergraph_GA_HazeBladePassive::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_HazeBladePassive_C_ExecuteUbergraph_GA_HazeBladePassive, CallFunc_IsMeleeAttackHit_ReturnValue) == 0x000189, "Member 'GA_HazeBladePassive_C_ExecuteUbergraph_GA_HazeBladePassive::CallFunc_IsMeleeAttackHit_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_HazeBladePassive_C_ExecuteUbergraph_GA_HazeBladePassive, CallFunc_EffectContextGetSourceObject_ReturnValue) == 0x000190, "Member 'GA_HazeBladePassive_C_ExecuteUbergraph_GA_HazeBladePassive::CallFunc_EffectContextGetSourceObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_HazeBladePassive_C_ExecuteUbergraph_GA_HazeBladePassive, K2Node_MakeStruct_GameplayEventData) == 0x000198, "Member 'GA_HazeBladePassive_C_ExecuteUbergraph_GA_HazeBladePassive::K2Node_MakeStruct_GameplayEventData' has a wrong offset!");
static_assert(offsetof(GA_HazeBladePassive_C_ExecuteUbergraph_GA_HazeBladePassive, K2Node_Event_EventData) == 0x000248, "Member 'GA_HazeBladePassive_C_ExecuteUbergraph_GA_HazeBladePassive::K2Node_Event_EventData' has a wrong offset!");
static_assert(offsetof(GA_HazeBladePassive_C_ExecuteUbergraph_GA_HazeBladePassive, CallFunc_ApplyEffectContainer_ReturnValue) == 0x0002F8, "Member 'GA_HazeBladePassive_C_ExecuteUbergraph_GA_HazeBladePassive::CallFunc_ApplyEffectContainer_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_HazeBladePassive_C_ExecuteUbergraph_GA_HazeBladePassive, CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1) == 0x000308, "Member 'GA_HazeBladePassive_C_ExecuteUbergraph_GA_HazeBladePassive::CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_HazeBladePassive_C_ExecuteUbergraph_GA_HazeBladePassive, CallFunc_GetCurrentSourceObject_ReturnValue) == 0x000310, "Member 'GA_HazeBladePassive_C_ExecuteUbergraph_GA_HazeBladePassive::CallFunc_GetCurrentSourceObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_HazeBladePassive_C_ExecuteUbergraph_GA_HazeBladePassive, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000318, "Member 'GA_HazeBladePassive_C_ExecuteUbergraph_GA_HazeBladePassive::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_HazeBladePassive_C_ExecuteUbergraph_GA_HazeBladePassive, CallFunc_EqualEqual_ObjectObject_ReturnValue_1) == 0x000319, "Member 'GA_HazeBladePassive_C_ExecuteUbergraph_GA_HazeBladePassive::CallFunc_EqualEqual_ObjectObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_HazeBladePassive_C_ExecuteUbergraph_GA_HazeBladePassive, CallFunc_BooleanAND_ReturnValue) == 0x00031A, "Member 'GA_HazeBladePassive_C_ExecuteUbergraph_GA_HazeBladePassive::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function GA_HazeBladePassive.GA_HazeBladePassive_C.K2_ActivateAbilityFromEvent
// 0x00B0 (0x00B0 - 0x0000)
struct GA_HazeBladePassive_C_K2_ActivateAbilityFromEvent final
{
public:
	struct FGameplayEventData                     EventData;                                         // 0x0000(0x00B0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(GA_HazeBladePassive_C_K2_ActivateAbilityFromEvent) == 0x000008, "Wrong alignment on GA_HazeBladePassive_C_K2_ActivateAbilityFromEvent");
static_assert(sizeof(GA_HazeBladePassive_C_K2_ActivateAbilityFromEvent) == 0x0000B0, "Wrong size on GA_HazeBladePassive_C_K2_ActivateAbilityFromEvent");
static_assert(offsetof(GA_HazeBladePassive_C_K2_ActivateAbilityFromEvent, EventData) == 0x000000, "Member 'GA_HazeBladePassive_C_K2_ActivateAbilityFromEvent::EventData' has a wrong offset!");

}

