#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Slime_AIController

#include "Basic.hpp"

#include "BP_DCMonsterAIController_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Slime_AIController.BP_Slime_AIController_C
// 0x0000 (0x0458 - 0x0458)
class ABP_Slime_AIController_C final : public ABP_DCMonsterAIController_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Slime_AIController_C">();
	}
	static class ABP_Slime_AIController_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Slime_AIController_C>();
	}
};
static_assert(alignof(ABP_Slime_AIController_C) == 0x000008, "Wrong alignment on ABP_Slime_AIController_C");
static_assert(sizeof(ABP_Slime_AIController_C) == 0x000458, "Wrong size on ABP_Slime_AIController_C");

}

