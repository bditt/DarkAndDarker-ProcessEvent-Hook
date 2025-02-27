#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Cockatrice_Common

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "DungeonCrawler_structs.hpp"


namespace SDK::Params
{

// Function BP_Cockatrice_Common.BP_Cockatrice_Common_C.EventFMsgSoundEvent
// 0x0028 (0x0028 - 0x0000)
struct BP_Cockatrice_Common_C_EventFMsgSoundEvent final
{
public:
	struct FMsgSoundEvent                         Msg;                                               // 0x0000(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(BP_Cockatrice_Common_C_EventFMsgSoundEvent) == 0x000008, "Wrong alignment on BP_Cockatrice_Common_C_EventFMsgSoundEvent");
static_assert(sizeof(BP_Cockatrice_Common_C_EventFMsgSoundEvent) == 0x000028, "Wrong size on BP_Cockatrice_Common_C_EventFMsgSoundEvent");
static_assert(offsetof(BP_Cockatrice_Common_C_EventFMsgSoundEvent, Msg) == 0x000000, "Member 'BP_Cockatrice_Common_C_EventFMsgSoundEvent::Msg' has a wrong offset!");

// Function BP_Cockatrice_Common.BP_Cockatrice_Common_C.ExecuteUbergraph_BP_Cockatrice_Common
// 0x0048 (0x0048 - 0x0000)
struct BP_Cockatrice_Common_C_ExecuteUbergraph_BP_Cockatrice_Common final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           K2Node_Event_InGameplayTag;                        // 0x0004(0x0008)(ConstParm, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_InCount;                              // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMsgSoundEvent                         K2Node_Event_Msg;                                  // 0x0010(0x0028)()
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;   // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess_1; // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_449B[0x1];                                     // 0x003B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_RandomIntegerInRange_ReturnValue;         // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Get_BB_Phase_Phase;                       // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Cockatrice_Common_C_ExecuteUbergraph_BP_Cockatrice_Common) == 0x000008, "Wrong alignment on BP_Cockatrice_Common_C_ExecuteUbergraph_BP_Cockatrice_Common");
static_assert(sizeof(BP_Cockatrice_Common_C_ExecuteUbergraph_BP_Cockatrice_Common) == 0x000048, "Wrong size on BP_Cockatrice_Common_C_ExecuteUbergraph_BP_Cockatrice_Common");
static_assert(offsetof(BP_Cockatrice_Common_C_ExecuteUbergraph_BP_Cockatrice_Common, EntryPoint) == 0x000000, "Member 'BP_Cockatrice_Common_C_ExecuteUbergraph_BP_Cockatrice_Common::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Cockatrice_Common_C_ExecuteUbergraph_BP_Cockatrice_Common, K2Node_Event_InGameplayTag) == 0x000004, "Member 'BP_Cockatrice_Common_C_ExecuteUbergraph_BP_Cockatrice_Common::K2Node_Event_InGameplayTag' has a wrong offset!");
static_assert(offsetof(BP_Cockatrice_Common_C_ExecuteUbergraph_BP_Cockatrice_Common, K2Node_Event_InCount) == 0x00000C, "Member 'BP_Cockatrice_Common_C_ExecuteUbergraph_BP_Cockatrice_Common::K2Node_Event_InCount' has a wrong offset!");
static_assert(offsetof(BP_Cockatrice_Common_C_ExecuteUbergraph_BP_Cockatrice_Common, K2Node_Event_Msg) == 0x000010, "Member 'BP_Cockatrice_Common_C_ExecuteUbergraph_BP_Cockatrice_Common::K2Node_Event_Msg' has a wrong offset!");
static_assert(offsetof(BP_Cockatrice_Common_C_ExecuteUbergraph_BP_Cockatrice_Common, CallFunc_Greater_IntInt_ReturnValue) == 0x000038, "Member 'BP_Cockatrice_Common_C_ExecuteUbergraph_BP_Cockatrice_Common::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Cockatrice_Common_C_ExecuteUbergraph_BP_Cockatrice_Common, GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess) == 0x000039, "Member 'BP_Cockatrice_Common_C_ExecuteUbergraph_BP_Cockatrice_Common::GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_Cockatrice_Common_C_ExecuteUbergraph_BP_Cockatrice_Common, GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess_1) == 0x00003A, "Member 'BP_Cockatrice_Common_C_ExecuteUbergraph_BP_Cockatrice_Common::GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_Cockatrice_Common_C_ExecuteUbergraph_BP_Cockatrice_Common, CallFunc_RandomIntegerInRange_ReturnValue) == 0x00003C, "Member 'BP_Cockatrice_Common_C_ExecuteUbergraph_BP_Cockatrice_Common::CallFunc_RandomIntegerInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Cockatrice_Common_C_ExecuteUbergraph_BP_Cockatrice_Common, CallFunc_Get_BB_Phase_Phase) == 0x000040, "Member 'BP_Cockatrice_Common_C_ExecuteUbergraph_BP_Cockatrice_Common::CallFunc_Get_BB_Phase_Phase' has a wrong offset!");
static_assert(offsetof(BP_Cockatrice_Common_C_ExecuteUbergraph_BP_Cockatrice_Common, CallFunc_Add_IntInt_ReturnValue) == 0x000044, "Member 'BP_Cockatrice_Common_C_ExecuteUbergraph_BP_Cockatrice_Common::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function BP_Cockatrice_Common.BP_Cockatrice_Common_C.GameplayTagUpdated
// 0x000C (0x000C - 0x0000)
struct BP_Cockatrice_Common_C_GameplayTagUpdated final
{
public:
	struct FGameplayTag                           InGameplayTag;                                     // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	int32                                         InCount;                                           // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Cockatrice_Common_C_GameplayTagUpdated) == 0x000004, "Wrong alignment on BP_Cockatrice_Common_C_GameplayTagUpdated");
static_assert(sizeof(BP_Cockatrice_Common_C_GameplayTagUpdated) == 0x00000C, "Wrong size on BP_Cockatrice_Common_C_GameplayTagUpdated");
static_assert(offsetof(BP_Cockatrice_Common_C_GameplayTagUpdated, InGameplayTag) == 0x000000, "Member 'BP_Cockatrice_Common_C_GameplayTagUpdated::InGameplayTag' has a wrong offset!");
static_assert(offsetof(BP_Cockatrice_Common_C_GameplayTagUpdated, InCount) == 0x000008, "Member 'BP_Cockatrice_Common_C_GameplayTagUpdated::InCount' has a wrong offset!");

}

