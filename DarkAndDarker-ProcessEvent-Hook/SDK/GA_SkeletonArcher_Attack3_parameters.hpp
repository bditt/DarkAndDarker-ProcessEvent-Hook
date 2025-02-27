#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_SkeletonArcher_Attack3

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GA_SkeletonArcher_Attack3.GA_SkeletonArcher_Attack3_C.AbilityActivated
// 0x00B0 (0x00B0 - 0x0000)
struct GA_SkeletonArcher_Attack3_C_AbilityActivated final
{
public:
	struct FGameplayEventData                     TriggerEventData;                                  // 0x0000(0x00B0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GA_SkeletonArcher_Attack3_C_AbilityActivated) == 0x000008, "Wrong alignment on GA_SkeletonArcher_Attack3_C_AbilityActivated");
static_assert(sizeof(GA_SkeletonArcher_Attack3_C_AbilityActivated) == 0x0000B0, "Wrong size on GA_SkeletonArcher_Attack3_C_AbilityActivated");
static_assert(offsetof(GA_SkeletonArcher_Attack3_C_AbilityActivated, TriggerEventData) == 0x000000, "Member 'GA_SkeletonArcher_Attack3_C_AbilityActivated::TriggerEventData' has a wrong offset!");

// Function GA_SkeletonArcher_Attack3.GA_SkeletonArcher_Attack3_C.EventReceived_8FB9027344203331AB7216B23DB68538
// 0x00B8 (0x00B8 - 0x0000)
struct GA_SkeletonArcher_Attack3_C_EventReceived_8FB9027344203331AB7216B23DB68538 final
{
public:
	struct FGameplayTag                           EventTag;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     EventData;                                         // 0x0008(0x00B0)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GA_SkeletonArcher_Attack3_C_EventReceived_8FB9027344203331AB7216B23DB68538) == 0x000008, "Wrong alignment on GA_SkeletonArcher_Attack3_C_EventReceived_8FB9027344203331AB7216B23DB68538");
static_assert(sizeof(GA_SkeletonArcher_Attack3_C_EventReceived_8FB9027344203331AB7216B23DB68538) == 0x0000B8, "Wrong size on GA_SkeletonArcher_Attack3_C_EventReceived_8FB9027344203331AB7216B23DB68538");
static_assert(offsetof(GA_SkeletonArcher_Attack3_C_EventReceived_8FB9027344203331AB7216B23DB68538, EventTag) == 0x000000, "Member 'GA_SkeletonArcher_Attack3_C_EventReceived_8FB9027344203331AB7216B23DB68538::EventTag' has a wrong offset!");
static_assert(offsetof(GA_SkeletonArcher_Attack3_C_EventReceived_8FB9027344203331AB7216B23DB68538, EventData) == 0x000008, "Member 'GA_SkeletonArcher_Attack3_C_EventReceived_8FB9027344203331AB7216B23DB68538::EventData' has a wrong offset!");

// Function GA_SkeletonArcher_Attack3.GA_SkeletonArcher_Attack3_C.ExecuteUbergraph_GA_SkeletonArcher_Attack3
// 0x0268 (0x0268 - 0x0000)
struct GA_SkeletonArcher_Attack3_C_ExecuteUbergraph_GA_SkeletonArcher_Attack3 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           K2Node_CustomEvent_EventTag;                       // 0x0004(0x0008)(NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4FD4[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_CustomEvent_EventData;                      // 0x0010(0x00B0)()
	TDelegate<void(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)> K2Node_CreateDelegate_OutputDelegate;              // 0x00C0(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     Temp_struct_Variable;                              // 0x00D0(0x00B0)()
	struct FGameplayTag                           Temp_struct_Variable_1;                            // 0x0180(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_MatchesTag_ReturnValue;                   // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4FD5[0x7];                                     // 0x0189(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UDCAT_WaitForGameplayEvents*            CallFunc_WaitForGameplayEvents_ReturnValue;        // 0x0190(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4FD6[0x7];                                     // 0x0199(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_Event_TriggerEventData;                     // 0x01A0(0x00B0)(ConstParm)
	bool                                          K2Node_Event_bWasCancelled;                        // 0x0250(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4FD7[0x7];                                     // 0x0251(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UDCAT_RotateToActor*                    CallFunc_RotateToActor_ReturnValue;                // 0x0258(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0260(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0261(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_SkeletonArcher_Attack3_C_ExecuteUbergraph_GA_SkeletonArcher_Attack3) == 0x000008, "Wrong alignment on GA_SkeletonArcher_Attack3_C_ExecuteUbergraph_GA_SkeletonArcher_Attack3");
static_assert(sizeof(GA_SkeletonArcher_Attack3_C_ExecuteUbergraph_GA_SkeletonArcher_Attack3) == 0x000268, "Wrong size on GA_SkeletonArcher_Attack3_C_ExecuteUbergraph_GA_SkeletonArcher_Attack3");
static_assert(offsetof(GA_SkeletonArcher_Attack3_C_ExecuteUbergraph_GA_SkeletonArcher_Attack3, EntryPoint) == 0x000000, "Member 'GA_SkeletonArcher_Attack3_C_ExecuteUbergraph_GA_SkeletonArcher_Attack3::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_SkeletonArcher_Attack3_C_ExecuteUbergraph_GA_SkeletonArcher_Attack3, K2Node_CustomEvent_EventTag) == 0x000004, "Member 'GA_SkeletonArcher_Attack3_C_ExecuteUbergraph_GA_SkeletonArcher_Attack3::K2Node_CustomEvent_EventTag' has a wrong offset!");
static_assert(offsetof(GA_SkeletonArcher_Attack3_C_ExecuteUbergraph_GA_SkeletonArcher_Attack3, K2Node_CustomEvent_EventData) == 0x000010, "Member 'GA_SkeletonArcher_Attack3_C_ExecuteUbergraph_GA_SkeletonArcher_Attack3::K2Node_CustomEvent_EventData' has a wrong offset!");
static_assert(offsetof(GA_SkeletonArcher_Attack3_C_ExecuteUbergraph_GA_SkeletonArcher_Attack3, K2Node_CreateDelegate_OutputDelegate) == 0x0000C0, "Member 'GA_SkeletonArcher_Attack3_C_ExecuteUbergraph_GA_SkeletonArcher_Attack3::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_SkeletonArcher_Attack3_C_ExecuteUbergraph_GA_SkeletonArcher_Attack3, Temp_struct_Variable) == 0x0000D0, "Member 'GA_SkeletonArcher_Attack3_C_ExecuteUbergraph_GA_SkeletonArcher_Attack3::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GA_SkeletonArcher_Attack3_C_ExecuteUbergraph_GA_SkeletonArcher_Attack3, Temp_struct_Variable_1) == 0x000180, "Member 'GA_SkeletonArcher_Attack3_C_ExecuteUbergraph_GA_SkeletonArcher_Attack3::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(GA_SkeletonArcher_Attack3_C_ExecuteUbergraph_GA_SkeletonArcher_Attack3, CallFunc_MatchesTag_ReturnValue) == 0x000188, "Member 'GA_SkeletonArcher_Attack3_C_ExecuteUbergraph_GA_SkeletonArcher_Attack3::CallFunc_MatchesTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SkeletonArcher_Attack3_C_ExecuteUbergraph_GA_SkeletonArcher_Attack3, CallFunc_WaitForGameplayEvents_ReturnValue) == 0x000190, "Member 'GA_SkeletonArcher_Attack3_C_ExecuteUbergraph_GA_SkeletonArcher_Attack3::CallFunc_WaitForGameplayEvents_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SkeletonArcher_Attack3_C_ExecuteUbergraph_GA_SkeletonArcher_Attack3, CallFunc_IsValid_ReturnValue) == 0x000198, "Member 'GA_SkeletonArcher_Attack3_C_ExecuteUbergraph_GA_SkeletonArcher_Attack3::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SkeletonArcher_Attack3_C_ExecuteUbergraph_GA_SkeletonArcher_Attack3, K2Node_Event_TriggerEventData) == 0x0001A0, "Member 'GA_SkeletonArcher_Attack3_C_ExecuteUbergraph_GA_SkeletonArcher_Attack3::K2Node_Event_TriggerEventData' has a wrong offset!");
static_assert(offsetof(GA_SkeletonArcher_Attack3_C_ExecuteUbergraph_GA_SkeletonArcher_Attack3, K2Node_Event_bWasCancelled) == 0x000250, "Member 'GA_SkeletonArcher_Attack3_C_ExecuteUbergraph_GA_SkeletonArcher_Attack3::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GA_SkeletonArcher_Attack3_C_ExecuteUbergraph_GA_SkeletonArcher_Attack3, CallFunc_RotateToActor_ReturnValue) == 0x000258, "Member 'GA_SkeletonArcher_Attack3_C_ExecuteUbergraph_GA_SkeletonArcher_Attack3::CallFunc_RotateToActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SkeletonArcher_Attack3_C_ExecuteUbergraph_GA_SkeletonArcher_Attack3, CallFunc_IsValid_ReturnValue_1) == 0x000260, "Member 'GA_SkeletonArcher_Attack3_C_ExecuteUbergraph_GA_SkeletonArcher_Attack3::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_SkeletonArcher_Attack3_C_ExecuteUbergraph_GA_SkeletonArcher_Attack3, CallFunc_IsValid_ReturnValue_2) == 0x000261, "Member 'GA_SkeletonArcher_Attack3_C_ExecuteUbergraph_GA_SkeletonArcher_Attack3::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");

// Function GA_SkeletonArcher_Attack3.GA_SkeletonArcher_Attack3_C.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct GA_SkeletonArcher_Attack3_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_SkeletonArcher_Attack3_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GA_SkeletonArcher_Attack3_C_K2_OnEndAbility");
static_assert(sizeof(GA_SkeletonArcher_Attack3_C_K2_OnEndAbility) == 0x000001, "Wrong size on GA_SkeletonArcher_Attack3_C_K2_OnEndAbility");
static_assert(offsetof(GA_SkeletonArcher_Attack3_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GA_SkeletonArcher_Attack3_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

}

