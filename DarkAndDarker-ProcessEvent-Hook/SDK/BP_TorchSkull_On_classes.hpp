#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TorchSkull_On

#include "Basic.hpp"

#include "BP_LightSourceBase_classes.hpp"
#include "Engine_structs.hpp"
#include "AkAudio_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_TorchSkull_On.BP_TorchSkull_On_C
// 0x0060 (0x0550 - 0x04F0)
class ABP_TorchSkull_On_C final : public ABP_LightSourceBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_TorchSkull_On_C;                 // 0x04F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      FXS_TorchFire_001C;                                // 0x04F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_PlateMinus01Minus03;                            // 0x0500(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_torch_low;                                      // 0x0508(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Bones_Jaw;                                      // 0x0510(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Sphere;                                            // 0x0518(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Torch;                                             // 0x0520(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_1______0_BD01FCFC4CF7F27B00934B8EC3EFF6D3; // 0x0528(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_1__Direction_BD01FCFC4CF7F27B00934B8EC3EFF6D3; // 0x052C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_441B[0x3];                                     // 0x052D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_1;                                        // 0x0530(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_0______0_123C7A3A4DB4CCD5BB7A05AA39699248; // 0x0538(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_0__Direction_123C7A3A4DB4CCD5BB7A05AA39699248; // 0x053C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_441C[0x3];                                     // 0x053D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_0;                                        // 0x0540(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsOverlapped;                                     // 0x0548(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__BP_TorchOn_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__BP_TorchOn_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void ExecuteUbergraph_BP_TorchSkull_On(int32 EntryPoint);
	void GameplayTagUpdated(const struct FGameplayTag& InGameplayTag, int32 InCount);
	void InteractSucceed(class AActor* Interacter, const struct FGameplayTag& StateTag, const struct FGameplayTag& TriggerTag, const struct FHitResult& HitResult);
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_1__FinishedFunc();
	void Timeline_1__UpdateFunc();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_TorchSkull_On_C">();
	}
	static class ABP_TorchSkull_On_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_TorchSkull_On_C>();
	}
};
static_assert(alignof(ABP_TorchSkull_On_C) == 0x000008, "Wrong alignment on ABP_TorchSkull_On_C");
static_assert(sizeof(ABP_TorchSkull_On_C) == 0x000550, "Wrong size on ABP_TorchSkull_On_C");
static_assert(offsetof(ABP_TorchSkull_On_C, UberGraphFrame_BP_TorchSkull_On_C) == 0x0004F0, "Member 'ABP_TorchSkull_On_C::UberGraphFrame_BP_TorchSkull_On_C' has a wrong offset!");
static_assert(offsetof(ABP_TorchSkull_On_C, FXS_TorchFire_001C) == 0x0004F8, "Member 'ABP_TorchSkull_On_C::FXS_TorchFire_001C' has a wrong offset!");
static_assert(offsetof(ABP_TorchSkull_On_C, SM_PlateMinus01Minus03) == 0x000500, "Member 'ABP_TorchSkull_On_C::SM_PlateMinus01Minus03' has a wrong offset!");
static_assert(offsetof(ABP_TorchSkull_On_C, SM_torch_low) == 0x000508, "Member 'ABP_TorchSkull_On_C::SM_torch_low' has a wrong offset!");
static_assert(offsetof(ABP_TorchSkull_On_C, SM_Bones_Jaw) == 0x000510, "Member 'ABP_TorchSkull_On_C::SM_Bones_Jaw' has a wrong offset!");
static_assert(offsetof(ABP_TorchSkull_On_C, Sphere) == 0x000518, "Member 'ABP_TorchSkull_On_C::Sphere' has a wrong offset!");
static_assert(offsetof(ABP_TorchSkull_On_C, Torch) == 0x000520, "Member 'ABP_TorchSkull_On_C::Torch' has a wrong offset!");
static_assert(offsetof(ABP_TorchSkull_On_C, Timeline_1______0_BD01FCFC4CF7F27B00934B8EC3EFF6D3) == 0x000528, "Member 'ABP_TorchSkull_On_C::Timeline_1______0_BD01FCFC4CF7F27B00934B8EC3EFF6D3' has a wrong offset!");
static_assert(offsetof(ABP_TorchSkull_On_C, Timeline_1__Direction_BD01FCFC4CF7F27B00934B8EC3EFF6D3) == 0x00052C, "Member 'ABP_TorchSkull_On_C::Timeline_1__Direction_BD01FCFC4CF7F27B00934B8EC3EFF6D3' has a wrong offset!");
static_assert(offsetof(ABP_TorchSkull_On_C, Timeline_1) == 0x000530, "Member 'ABP_TorchSkull_On_C::Timeline_1' has a wrong offset!");
static_assert(offsetof(ABP_TorchSkull_On_C, Timeline_0______0_123C7A3A4DB4CCD5BB7A05AA39699248) == 0x000538, "Member 'ABP_TorchSkull_On_C::Timeline_0______0_123C7A3A4DB4CCD5BB7A05AA39699248' has a wrong offset!");
static_assert(offsetof(ABP_TorchSkull_On_C, Timeline_0__Direction_123C7A3A4DB4CCD5BB7A05AA39699248) == 0x00053C, "Member 'ABP_TorchSkull_On_C::Timeline_0__Direction_123C7A3A4DB4CCD5BB7A05AA39699248' has a wrong offset!");
static_assert(offsetof(ABP_TorchSkull_On_C, Timeline_0) == 0x000540, "Member 'ABP_TorchSkull_On_C::Timeline_0' has a wrong offset!");
static_assert(offsetof(ABP_TorchSkull_On_C, bIsOverlapped) == 0x000548, "Member 'ABP_TorchSkull_On_C::bIsOverlapped' has a wrong offset!");

}

