#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LavaMonster_Common

#include "Basic.hpp"

#include "BP_DCMonsterBaseWithOptions_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_LavaMonster_Common.BP_LavaMonster_Common_C
// 0x0050 (0x1430 - 0x13E0)
class ABP_LavaMonster_Common_C : public ABP_DCMonsterBaseWithOptions_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_LavaMonster_Common_C;            // 0x13D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_DCHitBox_C*                         BP_DCHitBox5;                                      // 0x13E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_DCHitBox_C*                         BP_DCHitBox4;                                      // 0x13E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_DCHitBox_C*                         BP_DCHitBox3;                                      // 0x13F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_DCHitBox_C*                         BP_DCHitBox2;                                      // 0x13F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_DCHitBox_C*                         BP_DCHitBox1;                                      // 0x1400(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_DCHitBox_C*                         BP_DCHitBox;                                       // 0x1408(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          WakeUp;                                            // 0x1410(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1912[0x3];                                     // 0x1411(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Rage;                                              // 0x1414(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          End_Death_Animtaion;                               // 0x1418(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Summoned;                                          // 0x1419(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1913[0x6];                                     // 0x141A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_GhostKing_Common_C*                 As_BP_Ghost_King;                                  // 0x1420(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           Move_Fail_TimerHandle;                             // 0x1428(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__BP_Lich_DCGameObjectLink_K2Node_ComponentBoundEvent_3_DCGameObjectLinkComponentUMsgGameLinkerRequest__DelegateSignature(const struct FObjectLinkRequestEvent& RecvEvent, class UObjectLinkMetaDataBlueprint* SendEventParam);
	void Call_Wake_Up();
	void ExecuteUbergraph_BP_LavaMonster_Common(int32 EntryPoint);
	void GameplayTagUpdated(const struct FGameplayTag& InGameplayTag, int32 InCount);
	void MoveFailTimeout();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_LavaMonster_Common_C">();
	}
	static class ABP_LavaMonster_Common_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_LavaMonster_Common_C>();
	}
};
static_assert(alignof(ABP_LavaMonster_Common_C) == 0x000010, "Wrong alignment on ABP_LavaMonster_Common_C");
static_assert(sizeof(ABP_LavaMonster_Common_C) == 0x001430, "Wrong size on ABP_LavaMonster_Common_C");
static_assert(offsetof(ABP_LavaMonster_Common_C, UberGraphFrame_BP_LavaMonster_Common_C) == 0x0013D8, "Member 'ABP_LavaMonster_Common_C::UberGraphFrame_BP_LavaMonster_Common_C' has a wrong offset!");
static_assert(offsetof(ABP_LavaMonster_Common_C, BP_DCHitBox5) == 0x0013E0, "Member 'ABP_LavaMonster_Common_C::BP_DCHitBox5' has a wrong offset!");
static_assert(offsetof(ABP_LavaMonster_Common_C, BP_DCHitBox4) == 0x0013E8, "Member 'ABP_LavaMonster_Common_C::BP_DCHitBox4' has a wrong offset!");
static_assert(offsetof(ABP_LavaMonster_Common_C, BP_DCHitBox3) == 0x0013F0, "Member 'ABP_LavaMonster_Common_C::BP_DCHitBox3' has a wrong offset!");
static_assert(offsetof(ABP_LavaMonster_Common_C, BP_DCHitBox2) == 0x0013F8, "Member 'ABP_LavaMonster_Common_C::BP_DCHitBox2' has a wrong offset!");
static_assert(offsetof(ABP_LavaMonster_Common_C, BP_DCHitBox1) == 0x001400, "Member 'ABP_LavaMonster_Common_C::BP_DCHitBox1' has a wrong offset!");
static_assert(offsetof(ABP_LavaMonster_Common_C, BP_DCHitBox) == 0x001408, "Member 'ABP_LavaMonster_Common_C::BP_DCHitBox' has a wrong offset!");
static_assert(offsetof(ABP_LavaMonster_Common_C, WakeUp) == 0x001410, "Member 'ABP_LavaMonster_Common_C::WakeUp' has a wrong offset!");
static_assert(offsetof(ABP_LavaMonster_Common_C, Rage) == 0x001414, "Member 'ABP_LavaMonster_Common_C::Rage' has a wrong offset!");
static_assert(offsetof(ABP_LavaMonster_Common_C, End_Death_Animtaion) == 0x001418, "Member 'ABP_LavaMonster_Common_C::End_Death_Animtaion' has a wrong offset!");
static_assert(offsetof(ABP_LavaMonster_Common_C, Summoned) == 0x001419, "Member 'ABP_LavaMonster_Common_C::Summoned' has a wrong offset!");
static_assert(offsetof(ABP_LavaMonster_Common_C, As_BP_Ghost_King) == 0x001420, "Member 'ABP_LavaMonster_Common_C::As_BP_Ghost_King' has a wrong offset!");
static_assert(offsetof(ABP_LavaMonster_Common_C, Move_Fail_TimerHandle) == 0x001428, "Member 'ABP_LavaMonster_Common_C::Move_Fail_TimerHandle' has a wrong offset!");

}

