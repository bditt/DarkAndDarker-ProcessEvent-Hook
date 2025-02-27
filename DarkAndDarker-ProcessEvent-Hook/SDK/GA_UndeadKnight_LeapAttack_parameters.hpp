#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_UndeadKnight_LeapAttack

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function GA_UndeadKnight_LeapAttack.GA_UndeadKnight_LeapAttack_C.AbilityActivated
// 0x00B0 (0x00B0 - 0x0000)
struct GA_UndeadKnight_LeapAttack_C_AbilityActivated final
{
public:
	struct FGameplayEventData                     TriggerEventData;                                  // 0x0000(0x00B0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GA_UndeadKnight_LeapAttack_C_AbilityActivated) == 0x000008, "Wrong alignment on GA_UndeadKnight_LeapAttack_C_AbilityActivated");
static_assert(sizeof(GA_UndeadKnight_LeapAttack_C_AbilityActivated) == 0x0000B0, "Wrong size on GA_UndeadKnight_LeapAttack_C_AbilityActivated");
static_assert(offsetof(GA_UndeadKnight_LeapAttack_C_AbilityActivated, TriggerEventData) == 0x000000, "Member 'GA_UndeadKnight_LeapAttack_C_AbilityActivated::TriggerEventData' has a wrong offset!");

// Function GA_UndeadKnight_LeapAttack.GA_UndeadKnight_LeapAttack_C.EventReceived_72C25031498FC089C1AC9D9A4F6521BD
// 0x00B8 (0x00B8 - 0x0000)
struct GA_UndeadKnight_LeapAttack_C_EventReceived_72C25031498FC089C1AC9D9A4F6521BD final
{
public:
	struct FGameplayTag                           EventTag;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     EventData;                                         // 0x0008(0x00B0)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GA_UndeadKnight_LeapAttack_C_EventReceived_72C25031498FC089C1AC9D9A4F6521BD) == 0x000008, "Wrong alignment on GA_UndeadKnight_LeapAttack_C_EventReceived_72C25031498FC089C1AC9D9A4F6521BD");
static_assert(sizeof(GA_UndeadKnight_LeapAttack_C_EventReceived_72C25031498FC089C1AC9D9A4F6521BD) == 0x0000B8, "Wrong size on GA_UndeadKnight_LeapAttack_C_EventReceived_72C25031498FC089C1AC9D9A4F6521BD");
static_assert(offsetof(GA_UndeadKnight_LeapAttack_C_EventReceived_72C25031498FC089C1AC9D9A4F6521BD, EventTag) == 0x000000, "Member 'GA_UndeadKnight_LeapAttack_C_EventReceived_72C25031498FC089C1AC9D9A4F6521BD::EventTag' has a wrong offset!");
static_assert(offsetof(GA_UndeadKnight_LeapAttack_C_EventReceived_72C25031498FC089C1AC9D9A4F6521BD, EventData) == 0x000008, "Member 'GA_UndeadKnight_LeapAttack_C_EventReceived_72C25031498FC089C1AC9D9A4F6521BD::EventData' has a wrong offset!");

// Function GA_UndeadKnight_LeapAttack.GA_UndeadKnight_LeapAttack_C.ExecuteUbergraph_GA_UndeadKnight_LeapAttack
// 0x0320 (0x0320 - 0x0000)
struct GA_UndeadKnight_LeapAttack_C_ExecuteUbergraph_GA_UndeadKnight_LeapAttack final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           Temp_struct_Variable;                              // 0x0004(0x0008)(NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F71[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UDCAT_WaitForGameplayEvents*            CallFunc_WaitForGameplayEvents_ReturnValue;        // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F72[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EMovementMode NewMovementMode)> K2Node_CreateDelegate_OutputDelegate;              // 0x001C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EMovementMode                                 K2Node_CustomEvent_NewMovementMode;                // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMovementMode                                 Temp_byte_Variable;                                // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F73[0x2];                                     // 0x002E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilityTask_WaitMovementModeChange*    CallFunc_CreateWaitMovementModeChange_ReturnValue; // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F74[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ADCCharacterBase*                       K2Node_DynamicCast_AsDCCharacter_Base;             // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F75[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_Event_TriggerEventData;                     // 0x0058(0x00B0)(ConstParm)
	class ADCCharacterBase*                       K2Node_DynamicCast_AsDCCharacter_Base_1;           // 0x0108(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F76[0x3];                                     // 0x0111(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetDistanceTo_ReturnValue;                // 0x0114(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F77[0x3];                                     // 0x0119(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetDistanceTo_ReturnValue_1;              // 0x011C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue_1;     // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F78[0x3];                                     // 0x0121(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetDistanceTo_ReturnValue_2;              // 0x0124(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           K2Node_CustomEvent_EventTag;                       // 0x0128(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     K2Node_CustomEvent_EventData;                      // 0x0130(0x00B0)()
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue_2;     // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F79[0x3];                                     // 0x01E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetDistanceTo_ReturnValue_3;              // 0x01E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue_3;     // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F7A[0x3];                                     // 0x01E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetDistanceTo_ReturnValue_4;              // 0x01EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue_4;     // 0x01F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F7B[0x3];                                     // 0x01F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x01F4(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetDistanceTo_ReturnValue_5;              // 0x0204(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue_5;     // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F7C[0x7];                                     // 0x0209(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     Temp_struct_Variable_1;                            // 0x0210(0x00B0)()
	double                                        CallFunc_Conv_IntToDouble_ReturnValue;             // 0x02C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x02C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x02D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x02D8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;    // 0x02F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_1;  // 0x02F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_2;  // 0x0300(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_3;  // 0x0308(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_4;  // 0x0310(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_5;  // 0x0318(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_UndeadKnight_LeapAttack_C_ExecuteUbergraph_GA_UndeadKnight_LeapAttack) == 0x000008, "Wrong alignment on GA_UndeadKnight_LeapAttack_C_ExecuteUbergraph_GA_UndeadKnight_LeapAttack");
static_assert(sizeof(GA_UndeadKnight_LeapAttack_C_ExecuteUbergraph_GA_UndeadKnight_LeapAttack) == 0x000320, "Wrong size on GA_UndeadKnight_LeapAttack_C_ExecuteUbergraph_GA_UndeadKnight_LeapAttack");
static_assert(offsetof(GA_UndeadKnight_LeapAttack_C_ExecuteUbergraph_GA_UndeadKnight_LeapAttack, EntryPoint) == 0x000000, "Member 'GA_UndeadKnight_LeapAttack_C_ExecuteUbergraph_GA_UndeadKnight_LeapAttack::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_UndeadKnight_LeapAttack_C_ExecuteUbergraph_GA_UndeadKnight_LeapAttack, Temp_struct_Variable) == 0x000004, "Member 'GA_UndeadKnight_LeapAttack_C_ExecuteUbergraph_GA_UndeadKnight_LeapAttack::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GA_UndeadKnight_LeapAttack_C_ExecuteUbergraph_GA_UndeadKnight_LeapAttack, CallFunc_WaitForGameplayEvents_ReturnValue) == 0x000010, "Member 'GA_UndeadKnight_LeapAttack_C_ExecuteUbergraph_GA_UndeadKnight_LeapAttack::CallFunc_WaitForGameplayEvents_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_UndeadKnight_LeapAttack_C_ExecuteUbergraph_GA_UndeadKnight_LeapAttack, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'GA_UndeadKnight_LeapAttack_C_ExecuteUbergraph_GA_UndeadKnight_LeapAttack::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_UndeadKnight_LeapAttack_C_ExecuteUbergraph_GA_UndeadKnight_LeapAttack, K2Node_CreateDelegate_OutputDelegate) == 0x00001C, "Member 'GA_UndeadKnight_LeapAttack_C_ExecuteUbergraph_GA_UndeadKnight_LeapAttack::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_UndeadKnight_LeapAttack_C_ExecuteUbergraph_GA_UndeadKnight_LeapAttack, K2Node_CustomEvent_NewMovementMode) == 0x00002C, "Member 'GA_UndeadKnight_LeapAttack_C_ExecuteUbergraph_GA_UndeadKnight_LeapAttack::K2Node_CustomEvent_NewMovementMode' has a wrong offset!");
static_assert(offsetof(GA_UndeadKnight_LeapAttack_C_ExecuteUbergraph_GA_UndeadKnight_LeapAttack, Temp_byte_Variable) == 0x00002D, "Member 'GA_UndeadKnight_LeapAttack_C_ExecuteUbergraph_GA_UndeadKnight_LeapAttack::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(GA_UndeadKnight_LeapAttack_C_ExecuteUbergraph_GA_UndeadKnight_LeapAttack, CallFunc_CreateWaitMovementModeChange_ReturnValue) == 0x000030, "Member 'GA_UndeadKnight_LeapAttack_C_ExecuteUbergraph_GA_UndeadKnight_LeapAttack::CallFunc_CreateWaitMovementModeChange_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_UndeadKnight_LeapAttack_C_ExecuteUbergraph_GA_UndeadKnight_LeapAttack, CallFunc_IsValid_ReturnValue_1) == 0x000038, "Member 'GA_UndeadKnight_LeapAttack_C_ExecuteUbergraph_GA_UndeadKnight_LeapAttack::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_UndeadKnight_LeapAttack_C_ExecuteUbergraph_GA_UndeadKnight_LeapAttack, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000040, "Member 'GA_UndeadKnight_LeapAttack_C_ExecuteUbergraph_GA_UndeadKnight_LeapAttack::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_UndeadKnight_LeapAttack_C_ExecuteUbergraph_GA_UndeadKnight_LeapAttack, K2Node_DynamicCast_AsDCCharacter_Base) == 0x000048, "Member 'GA_UndeadKnight_LeapAttack_C_ExecuteUbergraph_GA_UndeadKnight_LeapAttack::K2Node_DynamicCast_AsDCCharacter_Base' has a wrong offset!");
static_assert(offsetof(GA_UndeadKnight_LeapAttack_C_ExecuteUbergraph_GA_UndeadKnight_LeapAttack, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'GA_UndeadKnight_LeapAttack_C_ExecuteUbergraph_GA_UndeadKnight_LeapAttack::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_UndeadKnight_LeapAttack_C_ExecuteUbergraph_GA_UndeadKnight_LeapAttack, K2Node_Event_TriggerEventData) == 0x000058, "Member 'GA_UndeadKnight_LeapAttack_C_ExecuteUbergraph_GA_UndeadKnight_LeapAttack::K2Node_Event_TriggerEventData' has a wrong offset!");
static_assert(offsetof(GA_UndeadKnight_LeapAttack_C_ExecuteUbergraph_GA_UndeadKnight_LeapAttack, K2Node_DynamicCast_AsDCCharacter_Base_1) == 0x000108, "Member 'GA_UndeadKnight_LeapAttack_C_ExecuteUbergraph_GA_UndeadKnight_LeapAttack::K2Node_DynamicCast_AsDCCharacter_Base_1' has a wrong offset!");
static_assert(offsetof(GA_UndeadKnight_LeapAttack_C_ExecuteUbergraph_GA_UndeadKnight_LeapAttack, K2Node_DynamicCast_bSuccess_1) == 0x000110, "Member 'GA_UndeadKnight_LeapAttack_C_ExecuteUbergraph_GA_UndeadKnight_LeapAttack::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GA_UndeadKnight_LeapAttack_C_ExecuteUbergraph_GA_UndeadKnight_LeapAttack, CallFunc_GetDistanceTo_ReturnValue) == 0x000114, "Member 'GA_UndeadKnight_LeapAttack_C_ExecuteUbergraph_GA_UndeadKnight_LeapAttack::CallFunc_GetDistanceTo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_UndeadKnight_LeapAttack_C_ExecuteUbergraph_GA_UndeadKnight_LeapAttack, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x000118, "Member 'GA_UndeadKnight_LeapAttack_C_ExecuteUbergraph_GA_UndeadKnight_LeapAttack::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_UndeadKnight_LeapAttack_C_ExecuteUbergraph_GA_UndeadKnight_LeapAttack, CallFunc_GetDistanceTo_ReturnValue_1) == 0x00011C, "Member 'GA_UndeadKnight_LeapAttack_C_ExecuteUbergraph_GA_UndeadKnight_LeapAttack::CallFunc_GetDistanceTo_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_UndeadKnight_LeapAttack_C_ExecuteUbergraph_GA_UndeadKnight_LeapAttack, CallFunc_LessEqual_DoubleDouble_ReturnValue_1) == 0x000120, "Member 'GA_UndeadKnight_LeapAttack_C_ExecuteUbergraph_GA_UndeadKnight_LeapAttack::CallFunc_LessEqual_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_UndeadKnight_LeapAttack_C_ExecuteUbergraph_GA_UndeadKnight_LeapAttack, CallFunc_GetDistanceTo_ReturnValue_2) == 0x000124, "Member 'GA_UndeadKnight_LeapAttack_C_ExecuteUbergraph_GA_UndeadKnight_LeapAttack::CallFunc_GetDistanceTo_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_UndeadKnight_LeapAttack_C_ExecuteUbergraph_GA_UndeadKnight_LeapAttack, K2Node_CustomEvent_EventTag) == 0x000128, "Member 'GA_UndeadKnight_LeapAttack_C_ExecuteUbergraph_GA_UndeadKnight_LeapAttack::K2Node_CustomEvent_EventTag' has a wrong offset!");
static_assert(offsetof(GA_UndeadKnight_LeapAttack_C_ExecuteUbergraph_GA_UndeadKnight_LeapAttack, K2Node_CustomEvent_EventData) == 0x000130, "Member 'GA_UndeadKnight_LeapAttack_C_ExecuteUbergraph_GA_UndeadKnight_LeapAttack::K2Node_CustomEvent_EventData' has a wrong offset!");
static_assert(offsetof(GA_UndeadKnight_LeapAttack_C_ExecuteUbergraph_GA_UndeadKnight_LeapAttack, CallFunc_LessEqual_DoubleDouble_ReturnValue_2) == 0x0001E0, "Member 'GA_UndeadKnight_LeapAttack_C_ExecuteUbergraph_GA_UndeadKnight_LeapAttack::CallFunc_LessEqual_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_UndeadKnight_LeapAttack_C_ExecuteUbergraph_GA_UndeadKnight_LeapAttack, CallFunc_GetDistanceTo_ReturnValue_3) == 0x0001E4, "Member 'GA_UndeadKnight_LeapAttack_C_ExecuteUbergraph_GA_UndeadKnight_LeapAttack::CallFunc_GetDistanceTo_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GA_UndeadKnight_LeapAttack_C_ExecuteUbergraph_GA_UndeadKnight_LeapAttack, CallFunc_LessEqual_DoubleDouble_ReturnValue_3) == 0x0001E8, "Member 'GA_UndeadKnight_LeapAttack_C_ExecuteUbergraph_GA_UndeadKnight_LeapAttack::CallFunc_LessEqual_DoubleDouble_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GA_UndeadKnight_LeapAttack_C_ExecuteUbergraph_GA_UndeadKnight_LeapAttack, CallFunc_GetDistanceTo_ReturnValue_4) == 0x0001EC, "Member 'GA_UndeadKnight_LeapAttack_C_ExecuteUbergraph_GA_UndeadKnight_LeapAttack::CallFunc_GetDistanceTo_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GA_UndeadKnight_LeapAttack_C_ExecuteUbergraph_GA_UndeadKnight_LeapAttack, CallFunc_LessEqual_DoubleDouble_ReturnValue_4) == 0x0001F0, "Member 'GA_UndeadKnight_LeapAttack_C_ExecuteUbergraph_GA_UndeadKnight_LeapAttack::CallFunc_LessEqual_DoubleDouble_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GA_UndeadKnight_LeapAttack_C_ExecuteUbergraph_GA_UndeadKnight_LeapAttack, K2Node_CreateDelegate_OutputDelegate_1) == 0x0001F4, "Member 'GA_UndeadKnight_LeapAttack_C_ExecuteUbergraph_GA_UndeadKnight_LeapAttack::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GA_UndeadKnight_LeapAttack_C_ExecuteUbergraph_GA_UndeadKnight_LeapAttack, CallFunc_GetDistanceTo_ReturnValue_5) == 0x000204, "Member 'GA_UndeadKnight_LeapAttack_C_ExecuteUbergraph_GA_UndeadKnight_LeapAttack::CallFunc_GetDistanceTo_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(GA_UndeadKnight_LeapAttack_C_ExecuteUbergraph_GA_UndeadKnight_LeapAttack, CallFunc_LessEqual_DoubleDouble_ReturnValue_5) == 0x000208, "Member 'GA_UndeadKnight_LeapAttack_C_ExecuteUbergraph_GA_UndeadKnight_LeapAttack::CallFunc_LessEqual_DoubleDouble_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(GA_UndeadKnight_LeapAttack_C_ExecuteUbergraph_GA_UndeadKnight_LeapAttack, Temp_struct_Variable_1) == 0x000210, "Member 'GA_UndeadKnight_LeapAttack_C_ExecuteUbergraph_GA_UndeadKnight_LeapAttack::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(GA_UndeadKnight_LeapAttack_C_ExecuteUbergraph_GA_UndeadKnight_LeapAttack, CallFunc_Conv_IntToDouble_ReturnValue) == 0x0002C0, "Member 'GA_UndeadKnight_LeapAttack_C_ExecuteUbergraph_GA_UndeadKnight_LeapAttack::CallFunc_Conv_IntToDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_UndeadKnight_LeapAttack_C_ExecuteUbergraph_GA_UndeadKnight_LeapAttack, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x0002C8, "Member 'GA_UndeadKnight_LeapAttack_C_ExecuteUbergraph_GA_UndeadKnight_LeapAttack::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_UndeadKnight_LeapAttack_C_ExecuteUbergraph_GA_UndeadKnight_LeapAttack, CallFunc_Add_DoubleDouble_ReturnValue) == 0x0002D0, "Member 'GA_UndeadKnight_LeapAttack_C_ExecuteUbergraph_GA_UndeadKnight_LeapAttack::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_UndeadKnight_LeapAttack_C_ExecuteUbergraph_GA_UndeadKnight_LeapAttack, CallFunc_MakeVector_ReturnValue) == 0x0002D8, "Member 'GA_UndeadKnight_LeapAttack_C_ExecuteUbergraph_GA_UndeadKnight_LeapAttack::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_UndeadKnight_LeapAttack_C_ExecuteUbergraph_GA_UndeadKnight_LeapAttack, CallFunc_LessEqual_DoubleDouble_A_ImplicitCast) == 0x0002F0, "Member 'GA_UndeadKnight_LeapAttack_C_ExecuteUbergraph_GA_UndeadKnight_LeapAttack::CallFunc_LessEqual_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GA_UndeadKnight_LeapAttack_C_ExecuteUbergraph_GA_UndeadKnight_LeapAttack, CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_1) == 0x0002F8, "Member 'GA_UndeadKnight_LeapAttack_C_ExecuteUbergraph_GA_UndeadKnight_LeapAttack::CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(GA_UndeadKnight_LeapAttack_C_ExecuteUbergraph_GA_UndeadKnight_LeapAttack, CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_2) == 0x000300, "Member 'GA_UndeadKnight_LeapAttack_C_ExecuteUbergraph_GA_UndeadKnight_LeapAttack::CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_2' has a wrong offset!");
static_assert(offsetof(GA_UndeadKnight_LeapAttack_C_ExecuteUbergraph_GA_UndeadKnight_LeapAttack, CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_3) == 0x000308, "Member 'GA_UndeadKnight_LeapAttack_C_ExecuteUbergraph_GA_UndeadKnight_LeapAttack::CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_3' has a wrong offset!");
static_assert(offsetof(GA_UndeadKnight_LeapAttack_C_ExecuteUbergraph_GA_UndeadKnight_LeapAttack, CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_4) == 0x000310, "Member 'GA_UndeadKnight_LeapAttack_C_ExecuteUbergraph_GA_UndeadKnight_LeapAttack::CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_4' has a wrong offset!");
static_assert(offsetof(GA_UndeadKnight_LeapAttack_C_ExecuteUbergraph_GA_UndeadKnight_LeapAttack, CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_5) == 0x000318, "Member 'GA_UndeadKnight_LeapAttack_C_ExecuteUbergraph_GA_UndeadKnight_LeapAttack::CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_5' has a wrong offset!");

