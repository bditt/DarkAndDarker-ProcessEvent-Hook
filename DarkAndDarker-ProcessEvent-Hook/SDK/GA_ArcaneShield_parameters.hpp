#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_ArcaneShield

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "DungeonCrawler_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GA_ArcaneShield.GA_ArcaneShield_C.ExecuteUbergraph_GA_ArcaneShield
// 0x0390 (0x0390 - 0x0000)
struct GA_ArcaneShield_C_ExecuteUbergraph_GA_ArcaneShield final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_194E[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDesignDataSkill                       CallFunc_GetCurrentDesignDataSkill_ReturnValue;    // 0x0008(0x00E0)(ConstParm)
	struct FGameplayEffectRemovalInfo             K2Node_CustomEvent_GameplayEffectRemovalInfo_1;    // 0x00E8(0x0028)(ConstParm)
	double                                        CallFunc_Conv_IntToDouble_ReturnValue;             // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo)> K2Node_CreateDelegate_OutputDelegate;              // 0x0118(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 CallFunc_MakeGameplayCueParameters_ReturnValue;    // 0x0128(0x00D8)(ContainsInstancedReference)
	struct FGameplayEffectRemovalInfo             K2Node_CustomEvent_GameplayEffectRemovalInfo;      // 0x0200(0x0028)(ConstParm)
	struct FGameplayEffectRemovalInfo             Temp_struct_Variable;                              // 0x0228(0x0028)()
	bool                                          Temp_bool_Variable;                                // 0x0250(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_194F[0x3];                                     // 0x0251(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0254(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0258(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x025C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0260(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_HasAuthority_ReturnValue;              // 0x0270(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1950[0x7];                                     // 0x0271(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     Temp_struct_Variable_1;                            // 0x0278(0x00B0)(ConstParm)
	TArray<struct FActiveGameplayEffectHandle>    CallFunc_ApplyEffectContainer_ReturnValue;         // 0x0328(0x0010)(ReferenceParm)
	struct FActiveGameplayEffectHandle            CallFunc_Array_Get_Item;                           // 0x0338(0x0008)(NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0340(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1951[0x4];                                     // 0x0344(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilityTask_WaitGameplayEffectRemoved* CallFunc_WaitForGameplayEffectRemoved_ReturnValue; // 0x0348(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0350(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0351(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1952[0x6];                                     // 0x0352(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x0358(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           K2Node_Event_SkillTag;                             // 0x0360(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           K2Node_Event_CooldownTag;                          // 0x0368(0x0008)(NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1; // 0x0370(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_As_________________;            // 0x0378(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0388(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasMatchingGameplayTag_ReturnValue;       // 0x0389(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1953[0x2];                                     // 0x038A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_MakeGameplayCueParameters_RawMagnitude_ImplicitCast; // 0x038C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_ArcaneShield_C_ExecuteUbergraph_GA_ArcaneShield) == 0x000008, "Wrong alignment on GA_ArcaneShield_C_ExecuteUbergraph_GA_ArcaneShield");
static_assert(sizeof(GA_ArcaneShield_C_ExecuteUbergraph_GA_ArcaneShield) == 0x000390, "Wrong size on GA_ArcaneShield_C_ExecuteUbergraph_GA_ArcaneShield");
static_assert(offsetof(GA_ArcaneShield_C_ExecuteUbergraph_GA_ArcaneShield, EntryPoint) == 0x000000, "Member 'GA_ArcaneShield_C_ExecuteUbergraph_GA_ArcaneShield::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_ArcaneShield_C_ExecuteUbergraph_GA_ArcaneShield, CallFunc_GetCurrentDesignDataSkill_ReturnValue) == 0x000008, "Member 'GA_ArcaneShield_C_ExecuteUbergraph_GA_ArcaneShield::CallFunc_GetCurrentDesignDataSkill_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_ArcaneShield_C_ExecuteUbergraph_GA_ArcaneShield, K2Node_CustomEvent_GameplayEffectRemovalInfo_1) == 0x0000E8, "Member 'GA_ArcaneShield_C_ExecuteUbergraph_GA_ArcaneShield::K2Node_CustomEvent_GameplayEffectRemovalInfo_1' has a wrong offset!");
static_assert(offsetof(GA_ArcaneShield_C_ExecuteUbergraph_GA_ArcaneShield, CallFunc_Conv_IntToDouble_ReturnValue) == 0x000110, "Member 'GA_ArcaneShield_C_ExecuteUbergraph_GA_ArcaneShield::CallFunc_Conv_IntToDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_ArcaneShield_C_ExecuteUbergraph_GA_ArcaneShield, K2Node_CreateDelegate_OutputDelegate) == 0x000118, "Member 'GA_ArcaneShield_C_ExecuteUbergraph_GA_ArcaneShield::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_ArcaneShield_C_ExecuteUbergraph_GA_ArcaneShield, CallFunc_MakeGameplayCueParameters_ReturnValue) == 0x000128, "Member 'GA_ArcaneShield_C_ExecuteUbergraph_GA_ArcaneShield::CallFunc_MakeGameplayCueParameters_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_ArcaneShield_C_ExecuteUbergraph_GA_ArcaneShield, K2Node_CustomEvent_GameplayEffectRemovalInfo) == 0x000200, "Member 'GA_ArcaneShield_C_ExecuteUbergraph_GA_ArcaneShield::K2Node_CustomEvent_GameplayEffectRemovalInfo' has a wrong offset!");
static_assert(offsetof(GA_ArcaneShield_C_ExecuteUbergraph_GA_ArcaneShield, Temp_struct_Variable) == 0x000228, "Member 'GA_ArcaneShield_C_ExecuteUbergraph_GA_ArcaneShield::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GA_ArcaneShield_C_ExecuteUbergraph_GA_ArcaneShield, Temp_bool_Variable) == 0x000250, "Member 'GA_ArcaneShield_C_ExecuteUbergraph_GA_ArcaneShield::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GA_ArcaneShield_C_ExecuteUbergraph_GA_ArcaneShield, Temp_int_Array_Index_Variable) == 0x000254, "Member 'GA_ArcaneShield_C_ExecuteUbergraph_GA_ArcaneShield::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(GA_ArcaneShield_C_ExecuteUbergraph_GA_ArcaneShield, Temp_int_Loop_Counter_Variable) == 0x000258, "Member 'GA_ArcaneShield_C_ExecuteUbergraph_GA_ArcaneShield::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(GA_ArcaneShield_C_ExecuteUbergraph_GA_ArcaneShield, CallFunc_Add_IntInt_ReturnValue) == 0x00025C, "Member 'GA_ArcaneShield_C_ExecuteUbergraph_GA_ArcaneShield::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_ArcaneShield_C_ExecuteUbergraph_GA_ArcaneShield, K2Node_CreateDelegate_OutputDelegate_1) == 0x000260, "Member 'GA_ArcaneShield_C_ExecuteUbergraph_GA_ArcaneShield::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GA_ArcaneShield_C_ExecuteUbergraph_GA_ArcaneShield, CallFunc_K2_HasAuthority_ReturnValue) == 0x000270, "Member 'GA_ArcaneShield_C_ExecuteUbergraph_GA_ArcaneShield::CallFunc_K2_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_ArcaneShield_C_ExecuteUbergraph_GA_ArcaneShield, Temp_struct_Variable_1) == 0x000278, "Member 'GA_ArcaneShield_C_ExecuteUbergraph_GA_ArcaneShield::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(GA_ArcaneShield_C_ExecuteUbergraph_GA_ArcaneShield, CallFunc_ApplyEffectContainer_ReturnValue) == 0x000328, "Member 'GA_ArcaneShield_C_ExecuteUbergraph_GA_ArcaneShield::CallFunc_ApplyEffectContainer_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_ArcaneShield_C_ExecuteUbergraph_GA_ArcaneShield, CallFunc_Array_Get_Item) == 0x000338, "Member 'GA_ArcaneShield_C_ExecuteUbergraph_GA_ArcaneShield::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GA_ArcaneShield_C_ExecuteUbergraph_GA_ArcaneShield, CallFunc_Array_Length_ReturnValue) == 0x000340, "Member 'GA_ArcaneShield_C_ExecuteUbergraph_GA_ArcaneShield::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_ArcaneShield_C_ExecuteUbergraph_GA_ArcaneShield, CallFunc_WaitForGameplayEffectRemoved_ReturnValue) == 0x000348, "Member 'GA_ArcaneShield_C_ExecuteUbergraph_GA_ArcaneShield::CallFunc_WaitForGameplayEffectRemoved_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_ArcaneShield_C_ExecuteUbergraph_GA_ArcaneShield, CallFunc_Less_IntInt_ReturnValue) == 0x000350, "Member 'GA_ArcaneShield_C_ExecuteUbergraph_GA_ArcaneShield::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_ArcaneShield_C_ExecuteUbergraph_GA_ArcaneShield, CallFunc_IsValid_ReturnValue) == 0x000351, "Member 'GA_ArcaneShield_C_ExecuteUbergraph_GA_ArcaneShield::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_ArcaneShield_C_ExecuteUbergraph_GA_ArcaneShield, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000358, "Member 'GA_ArcaneShield_C_ExecuteUbergraph_GA_ArcaneShield::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_ArcaneShield_C_ExecuteUbergraph_GA_ArcaneShield, K2Node_Event_SkillTag) == 0x000360, "Member 'GA_ArcaneShield_C_ExecuteUbergraph_GA_ArcaneShield::K2Node_Event_SkillTag' has a wrong offset!");
static_assert(offsetof(GA_ArcaneShield_C_ExecuteUbergraph_GA_ArcaneShield, K2Node_Event_CooldownTag) == 0x000368, "Member 'GA_ArcaneShield_C_ExecuteUbergraph_GA_ArcaneShield::K2Node_Event_CooldownTag' has a wrong offset!");
static_assert(offsetof(GA_ArcaneShield_C_ExecuteUbergraph_GA_ArcaneShield, CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1) == 0x000370, "Member 'GA_ArcaneShield_C_ExecuteUbergraph_GA_ArcaneShield::CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_ArcaneShield_C_ExecuteUbergraph_GA_ArcaneShield, K2Node_DynamicCast_As_________________) == 0x000378, "Member 'GA_ArcaneShield_C_ExecuteUbergraph_GA_ArcaneShield::K2Node_DynamicCast_As_________________' has a wrong offset!");
static_assert(offsetof(GA_ArcaneShield_C_ExecuteUbergraph_GA_ArcaneShield, K2Node_DynamicCast_bSuccess) == 0x000388, "Member 'GA_ArcaneShield_C_ExecuteUbergraph_GA_ArcaneShield::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_ArcaneShield_C_ExecuteUbergraph_GA_ArcaneShield, CallFunc_HasMatchingGameplayTag_ReturnValue) == 0x000389, "Member 'GA_ArcaneShield_C_ExecuteUbergraph_GA_ArcaneShield::CallFunc_HasMatchingGameplayTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_ArcaneShield_C_ExecuteUbergraph_GA_ArcaneShield, CallFunc_MakeGameplayCueParameters_RawMagnitude_ImplicitCast) == 0x00038C, "Member 'GA_ArcaneShield_C_ExecuteUbergraph_GA_ArcaneShield::CallFunc_MakeGameplayCueParameters_RawMagnitude_ImplicitCast' has a wrong offset!");

// Function GA_ArcaneShield.GA_ArcaneShield_C.InvalidHandle_7D9C58AD4F43BA6F4618D789299B2871
// 0x0028 (0x0028 - 0x0000)
struct GA_ArcaneShield_C_InvalidHandle_7D9C58AD4F43BA6F4618D789299B2871 final
{
public:
	struct FGameplayEffectRemovalInfo             GameplayEffectRemovalInfo;                         // 0x0000(0x0028)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(GA_ArcaneShield_C_InvalidHandle_7D9C58AD4F43BA6F4618D789299B2871) == 0x000008, "Wrong alignment on GA_ArcaneShield_C_InvalidHandle_7D9C58AD4F43BA6F4618D789299B2871");
static_assert(sizeof(GA_ArcaneShield_C_InvalidHandle_7D9C58AD4F43BA6F4618D789299B2871) == 0x000028, "Wrong size on GA_ArcaneShield_C_InvalidHandle_7D9C58AD4F43BA6F4618D789299B2871");
static_assert(offsetof(GA_ArcaneShield_C_InvalidHandle_7D9C58AD4F43BA6F4618D789299B2871, GameplayEffectRemovalInfo) == 0x000000, "Member 'GA_ArcaneShield_C_InvalidHandle_7D9C58AD4F43BA6F4618D789299B2871::GameplayEffectRemovalInfo' has a wrong offset!");

// Function GA_ArcaneShield.GA_ArcaneShield_C.OnRemoved_7D9C58AD4F43BA6F4618D789299B2871
// 0x0028 (0x0028 - 0x0000)
struct GA_ArcaneShield_C_OnRemoved_7D9C58AD4F43BA6F4618D789299B2871 final
{
public:
	struct FGameplayEffectRemovalInfo             GameplayEffectRemovalInfo;                         // 0x0000(0x0028)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(GA_ArcaneShield_C_OnRemoved_7D9C58AD4F43BA6F4618D789299B2871) == 0x000008, "Wrong alignment on GA_ArcaneShield_C_OnRemoved_7D9C58AD4F43BA6F4618D789299B2871");
static_assert(sizeof(GA_ArcaneShield_C_OnRemoved_7D9C58AD4F43BA6F4618D789299B2871) == 0x000028, "Wrong size on GA_ArcaneShield_C_OnRemoved_7D9C58AD4F43BA6F4618D789299B2871");
static_assert(offsetof(GA_ArcaneShield_C_OnRemoved_7D9C58AD4F43BA6F4618D789299B2871, GameplayEffectRemovalInfo) == 0x000000, "Member 'GA_ArcaneShield_C_OnRemoved_7D9C58AD4F43BA6F4618D789299B2871::GameplayEffectRemovalInfo' has a wrong offset!");

// Function GA_ArcaneShield.GA_ArcaneShield_C.ServerOnSkillActivate
// 0x0010 (0x0010 - 0x0000)
struct GA_ArcaneShield_C_ServerOnSkillActivate final
{
public:
	struct FGameplayTag                           SkillTag;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           CooldownTag;                                       // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_ArcaneShield_C_ServerOnSkillActivate) == 0x000004, "Wrong alignment on GA_ArcaneShield_C_ServerOnSkillActivate");
static_assert(sizeof(GA_ArcaneShield_C_ServerOnSkillActivate) == 0x000010, "Wrong size on GA_ArcaneShield_C_ServerOnSkillActivate");
static_assert(offsetof(GA_ArcaneShield_C_ServerOnSkillActivate, SkillTag) == 0x000000, "Member 'GA_ArcaneShield_C_ServerOnSkillActivate::SkillTag' has a wrong offset!");
static_assert(offsetof(GA_ArcaneShield_C_ServerOnSkillActivate, CooldownTag) == 0x000008, "Member 'GA_ArcaneShield_C_ServerOnSkillActivate::CooldownTag' has a wrong offset!");

// Function GA_ArcaneShield.GA_ArcaneShield_C.ShieldBreakAttack
// 0x04B0 (0x04B0 - 0x0000)
struct GA_ArcaneShield_C_ShieldBreakAttack final
{
public:
	struct FVector                                PivotLocation;                                     // 0x0000(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDesignDataSkill                       CallFunc_GetCurrentDesignDataSkill_ReturnValue;    // 0x0020(0x00E0)(ConstParm)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1954[0x4];                                     // 0x0104(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Conv_IntToDouble_ReturnValue;             // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_DoubleToVector_ReturnValue;          // 0x0110(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x0128(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<EObjectTypeQuery>                      K2Node_MakeArray_Array;                            // 0x0130(0x0010)(ConstParm, ReferenceParm)
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1; // 0x0140(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0148(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         K2Node_MakeArray_Array_1;                          // 0x0160(0x0010)(ConstParm, ReferenceParm)
	TArray<class AActor*>                         CallFunc_SphereOverlapActors_OutActors;            // 0x0170(0x0010)(ReferenceParm)
	bool                                          CallFunc_SphereOverlapActors_ReturnValue;          // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1955[0x3];                                     // 0x0181(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0184(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0188(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1956[0x7];                                     // 0x0191(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0198(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x01B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Normal_ReturnValue;                       // 0x01C8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x01E0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x01F8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_LineTraceSingleForObjects_OutHit;         // 0x0210(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_LineTraceSingleForObjects_ReturnValue;    // 0x02F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x02F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x02FA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1957[0x1];                                     // 0x02FB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x02FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x0300(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1958[0x4];                                     // 0x0304(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x0308(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x0320(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x0338(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x0350(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x0368(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x0370(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x0378(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0380(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_BoneName;                  // 0x0388(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0390(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x0394(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x0398(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1959[0x4];                                     // 0x039C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x03A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x03B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADCCharacterBase*                       K2Node_DynamicCast_AsDCCharacter_Base;             // 0x03D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x03D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x03D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsSameTeam_ReturnValue;                   // 0x03DA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_195A[0x5];                                     // 0x03DB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_MakeStruct_GameplayEventData;               // 0x03E0(0x00B0)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0490(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_195B[0x7];                                     // 0x0491(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FActiveGameplayEffectHandle>    CallFunc_ApplyEffectContainer_ReturnValue;         // 0x0498(0x0010)(ReferenceParm)
	float                                         CallFunc_SphereOverlapActors_SphereRadius_ImplicitCast; // 0x04A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_ArcaneShield_C_ShieldBreakAttack) == 0x000008, "Wrong alignment on GA_ArcaneShield_C_ShieldBreakAttack");
static_assert(sizeof(GA_ArcaneShield_C_ShieldBreakAttack) == 0x0004B0, "Wrong size on GA_ArcaneShield_C_ShieldBreakAttack");
static_assert(offsetof(GA_ArcaneShield_C_ShieldBreakAttack, PivotLocation) == 0x000000, "Member 'GA_ArcaneShield_C_ShieldBreakAttack::PivotLocation' has a wrong offset!");
static_assert(offsetof(GA_ArcaneShield_C_ShieldBreakAttack, Temp_int_Array_Index_Variable) == 0x000018, "Member 'GA_ArcaneShield_C_ShieldBreakAttack::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(GA_ArcaneShield_C_ShieldBreakAttack, Temp_int_Loop_Counter_Variable) == 0x00001C, "Member 'GA_ArcaneShield_C_ShieldBreakAttack::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(GA_ArcaneShield_C_ShieldBreakAttack, CallFunc_GetCurrentDesignDataSkill_ReturnValue) == 0x000020, "Member 'GA_ArcaneShield_C_ShieldBreakAttack::CallFunc_GetCurrentDesignDataSkill_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_ArcaneShield_C_ShieldBreakAttack, CallFunc_Add_IntInt_ReturnValue) == 0x000100, "Member 'GA_ArcaneShield_C_ShieldBreakAttack::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_ArcaneShield_C_ShieldBreakAttack, CallFunc_Conv_IntToDouble_ReturnValue) == 0x000108, "Member 'GA_ArcaneShield_C_ShieldBreakAttack::CallFunc_Conv_IntToDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_ArcaneShield_C_ShieldBreakAttack, CallFunc_Conv_DoubleToVector_ReturnValue) == 0x000110, "Member 'GA_ArcaneShield_C_ShieldBreakAttack::CallFunc_Conv_DoubleToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_ArcaneShield_C_ShieldBreakAttack, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000128, "Member 'GA_ArcaneShield_C_ShieldBreakAttack::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_ArcaneShield_C_ShieldBreakAttack, K2Node_MakeArray_Array) == 0x000130, "Member 'GA_ArcaneShield_C_ShieldBreakAttack::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(GA_ArcaneShield_C_ShieldBreakAttack, CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1) == 0x000140, "Member 'GA_ArcaneShield_C_ShieldBreakAttack::CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_ArcaneShield_C_ShieldBreakAttack, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000148, "Member 'GA_ArcaneShield_C_ShieldBreakAttack::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_ArcaneShield_C_ShieldBreakAttack, K2Node_MakeArray_Array_1) == 0x000160, "Member 'GA_ArcaneShield_C_ShieldBreakAttack::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(GA_ArcaneShield_C_ShieldBreakAttack, CallFunc_SphereOverlapActors_OutActors) == 0x000170, "Member 'GA_ArcaneShield_C_ShieldBreakAttack::CallFunc_SphereOverlapActors_OutActors' has a wrong offset!");
static_assert(offsetof(GA_ArcaneShield_C_ShieldBreakAttack, CallFunc_SphereOverlapActors_ReturnValue) == 0x000180, "Member 'GA_ArcaneShield_C_ShieldBreakAttack::CallFunc_SphereOverlapActors_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_ArcaneShield_C_ShieldBreakAttack, CallFunc_Array_Length_ReturnValue) == 0x000184, "Member 'GA_ArcaneShield_C_ShieldBreakAttack::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_ArcaneShield_C_ShieldBreakAttack, CallFunc_Array_Get_Item) == 0x000188, "Member 'GA_ArcaneShield_C_ShieldBreakAttack::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GA_ArcaneShield_C_ShieldBreakAttack, CallFunc_Less_IntInt_ReturnValue) == 0x000190, "Member 'GA_ArcaneShield_C_ShieldBreakAttack::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_ArcaneShield_C_ShieldBreakAttack, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000198, "Member 'GA_ArcaneShield_C_ShieldBreakAttack::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_ArcaneShield_C_ShieldBreakAttack, CallFunc_Subtract_VectorVector_ReturnValue) == 0x0001B0, "Member 'GA_ArcaneShield_C_ShieldBreakAttack::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_ArcaneShield_C_ShieldBreakAttack, CallFunc_Normal_ReturnValue) == 0x0001C8, "Member 'GA_ArcaneShield_C_ShieldBreakAttack::CallFunc_Normal_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_ArcaneShield_C_ShieldBreakAttack, CallFunc_Multiply_VectorVector_ReturnValue) == 0x0001E0, "Member 'GA_ArcaneShield_C_ShieldBreakAttack::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_ArcaneShield_C_ShieldBreakAttack, CallFunc_Add_VectorVector_ReturnValue) == 0x0001F8, "Member 'GA_ArcaneShield_C_ShieldBreakAttack::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_ArcaneShield_C_ShieldBreakAttack, CallFunc_LineTraceSingleForObjects_OutHit) == 0x000210, "Member 'GA_ArcaneShield_C_ShieldBreakAttack::CallFunc_LineTraceSingleForObjects_OutHit' has a wrong offset!");
static_assert(offsetof(GA_ArcaneShield_C_ShieldBreakAttack, CallFunc_LineTraceSingleForObjects_ReturnValue) == 0x0002F8, "Member 'GA_ArcaneShield_C_ShieldBreakAttack::CallFunc_LineTraceSingleForObjects_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_ArcaneShield_C_ShieldBreakAttack, CallFunc_BreakHitResult_bBlockingHit) == 0x0002F9, "Member 'GA_ArcaneShield_C_ShieldBreakAttack::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(GA_ArcaneShield_C_ShieldBreakAttack, CallFunc_BreakHitResult_bInitialOverlap) == 0x0002FA, "Member 'GA_ArcaneShield_C_ShieldBreakAttack::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(GA_ArcaneShield_C_ShieldBreakAttack, CallFunc_BreakHitResult_Time) == 0x0002FC, "Member 'GA_ArcaneShield_C_ShieldBreakAttack::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(GA_ArcaneShield_C_ShieldBreakAttack, CallFunc_BreakHitResult_Distance) == 0x000300, "Member 'GA_ArcaneShield_C_ShieldBreakAttack::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(GA_ArcaneShield_C_ShieldBreakAttack, CallFunc_BreakHitResult_Location) == 0x000308, "Member 'GA_ArcaneShield_C_ShieldBreakAttack::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(GA_ArcaneShield_C_ShieldBreakAttack, CallFunc_BreakHitResult_ImpactPoint) == 0x000320, "Member 'GA_ArcaneShield_C_ShieldBreakAttack::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(GA_ArcaneShield_C_ShieldBreakAttack, CallFunc_BreakHitResult_Normal) == 0x000338, "Member 'GA_ArcaneShield_C_ShieldBreakAttack::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(GA_ArcaneShield_C_ShieldBreakAttack, CallFunc_BreakHitResult_ImpactNormal) == 0x000350, "Member 'GA_ArcaneShield_C_ShieldBreakAttack::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(GA_ArcaneShield_C_ShieldBreakAttack, CallFunc_BreakHitResult_PhysMat) == 0x000368, "Member 'GA_ArcaneShield_C_ShieldBreakAttack::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(GA_ArcaneShield_C_ShieldBreakAttack, CallFunc_BreakHitResult_HitActor) == 0x000370, "Member 'GA_ArcaneShield_C_ShieldBreakAttack::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(GA_ArcaneShield_C_ShieldBreakAttack, CallFunc_BreakHitResult_HitComponent) == 0x000378, "Member 'GA_ArcaneShield_C_ShieldBreakAttack::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(GA_ArcaneShield_C_ShieldBreakAttack, CallFunc_BreakHitResult_HitBoneName) == 0x000380, "Member 'GA_ArcaneShield_C_ShieldBreakAttack::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(GA_ArcaneShield_C_ShieldBreakAttack, CallFunc_BreakHitResult_BoneName) == 0x000388, "Member 'GA_ArcaneShield_C_ShieldBreakAttack::CallFunc_BreakHitResult_BoneName' has a wrong offset!");
static_assert(offsetof(GA_ArcaneShield_C_ShieldBreakAttack, CallFunc_BreakHitResult_HitItem) == 0x000390, "Member 'GA_ArcaneShield_C_ShieldBreakAttack::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(GA_ArcaneShield_C_ShieldBreakAttack, CallFunc_BreakHitResult_ElementIndex) == 0x000394, "Member 'GA_ArcaneShield_C_ShieldBreakAttack::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(GA_ArcaneShield_C_ShieldBreakAttack, CallFunc_BreakHitResult_FaceIndex) == 0x000398, "Member 'GA_ArcaneShield_C_ShieldBreakAttack::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(GA_ArcaneShield_C_ShieldBreakAttack, CallFunc_BreakHitResult_TraceStart) == 0x0003A0, "Member 'GA_ArcaneShield_C_ShieldBreakAttack::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(GA_ArcaneShield_C_ShieldBreakAttack, CallFunc_BreakHitResult_TraceEnd) == 0x0003B8, "Member 'GA_ArcaneShield_C_ShieldBreakAttack::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(GA_ArcaneShield_C_ShieldBreakAttack, K2Node_DynamicCast_AsDCCharacter_Base) == 0x0003D0, "Member 'GA_ArcaneShield_C_ShieldBreakAttack::K2Node_DynamicCast_AsDCCharacter_Base' has a wrong offset!");
static_assert(offsetof(GA_ArcaneShield_C_ShieldBreakAttack, K2Node_DynamicCast_bSuccess) == 0x0003D8, "Member 'GA_ArcaneShield_C_ShieldBreakAttack::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_ArcaneShield_C_ShieldBreakAttack, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x0003D9, "Member 'GA_ArcaneShield_C_ShieldBreakAttack::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_ArcaneShield_C_ShieldBreakAttack, CallFunc_IsSameTeam_ReturnValue) == 0x0003DA, "Member 'GA_ArcaneShield_C_ShieldBreakAttack::CallFunc_IsSameTeam_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_ArcaneShield_C_ShieldBreakAttack, K2Node_MakeStruct_GameplayEventData) == 0x0003E0, "Member 'GA_ArcaneShield_C_ShieldBreakAttack::K2Node_MakeStruct_GameplayEventData' has a wrong offset!");
static_assert(offsetof(GA_ArcaneShield_C_ShieldBreakAttack, CallFunc_IsValid_ReturnValue) == 0x000490, "Member 'GA_ArcaneShield_C_ShieldBreakAttack::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_ArcaneShield_C_ShieldBreakAttack, CallFunc_ApplyEffectContainer_ReturnValue) == 0x000498, "Member 'GA_ArcaneShield_C_ShieldBreakAttack::CallFunc_ApplyEffectContainer_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_ArcaneShield_C_ShieldBreakAttack, CallFunc_SphereOverlapActors_SphereRadius_ImplicitCast) == 0x0004A8, "Member 'GA_ArcaneShield_C_ShieldBreakAttack::CallFunc_SphereOverlapActors_SphereRadius_ImplicitCast' has a wrong offset!");

}

