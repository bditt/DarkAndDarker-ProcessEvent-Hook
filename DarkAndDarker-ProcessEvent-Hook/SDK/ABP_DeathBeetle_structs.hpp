#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_DeathBeetle

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// ScriptStruct ABP_DeathBeetle.ABP_DeathBeetle_C.AnimBlueprintGeneratedConstantData
// 0x016F (0x0170 - 0x0001)
struct ABP_DeathBeetle::FAnimBlueprintGeneratedConstantData final : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_463B[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_182;                                // 0x0004(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_183;                                // 0x000C(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_184;                                 // 0x0014(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_185;                                // 0x0018(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_186;                                 // 0x0020(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_187;                                // 0x0024(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_188;                                // 0x002C(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputScaleBiasClampConstants          __StructProperty_189;                              // 0x0034(0x002C)(BlueprintVisible, NoDestructor)
	class FName                                   __NameProperty_190;                                // 0x0060(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_191;                                 // 0x0068(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         __FloatProperty_192;                               // 0x006C(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_193;                                // 0x0070(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_463C[0x3];                                     // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         __FloatProperty_194;                               // 0x0074(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimSyncMethod                               __EnumProperty_195;                                // 0x0078(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimGroupRole                                __ByteProperty_196;                                // 0x0079(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_463D[0x2];                                     // 0x007A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_197;                                // 0x007C(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_198;                                // 0x0084(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_199;                                 // 0x008C(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnimNodeFunctionRef                   __StructProperty_200;                              // 0x0090(0x0020)(BlueprintVisible, NoDestructor)
	class UBlendProfile*                          __BlendProfile_201;                                // 0x00B0(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UCurveFloat*                            __CurveFloat_202;                                  // 0x00B8(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          __BoolProperty_203;                                // 0x00C0(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAlphaBlendOption                             __EnumProperty_204;                                // 0x00C1(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EBlendListTransitionType                      __EnumProperty_205;                                // 0x00C2(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_463E[0x5];                                     // 0x00C3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<float>                                 __ArrayProperty_206;                               // 0x00C8(0x0010)(BlueprintVisible, EditFixedSize)
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;             // 0x00D8(0x0080)()
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;                       // 0x0158(0x0018)()
};
static_assert(alignof(ABP_DeathBeetle::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on ABP_DeathBeetle::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(ABP_DeathBeetle::FAnimBlueprintGeneratedConstantData) == 0x000170, "Wrong size on ABP_DeathBeetle::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(ABP_DeathBeetle::FAnimBlueprintGeneratedConstantData, __NameProperty_182) == 0x000004, "Member 'ABP_DeathBeetle::FAnimBlueprintGeneratedConstantData::__NameProperty_182' has a wrong offset!");
static_assert(offsetof(ABP_DeathBeetle::FAnimBlueprintGeneratedConstantData, __NameProperty_183) == 0x00000C, "Member 'ABP_DeathBeetle::FAnimBlueprintGeneratedConstantData::__NameProperty_183' has a wrong offset!");
static_assert(offsetof(ABP_DeathBeetle::FAnimBlueprintGeneratedConstantData, __IntProperty_184) == 0x000014, "Member 'ABP_DeathBeetle::FAnimBlueprintGeneratedConstantData::__IntProperty_184' has a wrong offset!");
static_assert(offsetof(ABP_DeathBeetle::FAnimBlueprintGeneratedConstantData, __NameProperty_185) == 0x000018, "Member 'ABP_DeathBeetle::FAnimBlueprintGeneratedConstantData::__NameProperty_185' has a wrong offset!");
static_assert(offsetof(ABP_DeathBeetle::FAnimBlueprintGeneratedConstantData, __IntProperty_186) == 0x000020, "Member 'ABP_DeathBeetle::FAnimBlueprintGeneratedConstantData::__IntProperty_186' has a wrong offset!");
static_assert(offsetof(ABP_DeathBeetle::FAnimBlueprintGeneratedConstantData, __NameProperty_187) == 0x000024, "Member 'ABP_DeathBeetle::FAnimBlueprintGeneratedConstantData::__NameProperty_187' has a wrong offset!");
static_assert(offsetof(ABP_DeathBeetle::FAnimBlueprintGeneratedConstantData, __NameProperty_188) == 0x00002C, "Member 'ABP_DeathBeetle::FAnimBlueprintGeneratedConstantData::__NameProperty_188' has a wrong offset!");
static_assert(offsetof(ABP_DeathBeetle::FAnimBlueprintGeneratedConstantData, __StructProperty_189) == 0x000034, "Member 'ABP_DeathBeetle::FAnimBlueprintGeneratedConstantData::__StructProperty_189' has a wrong offset!");
static_assert(offsetof(ABP_DeathBeetle::FAnimBlueprintGeneratedConstantData, __NameProperty_190) == 0x000060, "Member 'ABP_DeathBeetle::FAnimBlueprintGeneratedConstantData::__NameProperty_190' has a wrong offset!");
static_assert(offsetof(ABP_DeathBeetle::FAnimBlueprintGeneratedConstantData, __IntProperty_191) == 0x000068, "Member 'ABP_DeathBeetle::FAnimBlueprintGeneratedConstantData::__IntProperty_191' has a wrong offset!");
static_assert(offsetof(ABP_DeathBeetle::FAnimBlueprintGeneratedConstantData, __FloatProperty_192) == 0x00006C, "Member 'ABP_DeathBeetle::FAnimBlueprintGeneratedConstantData::__FloatProperty_192' has a wrong offset!");
static_assert(offsetof(ABP_DeathBeetle::FAnimBlueprintGeneratedConstantData, __BoolProperty_193) == 0x000070, "Member 'ABP_DeathBeetle::FAnimBlueprintGeneratedConstantData::__BoolProperty_193' has a wrong offset!");
static_assert(offsetof(ABP_DeathBeetle::FAnimBlueprintGeneratedConstantData, __FloatProperty_194) == 0x000074, "Member 'ABP_DeathBeetle::FAnimBlueprintGeneratedConstantData::__FloatProperty_194' has a wrong offset!");
static_assert(offsetof(ABP_DeathBeetle::FAnimBlueprintGeneratedConstantData, __EnumProperty_195) == 0x000078, "Member 'ABP_DeathBeetle::FAnimBlueprintGeneratedConstantData::__EnumProperty_195' has a wrong offset!");
static_assert(offsetof(ABP_DeathBeetle::FAnimBlueprintGeneratedConstantData, __ByteProperty_196) == 0x000079, "Member 'ABP_DeathBeetle::FAnimBlueprintGeneratedConstantData::__ByteProperty_196' has a wrong offset!");
static_assert(offsetof(ABP_DeathBeetle::FAnimBlueprintGeneratedConstantData, __NameProperty_197) == 0x00007C, "Member 'ABP_DeathBeetle::FAnimBlueprintGeneratedConstantData::__NameProperty_197' has a wrong offset!");
static_assert(offsetof(ABP_DeathBeetle::FAnimBlueprintGeneratedConstantData, __NameProperty_198) == 0x000084, "Member 'ABP_DeathBeetle::FAnimBlueprintGeneratedConstantData::__NameProperty_198' has a wrong offset!");
static_assert(offsetof(ABP_DeathBeetle::FAnimBlueprintGeneratedConstantData, __IntProperty_199) == 0x00008C, "Member 'ABP_DeathBeetle::FAnimBlueprintGeneratedConstantData::__IntProperty_199' has a wrong offset!");
static_assert(offsetof(ABP_DeathBeetle::FAnimBlueprintGeneratedConstantData, __StructProperty_200) == 0x000090, "Member 'ABP_DeathBeetle::FAnimBlueprintGeneratedConstantData::__StructProperty_200' has a wrong offset!");
static_assert(offsetof(ABP_DeathBeetle::FAnimBlueprintGeneratedConstantData, __BlendProfile_201) == 0x0000B0, "Member 'ABP_DeathBeetle::FAnimBlueprintGeneratedConstantData::__BlendProfile_201' has a wrong offset!");
static_assert(offsetof(ABP_DeathBeetle::FAnimBlueprintGeneratedConstantData, __CurveFloat_202) == 0x0000B8, "Member 'ABP_DeathBeetle::FAnimBlueprintGeneratedConstantData::__CurveFloat_202' has a wrong offset!");
static_assert(offsetof(ABP_DeathBeetle::FAnimBlueprintGeneratedConstantData, __BoolProperty_203) == 0x0000C0, "Member 'ABP_DeathBeetle::FAnimBlueprintGeneratedConstantData::__BoolProperty_203' has a wrong offset!");
static_assert(offsetof(ABP_DeathBeetle::FAnimBlueprintGeneratedConstantData, __EnumProperty_204) == 0x0000C1, "Member 'ABP_DeathBeetle::FAnimBlueprintGeneratedConstantData::__EnumProperty_204' has a wrong offset!");
static_assert(offsetof(ABP_DeathBeetle::FAnimBlueprintGeneratedConstantData, __EnumProperty_205) == 0x0000C2, "Member 'ABP_DeathBeetle::FAnimBlueprintGeneratedConstantData::__EnumProperty_205' has a wrong offset!");
static_assert(offsetof(ABP_DeathBeetle::FAnimBlueprintGeneratedConstantData, __ArrayProperty_206) == 0x0000C8, "Member 'ABP_DeathBeetle::FAnimBlueprintGeneratedConstantData::__ArrayProperty_206' has a wrong offset!");
static_assert(offsetof(ABP_DeathBeetle::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x0000D8, "Member 'ABP_DeathBeetle::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(ABP_DeathBeetle::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x000158, "Member 'ABP_DeathBeetle::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");

// ScriptStruct ABP_DeathBeetle.ABP_DeathBeetle_C.AnimBlueprintGeneratedMutableData
// 0x000F (0x0010 - 0x0001)
struct ABP_DeathBeetle::FAnimBlueprintGeneratedMutableData final : public FAnimBlueprintMutableData
{
public:
	uint8                                         Pad_463F[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         __FloatProperty;                                   // 0x0004(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         __FloatProperty_0;                                 // 0x0008(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_1;                                  // 0x000C(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_DeathBeetle::FAnimBlueprintGeneratedMutableData) == 0x000004, "Wrong alignment on ABP_DeathBeetle::FAnimBlueprintGeneratedMutableData");
static_assert(sizeof(ABP_DeathBeetle::FAnimBlueprintGeneratedMutableData) == 0x000010, "Wrong size on ABP_DeathBeetle::FAnimBlueprintGeneratedMutableData");
static_assert(offsetof(ABP_DeathBeetle::FAnimBlueprintGeneratedMutableData, __FloatProperty) == 0x000004, "Member 'ABP_DeathBeetle::FAnimBlueprintGeneratedMutableData::__FloatProperty' has a wrong offset!");
static_assert(offsetof(ABP_DeathBeetle::FAnimBlueprintGeneratedMutableData, __FloatProperty_0) == 0x000008, "Member 'ABP_DeathBeetle::FAnimBlueprintGeneratedMutableData::__FloatProperty_0' has a wrong offset!");
static_assert(offsetof(ABP_DeathBeetle::FAnimBlueprintGeneratedMutableData, __BoolProperty_1) == 0x00000C, "Member 'ABP_DeathBeetle::FAnimBlueprintGeneratedMutableData::__BoolProperty_1' has a wrong offset!");

}

