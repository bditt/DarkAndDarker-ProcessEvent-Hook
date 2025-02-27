#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CentaurDemon_Common

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_DCMonsterBaseWithOptions_SubBoss_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CentaurDemon_Common.BP_CentaurDemon_Common_C
// 0x0070 (0x1450 - 0x13E0)
class ABP_CentaurDemon_Common_C : public ABP_DCMonsterBaseWithOptions_SubBoss_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_CentaurDemon_Common_C;           // 0x13D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_DCHitBox_C*                         BP_DCHitBox12;                                     // 0x13E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_DCHitBox_C*                         BP_DCHitBox11;                                     // 0x13E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_DCHitBox_C*                         BP_DCHitBox8;                                      // 0x13F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_DCHitBox_C*                         BP_DCHitBox7;                                      // 0x13F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_DCHitBox_C*                         BP_DCHitBox10;                                     // 0x1400(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_DCHitBox_C*                         BP_DCHitBox9;                                      // 0x1408(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_DCHitBox_C*                         BP_DCHitBox6;                                      // 0x1410(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_DCHitBox_C*                         BP_DCHitBox5;                                      // 0x1418(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_DCHitBox_C*                         BP_DCHitBox4;                                      // 0x1420(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_DCHitBox_C*                         BP_DCHitBox3;                                      // 0x1428(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_DCHitBox_C*                         BP_DCHitBox2;                                      // 0x1430(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_DCHitBox_C*                         BP_DCHitBox1;                                      // 0x1438(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_DCHitBox_C*                         BP_DCHitBox;                                       // 0x1440(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          Sword;                                             // 0x1448(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Shield;                                            // 0x1449(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_CentaurDemon_Common(int32 EntryPoint);
	void GameplayTagUpdated(const struct FGameplayTag& InGameplayTag, int32 InCount);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CentaurDemon_Common_C">();
	}
	static class ABP_CentaurDemon_Common_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_CentaurDemon_Common_C>();
	}
};
static_assert(alignof(ABP_CentaurDemon_Common_C) == 0x000010, "Wrong alignment on ABP_CentaurDemon_Common_C");
static_assert(sizeof(ABP_CentaurDemon_Common_C) == 0x001450, "Wrong size on ABP_CentaurDemon_Common_C");
static_assert(offsetof(ABP_CentaurDemon_Common_C, UberGraphFrame_BP_CentaurDemon_Common_C) == 0x0013D8, "Member 'ABP_CentaurDemon_Common_C::UberGraphFrame_BP_CentaurDemon_Common_C' has a wrong offset!");
static_assert(offsetof(ABP_CentaurDemon_Common_C, BP_DCHitBox12) == 0x0013E0, "Member 'ABP_CentaurDemon_Common_C::BP_DCHitBox12' has a wrong offset!");
static_assert(offsetof(ABP_CentaurDemon_Common_C, BP_DCHitBox11) == 0x0013E8, "Member 'ABP_CentaurDemon_Common_C::BP_DCHitBox11' has a wrong offset!");
static_assert(offsetof(ABP_CentaurDemon_Common_C, BP_DCHitBox8) == 0x0013F0, "Member 'ABP_CentaurDemon_Common_C::BP_DCHitBox8' has a wrong offset!");
static_assert(offsetof(ABP_CentaurDemon_Common_C, BP_DCHitBox7) == 0x0013F8, "Member 'ABP_CentaurDemon_Common_C::BP_DCHitBox7' has a wrong offset!");
static_assert(offsetof(ABP_CentaurDemon_Common_C, BP_DCHitBox10) == 0x001400, "Member 'ABP_CentaurDemon_Common_C::BP_DCHitBox10' has a wrong offset!");
static_assert(offsetof(ABP_CentaurDemon_Common_C, BP_DCHitBox9) == 0x001408, "Member 'ABP_CentaurDemon_Common_C::BP_DCHitBox9' has a wrong offset!");
static_assert(offsetof(ABP_CentaurDemon_Common_C, BP_DCHitBox6) == 0x001410, "Member 'ABP_CentaurDemon_Common_C::BP_DCHitBox6' has a wrong offset!");
static_assert(offsetof(ABP_CentaurDemon_Common_C, BP_DCHitBox5) == 0x001418, "Member 'ABP_CentaurDemon_Common_C::BP_DCHitBox5' has a wrong offset!");
static_assert(offsetof(ABP_CentaurDemon_Common_C, BP_DCHitBox4) == 0x001420, "Member 'ABP_CentaurDemon_Common_C::BP_DCHitBox4' has a wrong offset!");
static_assert(offsetof(ABP_CentaurDemon_Common_C, BP_DCHitBox3) == 0x001428, "Member 'ABP_CentaurDemon_Common_C::BP_DCHitBox3' has a wrong offset!");
static_assert(offsetof(ABP_CentaurDemon_Common_C, BP_DCHitBox2) == 0x001430, "Member 'ABP_CentaurDemon_Common_C::BP_DCHitBox2' has a wrong offset!");
static_assert(offsetof(ABP_CentaurDemon_Common_C, BP_DCHitBox1) == 0x001438, "Member 'ABP_CentaurDemon_Common_C::BP_DCHitBox1' has a wrong offset!");
static_assert(offsetof(ABP_CentaurDemon_Common_C, BP_DCHitBox) == 0x001440, "Member 'ABP_CentaurDemon_Common_C::BP_DCHitBox' has a wrong offset!");
static_assert(offsetof(ABP_CentaurDemon_Common_C, Sword) == 0x001448, "Member 'ABP_CentaurDemon_Common_C::Sword' has a wrong offset!");
static_assert(offsetof(ABP_CentaurDemon_Common_C, Shield) == 0x001449, "Member 'ABP_CentaurDemon_Common_C::Shield' has a wrong offset!");

}

