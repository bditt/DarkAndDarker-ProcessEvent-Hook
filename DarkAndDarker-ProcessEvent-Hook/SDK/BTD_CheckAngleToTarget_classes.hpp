#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTD_CheckAngleToTarget

#include "Basic.hpp"

#include "AIModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BTD_CheckAngleToTarget.BTD_CheckAngleToTarget_C
// 0x0010 (0x00B0 - 0x00A0)
class UBTD_CheckAngleToTarget_C final : public UBTDecorator_BlueprintBase
{
public:
	double                                        Min;                                               // 0x00A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Max;                                               // 0x00A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BTD_CheckAngleToTarget_C">();
	}
	static class UBTD_CheckAngleToTarget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTD_CheckAngleToTarget_C>();
	}
};
static_assert(alignof(UBTD_CheckAngleToTarget_C) == 0x000008, "Wrong alignment on UBTD_CheckAngleToTarget_C");
static_assert(sizeof(UBTD_CheckAngleToTarget_C) == 0x0000B0, "Wrong size on UBTD_CheckAngleToTarget_C");
static_assert(offsetof(UBTD_CheckAngleToTarget_C, Min) == 0x0000A0, "Member 'UBTD_CheckAngleToTarget_C::Min' has a wrong offset!");
static_assert(offsetof(UBTD_CheckAngleToTarget_C, Max) == 0x0000A8, "Member 'UBTD_CheckAngleToTarget_C::Max' has a wrong offset!");

}

