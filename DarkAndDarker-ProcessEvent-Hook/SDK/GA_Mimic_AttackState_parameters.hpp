#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Mimic_AttackState

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GA_Mimic_AttackState.GA_Mimic_AttackState_C.AbilityActivated
// 0x00B0 (0x00B0 - 0x0000)
struct GA_Mimic_AttackState_C_AbilityActivated final
{
public:
	struct FGameplayEventData                     TriggerEventData;                                  // 0x0000(0x00B0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GA_Mimic_AttackState_C_AbilityActivated) == 0x000008, "Wrong alignment on GA_Mimic_AttackState_C_AbilityActivated");
static_assert(sizeof(GA_Mimic_AttackState_C_AbilityActivated) == 0x0000B0, "Wrong size on GA_Mimic_AttackState_C_AbilityActivated");
static_assert(offsetof(GA_Mimic_AttackState_C_AbilityActivated, TriggerEventData) == 0x000000, "Member 'GA_Mimic_AttackState_C_AbilityActivated::TriggerEventData' has a wrong offset!");

// Function GA_Mimic_AttackState.GA_Mimic_AttackState_C.EventReceived_A41C06D64BC5222CED392AA8C7A52DD2
// 0x00B8 (0x00B8 - 0x0000)
struct GA_Mimic_AttackState_C_EventReceived_A41C06D64BC5222CED392AA8C7A52DD2 final
{
public:
	struct FGameplayTag                           EventTag;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     EventData;                                         // 0x0008(0x00B0)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GA_Mimic_AttackState_C_EventReceived_A41C06D64BC5222CED392AA8C7A52DD2) == 0x000008, "Wrong alignment on GA_Mimic_AttackState_C_EventReceived_A41C06D64BC5222CED392AA8C7A52DD2");
static_assert(sizeof(GA_Mimic_AttackState_C_EventReceived_A41C06D64BC5222CED392AA8C7A52DD2) == 0x0000B8, "Wrong size on GA_Mimic_AttackState_C_EventReceived_A41C06D64BC5222CED392AA8C7A52DD2");
static_assert(offsetof(GA_Mimic_AttackState_C_EventReceived_A41C06D64BC5222CED392AA8C7A52DD2, EventTag) == 0x000000, "Member 'GA_Mimic_AttackState_C_EventReceived_A41C06D64BC5222CED392AA8C7A52DD2::EventTag' has a wrong offset!");
static_assert(offsetof(GA_Mimic_AttackState_C_EventReceived_A41C06D64BC5222CED392AA8C7A52DD2, EventData) == 0x000008, "Member 'GA_Mimic_AttackState_C_EventReceived_A41C06D64BC5222CED392AA8C7A52DD2::EventData' has a wrong offset!");

// Function GA_Mimic_AttackState.GA_Mimic_AttackState_C.ExecuteUbergraph_GA_Mimic_AttackState
// 0x0440 (0x0440 - 0x0000)
struct GA_Mimic_AttackState_C_ExecuteUbergraph_GA_Mimic_AttackState final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51CB[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     Temp_struct_Variable;                              // 0x0008(0x00B0)()
	struct FGameplayTag                           Temp_struct_Variable_1;                            // 0x00B8(0x0008)(NoDestructor, HasGetValueTypeHash)
	class UDCAT_WaitForGameplayEvents*            CallFunc_WaitForGameplayEvents_ReturnValue;        // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51CC[0x3];                                     // 0x00C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           K2Node_CustomEvent_EventTag;                       // 0x00CC(0x0008)(NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51CD[0x4];                                     // 0x00D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_CustomEvent_EventData;                      // 0x00D8(0x00B0)()
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x0188(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_DCMonsterBaseWithOptions_C*         K2Node_DynamicCast_AsBP_DCMonster_Base_with_Options; // 0x0190(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51CE[0x3];                                     // 0x0199(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)> K2Node_CreateDelegate_OutputDelegate;              // 0x019C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51CF[0x4];                                     // 0x01AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_Mimic_Small_Base_C*                 K2Node_DynamicCast_AsBP_Mimic_Small_Base;          // 0x01B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51D0[0x7];                                     // 0x01B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_Mimic_Medium_Base_C*                K2Node_DynamicCast_AsBP_Mimic_Medium_Base;         // 0x01C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x01C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51D1[0x7];                                     // 0x01C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_Mimic_Large_Base_C*                 K2Node_DynamicCast_AsBP_Mimic_Large_Base;          // 0x01D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x01D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51D2[0x7];                                     // 0x01D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetCapsuleBottomLocation_ReturnValue;     // 0x01E0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     K2Node_Event_TriggerEventData;                     // 0x01F8(0x00B0)(ConstParm)
	struct FGameplayEventData                     K2Node_MakeStruct_GameplayEventData;               // 0x02A8(0x00B0)()
	struct FGameplayEventData                     K2Node_MakeStruct_GameplayEventData_1;             // 0x0358(0x00B0)()
	class ADCCharacterBase*                       K2Node_DynamicCast_AsDCCharacter_Base;             // 0x0408(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x0410(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51D3[0x7];                                     // 0x0411(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetCapsuleBottomLocation_ReturnValue_1;   // 0x0418(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Vector_Distance2D_ReturnValue;            // 0x0430(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x0438(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Mimic_AttackState_C_ExecuteUbergraph_GA_Mimic_AttackState) == 0x000008, "Wrong alignment on GA_Mimic_AttackState_C_ExecuteUbergraph_GA_Mimic_AttackState");
static_assert(sizeof(GA_Mimic_AttackState_C_ExecuteUbergraph_GA_Mimic_AttackState) == 0x000440, "Wrong size on GA_Mimic_AttackState_C_ExecuteUbergraph_GA_Mimic_AttackState");
static_assert(offsetof(GA_Mimic_AttackState_C_ExecuteUbergraph_GA_Mimic_AttackState, EntryPoint) == 0x000000, "Member 'GA_Mimic_AttackState_C_ExecuteUbergraph_GA_Mimic_AttackState::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Mimic_AttackState_C_ExecuteUbergraph_GA_Mimic_AttackState, Temp_struct_Variable) == 0x000008, "Member 'GA_Mimic_AttackState_C_ExecuteUbergraph_GA_Mimic_AttackState::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GA_Mimic_AttackState_C_ExecuteUbergraph_GA_Mimic_AttackState, Temp_struct_Variable_1) == 0x0000B8, "Member 'GA_Mimic_AttackState_C_ExecuteUbergraph_GA_Mimic_AttackState::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(GA_Mimic_AttackState_C_ExecuteUbergraph_GA_Mimic_AttackState, CallFunc_WaitForGameplayEvents_ReturnValue) == 0x0000C0, "Member 'GA_Mimic_AttackState_C_ExecuteUbergraph_GA_Mimic_AttackState::CallFunc_WaitForGameplayEvents_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Mimic_AttackState_C_ExecuteUbergraph_GA_Mimic_AttackState, CallFunc_IsValid_ReturnValue) == 0x0000C8, "Member 'GA_Mimic_AttackState_C_ExecuteUbergraph_GA_Mimic_AttackState::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Mimic_AttackState_C_ExecuteUbergraph_GA_Mimic_AttackState, K2Node_CustomEvent_EventTag) == 0x0000CC, "Member 'GA_Mimic_AttackState_C_ExecuteUbergraph_GA_Mimic_AttackState::K2Node_CustomEvent_EventTag' has a wrong offset!");
static_assert(offsetof(GA_Mimic_AttackState_C_ExecuteUbergraph_GA_Mimic_AttackState, K2Node_CustomEvent_EventData) == 0x0000D8, "Member 'GA_Mimic_AttackState_C_ExecuteUbergraph_GA_Mimic_AttackState::K2Node_CustomEvent_EventData' has a wrong offset!");
static_assert(offsetof(GA_Mimic_AttackState_C_ExecuteUbergraph_GA_Mimic_AttackState, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000188, "Member 'GA_Mimic_AttackState_C_ExecuteUbergraph_GA_Mimic_AttackState::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Mimic_AttackState_C_ExecuteUbergraph_GA_Mimic_AttackState, K2Node_DynamicCast_AsBP_DCMonster_Base_with_Options) == 0x000190, "Member 'GA_Mimic_AttackState_C_ExecuteUbergraph_GA_Mimic_AttackState::K2Node_DynamicCast_AsBP_DCMonster_Base_with_Options' has a wrong offset!");
static_assert(offsetof(GA_Mimic_AttackState_C_ExecuteUbergraph_GA_Mimic_AttackState, K2Node_DynamicCast_bSuccess) == 0x000198, "Member 'GA_Mimic_AttackState_C_ExecuteUbergraph_GA_Mimic_AttackState::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Mimic_AttackState_C_ExecuteUbergraph_GA_Mimic_AttackState, K2Node_CreateDelegate_OutputDelegate) == 0x00019C, "Member 'GA_Mimic_AttackState_C_ExecuteUbergraph_GA_Mimic_AttackState::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_Mimic_AttackState_C_ExecuteUbergraph_GA_Mimic_AttackState, K2Node_DynamicCast_AsBP_Mimic_Small_Base) == 0x0001B0, "Member 'GA_Mimic_AttackState_C_ExecuteUbergraph_GA_Mimic_AttackState::K2Node_DynamicCast_AsBP_Mimic_Small_Base' has a wrong offset!");
static_assert(offsetof(GA_Mimic_AttackState_C_ExecuteUbergraph_GA_Mimic_AttackState, K2Node_DynamicCast_bSuccess_1) == 0x0001B8, "Member 'GA_Mimic_AttackState_C_ExecuteUbergraph_GA_Mimic_AttackState::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GA_Mimic_AttackState_C_ExecuteUbergraph_GA_Mimic_AttackState, K2Node_DynamicCast_AsBP_Mimic_Medium_Base) == 0x0001C0, "Member 'GA_Mimic_AttackState_C_ExecuteUbergraph_GA_Mimic_AttackState::K2Node_DynamicCast_AsBP_Mimic_Medium_Base' has a wrong offset!");
static_assert(offsetof(GA_Mimic_AttackState_C_ExecuteUbergraph_GA_Mimic_AttackState, K2Node_DynamicCast_bSuccess_2) == 0x0001C8, "Member 'GA_Mimic_AttackState_C_ExecuteUbergraph_GA_Mimic_AttackState::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(GA_Mimic_AttackState_C_ExecuteUbergraph_GA_Mimic_AttackState, K2Node_DynamicCast_AsBP_Mimic_Large_Base) == 0x0001D0, "Member 'GA_Mimic_AttackState_C_ExecuteUbergraph_GA_Mimic_AttackState::K2Node_DynamicCast_AsBP_Mimic_Large_Base' has a wrong offset!");
static_assert(offsetof(GA_Mimic_AttackState_C_ExecuteUbergraph_GA_Mimic_AttackState, K2Node_DynamicCast_bSuccess_3) == 0x0001D8, "Member 'GA_Mimic_AttackState_C_ExecuteUbergraph_GA_Mimic_AttackState::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(GA_Mimic_AttackState_C_ExecuteUbergraph_GA_Mimic_AttackState, CallFunc_GetCapsuleBottomLocation_ReturnValue) == 0x0001E0, "Member 'GA_Mimic_AttackState_C_ExecuteUbergraph_GA_Mimic_AttackState::CallFunc_GetCapsuleBottomLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Mimic_AttackState_C_ExecuteUbergraph_GA_Mimic_AttackState, K2Node_Event_TriggerEventData) == 0x0001F8, "Member 'GA_Mimic_AttackState_C_ExecuteUbergraph_GA_Mimic_AttackState::K2Node_Event_TriggerEventData' has a wrong offset!");
static_assert(offsetof(GA_Mimic_AttackState_C_ExecuteUbergraph_GA_Mimic_AttackState, K2Node_MakeStruct_GameplayEventData) == 0x0002A8, "Member 'GA_Mimic_AttackState_C_ExecuteUbergraph_GA_Mimic_AttackState::K2Node_MakeStruct_GameplayEventData' has a wrong offset!");
static_assert(offsetof(GA_Mimic_AttackState_C_ExecuteUbergraph_GA_Mimic_AttackState, K2Node_MakeStruct_GameplayEventData_1) == 0x000358, "Member 'GA_Mimic_AttackState_C_ExecuteUbergraph_GA_Mimic_AttackState::K2Node_MakeStruct_GameplayEventData_1' has a wrong offset!");
static_assert(offsetof(GA_Mimic_AttackState_C_ExecuteUbergraph_GA_Mimic_AttackState, K2Node_DynamicCast_AsDCCharacter_Base) == 0x000408, "Member 'GA_Mimic_AttackState_C_ExecuteUbergraph_GA_Mimic_AttackState::K2Node_DynamicCast_AsDCCharacter_Base' has a wrong offset!");
static_assert(offsetof(GA_Mimic_AttackState_C_ExecuteUbergraph_GA_Mimic_AttackState, K2Node_DynamicCast_bSuccess_4) == 0x000410, "Member 'GA_Mimic_AttackState_C_ExecuteUbergraph_GA_Mimic_AttackState::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(GA_Mimic_AttackState_C_ExecuteUbergraph_GA_Mimic_AttackState, CallFunc_GetCapsuleBottomLocation_ReturnValue_1) == 0x000418, "Member 'GA_Mimic_AttackState_C_ExecuteUbergraph_GA_Mimic_AttackState::CallFunc_GetCapsuleBottomLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Mimic_AttackState_C_ExecuteUbergraph_GA_Mimic_AttackState, CallFunc_Vector_Distance2D_ReturnValue) == 0x000430, "Member 'GA_Mimic_AttackState_C_ExecuteUbergraph_GA_Mimic_AttackState::CallFunc_Vector_Distance2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Mimic_AttackState_C_ExecuteUbergraph_GA_Mimic_AttackState, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x000438, "Member 'GA_Mimic_AttackState_C_ExecuteUbergraph_GA_Mimic_AttackState::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");

}

