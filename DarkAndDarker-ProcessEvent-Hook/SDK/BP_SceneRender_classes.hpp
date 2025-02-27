#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SceneRender

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SceneRender.BP_SceneRender_C
// 0x0040 (0x02D8 - 0x0298)
class ABP_SceneRender_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UExponentialHeightFogComponent*         ExponentialHeightFog;                              // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPostProcessComponent*                  PostProcess;                                       // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                         ConsoleCommands;                                   // 0x02B8(0x0010)(Edit, BlueprintVisible)
	TArray<class FString>                         RevertConsoleCommands;                             // 0x02C8(0x0010)(Edit, BlueprintVisible)

public:
	void ExecuteUbergraph_BP_SceneRender(int32 EntryPoint);
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void Revert();
	void SetRender();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SceneRender_C">();
	}
	static class ABP_SceneRender_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SceneRender_C>();
	}
};
static_assert(alignof(ABP_SceneRender_C) == 0x000008, "Wrong alignment on ABP_SceneRender_C");
static_assert(sizeof(ABP_SceneRender_C) == 0x0002D8, "Wrong size on ABP_SceneRender_C");
static_assert(offsetof(ABP_SceneRender_C, UberGraphFrame) == 0x000298, "Member 'ABP_SceneRender_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_SceneRender_C, ExponentialHeightFog) == 0x0002A0, "Member 'ABP_SceneRender_C::ExponentialHeightFog' has a wrong offset!");
static_assert(offsetof(ABP_SceneRender_C, PostProcess) == 0x0002A8, "Member 'ABP_SceneRender_C::PostProcess' has a wrong offset!");
static_assert(offsetof(ABP_SceneRender_C, DefaultSceneRoot) == 0x0002B0, "Member 'ABP_SceneRender_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_SceneRender_C, ConsoleCommands) == 0x0002B8, "Member 'ABP_SceneRender_C::ConsoleCommands' has a wrong offset!");
static_assert(offsetof(ABP_SceneRender_C, RevertConsoleCommands) == 0x0002C8, "Member 'ABP_SceneRender_C::RevertConsoleCommands' has a wrong offset!");

}

