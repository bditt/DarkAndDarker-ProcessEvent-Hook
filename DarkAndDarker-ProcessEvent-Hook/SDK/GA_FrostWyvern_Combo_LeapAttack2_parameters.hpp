#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_FrostWyvern_Combo_LeapAttack2

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function GA_FrostWyvern_Combo_LeapAttack2.GA_FrostWyvern_Combo_LeapAttack2_C.AbilityActivated
// 0x00B0 (0x00B0 - 0x0000)
struct GA_FrostWyvern_Combo_LeapAttack2_C_AbilityActivated final
{
public:
	struct FGameplayEventData                     TriggerEventData;                                  // 0x0000(0x00B0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GA_FrostWyvern_Combo_LeapAttack2_C_AbilityActivated) == 0x000008, "Wrong alignment on GA_FrostWyvern_Combo_LeapAttack2_C_AbilityActivated");
static_assert(sizeof(GA_FrostWyvern_Combo_LeapAttack2_C_AbilityActivated) == 0x0000B0, "Wrong size on GA_FrostWyvern_Combo_LeapAttack2_C_AbilityActivated");
static_assert(offsetof(GA_FrostWyvern_Combo_LeapAttack2_C_AbilityActivated, TriggerEventData) == 0x000000, "Member 'GA_FrostWyvern_Combo_LeapAttack2_C_AbilityActivated::TriggerEventData' has a wrong offset!");

// Function GA_FrostWyvern_Combo_LeapAttack2.GA_FrostWyvern_Combo_LeapAttack2_C.EventReceived_90AFD6AF415D5584E6E7D29957C1C49D
// 0x00B8 (0x00B8 - 0x0000)
struct GA_FrostWyvern_Combo_LeapAttack2_C_EventReceived_90AFD6AF415D5584E6E7D29957C1C49D final
{
public:
	struct FGameplayTag                           EventTag;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     EventData;                                         // 0x0008(0x00B0)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GA_FrostWyvern_Combo_LeapAttack2_C_EventReceived_90AFD6AF415D5584E6E7D29957C1C49D) == 0x000008, "Wrong alignment on GA_FrostWyvern_Combo_LeapAttack2_C_EventReceived_90AFD6AF415D5584E6E7D29957C1C49D");
static_assert(sizeof(GA_FrostWyvern_Combo_LeapAttack2_C_EventReceived_90AFD6AF415D5584E6E7D29957C1C49D) == 0x0000B8, "Wrong size on GA_FrostWyvern_Combo_LeapAttack2_C_EventReceived_90AFD6AF415D5584E6E7D29957C1C49D");
static_assert(offsetof(GA_FrostWyvern_Combo_LeapAttack2_C_EventReceived_90AFD6AF415D5584E6E7D29957C1C49D, EventTag) == 0x000000, "Member 'GA_FrostWyvern_Combo_LeapAttack2_C_EventReceived_90AFD6AF415D5584E6E7D29957C1C49D::EventTag' has a wrong offset!");
static_assert(offsetof(GA_FrostWyvern_Combo_LeapAttack2_C_EventReceived_90AFD6AF415D5584E6E7D29957C1C49D, EventData) == 0x000008, "Member 'GA_FrostWyvern_Combo_LeapAttack2_C_EventReceived_90AFD6AF415D5584E6E7D29957C1C49D::EventData' has a wrong offset!");

// Function GA_FrostWyvern_Combo_LeapAttack2.GA_FrostWyvern_Combo_LeapAttack2_C.ExecuteUbergraph_GA_FrostWyvern_Combo_LeapAttack2
// 0x03B0 (0x03B0 - 0x0000)
struct GA_FrostWyvern_Combo_LeapAttack2_C_ExecuteUbergraph_GA_FrostWyvern_Combo_LeapAttack2 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           K2Node_CustomEvent_EventTag;                       // 0x0014(0x0008)(NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3914[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_CustomEvent_EventData;                      // 0x0020(0x00B0)()
	struct FGameplayEventData                     Temp_struct_Variable;                              // 0x00D0(0x00B0)()
	struct FGameplayTag                           Temp_struct_Variable_1;                            // 0x0180(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;   // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3915[0x7];                                     // 0x0189(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UDCAT_WaitForGameplayEvents*            CallFunc_WaitForGameplayEvents_ReturnValue;        // 0x0190(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3916[0x7];                                     // 0x0199(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_Event_TriggerEventData;                     // 0x01A0(0x00B0)(ConstParm)
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x0250(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_FrostWyvern_C*                      K2Node_DynamicCast_AsBP_Frost_Wyvern;              // 0x0258(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0260(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3917[0x3];                                     // 0x0261(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0264(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3918[0x4];                                     // 0x0274(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0x0278(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0280(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorForwardVector_ReturnValue;        // 0x0288(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Input_Power_Proportional_To_Spawn_Location_Result; // 0x02A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bWasCancelled;                        // 0x02A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3919[0x7];                                     // 0x02A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x02B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Get_Possible_to_Use_Next_Combo_ReturnValue; // 0x02B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_391A[0x3];                                     // 0x02B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           CallFunc_Get_Possible_to_Use_Next_Combo_Next_Combo_Trigger_Tag; // 0x02BC(0x0008)(NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_391B[0x4];                                     // 0x02C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ADCCharacterBase*>               CallFunc_Get_Possible_to_Use_Next_Combo_DCCharacterBase; // 0x02C8(0x0010)(ReferenceParm)
	class ADCCharacterBase*                       CallFunc_Array_Random_OutItem;                     // 0x02D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Random_OutIndex;                    // 0x02E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_391C[0x4];                                     // 0x02E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ADCCharacterBase*                       K2Node_DynamicCast_AsDCCharacter_Base;             // 0x02E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x02F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_391D[0x7];                                     // 0x02F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_MakeStruct_GameplayEventData;               // 0x02F8(0x00B0)()
	float                                         CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;    // 0x03A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_AddMovementInput_ScaleValue_ImplicitCast; // 0x03AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_FrostWyvern_Combo_LeapAttack2_C_ExecuteUbergraph_GA_FrostWyvern_Combo_LeapAttack2) == 0x000008, "Wrong alignment on GA_FrostWyvern_Combo_LeapAttack2_C_ExecuteUbergraph_GA_FrostWyvern_Combo_LeapAttack2");
static_assert(sizeof(GA_FrostWyvern_Combo_LeapAttack2_C_ExecuteUbergraph_GA_FrostWyvern_Combo_LeapAttack2) == 0x0003B0, "Wrong size on GA_FrostWyvern_Combo_LeapAttack2_C_ExecuteUbergraph_GA_FrostWyvern_Combo_LeapAttack2");
static_assert(offsetof(GA_FrostWyvern_Combo_LeapAttack2_C_ExecuteUbergraph_GA_FrostWyvern_Combo_LeapAttack2, EntryPoint) == 0x000000, "Member 'GA_FrostWyvern_Combo_LeapAttack2_C_ExecuteUbergraph_GA_FrostWyvern_Combo_LeapAttack2::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_FrostWyvern_Combo_LeapAttack2_C_ExecuteUbergraph_GA_FrostWyvern_Combo_LeapAttack2, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'GA_FrostWyvern_Combo_LeapAttack2_C_ExecuteUbergraph_GA_FrostWyvern_Combo_LeapAttack2::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_FrostWyvern_Combo_LeapAttack2_C_ExecuteUbergraph_GA_FrostWyvern_Combo_LeapAttack2, K2Node_CustomEvent_EventTag) == 0x000014, "Member 'GA_FrostWyvern_Combo_LeapAttack2_C_ExecuteUbergraph_GA_FrostWyvern_Combo_LeapAttack2::K2Node_CustomEvent_EventTag' has a wrong offset!");
static_assert(offsetof(GA_FrostWyvern_Combo_LeapAttack2_C_ExecuteUbergraph_GA_FrostWyvern_Combo_LeapAttack2, K2Node_CustomEvent_EventData) == 0x000020, "Member 'GA_FrostWyvern_Combo_LeapAttack2_C_ExecuteUbergraph_GA_FrostWyvern_Combo_LeapAttack2::K2Node_CustomEvent_EventData' has a wrong offset!");
static_assert(offsetof(GA_FrostWyvern_Combo_LeapAttack2_C_ExecuteUbergraph_GA_FrostWyvern_Combo_LeapAttack2, Temp_struct_Variable) == 0x0000D0, "Member 'GA_FrostWyvern_Combo_LeapAttack2_C_ExecuteUbergraph_GA_FrostWyvern_Combo_LeapAttack2::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GA_FrostWyvern_Combo_LeapAttack2_C_ExecuteUbergraph_GA_FrostWyvern_Combo_LeapAttack2, Temp_struct_Variable_1) == 0x000180, "Member 'GA_FrostWyvern_Combo_LeapAttack2_C_ExecuteUbergraph_GA_FrostWyvern_Combo_LeapAttack2::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(GA_FrostWyvern_Combo_LeapAttack2_C_ExecuteUbergraph_GA_FrostWyvern_Combo_LeapAttack2, GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess) == 0x000188, "Member 'GA_FrostWyvern_Combo_LeapAttack2_C_ExecuteUbergraph_GA_FrostWyvern_Combo_LeapAttack2::GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess' has a wrong offset!");
static_assert(offsetof(GA_FrostWyvern_Combo_LeapAttack2_C_ExecuteUbergraph_GA_FrostWyvern_Combo_LeapAttack2, CallFunc_WaitForGameplayEvents_ReturnValue) == 0x000190, "Member 'GA_FrostWyvern_Combo_LeapAttack2_C_ExecuteUbergraph_GA_FrostWyvern_Combo_LeapAttack2::CallFunc_WaitForGameplayEvents_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_FrostWyvern_Combo_LeapAttack2_C_ExecuteUbergraph_GA_FrostWyvern_Combo_LeapAttack2, CallFunc_IsValid_ReturnValue) == 0x000198, "Member 'GA_FrostWyvern_Combo_LeapAttack2_C_ExecuteUbergraph_GA_FrostWyvern_Combo_LeapAttack2::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_FrostWyvern_Combo_LeapAttack2_C_ExecuteUbergraph_GA_FrostWyvern_Combo_LeapAttack2, K2Node_Event_TriggerEventData) == 0x0001A0, "Member 'GA_FrostWyvern_Combo_LeapAttack2_C_ExecuteUbergraph_GA_FrostWyvern_Combo_LeapAttack2::K2Node_Event_TriggerEventData' has a wrong offset!");
static_assert(offsetof(GA_FrostWyvern_Combo_LeapAttack2_C_ExecuteUbergraph_GA_FrostWyvern_Combo_LeapAttack2, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000250, "Member 'GA_FrostWyvern_Combo_LeapAttack2_C_ExecuteUbergraph_GA_FrostWyvern_Combo_LeapAttack2::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_FrostWyvern_Combo_LeapAttack2_C_ExecuteUbergraph_GA_FrostWyvern_Combo_LeapAttack2, K2Node_DynamicCast_AsBP_Frost_Wyvern) == 0x000258, "Member 'GA_FrostWyvern_Combo_LeapAttack2_C_ExecuteUbergraph_GA_FrostWyvern_Combo_LeapAttack2::K2Node_DynamicCast_AsBP_Frost_Wyvern' has a wrong offset!");
static_assert(offsetof(GA_FrostWyvern_Combo_LeapAttack2_C_ExecuteUbergraph_GA_FrostWyvern_Combo_LeapAttack2, K2Node_DynamicCast_bSuccess) == 0x000260, "Member 'GA_FrostWyvern_Combo_LeapAttack2_C_ExecuteUbergraph_GA_FrostWyvern_Combo_LeapAttack2::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_FrostWyvern_Combo_LeapAttack2_C_ExecuteUbergraph_GA_FrostWyvern_Combo_LeapAttack2, K2Node_CreateDelegate_OutputDelegate_1) == 0x000264, "Member 'GA_FrostWyvern_Combo_LeapAttack2_C_ExecuteUbergraph_GA_FrostWyvern_Combo_LeapAttack2::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GA_FrostWyvern_Combo_LeapAttack2_C_ExecuteUbergraph_GA_FrostWyvern_Combo_LeapAttack2, CallFunc_GetWorldDeltaSeconds_ReturnValue) == 0x000278, "Member 'GA_FrostWyvern_Combo_LeapAttack2_C_ExecuteUbergraph_GA_FrostWyvern_Combo_LeapAttack2::CallFunc_GetWorldDeltaSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_FrostWyvern_Combo_LeapAttack2_C_ExecuteUbergraph_GA_FrostWyvern_Combo_LeapAttack2, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000280, "Member 'GA_FrostWyvern_Combo_LeapAttack2_C_ExecuteUbergraph_GA_FrostWyvern_Combo_LeapAttack2::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_FrostWyvern_Combo_LeapAttack2_C_ExecuteUbergraph_GA_FrostWyvern_Combo_LeapAttack2, CallFunc_GetActorForwardVector_ReturnValue) == 0x000288, "Member 'GA_FrostWyvern_Combo_LeapAttack2_C_ExecuteUbergraph_GA_FrostWyvern_Combo_LeapAttack2::CallFunc_GetActorForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_FrostWyvern_Combo_LeapAttack2_C_ExecuteUbergraph_GA_FrostWyvern_Combo_LeapAttack2, CallFunc_Input_Power_Proportional_To_Spawn_Location_Result) == 0x0002A0, "Member 'GA_FrostWyvern_Combo_LeapAttack2_C_ExecuteUbergraph_GA_FrostWyvern_Combo_LeapAttack2::CallFunc_Input_Power_Proportional_To_Spawn_Location_Result' has a wrong offset!");
static_assert(offsetof(GA_FrostWyvern_Combo_LeapAttack2_C_ExecuteUbergraph_GA_FrostWyvern_Combo_LeapAttack2, K2Node_Event_bWasCancelled) == 0x0002A8, "Member 'GA_FrostWyvern_Combo_LeapAttack2_C_ExecuteUbergraph_GA_FrostWyvern_Combo_LeapAttack2::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GA_FrostWyvern_Combo_LeapAttack2_C_ExecuteUbergraph_GA_FrostWyvern_Combo_LeapAttack2, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x0002B0, "Member 'GA_FrostWyvern_Combo_LeapAttack2_C_ExecuteUbergraph_GA_FrostWyvern_Combo_LeapAttack2::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_FrostWyvern_Combo_LeapAttack2_C_ExecuteUbergraph_GA_FrostWyvern_Combo_LeapAttack2, CallFunc_Get_Possible_to_Use_Next_Combo_ReturnValue) == 0x0002B8, "Member 'GA_FrostWyvern_Combo_LeapAttack2_C_ExecuteUbergraph_GA_FrostWyvern_Combo_LeapAttack2::CallFunc_Get_Possible_to_Use_Next_Combo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_FrostWyvern_Combo_LeapAttack2_C_ExecuteUbergraph_GA_FrostWyvern_Combo_LeapAttack2, CallFunc_Get_Possible_to_Use_Next_Combo_Next_Combo_Trigger_Tag) == 0x0002BC, "Member 'GA_FrostWyvern_Combo_LeapAttack2_C_ExecuteUbergraph_GA_FrostWyvern_Combo_LeapAttack2::CallFunc_Get_Possible_to_Use_Next_Combo_Next_Combo_Trigger_Tag' has a wrong offset!");
static_assert(offsetof(GA_FrostWyvern_Combo_LeapAttack2_C_ExecuteUbergraph_GA_FrostWyvern_Combo_LeapAttack2, CallFunc_Get_Possible_to_Use_Next_Combo_DCCharacterBase) == 0x0002C8, "Member 'GA_FrostWyvern_Combo_LeapAttack2_C_ExecuteUbergraph_GA_FrostWyvern_Combo_LeapAttack2::CallFunc_Get_Possible_to_Use_Next_Combo_DCCharacterBase' has a wrong offset!");
static_assert(offsetof(GA_FrostWyvern_Combo_LeapAttack2_C_ExecuteUbergraph_GA_FrostWyvern_Combo_LeapAttack2, CallFunc_Array_Random_OutItem) == 0x0002D8, "Member 'GA_FrostWyvern_Combo_LeapAttack2_C_ExecuteUbergraph_GA_FrostWyvern_Combo_LeapAttack2::CallFunc_Array_Random_OutItem' has a wrong offset!");
static_assert(offsetof(GA_FrostWyvern_Combo_LeapAttack2_C_ExecuteUbergraph_GA_FrostWyvern_Combo_LeapAttack2, CallFunc_Array_Random_OutIndex) == 0x0002E0, "Member 'GA_FrostWyvern_Combo_LeapAttack2_C_ExecuteUbergraph_GA_FrostWyvern_Combo_LeapAttack2::CallFunc_Array_Random_OutIndex' has a wrong offset!");
static_assert(offsetof(GA_FrostWyvern_Combo_LeapAttack2_C_ExecuteUbergraph_GA_FrostWyvern_Combo_LeapAttack2, K2Node_DynamicCast_AsDCCharacter_Base) == 0x0002E8, "Member 'GA_FrostWyvern_Combo_LeapAttack2_C_ExecuteUbergraph_GA_FrostWyvern_Combo_LeapAttack2::K2Node_DynamicCast_AsDCCharacter_Base' has a wrong offset!");
static_assert(offsetof(GA_FrostWyvern_Combo_LeapAttack2_C_ExecuteUbergraph_GA_FrostWyvern_Combo_LeapAttack2, K2Node_DynamicCast_bSuccess_1) == 0x0002F0, "Member 'GA_FrostWyvern_Combo_LeapAttack2_C_ExecuteUbergraph_GA_FrostWyvern_Combo_LeapAttack2::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GA_FrostWyvern_Combo_LeapAttack2_C_ExecuteUbergraph_GA_FrostWyvern_Combo_LeapAttack2, K2Node_MakeStruct_GameplayEventData) == 0x0002F8, "Member 'GA_FrostWyvern_Combo_LeapAttack2_C_ExecuteUbergraph_GA_FrostWyvern_Combo_LeapAttack2::K2Node_MakeStruct_GameplayEventData' has a wrong offset!");
static_assert(offsetof(GA_FrostWyvern_Combo_LeapAttack2_C_ExecuteUbergraph_GA_FrostWyvern_Combo_LeapAttack2, CallFunc_K2_SetTimerDelegate_Time_ImplicitCast) == 0x0003A8, "Member 'GA_FrostWyvern_Combo_LeapAttack2_C_ExecuteUbergraph_GA_FrostWyvern_Combo_LeapAttack2::CallFunc_K2_SetTimerDelegate_Time_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GA_FrostWyvern_Combo_LeapAttack2_C_ExecuteUbergraph_GA_FrostWyvern_Combo_LeapAttack2, CallFunc_AddMovementInput_ScaleValue_ImplicitCast) == 0x0003AC, "Member 'GA_FrostWyvern_Combo_LeapAttack2_C_ExecuteUbergraph_GA_FrostWyvern_Combo_LeapAttack2::CallFunc_AddMovementInput_ScaleValue_ImplicitCast' has a wrong offset!");

// Function GA_FrostWyvern_Combo_LeapAttack2.GA_FrostWyvern_Combo_LeapAttack2_C.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct GA_FrostWyvern_Combo_LeapAttack2_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_FrostWyvern_Combo_LeapAttack2_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GA_FrostWyvern_Combo_LeapAttack2_C_K2_OnEndAbility");
static_assert(sizeof(GA_FrostWyvern_Combo_LeapAttack2_C_K2_OnEndAbility) == 0x000001, "Wrong size on GA_FrostWyvern_Combo_LeapAttack2_C_K2_OnEndAbility");
static_assert(offsetof(GA_FrostWyvern_Combo_LeapAttack2_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GA_FrostWyvern_Combo_LeapAttack2_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

}

