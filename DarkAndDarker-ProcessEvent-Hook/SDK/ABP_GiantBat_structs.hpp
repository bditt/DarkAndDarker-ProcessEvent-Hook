#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_GiantBat

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK
{

// ScriptStruct ABP_GiantBat.ABP_GiantBat_C.AnimBlueprintGeneratedConstantData
// 0x0167 (0x0168 - 0x0001)
struct ABP_GiantBat::FAnimBlueprintGeneratedConstantData final : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_337D[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_177;                                // 0x0004(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_178;                                // 0x000C(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_179;                                 // 0x0014(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_180;                                // 0x0018(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_181;                                // 0x0020(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimSyncMethod                               __EnumProperty_182;                                // 0x0028(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_337E[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_183;                                // 0x002C(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_184;                                // 0x0034(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_185;                                // 0x003C(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_186;                                // 0x0044(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_187;                                 // 0x004C(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputScaleBiasClampConstants          __StructProperty_188;                              // 0x0050(0x002C)(BlueprintVisible, NoDestructor)
	class FName                                   __NameProperty_189;                                // 0x007C(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_190;                                 // 0x0084(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_191;                                // 0x0088(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_337F[0x3];                                     // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         __FloatProperty_192;                               // 0x008C(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         __FloatProperty_193;                               // 0x0090(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_194;                                // 0x0094(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimSyncMethod                               __EnumProperty_195;                                // 0x0095(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimGroupRole                                __ByteProperty_196;                                // 0x0096(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3380[0x1];                                     // 0x0097(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_197;                                // 0x0098(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_198;                                // 0x00A0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_199;                                 // 0x00A8(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3381[0x4];                                     // 0x00AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNodeFunctionRef                   __StructProperty_200;                              // 0x00B0(0x0020)(BlueprintVisible, NoDestructor)
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;             // 0x00D0(0x0080)()
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;                       // 0x0150(0x0018)()
};
static_assert(alignof(ABP_GiantBat::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on ABP_GiantBat::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(ABP_GiantBat::FAnimBlueprintGeneratedConstantData) == 0x000168, "Wrong size on ABP_GiantBat::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(ABP_GiantBat::FAnimBlueprintGeneratedConstantData, __NameProperty_177) == 0x000004, "Member 'ABP_GiantBat::FAnimBlueprintGeneratedConstantData::__NameProperty_177' has a wrong offset!");
static_assert(offsetof(ABP_GiantBat::FAnimBlueprintGeneratedConstantData, __NameProperty_178) == 0x00000C, "Member 'ABP_GiantBat::FAnimBlueprintGeneratedConstantData::__NameProperty_178' has a wrong offset!");
static_assert(offsetof(ABP_GiantBat::FAnimBlueprintGeneratedConstantData, __IntProperty_179) == 0x000014, "Member 'ABP_GiantBat::FAnimBlueprintGeneratedConstantData::__IntProperty_179' has a wrong offset!");
static_assert(offsetof(ABP_GiantBat::FAnimBlueprintGeneratedConstantData, __NameProperty_180) == 0x000018, "Member 'ABP_GiantBat::FAnimBlueprintGeneratedConstantData::__NameProperty_180' has a wrong offset!");
static_assert(offsetof(ABP_GiantBat::FAnimBlueprintGeneratedConstantData, __NameProperty_181) == 0x000020, "Member 'ABP_GiantBat::FAnimBlueprintGeneratedConstantData::__NameProperty_181' has a wrong offset!");
static_assert(offsetof(ABP_GiantBat::FAnimBlueprintGeneratedConstantData, __EnumProperty_182) == 0x000028, "Member 'ABP_GiantBat::FAnimBlueprintGeneratedConstantData::__EnumProperty_182' has a wrong offset!");
static_assert(offsetof(ABP_GiantBat::FAnimBlueprintGeneratedConstantData, __NameProperty_183) == 0x00002C, "Member 'ABP_GiantBat::FAnimBlueprintGeneratedConstantData::__NameProperty_183' has a wrong offset!");
static_assert(offsetof(ABP_GiantBat::FAnimBlueprintGeneratedConstantData, __NameProperty_184) == 0x000034, "Member 'ABP_GiantBat::FAnimBlueprintGeneratedConstantData::__NameProperty_184' has a wrong offset!");
static_assert(offsetof(ABP_GiantBat::FAnimBlueprintGeneratedConstantData, __NameProperty_185) == 0x00003C, "Member 'ABP_GiantBat::FAnimBlueprintGeneratedConstantData::__NameProperty_185' has a wrong offset!");
static_assert(offsetof(ABP_GiantBat::FAnimBlueprintGeneratedConstantData, __NameProperty_186) == 0x000044, "Member 'ABP_GiantBat::FAnimBlueprintGeneratedConstantData::__NameProperty_186' has a wrong offset!");
static_assert(offsetof(ABP_GiantBat::FAnimBlueprintGeneratedConstantData, __IntProperty_187) == 0x00004C, "Member 'ABP_GiantBat::FAnimBlueprintGeneratedConstantData::__IntProperty_187' has a wrong offset!");
static_assert(offsetof(ABP_GiantBat::FAnimBlueprintGeneratedConstantData, __StructProperty_188) == 0x000050, "Member 'ABP_GiantBat::FAnimBlueprintGeneratedConstantData::__StructProperty_188' has a wrong offset!");
static_assert(offsetof(ABP_GiantBat::FAnimBlueprintGeneratedConstantData, __NameProperty_189) == 0x00007C, "Member 'ABP_GiantBat::FAnimBlueprintGeneratedConstantData::__NameProperty_189' has a wrong offset!");
static_assert(offsetof(ABP_GiantBat::FAnimBlueprintGeneratedConstantData, __IntProperty_190) == 0x000084, "Member 'ABP_GiantBat::FAnimBlueprintGeneratedConstantData::__IntProperty_190' has a wrong offset!");
static_assert(offsetof(ABP_GiantBat::FAnimBlueprintGeneratedConstantData, __BoolProperty_191) == 0x000088, "Member 'ABP_GiantBat::FAnimBlueprintGeneratedConstantData::__BoolProperty_191' has a wrong offset!");
static_assert(offsetof(ABP_GiantBat::FAnimBlueprintGeneratedConstantData, __FloatProperty_192) == 0x00008C, "Member 'ABP_GiantBat::FAnimBlueprintGeneratedConstantData::__FloatProperty_192' has a wrong offset!");
static_assert(offsetof(ABP_GiantBat::FAnimBlueprintGeneratedConstantData, __FloatProperty_193) == 0x000090, "Member 'ABP_GiantBat::FAnimBlueprintGeneratedConstantData::__FloatProperty_193' has a wrong offset!");
static_assert(offsetof(ABP_GiantBat::FAnimBlueprintGeneratedConstantData, __BoolProperty_194) == 0x000094, "Member 'ABP_GiantBat::FAnimBlueprintGeneratedConstantData::__BoolProperty_194' has a wrong offset!");
static_assert(offsetof(ABP_GiantBat::FAnimBlueprintGeneratedConstantData, __EnumProperty_195) == 0x000095, "Member 'ABP_GiantBat::FAnimBlueprintGeneratedConstantData::__EnumProperty_195' has a wrong offset!");
static_assert(offsetof(ABP_GiantBat::FAnimBlueprintGeneratedConstantData, __ByteProperty_196) == 0x000096, "Member 'ABP_GiantBat::FAnimBlueprintGeneratedConstantData::__ByteProperty_196' has a wrong offset!");
static_assert(offsetof(ABP_GiantBat::FAnimBlueprintGeneratedConstantData, __NameProperty_197) == 0x000098, "Member 'ABP_GiantBat::FAnimBlueprintGeneratedConstantData::__NameProperty_197' has a wrong offset!");
static_assert(offsetof(ABP_GiantBat::FAnimBlueprintGeneratedConstantData, __NameProperty_198) == 0x0000A0, "Member 'ABP_GiantBat::FAnimBlueprintGeneratedConstantData::__NameProperty_198' has a wrong offset!");
static_assert(offsetof(ABP_GiantBat::FAnimBlueprintGeneratedConstantData, __IntProperty_199) == 0x0000A8, "Member 'ABP_GiantBat::FAnimBlueprintGeneratedConstantData::__IntProperty_199' has a wrong offset!");
static_assert(offsetof(ABP_GiantBat::FAnimBlueprintGeneratedConstantData, __StructProperty_200) == 0x0000B0, "Member 'ABP_GiantBat::FAnimBlueprintGeneratedConstantData::__StructProperty_200' has a wrong offset!");
static_assert(offsetof(ABP_GiantBat::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x0000D0, "Member 'ABP_GiantBat::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(ABP_GiantBat::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x000150, "Member 'ABP_GiantBat::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");

// ScriptStruct ABP_GiantBat.ABP_GiantBat_C.AnimBlueprintGeneratedMutableData
// 0x0007 (0x0008 - 0x0001)
struct ABP_GiantBat::FAnimBlueprintGeneratedMutableData final : public FAnimBlueprintMutableData
{
public:
	uint8                                         Pad_3382[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         __FloatProperty;                                   // 0x0004(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_GiantBat::FAnimBlueprintGeneratedMutableData) == 0x000004, "Wrong alignment on ABP_GiantBat::FAnimBlueprintGeneratedMutableData");
static_assert(sizeof(ABP_GiantBat::FAnimBlueprintGeneratedMutableData) == 0x000008, "Wrong size on ABP_GiantBat::FAnimBlueprintGeneratedMutableData");
static_assert(offsetof(ABP_GiantBat::FAnimBlueprintGeneratedMutableData, __FloatProperty) == 0x000004, "Member 'ABP_GiantBat::FAnimBlueprintGeneratedMutableData::__FloatProperty' has a wrong offset!");

}

