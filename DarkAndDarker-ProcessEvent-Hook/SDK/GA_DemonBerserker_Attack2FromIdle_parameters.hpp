#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_DemonBerserker_Attack2FromIdle

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GA_DemonBerserker_Attack2FromIdle.GA_DemonBerserker_Attack2FromIdle_C.AbilityActivated
// 0x00B0 (0x00B0 - 0x0000)
struct GA_DemonBerserker_Attack2FromIdle_C_AbilityActivated final
{
public:
	struct FGameplayEventData                     TriggerEventData;                                  // 0x0000(0x00B0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GA_DemonBerserker_Attack2FromIdle_C_AbilityActivated) == 0x000008, "Wrong alignment on GA_DemonBerserker_Attack2FromIdle_C_AbilityActivated");
static_assert(sizeof(GA_DemonBerserker_Attack2FromIdle_C_AbilityActivated) == 0x0000B0, "Wrong size on GA_DemonBerserker_Attack2FromIdle_C_AbilityActivated");
static_assert(offsetof(GA_DemonBerserker_Attack2FromIdle_C_AbilityActivated, TriggerEventData) == 0x000000, "Member 'GA_DemonBerserker_Attack2FromIdle_C_AbilityActivated::TriggerEventData' has a wrong offset!");

// Function GA_DemonBerserker_Attack2FromIdle.GA_DemonBerserker_Attack2FromIdle_C.EventReceived_17805B8345D124FA6FAF2CB3E2C10054
// 0x00B0 (0x00B0 - 0x0000)
struct GA_DemonBerserker_Attack2FromIdle_C_EventReceived_17805B8345D124FA6FAF2CB3E2C10054 final
{
public:
	struct FGameplayEventData                     Payload;                                           // 0x0000(0x00B0)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GA_DemonBerserker_Attack2FromIdle_C_EventReceived_17805B8345D124FA6FAF2CB3E2C10054) == 0x000008, "Wrong alignment on GA_DemonBerserker_Attack2FromIdle_C_EventReceived_17805B8345D124FA6FAF2CB3E2C10054");
static_assert(sizeof(GA_DemonBerserker_Attack2FromIdle_C_EventReceived_17805B8345D124FA6FAF2CB3E2C10054) == 0x0000B0, "Wrong size on GA_DemonBerserker_Attack2FromIdle_C_EventReceived_17805B8345D124FA6FAF2CB3E2C10054");
static_assert(offsetof(GA_DemonBerserker_Attack2FromIdle_C_EventReceived_17805B8345D124FA6FAF2CB3E2C10054, Payload) == 0x000000, "Member 'GA_DemonBerserker_Attack2FromIdle_C_EventReceived_17805B8345D124FA6FAF2CB3E2C10054::Payload' has a wrong offset!");

// Function GA_DemonBerserker_Attack2FromIdle.GA_DemonBerserker_Attack2FromIdle_C.ExecuteUbergraph_GA_DemonBerserker_Attack2FromIdle
// 0x0290 (0x0290 - 0x0000)
struct GA_DemonBerserker_Attack2FromIdle_C_ExecuteUbergraph_GA_DemonBerserker_Attack2FromIdle final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_30F0[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     Temp_struct_Variable;                              // 0x0010(0x00B0)()
	class ABP_DemonBerserker_Common_C*            K2Node_DynamicCast_AsBP_Demon_Berserker_Common;    // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_30F1[0x7];                                     // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilityTask_WaitGameplayEvent*         CallFunc_WaitGameplayEvent_ReturnValue;            // 0x00D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CheckGradeType_ReturnValue;               // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_30F2[0x6];                                     // 0x00DA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_CustomEvent_Payload;                        // 0x00E0(0x00B0)()
	double                                        CallFunc_RandomFloatInRange_ReturnValue;           // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_30F3[0x3];                                     // 0x0199(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const struct FGameplayEventData& Payload)> K2Node_CreateDelegate_OutputDelegate;              // 0x019C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_30F4[0x4];                                     // 0x01AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_Event_TriggerEventData;                     // 0x01B0(0x00B0)(ConstParm)
	double                                        CallFunc_RandomFloatInRange_ReturnValue_1;         // 0x0260(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x0268(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue_1;     // 0x0269(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x026A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bWasCancelled;                        // 0x026B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1;  // 0x026C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_30F5[0x3];                                     // 0x026D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1; // 0x0270(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0278(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Get_Enemies_In_Range_And_Angle_From_Actor_Result; // 0x0279(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_30F6[0x6];                                     // 0x027A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ADCCharacterBase*>               CallFunc_Get_Enemies_In_Range_And_Angle_From_Actor_DCCharacterBase; // 0x0280(0x0010)(ReferenceParm)
};
static_assert(alignof(GA_DemonBerserker_Attack2FromIdle_C_ExecuteUbergraph_GA_DemonBerserker_Attack2FromIdle) == 0x000008, "Wrong alignment on GA_DemonBerserker_Attack2FromIdle_C_ExecuteUbergraph_GA_DemonBerserker_Attack2FromIdle");
static_assert(sizeof(GA_DemonBerserker_Attack2FromIdle_C_ExecuteUbergraph_GA_DemonBerserker_Attack2FromIdle) == 0x000290, "Wrong size on GA_DemonBerserker_Attack2FromIdle_C_ExecuteUbergraph_GA_DemonBerserker_Attack2FromIdle");
static_assert(offsetof(GA_DemonBerserker_Attack2FromIdle_C_ExecuteUbergraph_GA_DemonBerserker_Attack2FromIdle, EntryPoint) == 0x000000, "Member 'GA_DemonBerserker_Attack2FromIdle_C_ExecuteUbergraph_GA_DemonBerserker_Attack2FromIdle::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_DemonBerserker_Attack2FromIdle_C_ExecuteUbergraph_GA_DemonBerserker_Attack2FromIdle, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000008, "Member 'GA_DemonBerserker_Attack2FromIdle_C_ExecuteUbergraph_GA_DemonBerserker_Attack2FromIdle::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_DemonBerserker_Attack2FromIdle_C_ExecuteUbergraph_GA_DemonBerserker_Attack2FromIdle, Temp_struct_Variable) == 0x000010, "Member 'GA_DemonBerserker_Attack2FromIdle_C_ExecuteUbergraph_GA_DemonBerserker_Attack2FromIdle::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GA_DemonBerserker_Attack2FromIdle_C_ExecuteUbergraph_GA_DemonBerserker_Attack2FromIdle, K2Node_DynamicCast_AsBP_Demon_Berserker_Common) == 0x0000C0, "Member 'GA_DemonBerserker_Attack2FromIdle_C_ExecuteUbergraph_GA_DemonBerserker_Attack2FromIdle::K2Node_DynamicCast_AsBP_Demon_Berserker_Common' has a wrong offset!");
static_assert(offsetof(GA_DemonBerserker_Attack2FromIdle_C_ExecuteUbergraph_GA_DemonBerserker_Attack2FromIdle, K2Node_DynamicCast_bSuccess) == 0x0000C8, "Member 'GA_DemonBerserker_Attack2FromIdle_C_ExecuteUbergraph_GA_DemonBerserker_Attack2FromIdle::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_DemonBerserker_Attack2FromIdle_C_ExecuteUbergraph_GA_DemonBerserker_Attack2FromIdle, CallFunc_WaitGameplayEvent_ReturnValue) == 0x0000D0, "Member 'GA_DemonBerserker_Attack2FromIdle_C_ExecuteUbergraph_GA_DemonBerserker_Attack2FromIdle::CallFunc_WaitGameplayEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_DemonBerserker_Attack2FromIdle_C_ExecuteUbergraph_GA_DemonBerserker_Attack2FromIdle, CallFunc_CheckGradeType_ReturnValue) == 0x0000D8, "Member 'GA_DemonBerserker_Attack2FromIdle_C_ExecuteUbergraph_GA_DemonBerserker_Attack2FromIdle::CallFunc_CheckGradeType_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_DemonBerserker_Attack2FromIdle_C_ExecuteUbergraph_GA_DemonBerserker_Attack2FromIdle, CallFunc_IsValid_ReturnValue) == 0x0000D9, "Member 'GA_DemonBerserker_Attack2FromIdle_C_ExecuteUbergraph_GA_DemonBerserker_Attack2FromIdle::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_DemonBerserker_Attack2FromIdle_C_ExecuteUbergraph_GA_DemonBerserker_Attack2FromIdle, K2Node_CustomEvent_Payload) == 0x0000E0, "Member 'GA_DemonBerserker_Attack2FromIdle_C_ExecuteUbergraph_GA_DemonBerserker_Attack2FromIdle::K2Node_CustomEvent_Payload' has a wrong offset!");
static_assert(offsetof(GA_DemonBerserker_Attack2FromIdle_C_ExecuteUbergraph_GA_DemonBerserker_Attack2FromIdle, CallFunc_RandomFloatInRange_ReturnValue) == 0x000190, "Member 'GA_DemonBerserker_Attack2FromIdle_C_ExecuteUbergraph_GA_DemonBerserker_Attack2FromIdle::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_DemonBerserker_Attack2FromIdle_C_ExecuteUbergraph_GA_DemonBerserker_Attack2FromIdle, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x000198, "Member 'GA_DemonBerserker_Attack2FromIdle_C_ExecuteUbergraph_GA_DemonBerserker_Attack2FromIdle::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_DemonBerserker_Attack2FromIdle_C_ExecuteUbergraph_GA_DemonBerserker_Attack2FromIdle, K2Node_CreateDelegate_OutputDelegate) == 0x00019C, "Member 'GA_DemonBerserker_Attack2FromIdle_C_ExecuteUbergraph_GA_DemonBerserker_Attack2FromIdle::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_DemonBerserker_Attack2FromIdle_C_ExecuteUbergraph_GA_DemonBerserker_Attack2FromIdle, K2Node_Event_TriggerEventData) == 0x0001B0, "Member 'GA_DemonBerserker_Attack2FromIdle_C_ExecuteUbergraph_GA_DemonBerserker_Attack2FromIdle::K2Node_Event_TriggerEventData' has a wrong offset!");
static_assert(offsetof(GA_DemonBerserker_Attack2FromIdle_C_ExecuteUbergraph_GA_DemonBerserker_Attack2FromIdle, CallFunc_RandomFloatInRange_ReturnValue_1) == 0x000260, "Member 'GA_DemonBerserker_Attack2FromIdle_C_ExecuteUbergraph_GA_DemonBerserker_Attack2FromIdle::CallFunc_RandomFloatInRange_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_DemonBerserker_Attack2FromIdle_C_ExecuteUbergraph_GA_DemonBerserker_Attack2FromIdle, CallFunc_GreaterEqual_DoubleDouble_ReturnValue) == 0x000268, "Member 'GA_DemonBerserker_Attack2FromIdle_C_ExecuteUbergraph_GA_DemonBerserker_Attack2FromIdle::CallFunc_GreaterEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_DemonBerserker_Attack2FromIdle_C_ExecuteUbergraph_GA_DemonBerserker_Attack2FromIdle, CallFunc_LessEqual_DoubleDouble_ReturnValue_1) == 0x000269, "Member 'GA_DemonBerserker_Attack2FromIdle_C_ExecuteUbergraph_GA_DemonBerserker_Attack2FromIdle::CallFunc_LessEqual_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_DemonBerserker_Attack2FromIdle_C_ExecuteUbergraph_GA_DemonBerserker_Attack2FromIdle, CallFunc_BooleanOR_ReturnValue) == 0x00026A, "Member 'GA_DemonBerserker_Attack2FromIdle_C_ExecuteUbergraph_GA_DemonBerserker_Attack2FromIdle::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_DemonBerserker_Attack2FromIdle_C_ExecuteUbergraph_GA_DemonBerserker_Attack2FromIdle, K2Node_Event_bWasCancelled) == 0x00026B, "Member 'GA_DemonBerserker_Attack2FromIdle_C_ExecuteUbergraph_GA_DemonBerserker_Attack2FromIdle::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GA_DemonBerserker_Attack2FromIdle_C_ExecuteUbergraph_GA_DemonBerserker_Attack2FromIdle, CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1) == 0x00026C, "Member 'GA_DemonBerserker_Attack2FromIdle_C_ExecuteUbergraph_GA_DemonBerserker_Attack2FromIdle::CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_DemonBerserker_Attack2FromIdle_C_ExecuteUbergraph_GA_DemonBerserker_Attack2FromIdle, CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1) == 0x000270, "Member 'GA_DemonBerserker_Attack2FromIdle_C_ExecuteUbergraph_GA_DemonBerserker_Attack2FromIdle::CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_DemonBerserker_Attack2FromIdle_C_ExecuteUbergraph_GA_DemonBerserker_Attack2FromIdle, CallFunc_BooleanOR_ReturnValue_1) == 0x000278, "Member 'GA_DemonBerserker_Attack2FromIdle_C_ExecuteUbergraph_GA_DemonBerserker_Attack2FromIdle::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_DemonBerserker_Attack2FromIdle_C_ExecuteUbergraph_GA_DemonBerserker_Attack2FromIdle, CallFunc_Get_Enemies_In_Range_And_Angle_From_Actor_Result) == 0x000279, "Member 'GA_DemonBerserker_Attack2FromIdle_C_ExecuteUbergraph_GA_DemonBerserker_Attack2FromIdle::CallFunc_Get_Enemies_In_Range_And_Angle_From_Actor_Result' has a wrong offset!");
static_assert(offsetof(GA_DemonBerserker_Attack2FromIdle_C_ExecuteUbergraph_GA_DemonBerserker_Attack2FromIdle, CallFunc_Get_Enemies_In_Range_And_Angle_From_Actor_DCCharacterBase) == 0x000280, "Member 'GA_DemonBerserker_Attack2FromIdle_C_ExecuteUbergraph_GA_DemonBerserker_Attack2FromIdle::CallFunc_Get_Enemies_In_Range_And_Angle_From_Actor_DCCharacterBase' has a wrong offset!");

// Function GA_DemonBerserker_Attack2FromIdle.GA_DemonBerserker_Attack2FromIdle_C.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct GA_DemonBerserker_Attack2FromIdle_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_DemonBerserker_Attack2FromIdle_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GA_DemonBerserker_Attack2FromIdle_C_K2_OnEndAbility");
static_assert(sizeof(GA_DemonBerserker_Attack2FromIdle_C_K2_OnEndAbility) == 0x000001, "Wrong size on GA_DemonBerserker_Attack2FromIdle_C_K2_OnEndAbility");
static_assert(offsetof(GA_DemonBerserker_Attack2FromIdle_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GA_DemonBerserker_Attack2FromIdle_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

}

