#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_PlayerCharacterCapture

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function ABP_PlayerCharacterCapture.ABP_PlayerCharacterCapture_C.OnChangedStandIdle
// 0x0018 (0x0018 - 0x0000)
struct ABP_PlayerCharacterCapture_C_OnChangedStandIdle final
{
public:
	class UAnimSequence*                          Param_ItemStandIdleAnimation;                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           ItemHandType;                                      // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           ItemSlotType;                                      // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_PlayerCharacterCapture_C_OnChangedStandIdle) == 0x000008, "Wrong alignment on ABP_PlayerCharacterCapture_C_OnChangedStandIdle");
static_assert(sizeof(ABP_PlayerCharacterCapture_C_OnChangedStandIdle) == 0x000018, "Wrong size on ABP_PlayerCharacterCapture_C_OnChangedStandIdle");
static_assert(offsetof(ABP_PlayerCharacterCapture_C_OnChangedStandIdle, Param_ItemStandIdleAnimation) == 0x000000, "Member 'ABP_PlayerCharacterCapture_C_OnChangedStandIdle::Param_ItemStandIdleAnimation' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacterCapture_C_OnChangedStandIdle, ItemHandType) == 0x000008, "Member 'ABP_PlayerCharacterCapture_C_OnChangedStandIdle::ItemHandType' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacterCapture_C_OnChangedStandIdle, ItemSlotType) == 0x000010, "Member 'ABP_PlayerCharacterCapture_C_OnChangedStandIdle::ItemSlotType' has a wrong offset!");

// Function ABP_PlayerCharacterCapture.ABP_PlayerCharacterCapture_C.ExecuteUbergraph_ABP_PlayerCharacterCapture
// 0x0028 (0x0028 - 0x0000)
struct ABP_PlayerCharacterCapture_C_ExecuteUbergraph_ABP_PlayerCharacterCapture final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E50[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimSequence*                          K2Node_CustomEvent_ItemStandIdleAnimation;         // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           K2Node_CustomEvent_ItemHandType;                   // 0x0010(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           K2Node_CustomEvent_ItemSlotType;                   // 0x0018(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_MatchesTag_ReturnValue;                   // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_MatchesTag_ReturnValue_1;                 // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_PlayerCharacterCapture_C_ExecuteUbergraph_ABP_PlayerCharacterCapture) == 0x000008, "Wrong alignment on ABP_PlayerCharacterCapture_C_ExecuteUbergraph_ABP_PlayerCharacterCapture");
static_assert(sizeof(ABP_PlayerCharacterCapture_C_ExecuteUbergraph_ABP_PlayerCharacterCapture) == 0x000028, "Wrong size on ABP_PlayerCharacterCapture_C_ExecuteUbergraph_ABP_PlayerCharacterCapture");
static_assert(offsetof(ABP_PlayerCharacterCapture_C_ExecuteUbergraph_ABP_PlayerCharacterCapture, EntryPoint) == 0x000000, "Member 'ABP_PlayerCharacterCapture_C_ExecuteUbergraph_ABP_PlayerCharacterCapture::EntryPoint' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacterCapture_C_ExecuteUbergraph_ABP_PlayerCharacterCapture, K2Node_CustomEvent_ItemStandIdleAnimation) == 0x000008, "Member 'ABP_PlayerCharacterCapture_C_ExecuteUbergraph_ABP_PlayerCharacterCapture::K2Node_CustomEvent_ItemStandIdleAnimation' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacterCapture_C_ExecuteUbergraph_ABP_PlayerCharacterCapture, K2Node_CustomEvent_ItemHandType) == 0x000010, "Member 'ABP_PlayerCharacterCapture_C_ExecuteUbergraph_ABP_PlayerCharacterCapture::K2Node_CustomEvent_ItemHandType' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacterCapture_C_ExecuteUbergraph_ABP_PlayerCharacterCapture, K2Node_CustomEvent_ItemSlotType) == 0x000018, "Member 'ABP_PlayerCharacterCapture_C_ExecuteUbergraph_ABP_PlayerCharacterCapture::K2Node_CustomEvent_ItemSlotType' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacterCapture_C_ExecuteUbergraph_ABP_PlayerCharacterCapture, CallFunc_MatchesTag_ReturnValue) == 0x000020, "Member 'ABP_PlayerCharacterCapture_C_ExecuteUbergraph_ABP_PlayerCharacterCapture::CallFunc_MatchesTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacterCapture_C_ExecuteUbergraph_ABP_PlayerCharacterCapture, CallFunc_MatchesTag_ReturnValue_1) == 0x000021, "Member 'ABP_PlayerCharacterCapture_C_ExecuteUbergraph_ABP_PlayerCharacterCapture::CallFunc_MatchesTag_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacterCapture_C_ExecuteUbergraph_ABP_PlayerCharacterCapture, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000022, "Member 'ABP_PlayerCharacterCapture_C_ExecuteUbergraph_ABP_PlayerCharacterCapture::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");

