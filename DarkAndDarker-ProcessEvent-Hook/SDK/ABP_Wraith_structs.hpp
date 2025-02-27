#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_Wraith

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// ScriptStruct ABP_Wraith.ABP_Wraith_C.AnimBlueprintGeneratedConstantData
// 0x017F (0x0180 - 0x0001)
struct ABP_Wraith::FAnimBlueprintGeneratedConstantData final : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_58C9[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_221;                                // 0x0004(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_222;                                // 0x000C(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_223;                                // 0x0014(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_58CA[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         __FloatProperty_224;                               // 0x0018(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimSyncMethod                               __EnumProperty_225;                                // 0x001C(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_58CB[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_226;                                // 0x0020(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_227;                                // 0x0028(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_228;                                 // 0x0030(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_58CC[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBlendProfile*                          __BlendProfile_229;                                // 0x0038(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UCurveFloat*                            __CurveFloat_230;                                  // 0x0040(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	EAlphaBlendOption                             __EnumProperty_231;                                // 0x0048(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EBlendListTransitionType                      __EnumProperty_232;                                // 0x0049(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_58CD[0x6];                                     // 0x004A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<float>                                 __ArrayProperty_233;                               // 0x0050(0x0010)(BlueprintVisible, EditFixedSize)
	float                                         __FloatProperty_234;                               // 0x0060(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputScaleBiasClampConstants          __StructProperty_235;                              // 0x0064(0x002C)(BlueprintVisible, NoDestructor)
	float                                         __FloatProperty_236;                               // 0x0090(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         __FloatProperty_237;                               // 0x0094(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_238;                                // 0x0098(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimSyncMethod                               __EnumProperty_239;                                // 0x0099(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimGroupRole                                __ByteProperty_240;                                // 0x009A(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_58CE[0x1];                                     // 0x009B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_241;                                // 0x009C(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_242;                                // 0x00A4(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_243;                                 // 0x00AC(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_244;                                // 0x00B0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_245;                                // 0x00B8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_246;                                 // 0x00C0(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_58CF[0x4];                                     // 0x00C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNodeFunctionRef                   __StructProperty_247;                              // 0x00C8(0x0020)(BlueprintVisible, NoDestructor)
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;             // 0x00E8(0x0080)()
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;                       // 0x0168(0x0018)()
};
static_assert(alignof(ABP_Wraith::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on ABP_Wraith::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(ABP_Wraith::FAnimBlueprintGeneratedConstantData) == 0x000180, "Wrong size on ABP_Wraith::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(ABP_Wraith::FAnimBlueprintGeneratedConstantData, __NameProperty_221) == 0x000004, "Member 'ABP_Wraith::FAnimBlueprintGeneratedConstantData::__NameProperty_221' has a wrong offset!");
static_assert(offsetof(ABP_Wraith::FAnimBlueprintGeneratedConstantData, __NameProperty_222) == 0x00000C, "Member 'ABP_Wraith::FAnimBlueprintGeneratedConstantData::__NameProperty_222' has a wrong offset!");
static_assert(offsetof(ABP_Wraith::FAnimBlueprintGeneratedConstantData, __BoolProperty_223) == 0x000014, "Member 'ABP_Wraith::FAnimBlueprintGeneratedConstantData::__BoolProperty_223' has a wrong offset!");
static_assert(offsetof(ABP_Wraith::FAnimBlueprintGeneratedConstantData, __FloatProperty_224) == 0x000018, "Member 'ABP_Wraith::FAnimBlueprintGeneratedConstantData::__FloatProperty_224' has a wrong offset!");
static_assert(offsetof(ABP_Wraith::FAnimBlueprintGeneratedConstantData, __EnumProperty_225) == 0x00001C, "Member 'ABP_Wraith::FAnimBlueprintGeneratedConstantData::__EnumProperty_225' has a wrong offset!");
static_assert(offsetof(ABP_Wraith::FAnimBlueprintGeneratedConstantData, __NameProperty_226) == 0x000020, "Member 'ABP_Wraith::FAnimBlueprintGeneratedConstantData::__NameProperty_226' has a wrong offset!");
static_assert(offsetof(ABP_Wraith::FAnimBlueprintGeneratedConstantData, __NameProperty_227) == 0x000028, "Member 'ABP_Wraith::FAnimBlueprintGeneratedConstantData::__NameProperty_227' has a wrong offset!");
static_assert(offsetof(ABP_Wraith::FAnimBlueprintGeneratedConstantData, __IntProperty_228) == 0x000030, "Member 'ABP_Wraith::FAnimBlueprintGeneratedConstantData::__IntProperty_228' has a wrong offset!");
static_assert(offsetof(ABP_Wraith::FAnimBlueprintGeneratedConstantData, __BlendProfile_229) == 0x000038, "Member 'ABP_Wraith::FAnimBlueprintGeneratedConstantData::__BlendProfile_229' has a wrong offset!");
static_assert(offsetof(ABP_Wraith::FAnimBlueprintGeneratedConstantData, __CurveFloat_230) == 0x000040, "Member 'ABP_Wraith::FAnimBlueprintGeneratedConstantData::__CurveFloat_230' has a wrong offset!");
static_assert(offsetof(ABP_Wraith::FAnimBlueprintGeneratedConstantData, __EnumProperty_231) == 0x000048, "Member 'ABP_Wraith::FAnimBlueprintGeneratedConstantData::__EnumProperty_231' has a wrong offset!");
static_assert(offsetof(ABP_Wraith::FAnimBlueprintGeneratedConstantData, __EnumProperty_232) == 0x000049, "Member 'ABP_Wraith::FAnimBlueprintGeneratedConstantData::__EnumProperty_232' has a wrong offset!");
static_assert(offsetof(ABP_Wraith::FAnimBlueprintGeneratedConstantData, __ArrayProperty_233) == 0x000050, "Member 'ABP_Wraith::FAnimBlueprintGeneratedConstantData::__ArrayProperty_233' has a wrong offset!");
static_assert(offsetof(ABP_Wraith::FAnimBlueprintGeneratedConstantData, __FloatProperty_234) == 0x000060, "Member 'ABP_Wraith::FAnimBlueprintGeneratedConstantData::__FloatProperty_234' has a wrong offset!");
static_assert(offsetof(ABP_Wraith::FAnimBlueprintGeneratedConstantData, __StructProperty_235) == 0x000064, "Member 'ABP_Wraith::FAnimBlueprintGeneratedConstantData::__StructProperty_235' has a wrong offset!");
static_assert(offsetof(ABP_Wraith::FAnimBlueprintGeneratedConstantData, __FloatProperty_236) == 0x000090, "Member 'ABP_Wraith::FAnimBlueprintGeneratedConstantData::__FloatProperty_236' has a wrong offset!");
static_assert(offsetof(ABP_Wraith::FAnimBlueprintGeneratedConstantData, __FloatProperty_237) == 0x000094, "Member 'ABP_Wraith::FAnimBlueprintGeneratedConstantData::__FloatProperty_237' has a wrong offset!");
static_assert(offsetof(ABP_Wraith::FAnimBlueprintGeneratedConstantData, __BoolProperty_238) == 0x000098, "Member 'ABP_Wraith::FAnimBlueprintGeneratedConstantData::__BoolProperty_238' has a wrong offset!");
static_assert(offsetof(ABP_Wraith::FAnimBlueprintGeneratedConstantData, __EnumProperty_239) == 0x000099, "Member 'ABP_Wraith::FAnimBlueprintGeneratedConstantData::__EnumProperty_239' has a wrong offset!");
static_assert(offsetof(ABP_Wraith::FAnimBlueprintGeneratedConstantData, __ByteProperty_240) == 0x00009A, "Member 'ABP_Wraith::FAnimBlueprintGeneratedConstantData::__ByteProperty_240' has a wrong offset!");
static_assert(offsetof(ABP_Wraith::FAnimBlueprintGeneratedConstantData, __NameProperty_241) == 0x00009C, "Member 'ABP_Wraith::FAnimBlueprintGeneratedConstantData::__NameProperty_241' has a wrong offset!");
static_assert(offsetof(ABP_Wraith::FAnimBlueprintGeneratedConstantData, __NameProperty_242) == 0x0000A4, "Member 'ABP_Wraith::FAnimBlueprintGeneratedConstantData::__NameProperty_242' has a wrong offset!");
static_assert(offsetof(ABP_Wraith::FAnimBlueprintGeneratedConstantData, __IntProperty_243) == 0x0000AC, "Member 'ABP_Wraith::FAnimBlueprintGeneratedConstantData::__IntProperty_243' has a wrong offset!");
static_assert(offsetof(ABP_Wraith::FAnimBlueprintGeneratedConstantData, __NameProperty_244) == 0x0000B0, "Member 'ABP_Wraith::FAnimBlueprintGeneratedConstantData::__NameProperty_244' has a wrong offset!");
static_assert(offsetof(ABP_Wraith::FAnimBlueprintGeneratedConstantData, __NameProperty_245) == 0x0000B8, "Member 'ABP_Wraith::FAnimBlueprintGeneratedConstantData::__NameProperty_245' has a wrong offset!");
static_assert(offsetof(ABP_Wraith::FAnimBlueprintGeneratedConstantData, __IntProperty_246) == 0x0000C0, "Member 'ABP_Wraith::FAnimBlueprintGeneratedConstantData::__IntProperty_246' has a wrong offset!");
static_assert(offsetof(ABP_Wraith::FAnimBlueprintGeneratedConstantData, __StructProperty_247) == 0x0000C8, "Member 'ABP_Wraith::FAnimBlueprintGeneratedConstantData::__StructProperty_247' has a wrong offset!");
static_assert(offsetof(ABP_Wraith::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x0000E8, "Member 'ABP_Wraith::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(ABP_Wraith::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x000168, "Member 'ABP_Wraith::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");

// ScriptStruct ABP_Wraith.ABP_Wraith_C.AnimBlueprintGeneratedMutableData
// 0x000B (0x000C - 0x0001)
struct ABP_Wraith::FAnimBlueprintGeneratedMutableData final : public FAnimBlueprintMutableData
{
public:
	uint8                                         Pad_58D0[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         __FloatProperty;                                   // 0x0004(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_0;                                  // 0x0008(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_1;                                  // 0x0009(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_Wraith::FAnimBlueprintGeneratedMutableData) == 0x000004, "Wrong alignment on ABP_Wraith::FAnimBlueprintGeneratedMutableData");
static_assert(sizeof(ABP_Wraith::FAnimBlueprintGeneratedMutableData) == 0x00000C, "Wrong size on ABP_Wraith::FAnimBlueprintGeneratedMutableData");
static_assert(offsetof(ABP_Wraith::FAnimBlueprintGeneratedMutableData, __FloatProperty) == 0x000004, "Member 'ABP_Wraith::FAnimBlueprintGeneratedMutableData::__FloatProperty' has a wrong offset!");
static_assert(offsetof(ABP_Wraith::FAnimBlueprintGeneratedMutableData, __BoolProperty_0) == 0x000008, "Member 'ABP_Wraith::FAnimBlueprintGeneratedMutableData::__BoolProperty_0' has a wrong offset!");
static_assert(offsetof(ABP_Wraith::FAnimBlueprintGeneratedMutableData, __BoolProperty_1) == 0x000009, "Member 'ABP_Wraith::FAnimBlueprintGeneratedMutableData::__BoolProperty_1' has a wrong offset!");

}

