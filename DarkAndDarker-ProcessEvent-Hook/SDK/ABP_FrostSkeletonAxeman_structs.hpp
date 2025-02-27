#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_FrostSkeletonAxeman

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK
{

// ScriptStruct ABP_FrostSkeletonAxeman.ABP_FrostSkeletonAxeman_C.AnimBlueprintGeneratedConstantData
// 0x0147 (0x0148 - 0x0001)
struct ABP_FrostSkeletonAxeman::FAnimBlueprintGeneratedConstantData final : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_5923[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_194;                                // 0x0004(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_195;                                // 0x000C(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_196;                                // 0x0014(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_197;                                // 0x001C(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_198;                                // 0x0024(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_199;                                 // 0x002C(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         __FloatProperty_200;                               // 0x0030(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputScaleBiasClampConstants          __StructProperty_201;                              // 0x0034(0x002C)(BlueprintVisible, NoDestructor)
	class FName                                   __NameProperty_202;                                // 0x0060(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_203;                                 // 0x0068(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_204;                                // 0x006C(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5924[0x3];                                     // 0x006D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         __FloatProperty_205;                               // 0x0070(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         __FloatProperty_206;                               // 0x0074(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_207;                                // 0x0078(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimSyncMethod                               __EnumProperty_208;                                // 0x0079(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimGroupRole                                __ByteProperty_209;                                // 0x007A(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5925[0x1];                                     // 0x007B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_210;                                // 0x007C(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_211;                                // 0x0084(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_212;                                 // 0x008C(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnimNodeFunctionRef                   __StructProperty_213;                              // 0x0090(0x0020)(BlueprintVisible, NoDestructor)
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;             // 0x00B0(0x0080)()
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;                       // 0x0130(0x0018)()
};
static_assert(alignof(ABP_FrostSkeletonAxeman::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on ABP_FrostSkeletonAxeman::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(ABP_FrostSkeletonAxeman::FAnimBlueprintGeneratedConstantData) == 0x000148, "Wrong size on ABP_FrostSkeletonAxeman::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(ABP_FrostSkeletonAxeman::FAnimBlueprintGeneratedConstantData, __NameProperty_194) == 0x000004, "Member 'ABP_FrostSkeletonAxeman::FAnimBlueprintGeneratedConstantData::__NameProperty_194' has a wrong offset!");
static_assert(offsetof(ABP_FrostSkeletonAxeman::FAnimBlueprintGeneratedConstantData, __NameProperty_195) == 0x00000C, "Member 'ABP_FrostSkeletonAxeman::FAnimBlueprintGeneratedConstantData::__NameProperty_195' has a wrong offset!");
static_assert(offsetof(ABP_FrostSkeletonAxeman::FAnimBlueprintGeneratedConstantData, __NameProperty_196) == 0x000014, "Member 'ABP_FrostSkeletonAxeman::FAnimBlueprintGeneratedConstantData::__NameProperty_196' has a wrong offset!");
static_assert(offsetof(ABP_FrostSkeletonAxeman::FAnimBlueprintGeneratedConstantData, __NameProperty_197) == 0x00001C, "Member 'ABP_FrostSkeletonAxeman::FAnimBlueprintGeneratedConstantData::__NameProperty_197' has a wrong offset!");
static_assert(offsetof(ABP_FrostSkeletonAxeman::FAnimBlueprintGeneratedConstantData, __NameProperty_198) == 0x000024, "Member 'ABP_FrostSkeletonAxeman::FAnimBlueprintGeneratedConstantData::__NameProperty_198' has a wrong offset!");
static_assert(offsetof(ABP_FrostSkeletonAxeman::FAnimBlueprintGeneratedConstantData, __IntProperty_199) == 0x00002C, "Member 'ABP_FrostSkeletonAxeman::FAnimBlueprintGeneratedConstantData::__IntProperty_199' has a wrong offset!");
static_assert(offsetof(ABP_FrostSkeletonAxeman::FAnimBlueprintGeneratedConstantData, __FloatProperty_200) == 0x000030, "Member 'ABP_FrostSkeletonAxeman::FAnimBlueprintGeneratedConstantData::__FloatProperty_200' has a wrong offset!");
static_assert(offsetof(ABP_FrostSkeletonAxeman::FAnimBlueprintGeneratedConstantData, __StructProperty_201) == 0x000034, "Member 'ABP_FrostSkeletonAxeman::FAnimBlueprintGeneratedConstantData::__StructProperty_201' has a wrong offset!");
static_assert(offsetof(ABP_FrostSkeletonAxeman::FAnimBlueprintGeneratedConstantData, __NameProperty_202) == 0x000060, "Member 'ABP_FrostSkeletonAxeman::FAnimBlueprintGeneratedConstantData::__NameProperty_202' has a wrong offset!");
static_assert(offsetof(ABP_FrostSkeletonAxeman::FAnimBlueprintGeneratedConstantData, __IntProperty_203) == 0x000068, "Member 'ABP_FrostSkeletonAxeman::FAnimBlueprintGeneratedConstantData::__IntProperty_203' has a wrong offset!");
static_assert(offsetof(ABP_FrostSkeletonAxeman::FAnimBlueprintGeneratedConstantData, __BoolProperty_204) == 0x00006C, "Member 'ABP_FrostSkeletonAxeman::FAnimBlueprintGeneratedConstantData::__BoolProperty_204' has a wrong offset!");
static_assert(offsetof(ABP_FrostSkeletonAxeman::FAnimBlueprintGeneratedConstantData, __FloatProperty_205) == 0x000070, "Member 'ABP_FrostSkeletonAxeman::FAnimBlueprintGeneratedConstantData::__FloatProperty_205' has a wrong offset!");
static_assert(offsetof(ABP_FrostSkeletonAxeman::FAnimBlueprintGeneratedConstantData, __FloatProperty_206) == 0x000074, "Member 'ABP_FrostSkeletonAxeman::FAnimBlueprintGeneratedConstantData::__FloatProperty_206' has a wrong offset!");
static_assert(offsetof(ABP_FrostSkeletonAxeman::FAnimBlueprintGeneratedConstantData, __BoolProperty_207) == 0x000078, "Member 'ABP_FrostSkeletonAxeman::FAnimBlueprintGeneratedConstantData::__BoolProperty_207' has a wrong offset!");
static_assert(offsetof(ABP_FrostSkeletonAxeman::FAnimBlueprintGeneratedConstantData, __EnumProperty_208) == 0x000079, "Member 'ABP_FrostSkeletonAxeman::FAnimBlueprintGeneratedConstantData::__EnumProperty_208' has a wrong offset!");
static_assert(offsetof(ABP_FrostSkeletonAxeman::FAnimBlueprintGeneratedConstantData, __ByteProperty_209) == 0x00007A, "Member 'ABP_FrostSkeletonAxeman::FAnimBlueprintGeneratedConstantData::__ByteProperty_209' has a wrong offset!");
static_assert(offsetof(ABP_FrostSkeletonAxeman::FAnimBlueprintGeneratedConstantData, __NameProperty_210) == 0x00007C, "Member 'ABP_FrostSkeletonAxeman::FAnimBlueprintGeneratedConstantData::__NameProperty_210' has a wrong offset!");
static_assert(offsetof(ABP_FrostSkeletonAxeman::FAnimBlueprintGeneratedConstantData, __NameProperty_211) == 0x000084, "Member 'ABP_FrostSkeletonAxeman::FAnimBlueprintGeneratedConstantData::__NameProperty_211' has a wrong offset!");
static_assert(offsetof(ABP_FrostSkeletonAxeman::FAnimBlueprintGeneratedConstantData, __IntProperty_212) == 0x00008C, "Member 'ABP_FrostSkeletonAxeman::FAnimBlueprintGeneratedConstantData::__IntProperty_212' has a wrong offset!");
static_assert(offsetof(ABP_FrostSkeletonAxeman::FAnimBlueprintGeneratedConstantData, __StructProperty_213) == 0x000090, "Member 'ABP_FrostSkeletonAxeman::FAnimBlueprintGeneratedConstantData::__StructProperty_213' has a wrong offset!");
static_assert(offsetof(ABP_FrostSkeletonAxeman::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x0000B0, "Member 'ABP_FrostSkeletonAxeman::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(ABP_FrostSkeletonAxeman::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x000130, "Member 'ABP_FrostSkeletonAxeman::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");

// ScriptStruct ABP_FrostSkeletonAxeman.ABP_FrostSkeletonAxeman_C.AnimBlueprintGeneratedMutableData
// 0x000F (0x0010 - 0x0001)
struct ABP_FrostSkeletonAxeman::FAnimBlueprintGeneratedMutableData final : public FAnimBlueprintMutableData
{
public:
	uint8                                         Pad_5926[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         __FloatProperty;                                   // 0x0004(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         __FloatProperty_0;                                 // 0x0008(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         __FloatProperty_1;                                 // 0x000C(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_FrostSkeletonAxeman::FAnimBlueprintGeneratedMutableData) == 0x000004, "Wrong alignment on ABP_FrostSkeletonAxeman::FAnimBlueprintGeneratedMutableData");
static_assert(sizeof(ABP_FrostSkeletonAxeman::FAnimBlueprintGeneratedMutableData) == 0x000010, "Wrong size on ABP_FrostSkeletonAxeman::FAnimBlueprintGeneratedMutableData");
static_assert(offsetof(ABP_FrostSkeletonAxeman::FAnimBlueprintGeneratedMutableData, __FloatProperty) == 0x000004, "Member 'ABP_FrostSkeletonAxeman::FAnimBlueprintGeneratedMutableData::__FloatProperty' has a wrong offset!");
static_assert(offsetof(ABP_FrostSkeletonAxeman::FAnimBlueprintGeneratedMutableData, __FloatProperty_0) == 0x000008, "Member 'ABP_FrostSkeletonAxeman::FAnimBlueprintGeneratedMutableData::__FloatProperty_0' has a wrong offset!");
static_assert(offsetof(ABP_FrostSkeletonAxeman::FAnimBlueprintGeneratedMutableData, __FloatProperty_1) == 0x00000C, "Member 'ABP_FrostSkeletonAxeman::FAnimBlueprintGeneratedMutableData::__FloatProperty_1' has a wrong offset!");

}

