#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Campfire_BoneKindled

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_CampfireProp_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Campfire_BoneKindled.BP_Campfire_BoneKindled_C
// 0x0008 (0x0518 - 0x0510)
class ABP_Campfire_BoneKindled_C final : public ABP_CampfireProp_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_Campfire_BoneKindled_C;          // 0x0510(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void Activate_Particle_System();
	void Deactivate_Particle_System();
	void ExecuteUbergraph_BP_Campfire_BoneKindled(int32 EntryPoint);
	void GameplayTagUpdated(const struct FGameplayTag& InGameplayTag, int32 InCount);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Campfire_BoneKindled_C">();
	}
	static class ABP_Campfire_BoneKindled_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Campfire_BoneKindled_C>();
	}
};
static_assert(alignof(ABP_Campfire_BoneKindled_C) == 0x000008, "Wrong alignment on ABP_Campfire_BoneKindled_C");
static_assert(sizeof(ABP_Campfire_BoneKindled_C) == 0x000518, "Wrong size on ABP_Campfire_BoneKindled_C");
static_assert(offsetof(ABP_Campfire_BoneKindled_C, UberGraphFrame_BP_Campfire_BoneKindled_C) == 0x000510, "Member 'ABP_Campfire_BoneKindled_C::UberGraphFrame_BP_Campfire_BoneKindled_C' has a wrong offset!");

}

