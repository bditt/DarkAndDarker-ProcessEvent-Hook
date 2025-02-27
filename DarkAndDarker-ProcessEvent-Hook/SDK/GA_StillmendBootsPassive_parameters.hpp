#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_StillmendBootsPassive

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GA_StillmendBootsPassive.GA_StillmendBootsPassive_C.ExecuteUbergraph_GA_StillmendBootsPassive
// 0x0208 (0x0208 - 0x0000)
struct GA_StillmendBootsPassive_C_ExecuteUbergraph_GA_StillmendBootsPassive final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_ActionNumber_1;                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_ActionNumber;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1B69[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UDCAT_WaitVelocityChange*               CallFunc_WaitVelocityChange_ReturnValue;           // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     Temp_struct_Variable;                              // 0x0030(0x00B0)(ConstParm)
	TArray<struct FActiveGameplayEffectHandle>    CallFunc_ApplyEffectContainer_ReturnValue;         // 0x00E0(0x0010)(ReferenceParm)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1B6A[0x3];                                     // 0x00F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x00F4(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1B6B[0x4];                                     // 0x0104(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UDCAT_WaitVelocityZero*                 CallFunc_WaitVelocityZero_ReturnValue;             // 0x0108(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1B6C[0x7];                                     // 0x0111(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_Event_EventData;                            // 0x0118(0x00B0)(ConstParm)
	bool                                          K2Node_Event_bWasCancelled;                        // 0x01C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1B6D[0x3];                                     // 0x01C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetConstantFloat_ReturnValue;             // 0x01CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x01D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1B6E[0x2];                                     // 0x01D2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 ActionNumber)>           K2Node_CreateDelegate_OutputDelegate_2;            // 0x01D4(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1B6F[0x4];                                     // 0x01E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilityTask_Repeat*                    CallFunc_RepeatAction_ReturnValue;                 // 0x01E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 ActionNumber)>           K2Node_CreateDelegate_OutputDelegate_3;            // 0x01F0(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0200(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_StillmendBootsPassive_C_ExecuteUbergraph_GA_StillmendBootsPassive) == 0x000008, "Wrong alignment on GA_StillmendBootsPassive_C_ExecuteUbergraph_GA_StillmendBootsPassive");
static_assert(sizeof(GA_StillmendBootsPassive_C_ExecuteUbergraph_GA_StillmendBootsPassive) == 0x000208, "Wrong size on GA_StillmendBootsPassive_C_ExecuteUbergraph_GA_StillmendBootsPassive");
static_assert(offsetof(GA_StillmendBootsPassive_C_ExecuteUbergraph_GA_StillmendBootsPassive, EntryPoint) == 0x000000, "Member 'GA_StillmendBootsPassive_C_ExecuteUbergraph_GA_StillmendBootsPassive::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_StillmendBootsPassive_C_ExecuteUbergraph_GA_StillmendBootsPassive, K2Node_CustomEvent_ActionNumber_1) == 0x000004, "Member 'GA_StillmendBootsPassive_C_ExecuteUbergraph_GA_StillmendBootsPassive::K2Node_CustomEvent_ActionNumber_1' has a wrong offset!");
static_assert(offsetof(GA_StillmendBootsPassive_C_ExecuteUbergraph_GA_StillmendBootsPassive, K2Node_CustomEvent_ActionNumber) == 0x000008, "Member 'GA_StillmendBootsPassive_C_ExecuteUbergraph_GA_StillmendBootsPassive::K2Node_CustomEvent_ActionNumber' has a wrong offset!");
static_assert(offsetof(GA_StillmendBootsPassive_C_ExecuteUbergraph_GA_StillmendBootsPassive, Temp_int_Variable) == 0x00000C, "Member 'GA_StillmendBootsPassive_C_ExecuteUbergraph_GA_StillmendBootsPassive::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(GA_StillmendBootsPassive_C_ExecuteUbergraph_GA_StillmendBootsPassive, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'GA_StillmendBootsPassive_C_ExecuteUbergraph_GA_StillmendBootsPassive::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_StillmendBootsPassive_C_ExecuteUbergraph_GA_StillmendBootsPassive, CallFunc_Greater_IntInt_ReturnValue) == 0x000020, "Member 'GA_StillmendBootsPassive_C_ExecuteUbergraph_GA_StillmendBootsPassive::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_StillmendBootsPassive_C_ExecuteUbergraph_GA_StillmendBootsPassive, CallFunc_WaitVelocityChange_ReturnValue) == 0x000028, "Member 'GA_StillmendBootsPassive_C_ExecuteUbergraph_GA_StillmendBootsPassive::CallFunc_WaitVelocityChange_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_StillmendBootsPassive_C_ExecuteUbergraph_GA_StillmendBootsPassive, Temp_struct_Variable) == 0x000030, "Member 'GA_StillmendBootsPassive_C_ExecuteUbergraph_GA_StillmendBootsPassive::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GA_StillmendBootsPassive_C_ExecuteUbergraph_GA_StillmendBootsPassive, CallFunc_ApplyEffectContainer_ReturnValue) == 0x0000E0, "Member 'GA_StillmendBootsPassive_C_ExecuteUbergraph_GA_StillmendBootsPassive::CallFunc_ApplyEffectContainer_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_StillmendBootsPassive_C_ExecuteUbergraph_GA_StillmendBootsPassive, CallFunc_IsValid_ReturnValue) == 0x0000F0, "Member 'GA_StillmendBootsPassive_C_ExecuteUbergraph_GA_StillmendBootsPassive::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_StillmendBootsPassive_C_ExecuteUbergraph_GA_StillmendBootsPassive, K2Node_CreateDelegate_OutputDelegate_1) == 0x0000F4, "Member 'GA_StillmendBootsPassive_C_ExecuteUbergraph_GA_StillmendBootsPassive::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GA_StillmendBootsPassive_C_ExecuteUbergraph_GA_StillmendBootsPassive, CallFunc_WaitVelocityZero_ReturnValue) == 0x000108, "Member 'GA_StillmendBootsPassive_C_ExecuteUbergraph_GA_StillmendBootsPassive::CallFunc_WaitVelocityZero_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_StillmendBootsPassive_C_ExecuteUbergraph_GA_StillmendBootsPassive, CallFunc_IsValid_ReturnValue_1) == 0x000110, "Member 'GA_StillmendBootsPassive_C_ExecuteUbergraph_GA_StillmendBootsPassive::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_StillmendBootsPassive_C_ExecuteUbergraph_GA_StillmendBootsPassive, K2Node_Event_EventData) == 0x000118, "Member 'GA_StillmendBootsPassive_C_ExecuteUbergraph_GA_StillmendBootsPassive::K2Node_Event_EventData' has a wrong offset!");
static_assert(offsetof(GA_StillmendBootsPassive_C_ExecuteUbergraph_GA_StillmendBootsPassive, K2Node_Event_bWasCancelled) == 0x0001C8, "Member 'GA_StillmendBootsPassive_C_ExecuteUbergraph_GA_StillmendBootsPassive::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GA_StillmendBootsPassive_C_ExecuteUbergraph_GA_StillmendBootsPassive, CallFunc_GetConstantFloat_ReturnValue) == 0x0001CC, "Member 'GA_StillmendBootsPassive_C_ExecuteUbergraph_GA_StillmendBootsPassive::CallFunc_GetConstantFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_StillmendBootsPassive_C_ExecuteUbergraph_GA_StillmendBootsPassive, CallFunc_IsValid_ReturnValue_2) == 0x0001D0, "Member 'GA_StillmendBootsPassive_C_ExecuteUbergraph_GA_StillmendBootsPassive::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_StillmendBootsPassive_C_ExecuteUbergraph_GA_StillmendBootsPassive, CallFunc_IsValid_ReturnValue_3) == 0x0001D1, "Member 'GA_StillmendBootsPassive_C_ExecuteUbergraph_GA_StillmendBootsPassive::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GA_StillmendBootsPassive_C_ExecuteUbergraph_GA_StillmendBootsPassive, K2Node_CreateDelegate_OutputDelegate_2) == 0x0001D4, "Member 'GA_StillmendBootsPassive_C_ExecuteUbergraph_GA_StillmendBootsPassive::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(GA_StillmendBootsPassive_C_ExecuteUbergraph_GA_StillmendBootsPassive, CallFunc_RepeatAction_ReturnValue) == 0x0001E8, "Member 'GA_StillmendBootsPassive_C_ExecuteUbergraph_GA_StillmendBootsPassive::CallFunc_RepeatAction_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_StillmendBootsPassive_C_ExecuteUbergraph_GA_StillmendBootsPassive, K2Node_CreateDelegate_OutputDelegate_3) == 0x0001F0, "Member 'GA_StillmendBootsPassive_C_ExecuteUbergraph_GA_StillmendBootsPassive::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(GA_StillmendBootsPassive_C_ExecuteUbergraph_GA_StillmendBootsPassive, CallFunc_IsValid_ReturnValue_4) == 0x000200, "Member 'GA_StillmendBootsPassive_C_ExecuteUbergraph_GA_StillmendBootsPassive::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");

