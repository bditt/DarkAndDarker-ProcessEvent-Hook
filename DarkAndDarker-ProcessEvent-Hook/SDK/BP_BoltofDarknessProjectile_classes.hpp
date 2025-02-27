#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BoltofDarknessProjectile

#include "Basic.hpp"

#include "BP_ProjectileActor_classes.hpp"
#include "Engine_structs.hpp"
#include "AkAudio_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_BoltofDarknessProjectile.BP_BoltofDarknessProjectile_C
// 0x0010 (0x07A0 - 0x0790)
class ABP_BoltofDarknessProjectile_C final : public ABP_ProjectileActor_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_BoltofDarknessProjectile_C;      // 0x0788(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                       Sphere;                                            // 0x0790(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__BP_MagicMissileProjectile_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ExecuteUbergraph_BP_BoltofDarknessProjectile(int32 EntryPoint);
	void GameplayTagUpdated(const struct FGameplayTag& InGameplayTag, int32 InCount);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BoltofDarknessProjectile_C">();
	}
	static class ABP_BoltofDarknessProjectile_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BoltofDarknessProjectile_C>();
	}
};
static_assert(alignof(ABP_BoltofDarknessProjectile_C) == 0x000010, "Wrong alignment on ABP_BoltofDarknessProjectile_C");
static_assert(sizeof(ABP_BoltofDarknessProjectile_C) == 0x0007A0, "Wrong size on ABP_BoltofDarknessProjectile_C");
static_assert(offsetof(ABP_BoltofDarknessProjectile_C, UberGraphFrame_BP_BoltofDarknessProjectile_C) == 0x000788, "Member 'ABP_BoltofDarknessProjectile_C::UberGraphFrame_BP_BoltofDarknessProjectile_C' has a wrong offset!");
static_assert(offsetof(ABP_BoltofDarknessProjectile_C, Sphere) == 0x000790, "Member 'ABP_BoltofDarknessProjectile_C::Sphere' has a wrong offset!");

}

