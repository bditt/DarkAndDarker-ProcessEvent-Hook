#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SkeletonCrossbowman

#include "Basic.hpp"

#include "BP_DCMonsterBaseWithOptions_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SkeletonCrossbowman.BP_SkeletonCrossbowman_C
// 0x0040 (0x1420 - 0x13E0)
class ABP_SkeletonCrossbowman_C : public ABP_DCMonsterBaseWithOptions_C
{
public:
	class UBP_DCHitBox_C*                         BP_DCHitBox_Foot_L;                                // 0x13D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_DCHitBox_C*                         BP_DCHitBox_Foot_R;                                // 0x13E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_DCHitBox_C*                         BP_DCHitBox_Upper_Leg_L;                           // 0x13E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_DCHitBox_C*                         BP_DCHitBox_Upper_Leg_R;                           // 0x13F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_DCHitBox_C*                         BP_DCHitBox_Down_Leg_L;                            // 0x13F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_DCHitBox_C*                         BP_DCHitBox_Down_Leg_R;                            // 0x1400(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_DCHitBox_C*                         BP_DCHitBox_Body;                                  // 0x1408(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_DCHitBox_C*                         BP_DCHitBox_Head;                                  // 0x1410(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SkeletonCrossbowman_C">();
	}
	static class ABP_SkeletonCrossbowman_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SkeletonCrossbowman_C>();
	}
};
static_assert(alignof(ABP_SkeletonCrossbowman_C) == 0x000010, "Wrong alignment on ABP_SkeletonCrossbowman_C");
static_assert(sizeof(ABP_SkeletonCrossbowman_C) == 0x001420, "Wrong size on ABP_SkeletonCrossbowman_C");
static_assert(offsetof(ABP_SkeletonCrossbowman_C, BP_DCHitBox_Foot_L) == 0x0013D8, "Member 'ABP_SkeletonCrossbowman_C::BP_DCHitBox_Foot_L' has a wrong offset!");
static_assert(offsetof(ABP_SkeletonCrossbowman_C, BP_DCHitBox_Foot_R) == 0x0013E0, "Member 'ABP_SkeletonCrossbowman_C::BP_DCHitBox_Foot_R' has a wrong offset!");
static_assert(offsetof(ABP_SkeletonCrossbowman_C, BP_DCHitBox_Upper_Leg_L) == 0x0013E8, "Member 'ABP_SkeletonCrossbowman_C::BP_DCHitBox_Upper_Leg_L' has a wrong offset!");
static_assert(offsetof(ABP_SkeletonCrossbowman_C, BP_DCHitBox_Upper_Leg_R) == 0x0013F0, "Member 'ABP_SkeletonCrossbowman_C::BP_DCHitBox_Upper_Leg_R' has a wrong offset!");
static_assert(offsetof(ABP_SkeletonCrossbowman_C, BP_DCHitBox_Down_Leg_L) == 0x0013F8, "Member 'ABP_SkeletonCrossbowman_C::BP_DCHitBox_Down_Leg_L' has a wrong offset!");
static_assert(offsetof(ABP_SkeletonCrossbowman_C, BP_DCHitBox_Down_Leg_R) == 0x001400, "Member 'ABP_SkeletonCrossbowman_C::BP_DCHitBox_Down_Leg_R' has a wrong offset!");
static_assert(offsetof(ABP_SkeletonCrossbowman_C, BP_DCHitBox_Body) == 0x001408, "Member 'ABP_SkeletonCrossbowman_C::BP_DCHitBox_Body' has a wrong offset!");
static_assert(offsetof(ABP_SkeletonCrossbowman_C, BP_DCHitBox_Head) == 0x001410, "Member 'ABP_SkeletonCrossbowman_C::BP_DCHitBox_Head' has a wrong offset!");

}

