#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_Mummy

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function ABP_Mummy.ABP_Mummy_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct ABP_Mummy_C_AnimGraph final
{
public:
	struct FPoseLink                              Param_AnimGraph;                                   // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(ABP_Mummy_C_AnimGraph) == 0x000008, "Wrong alignment on ABP_Mummy_C_AnimGraph");
static_assert(sizeof(ABP_Mummy_C_AnimGraph) == 0x000010, "Wrong size on ABP_Mummy_C_AnimGraph");
static_assert(offsetof(ABP_Mummy_C_AnimGraph, Param_AnimGraph) == 0x000000, "Member 'ABP_Mummy_C_AnimGraph::Param_AnimGraph' has a wrong offset!");

// Function ABP_Mummy.ABP_Mummy_C.BlueprintUpdateAnimation
// 0x0004 (0x0004 - 0x0000)
struct ABP_Mummy_C_BlueprintUpdateAnimation final
{
public:
	float                                         DeltaTimeX;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_Mummy_C_BlueprintUpdateAnimation) == 0x000004, "Wrong alignment on ABP_Mummy_C_BlueprintUpdateAnimation");
static_assert(sizeof(ABP_Mummy_C_BlueprintUpdateAnimation) == 0x000004, "Wrong size on ABP_Mummy_C_BlueprintUpdateAnimation");
static_assert(offsetof(ABP_Mummy_C_BlueprintUpdateAnimation, DeltaTimeX) == 0x000000, "Member 'ABP_Mummy_C_BlueprintUpdateAnimation::DeltaTimeX' has a wrong offset!");

// Function ABP_Mummy.ABP_Mummy_C.ExecuteUbergraph_ABP_Mummy
// 0x0040 (0x0040 - 0x0000)
struct ABP_Mummy_C_ExecuteUbergraph_ABP_Mummy final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46C6[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_RandomFloatInRange_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_PlayerCharacter_C*                  K2Node_DynamicCast_AsBP_Player_Character;          // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46C7[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaTimeX;                           // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetSocketLocation_ReturnValue;            // 0x0028(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_Mummy_C_ExecuteUbergraph_ABP_Mummy) == 0x000008, "Wrong alignment on ABP_Mummy_C_ExecuteUbergraph_ABP_Mummy");
static_assert(sizeof(ABP_Mummy_C_ExecuteUbergraph_ABP_Mummy) == 0x000040, "Wrong size on ABP_Mummy_C_ExecuteUbergraph_ABP_Mummy");
static_assert(offsetof(ABP_Mummy_C_ExecuteUbergraph_ABP_Mummy, EntryPoint) == 0x000000, "Member 'ABP_Mummy_C_ExecuteUbergraph_ABP_Mummy::EntryPoint' has a wrong offset!");
static_assert(offsetof(ABP_Mummy_C_ExecuteUbergraph_ABP_Mummy, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000008, "Member 'ABP_Mummy_C_ExecuteUbergraph_ABP_Mummy::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Mummy_C_ExecuteUbergraph_ABP_Mummy, CallFunc_RandomFloatInRange_ReturnValue) == 0x000010, "Member 'ABP_Mummy_C_ExecuteUbergraph_ABP_Mummy::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_Mummy_C_ExecuteUbergraph_ABP_Mummy, K2Node_DynamicCast_AsBP_Player_Character) == 0x000018, "Member 'ABP_Mummy_C_ExecuteUbergraph_ABP_Mummy::K2Node_DynamicCast_AsBP_Player_Character' has a wrong offset!");
static_assert(offsetof(ABP_Mummy_C_ExecuteUbergraph_ABP_Mummy, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'ABP_Mummy_C_ExecuteUbergraph_ABP_Mummy::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ABP_Mummy_C_ExecuteUbergraph_ABP_Mummy, K2Node_Event_DeltaTimeX) == 0x000024, "Member 'ABP_Mummy_C_ExecuteUbergraph_ABP_Mummy::K2Node_Event_DeltaTimeX' has a wrong offset!");
static_assert(offsetof(ABP_Mummy_C_ExecuteUbergraph_ABP_Mummy, CallFunc_GetSocketLocation_ReturnValue) == 0x000028, "Member 'ABP_Mummy_C_ExecuteUbergraph_ABP_Mummy::CallFunc_GetSocketLocation_ReturnValue' has a wrong offset!");

}

