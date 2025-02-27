#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTD_CheckDoAbilityWhilePeace

#include "Basic.hpp"

#include "AIModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BTD_CheckDoAbilityWhilePeace.BTD_CheckDoAbilityWhilePeace_C
// 0x0000 (0x00A0 - 0x00A0)
class UBTD_CheckDoAbilityWhilePeace_C final : public UBTDecorator_BlueprintBase
{
public:
	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BTD_CheckDoAbilityWhilePeace_C">();
	}
	static class UBTD_CheckDoAbilityWhilePeace_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTD_CheckDoAbilityWhilePeace_C>();
	}
};
static_assert(alignof(UBTD_CheckDoAbilityWhilePeace_C) == 0x000008, "Wrong alignment on UBTD_CheckDoAbilityWhilePeace_C");
static_assert(sizeof(UBTD_CheckDoAbilityWhilePeace_C) == 0x0000A0, "Wrong size on UBTD_CheckDoAbilityWhilePeace_C");

}

