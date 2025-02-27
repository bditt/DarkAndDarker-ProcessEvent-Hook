#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_SkeletonGuardmanSummoned_Resurrection

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GA_SkeletonGuardmanSummoned_Resurrection.GA_SkeletonGuardmanSummoned_Resurrection_C.AbilityActivated
// 0x00B0 (0x00B0 - 0x0000)
struct GA_SkeletonGuardmanSummoned_Resurrection_C_AbilityActivated final
{
public:
	struct FGameplayEventData                     TriggerEventData;                                  // 0x0000(0x00B0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GA_SkeletonGuardmanSummoned_Resurrection_C_AbilityActivated) == 0x000008, "Wrong alignment on GA_SkeletonGuardmanSummoned_Resurrection_C_AbilityActivated");
static_assert(sizeof(GA_SkeletonGuardmanSummoned_Resurrection_C_AbilityActivated) == 0x0000B0, "Wrong size on GA_SkeletonGuardmanSummoned_Resurrection_C_AbilityActivated");
static_assert(offsetof(GA_SkeletonGuardmanSummoned_Resurrection_C_AbilityActivated, TriggerEventData) == 0x000000, "Member 'GA_SkeletonGuardmanSummoned_Resurrection_C_AbilityActivated::TriggerEventData' has a wrong offset!");

// Function GA_SkeletonGuardmanSummoned_Resurrection.GA_SkeletonGuardmanSummoned_Resurrection_C.EventReceived_F5DB03154B705B01887AA294184B876B
// 0x00B8 (0x00B8 - 0x0000)
struct GA_SkeletonGuardmanSummoned_Resurrection_C_EventReceived_F5DB03154B705B01887AA294184B876B final
{
public:
	struct FGameplayTag                           EventTag;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     EventData;                                         // 0x0008(0x00B0)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GA_SkeletonGuardmanSummoned_Resurrection_C_EventReceived_F5DB03154B705B01887AA294184B876B) == 0x000008, "Wrong alignment on GA_SkeletonGuardmanSummoned_Resurrection_C_EventReceived_F5DB03154B705B01887AA294184B876B");
static_assert(sizeof(GA_SkeletonGuardmanSummoned_Resurrection_C_EventReceived_F5DB03154B705B01887AA294184B876B) == 0x0000B8, "Wrong size on GA_SkeletonGuardmanSummoned_Resurrection_C_EventReceived_F5DB03154B705B01887AA294184B876B");
static_assert(offsetof(GA_SkeletonGuardmanSummoned_Resurrection_C_EventReceived_F5DB03154B705B01887AA294184B876B, EventTag) == 0x000000, "Member 'GA_SkeletonGuardmanSummoned_Resurrection_C_EventReceived_F5DB03154B705B01887AA294184B876B::EventTag' has a wrong offset!");
static_assert(offsetof(GA_SkeletonGuardmanSummoned_Resurrection_C_EventReceived_F5DB03154B705B01887AA294184B876B, EventData) == 0x000008, "Member 'GA_SkeletonGuardmanSummoned_Resurrection_C_EventReceived_F5DB03154B705B01887AA294184B876B::EventData' has a wrong offset!");

// Function GA_SkeletonGuardmanSummoned_Resurrection.GA_SkeletonGuardmanSummoned_Resurrection_C.ExecuteUbergraph_GA_SkeletonGuardmanSummoned_Resurrection
// 0x05A0 (0x05A0 - 0x0000)
struct GA_SkeletonGuardmanSummoned_Resurrection_C_ExecuteUbergraph_GA_SkeletonGuardmanSummoned_Resurrection final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_526C[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)> K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           K2Node_CustomEvent_EventTag_4;                     // 0x0020(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     K2Node_CustomEvent_EventData_4;                    // 0x0028(0x00B0)()
	struct FGameplayTag                           K2Node_CustomEvent_EventTag_3;                     // 0x00D8(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     K2Node_CustomEvent_EventData_3;                    // 0x00E0(0x00B0)()
	TDelegate<void(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0190(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           K2Node_CustomEvent_EventTag_2;                     // 0x01A0(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     K2Node_CustomEvent_EventData_2;                    // 0x01A8(0x00B0)()
	TDelegate<void(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0258(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           K2Node_CustomEvent_EventTag_1;                     // 0x0268(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     K2Node_CustomEvent_EventData_1;                    // 0x0270(0x00B0)()
	TDelegate<void(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x0320(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           K2Node_CustomEvent_EventTag;                       // 0x0330(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     K2Node_CustomEvent_EventData;                      // 0x0338(0x00B0)()
	TDelegate<void(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)> K2Node_CreateDelegate_OutputDelegate_4;            // 0x03E8(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     Temp_struct_Variable;                              // 0x03F8(0x00B0)()
	struct FGameplayTag                           Temp_struct_Variable_1;                            // 0x04A8(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bWasCancelled;                        // 0x04B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_526D[0x7];                                     // 0x04B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UDCAT_PlayMontageAndWaitForEvent*       CallFunc_PlayMontageAndWaitForEvent_ReturnValue;   // 0x04B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_RandomInteger_ReturnValue;                // 0x04C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x04C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x04C5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_526E[0x2];                                     // 0x04C6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1; // 0x04C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FPrimaryAssetId>                K2Node_MakeArray_Array;                            // 0x04D0(0x0010)(ConstParm, ReferenceParm)
	struct FGameplayEventData                     K2Node_Event_TriggerEventData;                     // 0x04E0(0x00B0)(ConstParm)
	TArray<struct FActiveGameplayEffectHandle>    CallFunc_ApplyGameplayEffectByIds_ReturnValue;     // 0x0590(0x0010)(ReferenceParm)
};
static_assert(alignof(GA_SkeletonGuardmanSummoned_Resurrection_C_ExecuteUbergraph_GA_SkeletonGuardmanSummoned_Resurrection) == 0x000008, "Wrong alignment on GA_SkeletonGuardmanSummoned_Resurrection_C_ExecuteUbergraph_GA_SkeletonGuardmanSummoned_Resurrection");
static_assert(sizeof(GA_SkeletonGuardmanSummoned_Resurrection_C_ExecuteUbergraph_GA_SkeletonGuardmanSummoned_Resurrection) == 0x0005A0, "Wrong size on GA_SkeletonGuardmanSummoned_Resurrection_C_ExecuteUbergraph_GA_SkeletonGuardmanSummoned_Resurrection");
static_assert(offsetof(GA_SkeletonGuardmanSummoned_Resurrection_C_ExecuteUbergraph_GA_SkeletonGuardmanSummoned_Resurrection, EntryPoint) == 0x000000, "Member 'GA_SkeletonGuardmanSummoned_Resurrection_C_ExecuteUbergraph_GA_SkeletonGuardmanSummoned_Resurrection::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_SkeletonGuardmanSummoned_Resurrection_C_ExecuteUbergraph_GA_SkeletonGuardmanSummoned_Resurrection, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000008, "Member 'GA_SkeletonGuardmanSummoned_Resurrection_C_ExecuteUbergraph_GA_SkeletonGuardmanSummoned_Resurrection::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SkeletonGuardmanSummoned_Resurrection_C_ExecuteUbergraph_GA_SkeletonGuardmanSummoned_Resurrection, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'GA_SkeletonGuardmanSummoned_Resurrection_C_ExecuteUbergraph_GA_SkeletonGuardmanSummoned_Resurrection::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_SkeletonGuardmanSummoned_Resurrection_C_ExecuteUbergraph_GA_SkeletonGuardmanSummoned_Resurrection, K2Node_CustomEvent_EventTag_4) == 0x000020, "Member 'GA_SkeletonGuardmanSummoned_Resurrection_C_ExecuteUbergraph_GA_SkeletonGuardmanSummoned_Resurrection::K2Node_CustomEvent_EventTag_4' has a wrong offset!");
static_assert(offsetof(GA_SkeletonGuardmanSummoned_Resurrection_C_ExecuteUbergraph_GA_SkeletonGuardmanSummoned_Resurrection, K2Node_CustomEvent_EventData_4) == 0x000028, "Member 'GA_SkeletonGuardmanSummoned_Resurrection_C_ExecuteUbergraph_GA_SkeletonGuardmanSummoned_Resurrection::K2Node_CustomEvent_EventData_4' has a wrong offset!");
static_assert(offsetof(GA_SkeletonGuardmanSummoned_Resurrection_C_ExecuteUbergraph_GA_SkeletonGuardmanSummoned_Resurrection, K2Node_CustomEvent_EventTag_3) == 0x0000D8, "Member 'GA_SkeletonGuardmanSummoned_Resurrection_C_ExecuteUbergraph_GA_SkeletonGuardmanSummoned_Resurrection::K2Node_CustomEvent_EventTag_3' has a wrong offset!");
static_assert(offsetof(GA_SkeletonGuardmanSummoned_Resurrection_C_ExecuteUbergraph_GA_SkeletonGuardmanSummoned_Resurrection, K2Node_CustomEvent_EventData_3) == 0x0000E0, "Member 'GA_SkeletonGuardmanSummoned_Resurrection_C_ExecuteUbergraph_GA_SkeletonGuardmanSummoned_Resurrection::K2Node_CustomEvent_EventData_3' has a wrong offset!");
static_assert(offsetof(GA_SkeletonGuardmanSummoned_Resurrection_C_ExecuteUbergraph_GA_SkeletonGuardmanSummoned_Resurrection, K2Node_CreateDelegate_OutputDelegate_1) == 0x000190, "Member 'GA_SkeletonGuardmanSummoned_Resurrection_C_ExecuteUbergraph_GA_SkeletonGuardmanSummoned_Resurrection::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GA_SkeletonGuardmanSummoned_Resurrection_C_ExecuteUbergraph_GA_SkeletonGuardmanSummoned_Resurrection, K2Node_CustomEvent_EventTag_2) == 0x0001A0, "Member 'GA_SkeletonGuardmanSummoned_Resurrection_C_ExecuteUbergraph_GA_SkeletonGuardmanSummoned_Resurrection::K2Node_CustomEvent_EventTag_2' has a wrong offset!");
static_assert(offsetof(GA_SkeletonGuardmanSummoned_Resurrection_C_ExecuteUbergraph_GA_SkeletonGuardmanSummoned_Resurrection, K2Node_CustomEvent_EventData_2) == 0x0001A8, "Member 'GA_SkeletonGuardmanSummoned_Resurrection_C_ExecuteUbergraph_GA_SkeletonGuardmanSummoned_Resurrection::K2Node_CustomEvent_EventData_2' has a wrong offset!");
static_assert(offsetof(GA_SkeletonGuardmanSummoned_Resurrection_C_ExecuteUbergraph_GA_SkeletonGuardmanSummoned_Resurrection, K2Node_CreateDelegate_OutputDelegate_2) == 0x000258, "Member 'GA_SkeletonGuardmanSummoned_Resurrection_C_ExecuteUbergraph_GA_SkeletonGuardmanSummoned_Resurrection::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(GA_SkeletonGuardmanSummoned_Resurrection_C_ExecuteUbergraph_GA_SkeletonGuardmanSummoned_Resurrection, K2Node_CustomEvent_EventTag_1) == 0x000268, "Member 'GA_SkeletonGuardmanSummoned_Resurrection_C_ExecuteUbergraph_GA_SkeletonGuardmanSummoned_Resurrection::K2Node_CustomEvent_EventTag_1' has a wrong offset!");
static_assert(offsetof(GA_SkeletonGuardmanSummoned_Resurrection_C_ExecuteUbergraph_GA_SkeletonGuardmanSummoned_Resurrection, K2Node_CustomEvent_EventData_1) == 0x000270, "Member 'GA_SkeletonGuardmanSummoned_Resurrection_C_ExecuteUbergraph_GA_SkeletonGuardmanSummoned_Resurrection::K2Node_CustomEvent_EventData_1' has a wrong offset!");
static_assert(offsetof(GA_SkeletonGuardmanSummoned_Resurrection_C_ExecuteUbergraph_GA_SkeletonGuardmanSummoned_Resurrection, K2Node_CreateDelegate_OutputDelegate_3) == 0x000320, "Member 'GA_SkeletonGuardmanSummoned_Resurrection_C_ExecuteUbergraph_GA_SkeletonGuardmanSummoned_Resurrection::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(GA_SkeletonGuardmanSummoned_Resurrection_C_ExecuteUbergraph_GA_SkeletonGuardmanSummoned_Resurrection, K2Node_CustomEvent_EventTag) == 0x000330, "Member 'GA_SkeletonGuardmanSummoned_Resurrection_C_ExecuteUbergraph_GA_SkeletonGuardmanSummoned_Resurrection::K2Node_CustomEvent_EventTag' has a wrong offset!");
static_assert(offsetof(GA_SkeletonGuardmanSummoned_Resurrection_C_ExecuteUbergraph_GA_SkeletonGuardmanSummoned_Resurrection, K2Node_CustomEvent_EventData) == 0x000338, "Member 'GA_SkeletonGuardmanSummoned_Resurrection_C_ExecuteUbergraph_GA_SkeletonGuardmanSummoned_Resurrection::K2Node_CustomEvent_EventData' has a wrong offset!");
static_assert(offsetof(GA_SkeletonGuardmanSummoned_Resurrection_C_ExecuteUbergraph_GA_SkeletonGuardmanSummoned_Resurrection, K2Node_CreateDelegate_OutputDelegate_4) == 0x0003E8, "Member 'GA_SkeletonGuardmanSummoned_Resurrection_C_ExecuteUbergraph_GA_SkeletonGuardmanSummoned_Resurrection::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(GA_SkeletonGuardmanSummoned_Resurrection_C_ExecuteUbergraph_GA_SkeletonGuardmanSummoned_Resurrection, Temp_struct_Variable) == 0x0003F8, "Member 'GA_SkeletonGuardmanSummoned_Resurrection_C_ExecuteUbergraph_GA_SkeletonGuardmanSummoned_Resurrection::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GA_SkeletonGuardmanSummoned_Resurrection_C_ExecuteUbergraph_GA_SkeletonGuardmanSummoned_Resurrection, Temp_struct_Variable_1) == 0x0004A8, "Member 'GA_SkeletonGuardmanSummoned_Resurrection_C_ExecuteUbergraph_GA_SkeletonGuardmanSummoned_Resurrection::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(GA_SkeletonGuardmanSummoned_Resurrection_C_ExecuteUbergraph_GA_SkeletonGuardmanSummoned_Resurrection, K2Node_Event_bWasCancelled) == 0x0004B0, "Member 'GA_SkeletonGuardmanSummoned_Resurrection_C_ExecuteUbergraph_GA_SkeletonGuardmanSummoned_Resurrection::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GA_SkeletonGuardmanSummoned_Resurrection_C_ExecuteUbergraph_GA_SkeletonGuardmanSummoned_Resurrection, CallFunc_PlayMontageAndWaitForEvent_ReturnValue) == 0x0004B8, "Member 'GA_SkeletonGuardmanSummoned_Resurrection_C_ExecuteUbergraph_GA_SkeletonGuardmanSummoned_Resurrection::CallFunc_PlayMontageAndWaitForEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SkeletonGuardmanSummoned_Resurrection_C_ExecuteUbergraph_GA_SkeletonGuardmanSummoned_Resurrection, CallFunc_RandomInteger_ReturnValue) == 0x0004C0, "Member 'GA_SkeletonGuardmanSummoned_Resurrection_C_ExecuteUbergraph_GA_SkeletonGuardmanSummoned_Resurrection::CallFunc_RandomInteger_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SkeletonGuardmanSummoned_Resurrection_C_ExecuteUbergraph_GA_SkeletonGuardmanSummoned_Resurrection, K2Node_SwitchInteger_CmpSuccess) == 0x0004C4, "Member 'GA_SkeletonGuardmanSummoned_Resurrection_C_ExecuteUbergraph_GA_SkeletonGuardmanSummoned_Resurrection::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(GA_SkeletonGuardmanSummoned_Resurrection_C_ExecuteUbergraph_GA_SkeletonGuardmanSummoned_Resurrection, CallFunc_IsValid_ReturnValue) == 0x0004C5, "Member 'GA_SkeletonGuardmanSummoned_Resurrection_C_ExecuteUbergraph_GA_SkeletonGuardmanSummoned_Resurrection::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SkeletonGuardmanSummoned_Resurrection_C_ExecuteUbergraph_GA_SkeletonGuardmanSummoned_Resurrection, CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1) == 0x0004C8, "Member 'GA_SkeletonGuardmanSummoned_Resurrection_C_ExecuteUbergraph_GA_SkeletonGuardmanSummoned_Resurrection::CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_SkeletonGuardmanSummoned_Resurrection_C_ExecuteUbergraph_GA_SkeletonGuardmanSummoned_Resurrection, K2Node_MakeArray_Array) == 0x0004D0, "Member 'GA_SkeletonGuardmanSummoned_Resurrection_C_ExecuteUbergraph_GA_SkeletonGuardmanSummoned_Resurrection::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(GA_SkeletonGuardmanSummoned_Resurrection_C_ExecuteUbergraph_GA_SkeletonGuardmanSummoned_Resurrection, K2Node_Event_TriggerEventData) == 0x0004E0, "Member 'GA_SkeletonGuardmanSummoned_Resurrection_C_ExecuteUbergraph_GA_SkeletonGuardmanSummoned_Resurrection::K2Node_Event_TriggerEventData' has a wrong offset!");
static_assert(offsetof(GA_SkeletonGuardmanSummoned_Resurrection_C_ExecuteUbergraph_GA_SkeletonGuardmanSummoned_Resurrection, CallFunc_ApplyGameplayEffectByIds_ReturnValue) == 0x000590, "Member 'GA_SkeletonGuardmanSummoned_Resurrection_C_ExecuteUbergraph_GA_SkeletonGuardmanSummoned_Resurrection::CallFunc_ApplyGameplayEffectByIds_ReturnValue' has a wrong offset!");

// Function GA_SkeletonGuardmanSummoned_Resurrection.GA_SkeletonGuardmanSummoned_Resurrection_C.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct GA_SkeletonGuardmanSummoned_Resurrection_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_SkeletonGuardmanSummoned_Resurrection_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GA_SkeletonGuardmanSummoned_Resurrection_C_K2_OnEndAbility");
static_assert(sizeof(GA_SkeletonGuardmanSummoned_Resurrection_C_K2_OnEndAbility) == 0x000001, "Wrong size on GA_SkeletonGuardmanSummoned_Resurrection_C_K2_OnEndAbility");
static_assert(offsetof(GA_SkeletonGuardmanSummoned_Resurrection_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GA_SkeletonGuardmanSummoned_Resurrection_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

// Function GA_SkeletonGuardmanSummoned_Resurrection.GA_SkeletonGuardmanSummoned_Resurrection_C.OnBlendOut_F5DB03154B705B01887AA294184B876B
// 0x00B8 (0x00B8 - 0x0000)
struct GA_SkeletonGuardmanSummoned_Resurrection_C_OnBlendOut_F5DB03154B705B01887AA294184B876B final
{
public:
	struct FGameplayTag                           EventTag;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     EventData;                                         // 0x0008(0x00B0)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GA_SkeletonGuardmanSummoned_Resurrection_C_OnBlendOut_F5DB03154B705B01887AA294184B876B) == 0x000008, "Wrong alignment on GA_SkeletonGuardmanSummoned_Resurrection_C_OnBlendOut_F5DB03154B705B01887AA294184B876B");
static_assert(sizeof(GA_SkeletonGuardmanSummoned_Resurrection_C_OnBlendOut_F5DB03154B705B01887AA294184B876B) == 0x0000B8, "Wrong size on GA_SkeletonGuardmanSummoned_Resurrection_C_OnBlendOut_F5DB03154B705B01887AA294184B876B");
static_assert(offsetof(GA_SkeletonGuardmanSummoned_Resurrection_C_OnBlendOut_F5DB03154B705B01887AA294184B876B, EventTag) == 0x000000, "Member 'GA_SkeletonGuardmanSummoned_Resurrection_C_OnBlendOut_F5DB03154B705B01887AA294184B876B::EventTag' has a wrong offset!");
static_assert(offsetof(GA_SkeletonGuardmanSummoned_Resurrection_C_OnBlendOut_F5DB03154B705B01887AA294184B876B, EventData) == 0x000008, "Member 'GA_SkeletonGuardmanSummoned_Resurrection_C_OnBlendOut_F5DB03154B705B01887AA294184B876B::EventData' has a wrong offset!");

// Function GA_SkeletonGuardmanSummoned_Resurrection.GA_SkeletonGuardmanSummoned_Resurrection_C.OnCancelled_F5DB03154B705B01887AA294184B876B
// 0x00B8 (0x00B8 - 0x0000)
struct GA_SkeletonGuardmanSummoned_Resurrection_C_OnCancelled_F5DB03154B705B01887AA294184B876B final
{
public:
	struct FGameplayTag                           EventTag;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     EventData;                                         // 0x0008(0x00B0)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GA_SkeletonGuardmanSummoned_Resurrection_C_OnCancelled_F5DB03154B705B01887AA294184B876B) == 0x000008, "Wrong alignment on GA_SkeletonGuardmanSummoned_Resurrection_C_OnCancelled_F5DB03154B705B01887AA294184B876B");
static_assert(sizeof(GA_SkeletonGuardmanSummoned_Resurrection_C_OnCancelled_F5DB03154B705B01887AA294184B876B) == 0x0000B8, "Wrong size on GA_SkeletonGuardmanSummoned_Resurrection_C_OnCancelled_F5DB03154B705B01887AA294184B876B");
static_assert(offsetof(GA_SkeletonGuardmanSummoned_Resurrection_C_OnCancelled_F5DB03154B705B01887AA294184B876B, EventTag) == 0x000000, "Member 'GA_SkeletonGuardmanSummoned_Resurrection_C_OnCancelled_F5DB03154B705B01887AA294184B876B::EventTag' has a wrong offset!");
static_assert(offsetof(GA_SkeletonGuardmanSummoned_Resurrection_C_OnCancelled_F5DB03154B705B01887AA294184B876B, EventData) == 0x000008, "Member 'GA_SkeletonGuardmanSummoned_Resurrection_C_OnCancelled_F5DB03154B705B01887AA294184B876B::EventData' has a wrong offset!");

// Function GA_SkeletonGuardmanSummoned_Resurrection.GA_SkeletonGuardmanSummoned_Resurrection_C.OnCompleted_F5DB03154B705B01887AA294184B876B
// 0x00B8 (0x00B8 - 0x0000)
struct GA_SkeletonGuardmanSummoned_Resurrection_C_OnCompleted_F5DB03154B705B01887AA294184B876B final
{
public:
	struct FGameplayTag                           EventTag;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     EventData;                                         // 0x0008(0x00B0)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GA_SkeletonGuardmanSummoned_Resurrection_C_OnCompleted_F5DB03154B705B01887AA294184B876B) == 0x000008, "Wrong alignment on GA_SkeletonGuardmanSummoned_Resurrection_C_OnCompleted_F5DB03154B705B01887AA294184B876B");
static_assert(sizeof(GA_SkeletonGuardmanSummoned_Resurrection_C_OnCompleted_F5DB03154B705B01887AA294184B876B) == 0x0000B8, "Wrong size on GA_SkeletonGuardmanSummoned_Resurrection_C_OnCompleted_F5DB03154B705B01887AA294184B876B");
static_assert(offsetof(GA_SkeletonGuardmanSummoned_Resurrection_C_OnCompleted_F5DB03154B705B01887AA294184B876B, EventTag) == 0x000000, "Member 'GA_SkeletonGuardmanSummoned_Resurrection_C_OnCompleted_F5DB03154B705B01887AA294184B876B::EventTag' has a wrong offset!");
static_assert(offsetof(GA_SkeletonGuardmanSummoned_Resurrection_C_OnCompleted_F5DB03154B705B01887AA294184B876B, EventData) == 0x000008, "Member 'GA_SkeletonGuardmanSummoned_Resurrection_C_OnCompleted_F5DB03154B705B01887AA294184B876B::EventData' has a wrong offset!");

// Function GA_SkeletonGuardmanSummoned_Resurrection.GA_SkeletonGuardmanSummoned_Resurrection_C.OnInterrupted_F5DB03154B705B01887AA294184B876B
// 0x00B8 (0x00B8 - 0x0000)
struct GA_SkeletonGuardmanSummoned_Resurrection_C_OnInterrupted_F5DB03154B705B01887AA294184B876B final
{
public:
	struct FGameplayTag                           EventTag;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     EventData;                                         // 0x0008(0x00B0)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GA_SkeletonGuardmanSummoned_Resurrection_C_OnInterrupted_F5DB03154B705B01887AA294184B876B) == 0x000008, "Wrong alignment on GA_SkeletonGuardmanSummoned_Resurrection_C_OnInterrupted_F5DB03154B705B01887AA294184B876B");
static_assert(sizeof(GA_SkeletonGuardmanSummoned_Resurrection_C_OnInterrupted_F5DB03154B705B01887AA294184B876B) == 0x0000B8, "Wrong size on GA_SkeletonGuardmanSummoned_Resurrection_C_OnInterrupted_F5DB03154B705B01887AA294184B876B");
static_assert(offsetof(GA_SkeletonGuardmanSummoned_Resurrection_C_OnInterrupted_F5DB03154B705B01887AA294184B876B, EventTag) == 0x000000, "Member 'GA_SkeletonGuardmanSummoned_Resurrection_C_OnInterrupted_F5DB03154B705B01887AA294184B876B::EventTag' has a wrong offset!");
static_assert(offsetof(GA_SkeletonGuardmanSummoned_Resurrection_C_OnInterrupted_F5DB03154B705B01887AA294184B876B, EventData) == 0x000008, "Member 'GA_SkeletonGuardmanSummoned_Resurrection_C_OnInterrupted_F5DB03154B705B01887AA294184B876B::EventData' has a wrong offset!");

}

