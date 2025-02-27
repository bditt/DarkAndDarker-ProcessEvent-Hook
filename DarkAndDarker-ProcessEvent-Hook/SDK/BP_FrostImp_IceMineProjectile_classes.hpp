#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FrostImp_IceMineProjectile

#include "Basic.hpp"

#include "BP_ProjectileActor_classes.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "AkAudio_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_FrostImp_IceMineProjectile.BP_FrostImp_IceMineProjectile_C
// 0x0020 (0x07B0 - 0x0790)
class ABP_FrostImp_IceMineProjectile_C final : public ABP_ProjectileActor_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_FrostImp_IceMineProjectile_C;    // 0x0788(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                 Hit_Actor;                                         // 0x0790(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Start_Loc;                                         // 0x0798(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_FrostImp_IceMineProjectile(int32 EntryPoint);
	void GameplayTagUpdated(const struct FGameplayTag& InGameplayTag, int32 InCount);
	void ProjectileHit(const struct FHitResult& Hit, bool bIsAttached, const struct FTransform& ActorPrevTickTransform);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FrostImp_IceMineProjectile_C">();
	}
	static class ABP_FrostImp_IceMineProjectile_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_FrostImp_IceMineProjectile_C>();
	}
};
static_assert(alignof(ABP_FrostImp_IceMineProjectile_C) == 0x000010, "Wrong alignment on ABP_FrostImp_IceMineProjectile_C");
static_assert(sizeof(ABP_FrostImp_IceMineProjectile_C) == 0x0007B0, "Wrong size on ABP_FrostImp_IceMineProjectile_C");
static_assert(offsetof(ABP_FrostImp_IceMineProjectile_C, UberGraphFrame_BP_FrostImp_IceMineProjectile_C) == 0x000788, "Member 'ABP_FrostImp_IceMineProjectile_C::UberGraphFrame_BP_FrostImp_IceMineProjectile_C' has a wrong offset!");
static_assert(offsetof(ABP_FrostImp_IceMineProjectile_C, Hit_Actor) == 0x000790, "Member 'ABP_FrostImp_IceMineProjectile_C::Hit_Actor' has a wrong offset!");
static_assert(offsetof(ABP_FrostImp_IceMineProjectile_C, Start_Loc) == 0x000798, "Member 'ABP_FrostImp_IceMineProjectile_C::Start_Loc' has a wrong offset!");

}

