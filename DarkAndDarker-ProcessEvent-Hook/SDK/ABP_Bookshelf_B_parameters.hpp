#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_Bookshelf_B

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function ABP_Bookshelf_B.ABP_Bookshelf_B_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct ABP_Bookshelf_B_C_AnimGraph final
{
public:
	struct FPoseLink                              Param_AnimGraph;                                   // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(ABP_Bookshelf_B_C_AnimGraph) == 0x000008, "Wrong alignment on ABP_Bookshelf_B_C_AnimGraph");
static_assert(sizeof(ABP_Bookshelf_B_C_AnimGraph) == 0x000010, "Wrong size on ABP_Bookshelf_B_C_AnimGraph");
static_assert(offsetof(ABP_Bookshelf_B_C_AnimGraph, Param_AnimGraph) == 0x000000, "Member 'ABP_Bookshelf_B_C_AnimGraph::Param_AnimGraph' has a wrong offset!");

// Function ABP_Bookshelf_B.ABP_Bookshelf_B_C.ExecuteUbergraph_ABP_Bookshelf_B
// 0x0008 (0x0008 - 0x0000)
struct ABP_Bookshelf_B_C_ExecuteUbergraph_ABP_Bookshelf_B final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_GameplayTag_ReturnValue;       // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_GameplayTag_ReturnValue_1;     // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_Bookshelf_B_C_ExecuteUbergraph_ABP_Bookshelf_B) == 0x000004, "Wrong alignment on ABP_Bookshelf_B_C_ExecuteUbergraph_ABP_Bookshelf_B");
static_assert(sizeof(ABP_Bookshelf_B_C_ExecuteUbergraph_ABP_Bookshelf_B) == 0x000008, "Wrong size on ABP_Bookshelf_B_C_ExecuteUbergraph_ABP_Bookshelf_B");
static_assert(offsetof(ABP_Bookshelf_B_C_ExecuteUbergraph_ABP_Bookshelf_B, EntryPoint) == 0x000000, "Member 'ABP_Bookshelf_B_C_ExecuteUbergraph_ABP_Bookshelf_B::EntryPoint' has a wrong offset!");
static_assert(offsetof(ABP_Bookshelf_B_C_ExecuteUbergraph_ABP_Bookshelf_B, CallFunc_EqualEqual_GameplayTag_ReturnValue) == 0x000004, "Member 'ABP_Bookshelf_B_C_ExecuteUbergraph_ABP_Bookshelf_B::CallFunc_EqualEqual_GameplayTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Bookshelf_B_C_ExecuteUbergraph_ABP_Bookshelf_B, CallFunc_EqualEqual_GameplayTag_ReturnValue_1) == 0x000005, "Member 'ABP_Bookshelf_B_C_ExecuteUbergraph_ABP_Bookshelf_B::CallFunc_EqualEqual_GameplayTag_ReturnValue_1' has a wrong offset!");

}

