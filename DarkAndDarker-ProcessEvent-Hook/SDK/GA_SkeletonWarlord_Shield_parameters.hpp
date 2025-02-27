#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_SkeletonWarlord_Shield

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GA_SkeletonWarlord_Shield.GA_SkeletonWarlord_Shield_C.AbilityActivated
// 0x00B0 (0x00B0 - 0x0000)
struct GA_SkeletonWarlord_Shield_C_AbilityActivated final
{
public:
	struct FGameplayEventData                     TriggerEventData;                                  // 0x0000(0x00B0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GA_SkeletonWarlord_Shield_C_AbilityActivated) == 0x000008, "Wrong alignment on GA_SkeletonWarlord_Shield_C_AbilityActivated");
static_assert(sizeof(GA_SkeletonWarlord_Shield_C_AbilityActivated) == 0x0000B0, "Wrong size on GA_SkeletonWarlord_Shield_C_AbilityActivated");
static_assert(offsetof(GA_SkeletonWarlord_Shield_C_AbilityActivated, TriggerEventData) == 0x000000, "Member 'GA_SkeletonWarlord_Shield_C_AbilityActivated::TriggerEventData' has a wrong offset!");

// Function GA_SkeletonWarlord_Shield.GA_SkeletonWarlord_Shield_C.EventReceived_D0F3E8C442BCE9CD937A26A35A4808DA
// 0x00B0 (0x00B0 - 0x0000)
struct GA_SkeletonWarlord_Shield_C_EventReceived_D0F3E8C442BCE9CD937A26A35A4808DA final
{
public:
	struct FGameplayEventData                     Payload;                                           // 0x0000(0x00B0)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GA_SkeletonWarlord_Shield_C_EventReceived_D0F3E8C442BCE9CD937A26A35A4808DA) == 0x000008, "Wrong alignment on GA_SkeletonWarlord_Shield_C_EventReceived_D0F3E8C442BCE9CD937A26A35A4808DA");
static_assert(sizeof(GA_SkeletonWarlord_Shield_C_EventReceived_D0F3E8C442BCE9CD937A26A35A4808DA) == 0x0000B0, "Wrong size on GA_SkeletonWarlord_Shield_C_EventReceived_D0F3E8C442BCE9CD937A26A35A4808DA");
static_assert(offsetof(GA_SkeletonWarlord_Shield_C_EventReceived_D0F3E8C442BCE9CD937A26A35A4808DA, Payload) == 0x000000, "Member 'GA_SkeletonWarlord_Shield_C_EventReceived_D0F3E8C442BCE9CD937A26A35A4808DA::Payload' has a wrong offset!");

// Function GA_SkeletonWarlord_Shield.GA_SkeletonWarlord_Shield_C.ExecuteUbergraph_GA_SkeletonWarlord_Shield
// 0x0420 (0x0420 - 0x0000)
struct GA_SkeletonWarlord_Shield_C_ExecuteUbergraph_GA_SkeletonWarlord_Shield final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FGameplayEventData& Payload)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_533B[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_CustomEvent_Payload;                        // 0x0020(0x00B0)()
	int32                                         CallFunc_Max_ReturnValue;                          // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_533C[0x4];                                     // 0x00D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     Temp_struct_Variable;                              // 0x00D8(0x00B0)()
	class UAbilityTask_WaitGameplayEvent*         CallFunc_WaitGameplayEvent_ReturnValue;            // 0x0188(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_533D[0x3];                                     // 0x0191(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0194(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x0198(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x019C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_533E[0x3];                                     // 0x019D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x01A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            CallFunc_Array_Get_Item;                           // 0x01A4(0x0008)(NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_533F[0x4];                                     // 0x01AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_Event_TriggerEventData;                     // 0x01B0(0x00B0)(ConstParm)
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x0260(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bWasCancelled;                        // 0x0268(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5340[0x7];                                     // 0x0269(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_SkeletonWarlord_C*                  K2Node_DynamicCast_AsBP_Skeleton_Warlord;          // 0x0270(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0278(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5341[0x7];                                     // 0x0279(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1; // 0x0280(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 CallFunc_MakeGameplayCueParameters_ReturnValue;    // 0x0288(0x00D8)(ContainsInstancedReference)
	struct FGameplayEventData                     K2Node_MakeStruct_GameplayEventData;               // 0x0360(0x00B0)()
	TArray<struct FActiveGameplayEffectHandle>    CallFunc_ApplyEffectContainer_ReturnValue;         // 0x0410(0x0010)(ReferenceParm)
};
static_assert(alignof(GA_SkeletonWarlord_Shield_C_ExecuteUbergraph_GA_SkeletonWarlord_Shield) == 0x000008, "Wrong alignment on GA_SkeletonWarlord_Shield_C_ExecuteUbergraph_GA_SkeletonWarlord_Shield");
static_assert(sizeof(GA_SkeletonWarlord_Shield_C_ExecuteUbergraph_GA_SkeletonWarlord_Shield) == 0x000420, "Wrong size on GA_SkeletonWarlord_Shield_C_ExecuteUbergraph_GA_SkeletonWarlord_Shield");
static_assert(offsetof(GA_SkeletonWarlord_Shield_C_ExecuteUbergraph_GA_SkeletonWarlord_Shield, EntryPoint) == 0x000000, "Member 'GA_SkeletonWarlord_Shield_C_ExecuteUbergraph_GA_SkeletonWarlord_Shield::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_SkeletonWarlord_Shield_C_ExecuteUbergraph_GA_SkeletonWarlord_Shield, CallFunc_Array_Length_ReturnValue) == 0x000004, "Member 'GA_SkeletonWarlord_Shield_C_ExecuteUbergraph_GA_SkeletonWarlord_Shield::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SkeletonWarlord_Shield_C_ExecuteUbergraph_GA_SkeletonWarlord_Shield, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'GA_SkeletonWarlord_Shield_C_ExecuteUbergraph_GA_SkeletonWarlord_Shield::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_SkeletonWarlord_Shield_C_ExecuteUbergraph_GA_SkeletonWarlord_Shield, CallFunc_Subtract_IntInt_ReturnValue) == 0x000018, "Member 'GA_SkeletonWarlord_Shield_C_ExecuteUbergraph_GA_SkeletonWarlord_Shield::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SkeletonWarlord_Shield_C_ExecuteUbergraph_GA_SkeletonWarlord_Shield, K2Node_CustomEvent_Payload) == 0x000020, "Member 'GA_SkeletonWarlord_Shield_C_ExecuteUbergraph_GA_SkeletonWarlord_Shield::K2Node_CustomEvent_Payload' has a wrong offset!");
static_assert(offsetof(GA_SkeletonWarlord_Shield_C_ExecuteUbergraph_GA_SkeletonWarlord_Shield, CallFunc_Max_ReturnValue) == 0x0000D0, "Member 'GA_SkeletonWarlord_Shield_C_ExecuteUbergraph_GA_SkeletonWarlord_Shield::CallFunc_Max_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SkeletonWarlord_Shield_C_ExecuteUbergraph_GA_SkeletonWarlord_Shield, Temp_struct_Variable) == 0x0000D8, "Member 'GA_SkeletonWarlord_Shield_C_ExecuteUbergraph_GA_SkeletonWarlord_Shield::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GA_SkeletonWarlord_Shield_C_ExecuteUbergraph_GA_SkeletonWarlord_Shield, CallFunc_WaitGameplayEvent_ReturnValue) == 0x000188, "Member 'GA_SkeletonWarlord_Shield_C_ExecuteUbergraph_GA_SkeletonWarlord_Shield::CallFunc_WaitGameplayEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SkeletonWarlord_Shield_C_ExecuteUbergraph_GA_SkeletonWarlord_Shield, CallFunc_IsValid_ReturnValue) == 0x000190, "Member 'GA_SkeletonWarlord_Shield_C_ExecuteUbergraph_GA_SkeletonWarlord_Shield::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SkeletonWarlord_Shield_C_ExecuteUbergraph_GA_SkeletonWarlord_Shield, Temp_int_Loop_Counter_Variable) == 0x000194, "Member 'GA_SkeletonWarlord_Shield_C_ExecuteUbergraph_GA_SkeletonWarlord_Shield::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(GA_SkeletonWarlord_Shield_C_ExecuteUbergraph_GA_SkeletonWarlord_Shield, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x000198, "Member 'GA_SkeletonWarlord_Shield_C_ExecuteUbergraph_GA_SkeletonWarlord_Shield::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_SkeletonWarlord_Shield_C_ExecuteUbergraph_GA_SkeletonWarlord_Shield, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x00019C, "Member 'GA_SkeletonWarlord_Shield_C_ExecuteUbergraph_GA_SkeletonWarlord_Shield::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SkeletonWarlord_Shield_C_ExecuteUbergraph_GA_SkeletonWarlord_Shield, Temp_int_Array_Index_Variable) == 0x0001A0, "Member 'GA_SkeletonWarlord_Shield_C_ExecuteUbergraph_GA_SkeletonWarlord_Shield::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(GA_SkeletonWarlord_Shield_C_ExecuteUbergraph_GA_SkeletonWarlord_Shield, CallFunc_Array_Get_Item) == 0x0001A4, "Member 'GA_SkeletonWarlord_Shield_C_ExecuteUbergraph_GA_SkeletonWarlord_Shield::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GA_SkeletonWarlord_Shield_C_ExecuteUbergraph_GA_SkeletonWarlord_Shield, K2Node_Event_TriggerEventData) == 0x0001B0, "Member 'GA_SkeletonWarlord_Shield_C_ExecuteUbergraph_GA_SkeletonWarlord_Shield::K2Node_Event_TriggerEventData' has a wrong offset!");
static_assert(offsetof(GA_SkeletonWarlord_Shield_C_ExecuteUbergraph_GA_SkeletonWarlord_Shield, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000260, "Member 'GA_SkeletonWarlord_Shield_C_ExecuteUbergraph_GA_SkeletonWarlord_Shield::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SkeletonWarlord_Shield_C_ExecuteUbergraph_GA_SkeletonWarlord_Shield, K2Node_Event_bWasCancelled) == 0x000268, "Member 'GA_SkeletonWarlord_Shield_C_ExecuteUbergraph_GA_SkeletonWarlord_Shield::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GA_SkeletonWarlord_Shield_C_ExecuteUbergraph_GA_SkeletonWarlord_Shield, K2Node_DynamicCast_AsBP_Skeleton_Warlord) == 0x000270, "Member 'GA_SkeletonWarlord_Shield_C_ExecuteUbergraph_GA_SkeletonWarlord_Shield::K2Node_DynamicCast_AsBP_Skeleton_Warlord' has a wrong offset!");
static_assert(offsetof(GA_SkeletonWarlord_Shield_C_ExecuteUbergraph_GA_SkeletonWarlord_Shield, K2Node_DynamicCast_bSuccess) == 0x000278, "Member 'GA_SkeletonWarlord_Shield_C_ExecuteUbergraph_GA_SkeletonWarlord_Shield::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_SkeletonWarlord_Shield_C_ExecuteUbergraph_GA_SkeletonWarlord_Shield, CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1) == 0x000280, "Member 'GA_SkeletonWarlord_Shield_C_ExecuteUbergraph_GA_SkeletonWarlord_Shield::CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_SkeletonWarlord_Shield_C_ExecuteUbergraph_GA_SkeletonWarlord_Shield, CallFunc_MakeGameplayCueParameters_ReturnValue) == 0x000288, "Member 'GA_SkeletonWarlord_Shield_C_ExecuteUbergraph_GA_SkeletonWarlord_Shield::CallFunc_MakeGameplayCueParameters_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SkeletonWarlord_Shield_C_ExecuteUbergraph_GA_SkeletonWarlord_Shield, K2Node_MakeStruct_GameplayEventData) == 0x000360, "Member 'GA_SkeletonWarlord_Shield_C_ExecuteUbergraph_GA_SkeletonWarlord_Shield::K2Node_MakeStruct_GameplayEventData' has a wrong offset!");
static_assert(offsetof(GA_SkeletonWarlord_Shield_C_ExecuteUbergraph_GA_SkeletonWarlord_Shield, CallFunc_ApplyEffectContainer_ReturnValue) == 0x000410, "Member 'GA_SkeletonWarlord_Shield_C_ExecuteUbergraph_GA_SkeletonWarlord_Shield::CallFunc_ApplyEffectContainer_ReturnValue' has a wrong offset!");

// Function GA_SkeletonWarlord_Shield.GA_SkeletonWarlord_Shield_C.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct GA_SkeletonWarlord_Shield_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_SkeletonWarlord_Shield_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GA_SkeletonWarlord_Shield_C_K2_OnEndAbility");
static_assert(sizeof(GA_SkeletonWarlord_Shield_C_K2_OnEndAbility) == 0x000001, "Wrong size on GA_SkeletonWarlord_Shield_C_K2_OnEndAbility");
static_assert(offsetof(GA_SkeletonWarlord_Shield_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GA_SkeletonWarlord_Shield_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

}

