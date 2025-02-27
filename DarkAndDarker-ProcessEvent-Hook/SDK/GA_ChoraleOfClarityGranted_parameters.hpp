#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_ChoraleOfClarityGranted

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "DungeonCrawler_structs.hpp"


namespace SDK::Params
{

// Function GA_ChoraleOfClarityGranted.GA_ChoraleOfClarityGranted_C.ExecuteUbergraph_GA_ChoraleOfClarityGranted
// 0x0160 (0x0160 - 0x0000)
struct GA_ChoraleOfClarityGranted_C_ExecuteUbergraph_GA_ChoraleOfClarityGranted final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_ActionNumber_1;                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 ActionNumber)>           K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_ActionNumber;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 ActionNumber)>           K2Node_CreateDelegate_OutputDelegate_1;            // 0x001C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     K2Node_Event_EventData;                            // 0x0030(0x00B0)(ConstParm)
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x00E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBaseInterface>        K2Node_DynamicCast_AsBase_Interface;               // 0x00E8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4531[0x3];                                     // 0x00F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetConstantInt32_ReturnValue;             // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetConstantFloat_ReturnValue;             // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4532[0x4];                                     // 0x0104(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMsgSpellRecharge                      K2Node_MakeStruct_MsgSpellRecharge;                // 0x0108(0x0020)()
	class UAbilityTask_Repeat*                    CallFunc_RepeatAction_ReturnValue;                 // 0x0128(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4533[0x7];                                     // 0x0131(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue; // 0x0138(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4534[0x7];                                     // 0x0141(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAnyMatchingGameplayTags_self_CastInput; // 0x0148(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAnyMatchingGameplayTags_ReturnValue;   // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_ChoraleOfClarityGranted_C_ExecuteUbergraph_GA_ChoraleOfClarityGranted) == 0x000008, "Wrong alignment on GA_ChoraleOfClarityGranted_C_ExecuteUbergraph_GA_ChoraleOfClarityGranted");
