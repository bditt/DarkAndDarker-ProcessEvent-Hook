#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LightSourceBase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_PropsActorBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_LightSourceBase.BP_LightSourceBase_C
// 0x0038 (0x04F0 - 0x04B8)
class ABP_LightSourceBase_C : public ABP_PropsActorBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_LightSourceBase_C;               // 0x04B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPointLightComponent*                   PointLight;                                        // 0x04C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         ReverseTimeline_Intensity_Track_2094A0C2435692893D9047AB9AA3B992; // 0x04C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            ReverseTimeline__Direction_2094A0C2435692893D9047AB9AA3B992; // 0x04CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4841[0x3];                                     // 0x04CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     ReverseTimeline;                                   // 0x04D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_Intensity_Track_4B6D5B56412A98331F8F47A92BDAF6EC; // 0x04D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline__Direction_4B6D5B56412A98331F8F47A92BDAF6EC; // 0x04DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4842[0x3];                                     // 0x04DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline;                                          // 0x04E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        MaxIntensity;                                      // 0x04E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_LightSourceBase(int32 EntryPoint);
	void GameplayTagUpdated(const struct FGameplayTag& InGameplayTag, int32 InCount);
	void ReceiveBeginPlay();
	void ReverseTimeline__FinishedFunc();
	void ReverseTimeline__UpdateFunc();
	void Timeline__FinishedFunc();
	void Timeline__UpdateFunc();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_LightSourceBase_C">();
	}
	static class ABP_LightSourceBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_LightSourceBase_C>();
	}
};
static_assert(alignof(ABP_LightSourceBase_C) == 0x000008, "Wrong alignment on ABP_LightSourceBase_C");
static_assert(sizeof(ABP_LightSourceBase_C) == 0x0004F0, "Wrong size on ABP_LightSourceBase_C");
static_assert(offsetof(ABP_LightSourceBase_C, UberGraphFrame_BP_LightSourceBase_C) == 0x0004B8, "Member 'ABP_LightSourceBase_C::UberGraphFrame_BP_LightSourceBase_C' has a wrong offset!");
static_assert(offsetof(ABP_LightSourceBase_C, PointLight) == 0x0004C0, "Member 'ABP_LightSourceBase_C::PointLight' has a wrong offset!");
static_assert(offsetof(ABP_LightSourceBase_C, ReverseTimeline_Intensity_Track_2094A0C2435692893D9047AB9AA3B992) == 0x0004C8, "Member 'ABP_LightSourceBase_C::ReverseTimeline_Intensity_Track_2094A0C2435692893D9047AB9AA3B992' has a wrong offset!");
static_assert(offsetof(ABP_LightSourceBase_C, ReverseTimeline__Direction_2094A0C2435692893D9047AB9AA3B992) == 0x0004CC, "Member 'ABP_LightSourceBase_C::ReverseTimeline__Direction_2094A0C2435692893D9047AB9AA3B992' has a wrong offset!");
static_assert(offsetof(ABP_LightSourceBase_C, ReverseTimeline) == 0x0004D0, "Member 'ABP_LightSourceBase_C::ReverseTimeline' has a wrong offset!");
static_assert(offsetof(ABP_LightSourceBase_C, Timeline_Intensity_Track_4B6D5B56412A98331F8F47A92BDAF6EC) == 0x0004D8, "Member 'ABP_LightSourceBase_C::Timeline_Intensity_Track_4B6D5B56412A98331F8F47A92BDAF6EC' has a wrong offset!");
static_assert(offsetof(ABP_LightSourceBase_C, Timeline__Direction_4B6D5B56412A98331F8F47A92BDAF6EC) == 0x0004DC, "Member 'ABP_LightSourceBase_C::Timeline__Direction_4B6D5B56412A98331F8F47A92BDAF6EC' has a wrong offset!");
static_assert(offsetof(ABP_LightSourceBase_C, Timeline) == 0x0004E0, "Member 'ABP_LightSourceBase_C::Timeline' has a wrong offset!");
static_assert(offsetof(ABP_LightSourceBase_C, MaxIntensity) == 0x0004E8, "Member 'ABP_LightSourceBase_C::MaxIntensity' has a wrong offset!");

}

