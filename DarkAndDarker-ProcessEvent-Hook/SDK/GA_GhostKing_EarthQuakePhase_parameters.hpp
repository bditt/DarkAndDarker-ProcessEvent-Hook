#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_GhostKing_EarthQuakePhase

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function GA_GhostKing_EarthQuakePhase.GA_GhostKing_EarthQuakePhase_C.AbilityActivated
// 0x00B0 (0x00B0 - 0x0000)
struct GA_GhostKing_EarthQuakePhase_C_AbilityActivated final
{
public:
	struct FGameplayEventData                     TriggerEventData;                                  // 0x0000(0x00B0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GA_GhostKing_EarthQuakePhase_C_AbilityActivated) == 0x000008, "Wrong alignment on GA_GhostKing_EarthQuakePhase_C_AbilityActivated");
static_assert(sizeof(GA_GhostKing_EarthQuakePhase_C_AbilityActivated) == 0x0000B0, "Wrong size on GA_GhostKing_EarthQuakePhase_C_AbilityActivated");
static_assert(offsetof(GA_GhostKing_EarthQuakePhase_C_AbilityActivated, TriggerEventData) == 0x000000, "Member 'GA_GhostKing_EarthQuakePhase_C_AbilityActivated::TriggerEventData' has a wrong offset!");

// Function GA_GhostKing_EarthQuakePhase.GA_GhostKing_EarthQuakePhase_C.EventReceived_EE80568D434BF7B5B708B888F1081D7D
// 0x00B0 (0x00B0 - 0x0000)
struct GA_GhostKing_EarthQuakePhase_C_EventReceived_EE80568D434BF7B5B708B888F1081D7D final
{
public:
	struct FGameplayEventData                     Payload;                                           // 0x0000(0x00B0)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GA_GhostKing_EarthQuakePhase_C_EventReceived_EE80568D434BF7B5B708B888F1081D7D) == 0x000008, "Wrong alignment on GA_GhostKing_EarthQuakePhase_C_EventReceived_EE80568D434BF7B5B708B888F1081D7D");
static_assert(sizeof(GA_GhostKing_EarthQuakePhase_C_EventReceived_EE80568D434BF7B5B708B888F1081D7D) == 0x0000B0, "Wrong size on GA_GhostKing_EarthQuakePhase_C_EventReceived_EE80568D434BF7B5B708B888F1081D7D");
static_assert(offsetof(GA_GhostKing_EarthQuakePhase_C_EventReceived_EE80568D434BF7B5B708B888F1081D7D, Payload) == 0x000000, "Member 'GA_GhostKing_EarthQuakePhase_C_EventReceived_EE80568D434BF7B5B708B888F1081D7D::Payload' has a wrong offset!");

// Function GA_GhostKing_EarthQuakePhase.GA_GhostKing_EarthQuakePhase_C.ExecuteUbergraph_GA_GhostKing_EarthQuakePhase
// 0x0280 (0x0280 - 0x0000)
struct GA_GhostKing_EarthQuakePhase_C_ExecuteUbergraph_GA_GhostKing_EarthQuakePhase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4EDF[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_CustomEvent_Payload;                        // 0x0008(0x00B0)()
	struct FGameplayEventData                     Temp_struct_Variable;                              // 0x00B8(0x00B0)()
	class UAbilityTask_WaitGameplayEvent*         CallFunc_WaitGameplayEvent_ReturnValue;            // 0x0168(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4EE0[0x7];                                     // 0x0171(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x0178(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_GhostKing_Common_C*                 K2Node_DynamicCast_AsBP_Ghost_King_Common;         // 0x0180(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4EE1[0x7];                                     // 0x0189(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_Event_TriggerEventData;                     // 0x0190(0x00B0)(ConstParm)
	bool                                          K2Node_Event_bWasCancelled;                        // 0x0240(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4EE2[0x3];                                     // 0x0241(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const struct FGameplayEventData& Payload)> K2Node_CreateDelegate_OutputDelegate;              // 0x0244(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4EE3[0x4];                                     // 0x0254(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0258(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Vector_Distance_ReturnValue;              // 0x0270(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x0278(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_GhostKing_EarthQuakePhase_C_ExecuteUbergraph_GA_GhostKing_EarthQuakePhase) == 0x000008, "Wrong alignment on GA_GhostKing_EarthQuakePhase_C_ExecuteUbergraph_GA_GhostKing_EarthQuakePhase");
static_assert(sizeof(GA_GhostKing_EarthQuakePhase_C_ExecuteUbergraph_GA_GhostKing_EarthQuakePhase) == 0x000280, "Wrong size on GA_GhostKing_EarthQuakePhase_C_ExecuteUbergraph_GA_GhostKing_EarthQuakePhase");
static_assert(offsetof(GA_GhostKing_EarthQuakePhase_C_ExecuteUbergraph_GA_GhostKing_EarthQuakePhase, EntryPoint) == 0x000000, "Member 'GA_GhostKing_EarthQuakePhase_C_ExecuteUbergraph_GA_GhostKing_EarthQuakePhase::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_GhostKing_EarthQuakePhase_C_ExecuteUbergraph_GA_GhostKing_EarthQuakePhase, K2Node_CustomEvent_Payload) == 0x000008, "Member 'GA_GhostKing_EarthQuakePhase_C_ExecuteUbergraph_GA_GhostKing_EarthQuakePhase::K2Node_CustomEvent_Payload' has a wrong offset!");
static_assert(offsetof(GA_GhostKing_EarthQuakePhase_C_ExecuteUbergraph_GA_GhostKing_EarthQuakePhase, Temp_struct_Variable) == 0x0000B8, "Member 'GA_GhostKing_EarthQuakePhase_C_ExecuteUbergraph_GA_GhostKing_EarthQuakePhase::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GA_GhostKing_EarthQuakePhase_C_ExecuteUbergraph_GA_GhostKing_EarthQuakePhase, CallFunc_WaitGameplayEvent_ReturnValue) == 0x000168, "Member 'GA_GhostKing_EarthQuakePhase_C_ExecuteUbergraph_GA_GhostKing_EarthQuakePhase::CallFunc_WaitGameplayEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_GhostKing_EarthQuakePhase_C_ExecuteUbergraph_GA_GhostKing_EarthQuakePhase, CallFunc_IsValid_ReturnValue) == 0x000170, "Member 'GA_GhostKing_EarthQuakePhase_C_ExecuteUbergraph_GA_GhostKing_EarthQuakePhase::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_GhostKing_EarthQuakePhase_C_ExecuteUbergraph_GA_GhostKing_EarthQuakePhase, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000178, "Member 'GA_GhostKing_EarthQuakePhase_C_ExecuteUbergraph_GA_GhostKing_EarthQuakePhase::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_GhostKing_EarthQuakePhase_C_ExecuteUbergraph_GA_GhostKing_EarthQuakePhase, K2Node_DynamicCast_AsBP_Ghost_King_Common) == 0x000180, "Member 'GA_GhostKing_EarthQuakePhase_C_ExecuteUbergraph_GA_GhostKing_EarthQuakePhase::K2Node_DynamicCast_AsBP_Ghost_King_Common' has a wrong offset!");
static_assert(offsetof(GA_GhostKing_EarthQuakePhase_C_ExecuteUbergraph_GA_GhostKing_EarthQuakePhase, K2Node_DynamicCast_bSuccess) == 0x000188, "Member 'GA_GhostKing_EarthQuakePhase_C_ExecuteUbergraph_GA_GhostKing_EarthQuakePhase::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_GhostKing_EarthQuakePhase_C_ExecuteUbergraph_GA_GhostKing_EarthQuakePhase, K2Node_Event_TriggerEventData) == 0x000190, "Member 'GA_GhostKing_EarthQuakePhase_C_ExecuteUbergraph_GA_GhostKing_EarthQuakePhase::K2Node_Event_TriggerEventData' has a wrong offset!");
static_assert(offsetof(GA_GhostKing_EarthQuakePhase_C_ExecuteUbergraph_GA_GhostKing_EarthQuakePhase, K2Node_Event_bWasCancelled) == 0x000240, "Member 'GA_GhostKing_EarthQuakePhase_C_ExecuteUbergraph_GA_GhostKing_EarthQuakePhase::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GA_GhostKing_EarthQuakePhase_C_ExecuteUbergraph_GA_GhostKing_EarthQuakePhase, K2Node_CreateDelegate_OutputDelegate) == 0x000244, "Member 'GA_GhostKing_EarthQuakePhase_C_ExecuteUbergraph_GA_GhostKing_EarthQuakePhase::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_GhostKing_EarthQuakePhase_C_ExecuteUbergraph_GA_GhostKing_EarthQuakePhase, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000258, "Member 'GA_GhostKing_EarthQuakePhase_C_ExecuteUbergraph_GA_GhostKing_EarthQuakePhase::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_GhostKing_EarthQuakePhase_C_ExecuteUbergraph_GA_GhostKing_EarthQuakePhase, CallFunc_Vector_Distance_ReturnValue) == 0x000270, "Member 'GA_GhostKing_EarthQuakePhase_C_ExecuteUbergraph_GA_GhostKing_EarthQuakePhase::CallFunc_Vector_Distance_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_GhostKing_EarthQuakePhase_C_ExecuteUbergraph_GA_GhostKing_EarthQuakePhase, CallFunc_GreaterEqual_DoubleDouble_ReturnValue) == 0x000278, "Member 'GA_GhostKing_EarthQuakePhase_C_ExecuteUbergraph_GA_GhostKing_EarthQuakePhase::CallFunc_GreaterEqual_DoubleDouble_ReturnValue' has a wrong offset!");

// Function GA_GhostKing_EarthQuakePhase.GA_GhostKing_EarthQuakePhase_C.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct GA_GhostKing_EarthQuakePhase_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_GhostKing_EarthQuakePhase_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GA_GhostKing_EarthQuakePhase_C_K2_OnEndAbility");
static_assert(sizeof(GA_GhostKing_EarthQuakePhase_C_K2_OnEndAbility) == 0x000001, "Wrong size on GA_GhostKing_EarthQuakePhase_C_K2_OnEndAbility");
static_assert(offsetof(GA_GhostKing_EarthQuakePhase_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GA_GhostKing_EarthQuakePhase_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

}

