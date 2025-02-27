#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_ShapeShiftBloodPact

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GA_ShapeShiftBloodPact.GA_ShapeShiftBloodPact_C.AbilityActivated
// 0x00B0 (0x00B0 - 0x0000)
struct GA_ShapeShiftBloodPact_C_AbilityActivated final
{
public:
	struct FGameplayEventData                     TriggerEventData;                                  // 0x0000(0x00B0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GA_ShapeShiftBloodPact_C_AbilityActivated) == 0x000008, "Wrong alignment on GA_ShapeShiftBloodPact_C_AbilityActivated");
static_assert(sizeof(GA_ShapeShiftBloodPact_C_AbilityActivated) == 0x0000B0, "Wrong size on GA_ShapeShiftBloodPact_C_AbilityActivated");
static_assert(offsetof(GA_ShapeShiftBloodPact_C_AbilityActivated, TriggerEventData) == 0x000000, "Member 'GA_ShapeShiftBloodPact_C_AbilityActivated::TriggerEventData' has a wrong offset!");

// Function GA_ShapeShiftBloodPact.GA_ShapeShiftBloodPact_C.ExecuteUbergraph_GA_ShapeShiftBloodPact
// 0x01C8 (0x01C8 - 0x0000)
struct GA_ShapeShiftBloodPact_C_ExecuteUbergraph_GA_ShapeShiftBloodPact final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5689[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     Temp_struct_Variable;                              // 0x0008(0x00B0)(ConstParm)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_568A[0x4];                                     // 0x00C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_Event_TriggerEventData;                     // 0x00C8(0x00B0)(ConstParm)
	bool                                          CallFunc_K2_HasAuthority_ReturnValue;              // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_568B[0x7];                                     // 0x0179(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue; // 0x0180(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bWasCancelled;                        // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_568C[0x7];                                     // 0x0189(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FActiveGameplayEffectHandle>    CallFunc_GetActiveEffects_ReturnValue;             // 0x0190(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x01A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            CallFunc_Array_Get_Item;                           // 0x01A4(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x01AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_568D[0x3];                                     // 0x01AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetActiveGameplayEffectStackCount_ReturnValue; // 0x01B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_568E[0x4];                                     // 0x01B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FActiveGameplayEffectHandle>    CallFunc_ApplyEffectContainer_ReturnValue;         // 0x01B8(0x0010)(ReferenceParm)
};
static_assert(alignof(GA_ShapeShiftBloodPact_C_ExecuteUbergraph_GA_ShapeShiftBloodPact) == 0x000008, "Wrong alignment on GA_ShapeShiftBloodPact_C_ExecuteUbergraph_GA_ShapeShiftBloodPact");
static_assert(sizeof(GA_ShapeShiftBloodPact_C_ExecuteUbergraph_GA_ShapeShiftBloodPact) == 0x0001C8, "Wrong size on GA_ShapeShiftBloodPact_C_ExecuteUbergraph_GA_ShapeShiftBloodPact");
static_assert(offsetof(GA_ShapeShiftBloodPact_C_ExecuteUbergraph_GA_ShapeShiftBloodPact, EntryPoint) == 0x000000, "Member 'GA_ShapeShiftBloodPact_C_ExecuteUbergraph_GA_ShapeShiftBloodPact::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_ShapeShiftBloodPact_C_ExecuteUbergraph_GA_ShapeShiftBloodPact, Temp_struct_Variable) == 0x000008, "Member 'GA_ShapeShiftBloodPact_C_ExecuteUbergraph_GA_ShapeShiftBloodPact::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GA_ShapeShiftBloodPact_C_ExecuteUbergraph_GA_ShapeShiftBloodPact, Temp_int_Array_Index_Variable) == 0x0000B8, "Member 'GA_ShapeShiftBloodPact_C_ExecuteUbergraph_GA_ShapeShiftBloodPact::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(GA_ShapeShiftBloodPact_C_ExecuteUbergraph_GA_ShapeShiftBloodPact, Temp_int_Loop_Counter_Variable) == 0x0000BC, "Member 'GA_ShapeShiftBloodPact_C_ExecuteUbergraph_GA_ShapeShiftBloodPact::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(GA_ShapeShiftBloodPact_C_ExecuteUbergraph_GA_ShapeShiftBloodPact, CallFunc_Add_IntInt_ReturnValue) == 0x0000C0, "Member 'GA_ShapeShiftBloodPact_C_ExecuteUbergraph_GA_ShapeShiftBloodPact::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_ShapeShiftBloodPact_C_ExecuteUbergraph_GA_ShapeShiftBloodPact, K2Node_Event_TriggerEventData) == 0x0000C8, "Member 'GA_ShapeShiftBloodPact_C_ExecuteUbergraph_GA_ShapeShiftBloodPact::K2Node_Event_TriggerEventData' has a wrong offset!");
static_assert(offsetof(GA_ShapeShiftBloodPact_C_ExecuteUbergraph_GA_ShapeShiftBloodPact, CallFunc_K2_HasAuthority_ReturnValue) == 0x000178, "Member 'GA_ShapeShiftBloodPact_C_ExecuteUbergraph_GA_ShapeShiftBloodPact::CallFunc_K2_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_ShapeShiftBloodPact_C_ExecuteUbergraph_GA_ShapeShiftBloodPact, CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue) == 0x000180, "Member 'GA_ShapeShiftBloodPact_C_ExecuteUbergraph_GA_ShapeShiftBloodPact::CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_ShapeShiftBloodPact_C_ExecuteUbergraph_GA_ShapeShiftBloodPact, K2Node_Event_bWasCancelled) == 0x000188, "Member 'GA_ShapeShiftBloodPact_C_ExecuteUbergraph_GA_ShapeShiftBloodPact::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GA_ShapeShiftBloodPact_C_ExecuteUbergraph_GA_ShapeShiftBloodPact, CallFunc_GetActiveEffects_ReturnValue) == 0x000190, "Member 'GA_ShapeShiftBloodPact_C_ExecuteUbergraph_GA_ShapeShiftBloodPact::CallFunc_GetActiveEffects_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_ShapeShiftBloodPact_C_ExecuteUbergraph_GA_ShapeShiftBloodPact, CallFunc_Array_Length_ReturnValue) == 0x0001A0, "Member 'GA_ShapeShiftBloodPact_C_ExecuteUbergraph_GA_ShapeShiftBloodPact::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_ShapeShiftBloodPact_C_ExecuteUbergraph_GA_ShapeShiftBloodPact, CallFunc_Array_Get_Item) == 0x0001A4, "Member 'GA_ShapeShiftBloodPact_C_ExecuteUbergraph_GA_ShapeShiftBloodPact::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GA_ShapeShiftBloodPact_C_ExecuteUbergraph_GA_ShapeShiftBloodPact, CallFunc_Less_IntInt_ReturnValue) == 0x0001AC, "Member 'GA_ShapeShiftBloodPact_C_ExecuteUbergraph_GA_ShapeShiftBloodPact::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_ShapeShiftBloodPact_C_ExecuteUbergraph_GA_ShapeShiftBloodPact, CallFunc_GetActiveGameplayEffectStackCount_ReturnValue) == 0x0001B0, "Member 'GA_ShapeShiftBloodPact_C_ExecuteUbergraph_GA_ShapeShiftBloodPact::CallFunc_GetActiveGameplayEffectStackCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_ShapeShiftBloodPact_C_ExecuteUbergraph_GA_ShapeShiftBloodPact, CallFunc_ApplyEffectContainer_ReturnValue) == 0x0001B8, "Member 'GA_ShapeShiftBloodPact_C_ExecuteUbergraph_GA_ShapeShiftBloodPact::CallFunc_ApplyEffectContainer_ReturnValue' has a wrong offset!");

// Function GA_ShapeShiftBloodPact.GA_ShapeShiftBloodPact_C.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct GA_ShapeShiftBloodPact_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_ShapeShiftBloodPact_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GA_ShapeShiftBloodPact_C_K2_OnEndAbility");
static_assert(sizeof(GA_ShapeShiftBloodPact_C_K2_OnEndAbility) == 0x000001, "Wrong size on GA_ShapeShiftBloodPact_C_K2_OnEndAbility");
static_assert(offsetof(GA_ShapeShiftBloodPact_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GA_ShapeShiftBloodPact_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

}

