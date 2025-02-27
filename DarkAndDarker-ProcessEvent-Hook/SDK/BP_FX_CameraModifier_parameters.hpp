#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FX_CameraModifier

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_FX_CameraModifier.BP_FX_CameraModifier_C.BlueprintModifyPostProcess
// 0x0E00 (0x0E00 - 0x0000)
struct BP_FX_CameraModifier_C_BlueprintModifyPostProcess final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PostProcessBlendWeight;                            // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_37DB[0x8];                                     // 0x0008(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPostProcessSettings                   PostProcessSettings;                               // 0x0010(0x06E0)(Parm, OutParm)
	struct FWeightedBlendable                     K2Node_MakeStruct_WeightedBlendable;               // 0x06F0(0x0010)(NoDestructor)
	TArray<struct FWeightedBlendable>             K2Node_MakeArray_Array;                            // 0x0700(0x0010)(ReferenceParm)
	struct FWeightedBlendables                    K2Node_MakeStruct_WeightedBlendables;              // 0x0710(0x0010)()
	struct FPostProcessSettings                   K2Node_MakeStruct_PostProcessSettings;             // 0x0720(0x06E0)()
};
static_assert(alignof(BP_FX_CameraModifier_C_BlueprintModifyPostProcess) == 0x000010, "Wrong alignment on BP_FX_CameraModifier_C_BlueprintModifyPostProcess");
static_assert(sizeof(BP_FX_CameraModifier_C_BlueprintModifyPostProcess) == 0x000E00, "Wrong size on BP_FX_CameraModifier_C_BlueprintModifyPostProcess");
static_assert(offsetof(BP_FX_CameraModifier_C_BlueprintModifyPostProcess, DeltaTime) == 0x000000, "Member 'BP_FX_CameraModifier_C_BlueprintModifyPostProcess::DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_FX_CameraModifier_C_BlueprintModifyPostProcess, PostProcessBlendWeight) == 0x000004, "Member 'BP_FX_CameraModifier_C_BlueprintModifyPostProcess::PostProcessBlendWeight' has a wrong offset!");
static_assert(offsetof(BP_FX_CameraModifier_C_BlueprintModifyPostProcess, PostProcessSettings) == 0x000010, "Member 'BP_FX_CameraModifier_C_BlueprintModifyPostProcess::PostProcessSettings' has a wrong offset!");
static_assert(offsetof(BP_FX_CameraModifier_C_BlueprintModifyPostProcess, K2Node_MakeStruct_WeightedBlendable) == 0x0006F0, "Member 'BP_FX_CameraModifier_C_BlueprintModifyPostProcess::K2Node_MakeStruct_WeightedBlendable' has a wrong offset!");
static_assert(offsetof(BP_FX_CameraModifier_C_BlueprintModifyPostProcess, K2Node_MakeArray_Array) == 0x000700, "Member 'BP_FX_CameraModifier_C_BlueprintModifyPostProcess::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_FX_CameraModifier_C_BlueprintModifyPostProcess, K2Node_MakeStruct_WeightedBlendables) == 0x000710, "Member 'BP_FX_CameraModifier_C_BlueprintModifyPostProcess::K2Node_MakeStruct_WeightedBlendables' has a wrong offset!");
static_assert(offsetof(BP_FX_CameraModifier_C_BlueprintModifyPostProcess, K2Node_MakeStruct_PostProcessSettings) == 0x000720, "Member 'BP_FX_CameraModifier_C_BlueprintModifyPostProcess::K2Node_MakeStruct_PostProcessSettings' has a wrong offset!");

}