// Function ABP_PlayerCharacterCapture.ABP_PlayerCharacterCapture_C.BlueprintThreadSafeUpdateAnimation
// 0x0058 (0x0058 - 0x0000)
struct ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E51[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetCurveValue_ReturnValue;                // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetCurveValue_ReturnValue_1;              // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetCurveValue_ReturnValue_2;              // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_2;    // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_3;    // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_4;    // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_5;    // 0x0017(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_6;    // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_7;    // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_8;    // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_2;                  // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_3;                  // 0x001E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_4;                  // 0x001F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_5;                  // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_9;    // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_6;                  // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_10;   // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_7;                  // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_11;   // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_8;                  // 0x0026(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_12;   // 0x0027(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_13;   // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_14;   // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_15;   // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_16;   // 0x002B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_17;   // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_18;   // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_9;                  // 0x002E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_19;   // 0x002F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_10;                 // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_20;   // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_11;                 // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_12;                 // 0x0033(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_13;                 // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_14;                 // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_15;                 // 0x0036(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_16;                 // 0x0037(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_17;                 // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_18;                 // 0x003B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E52[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        K2Node_VariableSet_CupOfCoffeeCurveValue_ImplicitCast; // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_VariableSet_SmokingPipeCurveValue_ImplicitCast; // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_VariableSet_IKHandRWeight_ImplicitCast;     // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation) == 0x000008, "Wrong alignment on ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation");
static_assert(sizeof(ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation) == 0x000058, "Wrong size on ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation");
static_assert(offsetof(ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation, DeltaTime) == 0x000000, "Member 'ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation::DeltaTime' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000004, "Member 'ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation, CallFunc_EqualEqual_ObjectObject_ReturnValue_1) == 0x000005, "Member 'ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation::CallFunc_EqualEqual_ObjectObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation, CallFunc_GetCurveValue_ReturnValue) == 0x000008, "Member 'ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation::CallFunc_GetCurveValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation, CallFunc_GetCurveValue_ReturnValue_1) == 0x00000C, "Member 'ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation::CallFunc_GetCurveValue_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation, CallFunc_GetCurveValue_ReturnValue_2) == 0x000010, "Member 'ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation::CallFunc_GetCurveValue_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation, CallFunc_EqualEqual_ObjectObject_ReturnValue_2) == 0x000014, "Member 'ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation::CallFunc_EqualEqual_ObjectObject_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation, CallFunc_EqualEqual_ObjectObject_ReturnValue_3) == 0x000015, "Member 'ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation::CallFunc_EqualEqual_ObjectObject_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation, CallFunc_EqualEqual_ObjectObject_ReturnValue_4) == 0x000016, "Member 'ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation::CallFunc_EqualEqual_ObjectObject_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation, CallFunc_EqualEqual_ObjectObject_ReturnValue_5) == 0x000017, "Member 'ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation::CallFunc_EqualEqual_ObjectObject_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation, CallFunc_EqualEqual_ObjectObject_ReturnValue_6) == 0x000018, "Member 'ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation::CallFunc_EqualEqual_ObjectObject_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation, CallFunc_EqualEqual_ObjectObject_ReturnValue_7) == 0x000019, "Member 'ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation::CallFunc_EqualEqual_ObjectObject_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation, CallFunc_BooleanOR_ReturnValue) == 0x00001A, "Member 'ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation, CallFunc_BooleanOR_ReturnValue_1) == 0x00001B, "Member 'ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation, CallFunc_EqualEqual_ObjectObject_ReturnValue_8) == 0x00001C, "Member 'ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation::CallFunc_EqualEqual_ObjectObject_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation, CallFunc_BooleanOR_ReturnValue_2) == 0x00001D, "Member 'ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation, CallFunc_BooleanOR_ReturnValue_3) == 0x00001E, "Member 'ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation::CallFunc_BooleanOR_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation, CallFunc_BooleanOR_ReturnValue_4) == 0x00001F, "Member 'ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation::CallFunc_BooleanOR_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation, CallFunc_BooleanOR_ReturnValue_5) == 0x000020, "Member 'ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation::CallFunc_BooleanOR_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation, CallFunc_EqualEqual_ObjectObject_ReturnValue_9) == 0x000021, "Member 'ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation::CallFunc_EqualEqual_ObjectObject_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation, CallFunc_BooleanOR_ReturnValue_6) == 0x000022, "Member 'ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation::CallFunc_BooleanOR_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation, CallFunc_EqualEqual_ObjectObject_ReturnValue_10) == 0x000023, "Member 'ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation::CallFunc_EqualEqual_ObjectObject_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation, CallFunc_BooleanOR_ReturnValue_7) == 0x000024, "Member 'ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation::CallFunc_BooleanOR_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation, CallFunc_EqualEqual_ObjectObject_ReturnValue_11) == 0x000025, "Member 'ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation::CallFunc_EqualEqual_ObjectObject_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation, CallFunc_BooleanOR_ReturnValue_8) == 0x000026, "Member 'ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation::CallFunc_BooleanOR_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation, CallFunc_EqualEqual_ObjectObject_ReturnValue_12) == 0x000027, "Member 'ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation::CallFunc_EqualEqual_ObjectObject_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation, CallFunc_EqualEqual_ObjectObject_ReturnValue_13) == 0x000028, "Member 'ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation::CallFunc_EqualEqual_ObjectObject_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation, CallFunc_EqualEqual_ObjectObject_ReturnValue_14) == 0x000029, "Member 'ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation::CallFunc_EqualEqual_ObjectObject_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation, CallFunc_EqualEqual_ObjectObject_ReturnValue_15) == 0x00002A, "Member 'ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation::CallFunc_EqualEqual_ObjectObject_ReturnValue_15' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation, CallFunc_EqualEqual_ObjectObject_ReturnValue_16) == 0x00002B, "Member 'ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation::CallFunc_EqualEqual_ObjectObject_ReturnValue_16' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation, CallFunc_EqualEqual_ObjectObject_ReturnValue_17) == 0x00002C, "Member 'ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation::CallFunc_EqualEqual_ObjectObject_ReturnValue_17' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation, CallFunc_EqualEqual_ObjectObject_ReturnValue_18) == 0x00002D, "Member 'ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation::CallFunc_EqualEqual_ObjectObject_ReturnValue_18' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation, CallFunc_BooleanOR_ReturnValue_9) == 0x00002E, "Member 'ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation::CallFunc_BooleanOR_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation, CallFunc_EqualEqual_ObjectObject_ReturnValue_19) == 0x00002F, "Member 'ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation::CallFunc_EqualEqual_ObjectObject_ReturnValue_19' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation, CallFunc_BooleanOR_ReturnValue_10) == 0x000030, "Member 'ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation::CallFunc_BooleanOR_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation, CallFunc_EqualEqual_ObjectObject_ReturnValue_20) == 0x000031, "Member 'ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation::CallFunc_EqualEqual_ObjectObject_ReturnValue_20' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation, CallFunc_BooleanOR_ReturnValue_11) == 0x000032, "Member 'ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation::CallFunc_BooleanOR_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation, CallFunc_BooleanOR_ReturnValue_12) == 0x000033, "Member 'ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation::CallFunc_BooleanOR_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation, CallFunc_BooleanOR_ReturnValue_13) == 0x000034, "Member 'ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation::CallFunc_BooleanOR_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation, CallFunc_BooleanOR_ReturnValue_14) == 0x000035, "Member 'ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation::CallFunc_BooleanOR_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation, CallFunc_BooleanOR_ReturnValue_15) == 0x000036, "Member 'ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation::CallFunc_BooleanOR_ReturnValue_15' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation, CallFunc_BooleanOR_ReturnValue_16) == 0x000037, "Member 'ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation::CallFunc_BooleanOR_ReturnValue_16' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation, CallFunc_Not_PreBool_ReturnValue) == 0x000038, "Member 'ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation, CallFunc_BooleanOR_ReturnValue_17) == 0x000039, "Member 'ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation::CallFunc_BooleanOR_ReturnValue_17' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation, CallFunc_BooleanAND_ReturnValue) == 0x00003A, "Member 'ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation, CallFunc_BooleanOR_ReturnValue_18) == 0x00003B, "Member 'ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation::CallFunc_BooleanOR_ReturnValue_18' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation, K2Node_VariableSet_CupOfCoffeeCurveValue_ImplicitCast) == 0x000040, "Member 'ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation::K2Node_VariableSet_CupOfCoffeeCurveValue_ImplicitCast' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation, K2Node_VariableSet_SmokingPipeCurveValue_ImplicitCast) == 0x000048, "Member 'ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation::K2Node_VariableSet_SmokingPipeCurveValue_ImplicitCast' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation, K2Node_VariableSet_IKHandRWeight_ImplicitCast) == 0x000050, "Member 'ABP_PlayerCharacterCapture_C_BlueprintThreadSafeUpdateAnimation::K2Node_VariableSet_IKHandRWeight_ImplicitCast' has a wrong offset!");

// Function ABP_PlayerCharacterCapture.ABP_PlayerCharacterCapture_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct ABP_PlayerCharacterCapture_C_AnimGraph final
{
public:
	struct FPoseLink                              Param_AnimGraph;                                   // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(ABP_PlayerCharacterCapture_C_AnimGraph) == 0x000008, "Wrong alignment on ABP_PlayerCharacterCapture_C_AnimGraph");
static_assert(sizeof(ABP_PlayerCharacterCapture_C_AnimGraph) == 0x000010, "Wrong size on ABP_PlayerCharacterCapture_C_AnimGraph");
static_assert(offsetof(ABP_PlayerCharacterCapture_C_AnimGraph, Param_AnimGraph) == 0x000000, "Member 'ABP_PlayerCharacterCapture_C_AnimGraph::Param_AnimGraph' has a wrong offset!");

}

