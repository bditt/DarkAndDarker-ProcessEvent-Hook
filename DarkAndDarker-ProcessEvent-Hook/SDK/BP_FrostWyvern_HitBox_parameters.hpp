#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FrostWyvern_HitBox

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function BP_FrostWyvern_HitBox.BP_FrostWyvern_HitBox_C.EventReceived_320489B14061A855CE80A59002CAE9D5
// 0x00B0 (0x00B0 - 0x0000)
struct BP_FrostWyvern_HitBox_C_EventReceived_320489B14061A855CE80A59002CAE9D5 final
{
public:
	struct FGameplayEventData                     Payload;                                           // 0x0000(0x00B0)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(BP_FrostWyvern_HitBox_C_EventReceived_320489B14061A855CE80A59002CAE9D5) == 0x000008, "Wrong alignment on BP_FrostWyvern_HitBox_C_EventReceived_320489B14061A855CE80A59002CAE9D5");
static_assert(sizeof(BP_FrostWyvern_HitBox_C_EventReceived_320489B14061A855CE80A59002CAE9D5) == 0x0000B0, "Wrong size on BP_FrostWyvern_HitBox_C_EventReceived_320489B14061A855CE80A59002CAE9D5");
static_assert(offsetof(BP_FrostWyvern_HitBox_C_EventReceived_320489B14061A855CE80A59002CAE9D5, Payload) == 0x000000, "Member 'BP_FrostWyvern_HitBox_C_EventReceived_320489B14061A855CE80A59002CAE9D5::Payload' has a wrong offset!");

// Function BP_FrostWyvern_HitBox.BP_FrostWyvern_HitBox_C.ExecuteUbergraph_BP_FrostWyvern_HitBox
// 0x0190 (0x0190 - 0x0000)
struct BP_FrostWyvern_HitBox_C_ExecuteUbergraph_BP_FrostWyvern_HitBox final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4552[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_CustomEvent_Payload;                        // 0x0008(0x00B0)()
	TDelegate<void(const struct FGameplayEventData& Payload)> K2Node_CreateDelegate_OutputDelegate;              // 0x00B8(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     Temp_struct_Variable;                              // 0x00C8(0x00B0)()
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0178(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAbilityAsync_WaitGameplayEvent*        CallFunc_WaitGameplayEventToActor_ReturnValue;     // 0x0180(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FrostWyvern_HitBox_C_ExecuteUbergraph_BP_FrostWyvern_HitBox) == 0x000008, "Wrong alignment on BP_FrostWyvern_HitBox_C_ExecuteUbergraph_BP_FrostWyvern_HitBox");
static_assert(sizeof(BP_FrostWyvern_HitBox_C_ExecuteUbergraph_BP_FrostWyvern_HitBox) == 0x000190, "Wrong size on BP_FrostWyvern_HitBox_C_ExecuteUbergraph_BP_FrostWyvern_HitBox");
static_assert(offsetof(BP_FrostWyvern_HitBox_C_ExecuteUbergraph_BP_FrostWyvern_HitBox, EntryPoint) == 0x000000, "Member 'BP_FrostWyvern_HitBox_C_ExecuteUbergraph_BP_FrostWyvern_HitBox::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_FrostWyvern_HitBox_C_ExecuteUbergraph_BP_FrostWyvern_HitBox, K2Node_CustomEvent_Payload) == 0x000008, "Member 'BP_FrostWyvern_HitBox_C_ExecuteUbergraph_BP_FrostWyvern_HitBox::K2Node_CustomEvent_Payload' has a wrong offset!");
static_assert(offsetof(BP_FrostWyvern_HitBox_C_ExecuteUbergraph_BP_FrostWyvern_HitBox, K2Node_CreateDelegate_OutputDelegate) == 0x0000B8, "Member 'BP_FrostWyvern_HitBox_C_ExecuteUbergraph_BP_FrostWyvern_HitBox::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_FrostWyvern_HitBox_C_ExecuteUbergraph_BP_FrostWyvern_HitBox, Temp_struct_Variable) == 0x0000C8, "Member 'BP_FrostWyvern_HitBox_C_ExecuteUbergraph_BP_FrostWyvern_HitBox::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(BP_FrostWyvern_HitBox_C_ExecuteUbergraph_BP_FrostWyvern_HitBox, CallFunc_GetOwner_ReturnValue) == 0x000178, "Member 'BP_FrostWyvern_HitBox_C_ExecuteUbergraph_BP_FrostWyvern_HitBox::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FrostWyvern_HitBox_C_ExecuteUbergraph_BP_FrostWyvern_HitBox, CallFunc_WaitGameplayEventToActor_ReturnValue) == 0x000180, "Member 'BP_FrostWyvern_HitBox_C_ExecuteUbergraph_BP_FrostWyvern_HitBox::CallFunc_WaitGameplayEventToActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FrostWyvern_HitBox_C_ExecuteUbergraph_BP_FrostWyvern_HitBox, CallFunc_IsValid_ReturnValue) == 0x000188, "Member 'BP_FrostWyvern_HitBox_C_ExecuteUbergraph_BP_FrostWyvern_HitBox::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

