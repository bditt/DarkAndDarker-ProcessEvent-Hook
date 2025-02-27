#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_IceTroll_Attack_Phase

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GA_IceTroll_Attack_Phase.GA_IceTroll_Attack_Phase_C.AbilityActivated
// 0x00B0 (0x00B0 - 0x0000)
struct GA_IceTroll_Attack_Phase_C_AbilityActivated final
{
public:
	struct FGameplayEventData                     TriggerEventData;                                  // 0x0000(0x00B0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GA_IceTroll_Attack_Phase_C_AbilityActivated) == 0x000008, "Wrong alignment on GA_IceTroll_Attack_Phase_C_AbilityActivated");
static_assert(sizeof(GA_IceTroll_Attack_Phase_C_AbilityActivated) == 0x0000B0, "Wrong size on GA_IceTroll_Attack_Phase_C_AbilityActivated");
static_assert(offsetof(GA_IceTroll_Attack_Phase_C_AbilityActivated, TriggerEventData) == 0x000000, "Member 'GA_IceTroll_Attack_Phase_C_AbilityActivated::TriggerEventData' has a wrong offset!");

// Function GA_IceTroll_Attack_Phase.GA_IceTroll_Attack_Phase_C.EventReceived_1BC6F2564B1F0E95457A76AA4C5078FF
// 0x00B8 (0x00B8 - 0x0000)
struct GA_IceTroll_Attack_Phase_C_EventReceived_1BC6F2564B1F0E95457A76AA4C5078FF final
{
public:
	struct FGameplayTag                           EventTag;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     EventData;                                         // 0x0008(0x00B0)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GA_IceTroll_Attack_Phase_C_EventReceived_1BC6F2564B1F0E95457A76AA4C5078FF) == 0x000008, "Wrong alignment on GA_IceTroll_Attack_Phase_C_EventReceived_1BC6F2564B1F0E95457A76AA4C5078FF");
static_assert(sizeof(GA_IceTroll_Attack_Phase_C_EventReceived_1BC6F2564B1F0E95457A76AA4C5078FF) == 0x0000B8, "Wrong size on GA_IceTroll_Attack_Phase_C_EventReceived_1BC6F2564B1F0E95457A76AA4C5078FF");
static_assert(offsetof(GA_IceTroll_Attack_Phase_C_EventReceived_1BC6F2564B1F0E95457A76AA4C5078FF, EventTag) == 0x000000, "Member 'GA_IceTroll_Attack_Phase_C_EventReceived_1BC6F2564B1F0E95457A76AA4C5078FF::EventTag' has a wrong offset!");
static_assert(offsetof(GA_IceTroll_Attack_Phase_C_EventReceived_1BC6F2564B1F0E95457A76AA4C5078FF, EventData) == 0x000008, "Member 'GA_IceTroll_Attack_Phase_C_EventReceived_1BC6F2564B1F0E95457A76AA4C5078FF::EventData' has a wrong offset!");

// Function GA_IceTroll_Attack_Phase.GA_IceTroll_Attack_Phase_C.ExecuteUbergraph_GA_IceTroll_Attack_Phase
// 0x02D0 (0x02D0 - 0x0000)
struct GA_IceTroll_Attack_Phase_C_ExecuteUbergraph_GA_IceTroll_Attack_Phase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           K2Node_CustomEvent_EventTag;                       // 0x0004(0x0008)(NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_455D[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_CustomEvent_EventData;                      // 0x0010(0x00B0)()
	struct FGameplayEventData                     Temp_struct_Variable;                              // 0x00C0(0x00B0)()
	struct FGameplayTag                           Temp_struct_Variable_1;                            // 0x0170(0x0008)(NoDestructor, HasGetValueTypeHash)
	class UDCAT_WaitForGameplayEvents*            CallFunc_WaitForGameplayEvents_ReturnValue;        // 0x0178(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)> K2Node_CreateDelegate_OutputDelegate;              // 0x0180(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_455E[0x7];                                     // 0x0191(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_RandomFloatInRange_ReturnValue;           // 0x0198(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x01A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x01A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_455F[0x5];                                     // 0x01A3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_Event_TriggerEventData;                     // 0x01A8(0x00B0)(ConstParm)
	double                                        CallFunc_RandomFloatInRange_ReturnValue_1;         // 0x0258(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x0260(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue_1;     // 0x0268(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Get_Enemies_In_Range_And_Angle_From_Actor_Result; // 0x0269(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4560[0x6];                                     // 0x026A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ADCCharacterBase*>               CallFunc_Get_Enemies_In_Range_And_Angle_From_Actor_DCCharacterBase; // 0x0270(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1; // 0x0280(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Get_Enemy_Relative_Angle_From_Actor_Angle; // 0x0288(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1;  // 0x028C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_InRange_FloatFloat_ReturnValue;           // 0x028D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x028E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4561[0x1];                                     // 0x028F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2; // 0x0290(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue_3; // 0x0298(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Get_Enemy_Relative_Angle_From_Actor_Angle_1; // 0x02A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Get_Enemies_In_Range_And_Angle_From_Actor_Result_1; // 0x02A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4562[0x3];                                     // 0x02A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ADCCharacterBase*>               CallFunc_Get_Enemies_In_Range_And_Angle_From_Actor_DCCharacterBase_1; // 0x02A8(0x0010)(ReferenceParm)
	bool                                          CallFunc_InRange_FloatFloat_ReturnValue_1;         // 0x02B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4563[0x7];                                     // 0x02B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_InRange_FloatFloat_Value_ImplicitCast;    // 0x02C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_InRange_FloatFloat_Value_ImplicitCast_1;  // 0x02C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_IceTroll_Attack_Phase_C_ExecuteUbergraph_GA_IceTroll_Attack_Phase) == 0x000008, "Wrong alignment on GA_IceTroll_Attack_Phase_C_ExecuteUbergraph_GA_IceTroll_Attack_Phase");
static_assert(sizeof(GA_IceTroll_Attack_Phase_C_ExecuteUbergraph_GA_IceTroll_Attack_Phase) == 0x0002D0, "Wrong size on GA_IceTroll_Attack_Phase_C_ExecuteUbergraph_GA_IceTroll_Attack_Phase");
static_assert(offsetof(GA_IceTroll_Attack_Phase_C_ExecuteUbergraph_GA_IceTroll_Attack_Phase, EntryPoint) == 0x000000, "Member 'GA_IceTroll_Attack_Phase_C_ExecuteUbergraph_GA_IceTroll_Attack_Phase::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_IceTroll_Attack_Phase_C_ExecuteUbergraph_GA_IceTroll_Attack_Phase, K2Node_CustomEvent_EventTag) == 0x000004, "Member 'GA_IceTroll_Attack_Phase_C_ExecuteUbergraph_GA_IceTroll_Attack_Phase::K2Node_CustomEvent_EventTag' has a wrong offset!");
static_assert(offsetof(GA_IceTroll_Attack_Phase_C_ExecuteUbergraph_GA_IceTroll_Attack_Phase, K2Node_CustomEvent_EventData) == 0x000010, "Member 'GA_IceTroll_Attack_Phase_C_ExecuteUbergraph_GA_IceTroll_Attack_Phase::K2Node_CustomEvent_EventData' has a wrong offset!");
static_assert(offsetof(GA_IceTroll_Attack_Phase_C_ExecuteUbergraph_GA_IceTroll_Attack_Phase, Temp_struct_Variable) == 0x0000C0, "Member 'GA_IceTroll_Attack_Phase_C_ExecuteUbergraph_GA_IceTroll_Attack_Phase::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GA_IceTroll_Attack_Phase_C_ExecuteUbergraph_GA_IceTroll_Attack_Phase, Temp_struct_Variable_1) == 0x000170, "Member 'GA_IceTroll_Attack_Phase_C_ExecuteUbergraph_GA_IceTroll_Attack_Phase::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(GA_IceTroll_Attack_Phase_C_ExecuteUbergraph_GA_IceTroll_Attack_Phase, CallFunc_WaitForGameplayEvents_ReturnValue) == 0x000178, "Member 'GA_IceTroll_Attack_Phase_C_ExecuteUbergraph_GA_IceTroll_Attack_Phase::CallFunc_WaitForGameplayEvents_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_IceTroll_Attack_Phase_C_ExecuteUbergraph_GA_IceTroll_Attack_Phase, K2Node_CreateDelegate_OutputDelegate) == 0x000180, "Member 'GA_IceTroll_Attack_Phase_C_ExecuteUbergraph_GA_IceTroll_Attack_Phase::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_IceTroll_Attack_Phase_C_ExecuteUbergraph_GA_IceTroll_Attack_Phase, CallFunc_IsValid_ReturnValue) == 0x000190, "Member 'GA_IceTroll_Attack_Phase_C_ExecuteUbergraph_GA_IceTroll_Attack_Phase::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_IceTroll_Attack_Phase_C_ExecuteUbergraph_GA_IceTroll_Attack_Phase, CallFunc_RandomFloatInRange_ReturnValue) == 0x000198, "Member 'GA_IceTroll_Attack_Phase_C_ExecuteUbergraph_GA_IceTroll_Attack_Phase::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_IceTroll_Attack_Phase_C_ExecuteUbergraph_GA_IceTroll_Attack_Phase, CallFunc_GreaterEqual_DoubleDouble_ReturnValue) == 0x0001A0, "Member 'GA_IceTroll_Attack_Phase_C_ExecuteUbergraph_GA_IceTroll_Attack_Phase::CallFunc_GreaterEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_IceTroll_Attack_Phase_C_ExecuteUbergraph_GA_IceTroll_Attack_Phase, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x0001A1, "Member 'GA_IceTroll_Attack_Phase_C_ExecuteUbergraph_GA_IceTroll_Attack_Phase::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_IceTroll_Attack_Phase_C_ExecuteUbergraph_GA_IceTroll_Attack_Phase, CallFunc_BooleanOR_ReturnValue) == 0x0001A2, "Member 'GA_IceTroll_Attack_Phase_C_ExecuteUbergraph_GA_IceTroll_Attack_Phase::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_IceTroll_Attack_Phase_C_ExecuteUbergraph_GA_IceTroll_Attack_Phase, K2Node_Event_TriggerEventData) == 0x0001A8, "Member 'GA_IceTroll_Attack_Phase_C_ExecuteUbergraph_GA_IceTroll_Attack_Phase::K2Node_Event_TriggerEventData' has a wrong offset!");
static_assert(offsetof(GA_IceTroll_Attack_Phase_C_ExecuteUbergraph_GA_IceTroll_Attack_Phase, CallFunc_RandomFloatInRange_ReturnValue_1) == 0x000258, "Member 'GA_IceTroll_Attack_Phase_C_ExecuteUbergraph_GA_IceTroll_Attack_Phase::CallFunc_RandomFloatInRange_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_IceTroll_Attack_Phase_C_ExecuteUbergraph_GA_IceTroll_Attack_Phase, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000260, "Member 'GA_IceTroll_Attack_Phase_C_ExecuteUbergraph_GA_IceTroll_Attack_Phase::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_IceTroll_Attack_Phase_C_ExecuteUbergraph_GA_IceTroll_Attack_Phase, CallFunc_LessEqual_DoubleDouble_ReturnValue_1) == 0x000268, "Member 'GA_IceTroll_Attack_Phase_C_ExecuteUbergraph_GA_IceTroll_Attack_Phase::CallFunc_LessEqual_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_IceTroll_Attack_Phase_C_ExecuteUbergraph_GA_IceTroll_Attack_Phase, CallFunc_Get_Enemies_In_Range_And_Angle_From_Actor_Result) == 0x000269, "Member 'GA_IceTroll_Attack_Phase_C_ExecuteUbergraph_GA_IceTroll_Attack_Phase::CallFunc_Get_Enemies_In_Range_And_Angle_From_Actor_Result' has a wrong offset!");
static_assert(offsetof(GA_IceTroll_Attack_Phase_C_ExecuteUbergraph_GA_IceTroll_Attack_Phase, CallFunc_Get_Enemies_In_Range_And_Angle_From_Actor_DCCharacterBase) == 0x000270, "Member 'GA_IceTroll_Attack_Phase_C_ExecuteUbergraph_GA_IceTroll_Attack_Phase::CallFunc_Get_Enemies_In_Range_And_Angle_From_Actor_DCCharacterBase' has a wrong offset!");
static_assert(offsetof(GA_IceTroll_Attack_Phase_C_ExecuteUbergraph_GA_IceTroll_Attack_Phase, CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1) == 0x000280, "Member 'GA_IceTroll_Attack_Phase_C_ExecuteUbergraph_GA_IceTroll_Attack_Phase::CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_IceTroll_Attack_Phase_C_ExecuteUbergraph_GA_IceTroll_Attack_Phase, CallFunc_Get_Enemy_Relative_Angle_From_Actor_Angle) == 0x000288, "Member 'GA_IceTroll_Attack_Phase_C_ExecuteUbergraph_GA_IceTroll_Attack_Phase::CallFunc_Get_Enemy_Relative_Angle_From_Actor_Angle' has a wrong offset!");
static_assert(offsetof(GA_IceTroll_Attack_Phase_C_ExecuteUbergraph_GA_IceTroll_Attack_Phase, CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1) == 0x00028C, "Member 'GA_IceTroll_Attack_Phase_C_ExecuteUbergraph_GA_IceTroll_Attack_Phase::CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_IceTroll_Attack_Phase_C_ExecuteUbergraph_GA_IceTroll_Attack_Phase, CallFunc_InRange_FloatFloat_ReturnValue) == 0x00028D, "Member 'GA_IceTroll_Attack_Phase_C_ExecuteUbergraph_GA_IceTroll_Attack_Phase::CallFunc_InRange_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_IceTroll_Attack_Phase_C_ExecuteUbergraph_GA_IceTroll_Attack_Phase, CallFunc_BooleanOR_ReturnValue_1) == 0x00028E, "Member 'GA_IceTroll_Attack_Phase_C_ExecuteUbergraph_GA_IceTroll_Attack_Phase::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_IceTroll_Attack_Phase_C_ExecuteUbergraph_GA_IceTroll_Attack_Phase, CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2) == 0x000290, "Member 'GA_IceTroll_Attack_Phase_C_ExecuteUbergraph_GA_IceTroll_Attack_Phase::CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_IceTroll_Attack_Phase_C_ExecuteUbergraph_GA_IceTroll_Attack_Phase, CallFunc_GetAvatarActorFromActorInfo_ReturnValue_3) == 0x000298, "Member 'GA_IceTroll_Attack_Phase_C_ExecuteUbergraph_GA_IceTroll_Attack_Phase::CallFunc_GetAvatarActorFromActorInfo_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GA_IceTroll_Attack_Phase_C_ExecuteUbergraph_GA_IceTroll_Attack_Phase, CallFunc_Get_Enemy_Relative_Angle_From_Actor_Angle_1) == 0x0002A0, "Member 'GA_IceTroll_Attack_Phase_C_ExecuteUbergraph_GA_IceTroll_Attack_Phase::CallFunc_Get_Enemy_Relative_Angle_From_Actor_Angle_1' has a wrong offset!");
static_assert(offsetof(GA_IceTroll_Attack_Phase_C_ExecuteUbergraph_GA_IceTroll_Attack_Phase, CallFunc_Get_Enemies_In_Range_And_Angle_From_Actor_Result_1) == 0x0002A4, "Member 'GA_IceTroll_Attack_Phase_C_ExecuteUbergraph_GA_IceTroll_Attack_Phase::CallFunc_Get_Enemies_In_Range_And_Angle_From_Actor_Result_1' has a wrong offset!");
static_assert(offsetof(GA_IceTroll_Attack_Phase_C_ExecuteUbergraph_GA_IceTroll_Attack_Phase, CallFunc_Get_Enemies_In_Range_And_Angle_From_Actor_DCCharacterBase_1) == 0x0002A8, "Member 'GA_IceTroll_Attack_Phase_C_ExecuteUbergraph_GA_IceTroll_Attack_Phase::CallFunc_Get_Enemies_In_Range_And_Angle_From_Actor_DCCharacterBase_1' has a wrong offset!");
static_assert(offsetof(GA_IceTroll_Attack_Phase_C_ExecuteUbergraph_GA_IceTroll_Attack_Phase, CallFunc_InRange_FloatFloat_ReturnValue_1) == 0x0002B8, "Member 'GA_IceTroll_Attack_Phase_C_ExecuteUbergraph_GA_IceTroll_Attack_Phase::CallFunc_InRange_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_IceTroll_Attack_Phase_C_ExecuteUbergraph_GA_IceTroll_Attack_Phase, CallFunc_InRange_FloatFloat_Value_ImplicitCast) == 0x0002C0, "Member 'GA_IceTroll_Attack_Phase_C_ExecuteUbergraph_GA_IceTroll_Attack_Phase::CallFunc_InRange_FloatFloat_Value_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GA_IceTroll_Attack_Phase_C_ExecuteUbergraph_GA_IceTroll_Attack_Phase, CallFunc_InRange_FloatFloat_Value_ImplicitCast_1) == 0x0002C8, "Member 'GA_IceTroll_Attack_Phase_C_ExecuteUbergraph_GA_IceTroll_Attack_Phase::CallFunc_InRange_FloatFloat_Value_ImplicitCast_1' has a wrong offset!");

}

