#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DeathBeetle_Common

#include "Basic.hpp"

#include "DungeonCrawler_structs.hpp"


namespace SDK::Params
{

// Function BP_DeathBeetle_Common.BP_DeathBeetle_Common_C.ExecuteUbergraph_BP_DeathBeetle_Common
// 0x0718 (0x0718 - 0x0000)
struct BP_DeathBeetle_Common_C_ExecuteUbergraph_BP_DeathBeetle_Common final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasMatchingGameplayTag_ReturnValue;       // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46B6[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue_1;               // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46B7[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilityAsync_WaitGameplayTagAdded*     CallFunc_WaitGameplayTagAddToActor_ReturnValue;    // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46B8[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMsgGASActorDieNotify                  K2Node_Event_InMsg;                                // 0x0030(0x06E8)(ConstParm, ContainsInstancedReference)
};
static_assert(alignof(BP_DeathBeetle_Common_C_ExecuteUbergraph_BP_DeathBeetle_Common) == 0x000008, "Wrong alignment on BP_DeathBeetle_Common_C_ExecuteUbergraph_BP_DeathBeetle_Common");
static_assert(sizeof(BP_DeathBeetle_Common_C_ExecuteUbergraph_BP_DeathBeetle_Common) == 0x000718, "Wrong size on BP_DeathBeetle_Common_C_ExecuteUbergraph_BP_DeathBeetle_Common");
static_assert(offsetof(BP_DeathBeetle_Common_C_ExecuteUbergraph_BP_DeathBeetle_Common, EntryPoint) == 0x000000, "Member 'BP_DeathBeetle_Common_C_ExecuteUbergraph_BP_DeathBeetle_Common::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_DeathBeetle_Common_C_ExecuteUbergraph_BP_DeathBeetle_Common, CallFunc_HasMatchingGameplayTag_ReturnValue) == 0x000004, "Member 'BP_DeathBeetle_Common_C_ExecuteUbergraph_BP_DeathBeetle_Common::CallFunc_HasMatchingGameplayTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DeathBeetle_Common_C_ExecuteUbergraph_BP_DeathBeetle_Common, CallFunc_HasAuthority_ReturnValue) == 0x000005, "Member 'BP_DeathBeetle_Common_C_ExecuteUbergraph_BP_DeathBeetle_Common::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DeathBeetle_Common_C_ExecuteUbergraph_BP_DeathBeetle_Common, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'BP_DeathBeetle_Common_C_ExecuteUbergraph_BP_DeathBeetle_Common::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_DeathBeetle_Common_C_ExecuteUbergraph_BP_DeathBeetle_Common, CallFunc_HasAuthority_ReturnValue_1) == 0x000018, "Member 'BP_DeathBeetle_Common_C_ExecuteUbergraph_BP_DeathBeetle_Common::CallFunc_HasAuthority_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DeathBeetle_Common_C_ExecuteUbergraph_BP_DeathBeetle_Common, CallFunc_WaitGameplayTagAddToActor_ReturnValue) == 0x000020, "Member 'BP_DeathBeetle_Common_C_ExecuteUbergraph_BP_DeathBeetle_Common::CallFunc_WaitGameplayTagAddToActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DeathBeetle_Common_C_ExecuteUbergraph_BP_DeathBeetle_Common, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'BP_DeathBeetle_Common_C_ExecuteUbergraph_BP_DeathBeetle_Common::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DeathBeetle_Common_C_ExecuteUbergraph_BP_DeathBeetle_Common, K2Node_Event_InMsg) == 0x000030, "Member 'BP_DeathBeetle_Common_C_ExecuteUbergraph_BP_DeathBeetle_Common::K2Node_Event_InMsg' has a wrong offset!");

// Function BP_DeathBeetle_Common.BP_DeathBeetle_Common_C.OnFMsgGASActorDieNotifyBlueprint
// 0x06E8 (0x06E8 - 0x0000)
struct BP_DeathBeetle_Common_C_OnFMsgGASActorDieNotifyBlueprint final
{
public:
	struct FMsgGASActorDieNotify                  InMsg;                                             // 0x0000(0x06E8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(BP_DeathBeetle_Common_C_OnFMsgGASActorDieNotifyBlueprint) == 0x000008, "Wrong alignment on BP_DeathBeetle_Common_C_OnFMsgGASActorDieNotifyBlueprint");
static_assert(sizeof(BP_DeathBeetle_Common_C_OnFMsgGASActorDieNotifyBlueprint) == 0x0006E8, "Wrong size on BP_DeathBeetle_Common_C_OnFMsgGASActorDieNotifyBlueprint");
static_assert(offsetof(BP_DeathBeetle_Common_C_OnFMsgGASActorDieNotifyBlueprint, InMsg) == 0x000000, "Member 'BP_DeathBeetle_Common_C_OnFMsgGASActorDieNotifyBlueprint::InMsg' has a wrong offset!");

}

