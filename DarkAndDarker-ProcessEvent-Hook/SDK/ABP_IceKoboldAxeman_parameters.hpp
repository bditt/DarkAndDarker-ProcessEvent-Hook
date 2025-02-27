#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_IceKoboldAxeman

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function ABP_IceKoboldAxeman.ABP_IceKoboldAxeman_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct ABP_IceKoboldAxeman_C_AnimGraph final
{
public:
	struct FPoseLink                              Param_AnimGraph;                                   // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(ABP_IceKoboldAxeman_C_AnimGraph) == 0x000008, "Wrong alignment on ABP_IceKoboldAxeman_C_AnimGraph");
static_assert(sizeof(ABP_IceKoboldAxeman_C_AnimGraph) == 0x000010, "Wrong size on ABP_IceKoboldAxeman_C_AnimGraph");
static_assert(offsetof(ABP_IceKoboldAxeman_C_AnimGraph, Param_AnimGraph) == 0x000000, "Member 'ABP_IceKoboldAxeman_C_AnimGraph::Param_AnimGraph' has a wrong offset!");

// Function ABP_IceKoboldAxeman.ABP_IceKoboldAxeman_C.BlueprintThreadSafeUpdateAnimation
// 0x0018 (0x0018 - 0x0000)
struct ABP_IceKoboldAxeman_C_BlueprintThreadSafeUpdateAnimation final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetCurveValue_ReturnValue;                // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_460A[0x1];                                     // 0x000F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_IceKoboldAxeman_C_BlueprintThreadSafeUpdateAnimation) == 0x000008, "Wrong alignment on ABP_IceKoboldAxeman_C_BlueprintThreadSafeUpdateAnimation");
static_assert(sizeof(ABP_IceKoboldAxeman_C_BlueprintThreadSafeUpdateAnimation) == 0x000018, "Wrong size on ABP_IceKoboldAxeman_C_BlueprintThreadSafeUpdateAnimation");
static_assert(offsetof(ABP_IceKoboldAxeman_C_BlueprintThreadSafeUpdateAnimation, DeltaTime) == 0x000000, "Member 'ABP_IceKoboldAxeman_C_BlueprintThreadSafeUpdateAnimation::DeltaTime' has a wrong offset!");
static_assert(offsetof(ABP_IceKoboldAxeman_C_BlueprintThreadSafeUpdateAnimation, CallFunc_GetCurveValue_ReturnValue) == 0x000004, "Member 'ABP_IceKoboldAxeman_C_BlueprintThreadSafeUpdateAnimation::CallFunc_GetCurveValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_IceKoboldAxeman_C_BlueprintThreadSafeUpdateAnimation, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000008, "Member 'ABP_IceKoboldAxeman_C_BlueprintThreadSafeUpdateAnimation::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_IceKoboldAxeman_C_BlueprintThreadSafeUpdateAnimation, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000009, "Member 'ABP_IceKoboldAxeman_C_BlueprintThreadSafeUpdateAnimation::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_IceKoboldAxeman_C_BlueprintThreadSafeUpdateAnimation, CallFunc_BooleanAND_ReturnValue) == 0x00000A, "Member 'ABP_IceKoboldAxeman_C_BlueprintThreadSafeUpdateAnimation::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_IceKoboldAxeman_C_BlueprintThreadSafeUpdateAnimation, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x00000B, "Member 'ABP_IceKoboldAxeman_C_BlueprintThreadSafeUpdateAnimation::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ABP_IceKoboldAxeman_C_BlueprintThreadSafeUpdateAnimation, CallFunc_BooleanAND_ReturnValue_1) == 0x00000C, "Member 'ABP_IceKoboldAxeman_C_BlueprintThreadSafeUpdateAnimation::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ABP_IceKoboldAxeman_C_BlueprintThreadSafeUpdateAnimation, CallFunc_EqualEqual_IntInt_ReturnValue_2) == 0x00000D, "Member 'ABP_IceKoboldAxeman_C_BlueprintThreadSafeUpdateAnimation::CallFunc_EqualEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ABP_IceKoboldAxeman_C_BlueprintThreadSafeUpdateAnimation, CallFunc_BooleanAND_ReturnValue_2) == 0x00000E, "Member 'ABP_IceKoboldAxeman_C_BlueprintThreadSafeUpdateAnimation::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ABP_IceKoboldAxeman_C_BlueprintThreadSafeUpdateAnimation, CallFunc_Greater_DoubleDouble_A_ImplicitCast) == 0x000010, "Member 'ABP_IceKoboldAxeman_C_BlueprintThreadSafeUpdateAnimation::CallFunc_Greater_DoubleDouble_A_ImplicitCast' has a wrong offset!");

// Function ABP_IceKoboldAxeman.ABP_IceKoboldAxeman_C.ExecuteUbergraph_ABP_IceKoboldAxeman
// 0x0004 (0x0004 - 0x0000)
struct ABP_IceKoboldAxeman_C_ExecuteUbergraph_ABP_IceKoboldAxeman final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_IceKoboldAxeman_C_ExecuteUbergraph_ABP_IceKoboldAxeman) == 0x000004, "Wrong alignment on ABP_IceKoboldAxeman_C_ExecuteUbergraph_ABP_IceKoboldAxeman");
static_assert(sizeof(ABP_IceKoboldAxeman_C_ExecuteUbergraph_ABP_IceKoboldAxeman) == 0x000004, "Wrong size on ABP_IceKoboldAxeman_C_ExecuteUbergraph_ABP_IceKoboldAxeman");
static_assert(offsetof(ABP_IceKoboldAxeman_C_ExecuteUbergraph_ABP_IceKoboldAxeman, EntryPoint) == 0x000000, "Member 'ABP_IceKoboldAxeman_C_ExecuteUbergraph_ABP_IceKoboldAxeman::EntryPoint' has a wrong offset!");

}

