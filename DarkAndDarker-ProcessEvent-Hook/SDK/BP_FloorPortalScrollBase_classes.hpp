#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FloorPortalScrollBase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "DungeonCrawler_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_FloorPortalScrollBase.BP_FloorPortalScrollBase_C
// 0x0028 (0x0418 - 0x03F0)
class ABP_FloorPortalScrollBase_C : public AFloorPortalScrollBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UDCAkComponent*                         DCAk;                                              // 0x03F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Box;                                               // 0x0400(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDCSkeletalMeshComponent*               DCSkeletalMesh;                                    // 0x0408(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          bOpen;                                             // 0x0410(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__BP_FloorPortalScrollBase_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ClosePortalScroll(class ADCPlayerCharacterBase* Character);
	void ExecuteUbergraph_BP_FloorPortalScrollBase(int32 EntryPoint);
	void FX_PlayerPortalInteraction(class ADCPlayerCharacterBase* PlayerCharacter);
	void InteractSucceed(class AActor* Interacter, const struct FGameplayTag& StateTag, const struct FGameplayTag& TriggerTag, const struct FHitResult& HitResult);
	void OnOpen();
	void OnRep_bOpen();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FloorPortalScrollBase_C">();
	}
	static class ABP_FloorPortalScrollBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_FloorPortalScrollBase_C>();
	}
};
static_assert(alignof(ABP_FloorPortalScrollBase_C) == 0x000008, "Wrong alignment on ABP_FloorPortalScrollBase_C");
static_assert(sizeof(ABP_FloorPortalScrollBase_C) == 0x000418, "Wrong size on ABP_FloorPortalScrollBase_C");
static_assert(offsetof(ABP_FloorPortalScrollBase_C, UberGraphFrame) == 0x0003F0, "Member 'ABP_FloorPortalScrollBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_FloorPortalScrollBase_C, DCAk) == 0x0003F8, "Member 'ABP_FloorPortalScrollBase_C::DCAk' has a wrong offset!");
static_assert(offsetof(ABP_FloorPortalScrollBase_C, Box) == 0x000400, "Member 'ABP_FloorPortalScrollBase_C::Box' has a wrong offset!");
static_assert(offsetof(ABP_FloorPortalScrollBase_C, DCSkeletalMesh) == 0x000408, "Member 'ABP_FloorPortalScrollBase_C::DCSkeletalMesh' has a wrong offset!");
static_assert(offsetof(ABP_FloorPortalScrollBase_C, bOpen) == 0x000410, "Member 'ABP_FloorPortalScrollBase_C::bOpen' has a wrong offset!");

}

