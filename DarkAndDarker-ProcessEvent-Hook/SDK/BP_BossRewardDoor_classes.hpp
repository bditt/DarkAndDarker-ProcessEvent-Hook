#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BossRewardDoor

#include "Basic.hpp"

#include "BP_BossRewardDoorBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_BossRewardDoor.BP_BossRewardDoor_C
// 0x0000 (0x04E8 - 0x04E8)
class ABP_BossRewardDoor_C final : public ABP_BossRewardDoorBase_C
{
public:
	void InteractTargetInfoRarity(struct FGameplayTag* RarityTag);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BossRewardDoor_C">();
	}
	static class ABP_BossRewardDoor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BossRewardDoor_C>();
	}
};
static_assert(alignof(ABP_BossRewardDoor_C) == 0x000008, "Wrong alignment on ABP_BossRewardDoor_C");
static_assert(sizeof(ABP_BossRewardDoor_C) == 0x0004E8, "Wrong size on ABP_BossRewardDoor_C");

}

