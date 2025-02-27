#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Sabertooth

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_DCMonsterBaseWithOptions_SubBoss_classes.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Sabertooth.BP_Sabertooth_C
// 0x0090 (0x1470 - 0x13E0)
class ABP_Sabertooth_C : public ABP_DCMonsterBaseWithOptions_SubBoss_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_Sabertooth_C;                    // 0x13D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_DCHitBox_C*                         Sabertooth_Shin_L;                                 // 0x13E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_DCHitBox_C*                         Sabertooth_Shin_R;                                 // 0x13E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_DCHitBox_C*                         Sabertooth_Thigh_R;                                // 0x13F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_DCHitBox_C*                         Sabertooth_Hand_L;                                 // 0x13F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_DCHitBox_C*                         Sabertooth_Hand_R;                                 // 0x1400(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_DCHitBox_C*                         Sabertooth_Foot_L;                                 // 0x1408(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_DCHitBox_C*                         Sabertooth_Foot_R;                                 // 0x1410(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_DCHitBox_C*                         Sabertooth_Leg_L;                                  // 0x1418(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_DCHitBox_C*                         Sabertooth_Leg_R;                                  // 0x1420(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_DCHitBox_C*                         Sabertooth_ElboW_L;                                // 0x1428(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_DCHitBox_C*                         Sabertooth_Elbow_R;                                // 0x1430(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_DCHitBox_C*                         Sabertooth_Thigh_L;                                // 0x1438(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_DCHitBox_C*                         Sabertooth_Body3;                                  // 0x1440(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_DCHitBox_C*                         Sabertooth_Body2;                                  // 0x1448(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_DCHitBox_C*                         Sabertooth_Head;                                   // 0x1450(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_DCHitBox_C*                         Sabertooth_Body1;                                  // 0x1458(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FActiveGameplayEffectHandle>    Buff_Move_Speed_Handle;                            // 0x1460(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_BP_Sabertooth(int32 EntryPoint);
	void GameplayTagUpdated(const struct FGameplayTag& InGameplayTag, int32 InCount);
	void OnSetAI();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Sabertooth_C">();
	}
	static class ABP_Sabertooth_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Sabertooth_C>();
	}
};
static_assert(alignof(ABP_Sabertooth_C) == 0x000010, "Wrong alignment on ABP_Sabertooth_C");
static_assert(sizeof(ABP_Sabertooth_C) == 0x001470, "Wrong size on ABP_Sabertooth_C");
static_assert(offsetof(ABP_Sabertooth_C, UberGraphFrame_BP_Sabertooth_C) == 0x0013D8, "Member 'ABP_Sabertooth_C::UberGraphFrame_BP_Sabertooth_C' has a wrong offset!");
static_assert(offsetof(ABP_Sabertooth_C, Sabertooth_Shin_L) == 0x0013E0, "Member 'ABP_Sabertooth_C::Sabertooth_Shin_L' has a wrong offset!");
static_assert(offsetof(ABP_Sabertooth_C, Sabertooth_Shin_R) == 0x0013E8, "Member 'ABP_Sabertooth_C::Sabertooth_Shin_R' has a wrong offset!");
static_assert(offsetof(ABP_Sabertooth_C, Sabertooth_Thigh_R) == 0x0013F0, "Member 'ABP_Sabertooth_C::Sabertooth_Thigh_R' has a wrong offset!");
static_assert(offsetof(ABP_Sabertooth_C, Sabertooth_Hand_L) == 0x0013F8, "Member 'ABP_Sabertooth_C::Sabertooth_Hand_L' has a wrong offset!");
static_assert(offsetof(ABP_Sabertooth_C, Sabertooth_Hand_R) == 0x001400, "Member 'ABP_Sabertooth_C::Sabertooth_Hand_R' has a wrong offset!");
static_assert(offsetof(ABP_Sabertooth_C, Sabertooth_Foot_L) == 0x001408, "Member 'ABP_Sabertooth_C::Sabertooth_Foot_L' has a wrong offset!");
static_assert(offsetof(ABP_Sabertooth_C, Sabertooth_Foot_R) == 0x001410, "Member 'ABP_Sabertooth_C::Sabertooth_Foot_R' has a wrong offset!");
static_assert(offsetof(ABP_Sabertooth_C, Sabertooth_Leg_L) == 0x001418, "Member 'ABP_Sabertooth_C::Sabertooth_Leg_L' has a wrong offset!");
static_assert(offsetof(ABP_Sabertooth_C, Sabertooth_Leg_R) == 0x001420, "Member 'ABP_Sabertooth_C::Sabertooth_Leg_R' has a wrong offset!");
static_assert(offsetof(ABP_Sabertooth_C, Sabertooth_ElboW_L) == 0x001428, "Member 'ABP_Sabertooth_C::Sabertooth_ElboW_L' has a wrong offset!");
static_assert(offsetof(ABP_Sabertooth_C, Sabertooth_Elbow_R) == 0x001430, "Member 'ABP_Sabertooth_C::Sabertooth_Elbow_R' has a wrong offset!");
static_assert(offsetof(ABP_Sabertooth_C, Sabertooth_Thigh_L) == 0x001438, "Member 'ABP_Sabertooth_C::Sabertooth_Thigh_L' has a wrong offset!");
static_assert(offsetof(ABP_Sabertooth_C, Sabertooth_Body3) == 0x001440, "Member 'ABP_Sabertooth_C::Sabertooth_Body3' has a wrong offset!");
static_assert(offsetof(ABP_Sabertooth_C, Sabertooth_Body2) == 0x001448, "Member 'ABP_Sabertooth_C::Sabertooth_Body2' has a wrong offset!");
static_assert(offsetof(ABP_Sabertooth_C, Sabertooth_Head) == 0x001450, "Member 'ABP_Sabertooth_C::Sabertooth_Head' has a wrong offset!");
static_assert(offsetof(ABP_Sabertooth_C, Sabertooth_Body1) == 0x001458, "Member 'ABP_Sabertooth_C::Sabertooth_Body1' has a wrong offset!");
static_assert(offsetof(ABP_Sabertooth_C, Buff_Move_Speed_Handle) == 0x001460, "Member 'ABP_Sabertooth_C::Buff_Move_Speed_Handle' has a wrong offset!");

}