// Function GA_UndeadKnight_LeapAttack.GA_UndeadKnight_LeapAttack_C.OnChange_7D22AAB54594BBCBA38D60B6F1252082
// 0x0001 (0x0001 - 0x0000)
struct GA_UndeadKnight_LeapAttack_C_OnChange_7D22AAB54594BBCBA38D60B6F1252082 final
{
public:
	EMovementMode                                 NewMovementMode;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_UndeadKnight_LeapAttack_C_OnChange_7D22AAB54594BBCBA38D60B6F1252082) == 0x000001, "Wrong alignment on GA_UndeadKnight_LeapAttack_C_OnChange_7D22AAB54594BBCBA38D60B6F1252082");
static_assert(sizeof(GA_UndeadKnight_LeapAttack_C_OnChange_7D22AAB54594BBCBA38D60B6F1252082) == 0x000001, "Wrong size on GA_UndeadKnight_LeapAttack_C_OnChange_7D22AAB54594BBCBA38D60B6F1252082");
static_assert(offsetof(GA_UndeadKnight_LeapAttack_C_OnChange_7D22AAB54594BBCBA38D60B6F1252082, NewMovementMode) == 0x000000, "Member 'GA_UndeadKnight_LeapAttack_C_OnChange_7D22AAB54594BBCBA38D60B6F1252082::NewMovementMode' has a wrong offset!");

}

