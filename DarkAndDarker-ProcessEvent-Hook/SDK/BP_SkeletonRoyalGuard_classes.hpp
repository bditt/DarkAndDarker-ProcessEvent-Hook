#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SkeletonRoyalGuard

#include "Basic.hpp"

#include "BP_DCMonsterBaseWithOptions_classes.hpp"
#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SkeletonRoyalGuard.BP_SkeletonRoyalGuard_C
// 0x0070 (0x1450 - 0x13E0)
class ABP_SkeletonRoyalGuard_C final : public ABP_DCMonsterBaseWithOptions_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_SkeletonRoyalGuard_C;            // 0x13D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_DCHitBox_C*                         BP_DCHitBox9;                                      // 0x13E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_DCHitBox_C*                         BP_DCHitBox8;                                      // 0x13E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_DCHitBox_C*                         BP_DCHitBox7;                                      // 0x13F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_DCHitBox_C*                         BP_DCHitBox6;                                      // 0x13F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_DCHitBox_C*                         BP_DCHitBox5;                                      // 0x1400(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_DCHitBox_C*                         BP_DCHitBox4;                                      // 0x1408(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_DCHitBox_C*                         BP_DCHitBox3;                                      // 0x1410(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_DCHitBox_C*                         BP_DCHitBox2;                                      // 0x1418(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_DCHitBox_C*                         BP_DCHitBox1;                                      // 0x1420(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_DCHitBox_C*                         BP_DCHitBox;                                       // 0x1428(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ABP_SkeletonWarlord_C*                  SkeletonWarlord;                                   // 0x1430(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ADCCharacterBase*                       Target_Enemy;                                      // 0x1438(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           Temp_Tag;                                          // 0x1440(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          Suicide;                                           // 0x1448(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_SkeletonRoyalGuard(int32 EntryPoint);
	void GameplayTagUpdated(const struct FGameplayTag& InGameplayTag, int32 InCount);
	void OnBeforeDeath();
	void OnSetAI();
	void Removed_0794AAB34968FF6F7553998A57BEBB51();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SkeletonRoyalGuard_C">();
	}
	static class ABP_SkeletonRoyalGuard_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SkeletonRoyalGuard_C>();
	}
};
static_assert(alignof(ABP_SkeletonRoyalGuard_C) == 0x000010, "Wrong alignment on ABP_SkeletonRoyalGuard_C");
static_assert(sizeof(ABP_SkeletonRoyalGuard_C) == 0x001450, "Wrong size on ABP_SkeletonRoyalGuard_C");
static_assert(offsetof(ABP_SkeletonRoyalGuard_C, UberGraphFrame_BP_SkeletonRoyalGuard_C) == 0x0013D8, "Member 'ABP_SkeletonRoyalGuard_C::UberGraphFrame_BP_SkeletonRoyalGuard_C' has a wrong offset!");
static_assert(offsetof(ABP_SkeletonRoyalGuard_C, BP_DCHitBox9) == 0x0013E0, "Member 'ABP_SkeletonRoyalGuard_C::BP_DCHitBox9' has a wrong offset!");
static_assert(offsetof(ABP_SkeletonRoyalGuard_C, BP_DCHitBox8) == 0x0013E8, "Member 'ABP_SkeletonRoyalGuard_C::BP_DCHitBox8' has a wrong offset!");
static_assert(offsetof(ABP_SkeletonRoyalGuard_C, BP_DCHitBox7) == 0x0013F0, "Member 'ABP_SkeletonRoyalGuard_C::BP_DCHitBox7' has a wrong offset!");
static_assert(offsetof(ABP_SkeletonRoyalGuard_C, BP_DCHitBox6) == 0x0013F8, "Member 'ABP_SkeletonRoyalGuard_C::BP_DCHitBox6' has a wrong offset!");
static_assert(offsetof(ABP_SkeletonRoyalGuard_C, BP_DCHitBox5) == 0x001400, "Member 'ABP_SkeletonRoyalGuard_C::BP_DCHitBox5' has a wrong offset!");
static_assert(offsetof(ABP_SkeletonRoyalGuard_C, BP_DCHitBox4) == 0x001408, "Member 'ABP_SkeletonRoyalGuard_C::BP_DCHitBox4' has a wrong offset!");
static_assert(offsetof(ABP_SkeletonRoyalGuard_C, BP_DCHitBox3) == 0x001410, "Member 'ABP_SkeletonRoyalGuard_C::BP_DCHitBox3' has a wrong offset!");
static_assert(offsetof(ABP_SkeletonRoyalGuard_C, BP_DCHitBox2) == 0x001418, "Member 'ABP_SkeletonRoyalGuard_C::BP_DCHitBox2' has a wrong offset!");
static_assert(offsetof(ABP_SkeletonRoyalGuard_C, BP_DCHitBox1) == 0x001420, "Member 'ABP_SkeletonRoyalGuard_C::BP_DCHitBox1' has a wrong offset!");
static_assert(offsetof(ABP_SkeletonRoyalGuard_C, BP_DCHitBox) == 0x001428, "Member 'ABP_SkeletonRoyalGuard_C::BP_DCHitBox' has a wrong offset!");
static_assert(offsetof(ABP_SkeletonRoyalGuard_C, SkeletonWarlord) == 0x001430, "Member 'ABP_SkeletonRoyalGuard_C::SkeletonWarlord' has a wrong offset!");
static_assert(offsetof(ABP_SkeletonRoyalGuard_C, Target_Enemy) == 0x001438, "Member 'ABP_SkeletonRoyalGuard_C::Target_Enemy' has a wrong offset!");
static_assert(offsetof(ABP_SkeletonRoyalGuard_C, Temp_Tag) == 0x001440, "Member 'ABP_SkeletonRoyalGuard_C::Temp_Tag' has a wrong offset!");
static_assert(offsetof(ABP_SkeletonRoyalGuard_C, Suicide) == 0x001448, "Member 'ABP_SkeletonRoyalGuard_C::Suicide' has a wrong offset!");

}

