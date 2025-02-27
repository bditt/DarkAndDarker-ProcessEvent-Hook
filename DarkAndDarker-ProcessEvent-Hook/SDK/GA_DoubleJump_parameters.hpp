#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_DoubleJump

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GA_DoubleJump.GA_DoubleJump_C.ExecuteUbergraph_GA_DoubleJump
// 0x0138 (0x0138 - 0x0000)
struct GA_DoubleJump_C_ExecuteUbergraph_GA_DoubleJump final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EMovementMode PrevMovementMode, EMovementMode NewMovementMode)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EMovementMode                                 K2Node_CustomEvent_PrevMovementMode_1;             // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMovementMode                                 K2Node_CustomEvent_NewMovementMode_1;              // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMovementMode                                 Temp_byte_Variable;                                // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMovementMode                                 Temp_byte_Variable_1;                              // 0x0017(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDCAT_WaitMovementModeChange*           CallFunc_WaitMovementModeChange_ReturnValue;       // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EMovementMode PrevMovementMode, EMovementMode NewMovementMode)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0020(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMovementMode                                 K2Node_CustomEvent_PrevMovementMode;               // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMovementMode                                 K2Node_CustomEvent_NewMovementMode;                // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMovementMode                                 Temp_byte_Variable_2;                              // 0x0033(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMovementMode                                 Temp_byte_Variable_3;                              // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4E73[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UDCAT_WaitMovementModeChange*           CallFunc_WaitMovementModeChange_ReturnValue_1;     // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4E74[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_Event_EventData;                            // 0x0048(0x00B0)(ConstParm)
	bool                                          K2Node_Event_bWasCancelled;                        // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;          // 0x00F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4E75[0x6];                                     // 0x00FA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x0100(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                             K2Node_DynamicCast_As___;                          // 0x0108(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue_1;        // 0x0111(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4E76[0x2];                                     // 0x0112(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0114(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4E77[0x7];                                     // 0x0119(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1; // 0x0120(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                             K2Node_DynamicCast_As____1;                        // 0x0128(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4E78[0x3];                                     // 0x0131(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0134(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_DoubleJump_C_ExecuteUbergraph_GA_DoubleJump) == 0x000008, "Wrong alignment on GA_DoubleJump_C_ExecuteUbergraph_GA_DoubleJump");
