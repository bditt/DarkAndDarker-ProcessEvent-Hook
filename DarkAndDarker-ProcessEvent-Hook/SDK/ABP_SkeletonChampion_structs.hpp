#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_SkeletonChampion

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// ScriptStruct ABP_SkeletonChampion.ABP_SkeletonChampion_C.AnimBlueprintGeneratedConstantData
// 0x0187 (0x0188 - 0x0001)
struct ABP_SkeletonChampion::FAnimBlueprintGeneratedConstantData final : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_4773[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_245;                                // 0x0004(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_246;                                // 0x000C(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_247;                                // 0x0014(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         __FloatProperty_248;                               // 0x001C(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimSyncMethod                               __EnumProperty_249;                                // 0x0020(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4774[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_250;                                // 0x0024(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4775[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBlendProfile*                          __BlendProfile_251;                                // 0x0030(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UCurveFloat*                            __CurveFloat_252;                                  // 0x0038(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	EAlphaBlendOption                             __EnumProperty_253;                                // 0x0040(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EBlendListTransitionType                      __EnumProperty_254;                                // 0x0041(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4776[0x6];                                     // 0x0042(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<float>                                 __ArrayProperty_255;                               // 0x0048(0x0010)(BlueprintVisible, EditFixedSize)
	class FName                                   __NameProperty_256;                                // 0x0058(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_257;                                // 0x0060(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_258;                                // 0x0068(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_259;                                 // 0x0070(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputScaleBiasClampConstants          __StructProperty_260;                              // 0x0074(0x002C)(BlueprintVisible, NoDestructor)
	class FName                                   __NameProperty_261;                                // 0x00A0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_262;                                 // 0x00A8(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_263;                                // 0x00AC(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4777[0x3];                                     // 0x00AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         __FloatProperty_264;                               // 0x00B0(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         __FloatProperty_265;                               // 0x00B4(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_266;                                // 0x00B8(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimSyncMethod                               __EnumProperty_267;                                // 0x00B9(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimGroupRole                                __ByteProperty_268;                                // 0x00BA(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4778[0x1];                                     // 0x00BB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_269;                                // 0x00BC(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_270;                                // 0x00C4(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_271;                                 // 0x00CC(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnimNodeFunctionRef                   __StructProperty_272;                              // 0x00D0(0x0020)(BlueprintVisible, NoDestructor)
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;             // 0x00F0(0x0080)()
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;                       // 0x0170(0x0018)()
};
static_assert(alignof(ABP_SkeletonChampion::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on ABP_SkeletonChampion::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(ABP_SkeletonChampion::FAnimBlueprintGeneratedConstantData) == 0x000188, "Wrong size on ABP_SkeletonChampion::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(ABP_SkeletonChampion::FAnimBlueprintGeneratedConstantData, __NameProperty_245) == 0x000004, "Member 'ABP_SkeletonChampion::FAnimBlueprintGeneratedConstantData::__NameProperty_245' has a wrong offset!");
static_assert(offsetof(ABP_SkeletonChampion::FAnimBlueprintGeneratedConstantData, __NameProperty_246) == 0x00000C, "Member 'ABP_SkeletonChampion::FAnimBlueprintGeneratedConstantData::__NameProperty_246' has a wrong offset!");
static_assert(offsetof(ABP_SkeletonChampion::FAnimBlueprintGeneratedConstantData, __NameProperty_247) == 0x000014, "Member 'ABP_SkeletonChampion::FAnimBlueprintGeneratedConstantData::__NameProperty_247' has a wrong offset!");
static_assert(offsetof(ABP_SkeletonChampion::FAnimBlueprintGeneratedConstantData, __FloatProperty_248) == 0x00001C, "Member 'ABP_SkeletonChampion::FAnimBlueprintGeneratedConstantData::__FloatProperty_248' has a wrong offset!");
static_assert(offsetof(ABP_SkeletonChampion::FAnimBlueprintGeneratedConstantData, __EnumProperty_249) == 0x000020, "Member 'ABP_SkeletonChampion::FAnimBlueprintGeneratedConstantData::__EnumProperty_249' has a wrong offset!");
static_assert(offsetof(ABP_SkeletonChampion::FAnimBlueprintGeneratedConstantData, __NameProperty_250) == 0x000024, "Member 'ABP_SkeletonChampion::FAnimBlueprintGeneratedConstantData::__NameProperty_250' has a wrong offset!");
static_assert(offsetof(ABP_SkeletonChampion::FAnimBlueprintGeneratedConstantData, __BlendProfile_251) == 0x000030, "Member 'ABP_SkeletonChampion::FAnimBlueprintGeneratedConstantData::__BlendProfile_251' has a wrong offset!");
static_assert(offsetof(ABP_SkeletonChampion::FAnimBlueprintGeneratedConstantData, __CurveFloat_252) == 0x000038, "Member 'ABP_SkeletonChampion::FAnimBlueprintGeneratedConstantData::__CurveFloat_252' has a wrong offset!");
static_assert(offsetof(ABP_SkeletonChampion::FAnimBlueprintGeneratedConstantData, __EnumProperty_253) == 0x000040, "Member 'ABP_SkeletonChampion::FAnimBlueprintGeneratedConstantData::__EnumProperty_253' has a wrong offset!");
static_assert(offsetof(ABP_SkeletonChampion::FAnimBlueprintGeneratedConstantData, __EnumProperty_254) == 0x000041, "Member 'ABP_SkeletonChampion::FAnimBlueprintGeneratedConstantData::__EnumProperty_254' has a wrong offset!");
static_assert(offsetof(ABP_SkeletonChampion::FAnimBlueprintGeneratedConstantData, __ArrayProperty_255) == 0x000048, "Member 'ABP_SkeletonChampion::FAnimBlueprintGeneratedConstantData::__ArrayProperty_255' has a wrong offset!");
static_assert(offsetof(ABP_SkeletonChampion::FAnimBlueprintGeneratedConstantData, __NameProperty_256) == 0x000058, "Member 'ABP_SkeletonChampion::FAnimBlueprintGeneratedConstantData::__NameProperty_256' has a wrong offset!");
static_assert(offsetof(ABP_SkeletonChampion::FAnimBlueprintGeneratedConstantData, __NameProperty_257) == 0x000060, "Member 'ABP_SkeletonChampion::FAnimBlueprintGeneratedConstantData::__NameProperty_257' has a wrong offset!");
static_assert(offsetof(ABP_SkeletonChampion::FAnimBlueprintGeneratedConstantData, __NameProperty_258) == 0x000068, "Member 'ABP_SkeletonChampion::FAnimBlueprintGeneratedConstantData::__NameProperty_258' has a wrong offset!");
static_assert(offsetof(ABP_SkeletonChampion::FAnimBlueprintGeneratedConstantData, __IntProperty_259) == 0x000070, "Member 'ABP_SkeletonChampion::FAnimBlueprintGeneratedConstantData::__IntProperty_259' has a wrong offset!");
static_assert(offsetof(ABP_SkeletonChampion::FAnimBlueprintGeneratedConstantData, __StructProperty_260) == 0x000074, "Member 'ABP_SkeletonChampion::FAnimBlueprintGeneratedConstantData::__StructProperty_260' has a wrong offset!");
static_assert(offsetof(ABP_SkeletonChampion::FAnimBlueprintGeneratedConstantData, __NameProperty_261) == 0x0000A0, "Member 'ABP_SkeletonChampion::FAnimBlueprintGeneratedConstantData::__NameProperty_261' has a wrong offset!");
static_assert(offsetof(ABP_SkeletonChampion::FAnimBlueprintGeneratedConstantData, __IntProperty_262) == 0x0000A8, "Member 'ABP_SkeletonChampion::FAnimBlueprintGeneratedConstantData::__IntProperty_262' has a wrong offset!");
static_assert(offsetof(ABP_SkeletonChampion::FAnimBlueprintGeneratedConstantData, __BoolProperty_263) == 0x0000AC, "Member 'ABP_SkeletonChampion::FAnimBlueprintGeneratedConstantData::__BoolProperty_263' has a wrong offset!");
static_assert(offsetof(ABP_SkeletonChampion::FAnimBlueprintGeneratedConstantData, __FloatProperty_264) == 0x0000B0, "Member 'ABP_SkeletonChampion::FAnimBlueprintGeneratedConstantData::__FloatProperty_264' has a wrong offset!");
static_assert(offsetof(ABP_SkeletonChampion::FAnimBlueprintGeneratedConstantData, __FloatProperty_265) == 0x0000B4, "Member 'ABP_SkeletonChampion::FAnimBlueprintGeneratedConstantData::__FloatProperty_265' has a wrong offset!");
static_assert(offsetof(ABP_SkeletonChampion::FAnimBlueprintGeneratedConstantData, __BoolProperty_266) == 0x0000B8, "Member 'ABP_SkeletonChampion::FAnimBlueprintGeneratedConstantData::__BoolProperty_266' has a wrong offset!");
static_assert(offsetof(ABP_SkeletonChampion::FAnimBlueprintGeneratedConstantData, __EnumProperty_267) == 0x0000B9, "Member 'ABP_SkeletonChampion::FAnimBlueprintGeneratedConstantData::__EnumProperty_267' has a wrong offset!");
static_assert(offsetof(ABP_SkeletonChampion::FAnimBlueprintGeneratedConstantData, __ByteProperty_268) == 0x0000BA, "Member 'ABP_SkeletonChampion::FAnimBlueprintGeneratedConstantData::__ByteProperty_268' has a wrong offset!");
static_assert(offsetof(ABP_SkeletonChampion::FAnimBlueprintGeneratedConstantData, __NameProperty_269) == 0x0000BC, "Member 'ABP_SkeletonChampion::FAnimBlueprintGeneratedConstantData::__NameProperty_269' has a wrong offset!");
static_assert(offsetof(ABP_SkeletonChampion::FAnimBlueprintGeneratedConstantData, __NameProperty_270) == 0x0000C4, "Member 'ABP_SkeletonChampion::FAnimBlueprintGeneratedConstantData::__NameProperty_270' has a wrong offset!");
static_assert(offsetof(ABP_SkeletonChampion::FAnimBlueprintGeneratedConstantData, __IntProperty_271) == 0x0000CC, "Member 'ABP_SkeletonChampion::FAnimBlueprintGeneratedConstantData::__IntProperty_271' has a wrong offset!");
static_assert(offsetof(ABP_SkeletonChampion::FAnimBlueprintGeneratedConstantData, __StructProperty_272) == 0x0000D0, "Member 'ABP_SkeletonChampion::FAnimBlueprintGeneratedConstantData::__StructProperty_272' has a wrong offset!");
static_assert(offsetof(ABP_SkeletonChampion::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x0000F0, "Member 'ABP_SkeletonChampion::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(ABP_SkeletonChampion::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x000170, "Member 'ABP_SkeletonChampion::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");

// ScriptStruct ABP_SkeletonChampion.ABP_SkeletonChampion_C.AnimBlueprintGeneratedMutableData
// 0x000B (0x000C - 0x0001)
struct ABP_SkeletonChampion::FAnimBlueprintGeneratedMutableData final : public FAnimBlueprintMutableData
{
public:
	bool                                          __BoolProperty;                                    // 0x0001(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_0;                                  // 0x0002(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4779[0x1];                                     // 0x0003(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         __FloatProperty_1;                                 // 0x0004(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         __FloatProperty_2;                                 // 0x0008(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_SkeletonChampion::FAnimBlueprintGeneratedMutableData) == 0x000004, "Wrong alignment on ABP_SkeletonChampion::FAnimBlueprintGeneratedMutableData");
static_assert(sizeof(ABP_SkeletonChampion::FAnimBlueprintGeneratedMutableData) == 0x00000C, "Wrong size on ABP_SkeletonChampion::FAnimBlueprintGeneratedMutableData");
static_assert(offsetof(ABP_SkeletonChampion::FAnimBlueprintGeneratedMutableData, __BoolProperty) == 0x000001, "Member 'ABP_SkeletonChampion::FAnimBlueprintGeneratedMutableData::__BoolProperty' has a wrong offset!");
static_assert(offsetof(ABP_SkeletonChampion::FAnimBlueprintGeneratedMutableData, __BoolProperty_0) == 0x000002, "Member 'ABP_SkeletonChampion::FAnimBlueprintGeneratedMutableData::__BoolProperty_0' has a wrong offset!");
static_assert(offsetof(ABP_SkeletonChampion::FAnimBlueprintGeneratedMutableData, __FloatProperty_1) == 0x000004, "Member 'ABP_SkeletonChampion::FAnimBlueprintGeneratedMutableData::__FloatProperty_1' has a wrong offset!");
static_assert(offsetof(ABP_SkeletonChampion::FAnimBlueprintGeneratedMutableData, __FloatProperty_2) == 0x000008, "Member 'ABP_SkeletonChampion::FAnimBlueprintGeneratedMutableData::__FloatProperty_2' has a wrong offset!");

}

