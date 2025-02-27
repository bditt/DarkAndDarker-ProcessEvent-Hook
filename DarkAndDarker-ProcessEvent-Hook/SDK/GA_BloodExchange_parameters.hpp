#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_BloodExchange

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GA_BloodExchange.GA_BloodExchange_C.EventReceived_319C471D49A666CAA5CDCFAEC961EDA9
// 0x00B8 (0x00B8 - 0x0000)
struct GA_BloodExchange_C_EventReceived_319C471D49A666CAA5CDCFAEC961EDA9 final
{
public:
	struct FGameplayTag                           EventTag;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     EventData;                                         // 0x0008(0x00B0)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GA_BloodExchange_C_EventReceived_319C471D49A666CAA5CDCFAEC961EDA9) == 0x000008, "Wrong alignment on GA_BloodExchange_C_EventReceived_319C471D49A666CAA5CDCFAEC961EDA9");
static_assert(sizeof(GA_BloodExchange_C_EventReceived_319C471D49A666CAA5CDCFAEC961EDA9) == 0x0000B8, "Wrong size on GA_BloodExchange_C_EventReceived_319C471D49A666CAA5CDCFAEC961EDA9");
static_assert(offsetof(GA_BloodExchange_C_EventReceived_319C471D49A666CAA5CDCFAEC961EDA9, EventTag) == 0x000000, "Member 'GA_BloodExchange_C_EventReceived_319C471D49A666CAA5CDCFAEC961EDA9::EventTag' has a wrong offset!");
static_assert(offsetof(GA_BloodExchange_C_EventReceived_319C471D49A666CAA5CDCFAEC961EDA9, EventData) == 0x000008, "Member 'GA_BloodExchange_C_EventReceived_319C471D49A666CAA5CDCFAEC961EDA9::EventData' has a wrong offset!");

// Function GA_BloodExchange.GA_BloodExchange_C.ExecuteUbergraph_GA_BloodExchange
// 0x0360 (0x0360 - 0x0000)
struct GA_BloodExchange_C_ExecuteUbergraph_GA_BloodExchange final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_56A7[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           K2Node_CustomEvent_EventTag;                       // 0x0010(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     K2Node_CustomEvent_EventData;                      // 0x0018(0x00B0)()
	TDelegate<void(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)> K2Node_CreateDelegate_OutputDelegate;              // 0x00C8(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     Temp_struct_Variable;                              // 0x00D8(0x00B0)()
	struct FGameplayTag                           Temp_struct_Variable_1;                            // 0x0188(0x0008)(NoDestructor, HasGetValueTypeHash)
	class UDCAT_WaitForGameplayEvents*            CallFunc_WaitForGameplayEvents_ReturnValue;        // 0x0190(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0199(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_56A8[0x6];                                     // 0x019A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ADCCharacterBase*                       K2Node_DynamicCast_AsDCCharacter_Base;             // 0x01A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_56A9[0x7];                                     // 0x01A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     Temp_struct_Variable_2;                            // 0x01B0(0x00B0)(ConstParm)
	TArray<struct FActiveGameplayEffectHandle>    CallFunc_ApplyEffectContainer_ReturnValue;         // 0x0260(0x0010)(ReferenceParm)
	struct FGameplayTag                           K2Node_Event_SkillTag;                             // 0x0270(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           K2Node_Event_CooldownTag;                          // 0x0278(0x0008)(NoDestructor, HasGetValueTypeHash)
	class UObject*                                CallFunc_GetCurrentSourceObject_ReturnValue;       // 0x0280(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 CallFunc_MakeGameplayCueParameters_ReturnValue;    // 0x0288(0x00D8)(ContainsInstancedReference)
};
static_assert(alignof(GA_BloodExchange_C_ExecuteUbergraph_GA_BloodExchange) == 0x000008, "Wrong alignment on GA_BloodExchange_C_ExecuteUbergraph_GA_BloodExchange");
static_assert(sizeof(GA_BloodExchange_C_ExecuteUbergraph_GA_BloodExchange) == 0x000360, "Wrong size on GA_BloodExchange_C_ExecuteUbergraph_GA_BloodExchange");
static_assert(offsetof(GA_BloodExchange_C_ExecuteUbergraph_GA_BloodExchange, EntryPoint) == 0x000000, "Member 'GA_BloodExchange_C_ExecuteUbergraph_GA_BloodExchange::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_BloodExchange_C_ExecuteUbergraph_GA_BloodExchange, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000008, "Member 'GA_BloodExchange_C_ExecuteUbergraph_GA_BloodExchange::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BloodExchange_C_ExecuteUbergraph_GA_BloodExchange, K2Node_CustomEvent_EventTag) == 0x000010, "Member 'GA_BloodExchange_C_ExecuteUbergraph_GA_BloodExchange::K2Node_CustomEvent_EventTag' has a wrong offset!");
static_assert(offsetof(GA_BloodExchange_C_ExecuteUbergraph_GA_BloodExchange, K2Node_CustomEvent_EventData) == 0x000018, "Member 'GA_BloodExchange_C_ExecuteUbergraph_GA_BloodExchange::K2Node_CustomEvent_EventData' has a wrong offset!");
static_assert(offsetof(GA_BloodExchange_C_ExecuteUbergraph_GA_BloodExchange, K2Node_CreateDelegate_OutputDelegate) == 0x0000C8, "Member 'GA_BloodExchange_C_ExecuteUbergraph_GA_BloodExchange::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_BloodExchange_C_ExecuteUbergraph_GA_BloodExchange, Temp_struct_Variable) == 0x0000D8, "Member 'GA_BloodExchange_C_ExecuteUbergraph_GA_BloodExchange::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GA_BloodExchange_C_ExecuteUbergraph_GA_BloodExchange, Temp_struct_Variable_1) == 0x000188, "Member 'GA_BloodExchange_C_ExecuteUbergraph_GA_BloodExchange::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(GA_BloodExchange_C_ExecuteUbergraph_GA_BloodExchange, CallFunc_WaitForGameplayEvents_ReturnValue) == 0x000190, "Member 'GA_BloodExchange_C_ExecuteUbergraph_GA_BloodExchange::CallFunc_WaitForGameplayEvents_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BloodExchange_C_ExecuteUbergraph_GA_BloodExchange, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000198, "Member 'GA_BloodExchange_C_ExecuteUbergraph_GA_BloodExchange::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BloodExchange_C_ExecuteUbergraph_GA_BloodExchange, CallFunc_IsValid_ReturnValue) == 0x000199, "Member 'GA_BloodExchange_C_ExecuteUbergraph_GA_BloodExchange::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BloodExchange_C_ExecuteUbergraph_GA_BloodExchange, K2Node_DynamicCast_AsDCCharacter_Base) == 0x0001A0, "Member 'GA_BloodExchange_C_ExecuteUbergraph_GA_BloodExchange::K2Node_DynamicCast_AsDCCharacter_Base' has a wrong offset!");
static_assert(offsetof(GA_BloodExchange_C_ExecuteUbergraph_GA_BloodExchange, K2Node_DynamicCast_bSuccess) == 0x0001A8, "Member 'GA_BloodExchange_C_ExecuteUbergraph_GA_BloodExchange::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_BloodExchange_C_ExecuteUbergraph_GA_BloodExchange, Temp_struct_Variable_2) == 0x0001B0, "Member 'GA_BloodExchange_C_ExecuteUbergraph_GA_BloodExchange::Temp_struct_Variable_2' has a wrong offset!");
static_assert(offsetof(GA_BloodExchange_C_ExecuteUbergraph_GA_BloodExchange, CallFunc_ApplyEffectContainer_ReturnValue) == 0x000260, "Member 'GA_BloodExchange_C_ExecuteUbergraph_GA_BloodExchange::CallFunc_ApplyEffectContainer_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BloodExchange_C_ExecuteUbergraph_GA_BloodExchange, K2Node_Event_SkillTag) == 0x000270, "Member 'GA_BloodExchange_C_ExecuteUbergraph_GA_BloodExchange::K2Node_Event_SkillTag' has a wrong offset!");
static_assert(offsetof(GA_BloodExchange_C_ExecuteUbergraph_GA_BloodExchange, K2Node_Event_CooldownTag) == 0x000278, "Member 'GA_BloodExchange_C_ExecuteUbergraph_GA_BloodExchange::K2Node_Event_CooldownTag' has a wrong offset!");
static_assert(offsetof(GA_BloodExchange_C_ExecuteUbergraph_GA_BloodExchange, CallFunc_GetCurrentSourceObject_ReturnValue) == 0x000280, "Member 'GA_BloodExchange_C_ExecuteUbergraph_GA_BloodExchange::CallFunc_GetCurrentSourceObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BloodExchange_C_ExecuteUbergraph_GA_BloodExchange, CallFunc_MakeGameplayCueParameters_ReturnValue) == 0x000288, "Member 'GA_BloodExchange_C_ExecuteUbergraph_GA_BloodExchange::CallFunc_MakeGameplayCueParameters_ReturnValue' has a wrong offset!");

// Function GA_BloodExchange.GA_BloodExchange_C.ServerOnSkillActivate
// 0x0010 (0x0010 - 0x0000)
struct GA_BloodExchange_C_ServerOnSkillActivate final
{
public:
	struct FGameplayTag                           SkillTag;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           CooldownTag;                                       // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_BloodExchange_C_ServerOnSkillActivate) == 0x000004, "Wrong alignment on GA_BloodExchange_C_ServerOnSkillActivate");
static_assert(sizeof(GA_BloodExchange_C_ServerOnSkillActivate) == 0x000010, "Wrong size on GA_BloodExchange_C_ServerOnSkillActivate");
static_assert(offsetof(GA_BloodExchange_C_ServerOnSkillActivate, SkillTag) == 0x000000, "Member 'GA_BloodExchange_C_ServerOnSkillActivate::SkillTag' has a wrong offset!");
static_assert(offsetof(GA_BloodExchange_C_ServerOnSkillActivate, CooldownTag) == 0x000008, "Member 'GA_BloodExchange_C_ServerOnSkillActivate::CooldownTag' has a wrong offset!");

}

