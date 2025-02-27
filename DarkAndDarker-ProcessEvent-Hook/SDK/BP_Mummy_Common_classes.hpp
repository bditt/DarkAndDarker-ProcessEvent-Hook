#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Mummy_Common

#include "Basic.hpp"

#include "BP_DCMonsterBaseWithOptions_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Mummy_Common.BP_Mummy_Common_C
// 0x0050 (0x1430 - 0x13E0)
class ABP_Mummy_Common_C : public ABP_DCMonsterBaseWithOptions_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_Mummy_Common_C;                  // 0x13D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_DCHitBox_C*                         BP_DCHitBox_LFoot;                                 // 0x13E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_DCHitBox_C*                         BP_DCHitBox_RFoot;                                 // 0x13E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_DCHitBox_C*                         BP_DCHitBox_LHand;                                 // 0x13F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_DCHitBox_C*                         BP_DCHitBox_RHand;                                 // 0x13F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_DCHitBox_C*                         BP_DCHitBox_Head;                                  // 0x1400(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_DCHitBox_C*                         BP_DCHitBox_LLeg;                                  // 0x1408(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_DCHitBox_C*                         BP_DCHitBox_RLeg;                                  // 0x1410(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_DCHitBox_C*                         BP_DCHitBox_LArm;                                  // 0x1418(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_DCHitBox_C*                         BP_DCHitBox_RArm;                                  // 0x1420(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_DCHitBox_C*                         BP_DCHitBox_Body;                                  // 0x1428(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Mummy_Common(int32 EntryPoint);
	void GameplayTagUpdated(const struct FGameplayTag& InGameplayTag, int32 InCount);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Mummy_Common_C">();
	}
	static class ABP_Mummy_Common_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Mummy_Common_C>();
	}
};
static_assert(alignof(ABP_Mummy_Common_C) == 0x000010, "Wrong alignment on ABP_Mummy_Common_C");
static_assert(sizeof(ABP_Mummy_Common_C) == 0x001430, "Wrong size on ABP_Mummy_Common_C");
static_assert(offsetof(ABP_Mummy_Common_C, UberGraphFrame_BP_Mummy_Common_C) == 0x0013D8, "Member 'ABP_Mummy_Common_C::UberGraphFrame_BP_Mummy_Common_C' has a wrong offset!");
static_assert(offsetof(ABP_Mummy_Common_C, BP_DCHitBox_LFoot) == 0x0013E0, "Member 'ABP_Mummy_Common_C::BP_DCHitBox_LFoot' has a wrong offset!");
static_assert(offsetof(ABP_Mummy_Common_C, BP_DCHitBox_RFoot) == 0x0013E8, "Member 'ABP_Mummy_Common_C::BP_DCHitBox_RFoot' has a wrong offset!");
static_assert(offsetof(ABP_Mummy_Common_C, BP_DCHitBox_LHand) == 0x0013F0, "Member 'ABP_Mummy_Common_C::BP_DCHitBox_LHand' has a wrong offset!");
static_assert(offsetof(ABP_Mummy_Common_C, BP_DCHitBox_RHand) == 0x0013F8, "Member 'ABP_Mummy_Common_C::BP_DCHitBox_RHand' has a wrong offset!");
static_assert(offsetof(ABP_Mummy_Common_C, BP_DCHitBox_Head) == 0x001400, "Member 'ABP_Mummy_Common_C::BP_DCHitBox_Head' has a wrong offset!");
static_assert(offsetof(ABP_Mummy_Common_C, BP_DCHitBox_LLeg) == 0x001408, "Member 'ABP_Mummy_Common_C::BP_DCHitBox_LLeg' has a wrong offset!");
static_assert(offsetof(ABP_Mummy_Common_C, BP_DCHitBox_RLeg) == 0x001410, "Member 'ABP_Mummy_Common_C::BP_DCHitBox_RLeg' has a wrong offset!");
static_assert(offsetof(ABP_Mummy_Common_C, BP_DCHitBox_LArm) == 0x001418, "Member 'ABP_Mummy_Common_C::BP_DCHitBox_LArm' has a wrong offset!");
static_assert(offsetof(ABP_Mummy_Common_C, BP_DCHitBox_RArm) == 0x001420, "Member 'ABP_Mummy_Common_C::BP_DCHitBox_RArm' has a wrong offset!");
static_assert(offsetof(ABP_Mummy_Common_C, BP_DCHitBox_Body) == 0x001428, "Member 'ABP_Mummy_Common_C::BP_DCHitBox_Body' has a wrong offset!");

}

