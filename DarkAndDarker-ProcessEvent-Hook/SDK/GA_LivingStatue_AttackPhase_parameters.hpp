#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_LivingStatue_AttackPhase

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GA_LivingStatue_AttackPhase.GA_LivingStatue_AttackPhase_C.AbilityActivated
// 0x00B0 (0x00B0 - 0x0000)
struct GA_LivingStatue_AttackPhase_C_AbilityActivated final
{
public:
	struct FGameplayEventData                     TriggerEventData;                                  // 0x0000(0x00B0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GA_LivingStatue_AttackPhase_C_AbilityActivated) == 0x000008, "Wrong alignment on GA_LivingStatue_AttackPhase_C_AbilityActivated");
static_assert(sizeof(GA_LivingStatue_AttackPhase_C_AbilityActivated) == 0x0000B0, "Wrong size on GA_LivingStatue_AttackPhase_C_AbilityActivated");
static_assert(offsetof(GA_LivingStatue_AttackPhase_C_AbilityActivated, TriggerEventData) == 0x000000, "Member 'GA_LivingStatue_AttackPhase_C_AbilityActivated::TriggerEventData' has a wrong offset!");

// Function GA_LivingStatue_AttackPhase.GA_LivingStatue_AttackPhase_C.EventReceived_805E085F4F1B5723369105A0F8D9B70D
// 0x00B8 (0x00B8 - 0x0000)
struct GA_LivingStatue_AttackPhase_C_EventReceived_805E085F4F1B5723369105A0F8D9B70D final
{
public:
	struct FGameplayTag                           EventTag;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     EventData;                                         // 0x0008(0x00B0)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GA_LivingStatue_AttackPhase_C_EventReceived_805E085F4F1B5723369105A0F8D9B70D) == 0x000008, "Wrong alignment on GA_LivingStatue_AttackPhase_C_EventReceived_805E085F4F1B5723369105A0F8D9B70D");
static_assert(sizeof(GA_LivingStatue_AttackPhase_C_EventReceived_805E085F4F1B5723369105A0F8D9B70D) == 0x0000B8, "Wrong size on GA_LivingStatue_AttackPhase_C_EventReceived_805E085F4F1B5723369105A0F8D9B70D");
static_assert(offsetof(GA_LivingStatue_AttackPhase_C_EventReceived_805E085F4F1B5723369105A0F8D9B70D, EventTag) == 0x000000, "Member 'GA_LivingStatue_AttackPhase_C_EventReceived_805E085F4F1B5723369105A0F8D9B70D::EventTag' has a wrong offset!");
static_assert(offsetof(GA_LivingStatue_AttackPhase_C_EventReceived_805E085F4F1B5723369105A0F8D9B70D, EventData) == 0x000008, "Member 'GA_LivingStatue_AttackPhase_C_EventReceived_805E085F4F1B5723369105A0F8D9B70D::EventData' has a wrong offset!");

// Function GA_LivingStatue_AttackPhase.GA_LivingStatue_AttackPhase_C.ExecuteUbergraph_GA_LivingStatue_AttackPhase
// 0x02D8 (0x02D8 - 0x0000)
struct GA_LivingStatue_AttackPhase_C_ExecuteUbergraph_GA_LivingStatue_AttackPhase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bWasCancelled;                        // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40FB[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           K2Node_CustomEvent_EventTag;                       // 0x0018(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     K2Node_CustomEvent_EventData;                      // 0x0020(0x00B0)()
	struct FGameplayEventData                     Temp_struct_Variable;                              // 0x00D0(0x00B0)()
	struct FGameplayTag                           Temp_struct_Variable_1;                            // 0x0180(0x0008)(NoDestructor, HasGetValueTypeHash)
	class UDCAT_WaitForGameplayEvents*            CallFunc_WaitForGameplayEvents_ReturnValue;        // 0x0188(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40FC[0x7];                                     // 0x0191(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_Event_TriggerEventData;                     // 0x0198(0x00B0)(ConstParm)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0248(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasMatchingGameplayTag_ReturnValue;       // 0x0260(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0261(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40FD[0x6];                                     // 0x0262(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x0268(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_LivingStatue_C*                     K2Node_DynamicCast_AsBP_Living_Statue;             // 0x0270(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0278(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40FE[0x7];                                     // 0x0279(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0280(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0298(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Vector_Distance_ReturnValue;              // 0x02B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Vector_Distance_ReturnValue_1;            // 0x02B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x02C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x02C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x02C2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40FF[0x5];                                     // 0x02C3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_RandomFloatInRange_ReturnValue;           // 0x02C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x02D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x02D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x02D2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_LivingStatue_AttackPhase_C_ExecuteUbergraph_GA_LivingStatue_AttackPhase) == 0x000008, "Wrong alignment on GA_LivingStatue_AttackPhase_C_ExecuteUbergraph_GA_LivingStatue_AttackPhase");
static_assert(sizeof(GA_LivingStatue_AttackPhase_C_ExecuteUbergraph_GA_LivingStatue_AttackPhase) == 0x0002D8, "Wrong size on GA_LivingStatue_AttackPhase_C_ExecuteUbergraph_GA_LivingStatue_AttackPhase");
static_assert(offsetof(GA_LivingStatue_AttackPhase_C_ExecuteUbergraph_GA_LivingStatue_AttackPhase, EntryPoint) == 0x000000, "Member 'GA_LivingStatue_AttackPhase_C_ExecuteUbergraph_GA_LivingStatue_AttackPhase::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_LivingStatue_AttackPhase_C_ExecuteUbergraph_GA_LivingStatue_AttackPhase, K2Node_Event_bWasCancelled) == 0x000004, "Member 'GA_LivingStatue_AttackPhase_C_ExecuteUbergraph_GA_LivingStatue_AttackPhase::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GA_LivingStatue_AttackPhase_C_ExecuteUbergraph_GA_LivingStatue_AttackPhase, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'GA_LivingStatue_AttackPhase_C_ExecuteUbergraph_GA_LivingStatue_AttackPhase::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_LivingStatue_AttackPhase_C_ExecuteUbergraph_GA_LivingStatue_AttackPhase, K2Node_CustomEvent_EventTag) == 0x000018, "Member 'GA_LivingStatue_AttackPhase_C_ExecuteUbergraph_GA_LivingStatue_AttackPhase::K2Node_CustomEvent_EventTag' has a wrong offset!");
static_assert(offsetof(GA_LivingStatue_AttackPhase_C_ExecuteUbergraph_GA_LivingStatue_AttackPhase, K2Node_CustomEvent_EventData) == 0x000020, "Member 'GA_LivingStatue_AttackPhase_C_ExecuteUbergraph_GA_LivingStatue_AttackPhase::K2Node_CustomEvent_EventData' has a wrong offset!");
static_assert(offsetof(GA_LivingStatue_AttackPhase_C_ExecuteUbergraph_GA_LivingStatue_AttackPhase, Temp_struct_Variable) == 0x0000D0, "Member 'GA_LivingStatue_AttackPhase_C_ExecuteUbergraph_GA_LivingStatue_AttackPhase::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GA_LivingStatue_AttackPhase_C_ExecuteUbergraph_GA_LivingStatue_AttackPhase, Temp_struct_Variable_1) == 0x000180, "Member 'GA_LivingStatue_AttackPhase_C_ExecuteUbergraph_GA_LivingStatue_AttackPhase::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(GA_LivingStatue_AttackPhase_C_ExecuteUbergraph_GA_LivingStatue_AttackPhase, CallFunc_WaitForGameplayEvents_ReturnValue) == 0x000188, "Member 'GA_LivingStatue_AttackPhase_C_ExecuteUbergraph_GA_LivingStatue_AttackPhase::CallFunc_WaitForGameplayEvents_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_LivingStatue_AttackPhase_C_ExecuteUbergraph_GA_LivingStatue_AttackPhase, CallFunc_IsValid_ReturnValue) == 0x000190, "Member 'GA_LivingStatue_AttackPhase_C_ExecuteUbergraph_GA_LivingStatue_AttackPhase::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_LivingStatue_AttackPhase_C_ExecuteUbergraph_GA_LivingStatue_AttackPhase, K2Node_Event_TriggerEventData) == 0x000198, "Member 'GA_LivingStatue_AttackPhase_C_ExecuteUbergraph_GA_LivingStatue_AttackPhase::K2Node_Event_TriggerEventData' has a wrong offset!");
static_assert(offsetof(GA_LivingStatue_AttackPhase_C_ExecuteUbergraph_GA_LivingStatue_AttackPhase, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000248, "Member 'GA_LivingStatue_AttackPhase_C_ExecuteUbergraph_GA_LivingStatue_AttackPhase::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_LivingStatue_AttackPhase_C_ExecuteUbergraph_GA_LivingStatue_AttackPhase, CallFunc_HasMatchingGameplayTag_ReturnValue) == 0x000260, "Member 'GA_LivingStatue_AttackPhase_C_ExecuteUbergraph_GA_LivingStatue_AttackPhase::CallFunc_HasMatchingGameplayTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_LivingStatue_AttackPhase_C_ExecuteUbergraph_GA_LivingStatue_AttackPhase, CallFunc_Not_PreBool_ReturnValue) == 0x000261, "Member 'GA_LivingStatue_AttackPhase_C_ExecuteUbergraph_GA_LivingStatue_AttackPhase::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_LivingStatue_AttackPhase_C_ExecuteUbergraph_GA_LivingStatue_AttackPhase, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000268, "Member 'GA_LivingStatue_AttackPhase_C_ExecuteUbergraph_GA_LivingStatue_AttackPhase::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_LivingStatue_AttackPhase_C_ExecuteUbergraph_GA_LivingStatue_AttackPhase, K2Node_DynamicCast_AsBP_Living_Statue) == 0x000270, "Member 'GA_LivingStatue_AttackPhase_C_ExecuteUbergraph_GA_LivingStatue_AttackPhase::K2Node_DynamicCast_AsBP_Living_Statue' has a wrong offset!");
static_assert(offsetof(GA_LivingStatue_AttackPhase_C_ExecuteUbergraph_GA_LivingStatue_AttackPhase, K2Node_DynamicCast_bSuccess) == 0x000278, "Member 'GA_LivingStatue_AttackPhase_C_ExecuteUbergraph_GA_LivingStatue_AttackPhase::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_LivingStatue_AttackPhase_C_ExecuteUbergraph_GA_LivingStatue_AttackPhase, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000280, "Member 'GA_LivingStatue_AttackPhase_C_ExecuteUbergraph_GA_LivingStatue_AttackPhase::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_LivingStatue_AttackPhase_C_ExecuteUbergraph_GA_LivingStatue_AttackPhase, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000298, "Member 'GA_LivingStatue_AttackPhase_C_ExecuteUbergraph_GA_LivingStatue_AttackPhase::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_LivingStatue_AttackPhase_C_ExecuteUbergraph_GA_LivingStatue_AttackPhase, CallFunc_Vector_Distance_ReturnValue) == 0x0002B0, "Member 'GA_LivingStatue_AttackPhase_C_ExecuteUbergraph_GA_LivingStatue_AttackPhase::CallFunc_Vector_Distance_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_LivingStatue_AttackPhase_C_ExecuteUbergraph_GA_LivingStatue_AttackPhase, CallFunc_Vector_Distance_ReturnValue_1) == 0x0002B8, "Member 'GA_LivingStatue_AttackPhase_C_ExecuteUbergraph_GA_LivingStatue_AttackPhase::CallFunc_Vector_Distance_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_LivingStatue_AttackPhase_C_ExecuteUbergraph_GA_LivingStatue_AttackPhase, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x0002C0, "Member 'GA_LivingStatue_AttackPhase_C_ExecuteUbergraph_GA_LivingStatue_AttackPhase::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_LivingStatue_AttackPhase_C_ExecuteUbergraph_GA_LivingStatue_AttackPhase, CallFunc_Less_DoubleDouble_ReturnValue) == 0x0002C1, "Member 'GA_LivingStatue_AttackPhase_C_ExecuteUbergraph_GA_LivingStatue_AttackPhase::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_LivingStatue_AttackPhase_C_ExecuteUbergraph_GA_LivingStatue_AttackPhase, CallFunc_Not_PreBool_ReturnValue_1) == 0x0002C2, "Member 'GA_LivingStatue_AttackPhase_C_ExecuteUbergraph_GA_LivingStatue_AttackPhase::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_LivingStatue_AttackPhase_C_ExecuteUbergraph_GA_LivingStatue_AttackPhase, CallFunc_RandomFloatInRange_ReturnValue) == 0x0002C8, "Member 'GA_LivingStatue_AttackPhase_C_ExecuteUbergraph_GA_LivingStatue_AttackPhase::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_LivingStatue_AttackPhase_C_ExecuteUbergraph_GA_LivingStatue_AttackPhase, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x0002D0, "Member 'GA_LivingStatue_AttackPhase_C_ExecuteUbergraph_GA_LivingStatue_AttackPhase::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_LivingStatue_AttackPhase_C_ExecuteUbergraph_GA_LivingStatue_AttackPhase, CallFunc_GreaterEqual_DoubleDouble_ReturnValue) == 0x0002D1, "Member 'GA_LivingStatue_AttackPhase_C_ExecuteUbergraph_GA_LivingStatue_AttackPhase::CallFunc_GreaterEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_LivingStatue_AttackPhase_C_ExecuteUbergraph_GA_LivingStatue_AttackPhase, CallFunc_BooleanOR_ReturnValue) == 0x0002D2, "Member 'GA_LivingStatue_AttackPhase_C_ExecuteUbergraph_GA_LivingStatue_AttackPhase::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function GA_LivingStatue_AttackPhase.GA_LivingStatue_AttackPhase_C.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct GA_LivingStatue_AttackPhase_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_LivingStatue_AttackPhase_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GA_LivingStatue_AttackPhase_C_K2_OnEndAbility");
static_assert(sizeof(GA_LivingStatue_AttackPhase_C_K2_OnEndAbility) == 0x000001, "Wrong size on GA_LivingStatue_AttackPhase_C_K2_OnEndAbility");
static_assert(offsetof(GA_LivingStatue_AttackPhase_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GA_LivingStatue_AttackPhase_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

}

