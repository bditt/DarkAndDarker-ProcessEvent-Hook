#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Lazy

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function GA_Lazy.GA_Lazy_C.AbilityActivated_BP
// 0x00B8 (0x00B8 - 0x0000)
struct GA_Lazy_C_AbilityActivated_BP final
{
public:
	struct FGameplayEventData                     TriggerEventData;                                  // 0x0000(0x00B0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          bIsSocketSightBlocked;                             // 0x00B0(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Lazy_C_AbilityActivated_BP) == 0x000008, "Wrong alignment on GA_Lazy_C_AbilityActivated_BP");
static_assert(sizeof(GA_Lazy_C_AbilityActivated_BP) == 0x0000B8, "Wrong size on GA_Lazy_C_AbilityActivated_BP");
static_assert(offsetof(GA_Lazy_C_AbilityActivated_BP, TriggerEventData) == 0x000000, "Member 'GA_Lazy_C_AbilityActivated_BP::TriggerEventData' has a wrong offset!");
static_assert(offsetof(GA_Lazy_C_AbilityActivated_BP, bIsSocketSightBlocked) == 0x0000B0, "Member 'GA_Lazy_C_AbilityActivated_BP::bIsSocketSightBlocked' has a wrong offset!");

// Function GA_Lazy.GA_Lazy_C.Cancelled_A2900AB4447D2FBA3BEEDFB1A199FD19
// 0x0028 (0x0028 - 0x0000)
struct GA_Lazy_C_Cancelled_A2900AB4447D2FBA3BEEDFB1A199FD19 final
{
public:
	struct FGameplayAbilityTargetDataHandle       Data;                                              // 0x0000(0x0028)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(GA_Lazy_C_Cancelled_A2900AB4447D2FBA3BEEDFB1A199FD19) == 0x000008, "Wrong alignment on GA_Lazy_C_Cancelled_A2900AB4447D2FBA3BEEDFB1A199FD19");
static_assert(sizeof(GA_Lazy_C_Cancelled_A2900AB4447D2FBA3BEEDFB1A199FD19) == 0x000028, "Wrong size on GA_Lazy_C_Cancelled_A2900AB4447D2FBA3BEEDFB1A199FD19");
static_assert(offsetof(GA_Lazy_C_Cancelled_A2900AB4447D2FBA3BEEDFB1A199FD19, Data) == 0x000000, "Member 'GA_Lazy_C_Cancelled_A2900AB4447D2FBA3BEEDFB1A199FD19::Data' has a wrong offset!");

// Function GA_Lazy.GA_Lazy_C.ExecuteUbergraph_GA_Lazy
// 0x0280 (0x0280 - 0x0000)
struct GA_Lazy_C_ExecuteUbergraph_GA_Lazy final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_43F1[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_Event_TriggerEventData;                     // 0x0008(0x00B0)(ConstParm)
	bool                                          K2Node_Event_bIsSocketSightBlocked;                // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_43F2[0x3];                                     // 0x00B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(struct FGameplayAbilityTargetDataHandle& Data)> K2Node_CreateDelegate_OutputDelegate;              // 0x00BC(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_43F3[0x4];                                     // 0x00CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_Data_1;                         // 0x00D0(0x0028)(ConstParm)
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_Data;                           // 0x00F8(0x0028)(ConstParm)
	TDelegate<void(struct FGameplayAbilityTargetDataHandle& Data)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0120(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle       Temp_struct_Variable;                              // 0x0130(0x0028)()
	class UAbilityTask_WaitTargetData*            CallFunc_WaitTargetData_ReturnValue;               // 0x0158(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_43F4[0x7];                                     // 0x0161(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameplayAbilityTargetActor*            CallFunc_BeginSpawningActor_SpawnedActor;          // 0x0168(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BeginSpawningActor_ReturnValue;           // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0171(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_43F5[0x6];                                     // 0x0172(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_GetHitResultFromTargetData_ReturnValue;   // 0x0178(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_CastToTarget_ReturnValue;                 // 0x0260(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_43F6[0x3];                                     // 0x0261(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetRange_ReturnValue;                     // 0x0264(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetAimRadius_ReturnValue;                 // 0x0268(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_43F7[0x4];                                     // 0x026C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_SetDoublePropertyByName_Value_ImplicitCast; // 0x0270(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_SetDoublePropertyByName_Value_ImplicitCast_1; // 0x0278(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Lazy_C_ExecuteUbergraph_GA_Lazy) == 0x000008, "Wrong alignment on GA_Lazy_C_ExecuteUbergraph_GA_Lazy");
static_assert(sizeof(GA_Lazy_C_ExecuteUbergraph_GA_Lazy) == 0x000280, "Wrong size on GA_Lazy_C_ExecuteUbergraph_GA_Lazy");
static_assert(offsetof(GA_Lazy_C_ExecuteUbergraph_GA_Lazy, EntryPoint) == 0x000000, "Member 'GA_Lazy_C_ExecuteUbergraph_GA_Lazy::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Lazy_C_ExecuteUbergraph_GA_Lazy, K2Node_Event_TriggerEventData) == 0x000008, "Member 'GA_Lazy_C_ExecuteUbergraph_GA_Lazy::K2Node_Event_TriggerEventData' has a wrong offset!");
static_assert(offsetof(GA_Lazy_C_ExecuteUbergraph_GA_Lazy, K2Node_Event_bIsSocketSightBlocked) == 0x0000B8, "Member 'GA_Lazy_C_ExecuteUbergraph_GA_Lazy::K2Node_Event_bIsSocketSightBlocked' has a wrong offset!");
static_assert(offsetof(GA_Lazy_C_ExecuteUbergraph_GA_Lazy, K2Node_CreateDelegate_OutputDelegate) == 0x0000BC, "Member 'GA_Lazy_C_ExecuteUbergraph_GA_Lazy::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_Lazy_C_ExecuteUbergraph_GA_Lazy, K2Node_CustomEvent_Data_1) == 0x0000D0, "Member 'GA_Lazy_C_ExecuteUbergraph_GA_Lazy::K2Node_CustomEvent_Data_1' has a wrong offset!");
static_assert(offsetof(GA_Lazy_C_ExecuteUbergraph_GA_Lazy, K2Node_CustomEvent_Data) == 0x0000F8, "Member 'GA_Lazy_C_ExecuteUbergraph_GA_Lazy::K2Node_CustomEvent_Data' has a wrong offset!");
static_assert(offsetof(GA_Lazy_C_ExecuteUbergraph_GA_Lazy, K2Node_CreateDelegate_OutputDelegate_1) == 0x000120, "Member 'GA_Lazy_C_ExecuteUbergraph_GA_Lazy::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GA_Lazy_C_ExecuteUbergraph_GA_Lazy, Temp_struct_Variable) == 0x000130, "Member 'GA_Lazy_C_ExecuteUbergraph_GA_Lazy::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GA_Lazy_C_ExecuteUbergraph_GA_Lazy, CallFunc_WaitTargetData_ReturnValue) == 0x000158, "Member 'GA_Lazy_C_ExecuteUbergraph_GA_Lazy::CallFunc_WaitTargetData_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Lazy_C_ExecuteUbergraph_GA_Lazy, CallFunc_IsValid_ReturnValue) == 0x000160, "Member 'GA_Lazy_C_ExecuteUbergraph_GA_Lazy::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Lazy_C_ExecuteUbergraph_GA_Lazy, CallFunc_BeginSpawningActor_SpawnedActor) == 0x000168, "Member 'GA_Lazy_C_ExecuteUbergraph_GA_Lazy::CallFunc_BeginSpawningActor_SpawnedActor' has a wrong offset!");
static_assert(offsetof(GA_Lazy_C_ExecuteUbergraph_GA_Lazy, CallFunc_BeginSpawningActor_ReturnValue) == 0x000170, "Member 'GA_Lazy_C_ExecuteUbergraph_GA_Lazy::CallFunc_BeginSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Lazy_C_ExecuteUbergraph_GA_Lazy, CallFunc_IsValid_ReturnValue_1) == 0x000171, "Member 'GA_Lazy_C_ExecuteUbergraph_GA_Lazy::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Lazy_C_ExecuteUbergraph_GA_Lazy, CallFunc_GetHitResultFromTargetData_ReturnValue) == 0x000178, "Member 'GA_Lazy_C_ExecuteUbergraph_GA_Lazy::CallFunc_GetHitResultFromTargetData_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Lazy_C_ExecuteUbergraph_GA_Lazy, CallFunc_CastToTarget_ReturnValue) == 0x000260, "Member 'GA_Lazy_C_ExecuteUbergraph_GA_Lazy::CallFunc_CastToTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Lazy_C_ExecuteUbergraph_GA_Lazy, CallFunc_GetRange_ReturnValue) == 0x000264, "Member 'GA_Lazy_C_ExecuteUbergraph_GA_Lazy::CallFunc_GetRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Lazy_C_ExecuteUbergraph_GA_Lazy, CallFunc_GetAimRadius_ReturnValue) == 0x000268, "Member 'GA_Lazy_C_ExecuteUbergraph_GA_Lazy::CallFunc_GetAimRadius_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Lazy_C_ExecuteUbergraph_GA_Lazy, CallFunc_SetDoublePropertyByName_Value_ImplicitCast) == 0x000270, "Member 'GA_Lazy_C_ExecuteUbergraph_GA_Lazy::CallFunc_SetDoublePropertyByName_Value_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GA_Lazy_C_ExecuteUbergraph_GA_Lazy, CallFunc_SetDoublePropertyByName_Value_ImplicitCast_1) == 0x000278, "Member 'GA_Lazy_C_ExecuteUbergraph_GA_Lazy::CallFunc_SetDoublePropertyByName_Value_ImplicitCast_1' has a wrong offset!");

// Function GA_Lazy.GA_Lazy_C.ValidData_A2900AB4447D2FBA3BEEDFB1A199FD19
// 0x0028 (0x0028 - 0x0000)
struct GA_Lazy_C_ValidData_A2900AB4447D2FBA3BEEDFB1A199FD19 final
{
public:
	struct FGameplayAbilityTargetDataHandle       Data;                                              // 0x0000(0x0028)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(GA_Lazy_C_ValidData_A2900AB4447D2FBA3BEEDFB1A199FD19) == 0x000008, "Wrong alignment on GA_Lazy_C_ValidData_A2900AB4447D2FBA3BEEDFB1A199FD19");
static_assert(sizeof(GA_Lazy_C_ValidData_A2900AB4447D2FBA3BEEDFB1A199FD19) == 0x000028, "Wrong size on GA_Lazy_C_ValidData_A2900AB4447D2FBA3BEEDFB1A199FD19");
static_assert(offsetof(GA_Lazy_C_ValidData_A2900AB4447D2FBA3BEEDFB1A199FD19, Data) == 0x000000, "Member 'GA_Lazy_C_ValidData_A2900AB4447D2FBA3BEEDFB1A199FD19::Data' has a wrong offset!");

}