static_assert(sizeof(GA_DoubleJump_C_ExecuteUbergraph_GA_DoubleJump) == 0x000138, "Wrong size on GA_DoubleJump_C_ExecuteUbergraph_GA_DoubleJump");
static_assert(offsetof(GA_DoubleJump_C_ExecuteUbergraph_GA_DoubleJump, EntryPoint) == 0x000000, "Member 'GA_DoubleJump_C_ExecuteUbergraph_GA_DoubleJump::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_DoubleJump_C_ExecuteUbergraph_GA_DoubleJump, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'GA_DoubleJump_C_ExecuteUbergraph_GA_DoubleJump::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_DoubleJump_C_ExecuteUbergraph_GA_DoubleJump, K2Node_CustomEvent_PrevMovementMode_1) == 0x000014, "Member 'GA_DoubleJump_C_ExecuteUbergraph_GA_DoubleJump::K2Node_CustomEvent_PrevMovementMode_1' has a wrong offset!");
static_assert(offsetof(GA_DoubleJump_C_ExecuteUbergraph_GA_DoubleJump, K2Node_CustomEvent_NewMovementMode_1) == 0x000015, "Member 'GA_DoubleJump_C_ExecuteUbergraph_GA_DoubleJump::K2Node_CustomEvent_NewMovementMode_1' has a wrong offset!");
static_assert(offsetof(GA_DoubleJump_C_ExecuteUbergraph_GA_DoubleJump, Temp_byte_Variable) == 0x000016, "Member 'GA_DoubleJump_C_ExecuteUbergraph_GA_DoubleJump::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(GA_DoubleJump_C_ExecuteUbergraph_GA_DoubleJump, Temp_byte_Variable_1) == 0x000017, "Member 'GA_DoubleJump_C_ExecuteUbergraph_GA_DoubleJump::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(GA_DoubleJump_C_ExecuteUbergraph_GA_DoubleJump, CallFunc_WaitMovementModeChange_ReturnValue) == 0x000018, "Member 'GA_DoubleJump_C_ExecuteUbergraph_GA_DoubleJump::CallFunc_WaitMovementModeChange_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_DoubleJump_C_ExecuteUbergraph_GA_DoubleJump, K2Node_CreateDelegate_OutputDelegate_1) == 0x000020, "Member 'GA_DoubleJump_C_ExecuteUbergraph_GA_DoubleJump::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GA_DoubleJump_C_ExecuteUbergraph_GA_DoubleJump, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'GA_DoubleJump_C_ExecuteUbergraph_GA_DoubleJump::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_DoubleJump_C_ExecuteUbergraph_GA_DoubleJump, K2Node_CustomEvent_PrevMovementMode) == 0x000031, "Member 'GA_DoubleJump_C_ExecuteUbergraph_GA_DoubleJump::K2Node_CustomEvent_PrevMovementMode' has a wrong offset!");
static_assert(offsetof(GA_DoubleJump_C_ExecuteUbergraph_GA_DoubleJump, K2Node_CustomEvent_NewMovementMode) == 0x000032, "Member 'GA_DoubleJump_C_ExecuteUbergraph_GA_DoubleJump::K2Node_CustomEvent_NewMovementMode' has a wrong offset!");
static_assert(offsetof(GA_DoubleJump_C_ExecuteUbergraph_GA_DoubleJump, Temp_byte_Variable_2) == 0x000033, "Member 'GA_DoubleJump_C_ExecuteUbergraph_GA_DoubleJump::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(GA_DoubleJump_C_ExecuteUbergraph_GA_DoubleJump, Temp_byte_Variable_3) == 0x000034, "Member 'GA_DoubleJump_C_ExecuteUbergraph_GA_DoubleJump::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(GA_DoubleJump_C_ExecuteUbergraph_GA_DoubleJump, CallFunc_WaitMovementModeChange_ReturnValue_1) == 0x000038, "Member 'GA_DoubleJump_C_ExecuteUbergraph_GA_DoubleJump::CallFunc_WaitMovementModeChange_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_DoubleJump_C_ExecuteUbergraph_GA_DoubleJump, CallFunc_IsValid_ReturnValue_1) == 0x000040, "Member 'GA_DoubleJump_C_ExecuteUbergraph_GA_DoubleJump::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_DoubleJump_C_ExecuteUbergraph_GA_DoubleJump, K2Node_Event_EventData) == 0x000048, "Member 'GA_DoubleJump_C_ExecuteUbergraph_GA_DoubleJump::K2Node_Event_EventData' has a wrong offset!");
static_assert(offsetof(GA_DoubleJump_C_ExecuteUbergraph_GA_DoubleJump, K2Node_Event_bWasCancelled) == 0x0000F8, "Member 'GA_DoubleJump_C_ExecuteUbergraph_GA_DoubleJump::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GA_DoubleJump_C_ExecuteUbergraph_GA_DoubleJump, CallFunc_IsLocallyControlled_ReturnValue) == 0x0000F9, "Member 'GA_DoubleJump_C_ExecuteUbergraph_GA_DoubleJump::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_DoubleJump_C_ExecuteUbergraph_GA_DoubleJump, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000100, "Member 'GA_DoubleJump_C_ExecuteUbergraph_GA_DoubleJump::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_DoubleJump_C_ExecuteUbergraph_GA_DoubleJump, K2Node_DynamicCast_As___) == 0x000108, "Member 'GA_DoubleJump_C_ExecuteUbergraph_GA_DoubleJump::K2Node_DynamicCast_As___' has a wrong offset!");
static_assert(offsetof(GA_DoubleJump_C_ExecuteUbergraph_GA_DoubleJump, K2Node_DynamicCast_bSuccess) == 0x000110, "Member 'GA_DoubleJump_C_ExecuteUbergraph_GA_DoubleJump::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_DoubleJump_C_ExecuteUbergraph_GA_DoubleJump, CallFunc_IsLocallyControlled_ReturnValue_1) == 0x000111, "Member 'GA_DoubleJump_C_ExecuteUbergraph_GA_DoubleJump::CallFunc_IsLocallyControlled_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_DoubleJump_C_ExecuteUbergraph_GA_DoubleJump, CallFunc_Subtract_IntInt_ReturnValue) == 0x000114, "Member 'GA_DoubleJump_C_ExecuteUbergraph_GA_DoubleJump::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_DoubleJump_C_ExecuteUbergraph_GA_DoubleJump, CallFunc_Greater_IntInt_ReturnValue) == 0x000118, "Member 'GA_DoubleJump_C_ExecuteUbergraph_GA_DoubleJump::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_DoubleJump_C_ExecuteUbergraph_GA_DoubleJump, CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1) == 0x000120, "Member 'GA_DoubleJump_C_ExecuteUbergraph_GA_DoubleJump::CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_DoubleJump_C_ExecuteUbergraph_GA_DoubleJump, K2Node_DynamicCast_As____1) == 0x000128, "Member 'GA_DoubleJump_C_ExecuteUbergraph_GA_DoubleJump::K2Node_DynamicCast_As____1' has a wrong offset!");
static_assert(offsetof(GA_DoubleJump_C_ExecuteUbergraph_GA_DoubleJump, K2Node_DynamicCast_bSuccess_1) == 0x000130, "Member 'GA_DoubleJump_C_ExecuteUbergraph_GA_DoubleJump::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GA_DoubleJump_C_ExecuteUbergraph_GA_DoubleJump, CallFunc_Add_IntInt_ReturnValue) == 0x000134, "Member 'GA_DoubleJump_C_ExecuteUbergraph_GA_DoubleJump::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function GA_DoubleJump.GA_DoubleJump_C.K2_ActivateAbilityFromEvent
// 0x00B0 (0x00B0 - 0x0000)
struct GA_DoubleJump_C_K2_ActivateAbilityFromEvent final
{
public:
	struct FGameplayEventData                     EventData;                                         // 0x0000(0x00B0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(GA_DoubleJump_C_K2_ActivateAbilityFromEvent) == 0x000008, "Wrong alignment on GA_DoubleJump_C_K2_ActivateAbilityFromEvent");
static_assert(sizeof(GA_DoubleJump_C_K2_ActivateAbilityFromEvent) == 0x0000B0, "Wrong size on GA_DoubleJump_C_K2_ActivateAbilityFromEvent");
static_assert(offsetof(GA_DoubleJump_C_K2_ActivateAbilityFromEvent, EventData) == 0x000000, "Member 'GA_DoubleJump_C_K2_ActivateAbilityFromEvent::EventData' has a wrong offset!");

// Function GA_DoubleJump.GA_DoubleJump_C.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct GA_DoubleJump_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_DoubleJump_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GA_DoubleJump_C_K2_OnEndAbility");
static_assert(sizeof(GA_DoubleJump_C_K2_OnEndAbility) == 0x000001, "Wrong size on GA_DoubleJump_C_K2_OnEndAbility");
static_assert(offsetof(GA_DoubleJump_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GA_DoubleJump_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

// Function GA_DoubleJump.GA_DoubleJump_C.OnMovementModeChanged_6F45F25043A9C81BF81F03B1AF335A6D
// 0x0002 (0x0002 - 0x0000)
struct GA_DoubleJump_C_OnMovementModeChanged_6F45F25043A9C81BF81F03B1AF335A6D final
{
public:
	EMovementMode                                 PrevMovementMode;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMovementMode                                 NewMovementMode;                                   // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_DoubleJump_C_OnMovementModeChanged_6F45F25043A9C81BF81F03B1AF335A6D) == 0x000001, "Wrong alignment on GA_DoubleJump_C_OnMovementModeChanged_6F45F25043A9C81BF81F03B1AF335A6D");
static_assert(sizeof(GA_DoubleJump_C_OnMovementModeChanged_6F45F25043A9C81BF81F03B1AF335A6D) == 0x000002, "Wrong size on GA_DoubleJump_C_OnMovementModeChanged_6F45F25043A9C81BF81F03B1AF335A6D");
static_assert(offsetof(GA_DoubleJump_C_OnMovementModeChanged_6F45F25043A9C81BF81F03B1AF335A6D, PrevMovementMode) == 0x000000, "Member 'GA_DoubleJump_C_OnMovementModeChanged_6F45F25043A9C81BF81F03B1AF335A6D::PrevMovementMode' has a wrong offset!");
static_assert(offsetof(GA_DoubleJump_C_OnMovementModeChanged_6F45F25043A9C81BF81F03B1AF335A6D, NewMovementMode) == 0x000001, "Member 'GA_DoubleJump_C_OnMovementModeChanged_6F45F25043A9C81BF81F03B1AF335A6D::NewMovementMode' has a wrong offset!");

// Function GA_DoubleJump.GA_DoubleJump_C.OnMovementModeChanged_81A53C23477AC181BC024094F1E3EEB9
// 0x0002 (0x0002 - 0x0000)
struct GA_DoubleJump_C_OnMovementModeChanged_81A53C23477AC181BC024094F1E3EEB9 final
{
public:
	EMovementMode                                 PrevMovementMode;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMovementMode                                 NewMovementMode;                                   // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_DoubleJump_C_OnMovementModeChanged_81A53C23477AC181BC024094F1E3EEB9) == 0x000001, "Wrong alignment on GA_DoubleJump_C_OnMovementModeChanged_81A53C23477AC181BC024094F1E3EEB9");
static_assert(sizeof(GA_DoubleJump_C_OnMovementModeChanged_81A53C23477AC181BC024094F1E3EEB9) == 0x000002, "Wrong size on GA_DoubleJump_C_OnMovementModeChanged_81A53C23477AC181BC024094F1E3EEB9");
static_assert(offsetof(GA_DoubleJump_C_OnMovementModeChanged_81A53C23477AC181BC024094F1E3EEB9, PrevMovementMode) == 0x000000, "Member 'GA_DoubleJump_C_OnMovementModeChanged_81A53C23477AC181BC024094F1E3EEB9::PrevMovementMode' has a wrong offset!");
static_assert(offsetof(GA_DoubleJump_C_OnMovementModeChanged_81A53C23477AC181BC024094F1E3EEB9, NewMovementMode) == 0x000001, "Member 'GA_DoubleJump_C_OnMovementModeChanged_81A53C23477AC181BC024094F1E3EEB9::NewMovementMode' has a wrong offset!");

}

