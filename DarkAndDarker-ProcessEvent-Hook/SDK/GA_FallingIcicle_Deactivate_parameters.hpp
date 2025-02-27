#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_FallingIcicle_Deactivate

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GA_FallingIcicle_Deactivate.GA_FallingIcicle_Deactivate_C.ExecuteUbergraph_GA_FallingIcicle_Deactivate
// 0x0118 (0x0118 - 0x0000)
struct GA_FallingIcicle_Deactivate_C_ExecuteUbergraph_GA_FallingIcicle_Deactivate final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bWasCancelled;                        // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4122[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     Temp_struct_Variable;                              // 0x0018(0x00B0)(ConstParm)
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x00C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FActiveGameplayEffectHandle>    CallFunc_ApplyEffectContainer_ReturnValue;         // 0x00D0(0x0010)(ReferenceParm)
	class ABP_FallingIcicleActor_C*               K2Node_DynamicCast_AsBP_Falling_Icicle_Actor;      // 0x00E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4123[0x7];                                     // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_RandomFloatInRange_ReturnValue;           // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGameplayTaskOwnerInterface> CallFunc_TaskWaitDelay_TaskOwner_CastInput;        // 0x00F8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UGameplayTask_WaitDelay*                CallFunc_TaskWaitDelay_ReturnValue;                // 0x0108(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4124[0x3];                                     // 0x0111(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_TaskWaitDelay_Time_ImplicitCast;          // 0x0114(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_FallingIcicle_Deactivate_C_ExecuteUbergraph_GA_FallingIcicle_Deactivate) == 0x000008, "Wrong alignment on GA_FallingIcicle_Deactivate_C_ExecuteUbergraph_GA_FallingIcicle_Deactivate");
static_assert(sizeof(GA_FallingIcicle_Deactivate_C_ExecuteUbergraph_GA_FallingIcicle_Deactivate) == 0x000118, "Wrong size on GA_FallingIcicle_Deactivate_C_ExecuteUbergraph_GA_FallingIcicle_Deactivate");
static_assert(offsetof(GA_FallingIcicle_Deactivate_C_ExecuteUbergraph_GA_FallingIcicle_Deactivate, EntryPoint) == 0x000000, "Member 'GA_FallingIcicle_Deactivate_C_ExecuteUbergraph_GA_FallingIcicle_Deactivate::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_FallingIcicle_Deactivate_C_ExecuteUbergraph_GA_FallingIcicle_Deactivate, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'GA_FallingIcicle_Deactivate_C_ExecuteUbergraph_GA_FallingIcicle_Deactivate::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_FallingIcicle_Deactivate_C_ExecuteUbergraph_GA_FallingIcicle_Deactivate, K2Node_Event_bWasCancelled) == 0x000014, "Member 'GA_FallingIcicle_Deactivate_C_ExecuteUbergraph_GA_FallingIcicle_Deactivate::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GA_FallingIcicle_Deactivate_C_ExecuteUbergraph_GA_FallingIcicle_Deactivate, Temp_struct_Variable) == 0x000018, "Member 'GA_FallingIcicle_Deactivate_C_ExecuteUbergraph_GA_FallingIcicle_Deactivate::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GA_FallingIcicle_Deactivate_C_ExecuteUbergraph_GA_FallingIcicle_Deactivate, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x0000C8, "Member 'GA_FallingIcicle_Deactivate_C_ExecuteUbergraph_GA_FallingIcicle_Deactivate::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_FallingIcicle_Deactivate_C_ExecuteUbergraph_GA_FallingIcicle_Deactivate, CallFunc_ApplyEffectContainer_ReturnValue) == 0x0000D0, "Member 'GA_FallingIcicle_Deactivate_C_ExecuteUbergraph_GA_FallingIcicle_Deactivate::CallFunc_ApplyEffectContainer_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_FallingIcicle_Deactivate_C_ExecuteUbergraph_GA_FallingIcicle_Deactivate, K2Node_DynamicCast_AsBP_Falling_Icicle_Actor) == 0x0000E0, "Member 'GA_FallingIcicle_Deactivate_C_ExecuteUbergraph_GA_FallingIcicle_Deactivate::K2Node_DynamicCast_AsBP_Falling_Icicle_Actor' has a wrong offset!");
static_assert(offsetof(GA_FallingIcicle_Deactivate_C_ExecuteUbergraph_GA_FallingIcicle_Deactivate, K2Node_DynamicCast_bSuccess) == 0x0000E8, "Member 'GA_FallingIcicle_Deactivate_C_ExecuteUbergraph_GA_FallingIcicle_Deactivate::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_FallingIcicle_Deactivate_C_ExecuteUbergraph_GA_FallingIcicle_Deactivate, CallFunc_RandomFloatInRange_ReturnValue) == 0x0000F0, "Member 'GA_FallingIcicle_Deactivate_C_ExecuteUbergraph_GA_FallingIcicle_Deactivate::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_FallingIcicle_Deactivate_C_ExecuteUbergraph_GA_FallingIcicle_Deactivate, CallFunc_TaskWaitDelay_TaskOwner_CastInput) == 0x0000F8, "Member 'GA_FallingIcicle_Deactivate_C_ExecuteUbergraph_GA_FallingIcicle_Deactivate::CallFunc_TaskWaitDelay_TaskOwner_CastInput' has a wrong offset!");
static_assert(offsetof(GA_FallingIcicle_Deactivate_C_ExecuteUbergraph_GA_FallingIcicle_Deactivate, CallFunc_TaskWaitDelay_ReturnValue) == 0x000108, "Member 'GA_FallingIcicle_Deactivate_C_ExecuteUbergraph_GA_FallingIcicle_Deactivate::CallFunc_TaskWaitDelay_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_FallingIcicle_Deactivate_C_ExecuteUbergraph_GA_FallingIcicle_Deactivate, CallFunc_IsValid_ReturnValue) == 0x000110, "Member 'GA_FallingIcicle_Deactivate_C_ExecuteUbergraph_GA_FallingIcicle_Deactivate::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_FallingIcicle_Deactivate_C_ExecuteUbergraph_GA_FallingIcicle_Deactivate, CallFunc_TaskWaitDelay_Time_ImplicitCast) == 0x000114, "Member 'GA_FallingIcicle_Deactivate_C_ExecuteUbergraph_GA_FallingIcicle_Deactivate::CallFunc_TaskWaitDelay_Time_ImplicitCast' has a wrong offset!");

// Function GA_FallingIcicle_Deactivate.GA_FallingIcicle_Deactivate_C.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct GA_FallingIcicle_Deactivate_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_FallingIcicle_Deactivate_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GA_FallingIcicle_Deactivate_C_K2_OnEndAbility");
static_assert(sizeof(GA_FallingIcicle_Deactivate_C_K2_OnEndAbility) == 0x000001, "Wrong size on GA_FallingIcicle_Deactivate_C_K2_OnEndAbility");
static_assert(offsetof(GA_FallingIcicle_Deactivate_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GA_FallingIcicle_Deactivate_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

}

