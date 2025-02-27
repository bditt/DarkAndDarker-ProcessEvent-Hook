#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FrostSkeletonAxeman

#include "Basic.hpp"

#include "BP_DCMonsterBaseWithOptions_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_FrostSkeletonAxeman.BP_FrostSkeletonAxeman_C
// 0x0090 (0x1470 - 0x13E0)
class ABP_FrostSkeletonAxeman_C : public ABP_DCMonsterBaseWithOptions_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_FrostSkeletonAxeman_C;           // 0x13D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      FXS_WeaponFX;                                      // 0x13E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_DCHitBox_C*                         BP_DCHitBox_Hand_L;                                // 0x13E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_DCHitBox_C*                         BP_DCHitBox_Hand_R;                                // 0x13F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_DCHitBox_C*                         BP_DCHitBox_Foot_L;                                // 0x13F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_DCHitBox_C*                         BP_DCHitBox_Foot_R;                                // 0x1400(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_DCHitBox_C*                         BP_DCHitBox_Calf_L;                                // 0x1408(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_DCHitBox_C*                         BP_DCHitBox_Calf_R;                                // 0x1410(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_DCHitBox_C*                         BP_DCHitBox_Thigh_L;                               // 0x1418(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_DCHitBox_C*                         BP_DCHitBox_Thigh_R;                               // 0x1420(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_DCHitBox_C*                         BP_DCHitBox_Arm_L_L;                               // 0x1428(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_DCHitBox_C*                         BP_DCHitBox_Arm_U_L;                               // 0x1430(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_DCHitBox_C*                         BP_DCHitBox_Arm_L_R;                               // 0x1438(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_DCHitBox_C*                         BP_DCHitBox_Arm_U_R;                               // 0x1440(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_DCHitBox_C*                         BP_DCHitBox_Head;                                  // 0x1448(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_DCHitBox_C*                         BP_DCHitBox_Body_02;                               // 0x1450(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_DCHitBox_C*                         BP_DCHitBox_Body_01;                               // 0x1458(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                         Hit_Count;                                         // 0x1460(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ChangeFXState(bool New_State, class UNiagaraComponent* Niagara_System_Component);
	void ChangeFXStateOnTagUpdate(class UNiagaraComponent* Niagara_Component, const struct FGameplayTag& In_Gameplay_Tag, int32 In_Count);
	void ExecuteUbergraph_BP_FrostSkeletonAxeman(int32 EntryPoint);
	void GameplayTagUpdated(const struct FGameplayTag& InGameplayTag, int32 InCount);
	void Hit_Count_Function();
	void Hit_Count_Reset();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FrostSkeletonAxeman_C">();
	}
	static class ABP_FrostSkeletonAxeman_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_FrostSkeletonAxeman_C>();
	}
};
static_assert(alignof(ABP_FrostSkeletonAxeman_C) == 0x000010, "Wrong alignment on ABP_FrostSkeletonAxeman_C");
static_assert(sizeof(ABP_FrostSkeletonAxeman_C) == 0x001470, "Wrong size on ABP_FrostSkeletonAxeman_C");
static_assert(offsetof(ABP_FrostSkeletonAxeman_C, UberGraphFrame_BP_FrostSkeletonAxeman_C) == 0x0013D8, "Member 'ABP_FrostSkeletonAxeman_C::UberGraphFrame_BP_FrostSkeletonAxeman_C' has a wrong offset!");
static_assert(offsetof(ABP_FrostSkeletonAxeman_C, FXS_WeaponFX) == 0x0013E0, "Member 'ABP_FrostSkeletonAxeman_C::FXS_WeaponFX' has a wrong offset!");
static_assert(offsetof(ABP_FrostSkeletonAxeman_C, BP_DCHitBox_Hand_L) == 0x0013E8, "Member 'ABP_FrostSkeletonAxeman_C::BP_DCHitBox_Hand_L' has a wrong offset!");
static_assert(offsetof(ABP_FrostSkeletonAxeman_C, BP_DCHitBox_Hand_R) == 0x0013F0, "Member 'ABP_FrostSkeletonAxeman_C::BP_DCHitBox_Hand_R' has a wrong offset!");
static_assert(offsetof(ABP_FrostSkeletonAxeman_C, BP_DCHitBox_Foot_L) == 0x0013F8, "Member 'ABP_FrostSkeletonAxeman_C::BP_DCHitBox_Foot_L' has a wrong offset!");
static_assert(offsetof(ABP_FrostSkeletonAxeman_C, BP_DCHitBox_Foot_R) == 0x001400, "Member 'ABP_FrostSkeletonAxeman_C::BP_DCHitBox_Foot_R' has a wrong offset!");
static_assert(offsetof(ABP_FrostSkeletonAxeman_C, BP_DCHitBox_Calf_L) == 0x001408, "Member 'ABP_FrostSkeletonAxeman_C::BP_DCHitBox_Calf_L' has a wrong offset!");
static_assert(offsetof(ABP_FrostSkeletonAxeman_C, BP_DCHitBox_Calf_R) == 0x001410, "Member 'ABP_FrostSkeletonAxeman_C::BP_DCHitBox_Calf_R' has a wrong offset!");
static_assert(offsetof(ABP_FrostSkeletonAxeman_C, BP_DCHitBox_Thigh_L) == 0x001418, "Member 'ABP_FrostSkeletonAxeman_C::BP_DCHitBox_Thigh_L' has a wrong offset!");
static_assert(offsetof(ABP_FrostSkeletonAxeman_C, BP_DCHitBox_Thigh_R) == 0x001420, "Member 'ABP_FrostSkeletonAxeman_C::BP_DCHitBox_Thigh_R' has a wrong offset!");
static_assert(offsetof(ABP_FrostSkeletonAxeman_C, BP_DCHitBox_Arm_L_L) == 0x001428, "Member 'ABP_FrostSkeletonAxeman_C::BP_DCHitBox_Arm_L_L' has a wrong offset!");
static_assert(offsetof(ABP_FrostSkeletonAxeman_C, BP_DCHitBox_Arm_U_L) == 0x001430, "Member 'ABP_FrostSkeletonAxeman_C::BP_DCHitBox_Arm_U_L' has a wrong offset!");
static_assert(offsetof(ABP_FrostSkeletonAxeman_C, BP_DCHitBox_Arm_L_R) == 0x001438, "Member 'ABP_FrostSkeletonAxeman_C::BP_DCHitBox_Arm_L_R' has a wrong offset!");
static_assert(offsetof(ABP_FrostSkeletonAxeman_C, BP_DCHitBox_Arm_U_R) == 0x001440, "Member 'ABP_FrostSkeletonAxeman_C::BP_DCHitBox_Arm_U_R' has a wrong offset!");
static_assert(offsetof(ABP_FrostSkeletonAxeman_C, BP_DCHitBox_Head) == 0x001448, "Member 'ABP_FrostSkeletonAxeman_C::BP_DCHitBox_Head' has a wrong offset!");
static_assert(offsetof(ABP_FrostSkeletonAxeman_C, BP_DCHitBox_Body_02) == 0x001450, "Member 'ABP_FrostSkeletonAxeman_C::BP_DCHitBox_Body_02' has a wrong offset!");
static_assert(offsetof(ABP_FrostSkeletonAxeman_C, BP_DCHitBox_Body_01) == 0x001458, "Member 'ABP_FrostSkeletonAxeman_C::BP_DCHitBox_Body_01' has a wrong offset!");
static_assert(offsetof(ABP_FrostSkeletonAxeman_C, Hit_Count) == 0x001460, "Member 'ABP_FrostSkeletonAxeman_C::Hit_Count' has a wrong offset!");

}

