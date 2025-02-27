#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FloorPortalScrollEscape

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_FloorPortalScrollBase_classes.hpp"
#include "AkAudio_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_FloorPortalScrollEscape.BP_FloorPortalScrollEscape_C
// 0x0020 (0x0438 - 0x0418)
class ABP_FloorPortalScrollEscape_C final : public ABP_FloorPortalScrollBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_FloorPortalScrollEscape_C;       // 0x0418(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      FXS_FloorPortal_Escape;                            // 0x0420(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         PlayPortalFXTimeline_Progress_7EFF54324C92BC355884B081BD33F76E; // 0x0428(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            PlayPortalFXTimeline__Direction_7EFF54324C92BC355884B081BD33F76E; // 0x042C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5ADD[0x3];                                     // 0x042D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     PlayPortalFXTimeline;                              // 0x0430(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_FloorPortalScrollEscape(int32 EntryPoint);
	void OnOpen();
	void PlayPortalFX(bool Param_bOpen);
	void PlayPortalFXTimeline__FinishedFunc();
	void PlayPortalFXTimeline__UpdateFunc();
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FloorPortalScrollEscape_C">();
	}
	static class ABP_FloorPortalScrollEscape_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_FloorPortalScrollEscape_C>();
	}
};
static_assert(alignof(ABP_FloorPortalScrollEscape_C) == 0x000008, "Wrong alignment on ABP_FloorPortalScrollEscape_C");
static_assert(sizeof(ABP_FloorPortalScrollEscape_C) == 0x000438, "Wrong size on ABP_FloorPortalScrollEscape_C");
static_assert(offsetof(ABP_FloorPortalScrollEscape_C, UberGraphFrame_BP_FloorPortalScrollEscape_C) == 0x000418, "Member 'ABP_FloorPortalScrollEscape_C::UberGraphFrame_BP_FloorPortalScrollEscape_C' has a wrong offset!");
static_assert(offsetof(ABP_FloorPortalScrollEscape_C, FXS_FloorPortal_Escape) == 0x000420, "Member 'ABP_FloorPortalScrollEscape_C::FXS_FloorPortal_Escape' has a wrong offset!");
static_assert(offsetof(ABP_FloorPortalScrollEscape_C, PlayPortalFXTimeline_Progress_7EFF54324C92BC355884B081BD33F76E) == 0x000428, "Member 'ABP_FloorPortalScrollEscape_C::PlayPortalFXTimeline_Progress_7EFF54324C92BC355884B081BD33F76E' has a wrong offset!");
static_assert(offsetof(ABP_FloorPortalScrollEscape_C, PlayPortalFXTimeline__Direction_7EFF54324C92BC355884B081BD33F76E) == 0x00042C, "Member 'ABP_FloorPortalScrollEscape_C::PlayPortalFXTimeline__Direction_7EFF54324C92BC355884B081BD33F76E' has a wrong offset!");
static_assert(offsetof(ABP_FloorPortalScrollEscape_C, PlayPortalFXTimeline) == 0x000430, "Member 'ABP_FloorPortalScrollEscape_C::PlayPortalFXTimeline' has a wrong offset!");

}

