#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_ShapeShiftChicken

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GA_ShapeShiftChicken.GA_ShapeShiftChicken_C.AbilityActivated
// 0x00B0 (0x00B0 - 0x0000)
struct GA_ShapeShiftChicken_C_AbilityActivated final
{
public:
	struct FGameplayEventData                     TriggerEventData;                                  // 0x0000(0x00B0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GA_ShapeShiftChicken_C_AbilityActivated) == 0x000008, "Wrong alignment on GA_ShapeShiftChicken_C_AbilityActivated");
static_assert(sizeof(GA_ShapeShiftChicken_C_AbilityActivated) == 0x0000B0, "Wrong size on GA_ShapeShiftChicken_C_AbilityActivated");
static_assert(offsetof(GA_ShapeShiftChicken_C_AbilityActivated, TriggerEventData) == 0x000000, "Member 'GA_ShapeShiftChicken_C_AbilityActivated::TriggerEventData' has a wrong offset!");

// Function GA_ShapeShiftChicken.GA_ShapeShiftChicken_C.ExecuteUbergraph_GA_ShapeShiftChicken
// 0x0138 (0x0138 - 0x0000)
struct GA_ShapeShiftChicken_C_ExecuteUbergraph_GA_ShapeShiftChicken final
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
	uint8                                         Pad_5698[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UDCAT_WaitMovementModeChange*           CallFunc_WaitMovementModeChange_ReturnValue_1;     // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bWasCancelled;                        // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5699[0x6];                                     // 0x0042(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1; // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                             K2Node_DynamicCast_As___;                          // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_569A[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             K2Node_DynamicCast_As____1;                        // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_569B[0x3];                                     // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_569C[0x3];                                     // 0x0079(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_HasAuthority_ReturnValue;              // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_HasAuthority_ReturnValue_1;            // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_569D[0x6];                                     // 0x0082(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_Event_TriggerEventData;                     // 0x0088(0x00B0)(ConstParm)
};
static_assert(alignof(GA_ShapeShiftChicken_C_ExecuteUbergraph_GA_ShapeShiftChicken) == 0x000008, "Wrong alignment on GA_ShapeShiftChicken_C_ExecuteUbergraph_GA_ShapeShiftChicken");
static_assert(sizeof(GA_ShapeShiftChicken_C_ExecuteUbergraph_GA_ShapeShiftChicken) == 0x000138, "Wrong size on GA_ShapeShiftChicken_C_ExecuteUbergraph_GA_ShapeShiftChicken");
static_assert(offsetof(GA_ShapeShiftChicken_C_ExecuteUbergraph_GA_ShapeShiftChicken, EntryPoint) == 0x000000, "Member 'GA_ShapeShiftChicken_C_ExecuteUbergraph_GA_ShapeShiftChicken::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_ShapeShiftChicken_C_ExecuteUbergraph_GA_ShapeShiftChicken, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'GA_ShapeShiftChicken_C_ExecuteUbergraph_GA_ShapeShiftChicken::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_ShapeShiftChicken_C_ExecuteUbergraph_GA_ShapeShiftChicken, K2Node_CustomEvent_PrevMovementMode_1) == 0x000014, "Member 'GA_ShapeShiftChicken_C_ExecuteUbergraph_GA_ShapeShiftChicken::K2Node_CustomEvent_PrevMovementMode_1' has a wrong offset!");
static_assert(offsetof(GA_ShapeShiftChicken_C_ExecuteUbergraph_GA_ShapeShiftChicken, K2Node_CustomEvent_NewMovementMode_1) == 0x000015, "Member 'GA_ShapeShiftChicken_C_ExecuteUbergraph_GA_ShapeShiftChicken::K2Node_CustomEvent_NewMovementMode_1' has a wrong offset!");
static_assert(offsetof(GA_ShapeShiftChicken_C_ExecuteUbergraph_GA_ShapeShiftChicken, Temp_byte_Variable) == 0x000016, "Member 'GA_ShapeShiftChicken_C_ExecuteUbergraph_GA_ShapeShiftChicken::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(GA_ShapeShiftChicken_C_ExecuteUbergraph_GA_ShapeShiftChicken, Temp_byte_Variable_1) == 0x000017, "Member 'GA_ShapeShiftChicken_C_ExecuteUbergraph_GA_ShapeShiftChicken::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(GA_ShapeShiftChicken_C_ExecuteUbergraph_GA_ShapeShiftChicken, CallFunc_WaitMovementModeChange_ReturnValue) == 0x000018, "Member 'GA_ShapeShiftChicken_C_ExecuteUbergraph_GA_ShapeShiftChicken::CallFunc_WaitMovementModeChange_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_ShapeShiftChicken_C_ExecuteUbergraph_GA_ShapeShiftChicken, K2Node_CreateDelegate_OutputDelegate_1) == 0x000020, "Member 'GA_ShapeShiftChicken_C_ExecuteUbergraph_GA_ShapeShiftChicken::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GA_ShapeShiftChicken_C_ExecuteUbergraph_GA_ShapeShiftChicken, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'GA_ShapeShiftChicken_C_ExecuteUbergraph_GA_ShapeShiftChicken::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_ShapeShiftChicken_C_ExecuteUbergraph_GA_ShapeShiftChicken, K2Node_CustomEvent_PrevMovementMode) == 0x000031, "Member 'GA_ShapeShiftChicken_C_ExecuteUbergraph_GA_ShapeShiftChicken::K2Node_CustomEvent_PrevMovementMode' has a wrong offset!");
static_assert(offsetof(GA_ShapeShiftChicken_C_ExecuteUbergraph_GA_ShapeShiftChicken, K2Node_CustomEvent_NewMovementMode) == 0x000032, "Member 'GA_ShapeShiftChicken_C_ExecuteUbergraph_GA_ShapeShiftChicken::K2Node_CustomEvent_NewMovementMode' has a wrong offset!");
static_assert(offsetof(GA_ShapeShiftChicken_C_ExecuteUbergraph_GA_ShapeShiftChicken, Temp_byte_Variable_2) == 0x000033, "Member 'GA_ShapeShiftChicken_C_ExecuteUbergraph_GA_ShapeShiftChicken::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(GA_ShapeShiftChicken_C_ExecuteUbergraph_GA_ShapeShiftChicken, Temp_byte_Variable_3) == 0x000034, "Member 'GA_ShapeShiftChicken_C_ExecuteUbergraph_GA_ShapeShiftChicken::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(GA_ShapeShiftChicken_C_ExecuteUbergraph_GA_ShapeShiftChicken, CallFunc_WaitMovementModeChange_ReturnValue_1) == 0x000038, "Member 'GA_ShapeShiftChicken_C_ExecuteUbergraph_GA_ShapeShiftChicken::CallFunc_WaitMovementModeChange_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_ShapeShiftChicken_C_ExecuteUbergraph_GA_ShapeShiftChicken, CallFunc_IsValid_ReturnValue_1) == 0x000040, "Member 'GA_ShapeShiftChicken_C_ExecuteUbergraph_GA_ShapeShiftChicken::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_ShapeShiftChicken_C_ExecuteUbergraph_GA_ShapeShiftChicken, K2Node_Event_bWasCancelled) == 0x000041, "Member 'GA_ShapeShiftChicken_C_ExecuteUbergraph_GA_ShapeShiftChicken::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GA_ShapeShiftChicken_C_ExecuteUbergraph_GA_ShapeShiftChicken, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000048, "Member 'GA_ShapeShiftChicken_C_ExecuteUbergraph_GA_ShapeShiftChicken::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_ShapeShiftChicken_C_ExecuteUbergraph_GA_ShapeShiftChicken, CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1) == 0x000050, "Member 'GA_ShapeShiftChicken_C_ExecuteUbergraph_GA_ShapeShiftChicken::CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_ShapeShiftChicken_C_ExecuteUbergraph_GA_ShapeShiftChicken, K2Node_DynamicCast_As___) == 0x000058, "Member 'GA_ShapeShiftChicken_C_ExecuteUbergraph_GA_ShapeShiftChicken::K2Node_DynamicCast_As___' has a wrong offset!");
static_assert(offsetof(GA_ShapeShiftChicken_C_ExecuteUbergraph_GA_ShapeShiftChicken, K2Node_DynamicCast_bSuccess) == 0x000060, "Member 'GA_ShapeShiftChicken_C_ExecuteUbergraph_GA_ShapeShiftChicken::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_ShapeShiftChicken_C_ExecuteUbergraph_GA_ShapeShiftChicken, K2Node_DynamicCast_As____1) == 0x000068, "Member 'GA_ShapeShiftChicken_C_ExecuteUbergraph_GA_ShapeShiftChicken::K2Node_DynamicCast_As____1' has a wrong offset!");
static_assert(offsetof(GA_ShapeShiftChicken_C_ExecuteUbergraph_GA_ShapeShiftChicken, K2Node_DynamicCast_bSuccess_1) == 0x000070, "Member 'GA_ShapeShiftChicken_C_ExecuteUbergraph_GA_ShapeShiftChicken::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GA_ShapeShiftChicken_C_ExecuteUbergraph_GA_ShapeShiftChicken, CallFunc_Subtract_IntInt_ReturnValue) == 0x000074, "Member 'GA_ShapeShiftChicken_C_ExecuteUbergraph_GA_ShapeShiftChicken::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_ShapeShiftChicken_C_ExecuteUbergraph_GA_ShapeShiftChicken, CallFunc_Greater_IntInt_ReturnValue) == 0x000078, "Member 'GA_ShapeShiftChicken_C_ExecuteUbergraph_GA_ShapeShiftChicken::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_ShapeShiftChicken_C_ExecuteUbergraph_GA_ShapeShiftChicken, CallFunc_Add_IntInt_ReturnValue) == 0x00007C, "Member 'GA_ShapeShiftChicken_C_ExecuteUbergraph_GA_ShapeShiftChicken::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_ShapeShiftChicken_C_ExecuteUbergraph_GA_ShapeShiftChicken, CallFunc_K2_HasAuthority_ReturnValue) == 0x000080, "Member 'GA_ShapeShiftChicken_C_ExecuteUbergraph_GA_ShapeShiftChicken::CallFunc_K2_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_ShapeShiftChicken_C_ExecuteUbergraph_GA_ShapeShiftChicken, CallFunc_K2_HasAuthority_ReturnValue_1) == 0x000081, "Member 'GA_ShapeShiftChicken_C_ExecuteUbergraph_GA_ShapeShiftChicken::CallFunc_K2_HasAuthority_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_ShapeShiftChicken_C_ExecuteUbergraph_GA_ShapeShiftChicken, K2Node_Event_TriggerEventData) == 0x000088, "Member 'GA_ShapeShiftChicken_C_ExecuteUbergraph_GA_ShapeShiftChicken::K2Node_Event_TriggerEventData' has a wrong offset!");

