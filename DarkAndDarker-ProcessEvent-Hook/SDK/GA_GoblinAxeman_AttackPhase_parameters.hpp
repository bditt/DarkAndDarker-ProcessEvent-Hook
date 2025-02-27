#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_GoblinAxeman_AttackPhase

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GA_GoblinAxeman_AttackPhase.GA_GoblinAxeman_AttackPhase_C.AbilityActivated
// 0x00B0 (0x00B0 - 0x0000)
struct GA_GoblinAxeman_AttackPhase_C_AbilityActivated final
{
public:
	struct FGameplayEventData                     TriggerEventData;                                  // 0x0000(0x00B0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GA_GoblinAxeman_AttackPhase_C_AbilityActivated) == 0x000008, "Wrong alignment on GA_GoblinAxeman_AttackPhase_C_AbilityActivated");
static_assert(sizeof(GA_GoblinAxeman_AttackPhase_C_AbilityActivated) == 0x0000B0, "Wrong size on GA_GoblinAxeman_AttackPhase_C_AbilityActivated");
static_assert(offsetof(GA_GoblinAxeman_AttackPhase_C_AbilityActivated, TriggerEventData) == 0x000000, "Member 'GA_GoblinAxeman_AttackPhase_C_AbilityActivated::TriggerEventData' has a wrong offset!");

// Function GA_GoblinAxeman_AttackPhase.GA_GoblinAxeman_AttackPhase_C.EventReceived_815F7D164E1705CDEA05DEB70232D2EB
// 0x00B0 (0x00B0 - 0x0000)
struct GA_GoblinAxeman_AttackPhase_C_EventReceived_815F7D164E1705CDEA05DEB70232D2EB final
{
public:
	struct FGameplayEventData                     Payload;                                           // 0x0000(0x00B0)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GA_GoblinAxeman_AttackPhase_C_EventReceived_815F7D164E1705CDEA05DEB70232D2EB) == 0x000008, "Wrong alignment on GA_GoblinAxeman_AttackPhase_C_EventReceived_815F7D164E1705CDEA05DEB70232D2EB");
static_assert(sizeof(GA_GoblinAxeman_AttackPhase_C_EventReceived_815F7D164E1705CDEA05DEB70232D2EB) == 0x0000B0, "Wrong size on GA_GoblinAxeman_AttackPhase_C_EventReceived_815F7D164E1705CDEA05DEB70232D2EB");
static_assert(offsetof(GA_GoblinAxeman_AttackPhase_C_EventReceived_815F7D164E1705CDEA05DEB70232D2EB, Payload) == 0x000000, "Member 'GA_GoblinAxeman_AttackPhase_C_EventReceived_815F7D164E1705CDEA05DEB70232D2EB::Payload' has a wrong offset!");

// Function GA_GoblinAxeman_AttackPhase.GA_GoblinAxeman_AttackPhase_C.ExecuteUbergraph_GA_GoblinAxeman_AttackPhase
// 0x0278 (0x0278 - 0x0000)
struct GA_GoblinAxeman_AttackPhase_C_ExecuteUbergraph_GA_GoblinAxeman_AttackPhase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4F73[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     Temp_struct_Variable;                              // 0x0008(0x00B0)()
	TDelegate<void(const struct FGameplayEventData& Payload)> K2Node_CreateDelegate_OutputDelegate;              // 0x00B8(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_WaitGameplayEvent*         CallFunc_WaitGameplayEvent_ReturnValue;            // 0x00C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4F74[0x6];                                     // 0x00D2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_Event_TriggerEventData;                     // 0x00D8(0x00B0)(ConstParm)
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x0188(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Get_Enemies_In_Range_And_Angle_From_Actor_Result; // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4F75[0x7];                                     // 0x0191(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ADCCharacterBase*>               CallFunc_Get_Enemies_In_Range_And_Angle_From_Actor_DCCharacterBase; // 0x0198(0x0010)(ReferenceParm)
	struct FGameplayEventData                     K2Node_CustomEvent_Payload;                        // 0x01A8(0x00B0)()
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1; // 0x0258(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_As_________________;            // 0x0260(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0270(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasMatchingGameplayTag_ReturnValue;       // 0x0271(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_GoblinAxeman_AttackPhase_C_ExecuteUbergraph_GA_GoblinAxeman_AttackPhase) == 0x000008, "Wrong alignment on GA_GoblinAxeman_AttackPhase_C_ExecuteUbergraph_GA_GoblinAxeman_AttackPhase");
static_assert(sizeof(GA_GoblinAxeman_AttackPhase_C_ExecuteUbergraph_GA_GoblinAxeman_AttackPhase) == 0x000278, "Wrong size on GA_GoblinAxeman_AttackPhase_C_ExecuteUbergraph_GA_GoblinAxeman_AttackPhase");
static_assert(offsetof(GA_GoblinAxeman_AttackPhase_C_ExecuteUbergraph_GA_GoblinAxeman_AttackPhase, EntryPoint) == 0x000000, "Member 'GA_GoblinAxeman_AttackPhase_C_ExecuteUbergraph_GA_GoblinAxeman_AttackPhase::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_GoblinAxeman_AttackPhase_C_ExecuteUbergraph_GA_GoblinAxeman_AttackPhase, Temp_struct_Variable) == 0x000008, "Member 'GA_GoblinAxeman_AttackPhase_C_ExecuteUbergraph_GA_GoblinAxeman_AttackPhase::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GA_GoblinAxeman_AttackPhase_C_ExecuteUbergraph_GA_GoblinAxeman_AttackPhase, K2Node_CreateDelegate_OutputDelegate) == 0x0000B8, "Member 'GA_GoblinAxeman_AttackPhase_C_ExecuteUbergraph_GA_GoblinAxeman_AttackPhase::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_GoblinAxeman_AttackPhase_C_ExecuteUbergraph_GA_GoblinAxeman_AttackPhase, CallFunc_WaitGameplayEvent_ReturnValue) == 0x0000C8, "Member 'GA_GoblinAxeman_AttackPhase_C_ExecuteUbergraph_GA_GoblinAxeman_AttackPhase::CallFunc_WaitGameplayEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_GoblinAxeman_AttackPhase_C_ExecuteUbergraph_GA_GoblinAxeman_AttackPhase, Temp_bool_Variable) == 0x0000D0, "Member 'GA_GoblinAxeman_AttackPhase_C_ExecuteUbergraph_GA_GoblinAxeman_AttackPhase::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GA_GoblinAxeman_AttackPhase_C_ExecuteUbergraph_GA_GoblinAxeman_AttackPhase, CallFunc_IsValid_ReturnValue) == 0x0000D1, "Member 'GA_GoblinAxeman_AttackPhase_C_ExecuteUbergraph_GA_GoblinAxeman_AttackPhase::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_GoblinAxeman_AttackPhase_C_ExecuteUbergraph_GA_GoblinAxeman_AttackPhase, K2Node_Event_TriggerEventData) == 0x0000D8, "Member 'GA_GoblinAxeman_AttackPhase_C_ExecuteUbergraph_GA_GoblinAxeman_AttackPhase::K2Node_Event_TriggerEventData' has a wrong offset!");
static_assert(offsetof(GA_GoblinAxeman_AttackPhase_C_ExecuteUbergraph_GA_GoblinAxeman_AttackPhase, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000188, "Member 'GA_GoblinAxeman_AttackPhase_C_ExecuteUbergraph_GA_GoblinAxeman_AttackPhase::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_GoblinAxeman_AttackPhase_C_ExecuteUbergraph_GA_GoblinAxeman_AttackPhase, CallFunc_Get_Enemies_In_Range_And_Angle_From_Actor_Result) == 0x000190, "Member 'GA_GoblinAxeman_AttackPhase_C_ExecuteUbergraph_GA_GoblinAxeman_AttackPhase::CallFunc_Get_Enemies_In_Range_And_Angle_From_Actor_Result' has a wrong offset!");
static_assert(offsetof(GA_GoblinAxeman_AttackPhase_C_ExecuteUbergraph_GA_GoblinAxeman_AttackPhase, CallFunc_Get_Enemies_In_Range_And_Angle_From_Actor_DCCharacterBase) == 0x000198, "Member 'GA_GoblinAxeman_AttackPhase_C_ExecuteUbergraph_GA_GoblinAxeman_AttackPhase::CallFunc_Get_Enemies_In_Range_And_Angle_From_Actor_DCCharacterBase' has a wrong offset!");
static_assert(offsetof(GA_GoblinAxeman_AttackPhase_C_ExecuteUbergraph_GA_GoblinAxeman_AttackPhase, K2Node_CustomEvent_Payload) == 0x0001A8, "Member 'GA_GoblinAxeman_AttackPhase_C_ExecuteUbergraph_GA_GoblinAxeman_AttackPhase::K2Node_CustomEvent_Payload' has a wrong offset!");
static_assert(offsetof(GA_GoblinAxeman_AttackPhase_C_ExecuteUbergraph_GA_GoblinAxeman_AttackPhase, CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1) == 0x000258, "Member 'GA_GoblinAxeman_AttackPhase_C_ExecuteUbergraph_GA_GoblinAxeman_AttackPhase::CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_GoblinAxeman_AttackPhase_C_ExecuteUbergraph_GA_GoblinAxeman_AttackPhase, K2Node_DynamicCast_As_________________) == 0x000260, "Member 'GA_GoblinAxeman_AttackPhase_C_ExecuteUbergraph_GA_GoblinAxeman_AttackPhase::K2Node_DynamicCast_As_________________' has a wrong offset!");
static_assert(offsetof(GA_GoblinAxeman_AttackPhase_C_ExecuteUbergraph_GA_GoblinAxeman_AttackPhase, K2Node_DynamicCast_bSuccess) == 0x000270, "Member 'GA_GoblinAxeman_AttackPhase_C_ExecuteUbergraph_GA_GoblinAxeman_AttackPhase::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_GoblinAxeman_AttackPhase_C_ExecuteUbergraph_GA_GoblinAxeman_AttackPhase, CallFunc_HasMatchingGameplayTag_ReturnValue) == 0x000271, "Member 'GA_GoblinAxeman_AttackPhase_C_ExecuteUbergraph_GA_GoblinAxeman_AttackPhase::CallFunc_HasMatchingGameplayTag_ReturnValue' has a wrong offset!");

}

