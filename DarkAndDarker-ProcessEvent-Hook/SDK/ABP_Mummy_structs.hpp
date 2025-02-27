#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_Mummy

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// ScriptStruct ABP_Mummy.ABP_Mummy_C.AnimBlueprintGeneratedConstantData
// 0x0187 (0x0188 - 0x0001)
struct ABP_Mummy::FAnimBlueprintGeneratedConstantData final : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_46BF[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_272;                                // 0x0004(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_273;                                // 0x000C(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_274;                                // 0x0014(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_275;                                // 0x001C(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46C0[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         __FloatProperty_276;                               // 0x0020(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimSyncMethod                               __EnumProperty_277;                                // 0x0024(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46C1[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_278;                                // 0x0028(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_279;                                // 0x0030(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_280;                                 // 0x0038(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_281;                                // 0x003C(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_282;                                 // 0x0044(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBlendProfile*                          __BlendProfile_283;                                // 0x0048(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UCurveFloat*                            __CurveFloat_284;                                  // 0x0050(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	EAlphaBlendOption                             __EnumProperty_285;                                // 0x0058(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EBlendListTransitionType                      __EnumProperty_286;                                // 0x0059(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46C2[0x6];                                     // 0x005A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<float>                                 __ArrayProperty_287;                               // 0x0060(0x0010)(BlueprintVisible, EditFixedSize)
	float                                         __FloatProperty_288;                               // 0x0070(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputScaleBiasClampConstants          __StructProperty_289;                              // 0x0074(0x002C)(BlueprintVisible, NoDestructor)
	float                                         __FloatProperty_290;                               // 0x00A0(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_291;                                // 0x00A4(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimSyncMethod                               __EnumProperty_292;                                // 0x00A5(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimGroupRole                                __ByteProperty_293;                                // 0x00A6(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46C3[0x1];                                     // 0x00A7(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_294;                                // 0x00A8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_295;                                // 0x00B0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_296;                                 // 0x00B8(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_297;                                // 0x00BC(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_298;                                // 0x00C4(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_299;                                 // 0x00CC(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnimNodeFunctionRef                   __StructProperty_300;                              // 0x00D0(0x0020)(BlueprintVisible, NoDestructor)
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;             // 0x00F0(0x0080)()
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;                       // 0x0170(0x0018)()
};
static_assert(alignof(ABP_Mummy::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on ABP_Mummy::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(ABP_Mummy::FAnimBlueprintGeneratedConstantData) == 0x000188, "Wrong size on ABP_Mummy::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(ABP_Mummy::FAnimBlueprintGeneratedConstantData, __NameProperty_272) == 0x000004, "Member 'ABP_Mummy::FAnimBlueprintGeneratedConstantData::__NameProperty_272' has a wrong offset!");
static_assert(offsetof(ABP_Mummy::FAnimBlueprintGeneratedConstantData, __NameProperty_273) == 0x00000C, "Member 'ABP_Mummy::FAnimBlueprintGeneratedConstantData::__NameProperty_273' has a wrong offset!");
static_assert(offsetof(ABP_Mummy::FAnimBlueprintGeneratedConstantData, __NameProperty_274) == 0x000014, "Member 'ABP_Mummy::FAnimBlueprintGeneratedConstantData::__NameProperty_274' has a wrong offset!");
static_assert(offsetof(ABP_Mummy::FAnimBlueprintGeneratedConstantData, __BoolProperty_275) == 0x00001C, "Member 'ABP_Mummy::FAnimBlueprintGeneratedConstantData::__BoolProperty_275' has a wrong offset!");
static_assert(offsetof(ABP_Mummy::FAnimBlueprintGeneratedConstantData, __FloatProperty_276) == 0x000020, "Member 'ABP_Mummy::FAnimBlueprintGeneratedConstantData::__FloatProperty_276' has a wrong offset!");
static_assert(offsetof(ABP_Mummy::FAnimBlueprintGeneratedConstantData, __EnumProperty_277) == 0x000024, "Member 'ABP_Mummy::FAnimBlueprintGeneratedConstantData::__EnumProperty_277' has a wrong offset!");
static_assert(offsetof(ABP_Mummy::FAnimBlueprintGeneratedConstantData, __NameProperty_278) == 0x000028, "Member 'ABP_Mummy::FAnimBlueprintGeneratedConstantData::__NameProperty_278' has a wrong offset!");
static_assert(offsetof(ABP_Mummy::FAnimBlueprintGeneratedConstantData, __NameProperty_279) == 0x000030, "Member 'ABP_Mummy::FAnimBlueprintGeneratedConstantData::__NameProperty_279' has a wrong offset!");
static_assert(offsetof(ABP_Mummy::FAnimBlueprintGeneratedConstantData, __IntProperty_280) == 0x000038, "Member 'ABP_Mummy::FAnimBlueprintGeneratedConstantData::__IntProperty_280' has a wrong offset!");
static_assert(offsetof(ABP_Mummy::FAnimBlueprintGeneratedConstantData, __NameProperty_281) == 0x00003C, "Member 'ABP_Mummy::FAnimBlueprintGeneratedConstantData::__NameProperty_281' has a wrong offset!");
static_assert(offsetof(ABP_Mummy::FAnimBlueprintGeneratedConstantData, __IntProperty_282) == 0x000044, "Member 'ABP_Mummy::FAnimBlueprintGeneratedConstantData::__IntProperty_282' has a wrong offset!");
static_assert(offsetof(ABP_Mummy::FAnimBlueprintGeneratedConstantData, __BlendProfile_283) == 0x000048, "Member 'ABP_Mummy::FAnimBlueprintGeneratedConstantData::__BlendProfile_283' has a wrong offset!");
static_assert(offsetof(ABP_Mummy::FAnimBlueprintGeneratedConstantData, __CurveFloat_284) == 0x000050, "Member 'ABP_Mummy::FAnimBlueprintGeneratedConstantData::__CurveFloat_284' has a wrong offset!");
static_assert(offsetof(ABP_Mummy::FAnimBlueprintGeneratedConstantData, __EnumProperty_285) == 0x000058, "Member 'ABP_Mummy::FAnimBlueprintGeneratedConstantData::__EnumProperty_285' has a wrong offset!");
static_assert(offsetof(ABP_Mummy::FAnimBlueprintGeneratedConstantData, __EnumProperty_286) == 0x000059, "Member 'ABP_Mummy::FAnimBlueprintGeneratedConstantData::__EnumProperty_286' has a wrong offset!");
static_assert(offsetof(ABP_Mummy::FAnimBlueprintGeneratedConstantData, __ArrayProperty_287) == 0x000060, "Member 'ABP_Mummy::FAnimBlueprintGeneratedConstantData::__ArrayProperty_287' has a wrong offset!");
static_assert(offsetof(ABP_Mummy::FAnimBlueprintGeneratedConstantData, __FloatProperty_288) == 0x000070, "Member 'ABP_Mummy::FAnimBlueprintGeneratedConstantData::__FloatProperty_288' has a wrong offset!");
static_assert(offsetof(ABP_Mummy::FAnimBlueprintGeneratedConstantData, __StructProperty_289) == 0x000074, "Member 'ABP_Mummy::FAnimBlueprintGeneratedConstantData::__StructProperty_289' has a wrong offset!");
static_assert(offsetof(ABP_Mummy::FAnimBlueprintGeneratedConstantData, __FloatProperty_290) == 0x0000A0, "Member 'ABP_Mummy::FAnimBlueprintGeneratedConstantData::__FloatProperty_290' has a wrong offset!");
static_assert(offsetof(ABP_Mummy::FAnimBlueprintGeneratedConstantData, __BoolProperty_291) == 0x0000A4, "Member 'ABP_Mummy::FAnimBlueprintGeneratedConstantData::__BoolProperty_291' has a wrong offset!");
static_assert(offsetof(ABP_Mummy::FAnimBlueprintGeneratedConstantData, __EnumProperty_292) == 0x0000A5, "Member 'ABP_Mummy::FAnimBlueprintGeneratedConstantData::__EnumProperty_292' has a wrong offset!");
static_assert(offsetof(ABP_Mummy::FAnimBlueprintGeneratedConstantData, __ByteProperty_293) == 0x0000A6, "Member 'ABP_Mummy::FAnimBlueprintGeneratedConstantData::__ByteProperty_293' has a wrong offset!");
static_assert(offsetof(ABP_Mummy::FAnimBlueprintGeneratedConstantData, __NameProperty_294) == 0x0000A8, "Member 'ABP_Mummy::FAnimBlueprintGeneratedConstantData::__NameProperty_294' has a wrong offset!");
static_assert(offsetof(ABP_Mummy::FAnimBlueprintGeneratedConstantData, __NameProperty_295) == 0x0000B0, "Member 'ABP_Mummy::FAnimBlueprintGeneratedConstantData::__NameProperty_295' has a wrong offset!");
static_assert(offsetof(ABP_Mummy::FAnimBlueprintGeneratedConstantData, __IntProperty_296) == 0x0000B8, "Member 'ABP_Mummy::FAnimBlueprintGeneratedConstantData::__IntProperty_296' has a wrong offset!");
static_assert(offsetof(ABP_Mummy::FAnimBlueprintGeneratedConstantData, __NameProperty_297) == 0x0000BC, "Member 'ABP_Mummy::FAnimBlueprintGeneratedConstantData::__NameProperty_297' has a wrong offset!");
static_assert(offsetof(ABP_Mummy::FAnimBlueprintGeneratedConstantData, __NameProperty_298) == 0x0000C4, "Member 'ABP_Mummy::FAnimBlueprintGeneratedConstantData::__NameProperty_298' has a wrong offset!");
static_assert(offsetof(ABP_Mummy::FAnimBlueprintGeneratedConstantData, __IntProperty_299) == 0x0000CC, "Member 'ABP_Mummy::FAnimBlueprintGeneratedConstantData::__IntProperty_299' has a wrong offset!");
static_assert(offsetof(ABP_Mummy::FAnimBlueprintGeneratedConstantData, __StructProperty_300) == 0x0000D0, "Member 'ABP_Mummy::FAnimBlueprintGeneratedConstantData::__StructProperty_300' has a wrong offset!");
static_assert(offsetof(ABP_Mummy::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x0000F0, "Member 'ABP_Mummy::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(ABP_Mummy::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x000170, "Member 'ABP_Mummy::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");

// ScriptStruct ABP_Mummy.ABP_Mummy_C.AnimBlueprintGeneratedMutableData
// 0x000F (0x0010 - 0x0001)
struct ABP_Mummy::FAnimBlueprintGeneratedMutableData final : public FAnimBlueprintMutableData
{
public:
	uint8                                         Pad_46C4[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         __FloatProperty;                                   // 0x0004(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         __FloatProperty_0;                                 // 0x0008(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_1;                                  // 0x000C(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_2;                                  // 0x000D(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_Mummy::FAnimBlueprintGeneratedMutableData) == 0x000004, "Wrong alignment on ABP_Mummy::FAnimBlueprintGeneratedMutableData");
static_assert(sizeof(ABP_Mummy::FAnimBlueprintGeneratedMutableData) == 0x000010, "Wrong size on ABP_Mummy::FAnimBlueprintGeneratedMutableData");
static_assert(offsetof(ABP_Mummy::FAnimBlueprintGeneratedMutableData, __FloatProperty) == 0x000004, "Member 'ABP_Mummy::FAnimBlueprintGeneratedMutableData::__FloatProperty' has a wrong offset!");
static_assert(offsetof(ABP_Mummy::FAnimBlueprintGeneratedMutableData, __FloatProperty_0) == 0x000008, "Member 'ABP_Mummy::FAnimBlueprintGeneratedMutableData::__FloatProperty_0' has a wrong offset!");
static_assert(offsetof(ABP_Mummy::FAnimBlueprintGeneratedMutableData, __BoolProperty_1) == 0x00000C, "Member 'ABP_Mummy::FAnimBlueprintGeneratedMutableData::__BoolProperty_1' has a wrong offset!");
static_assert(offsetof(ABP_Mummy::FAnimBlueprintGeneratedMutableData, __BoolProperty_2) == 0x00000D, "Member 'ABP_Mummy::FAnimBlueprintGeneratedMutableData::__BoolProperty_2' has a wrong offset!");

}

