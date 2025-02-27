#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_HerbBase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_OreBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_HerbBase.BP_HerbBase_C
// 0x0020 (0x0508 - 0x04E8)
class ABP_HerbBase_C : public ABP_OreBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_HerbBase_C;                      // 0x04E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UDCStaticMeshComponent*                 DCStaticMesh;                                      // 0x04F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDCTagCollisionDetectorComponent*       DCTagCollisionDetector;                            // 0x04F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                         DepthIndex;                                        // 0x0500(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__BP_HuntingTrapProp_DCTagCollisionDetector_K2Node_ComponentBoundEvent_3_GameplayTagCollisionDetectedSignature__DelegateSignature(bool bDetected, const struct FAccountDataReplication& AccountDataReplication);
	void ExecuteUbergraph_BP_HerbBase(int32 EntryPoint);
	void OnDetected(bool IsDetecting, const struct FAccountDataReplication& AccountDataReplication);
	void OnDetectedByInteract(bool IsDetecting);
	void OnUndetected();
	void UpdateInteractDepthValue(int32 DepthValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_HerbBase_C">();
	}
	static class ABP_HerbBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_HerbBase_C>();
	}
};
static_assert(alignof(ABP_HerbBase_C) == 0x000008, "Wrong alignment on ABP_HerbBase_C");
static_assert(sizeof(ABP_HerbBase_C) == 0x000508, "Wrong size on ABP_HerbBase_C");
static_assert(offsetof(ABP_HerbBase_C, UberGraphFrame_BP_HerbBase_C) == 0x0004E8, "Member 'ABP_HerbBase_C::UberGraphFrame_BP_HerbBase_C' has a wrong offset!");
static_assert(offsetof(ABP_HerbBase_C, DCStaticMesh) == 0x0004F0, "Member 'ABP_HerbBase_C::DCStaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_HerbBase_C, DCTagCollisionDetector) == 0x0004F8, "Member 'ABP_HerbBase_C::DCTagCollisionDetector' has a wrong offset!");
static_assert(offsetof(ABP_HerbBase_C, DepthIndex) == 0x000500, "Member 'ABP_HerbBase_C::DepthIndex' has a wrong offset!");

}

