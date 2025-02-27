#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_Mimic_Medium

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function ABP_Mimic_Medium.ABP_Mimic_Medium_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct ABP_Mimic_Medium_C_AnimGraph final
{
public:
	struct FPoseLink                              Param_AnimGraph;                                   // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(ABP_Mimic_Medium_C_AnimGraph) == 0x000008, "Wrong alignment on ABP_Mimic_Medium_C_AnimGraph");
static_assert(sizeof(ABP_Mimic_Medium_C_AnimGraph) == 0x000010, "Wrong size on ABP_Mimic_Medium_C_AnimGraph");
static_assert(offsetof(ABP_Mimic_Medium_C_AnimGraph, Param_AnimGraph) == 0x000000, "Member 'ABP_Mimic_Medium_C_AnimGraph::Param_AnimGraph' has a wrong offset!");

// Function ABP_Mimic_Medium.ABP_Mimic_Medium_C.BlueprintThreadSafeUpdateAnimation
// 0x000C (0x000C - 0x0000)
struct ABP_Mimic_Medium_C_BlueprintThreadSafeUpdateAnimation final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_Mimic_Medium_C_BlueprintThreadSafeUpdateAnimation) == 0x000004, "Wrong alignment on ABP_Mimic_Medium_C_BlueprintThreadSafeUpdateAnimation");
static_assert(sizeof(ABP_Mimic_Medium_C_BlueprintThreadSafeUpdateAnimation) == 0x00000C, "Wrong size on ABP_Mimic_Medium_C_BlueprintThreadSafeUpdateAnimation");
static_assert(offsetof(ABP_Mimic_Medium_C_BlueprintThreadSafeUpdateAnimation, DeltaTime) == 0x000000, "Member 'ABP_Mimic_Medium_C_BlueprintThreadSafeUpdateAnimation::DeltaTime' has a wrong offset!");
static_assert(offsetof(ABP_Mimic_Medium_C_BlueprintThreadSafeUpdateAnimation, CallFunc_Not_PreBool_ReturnValue) == 0x000004, "Member 'ABP_Mimic_Medium_C_BlueprintThreadSafeUpdateAnimation::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Mimic_Medium_C_BlueprintThreadSafeUpdateAnimation, CallFunc_BooleanAND_ReturnValue) == 0x000005, "Member 'ABP_Mimic_Medium_C_BlueprintThreadSafeUpdateAnimation::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Mimic_Medium_C_BlueprintThreadSafeUpdateAnimation, CallFunc_Not_PreBool_ReturnValue_1) == 0x000006, "Member 'ABP_Mimic_Medium_C_BlueprintThreadSafeUpdateAnimation::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ABP_Mimic_Medium_C_BlueprintThreadSafeUpdateAnimation, CallFunc_BooleanAND_ReturnValue_1) == 0x000007, "Member 'ABP_Mimic_Medium_C_BlueprintThreadSafeUpdateAnimation::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ABP_Mimic_Medium_C_BlueprintThreadSafeUpdateAnimation, CallFunc_Not_PreBool_ReturnValue_2) == 0x000008, "Member 'ABP_Mimic_Medium_C_BlueprintThreadSafeUpdateAnimation::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ABP_Mimic_Medium_C_BlueprintThreadSafeUpdateAnimation, CallFunc_BooleanAND_ReturnValue_2) == 0x000009, "Member 'ABP_Mimic_Medium_C_BlueprintThreadSafeUpdateAnimation::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");

// Function ABP_Mimic_Medium.ABP_Mimic_Medium_C.ExecuteUbergraph_ABP_Mimic_Medium
// 0x0004 (0x0004 - 0x0000)
struct ABP_Mimic_Medium_C_ExecuteUbergraph_ABP_Mimic_Medium final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_Mimic_Medium_C_ExecuteUbergraph_ABP_Mimic_Medium) == 0x000004, "Wrong alignment on ABP_Mimic_Medium_C_ExecuteUbergraph_ABP_Mimic_Medium");
static_assert(sizeof(ABP_Mimic_Medium_C_ExecuteUbergraph_ABP_Mimic_Medium) == 0x000004, "Wrong size on ABP_Mimic_Medium_C_ExecuteUbergraph_ABP_Mimic_Medium");
static_assert(offsetof(ABP_Mimic_Medium_C_ExecuteUbergraph_ABP_Mimic_Medium, EntryPoint) == 0x000000, "Member 'ABP_Mimic_Medium_C_ExecuteUbergraph_ABP_Mimic_Medium::EntryPoint' has a wrong offset!");

}

