#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_FrozenGhost_Attack_Phase

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GA_FrozenGhost_Attack_Phase.GA_FrozenGhost_Attack_Phase_C.AbilityActivated
// 0x00B0 (0x00B0 - 0x0000)
struct GA_FrozenGhost_Attack_Phase_C_AbilityActivated final
{
public:
	struct FGameplayEventData                     TriggerEventData;                                  // 0x0000(0x00B0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GA_FrozenGhost_Attack_Phase_C_AbilityActivated) == 0x000008, "Wrong alignment on GA_FrozenGhost_Attack_Phase_C_AbilityActivated");
static_assert(sizeof(GA_FrozenGhost_Attack_Phase_C_AbilityActivated) == 0x0000B0, "Wrong size on GA_FrozenGhost_Attack_Phase_C_AbilityActivated");
static_assert(offsetof(GA_FrozenGhost_Attack_Phase_C_AbilityActivated, TriggerEventData) == 0x000000, "Member 'GA_FrozenGhost_Attack_Phase_C_AbilityActivated::TriggerEventData' has a wrong offset!");

// Function GA_FrozenGhost_Attack_Phase.GA_FrozenGhost_Attack_Phase_C.EventReceived_EFAF036247E36FCF3F61EF9891EA139B
// 0x00B0 (0x00B0 - 0x0000)
struct GA_FrozenGhost_Attack_Phase_C_EventReceived_EFAF036247E36FCF3F61EF9891EA139B final
{
public:
	struct FGameplayEventData                     Payload;                                           // 0x0000(0x00B0)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GA_FrozenGhost_Attack_Phase_C_EventReceived_EFAF036247E36FCF3F61EF9891EA139B) == 0x000008, "Wrong alignment on GA_FrozenGhost_Attack_Phase_C_EventReceived_EFAF036247E36FCF3F61EF9891EA139B");
static_assert(sizeof(GA_FrozenGhost_Attack_Phase_C_EventReceived_EFAF036247E36FCF3F61EF9891EA139B) == 0x0000B0, "Wrong size on GA_FrozenGhost_Attack_Phase_C_EventReceived_EFAF036247E36FCF3F61EF9891EA139B");
static_assert(offsetof(GA_FrozenGhost_Attack_Phase_C_EventReceived_EFAF036247E36FCF3F61EF9891EA139B, Payload) == 0x000000, "Member 'GA_FrozenGhost_Attack_Phase_C_EventReceived_EFAF036247E36FCF3F61EF9891EA139B::Payload' has a wrong offset!");

// Function GA_FrozenGhost_Attack_Phase.GA_FrozenGhost_Attack_Phase_C.ExecuteUbergraph_GA_FrozenGhost_Attack_Phase
// 0x02E8 (0x02E8 - 0x0000)
struct GA_FrozenGhost_Attack_Phase_C_ExecuteUbergraph_GA_FrozenGhost_Attack_Phase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4EB4[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     Temp_struct_Variable;                              // 0x0010(0x00B0)()
	class ABP_FrozenGhost_C*                      K2Node_DynamicCast_AsBP_Frozen_Ghost;              // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4EB5[0x7];                                     // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilityTask_WaitGameplayEvent*         CallFunc_WaitGameplayEvent_ReturnValue;            // 0x00D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4EB6[0x7];                                     // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1; // 0x00E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     K2Node_CustomEvent_Payload;                        // 0x00E8(0x00B0)()
	class ABP_FrozenGhost_C*                      K2Node_DynamicCast_AsBP_Frozen_Ghost_1;            // 0x0198(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x01A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4EB7[0x6];                                     // 0x01A2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2; // 0x01A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Get_Enemies_In_Range_And_Angle_From_Actor_Result; // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4EB8[0x7];                                     // 0x01B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ADCCharacterBase*>               CallFunc_Get_Enemies_In_Range_And_Angle_From_Actor_DCCharacterBase; // 0x01B8(0x0010)(ReferenceParm)
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x01C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4EB9[0x3];                                     // 0x01C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const struct FGameplayEventData& Payload)> K2Node_CreateDelegate_OutputDelegate;              // 0x01CC(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4EBA[0x4];                                     // 0x01DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_RandomFloatInRange_ReturnValue;           // 0x01E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x01E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4EBB[0x6];                                     // 0x01EA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue_3; // 0x01F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AAIController*                          CallFunc_GetAIController_ReturnValue;              // 0x01F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bWasCancelled;                        // 0x0200(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4EBC[0x7];                                     // 0x0201(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_Event_TriggerEventData;                     // 0x0208(0x00B0)(ConstParm)
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue_4; // 0x02B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue_5; // 0x02C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Actor_Has_AI_Timer_Return_Value;          // 0x02C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4EBD[0x7];                                     // 0x02C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue_6; // 0x02D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_FrozenGhost_C*                      K2Node_DynamicCast_AsBP_Frozen_Ghost_2;            // 0x02D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x02E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_FrozenGhost_Attack_Phase_C_ExecuteUbergraph_GA_FrozenGhost_Attack_Phase) == 0x000008, "Wrong alignment on GA_FrozenGhost_Attack_Phase_C_ExecuteUbergraph_GA_FrozenGhost_Attack_Phase");
static_assert(sizeof(GA_FrozenGhost_Attack_Phase_C_ExecuteUbergraph_GA_FrozenGhost_Attack_Phase) == 0x0002E8, "Wrong size on GA_FrozenGhost_Attack_Phase_C_ExecuteUbergraph_GA_FrozenGhost_Attack_Phase");
static_assert(offsetof(GA_FrozenGhost_Attack_Phase_C_ExecuteUbergraph_GA_FrozenGhost_Attack_Phase, EntryPoint) == 0x000000, "Member 'GA_FrozenGhost_Attack_Phase_C_ExecuteUbergraph_GA_FrozenGhost_Attack_Phase::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_FrozenGhost_Attack_Phase_C_ExecuteUbergraph_GA_FrozenGhost_Attack_Phase, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000008, "Member 'GA_FrozenGhost_Attack_Phase_C_ExecuteUbergraph_GA_FrozenGhost_Attack_Phase::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_FrozenGhost_Attack_Phase_C_ExecuteUbergraph_GA_FrozenGhost_Attack_Phase, Temp_struct_Variable) == 0x000010, "Member 'GA_FrozenGhost_Attack_Phase_C_ExecuteUbergraph_GA_FrozenGhost_Attack_Phase::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GA_FrozenGhost_Attack_Phase_C_ExecuteUbergraph_GA_FrozenGhost_Attack_Phase, K2Node_DynamicCast_AsBP_Frozen_Ghost) == 0x0000C0, "Member 'GA_FrozenGhost_Attack_Phase_C_ExecuteUbergraph_GA_FrozenGhost_Attack_Phase::K2Node_DynamicCast_AsBP_Frozen_Ghost' has a wrong offset!");
static_assert(offsetof(GA_FrozenGhost_Attack_Phase_C_ExecuteUbergraph_GA_FrozenGhost_Attack_Phase, K2Node_DynamicCast_bSuccess) == 0x0000C8, "Member 'GA_FrozenGhost_Attack_Phase_C_ExecuteUbergraph_GA_FrozenGhost_Attack_Phase::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_FrozenGhost_Attack_Phase_C_ExecuteUbergraph_GA_FrozenGhost_Attack_Phase, CallFunc_WaitGameplayEvent_ReturnValue) == 0x0000D0, "Member 'GA_FrozenGhost_Attack_Phase_C_ExecuteUbergraph_GA_FrozenGhost_Attack_Phase::CallFunc_WaitGameplayEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_FrozenGhost_Attack_Phase_C_ExecuteUbergraph_GA_FrozenGhost_Attack_Phase, CallFunc_IsValid_ReturnValue) == 0x0000D8, "Member 'GA_FrozenGhost_Attack_Phase_C_ExecuteUbergraph_GA_FrozenGhost_Attack_Phase::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_FrozenGhost_Attack_Phase_C_ExecuteUbergraph_GA_FrozenGhost_Attack_Phase, CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1) == 0x0000E0, "Member 'GA_FrozenGhost_Attack_Phase_C_ExecuteUbergraph_GA_FrozenGhost_Attack_Phase::CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_FrozenGhost_Attack_Phase_C_ExecuteUbergraph_GA_FrozenGhost_Attack_Phase, K2Node_CustomEvent_Payload) == 0x0000E8, "Member 'GA_FrozenGhost_Attack_Phase_C_ExecuteUbergraph_GA_FrozenGhost_Attack_Phase::K2Node_CustomEvent_Payload' has a wrong offset!");
static_assert(offsetof(GA_FrozenGhost_Attack_Phase_C_ExecuteUbergraph_GA_FrozenGhost_Attack_Phase, K2Node_DynamicCast_AsBP_Frozen_Ghost_1) == 0x000198, "Member 'GA_FrozenGhost_Attack_Phase_C_ExecuteUbergraph_GA_FrozenGhost_Attack_Phase::K2Node_DynamicCast_AsBP_Frozen_Ghost_1' has a wrong offset!");
static_assert(offsetof(GA_FrozenGhost_Attack_Phase_C_ExecuteUbergraph_GA_FrozenGhost_Attack_Phase, K2Node_DynamicCast_bSuccess_1) == 0x0001A0, "Member 'GA_FrozenGhost_Attack_Phase_C_ExecuteUbergraph_GA_FrozenGhost_Attack_Phase::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GA_FrozenGhost_Attack_Phase_C_ExecuteUbergraph_GA_FrozenGhost_Attack_Phase, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x0001A1, "Member 'GA_FrozenGhost_Attack_Phase_C_ExecuteUbergraph_GA_FrozenGhost_Attack_Phase::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_FrozenGhost_Attack_Phase_C_ExecuteUbergraph_GA_FrozenGhost_Attack_Phase, CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2) == 0x0001A8, "Member 'GA_FrozenGhost_Attack_Phase_C_ExecuteUbergraph_GA_FrozenGhost_Attack_Phase::CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_FrozenGhost_Attack_Phase_C_ExecuteUbergraph_GA_FrozenGhost_Attack_Phase, CallFunc_Get_Enemies_In_Range_And_Angle_From_Actor_Result) == 0x0001B0, "Member 'GA_FrozenGhost_Attack_Phase_C_ExecuteUbergraph_GA_FrozenGhost_Attack_Phase::CallFunc_Get_Enemies_In_Range_And_Angle_From_Actor_Result' has a wrong offset!");
static_assert(offsetof(GA_FrozenGhost_Attack_Phase_C_ExecuteUbergraph_GA_FrozenGhost_Attack_Phase, CallFunc_Get_Enemies_In_Range_And_Angle_From_Actor_DCCharacterBase) == 0x0001B8, "Member 'GA_FrozenGhost_Attack_Phase_C_ExecuteUbergraph_GA_FrozenGhost_Attack_Phase::CallFunc_Get_Enemies_In_Range_And_Angle_From_Actor_DCCharacterBase' has a wrong offset!");
static_assert(offsetof(GA_FrozenGhost_Attack_Phase_C_ExecuteUbergraph_GA_FrozenGhost_Attack_Phase, CallFunc_GreaterEqual_DoubleDouble_ReturnValue) == 0x0001C8, "Member 'GA_FrozenGhost_Attack_Phase_C_ExecuteUbergraph_GA_FrozenGhost_Attack_Phase::CallFunc_GreaterEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_FrozenGhost_Attack_Phase_C_ExecuteUbergraph_GA_FrozenGhost_Attack_Phase, K2Node_CreateDelegate_OutputDelegate) == 0x0001CC, "Member 'GA_FrozenGhost_Attack_Phase_C_ExecuteUbergraph_GA_FrozenGhost_Attack_Phase::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_FrozenGhost_Attack_Phase_C_ExecuteUbergraph_GA_FrozenGhost_Attack_Phase, CallFunc_RandomFloatInRange_ReturnValue) == 0x0001E0, "Member 'GA_FrozenGhost_Attack_Phase_C_ExecuteUbergraph_GA_FrozenGhost_Attack_Phase::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_FrozenGhost_Attack_Phase_C_ExecuteUbergraph_GA_FrozenGhost_Attack_Phase, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x0001E8, "Member 'GA_FrozenGhost_Attack_Phase_C_ExecuteUbergraph_GA_FrozenGhost_Attack_Phase::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_FrozenGhost_Attack_Phase_C_ExecuteUbergraph_GA_FrozenGhost_Attack_Phase, CallFunc_BooleanOR_ReturnValue) == 0x0001E9, "Member 'GA_FrozenGhost_Attack_Phase_C_ExecuteUbergraph_GA_FrozenGhost_Attack_Phase::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_FrozenGhost_Attack_Phase_C_ExecuteUbergraph_GA_FrozenGhost_Attack_Phase, CallFunc_GetAvatarActorFromActorInfo_ReturnValue_3) == 0x0001F0, "Member 'GA_FrozenGhost_Attack_Phase_C_ExecuteUbergraph_GA_FrozenGhost_Attack_Phase::CallFunc_GetAvatarActorFromActorInfo_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GA_FrozenGhost_Attack_Phase_C_ExecuteUbergraph_GA_FrozenGhost_Attack_Phase, CallFunc_GetAIController_ReturnValue) == 0x0001F8, "Member 'GA_FrozenGhost_Attack_Phase_C_ExecuteUbergraph_GA_FrozenGhost_Attack_Phase::CallFunc_GetAIController_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_FrozenGhost_Attack_Phase_C_ExecuteUbergraph_GA_FrozenGhost_Attack_Phase, K2Node_Event_bWasCancelled) == 0x000200, "Member 'GA_FrozenGhost_Attack_Phase_C_ExecuteUbergraph_GA_FrozenGhost_Attack_Phase::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GA_FrozenGhost_Attack_Phase_C_ExecuteUbergraph_GA_FrozenGhost_Attack_Phase, K2Node_Event_TriggerEventData) == 0x000208, "Member 'GA_FrozenGhost_Attack_Phase_C_ExecuteUbergraph_GA_FrozenGhost_Attack_Phase::K2Node_Event_TriggerEventData' has a wrong offset!");
static_assert(offsetof(GA_FrozenGhost_Attack_Phase_C_ExecuteUbergraph_GA_FrozenGhost_Attack_Phase, CallFunc_GetAvatarActorFromActorInfo_ReturnValue_4) == 0x0002B8, "Member 'GA_FrozenGhost_Attack_Phase_C_ExecuteUbergraph_GA_FrozenGhost_Attack_Phase::CallFunc_GetAvatarActorFromActorInfo_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GA_FrozenGhost_Attack_Phase_C_ExecuteUbergraph_GA_FrozenGhost_Attack_Phase, CallFunc_GetAvatarActorFromActorInfo_ReturnValue_5) == 0x0002C0, "Member 'GA_FrozenGhost_Attack_Phase_C_ExecuteUbergraph_GA_FrozenGhost_Attack_Phase::CallFunc_GetAvatarActorFromActorInfo_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(GA_FrozenGhost_Attack_Phase_C_ExecuteUbergraph_GA_FrozenGhost_Attack_Phase, CallFunc_Actor_Has_AI_Timer_Return_Value) == 0x0002C8, "Member 'GA_FrozenGhost_Attack_Phase_C_ExecuteUbergraph_GA_FrozenGhost_Attack_Phase::CallFunc_Actor_Has_AI_Timer_Return_Value' has a wrong offset!");
static_assert(offsetof(GA_FrozenGhost_Attack_Phase_C_ExecuteUbergraph_GA_FrozenGhost_Attack_Phase, CallFunc_GetAvatarActorFromActorInfo_ReturnValue_6) == 0x0002D0, "Member 'GA_FrozenGhost_Attack_Phase_C_ExecuteUbergraph_GA_FrozenGhost_Attack_Phase::CallFunc_GetAvatarActorFromActorInfo_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(GA_FrozenGhost_Attack_Phase_C_ExecuteUbergraph_GA_FrozenGhost_Attack_Phase, K2Node_DynamicCast_AsBP_Frozen_Ghost_2) == 0x0002D8, "Member 'GA_FrozenGhost_Attack_Phase_C_ExecuteUbergraph_GA_FrozenGhost_Attack_Phase::K2Node_DynamicCast_AsBP_Frozen_Ghost_2' has a wrong offset!");
static_assert(offsetof(GA_FrozenGhost_Attack_Phase_C_ExecuteUbergraph_GA_FrozenGhost_Attack_Phase, K2Node_DynamicCast_bSuccess_2) == 0x0002E0, "Member 'GA_FrozenGhost_Attack_Phase_C_ExecuteUbergraph_GA_FrozenGhost_Attack_Phase::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");

// Function GA_FrozenGhost_Attack_Phase.GA_FrozenGhost_Attack_Phase_C.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct GA_FrozenGhost_Attack_Phase_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_FrozenGhost_Attack_Phase_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GA_FrozenGhost_Attack_Phase_C_K2_OnEndAbility");
static_assert(sizeof(GA_FrozenGhost_Attack_Phase_C_K2_OnEndAbility) == 0x000001, "Wrong size on GA_FrozenGhost_Attack_Phase_C_K2_OnEndAbility");
static_assert(offsetof(GA_FrozenGhost_Attack_Phase_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GA_FrozenGhost_Attack_Phase_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

}

