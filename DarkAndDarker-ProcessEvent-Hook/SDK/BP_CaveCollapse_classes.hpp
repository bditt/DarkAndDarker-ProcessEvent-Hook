#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CaveCollapse

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "DungeonCrawler_classes.hpp"
#include "AkAudio_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CaveCollapse.BP_CaveCollapse_C
// 0x0088 (0x05C0 - 0x0538)
class ABP_CaveCollapse_C final : public ABlizzardBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0538(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UDCStaticMeshComponent*                 VolumetricFogGlobal;                               // 0x0540(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_0_NewTrack_0_DE781C444482E783141DCAB6716AFE33; // 0x0548(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_0__Direction_DE781C444482E783141DCAB6716AFE33; // 0x054C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A62[0x3];                                     // 0x054D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_0;                                        // 0x0550(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_0_1_714C3FD8419DC26DC00CA2989E34AE02;     // 0x0558(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline__Direction_714C3FD8419DC26DC00CA2989E34AE02; // 0x055C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A63[0x3];                                     // 0x055D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline;                                          // 0x0560(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        StartValue;                                        // 0x0568(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        EndValue;                                          // 0x0570(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialParameterCollection*           FogMaterialParameterCollection;                    // 0x0578(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FName                                   FogMaterialExtinctionParameterName;                // 0x0580(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CurrentExtinctionValue;                            // 0x0588(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<double>                                TargetExtinctionValues;                            // 0x0590(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         LastPhase;                                         // 0x05A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A64[0x4];                                     // 0x05A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCameraShakeBase*                       LastInstancedCameraShakeInstance;                  // 0x05A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Transform_Component;                               // 0x05B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UNiagaraComponent*                      FXS;                                               // 0x05B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void EventOnBlizzardData(const struct FGameBlizzardData& InBlizzardData);
	void ExecuteUbergraph_BP_CaveCollapse(int32 EntryPoint);
	void OnBlizzardIndex(int32 InIndex);
	void ReceiveBeginPlay();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline__FinishedFunc();
	void Timeline__UpdateFunc();
	void UpdateParameter(double Duration, class FName ParameterName, double ParameterInit, double ParameterDest, class UMaterialInstanceDynamic* Material_Instance);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CaveCollapse_C">();
	}
	static class ABP_CaveCollapse_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_CaveCollapse_C>();
	}
};
static_assert(alignof(ABP_CaveCollapse_C) == 0x000008, "Wrong alignment on ABP_CaveCollapse_C");
static_assert(sizeof(ABP_CaveCollapse_C) == 0x0005C0, "Wrong size on ABP_CaveCollapse_C");
static_assert(offsetof(ABP_CaveCollapse_C, UberGraphFrame) == 0x000538, "Member 'ABP_CaveCollapse_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_CaveCollapse_C, VolumetricFogGlobal) == 0x000540, "Member 'ABP_CaveCollapse_C::VolumetricFogGlobal' has a wrong offset!");
static_assert(offsetof(ABP_CaveCollapse_C, Timeline_0_NewTrack_0_DE781C444482E783141DCAB6716AFE33) == 0x000548, "Member 'ABP_CaveCollapse_C::Timeline_0_NewTrack_0_DE781C444482E783141DCAB6716AFE33' has a wrong offset!");
static_assert(offsetof(ABP_CaveCollapse_C, Timeline_0__Direction_DE781C444482E783141DCAB6716AFE33) == 0x00054C, "Member 'ABP_CaveCollapse_C::Timeline_0__Direction_DE781C444482E783141DCAB6716AFE33' has a wrong offset!");
static_assert(offsetof(ABP_CaveCollapse_C, Timeline_0) == 0x000550, "Member 'ABP_CaveCollapse_C::Timeline_0' has a wrong offset!");
static_assert(offsetof(ABP_CaveCollapse_C, Timeline_0_1_714C3FD8419DC26DC00CA2989E34AE02) == 0x000558, "Member 'ABP_CaveCollapse_C::Timeline_0_1_714C3FD8419DC26DC00CA2989E34AE02' has a wrong offset!");
static_assert(offsetof(ABP_CaveCollapse_C, Timeline__Direction_714C3FD8419DC26DC00CA2989E34AE02) == 0x00055C, "Member 'ABP_CaveCollapse_C::Timeline__Direction_714C3FD8419DC26DC00CA2989E34AE02' has a wrong offset!");
static_assert(offsetof(ABP_CaveCollapse_C, Timeline) == 0x000560, "Member 'ABP_CaveCollapse_C::Timeline' has a wrong offset!");
static_assert(offsetof(ABP_CaveCollapse_C, StartValue) == 0x000568, "Member 'ABP_CaveCollapse_C::StartValue' has a wrong offset!");
static_assert(offsetof(ABP_CaveCollapse_C, EndValue) == 0x000570, "Member 'ABP_CaveCollapse_C::EndValue' has a wrong offset!");
static_assert(offsetof(ABP_CaveCollapse_C, FogMaterialParameterCollection) == 0x000578, "Member 'ABP_CaveCollapse_C::FogMaterialParameterCollection' has a wrong offset!");
static_assert(offsetof(ABP_CaveCollapse_C, FogMaterialExtinctionParameterName) == 0x000580, "Member 'ABP_CaveCollapse_C::FogMaterialExtinctionParameterName' has a wrong offset!");
static_assert(offsetof(ABP_CaveCollapse_C, CurrentExtinctionValue) == 0x000588, "Member 'ABP_CaveCollapse_C::CurrentExtinctionValue' has a wrong offset!");
static_assert(offsetof(ABP_CaveCollapse_C, TargetExtinctionValues) == 0x000590, "Member 'ABP_CaveCollapse_C::TargetExtinctionValues' has a wrong offset!");
static_assert(offsetof(ABP_CaveCollapse_C, LastPhase) == 0x0005A0, "Member 'ABP_CaveCollapse_C::LastPhase' has a wrong offset!");
static_assert(offsetof(ABP_CaveCollapse_C, LastInstancedCameraShakeInstance) == 0x0005A8, "Member 'ABP_CaveCollapse_C::LastInstancedCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(ABP_CaveCollapse_C, Transform_Component) == 0x0005B0, "Member 'ABP_CaveCollapse_C::Transform_Component' has a wrong offset!");
static_assert(offsetof(ABP_CaveCollapse_C, FXS) == 0x0005B8, "Member 'ABP_CaveCollapse_C::FXS' has a wrong offset!");

}