static_assert(sizeof(GA_ChoraleOfClarityGranted_C_ExecuteUbergraph_GA_ChoraleOfClarityGranted) == 0x000160, "Wrong size on GA_ChoraleOfClarityGranted_C_ExecuteUbergraph_GA_ChoraleOfClarityGranted");
static_assert(offsetof(GA_ChoraleOfClarityGranted_C_ExecuteUbergraph_GA_ChoraleOfClarityGranted, EntryPoint) == 0x000000, "Member 'GA_ChoraleOfClarityGranted_C_ExecuteUbergraph_GA_ChoraleOfClarityGranted::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_ChoraleOfClarityGranted_C_ExecuteUbergraph_GA_ChoraleOfClarityGranted, K2Node_CustomEvent_ActionNumber_1) == 0x000004, "Member 'GA_ChoraleOfClarityGranted_C_ExecuteUbergraph_GA_ChoraleOfClarityGranted::K2Node_CustomEvent_ActionNumber_1' has a wrong offset!");
static_assert(offsetof(GA_ChoraleOfClarityGranted_C_ExecuteUbergraph_GA_ChoraleOfClarityGranted, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'GA_ChoraleOfClarityGranted_C_ExecuteUbergraph_GA_ChoraleOfClarityGranted::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_ChoraleOfClarityGranted_C_ExecuteUbergraph_GA_ChoraleOfClarityGranted, K2Node_CustomEvent_ActionNumber) == 0x000018, "Member 'GA_ChoraleOfClarityGranted_C_ExecuteUbergraph_GA_ChoraleOfClarityGranted::K2Node_CustomEvent_ActionNumber' has a wrong offset!");
static_assert(offsetof(GA_ChoraleOfClarityGranted_C_ExecuteUbergraph_GA_ChoraleOfClarityGranted, K2Node_CreateDelegate_OutputDelegate_1) == 0x00001C, "Member 'GA_ChoraleOfClarityGranted_C_ExecuteUbergraph_GA_ChoraleOfClarityGranted::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GA_ChoraleOfClarityGranted_C_ExecuteUbergraph_GA_ChoraleOfClarityGranted, Temp_int_Variable) == 0x00002C, "Member 'GA_ChoraleOfClarityGranted_C_ExecuteUbergraph_GA_ChoraleOfClarityGranted::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(GA_ChoraleOfClarityGranted_C_ExecuteUbergraph_GA_ChoraleOfClarityGranted, K2Node_Event_EventData) == 0x000030, "Member 'GA_ChoraleOfClarityGranted_C_ExecuteUbergraph_GA_ChoraleOfClarityGranted::K2Node_Event_EventData' has a wrong offset!");
static_assert(offsetof(GA_ChoraleOfClarityGranted_C_ExecuteUbergraph_GA_ChoraleOfClarityGranted, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x0000E0, "Member 'GA_ChoraleOfClarityGranted_C_ExecuteUbergraph_GA_ChoraleOfClarityGranted::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_ChoraleOfClarityGranted_C_ExecuteUbergraph_GA_ChoraleOfClarityGranted, K2Node_DynamicCast_AsBase_Interface) == 0x0000E8, "Member 'GA_ChoraleOfClarityGranted_C_ExecuteUbergraph_GA_ChoraleOfClarityGranted::K2Node_DynamicCast_AsBase_Interface' has a wrong offset!");
static_assert(offsetof(GA_ChoraleOfClarityGranted_C_ExecuteUbergraph_GA_ChoraleOfClarityGranted, K2Node_DynamicCast_bSuccess) == 0x0000F8, "Member 'GA_ChoraleOfClarityGranted_C_ExecuteUbergraph_GA_ChoraleOfClarityGranted::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_ChoraleOfClarityGranted_C_ExecuteUbergraph_GA_ChoraleOfClarityGranted, CallFunc_GetConstantInt32_ReturnValue) == 0x0000FC, "Member 'GA_ChoraleOfClarityGranted_C_ExecuteUbergraph_GA_ChoraleOfClarityGranted::CallFunc_GetConstantInt32_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_ChoraleOfClarityGranted_C_ExecuteUbergraph_GA_ChoraleOfClarityGranted, CallFunc_GetConstantFloat_ReturnValue) == 0x000100, "Member 'GA_ChoraleOfClarityGranted_C_ExecuteUbergraph_GA_ChoraleOfClarityGranted::CallFunc_GetConstantFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_ChoraleOfClarityGranted_C_ExecuteUbergraph_GA_ChoraleOfClarityGranted, K2Node_MakeStruct_MsgSpellRecharge) == 0x000108, "Member 'GA_ChoraleOfClarityGranted_C_ExecuteUbergraph_GA_ChoraleOfClarityGranted::K2Node_MakeStruct_MsgSpellRecharge' has a wrong offset!");
static_assert(offsetof(GA_ChoraleOfClarityGranted_C_ExecuteUbergraph_GA_ChoraleOfClarityGranted, CallFunc_RepeatAction_ReturnValue) == 0x000128, "Member 'GA_ChoraleOfClarityGranted_C_ExecuteUbergraph_GA_ChoraleOfClarityGranted::CallFunc_RepeatAction_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_ChoraleOfClarityGranted_C_ExecuteUbergraph_GA_ChoraleOfClarityGranted, CallFunc_IsValid_ReturnValue) == 0x000130, "Member 'GA_ChoraleOfClarityGranted_C_ExecuteUbergraph_GA_ChoraleOfClarityGranted::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_ChoraleOfClarityGranted_C_ExecuteUbergraph_GA_ChoraleOfClarityGranted, CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue) == 0x000138, "Member 'GA_ChoraleOfClarityGranted_C_ExecuteUbergraph_GA_ChoraleOfClarityGranted::CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_ChoraleOfClarityGranted_C_ExecuteUbergraph_GA_ChoraleOfClarityGranted, CallFunc_IsValid_ReturnValue_1) == 0x000140, "Member 'GA_ChoraleOfClarityGranted_C_ExecuteUbergraph_GA_ChoraleOfClarityGranted::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_ChoraleOfClarityGranted_C_ExecuteUbergraph_GA_ChoraleOfClarityGranted, CallFunc_HasAnyMatchingGameplayTags_self_CastInput) == 0x000148, "Member 'GA_ChoraleOfClarityGranted_C_ExecuteUbergraph_GA_ChoraleOfClarityGranted::CallFunc_HasAnyMatchingGameplayTags_self_CastInput' has a wrong offset!");
static_assert(offsetof(GA_ChoraleOfClarityGranted_C_ExecuteUbergraph_GA_ChoraleOfClarityGranted, CallFunc_HasAnyMatchingGameplayTags_ReturnValue) == 0x000158, "Member 'GA_ChoraleOfClarityGranted_C_ExecuteUbergraph_GA_ChoraleOfClarityGranted::CallFunc_HasAnyMatchingGameplayTags_ReturnValue' has a wrong offset!");

// Function GA_ChoraleOfClarityGranted.GA_ChoraleOfClarityGranted_C.K2_ActivateAbilityFromEvent
// 0x00B0 (0x00B0 - 0x0000)
struct GA_ChoraleOfClarityGranted_C_K2_ActivateAbilityFromEvent final
{
public:
	struct FGameplayEventData                     EventData;                                         // 0x0000(0x00B0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(GA_ChoraleOfClarityGranted_C_K2_ActivateAbilityFromEvent) == 0x000008, "Wrong alignment on GA_ChoraleOfClarityGranted_C_K2_ActivateAbilityFromEvent");
static_assert(sizeof(GA_ChoraleOfClarityGranted_C_K2_ActivateAbilityFromEvent) == 0x0000B0, "Wrong size on GA_ChoraleOfClarityGranted_C_K2_ActivateAbilityFromEvent");
static_assert(offsetof(GA_ChoraleOfClarityGranted_C_K2_ActivateAbilityFromEvent, EventData) == 0x000000, "Member 'GA_ChoraleOfClarityGranted_C_K2_ActivateAbilityFromEvent::EventData' has a wrong offset!");

// Function GA_ChoraleOfClarityGranted.GA_ChoraleOfClarityGranted_C.OnFinished_C8B6EBF246016F8671F1C59CA8233EB0
// 0x0004 (0x0004 - 0x0000)
struct GA_ChoraleOfClarityGranted_C_OnFinished_C8B6EBF246016F8671F1C59CA8233EB0 final
{
public:
	int32                                         ActionNumber;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_ChoraleOfClarityGranted_C_OnFinished_C8B6EBF246016F8671F1C59CA8233EB0) == 0x000004, "Wrong alignment on GA_ChoraleOfClarityGranted_C_OnFinished_C8B6EBF246016F8671F1C59CA8233EB0");
static_assert(sizeof(GA_ChoraleOfClarityGranted_C_OnFinished_C8B6EBF246016F8671F1C59CA8233EB0) == 0x000004, "Wrong size on GA_ChoraleOfClarityGranted_C_OnFinished_C8B6EBF246016F8671F1C59CA8233EB0");
static_assert(offsetof(GA_ChoraleOfClarityGranted_C_OnFinished_C8B6EBF246016F8671F1C59CA8233EB0, ActionNumber) == 0x000000, "Member 'GA_ChoraleOfClarityGranted_C_OnFinished_C8B6EBF246016F8671F1C59CA8233EB0::ActionNumber' has a wrong offset!");

// Function GA_ChoraleOfClarityGranted.GA_ChoraleOfClarityGranted_C.OnPerformAction_C8B6EBF246016F8671F1C59CA8233EB0
// 0x0004 (0x0004 - 0x0000)
struct GA_ChoraleOfClarityGranted_C_OnPerformAction_C8B6EBF246016F8671F1C59CA8233EB0 final
{
public:
	int32                                         ActionNumber;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_ChoraleOfClarityGranted_C_OnPerformAction_C8B6EBF246016F8671F1C59CA8233EB0) == 0x000004, "Wrong alignment on GA_ChoraleOfClarityGranted_C_OnPerformAction_C8B6EBF246016F8671F1C59CA8233EB0");
static_assert(sizeof(GA_ChoraleOfClarityGranted_C_OnPerformAction_C8B6EBF246016F8671F1C59CA8233EB0) == 0x000004, "Wrong size on GA_ChoraleOfClarityGranted_C_OnPerformAction_C8B6EBF246016F8671F1C59CA8233EB0");
static_assert(offsetof(GA_ChoraleOfClarityGranted_C_OnPerformAction_C8B6EBF246016F8671F1C59CA8233EB0, ActionNumber) == 0x000000, "Member 'GA_ChoraleOfClarityGranted_C_OnPerformAction_C8B6EBF246016F8671F1C59CA8233EB0::ActionNumber' has a wrong offset!");

}

