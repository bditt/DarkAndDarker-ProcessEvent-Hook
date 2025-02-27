#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Chest_Base

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_AnimatedChestBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Chest_Base.BP_Chest_Base_C
// 0x0078 (0x0540 - 0x04C8)
class ABP_Chest_Base_C : public ABP_AnimatedChestBase_C
{
public:
	class UDCSkeletalMeshComponent*               DCSkeletalMesh;                                    // 0x04C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class UClass*>                         Monsters;                                          // 0x04D0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         Spawn_Ratio;                                       // 0x04E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A6F[0x4];                                     // 0x04E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Random_Delay;                                      // 0x04E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class AActor*, struct FTimerHandle>      TimerHandleMap;                                    // 0x04F0(0x0050)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Chest_Base_C">();
	}
	static class ABP_Chest_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Chest_Base_C>();
	}
};
static_assert(alignof(ABP_Chest_Base_C) == 0x000008, "Wrong alignment on ABP_Chest_Base_C");
static_assert(sizeof(ABP_Chest_Base_C) == 0x000540, "Wrong size on ABP_Chest_Base_C");
static_assert(offsetof(ABP_Chest_Base_C, DCSkeletalMesh) == 0x0004C8, "Member 'ABP_Chest_Base_C::DCSkeletalMesh' has a wrong offset!");
static_assert(offsetof(ABP_Chest_Base_C, Monsters) == 0x0004D0, "Member 'ABP_Chest_Base_C::Monsters' has a wrong offset!");
static_assert(offsetof(ABP_Chest_Base_C, Spawn_Ratio) == 0x0004E0, "Member 'ABP_Chest_Base_C::Spawn_Ratio' has a wrong offset!");
static_assert(offsetof(ABP_Chest_Base_C, Random_Delay) == 0x0004E8, "Member 'ABP_Chest_Base_C::Random_Delay' has a wrong offset!");
static_assert(offsetof(ABP_Chest_Base_C, TimerHandleMap) == 0x0004F0, "Member 'ABP_Chest_Base_C::TimerHandleMap' has a wrong offset!");

}

