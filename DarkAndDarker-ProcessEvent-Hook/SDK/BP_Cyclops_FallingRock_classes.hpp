#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Cyclops_FallingRock

#include "Basic.hpp"

#include "BP_ProjectileActor_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Cyclops_FallingRock.BP_Cyclops_FallingRock_C
// 0x0020 (0x07B0 - 0x0790)
class ABP_Cyclops_FallingRock_C final : public ABP_ProjectileActor_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_Cyclops_FallingRock_C;           // 0x0788(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UDCGeometryCollectionComponent*         DCGeometryCollection;                              // 0x0790(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDCSkeletalMeshComponent*               DCSkeletalMesh;                                    // 0x0798(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class UStaticMesh*>                    MeshVariation;                                     // 0x07A0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_BP_Cyclops_FallingRock(int32 EntryPoint);
	void ProjectileHit(const struct FHitResult& Hit, bool bIsAttached, const struct FTransform& ActorPrevTickTransform);
	void ReceiveDestroyed();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Cyclops_FallingRock_C">();
	}
	static class ABP_Cyclops_FallingRock_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Cyclops_FallingRock_C>();
	}
};
static_assert(alignof(ABP_Cyclops_FallingRock_C) == 0x000010, "Wrong alignment on ABP_Cyclops_FallingRock_C");
static_assert(sizeof(ABP_Cyclops_FallingRock_C) == 0x0007B0, "Wrong size on ABP_Cyclops_FallingRock_C");
static_assert(offsetof(ABP_Cyclops_FallingRock_C, UberGraphFrame_BP_Cyclops_FallingRock_C) == 0x000788, "Member 'ABP_Cyclops_FallingRock_C::UberGraphFrame_BP_Cyclops_FallingRock_C' has a wrong offset!");
static_assert(offsetof(ABP_Cyclops_FallingRock_C, DCGeometryCollection) == 0x000790, "Member 'ABP_Cyclops_FallingRock_C::DCGeometryCollection' has a wrong offset!");
static_assert(offsetof(ABP_Cyclops_FallingRock_C, DCSkeletalMesh) == 0x000798, "Member 'ABP_Cyclops_FallingRock_C::DCSkeletalMesh' has a wrong offset!");
static_assert(offsetof(ABP_Cyclops_FallingRock_C, MeshVariation) == 0x0007A0, "Member 'ABP_Cyclops_FallingRock_C::MeshVariation' has a wrong offset!");

}

