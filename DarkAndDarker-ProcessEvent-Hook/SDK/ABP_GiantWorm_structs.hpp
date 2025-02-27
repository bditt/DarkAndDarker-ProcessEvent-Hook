#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_GiantWorm

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// ScriptStruct ABP_GiantWorm.ABP_GiantWorm_C.AnimBlueprintGeneratedConstantData
// 0x018F (0x0190 - 0x0001)
struct ABP_GiantWorm::FAnimBlueprintGeneratedConstantData final : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_4F3B[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_216;                                // 0x0004(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_217;                                // 0x000C(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_218;                                // 0x0014(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimSyncMethod                               __EnumProperty_219;                                // 0x001C(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4F3C[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_220;                                // 0x0020(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_221;                                // 0x0028(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_222;                                 // 0x0030(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_223;                                // 0x0034(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_224;                                // 0x003C(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_225;                                 // 0x0044(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_226;                                // 0x0048(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4F3D[0x3];                                     // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         __FloatProperty_227;                               // 0x004C(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputScaleBiasClampConstants          __StructProperty_228;                              // 0x0050(0x002C)(BlueprintVisible, NoDestructor)
	float                                         __FloatProperty_229;                               // 0x007C(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimSyncMethod                               __EnumProperty_230;                                // 0x0080(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimGroupRole                                __ByteProperty_231;                                // 0x0081(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4F3E[0x2];                                     // 0x0082(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_232;                                // 0x0084(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4F3F[0x4];                                     // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBlendProfile*                          __BlendProfile_233;                                // 0x0090(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UCurveFloat*                            __CurveFloat_234;                                  // 0x0098(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          __BoolProperty_235;                                // 0x00A0(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAlphaBlendOption                             __EnumProperty_236;                                // 0x00A1(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EBlendListTransitionType                      __EnumProperty_237;                                // 0x00A2(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4F40[0x5];                                     // 0x00A3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<float>                                 __ArrayProperty_238;                               // 0x00A8(0x0010)(BlueprintVisible, EditFixedSize)
	class FName                                   __NameProperty_239;                                // 0x00B8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_240;                                 // 0x00C0(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_241;                                // 0x00C4(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_242;                                // 0x00CC(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_243;                                 // 0x00D4(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnimNodeFunctionRef                   __StructProperty_244;                              // 0x00D8(0x0020)(BlueprintVisible, NoDestructor)
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;             // 0x00F8(0x0080)()
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;                       // 0x0178(0x0018)()
};
static_assert(alignof(ABP_GiantWorm::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on ABP_GiantWorm::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(ABP_GiantWorm::FAnimBlueprintGeneratedConstantData) == 0x000190, "Wrong size on ABP_GiantWorm::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(ABP_GiantWorm::FAnimBlueprintGeneratedConstantData, __NameProperty_216) == 0x000004, "Member 'ABP_GiantWorm::FAnimBlueprintGeneratedConstantData::__NameProperty_216' has a wrong offset!");
static_assert(offsetof(ABP_GiantWorm::FAnimBlueprintGeneratedConstantData, __NameProperty_217) == 0x00000C, "Member 'ABP_GiantWorm::FAnimBlueprintGeneratedConstantData::__NameProperty_217' has a wrong offset!");
static_assert(offsetof(ABP_GiantWorm::FAnimBlueprintGeneratedConstantData, __NameProperty_218) == 0x000014, "Member 'ABP_GiantWorm::FAnimBlueprintGeneratedConstantData::__NameProperty_218' has a wrong offset!");
static_assert(offsetof(ABP_GiantWorm::FAnimBlueprintGeneratedConstantData, __EnumProperty_219) == 0x00001C, "Member 'ABP_GiantWorm::FAnimBlueprintGeneratedConstantData::__EnumProperty_219' has a wrong offset!");
static_assert(offsetof(ABP_GiantWorm::FAnimBlueprintGeneratedConstantData, __NameProperty_220) == 0x000020, "Member 'ABP_GiantWorm::FAnimBlueprintGeneratedConstantData::__NameProperty_220' has a wrong offset!");
static_assert(offsetof(ABP_GiantWorm::FAnimBlueprintGeneratedConstantData, __NameProperty_221) == 0x000028, "Member 'ABP_GiantWorm::FAnimBlueprintGeneratedConstantData::__NameProperty_221' has a wrong offset!");
static_assert(offsetof(ABP_GiantWorm::FAnimBlueprintGeneratedConstantData, __IntProperty_222) == 0x000030, "Member 'ABP_GiantWorm::FAnimBlueprintGeneratedConstantData::__IntProperty_222' has a wrong offset!");
static_assert(offsetof(ABP_GiantWorm::FAnimBlueprintGeneratedConstantData, __NameProperty_223) == 0x000034, "Member 'ABP_GiantWorm::FAnimBlueprintGeneratedConstantData::__NameProperty_223' has a wrong offset!");
static_assert(offsetof(ABP_GiantWorm::FAnimBlueprintGeneratedConstantData, __NameProperty_224) == 0x00003C, "Member 'ABP_GiantWorm::FAnimBlueprintGeneratedConstantData::__NameProperty_224' has a wrong offset!");
static_assert(offsetof(ABP_GiantWorm::FAnimBlueprintGeneratedConstantData, __IntProperty_225) == 0x000044, "Member 'ABP_GiantWorm::FAnimBlueprintGeneratedConstantData::__IntProperty_225' has a wrong offset!");
static_assert(offsetof(ABP_GiantWorm::FAnimBlueprintGeneratedConstantData, __BoolProperty_226) == 0x000048, "Member 'ABP_GiantWorm::FAnimBlueprintGeneratedConstantData::__BoolProperty_226' has a wrong offset!");
static_assert(offsetof(ABP_GiantWorm::FAnimBlueprintGeneratedConstantData, __FloatProperty_227) == 0x00004C, "Member 'ABP_GiantWorm::FAnimBlueprintGeneratedConstantData::__FloatProperty_227' has a wrong offset!");
static_assert(offsetof(ABP_GiantWorm::FAnimBlueprintGeneratedConstantData, __StructProperty_228) == 0x000050, "Member 'ABP_GiantWorm::FAnimBlueprintGeneratedConstantData::__StructProperty_228' has a wrong offset!");
static_assert(offsetof(ABP_GiantWorm::FAnimBlueprintGeneratedConstantData, __FloatProperty_229) == 0x00007C, "Member 'ABP_GiantWorm::FAnimBlueprintGeneratedConstantData::__FloatProperty_229' has a wrong offset!");
static_assert(offsetof(ABP_GiantWorm::FAnimBlueprintGeneratedConstantData, __EnumProperty_230) == 0x000080, "Member 'ABP_GiantWorm::FAnimBlueprintGeneratedConstantData::__EnumProperty_230' has a wrong offset!");
static_assert(offsetof(ABP_GiantWorm::FAnimBlueprintGeneratedConstantData, __ByteProperty_231) == 0x000081, "Member 'ABP_GiantWorm::FAnimBlueprintGeneratedConstantData::__ByteProperty_231' has a wrong offset!");
static_assert(offsetof(ABP_GiantWorm::FAnimBlueprintGeneratedConstantData, __NameProperty_232) == 0x000084, "Member 'ABP_GiantWorm::FAnimBlueprintGeneratedConstantData::__NameProperty_232' has a wrong offset!");
static_assert(offsetof(ABP_GiantWorm::FAnimBlueprintGeneratedConstantData, __BlendProfile_233) == 0x000090, "Member 'ABP_GiantWorm::FAnimBlueprintGeneratedConstantData::__BlendProfile_233' has a wrong offset!");
static_assert(offsetof(ABP_GiantWorm::FAnimBlueprintGeneratedConstantData, __CurveFloat_234) == 0x000098, "Member 'ABP_GiantWorm::FAnimBlueprintGeneratedConstantData::__CurveFloat_234' has a wrong offset!");
static_assert(offsetof(ABP_GiantWorm::FAnimBlueprintGeneratedConstantData, __BoolProperty_235) == 0x0000A0, "Member 'ABP_GiantWorm::FAnimBlueprintGeneratedConstantData::__BoolProperty_235' has a wrong offset!");
static_assert(offsetof(ABP_GiantWorm::FAnimBlueprintGeneratedConstantData, __EnumProperty_236) == 0x0000A1, "Member 'ABP_GiantWorm::FAnimBlueprintGeneratedConstantData::__EnumProperty_236' has a wrong offset!");
static_assert(offsetof(ABP_GiantWorm::FAnimBlueprintGeneratedConstantData, __EnumProperty_237) == 0x0000A2, "Member 'ABP_GiantWorm::FAnimBlueprintGeneratedConstantData::__EnumProperty_237' has a wrong offset!");
static_assert(offsetof(ABP_GiantWorm::FAnimBlueprintGeneratedConstantData, __ArrayProperty_238) == 0x0000A8, "Member 'ABP_GiantWorm::FAnimBlueprintGeneratedConstantData::__ArrayProperty_238' has a wrong offset!");
static_assert(offsetof(ABP_GiantWorm::FAnimBlueprintGeneratedConstantData, __NameProperty_239) == 0x0000B8, "Member 'ABP_GiantWorm::FAnimBlueprintGeneratedConstantData::__NameProperty_239' has a wrong offset!");
static_assert(offsetof(ABP_GiantWorm::FAnimBlueprintGeneratedConstantData, __IntProperty_240) == 0x0000C0, "Member 'ABP_GiantWorm::FAnimBlueprintGeneratedConstantData::__IntProperty_240' has a wrong offset!");
static_assert(offsetof(ABP_GiantWorm::FAnimBlueprintGeneratedConstantData, __NameProperty_241) == 0x0000C4, "Member 'ABP_GiantWorm::FAnimBlueprintGeneratedConstantData::__NameProperty_241' has a wrong offset!");
static_assert(offsetof(ABP_GiantWorm::FAnimBlueprintGeneratedConstantData, __NameProperty_242) == 0x0000CC, "Member 'ABP_GiantWorm::FAnimBlueprintGeneratedConstantData::__NameProperty_242' has a wrong offset!");
static_assert(offsetof(ABP_GiantWorm::FAnimBlueprintGeneratedConstantData, __IntProperty_243) == 0x0000D4, "Member 'ABP_GiantWorm::FAnimBlueprintGeneratedConstantData::__IntProperty_243' has a wrong offset!");
static_assert(offsetof(ABP_GiantWorm::FAnimBlueprintGeneratedConstantData, __StructProperty_244) == 0x0000D8, "Member 'ABP_GiantWorm::FAnimBlueprintGeneratedConstantData::__StructProperty_244' has a wrong offset!");
static_assert(offsetof(ABP_GiantWorm::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x0000F8, "Member 'ABP_GiantWorm::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(ABP_GiantWorm::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x000178, "Member 'ABP_GiantWorm::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");

// ScriptStruct ABP_GiantWorm.ABP_GiantWorm_C.AnimBlueprintGeneratedMutableData
// 0x000B (0x000C - 0x0001)
struct ABP_GiantWorm::FAnimBlueprintGeneratedMutableData final : public FAnimBlueprintMutableData
{
public:
	uint8                                         Pad_4F41[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         __FloatProperty;                                   // 0x0004(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_0;                                  // 0x0008(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_1;                                  // 0x0009(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_GiantWorm::FAnimBlueprintGeneratedMutableData) == 0x000004, "Wrong alignment on ABP_GiantWorm::FAnimBlueprintGeneratedMutableData");
static_assert(sizeof(ABP_GiantWorm::FAnimBlueprintGeneratedMutableData) == 0x00000C, "Wrong size on ABP_GiantWorm::FAnimBlueprintGeneratedMutableData");
static_assert(offsetof(ABP_GiantWorm::FAnimBlueprintGeneratedMutableData, __FloatProperty) == 0x000004, "Member 'ABP_GiantWorm::FAnimBlueprintGeneratedMutableData::__FloatProperty' has a wrong offset!");
static_assert(offsetof(ABP_GiantWorm::FAnimBlueprintGeneratedMutableData, __BoolProperty_0) == 0x000008, "Member 'ABP_GiantWorm::FAnimBlueprintGeneratedMutableData::__BoolProperty_0' has a wrong offset!");
static_assert(offsetof(ABP_GiantWorm::FAnimBlueprintGeneratedMutableData, __BoolProperty_1) == 0x000009, "Member 'ABP_GiantWorm::FAnimBlueprintGeneratedMutableData::__BoolProperty_1' has a wrong offset!");

}

