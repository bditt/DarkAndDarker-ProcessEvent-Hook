#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_MonsterDeath

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GA_MonsterDeath.GA_MonsterDeath_C.AbilityActivated
// 0x00B0 (0x00B0 - 0x0000)
struct GA_MonsterDeath_C_AbilityActivated final
{
public:
	struct FGameplayEventData                     TriggerEventData;                                  // 0x0000(0x00B0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GA_MonsterDeath_C_AbilityActivated) == 0x000008, "Wrong alignment on GA_MonsterDeath_C_AbilityActivated");
static_assert(sizeof(GA_MonsterDeath_C_AbilityActivated) == 0x0000B0, "Wrong size on GA_MonsterDeath_C_AbilityActivated");
static_assert(offsetof(GA_MonsterDeath_C_AbilityActivated, TriggerEventData) == 0x000000, "Member 'GA_MonsterDeath_C_AbilityActivated::TriggerEventData' has a wrong offset!");

// Function GA_MonsterDeath.GA_MonsterDeath_C.EventReceived_6BD842A04FEECB3ADB7405A03B1CC235
// 0x00B8 (0x00B8 - 0x0000)
struct GA_MonsterDeath_C_EventReceived_6BD842A04FEECB3ADB7405A03B1CC235 final
{
public:
	struct FGameplayTag                           EventTag;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     EventData;                                         // 0x0008(0x00B0)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GA_MonsterDeath_C_EventReceived_6BD842A04FEECB3ADB7405A03B1CC235) == 0x000008, "Wrong alignment on GA_MonsterDeath_C_EventReceived_6BD842A04FEECB3ADB7405A03B1CC235");
static_assert(sizeof(GA_MonsterDeath_C_EventReceived_6BD842A04FEECB3ADB7405A03B1CC235) == 0x0000B8, "Wrong size on GA_MonsterDeath_C_EventReceived_6BD842A04FEECB3ADB7405A03B1CC235");
static_assert(offsetof(GA_MonsterDeath_C_EventReceived_6BD842A04FEECB3ADB7405A03B1CC235, EventTag) == 0x000000, "Member 'GA_MonsterDeath_C_EventReceived_6BD842A04FEECB3ADB7405A03B1CC235::EventTag' has a wrong offset!");
static_assert(offsetof(GA_MonsterDeath_C_EventReceived_6BD842A04FEECB3ADB7405A03B1CC235, EventData) == 0x000008, "Member 'GA_MonsterDeath_C_EventReceived_6BD842A04FEECB3ADB7405A03B1CC235::EventData' has a wrong offset!");

// Function GA_MonsterDeath.GA_MonsterDeath_C.ExecuteUbergraph_GA_MonsterDeath
// 0x0608 (0x0608 - 0x0000)
struct GA_MonsterDeath_C_ExecuteUbergraph_GA_MonsterDeath final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40E4[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_DCMonsterBase_C*                    K2Node_DynamicCast_AsBP_DCMonster_Base;            // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40E5[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)> K2Node_CreateDelegate_OutputDelegate;              // 0x001C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BeforeDeath_ReturnValue;                  // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40E6[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           K2Node_CustomEvent_EventTag_4;                     // 0x0030(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     K2Node_CustomEvent_EventData_4;                    // 0x0038(0x00B0)()
	struct FGameplayTag                           K2Node_CustomEvent_EventTag_3;                     // 0x00E8(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     K2Node_CustomEvent_EventData_3;                    // 0x00F0(0x00B0)()
	TDelegate<void(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x01A0(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           K2Node_CustomEvent_EventTag_2;                     // 0x01B0(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     K2Node_CustomEvent_EventData_2;                    // 0x01B8(0x00B0)()
	TDelegate<void(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0268(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           K2Node_CustomEvent_EventTag_1;                     // 0x0278(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     K2Node_CustomEvent_EventData_1;                    // 0x0280(0x00B0)()
	TDelegate<void(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x0330(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           K2Node_CustomEvent_EventTag;                       // 0x0340(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     K2Node_CustomEvent_EventData;                      // 0x0348(0x00B0)()
	TDelegate<void(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)> K2Node_CreateDelegate_OutputDelegate_4;            // 0x03F8(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     Temp_struct_Variable;                              // 0x0408(0x00B0)()
	struct FGameplayTag                           Temp_struct_Variable_1;                            // 0x04B8(0x0008)(NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_5;            // 0x04C0(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UDCAT_PlayMontageAndWaitForEvent*       CallFunc_PlayMontageAndWaitForEvent_ReturnValue;   // 0x04D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x04D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40E7[0x7];                                     // 0x04D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1; // 0x04E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ADCMonsterBase*                         K2Node_DynamicCast_AsDCMonster_Base;               // 0x04E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x04F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40E8[0x7];                                     // 0x04F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimInstance*                          CallFunc_GetAnimInstance_ReturnValue;              // 0x04F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0500(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40E9[0x7];                                     // 0x0501(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilityTask_WaitMovementModeChange*    CallFunc_CreateWaitMovementModeChange_ReturnValue; // 0x0508(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EMovementMode                                 Temp_byte_Variable;                                // 0x0510(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0511(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40EA[0x6];                                     // 0x0512(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2; // 0x0518(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue_3; // 0x0520(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ADCMonsterBase*                         K2Node_DynamicCast_AsDCMonster_Base_1;             // 0x0528(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0530(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40EB[0x7];                                     // 0x0531(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_DCMonsterBase_C*                    K2Node_DynamicCast_AsBP_DCMonster_Base_1;          // 0x0538(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0540(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Death_ReturnValue;                        // 0x0541(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_AddGameplayTag_ReturnValue;               // 0x0542(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x0543(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsFalling_ReturnValue;                    // 0x0544(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMovementMode                                 K2Node_CustomEvent_NewMovementMode;                // 0x0545(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40EC[0x2];                                     // 0x0546(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_Event_TriggerEventData;                     // 0x0548(0x00B0)(ConstParm)
	TDelegate<void(EMovementMode NewMovementMode)> K2Node_CreateDelegate_OutputDelegate_6;            // 0x05F8(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_MonsterDeath_C_ExecuteUbergraph_GA_MonsterDeath) == 0x000008, "Wrong alignment on GA_MonsterDeath_C_ExecuteUbergraph_GA_MonsterDeath");
static_assert(sizeof(GA_MonsterDeath_C_ExecuteUbergraph_GA_MonsterDeath) == 0x000608, "Wrong size on GA_MonsterDeath_C_ExecuteUbergraph_GA_MonsterDeath");
static_assert(offsetof(GA_MonsterDeath_C_ExecuteUbergraph_GA_MonsterDeath, EntryPoint) == 0x000000, "Member 'GA_MonsterDeath_C_ExecuteUbergraph_GA_MonsterDeath::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_MonsterDeath_C_ExecuteUbergraph_GA_MonsterDeath, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000008, "Member 'GA_MonsterDeath_C_ExecuteUbergraph_GA_MonsterDeath::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_MonsterDeath_C_ExecuteUbergraph_GA_MonsterDeath, K2Node_DynamicCast_AsBP_DCMonster_Base) == 0x000010, "Member 'GA_MonsterDeath_C_ExecuteUbergraph_GA_MonsterDeath::K2Node_DynamicCast_AsBP_DCMonster_Base' has a wrong offset!");
static_assert(offsetof(GA_MonsterDeath_C_ExecuteUbergraph_GA_MonsterDeath, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'GA_MonsterDeath_C_ExecuteUbergraph_GA_MonsterDeath::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_MonsterDeath_C_ExecuteUbergraph_GA_MonsterDeath, K2Node_CreateDelegate_OutputDelegate) == 0x00001C, "Member 'GA_MonsterDeath_C_ExecuteUbergraph_GA_MonsterDeath::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_MonsterDeath_C_ExecuteUbergraph_GA_MonsterDeath, CallFunc_BeforeDeath_ReturnValue) == 0x00002C, "Member 'GA_MonsterDeath_C_ExecuteUbergraph_GA_MonsterDeath::CallFunc_BeforeDeath_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_MonsterDeath_C_ExecuteUbergraph_GA_MonsterDeath, K2Node_CustomEvent_EventTag_4) == 0x000030, "Member 'GA_MonsterDeath_C_ExecuteUbergraph_GA_MonsterDeath::K2Node_CustomEvent_EventTag_4' has a wrong offset!");
static_assert(offsetof(GA_MonsterDeath_C_ExecuteUbergraph_GA_MonsterDeath, K2Node_CustomEvent_EventData_4) == 0x000038, "Member 'GA_MonsterDeath_C_ExecuteUbergraph_GA_MonsterDeath::K2Node_CustomEvent_EventData_4' has a wrong offset!");
static_assert(offsetof(GA_MonsterDeath_C_ExecuteUbergraph_GA_MonsterDeath, K2Node_CustomEvent_EventTag_3) == 0x0000E8, "Member 'GA_MonsterDeath_C_ExecuteUbergraph_GA_MonsterDeath::K2Node_CustomEvent_EventTag_3' has a wrong offset!");
static_assert(offsetof(GA_MonsterDeath_C_ExecuteUbergraph_GA_MonsterDeath, K2Node_CustomEvent_EventData_3) == 0x0000F0, "Member 'GA_MonsterDeath_C_ExecuteUbergraph_GA_MonsterDeath::K2Node_CustomEvent_EventData_3' has a wrong offset!");
static_assert(offsetof(GA_MonsterDeath_C_ExecuteUbergraph_GA_MonsterDeath, K2Node_CreateDelegate_OutputDelegate_1) == 0x0001A0, "Member 'GA_MonsterDeath_C_ExecuteUbergraph_GA_MonsterDeath::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GA_MonsterDeath_C_ExecuteUbergraph_GA_MonsterDeath, K2Node_CustomEvent_EventTag_2) == 0x0001B0, "Member 'GA_MonsterDeath_C_ExecuteUbergraph_GA_MonsterDeath::K2Node_CustomEvent_EventTag_2' has a wrong offset!");
static_assert(offsetof(GA_MonsterDeath_C_ExecuteUbergraph_GA_MonsterDeath, K2Node_CustomEvent_EventData_2) == 0x0001B8, "Member 'GA_MonsterDeath_C_ExecuteUbergraph_GA_MonsterDeath::K2Node_CustomEvent_EventData_2' has a wrong offset!");
static_assert(offsetof(GA_MonsterDeath_C_ExecuteUbergraph_GA_MonsterDeath, K2Node_CreateDelegate_OutputDelegate_2) == 0x000268, "Member 'GA_MonsterDeath_C_ExecuteUbergraph_GA_MonsterDeath::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(GA_MonsterDeath_C_ExecuteUbergraph_GA_MonsterDeath, K2Node_CustomEvent_EventTag_1) == 0x000278, "Member 'GA_MonsterDeath_C_ExecuteUbergraph_GA_MonsterDeath::K2Node_CustomEvent_EventTag_1' has a wrong offset!");
static_assert(offsetof(GA_MonsterDeath_C_ExecuteUbergraph_GA_MonsterDeath, K2Node_CustomEvent_EventData_1) == 0x000280, "Member 'GA_MonsterDeath_C_ExecuteUbergraph_GA_MonsterDeath::K2Node_CustomEvent_EventData_1' has a wrong offset!");
static_assert(offsetof(GA_MonsterDeath_C_ExecuteUbergraph_GA_MonsterDeath, K2Node_CreateDelegate_OutputDelegate_3) == 0x000330, "Member 'GA_MonsterDeath_C_ExecuteUbergraph_GA_MonsterDeath::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(GA_MonsterDeath_C_ExecuteUbergraph_GA_MonsterDeath, K2Node_CustomEvent_EventTag) == 0x000340, "Member 'GA_MonsterDeath_C_ExecuteUbergraph_GA_MonsterDeath::K2Node_CustomEvent_EventTag' has a wrong offset!");
static_assert(offsetof(GA_MonsterDeath_C_ExecuteUbergraph_GA_MonsterDeath, K2Node_CustomEvent_EventData) == 0x000348, "Member 'GA_MonsterDeath_C_ExecuteUbergraph_GA_MonsterDeath::K2Node_CustomEvent_EventData' has a wrong offset!");
static_assert(offsetof(GA_MonsterDeath_C_ExecuteUbergraph_GA_MonsterDeath, K2Node_CreateDelegate_OutputDelegate_4) == 0x0003F8, "Member 'GA_MonsterDeath_C_ExecuteUbergraph_GA_MonsterDeath::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(GA_MonsterDeath_C_ExecuteUbergraph_GA_MonsterDeath, Temp_struct_Variable) == 0x000408, "Member 'GA_MonsterDeath_C_ExecuteUbergraph_GA_MonsterDeath::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GA_MonsterDeath_C_ExecuteUbergraph_GA_MonsterDeath, Temp_struct_Variable_1) == 0x0004B8, "Member 'GA_MonsterDeath_C_ExecuteUbergraph_GA_MonsterDeath::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(GA_MonsterDeath_C_ExecuteUbergraph_GA_MonsterDeath, K2Node_CreateDelegate_OutputDelegate_5) == 0x0004C0, "Member 'GA_MonsterDeath_C_ExecuteUbergraph_GA_MonsterDeath::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(GA_MonsterDeath_C_ExecuteUbergraph_GA_MonsterDeath, CallFunc_PlayMontageAndWaitForEvent_ReturnValue) == 0x0004D0, "Member 'GA_MonsterDeath_C_ExecuteUbergraph_GA_MonsterDeath::CallFunc_PlayMontageAndWaitForEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_MonsterDeath_C_ExecuteUbergraph_GA_MonsterDeath, CallFunc_IsValid_ReturnValue) == 0x0004D8, "Member 'GA_MonsterDeath_C_ExecuteUbergraph_GA_MonsterDeath::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_MonsterDeath_C_ExecuteUbergraph_GA_MonsterDeath, CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1) == 0x0004E0, "Member 'GA_MonsterDeath_C_ExecuteUbergraph_GA_MonsterDeath::CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_MonsterDeath_C_ExecuteUbergraph_GA_MonsterDeath, K2Node_DynamicCast_AsDCMonster_Base) == 0x0004E8, "Member 'GA_MonsterDeath_C_ExecuteUbergraph_GA_MonsterDeath::K2Node_DynamicCast_AsDCMonster_Base' has a wrong offset!");
static_assert(offsetof(GA_MonsterDeath_C_ExecuteUbergraph_GA_MonsterDeath, K2Node_DynamicCast_bSuccess_1) == 0x0004F0, "Member 'GA_MonsterDeath_C_ExecuteUbergraph_GA_MonsterDeath::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GA_MonsterDeath_C_ExecuteUbergraph_GA_MonsterDeath, CallFunc_GetAnimInstance_ReturnValue) == 0x0004F8, "Member 'GA_MonsterDeath_C_ExecuteUbergraph_GA_MonsterDeath::CallFunc_GetAnimInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_MonsterDeath_C_ExecuteUbergraph_GA_MonsterDeath, K2Node_SwitchEnum_CmpSuccess) == 0x000500, "Member 'GA_MonsterDeath_C_ExecuteUbergraph_GA_MonsterDeath::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(GA_MonsterDeath_C_ExecuteUbergraph_GA_MonsterDeath, CallFunc_CreateWaitMovementModeChange_ReturnValue) == 0x000508, "Member 'GA_MonsterDeath_C_ExecuteUbergraph_GA_MonsterDeath::CallFunc_CreateWaitMovementModeChange_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_MonsterDeath_C_ExecuteUbergraph_GA_MonsterDeath, Temp_byte_Variable) == 0x000510, "Member 'GA_MonsterDeath_C_ExecuteUbergraph_GA_MonsterDeath::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(GA_MonsterDeath_C_ExecuteUbergraph_GA_MonsterDeath, CallFunc_IsValid_ReturnValue_1) == 0x000511, "Member 'GA_MonsterDeath_C_ExecuteUbergraph_GA_MonsterDeath::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_MonsterDeath_C_ExecuteUbergraph_GA_MonsterDeath, CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2) == 0x000518, "Member 'GA_MonsterDeath_C_ExecuteUbergraph_GA_MonsterDeath::CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_MonsterDeath_C_ExecuteUbergraph_GA_MonsterDeath, CallFunc_GetAvatarActorFromActorInfo_ReturnValue_3) == 0x000520, "Member 'GA_MonsterDeath_C_ExecuteUbergraph_GA_MonsterDeath::CallFunc_GetAvatarActorFromActorInfo_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GA_MonsterDeath_C_ExecuteUbergraph_GA_MonsterDeath, K2Node_DynamicCast_AsDCMonster_Base_1) == 0x000528, "Member 'GA_MonsterDeath_C_ExecuteUbergraph_GA_MonsterDeath::K2Node_DynamicCast_AsDCMonster_Base_1' has a wrong offset!");
static_assert(offsetof(GA_MonsterDeath_C_ExecuteUbergraph_GA_MonsterDeath, K2Node_DynamicCast_bSuccess_2) == 0x000530, "Member 'GA_MonsterDeath_C_ExecuteUbergraph_GA_MonsterDeath::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(GA_MonsterDeath_C_ExecuteUbergraph_GA_MonsterDeath, K2Node_DynamicCast_AsBP_DCMonster_Base_1) == 0x000538, "Member 'GA_MonsterDeath_C_ExecuteUbergraph_GA_MonsterDeath::K2Node_DynamicCast_AsBP_DCMonster_Base_1' has a wrong offset!");
static_assert(offsetof(GA_MonsterDeath_C_ExecuteUbergraph_GA_MonsterDeath, K2Node_DynamicCast_bSuccess_3) == 0x000540, "Member 'GA_MonsterDeath_C_ExecuteUbergraph_GA_MonsterDeath::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(GA_MonsterDeath_C_ExecuteUbergraph_GA_MonsterDeath, CallFunc_Death_ReturnValue) == 0x000541, "Member 'GA_MonsterDeath_C_ExecuteUbergraph_GA_MonsterDeath::CallFunc_Death_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_MonsterDeath_C_ExecuteUbergraph_GA_MonsterDeath, CallFunc_AddGameplayTag_ReturnValue) == 0x000542, "Member 'GA_MonsterDeath_C_ExecuteUbergraph_GA_MonsterDeath::CallFunc_AddGameplayTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_MonsterDeath_C_ExecuteUbergraph_GA_MonsterDeath, K2Node_SwitchEnum_CmpSuccess_1) == 0x000543, "Member 'GA_MonsterDeath_C_ExecuteUbergraph_GA_MonsterDeath::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(GA_MonsterDeath_C_ExecuteUbergraph_GA_MonsterDeath, CallFunc_IsFalling_ReturnValue) == 0x000544, "Member 'GA_MonsterDeath_C_ExecuteUbergraph_GA_MonsterDeath::CallFunc_IsFalling_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_MonsterDeath_C_ExecuteUbergraph_GA_MonsterDeath, K2Node_CustomEvent_NewMovementMode) == 0x000545, "Member 'GA_MonsterDeath_C_ExecuteUbergraph_GA_MonsterDeath::K2Node_CustomEvent_NewMovementMode' has a wrong offset!");
static_assert(offsetof(GA_MonsterDeath_C_ExecuteUbergraph_GA_MonsterDeath, K2Node_Event_TriggerEventData) == 0x000548, "Member 'GA_MonsterDeath_C_ExecuteUbergraph_GA_MonsterDeath::K2Node_Event_TriggerEventData' has a wrong offset!");
static_assert(offsetof(GA_MonsterDeath_C_ExecuteUbergraph_GA_MonsterDeath, K2Node_CreateDelegate_OutputDelegate_6) == 0x0005F8, "Member 'GA_MonsterDeath_C_ExecuteUbergraph_GA_MonsterDeath::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");

// Function GA_MonsterDeath.GA_MonsterDeath_C.OnBlendOut_6BD842A04FEECB3ADB7405A03B1CC235
// 0x00B8 (0x00B8 - 0x0000)
struct GA_MonsterDeath_C_OnBlendOut_6BD842A04FEECB3ADB7405A03B1CC235 final
{
public:
	struct FGameplayTag                           EventTag;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     EventData;                                         // 0x0008(0x00B0)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GA_MonsterDeath_C_OnBlendOut_6BD842A04FEECB3ADB7405A03B1CC235) == 0x000008, "Wrong alignment on GA_MonsterDeath_C_OnBlendOut_6BD842A04FEECB3ADB7405A03B1CC235");
static_assert(sizeof(GA_MonsterDeath_C_OnBlendOut_6BD842A04FEECB3ADB7405A03B1CC235) == 0x0000B8, "Wrong size on GA_MonsterDeath_C_OnBlendOut_6BD842A04FEECB3ADB7405A03B1CC235");
static_assert(offsetof(GA_MonsterDeath_C_OnBlendOut_6BD842A04FEECB3ADB7405A03B1CC235, EventTag) == 0x000000, "Member 'GA_MonsterDeath_C_OnBlendOut_6BD842A04FEECB3ADB7405A03B1CC235::EventTag' has a wrong offset!");
static_assert(offsetof(GA_MonsterDeath_C_OnBlendOut_6BD842A04FEECB3ADB7405A03B1CC235, EventData) == 0x000008, "Member 'GA_MonsterDeath_C_OnBlendOut_6BD842A04FEECB3ADB7405A03B1CC235::EventData' has a wrong offset!");

// Function GA_MonsterDeath.GA_MonsterDeath_C.OnCancelled_6BD842A04FEECB3ADB7405A03B1CC235
// 0x00B8 (0x00B8 - 0x0000)
struct GA_MonsterDeath_C_OnCancelled_6BD842A04FEECB3ADB7405A03B1CC235 final
{
public:
	struct FGameplayTag                           EventTag;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     EventData;                                         // 0x0008(0x00B0)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GA_MonsterDeath_C_OnCancelled_6BD842A04FEECB3ADB7405A03B1CC235) == 0x000008, "Wrong alignment on GA_MonsterDeath_C_OnCancelled_6BD842A04FEECB3ADB7405A03B1CC235");
static_assert(sizeof(GA_MonsterDeath_C_OnCancelled_6BD842A04FEECB3ADB7405A03B1CC235) == 0x0000B8, "Wrong size on GA_MonsterDeath_C_OnCancelled_6BD842A04FEECB3ADB7405A03B1CC235");
static_assert(offsetof(GA_MonsterDeath_C_OnCancelled_6BD842A04FEECB3ADB7405A03B1CC235, EventTag) == 0x000000, "Member 'GA_MonsterDeath_C_OnCancelled_6BD842A04FEECB3ADB7405A03B1CC235::EventTag' has a wrong offset!");
static_assert(offsetof(GA_MonsterDeath_C_OnCancelled_6BD842A04FEECB3ADB7405A03B1CC235, EventData) == 0x000008, "Member 'GA_MonsterDeath_C_OnCancelled_6BD842A04FEECB3ADB7405A03B1CC235::EventData' has a wrong offset!");

// Function GA_MonsterDeath.GA_MonsterDeath_C.OnChange_9E8AFB9E4D98F88ECD2A39BAF1250363
// 0x0001 (0x0001 - 0x0000)
struct GA_MonsterDeath_C_OnChange_9E8AFB9E4D98F88ECD2A39BAF1250363 final
{
public:
	EMovementMode                                 NewMovementMode;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_MonsterDeath_C_OnChange_9E8AFB9E4D98F88ECD2A39BAF1250363) == 0x000001, "Wrong alignment on GA_MonsterDeath_C_OnChange_9E8AFB9E4D98F88ECD2A39BAF1250363");
static_assert(sizeof(GA_MonsterDeath_C_OnChange_9E8AFB9E4D98F88ECD2A39BAF1250363) == 0x000001, "Wrong size on GA_MonsterDeath_C_OnChange_9E8AFB9E4D98F88ECD2A39BAF1250363");
static_assert(offsetof(GA_MonsterDeath_C_OnChange_9E8AFB9E4D98F88ECD2A39BAF1250363, NewMovementMode) == 0x000000, "Member 'GA_MonsterDeath_C_OnChange_9E8AFB9E4D98F88ECD2A39BAF1250363::NewMovementMode' has a wrong offset!");

// Function GA_MonsterDeath.GA_MonsterDeath_C.OnCompleted_6BD842A04FEECB3ADB7405A03B1CC235
// 0x00B8 (0x00B8 - 0x0000)
struct GA_MonsterDeath_C_OnCompleted_6BD842A04FEECB3ADB7405A03B1CC235 final
{
public:
	struct FGameplayTag                           EventTag;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     EventData;                                         // 0x0008(0x00B0)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GA_MonsterDeath_C_OnCompleted_6BD842A04FEECB3ADB7405A03B1CC235) == 0x000008, "Wrong alignment on GA_MonsterDeath_C_OnCompleted_6BD842A04FEECB3ADB7405A03B1CC235");
static_assert(sizeof(GA_MonsterDeath_C_OnCompleted_6BD842A04FEECB3ADB7405A03B1CC235) == 0x0000B8, "Wrong size on GA_MonsterDeath_C_OnCompleted_6BD842A04FEECB3ADB7405A03B1CC235");
static_assert(offsetof(GA_MonsterDeath_C_OnCompleted_6BD842A04FEECB3ADB7405A03B1CC235, EventTag) == 0x000000, "Member 'GA_MonsterDeath_C_OnCompleted_6BD842A04FEECB3ADB7405A03B1CC235::EventTag' has a wrong offset!");
static_assert(offsetof(GA_MonsterDeath_C_OnCompleted_6BD842A04FEECB3ADB7405A03B1CC235, EventData) == 0x000008, "Member 'GA_MonsterDeath_C_OnCompleted_6BD842A04FEECB3ADB7405A03B1CC235::EventData' has a wrong offset!");

// Function GA_MonsterDeath.GA_MonsterDeath_C.OnInterrupted_6BD842A04FEECB3ADB7405A03B1CC235
// 0x00B8 (0x00B8 - 0x0000)
struct GA_MonsterDeath_C_OnInterrupted_6BD842A04FEECB3ADB7405A03B1CC235 final
{
public:
	struct FGameplayTag                           EventTag;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     EventData;                                         // 0x0008(0x00B0)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GA_MonsterDeath_C_OnInterrupted_6BD842A04FEECB3ADB7405A03B1CC235) == 0x000008, "Wrong alignment on GA_MonsterDeath_C_OnInterrupted_6BD842A04FEECB3ADB7405A03B1CC235");
static_assert(sizeof(GA_MonsterDeath_C_OnInterrupted_6BD842A04FEECB3ADB7405A03B1CC235) == 0x0000B8, "Wrong size on GA_MonsterDeath_C_OnInterrupted_6BD842A04FEECB3ADB7405A03B1CC235");
static_assert(offsetof(GA_MonsterDeath_C_OnInterrupted_6BD842A04FEECB3ADB7405A03B1CC235, EventTag) == 0x000000, "Member 'GA_MonsterDeath_C_OnInterrupted_6BD842A04FEECB3ADB7405A03B1CC235::EventTag' has a wrong offset!");
static_assert(offsetof(GA_MonsterDeath_C_OnInterrupted_6BD842A04FEECB3ADB7405A03B1CC235, EventData) == 0x000008, "Member 'GA_MonsterDeath_C_OnInterrupted_6BD842A04FEECB3ADB7405A03B1CC235::EventData' has a wrong offset!");

}