// Function GA_ShapeShiftChicken.GA_ShapeShiftChicken_C.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct GA_ShapeShiftChicken_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_ShapeShiftChicken_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GA_ShapeShiftChicken_C_K2_OnEndAbility");
static_assert(sizeof(GA_ShapeShiftChicken_C_K2_OnEndAbility) == 0x000001, "Wrong size on GA_ShapeShiftChicken_C_K2_OnEndAbility");
static_assert(offsetof(GA_ShapeShiftChicken_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GA_ShapeShiftChicken_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

// Function GA_ShapeShiftChicken.GA_ShapeShiftChicken_C.OnMovementModeChanged_29B2943E4003654706CBCFAD0742C66C
// 0x0002 (0x0002 - 0x0000)
struct GA_ShapeShiftChicken_C_OnMovementModeChanged_29B2943E4003654706CBCFAD0742C66C final
{
public:
	EMovementMode                                 PrevMovementMode;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMovementMode                                 NewMovementMode;                                   // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_ShapeShiftChicken_C_OnMovementModeChanged_29B2943E4003654706CBCFAD0742C66C) == 0x000001, "Wrong alignment on GA_ShapeShiftChicken_C_OnMovementModeChanged_29B2943E4003654706CBCFAD0742C66C");
static_assert(sizeof(GA_ShapeShiftChicken_C_OnMovementModeChanged_29B2943E4003654706CBCFAD0742C66C) == 0x000002, "Wrong size on GA_ShapeShiftChicken_C_OnMovementModeChanged_29B2943E4003654706CBCFAD0742C66C");
static_assert(offsetof(GA_ShapeShiftChicken_C_OnMovementModeChanged_29B2943E4003654706CBCFAD0742C66C, PrevMovementMode) == 0x000000, "Member 'GA_ShapeShiftChicken_C_OnMovementModeChanged_29B2943E4003654706CBCFAD0742C66C::PrevMovementMode' has a wrong offset!");
static_assert(offsetof(GA_ShapeShiftChicken_C_OnMovementModeChanged_29B2943E4003654706CBCFAD0742C66C, NewMovementMode) == 0x000001, "Member 'GA_ShapeShiftChicken_C_OnMovementModeChanged_29B2943E4003654706CBCFAD0742C66C::NewMovementMode' has a wrong offset!");

// Function GA_ShapeShiftChicken.GA_ShapeShiftChicken_C.OnMovementModeChanged_999CA5C04C3776C3AFB15EADE1F37480
// 0x0002 (0x0002 - 0x0000)
struct GA_ShapeShiftChicken_C_OnMovementModeChanged_999CA5C04C3776C3AFB15EADE1F37480 final
{
public:
	EMovementMode                                 PrevMovementMode;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMovementMode                                 NewMovementMode;                                   // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_ShapeShiftChicken_C_OnMovementModeChanged_999CA5C04C3776C3AFB15EADE1F37480) == 0x000001, "Wrong alignment on GA_ShapeShiftChicken_C_OnMovementModeChanged_999CA5C04C3776C3AFB15EADE1F37480");
static_assert(sizeof(GA_ShapeShiftChicken_C_OnMovementModeChanged_999CA5C04C3776C3AFB15EADE1F37480) == 0x000002, "Wrong size on GA_ShapeShiftChicken_C_OnMovementModeChanged_999CA5C04C3776C3AFB15EADE1F37480");
static_assert(offsetof(GA_ShapeShiftChicken_C_OnMovementModeChanged_999CA5C04C3776C3AFB15EADE1F37480, PrevMovementMode) == 0x000000, "Member 'GA_ShapeShiftChicken_C_OnMovementModeChanged_999CA5C04C3776C3AFB15EADE1F37480::PrevMovementMode' has a wrong offset!");
static_assert(offsetof(GA_ShapeShiftChicken_C_OnMovementModeChanged_999CA5C04C3776C3AFB15EADE1F37480, NewMovementMode) == 0x000001, "Member 'GA_ShapeShiftChicken_C_OnMovementModeChanged_999CA5C04C3776C3AFB15EADE1F37480::NewMovementMode' has a wrong offset!");

}

