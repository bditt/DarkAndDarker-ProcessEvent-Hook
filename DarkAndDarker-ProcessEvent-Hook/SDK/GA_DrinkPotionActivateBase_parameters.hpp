#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_DrinkPotionActivateBase

#include "Basic.hpp"


namespace SDK::Params
{

// Function GA_DrinkPotionActivateBase.GA_DrinkPotionActivateBase_C.ExecuteUbergraph_GA_DrinkPotionActivateBase
// 0x0048 (0x0048 - 0x0000)
struct GA_DrinkPotionActivateBase_C_ExecuteUbergraph_GA_DrinkPotionActivateBase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46AA[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilityTask_WaitDelay*                 CallFunc_WaitDelay_ReturnValue;                    // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0020(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46AB[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilityTask_WaitGameplayTagRemoved*    CallFunc_WaitGameplayTagRemove_ReturnValue;        // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_DrinkPotionActivateBase_C_ExecuteUbergraph_GA_DrinkPotionActivateBase) == 0x000008, "Wrong alignment on GA_DrinkPotionActivateBase_C_ExecuteUbergraph_GA_DrinkPotionActivateBase");
static_assert(sizeof(GA_DrinkPotionActivateBase_C_ExecuteUbergraph_GA_DrinkPotionActivateBase) == 0x000048, "Wrong size on GA_DrinkPotionActivateBase_C_ExecuteUbergraph_GA_DrinkPotionActivateBase");
static_assert(offsetof(GA_DrinkPotionActivateBase_C_ExecuteUbergraph_GA_DrinkPotionActivateBase, EntryPoint) == 0x000000, "Member 'GA_DrinkPotionActivateBase_C_ExecuteUbergraph_GA_DrinkPotionActivateBase::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_DrinkPotionActivateBase_C_ExecuteUbergraph_GA_DrinkPotionActivateBase, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'GA_DrinkPotionActivateBase_C_ExecuteUbergraph_GA_DrinkPotionActivateBase::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_DrinkPotionActivateBase_C_ExecuteUbergraph_GA_DrinkPotionActivateBase, CallFunc_WaitDelay_ReturnValue) == 0x000018, "Member 'GA_DrinkPotionActivateBase_C_ExecuteUbergraph_GA_DrinkPotionActivateBase::CallFunc_WaitDelay_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_DrinkPotionActivateBase_C_ExecuteUbergraph_GA_DrinkPotionActivateBase, K2Node_CreateDelegate_OutputDelegate_1) == 0x000020, "Member 'GA_DrinkPotionActivateBase_C_ExecuteUbergraph_GA_DrinkPotionActivateBase::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GA_DrinkPotionActivateBase_C_ExecuteUbergraph_GA_DrinkPotionActivateBase, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'GA_DrinkPotionActivateBase_C_ExecuteUbergraph_GA_DrinkPotionActivateBase::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_DrinkPotionActivateBase_C_ExecuteUbergraph_GA_DrinkPotionActivateBase, CallFunc_WaitGameplayTagRemove_ReturnValue) == 0x000038, "Member 'GA_DrinkPotionActivateBase_C_ExecuteUbergraph_GA_DrinkPotionActivateBase::CallFunc_WaitGameplayTagRemove_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_DrinkPotionActivateBase_C_ExecuteUbergraph_GA_DrinkPotionActivateBase, CallFunc_IsValid_ReturnValue_1) == 0x000040, "Member 'GA_DrinkPotionActivateBase_C_ExecuteUbergraph_GA_DrinkPotionActivateBase::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

}

