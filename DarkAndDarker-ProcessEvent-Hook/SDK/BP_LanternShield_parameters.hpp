#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LanternShield

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function BP_LanternShield.BP_LanternShield_C.ExecuteUbergraph_BP_LanternShield
// 0x0040 (0x0040 - 0x0000)
struct BP_LanternShield_C_ExecuteUbergraph_BP_LanternShield final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue_1;               // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4176[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           K2Node_Event_InGameplayTag;                        // 0x0008(0x0008)(ConstParm, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_InCount;                              // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;   // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4177[0x1];                                     // 0x0017(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4178[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4179[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue; // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RemoveGameplayTag_ReturnValue;            // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_LanternShield_C_ExecuteUbergraph_BP_LanternShield) == 0x000008, "Wrong alignment on BP_LanternShield_C_ExecuteUbergraph_BP_LanternShield");
static_assert(sizeof(BP_LanternShield_C_ExecuteUbergraph_BP_LanternShield) == 0x000040, "Wrong size on BP_LanternShield_C_ExecuteUbergraph_BP_LanternShield");
static_assert(offsetof(BP_LanternShield_C_ExecuteUbergraph_BP_LanternShield, EntryPoint) == 0x000000, "Member 'BP_LanternShield_C_ExecuteUbergraph_BP_LanternShield::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_LanternShield_C_ExecuteUbergraph_BP_LanternShield, CallFunc_HasAuthority_ReturnValue) == 0x000004, "Member 'BP_LanternShield_C_ExecuteUbergraph_BP_LanternShield::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LanternShield_C_ExecuteUbergraph_BP_LanternShield, CallFunc_HasAuthority_ReturnValue_1) == 0x000005, "Member 'BP_LanternShield_C_ExecuteUbergraph_BP_LanternShield::CallFunc_HasAuthority_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_LanternShield_C_ExecuteUbergraph_BP_LanternShield, K2Node_Event_InGameplayTag) == 0x000008, "Member 'BP_LanternShield_C_ExecuteUbergraph_BP_LanternShield::K2Node_Event_InGameplayTag' has a wrong offset!");
static_assert(offsetof(BP_LanternShield_C_ExecuteUbergraph_BP_LanternShield, K2Node_Event_InCount) == 0x000010, "Member 'BP_LanternShield_C_ExecuteUbergraph_BP_LanternShield::K2Node_Event_InCount' has a wrong offset!");
static_assert(offsetof(BP_LanternShield_C_ExecuteUbergraph_BP_LanternShield, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000014, "Member 'BP_LanternShield_C_ExecuteUbergraph_BP_LanternShield::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LanternShield_C_ExecuteUbergraph_BP_LanternShield, CallFunc_Not_PreBool_ReturnValue) == 0x000015, "Member 'BP_LanternShield_C_ExecuteUbergraph_BP_LanternShield::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LanternShield_C_ExecuteUbergraph_BP_LanternShield, GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess) == 0x000016, "Member 'BP_LanternShield_C_ExecuteUbergraph_BP_LanternShield::GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_LanternShield_C_ExecuteUbergraph_BP_LanternShield, CallFunc_GetOwner_ReturnValue) == 0x000018, "Member 'BP_LanternShield_C_ExecuteUbergraph_BP_LanternShield::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LanternShield_C_ExecuteUbergraph_BP_LanternShield, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'BP_LanternShield_C_ExecuteUbergraph_BP_LanternShield::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LanternShield_C_ExecuteUbergraph_BP_LanternShield, CallFunc_GetAbilitySystemComponent_ReturnValue) == 0x000028, "Member 'BP_LanternShield_C_ExecuteUbergraph_BP_LanternShield::CallFunc_GetAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LanternShield_C_ExecuteUbergraph_BP_LanternShield, CallFunc_IsValid_ReturnValue_1) == 0x000030, "Member 'BP_LanternShield_C_ExecuteUbergraph_BP_LanternShield::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_LanternShield_C_ExecuteUbergraph_BP_LanternShield, CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue) == 0x000034, "Member 'BP_LanternShield_C_ExecuteUbergraph_BP_LanternShield::CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LanternShield_C_ExecuteUbergraph_BP_LanternShield, CallFunc_RemoveGameplayTag_ReturnValue) == 0x000038, "Member 'BP_LanternShield_C_ExecuteUbergraph_BP_LanternShield::CallFunc_RemoveGameplayTag_ReturnValue' has a wrong offset!");

// Function BP_LanternShield.BP_LanternShield_C.GameplayTagUpdated
// 0x000C (0x000C - 0x0000)
struct BP_LanternShield_C_GameplayTagUpdated final
{
public:
	struct FGameplayTag                           InGameplayTag;                                     // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	int32                                         InCount;                                           // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_LanternShield_C_GameplayTagUpdated) == 0x000004, "Wrong alignment on BP_LanternShield_C_GameplayTagUpdated");
static_assert(sizeof(BP_LanternShield_C_GameplayTagUpdated) == 0x00000C, "Wrong size on BP_LanternShield_C_GameplayTagUpdated");
static_assert(offsetof(BP_LanternShield_C_GameplayTagUpdated, InGameplayTag) == 0x000000, "Member 'BP_LanternShield_C_GameplayTagUpdated::InGameplayTag' has a wrong offset!");
static_assert(offsetof(BP_LanternShield_C_GameplayTagUpdated, InCount) == 0x000008, "Member 'BP_LanternShield_C_GameplayTagUpdated::InCount' has a wrong offset!");

}