// Function GA_StillmendBootsPassive.GA_StillmendBootsPassive_C.K2_ActivateAbilityFromEvent
// 0x00B0 (0x00B0 - 0x0000)
struct GA_StillmendBootsPassive_C_K2_ActivateAbilityFromEvent final
{
public:
	struct FGameplayEventData                     EventData;                                         // 0x0000(0x00B0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(GA_StillmendBootsPassive_C_K2_ActivateAbilityFromEvent) == 0x000008, "Wrong alignment on GA_StillmendBootsPassive_C_K2_ActivateAbilityFromEvent");
static_assert(sizeof(GA_StillmendBootsPassive_C_K2_ActivateAbilityFromEvent) == 0x0000B0, "Wrong size on GA_StillmendBootsPassive_C_K2_ActivateAbilityFromEvent");
static_assert(offsetof(GA_StillmendBootsPassive_C_K2_ActivateAbilityFromEvent, EventData) == 0x000000, "Member 'GA_StillmendBootsPassive_C_K2_ActivateAbilityFromEvent::EventData' has a wrong offset!");

// Function GA_StillmendBootsPassive.GA_StillmendBootsPassive_C.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct GA_StillmendBootsPassive_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_StillmendBootsPassive_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GA_StillmendBootsPassive_C_K2_OnEndAbility");
static_assert(sizeof(GA_StillmendBootsPassive_C_K2_OnEndAbility) == 0x000001, "Wrong size on GA_StillmendBootsPassive_C_K2_OnEndAbility");
static_assert(offsetof(GA_StillmendBootsPassive_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GA_StillmendBootsPassive_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

// Function GA_StillmendBootsPassive.GA_StillmendBootsPassive_C.OnFinished_B6EAC5A94B14E6389880AB92F575476B
// 0x0004 (0x0004 - 0x0000)
struct GA_StillmendBootsPassive_C_OnFinished_B6EAC5A94B14E6389880AB92F575476B final
{
public:
	int32                                         ActionNumber;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_StillmendBootsPassive_C_OnFinished_B6EAC5A94B14E6389880AB92F575476B) == 0x000004, "Wrong alignment on GA_StillmendBootsPassive_C_OnFinished_B6EAC5A94B14E6389880AB92F575476B");
static_assert(sizeof(GA_StillmendBootsPassive_C_OnFinished_B6EAC5A94B14E6389880AB92F575476B) == 0x000004, "Wrong size on GA_StillmendBootsPassive_C_OnFinished_B6EAC5A94B14E6389880AB92F575476B");
static_assert(offsetof(GA_StillmendBootsPassive_C_OnFinished_B6EAC5A94B14E6389880AB92F575476B, ActionNumber) == 0x000000, "Member 'GA_StillmendBootsPassive_C_OnFinished_B6EAC5A94B14E6389880AB92F575476B::ActionNumber' has a wrong offset!");

// Function GA_StillmendBootsPassive.GA_StillmendBootsPassive_C.OnPerformAction_B6EAC5A94B14E6389880AB92F575476B
// 0x0004 (0x0004 - 0x0000)
struct GA_StillmendBootsPassive_C_OnPerformAction_B6EAC5A94B14E6389880AB92F575476B final
{
public:
	int32                                         ActionNumber;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_StillmendBootsPassive_C_OnPerformAction_B6EAC5A94B14E6389880AB92F575476B) == 0x000004, "Wrong alignment on GA_StillmendBootsPassive_C_OnPerformAction_B6EAC5A94B14E6389880AB92F575476B");
static_assert(sizeof(GA_StillmendBootsPassive_C_OnPerformAction_B6EAC5A94B14E6389880AB92F575476B) == 0x000004, "Wrong size on GA_StillmendBootsPassive_C_OnPerformAction_B6EAC5A94B14E6389880AB92F575476B");
static_assert(offsetof(GA_StillmendBootsPassive_C_OnPerformAction_B6EAC5A94B14E6389880AB92F575476B, ActionNumber) == 0x000000, "Member 'GA_StillmendBootsPassive_C_OnPerformAction_B6EAC5A94B14E6389880AB92F575476B::ActionNumber' has a wrong offset!");

}

