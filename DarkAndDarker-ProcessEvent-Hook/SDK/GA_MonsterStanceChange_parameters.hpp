#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_MonsterStanceChange

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "E_Detachable_structs.hpp"


namespace SDK::Params
{

// Function GA_MonsterStanceChange.GA_MonsterStanceChange_C.AbilityActivated
// 0x00B0 (0x00B0 - 0x0000)
struct GA_MonsterStanceChange_C_AbilityActivated final
{
public:
	struct FGameplayEventData                     TriggerEventData;                                  // 0x0000(0x00B0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GA_MonsterStanceChange_C_AbilityActivated) == 0x000008, "Wrong alignment on GA_MonsterStanceChange_C_AbilityActivated");
static_assert(sizeof(GA_MonsterStanceChange_C_AbilityActivated) == 0x0000B0, "Wrong size on GA_MonsterStanceChange_C_AbilityActivated");
static_assert(offsetof(GA_MonsterStanceChange_C_AbilityActivated, TriggerEventData) == 0x000000, "Member 'GA_MonsterStanceChange_C_AbilityActivated::TriggerEventData' has a wrong offset!");

// Function GA_MonsterStanceChange.GA_MonsterStanceChange_C.ExecuteUbergraph_GA_MonsterStanceChange
// 0x0120 (0x0120 - 0x0000)
struct GA_MonsterStanceChange_C_ExecuteUbergraph_GA_MonsterStanceChange final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           CallFunc_Array_Get_Item;                           // 0x000C(0x0008)(NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_Detachable                                  CallFunc_Array_Get_Item_1;                         // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4DDF[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  CallFunc_Array_Get_Item_2;                         // 0x0020(0x0020)()
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4DE0[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     K2Node_Event_TriggerEventData;                     // 0x0048(0x00B0)(ConstParm)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4DE1[0x7];                                     // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x0100(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_AddGameplayTag_ReturnValue;               // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4DE2[0x7];                                     // 0x0109(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0x0110(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue; // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_MonsterStanceChange_C_ExecuteUbergraph_GA_MonsterStanceChange) == 0x000008, "Wrong alignment on GA_MonsterStanceChange_C_ExecuteUbergraph_GA_MonsterStanceChange");
static_assert(sizeof(GA_MonsterStanceChange_C_ExecuteUbergraph_GA_MonsterStanceChange) == 0x000120, "Wrong size on GA_MonsterStanceChange_C_ExecuteUbergraph_GA_MonsterStanceChange");
static_assert(offsetof(GA_MonsterStanceChange_C_ExecuteUbergraph_GA_MonsterStanceChange, EntryPoint) == 0x000000, "Member 'GA_MonsterStanceChange_C_ExecuteUbergraph_GA_MonsterStanceChange::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_MonsterStanceChange_C_ExecuteUbergraph_GA_MonsterStanceChange, Temp_int_Array_Index_Variable) == 0x000004, "Member 'GA_MonsterStanceChange_C_ExecuteUbergraph_GA_MonsterStanceChange::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(GA_MonsterStanceChange_C_ExecuteUbergraph_GA_MonsterStanceChange, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'GA_MonsterStanceChange_C_ExecuteUbergraph_GA_MonsterStanceChange::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(GA_MonsterStanceChange_C_ExecuteUbergraph_GA_MonsterStanceChange, CallFunc_Array_Get_Item) == 0x00000C, "Member 'GA_MonsterStanceChange_C_ExecuteUbergraph_GA_MonsterStanceChange::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GA_MonsterStanceChange_C_ExecuteUbergraph_GA_MonsterStanceChange, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'GA_MonsterStanceChange_C_ExecuteUbergraph_GA_MonsterStanceChange::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_MonsterStanceChange_C_ExecuteUbergraph_GA_MonsterStanceChange, CallFunc_Array_Get_Item_1) == 0x000018, "Member 'GA_MonsterStanceChange_C_ExecuteUbergraph_GA_MonsterStanceChange::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(GA_MonsterStanceChange_C_ExecuteUbergraph_GA_MonsterStanceChange, CallFunc_Array_Get_Item_2) == 0x000020, "Member 'GA_MonsterStanceChange_C_ExecuteUbergraph_GA_MonsterStanceChange::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(GA_MonsterStanceChange_C_ExecuteUbergraph_GA_MonsterStanceChange, K2Node_SwitchEnum_CmpSuccess) == 0x000040, "Member 'GA_MonsterStanceChange_C_ExecuteUbergraph_GA_MonsterStanceChange::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(GA_MonsterStanceChange_C_ExecuteUbergraph_GA_MonsterStanceChange, CallFunc_Array_Length_ReturnValue) == 0x000044, "Member 'GA_MonsterStanceChange_C_ExecuteUbergraph_GA_MonsterStanceChange::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_MonsterStanceChange_C_ExecuteUbergraph_GA_MonsterStanceChange, K2Node_Event_TriggerEventData) == 0x000048, "Member 'GA_MonsterStanceChange_C_ExecuteUbergraph_GA_MonsterStanceChange::K2Node_Event_TriggerEventData' has a wrong offset!");
static_assert(offsetof(GA_MonsterStanceChange_C_ExecuteUbergraph_GA_MonsterStanceChange, CallFunc_Less_IntInt_ReturnValue) == 0x0000F8, "Member 'GA_MonsterStanceChange_C_ExecuteUbergraph_GA_MonsterStanceChange::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_MonsterStanceChange_C_ExecuteUbergraph_GA_MonsterStanceChange, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000100, "Member 'GA_MonsterStanceChange_C_ExecuteUbergraph_GA_MonsterStanceChange::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_MonsterStanceChange_C_ExecuteUbergraph_GA_MonsterStanceChange, CallFunc_AddGameplayTag_ReturnValue) == 0x000108, "Member 'GA_MonsterStanceChange_C_ExecuteUbergraph_GA_MonsterStanceChange::CallFunc_AddGameplayTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_MonsterStanceChange_C_ExecuteUbergraph_GA_MonsterStanceChange, CallFunc_GetAbilitySystemComponent_ReturnValue) == 0x000110, "Member 'GA_MonsterStanceChange_C_ExecuteUbergraph_GA_MonsterStanceChange::CallFunc_GetAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_MonsterStanceChange_C_ExecuteUbergraph_GA_MonsterStanceChange, CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue) == 0x000118, "Member 'GA_MonsterStanceChange_C_ExecuteUbergraph_GA_MonsterStanceChange::CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue' has a wrong offset!");

}

