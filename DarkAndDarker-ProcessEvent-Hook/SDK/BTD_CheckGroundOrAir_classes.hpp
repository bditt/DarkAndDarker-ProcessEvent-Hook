#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTD_CheckGroundOrAir

#include "Basic.hpp"

#include "E_ActivityArea_structs.hpp"
#include "AIModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BTD_CheckGroundOrAir.BTD_CheckGroundOrAir_C
// 0x0008 (0x00A8 - 0x00A0)
class UBTD_CheckGroundOrAir_C final : public UBTDecorator_BlueprintBase
{
public:
	E_ActivityArea                                Monster_Type;                                      // 0x00A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BTD_CheckGroundOrAir_C">();
	}
	static class UBTD_CheckGroundOrAir_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTD_CheckGroundOrAir_C>();
	}
};
static_assert(alignof(UBTD_CheckGroundOrAir_C) == 0x000008, "Wrong alignment on UBTD_CheckGroundOrAir_C");
static_assert(sizeof(UBTD_CheckGroundOrAir_C) == 0x0000A8, "Wrong size on UBTD_CheckGroundOrAir_C");
static_assert(offsetof(UBTD_CheckGroundOrAir_C, Monster_Type) == 0x0000A0, "Member 'UBTD_CheckGroundOrAir_C::Monster_Type' has a wrong offset!");

}

