#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PortraitCharacter

#include "Basic.hpp"

#include "DungeonCrawler_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PortraitCharacter.BP_PortraitCharacter_C
// 0x0010 (0x0840 - 0x0830)
class ABP_PortraitCharacter_C final : public ADCPortraitCharacter
{
public:
	class USpotLightComponent*                    SpotLight;                                         // 0x0830(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight;                                        // 0x0838(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PortraitCharacter_C">();
	}
	static class ABP_PortraitCharacter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PortraitCharacter_C>();
	}
};
static_assert(alignof(ABP_PortraitCharacter_C) == 0x000010, "Wrong alignment on ABP_PortraitCharacter_C");
static_assert(sizeof(ABP_PortraitCharacter_C) == 0x000840, "Wrong size on ABP_PortraitCharacter_C");
static_assert(offsetof(ABP_PortraitCharacter_C, SpotLight) == 0x000830, "Member 'ABP_PortraitCharacter_C::SpotLight' has a wrong offset!");
static_assert(offsetof(ABP_PortraitCharacter_C, PointLight) == 0x000838, "Member 'ABP_PortraitCharacter_C::PointLight' has a wrong offset!");

}

