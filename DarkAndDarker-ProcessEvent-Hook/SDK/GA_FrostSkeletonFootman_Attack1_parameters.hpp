#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_FrostSkeletonFootman_Attack1

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function GA_FrostSkeletonFootman_Attack1.GA_FrostSkeletonFootman_Attack1_C.AbilityActivated
// 0x00B0 (0x00B0 - 0x0000)
struct GA_FrostSkeletonFootman_Attack1_C_AbilityActivated final
{
public:
	struct FGameplayEventData                     TriggerEventData;                                  // 0x0000(0x00B0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GA_FrostSkeletonFootman_Attack1_C_AbilityActivated) == 0x000008, "Wrong alignment on GA_FrostSkeletonFootman_Attack1_C_AbilityActivated");
static_assert(sizeof(GA_FrostSkeletonFootman_Attack1_C_AbilityActivated) == 0x0000B0, "Wrong size on GA_FrostSkeletonFootman_Attack1_C_AbilityActivated");
static_assert(offsetof(GA_FrostSkeletonFootman_Attack1_C_AbilityActivated, TriggerEventData) == 0x000000, "Member 'GA_FrostSkeletonFootman_Attack1_C_AbilityActivated::TriggerEventData' has a wrong offset!");

// Function GA_FrostSkeletonFootman_Attack1.GA_FrostSkeletonFootman_Attack1_C.EventReceived_D8775A6640BDDD27C12AB69C8A97CFA5
// 0x00B0 (0x00B0 - 0x0000)
struct GA_FrostSkeletonFootman_Attack1_C_EventReceived_D8775A6640BDDD27C12AB69C8A97CFA5 final
{
public:
	struct FGameplayEventData                     Payload;                                           // 0x0000(0x00B0)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GA_FrostSkeletonFootman_Attack1_C_EventReceived_D8775A6640BDDD27C12AB69C8A97CFA5) == 0x000008, "Wrong alignment on GA_FrostSkeletonFootman_Attack1_C_EventReceived_D8775A6640BDDD27C12AB69C8A97CFA5");
static_assert(sizeof(GA_FrostSkeletonFootman_Attack1_C_EventReceived_D8775A6640BDDD27C12AB69C8A97CFA5) == 0x0000B0, "Wrong size on GA_FrostSkeletonFootman_Attack1_C_EventReceived_D8775A6640BDDD27C12AB69C8A97CFA5");
static_assert(offsetof(GA_FrostSkeletonFootman_Attack1_C_EventReceived_D8775A6640BDDD27C12AB69C8A97CFA5, Payload) == 0x000000, "Member 'GA_FrostSkeletonFootman_Attack1_C_EventReceived_D8775A6640BDDD27C12AB69C8A97CFA5::Payload' has a wrong offset!");

// Function GA_FrostSkeletonFootman_Attack1.GA_FrostSkeletonFootman_Attack1_C.ExecuteUbergraph_GA_FrostSkeletonFootman_Attack1
// 0x0288 (0x0288 - 0x0000)
struct GA_FrostSkeletonFootman_Attack1_C_ExecuteUbergraph_GA_FrostSkeletonFootman_Attack1 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4DC0[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_CustomEvent_Payload;                        // 0x0008(0x00B0)()
	TDelegate<void(const struct FGameplayEventData& Payload)> K2Node_CreateDelegate_OutputDelegate;              // 0x00B8(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     Temp_struct_Variable;                              // 0x00C8(0x00B0)()
	class UAbilityTask_WaitGameplayEvent*         CallFunc_WaitGameplayEvent_ReturnValue;            // 0x0178(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bWasCancelled;                        // 0x0181(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4DC1[0x6];                                     // 0x0182(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_Event_TriggerEventData;                     // 0x0188(0x00B0)(ConstParm)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0238(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0x0248(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0250(0x0008)(NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x0258(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Get_Enemy_Relative_Angle_From_Actor_Angle; // 0x0260(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_InRange_FloatFloat_ReturnValue;           // 0x0264(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0265(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4DC2[0x2];                                     // 0x0266(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UDCAT_RotateToActor*                    CallFunc_RotateToActor_ReturnValue;                // 0x0268(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0270(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4DC3[0x3];                                     // 0x0271(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;    // 0x0274(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_InRange_FloatFloat_Value_ImplicitCast;    // 0x0278(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RotateToActor_Speed_ImplicitCast;         // 0x0280(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_FrostSkeletonFootman_Attack1_C_ExecuteUbergraph_GA_FrostSkeletonFootman_Attack1) == 0x000008, "Wrong alignment on GA_FrostSkeletonFootman_Attack1_C_ExecuteUbergraph_GA_FrostSkeletonFootman_Attack1");
static_assert(sizeof(GA_FrostSkeletonFootman_Attack1_C_ExecuteUbergraph_GA_FrostSkeletonFootman_Attack1) == 0x000288, "Wrong size on GA_FrostSkeletonFootman_Attack1_C_ExecuteUbergraph_GA_FrostSkeletonFootman_Attack1");
static_assert(offsetof(GA_FrostSkeletonFootman_Attack1_C_ExecuteUbergraph_GA_FrostSkeletonFootman_Attack1, EntryPoint) == 0x000000, "Member 'GA_FrostSkeletonFootman_Attack1_C_ExecuteUbergraph_GA_FrostSkeletonFootman_Attack1::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_FrostSkeletonFootman_Attack1_C_ExecuteUbergraph_GA_FrostSkeletonFootman_Attack1, K2Node_CustomEvent_Payload) == 0x000008, "Member 'GA_FrostSkeletonFootman_Attack1_C_ExecuteUbergraph_GA_FrostSkeletonFootman_Attack1::K2Node_CustomEvent_Payload' has a wrong offset!");
static_assert(offsetof(GA_FrostSkeletonFootman_Attack1_C_ExecuteUbergraph_GA_FrostSkeletonFootman_Attack1, K2Node_CreateDelegate_OutputDelegate) == 0x0000B8, "Member 'GA_FrostSkeletonFootman_Attack1_C_ExecuteUbergraph_GA_FrostSkeletonFootman_Attack1::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_FrostSkeletonFootman_Attack1_C_ExecuteUbergraph_GA_FrostSkeletonFootman_Attack1, Temp_struct_Variable) == 0x0000C8, "Member 'GA_FrostSkeletonFootman_Attack1_C_ExecuteUbergraph_GA_FrostSkeletonFootman_Attack1::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GA_FrostSkeletonFootman_Attack1_C_ExecuteUbergraph_GA_FrostSkeletonFootman_Attack1, CallFunc_WaitGameplayEvent_ReturnValue) == 0x000178, "Member 'GA_FrostSkeletonFootman_Attack1_C_ExecuteUbergraph_GA_FrostSkeletonFootman_Attack1::CallFunc_WaitGameplayEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_FrostSkeletonFootman_Attack1_C_ExecuteUbergraph_GA_FrostSkeletonFootman_Attack1, CallFunc_IsValid_ReturnValue) == 0x000180, "Member 'GA_FrostSkeletonFootman_Attack1_C_ExecuteUbergraph_GA_FrostSkeletonFootman_Attack1::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_FrostSkeletonFootman_Attack1_C_ExecuteUbergraph_GA_FrostSkeletonFootman_Attack1, K2Node_Event_bWasCancelled) == 0x000181, "Member 'GA_FrostSkeletonFootman_Attack1_C_ExecuteUbergraph_GA_FrostSkeletonFootman_Attack1::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GA_FrostSkeletonFootman_Attack1_C_ExecuteUbergraph_GA_FrostSkeletonFootman_Attack1, K2Node_Event_TriggerEventData) == 0x000188, "Member 'GA_FrostSkeletonFootman_Attack1_C_ExecuteUbergraph_GA_FrostSkeletonFootman_Attack1::K2Node_Event_TriggerEventData' has a wrong offset!");
static_assert(offsetof(GA_FrostSkeletonFootman_Attack1_C_ExecuteUbergraph_GA_FrostSkeletonFootman_Attack1, K2Node_CreateDelegate_OutputDelegate_1) == 0x000238, "Member 'GA_FrostSkeletonFootman_Attack1_C_ExecuteUbergraph_GA_FrostSkeletonFootman_Attack1::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GA_FrostSkeletonFootman_Attack1_C_ExecuteUbergraph_GA_FrostSkeletonFootman_Attack1, CallFunc_GetWorldDeltaSeconds_ReturnValue) == 0x000248, "Member 'GA_FrostSkeletonFootman_Attack1_C_ExecuteUbergraph_GA_FrostSkeletonFootman_Attack1::CallFunc_GetWorldDeltaSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_FrostSkeletonFootman_Attack1_C_ExecuteUbergraph_GA_FrostSkeletonFootman_Attack1, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000250, "Member 'GA_FrostSkeletonFootman_Attack1_C_ExecuteUbergraph_GA_FrostSkeletonFootman_Attack1::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_FrostSkeletonFootman_Attack1_C_ExecuteUbergraph_GA_FrostSkeletonFootman_Attack1, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000258, "Member 'GA_FrostSkeletonFootman_Attack1_C_ExecuteUbergraph_GA_FrostSkeletonFootman_Attack1::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_FrostSkeletonFootman_Attack1_C_ExecuteUbergraph_GA_FrostSkeletonFootman_Attack1, CallFunc_Get_Enemy_Relative_Angle_From_Actor_Angle) == 0x000260, "Member 'GA_FrostSkeletonFootman_Attack1_C_ExecuteUbergraph_GA_FrostSkeletonFootman_Attack1::CallFunc_Get_Enemy_Relative_Angle_From_Actor_Angle' has a wrong offset!");
static_assert(offsetof(GA_FrostSkeletonFootman_Attack1_C_ExecuteUbergraph_GA_FrostSkeletonFootman_Attack1, CallFunc_InRange_FloatFloat_ReturnValue) == 0x000264, "Member 'GA_FrostSkeletonFootman_Attack1_C_ExecuteUbergraph_GA_FrostSkeletonFootman_Attack1::CallFunc_InRange_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_FrostSkeletonFootman_Attack1_C_ExecuteUbergraph_GA_FrostSkeletonFootman_Attack1, CallFunc_IsValid_ReturnValue_1) == 0x000265, "Member 'GA_FrostSkeletonFootman_Attack1_C_ExecuteUbergraph_GA_FrostSkeletonFootman_Attack1::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_FrostSkeletonFootman_Attack1_C_ExecuteUbergraph_GA_FrostSkeletonFootman_Attack1, CallFunc_RotateToActor_ReturnValue) == 0x000268, "Member 'GA_FrostSkeletonFootman_Attack1_C_ExecuteUbergraph_GA_FrostSkeletonFootman_Attack1::CallFunc_RotateToActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_FrostSkeletonFootman_Attack1_C_ExecuteUbergraph_GA_FrostSkeletonFootman_Attack1, CallFunc_IsValid_ReturnValue_2) == 0x000270, "Member 'GA_FrostSkeletonFootman_Attack1_C_ExecuteUbergraph_GA_FrostSkeletonFootman_Attack1::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_FrostSkeletonFootman_Attack1_C_ExecuteUbergraph_GA_FrostSkeletonFootman_Attack1, CallFunc_K2_SetTimerDelegate_Time_ImplicitCast) == 0x000274, "Member 'GA_FrostSkeletonFootman_Attack1_C_ExecuteUbergraph_GA_FrostSkeletonFootman_Attack1::CallFunc_K2_SetTimerDelegate_Time_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GA_FrostSkeletonFootman_Attack1_C_ExecuteUbergraph_GA_FrostSkeletonFootman_Attack1, CallFunc_InRange_FloatFloat_Value_ImplicitCast) == 0x000278, "Member 'GA_FrostSkeletonFootman_Attack1_C_ExecuteUbergraph_GA_FrostSkeletonFootman_Attack1::CallFunc_InRange_FloatFloat_Value_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GA_FrostSkeletonFootman_Attack1_C_ExecuteUbergraph_GA_FrostSkeletonFootman_Attack1, CallFunc_RotateToActor_Speed_ImplicitCast) == 0x000280, "Member 'GA_FrostSkeletonFootman_Attack1_C_ExecuteUbergraph_GA_FrostSkeletonFootman_Attack1::CallFunc_RotateToActor_Speed_ImplicitCast' has a wrong offset!");

// Function GA_FrostSkeletonFootman_Attack1.GA_FrostSkeletonFootman_Attack1_C.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct GA_FrostSkeletonFootman_Attack1_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_FrostSkeletonFootman_Attack1_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GA_FrostSkeletonFootman_Attack1_C_K2_OnEndAbility");
static_assert(sizeof(GA_FrostSkeletonFootman_Attack1_C_K2_OnEndAbility) == 0x000001, "Wrong size on GA_FrostSkeletonFootman_Attack1_C_K2_OnEndAbility");
static_assert(offsetof(GA_FrostSkeletonFootman_Attack1_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GA_FrostSkeletonFootman_Attack1_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

}

