#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_HydraProjectile

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "AkAudio_structs.hpp"


namespace SDK::Params
{

// Function BP_HydraProjectile.BP_HydraProjectile_C.ExecuteUbergraph_BP_HydraProjectile
// 0x003C (0x003C - 0x0000)
struct BP_HydraProjectile_C_ExecuteUbergraph_BP_HydraProjectile final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable;                            // 0x0004(0x0010)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable_1;                          // 0x0014(0x0010)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PostAkEvent_ReturnValue;                  // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           K2Node_Event_InGameplayTag;                        // 0x0028(0x0008)(ConstParm, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_InCount;                              // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_MatchesTag_ReturnValue;                   // 0x0036(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4FF3[0x1];                                     // 0x0037(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PostAkEvent_ReturnValue_1;                // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_HydraProjectile_C_ExecuteUbergraph_BP_HydraProjectile) == 0x000004, "Wrong alignment on BP_HydraProjectile_C_ExecuteUbergraph_BP_HydraProjectile");
static_assert(sizeof(BP_HydraProjectile_C_ExecuteUbergraph_BP_HydraProjectile) == 0x00003C, "Wrong size on BP_HydraProjectile_C_ExecuteUbergraph_BP_HydraProjectile");
static_assert(offsetof(BP_HydraProjectile_C_ExecuteUbergraph_BP_HydraProjectile, EntryPoint) == 0x000000, "Member 'BP_HydraProjectile_C_ExecuteUbergraph_BP_HydraProjectile::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_HydraProjectile_C_ExecuteUbergraph_BP_HydraProjectile, Temp_delegate_Variable) == 0x000004, "Member 'BP_HydraProjectile_C_ExecuteUbergraph_BP_HydraProjectile::Temp_delegate_Variable' has a wrong offset!");
static_assert(offsetof(BP_HydraProjectile_C_ExecuteUbergraph_BP_HydraProjectile, Temp_delegate_Variable_1) == 0x000014, "Member 'BP_HydraProjectile_C_ExecuteUbergraph_BP_HydraProjectile::Temp_delegate_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_HydraProjectile_C_ExecuteUbergraph_BP_HydraProjectile, CallFunc_PostAkEvent_ReturnValue) == 0x000024, "Member 'BP_HydraProjectile_C_ExecuteUbergraph_BP_HydraProjectile::CallFunc_PostAkEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HydraProjectile_C_ExecuteUbergraph_BP_HydraProjectile, K2Node_Event_InGameplayTag) == 0x000028, "Member 'BP_HydraProjectile_C_ExecuteUbergraph_BP_HydraProjectile::K2Node_Event_InGameplayTag' has a wrong offset!");
static_assert(offsetof(BP_HydraProjectile_C_ExecuteUbergraph_BP_HydraProjectile, K2Node_Event_InCount) == 0x000030, "Member 'BP_HydraProjectile_C_ExecuteUbergraph_BP_HydraProjectile::K2Node_Event_InCount' has a wrong offset!");
static_assert(offsetof(BP_HydraProjectile_C_ExecuteUbergraph_BP_HydraProjectile, K2Node_Event_EndPlayReason) == 0x000034, "Member 'BP_HydraProjectile_C_ExecuteUbergraph_BP_HydraProjectile::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(BP_HydraProjectile_C_ExecuteUbergraph_BP_HydraProjectile, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000035, "Member 'BP_HydraProjectile_C_ExecuteUbergraph_BP_HydraProjectile::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HydraProjectile_C_ExecuteUbergraph_BP_HydraProjectile, CallFunc_MatchesTag_ReturnValue) == 0x000036, "Member 'BP_HydraProjectile_C_ExecuteUbergraph_BP_HydraProjectile::CallFunc_MatchesTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HydraProjectile_C_ExecuteUbergraph_BP_HydraProjectile, CallFunc_PostAkEvent_ReturnValue_1) == 0x000038, "Member 'BP_HydraProjectile_C_ExecuteUbergraph_BP_HydraProjectile::CallFunc_PostAkEvent_ReturnValue_1' has a wrong offset!");

// Function BP_HydraProjectile.BP_HydraProjectile_C.GameplayTagUpdated
// 0x000C (0x000C - 0x0000)
struct BP_HydraProjectile_C_GameplayTagUpdated final
{
public:
	struct FGameplayTag                           InGameplayTag;                                     // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	int32                                         InCount;                                           // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_HydraProjectile_C_GameplayTagUpdated) == 0x000004, "Wrong alignment on BP_HydraProjectile_C_GameplayTagUpdated");
static_assert(sizeof(BP_HydraProjectile_C_GameplayTagUpdated) == 0x00000C, "Wrong size on BP_HydraProjectile_C_GameplayTagUpdated");
static_assert(offsetof(BP_HydraProjectile_C_GameplayTagUpdated, InGameplayTag) == 0x000000, "Member 'BP_HydraProjectile_C_GameplayTagUpdated::InGameplayTag' has a wrong offset!");
static_assert(offsetof(BP_HydraProjectile_C_GameplayTagUpdated, InCount) == 0x000008, "Member 'BP_HydraProjectile_C_GameplayTagUpdated::InCount' has a wrong offset!");

// Function BP_HydraProjectile.BP_HydraProjectile_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct BP_HydraProjectile_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_HydraProjectile_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on BP_HydraProjectile_C_ReceiveEndPlay");
static_assert(sizeof(BP_HydraProjectile_C_ReceiveEndPlay) == 0x000001, "Wrong size on BP_HydraProjectile_C_ReceiveEndPlay");
static_assert(offsetof(BP_HydraProjectile_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'BP_HydraProjectile_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

}

