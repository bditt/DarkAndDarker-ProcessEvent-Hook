#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MidnightStag

#include "Basic.hpp"

#include "BP_DCMonsterBaseWithOptions_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MidnightStag.BP_MidnightStag_C
// 0x00A0 (0x1480 - 0x13E0)
class ABP_MidnightStag_C final : public ABP_DCMonsterBaseWithOptions_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_MidnightStag_C;                  // 0x13D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_DCHitBox_C*                         BP_DCHitBox_HornR2;                                // 0x13E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_DCHitBox_C*                         BP_DCHitBox_HornL2;                                // 0x13E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_DCHitBox_C*                         BP_DCHitBox_HornR1;                                // 0x13F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_DCHitBox_C*                         BP_DCHitBox_HornL1;                                // 0x13F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_DCHitBox_C*                         BP_DCHitBox_LegB_LR;                               // 0x1400(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_DCHitBox_C*                         BP_DCHitBox_LegB_RR;                               // 0x1408(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_DCHitBox_C*                         BP_DCHitBox_LegF_LL;                               // 0x1410(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_DCHitBox_C*                         BP_DCHitBox_LegF_LR;                               // 0x1418(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      FXS_MidnightStag_Body_001A;                        // 0x1420(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_DCHitBox_C*                         BP_DCHitBox_HornR;                                 // 0x1428(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_DCHitBox_C*                         BP_DCHitBox_HornL;                                 // 0x1430(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_DCHitBox_C*                         BP_DCHitBox_LegB_UL;                               // 0x1438(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_DCHitBox_C*                         BP_DCHitBox_LegF_UL;                               // 0x1440(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_DCHitBox_C*                         BP_DCHitBox_LegB_UR;                               // 0x1448(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_DCHitBox_C*                         BP_DCHitBox_LegF_UR;                               // 0x1450(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_DCHitBox_C*                         BP_DCHitBox_Neck;                                  // 0x1458(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_DCHitBox_C*                         BP_DCHitBox_Body;                                  // 0x1460(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_DCHitBox_C*                         BP_DCHitBox_Head;                                  // 0x1468(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class ADCCharacterBase*>               DCCharacter_Base;                                  // 0x1470(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)

public:
	void Activate_Mode();
	void Deactivate_Mode();
	void ExecuteUbergraph_BP_MidnightStag(int32 EntryPoint);
	void GameplayTagUpdated(const struct FGameplayTag& InGameplayTag, int32 InCount);
	void OnFMsgGASAttributeNotifyBlueprint(const struct FMsgGASAttributeNotify& InMsg);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MidnightStag_C">();
	}
	static class ABP_MidnightStag_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MidnightStag_C>();
	}
};
static_assert(alignof(ABP_MidnightStag_C) == 0x000010, "Wrong alignment on ABP_MidnightStag_C");
static_assert(sizeof(ABP_MidnightStag_C) == 0x001480, "Wrong size on ABP_MidnightStag_C");
static_assert(offsetof(ABP_MidnightStag_C, UberGraphFrame_BP_MidnightStag_C) == 0x0013D8, "Member 'ABP_MidnightStag_C::UberGraphFrame_BP_MidnightStag_C' has a wrong offset!");
static_assert(offsetof(ABP_MidnightStag_C, BP_DCHitBox_HornR2) == 0x0013E0, "Member 'ABP_MidnightStag_C::BP_DCHitBox_HornR2' has a wrong offset!");
static_assert(offsetof(ABP_MidnightStag_C, BP_DCHitBox_HornL2) == 0x0013E8, "Member 'ABP_MidnightStag_C::BP_DCHitBox_HornL2' has a wrong offset!");
static_assert(offsetof(ABP_MidnightStag_C, BP_DCHitBox_HornR1) == 0x0013F0, "Member 'ABP_MidnightStag_C::BP_DCHitBox_HornR1' has a wrong offset!");
static_assert(offsetof(ABP_MidnightStag_C, BP_DCHitBox_HornL1) == 0x0013F8, "Member 'ABP_MidnightStag_C::BP_DCHitBox_HornL1' has a wrong offset!");
static_assert(offsetof(ABP_MidnightStag_C, BP_DCHitBox_LegB_LR) == 0x001400, "Member 'ABP_MidnightStag_C::BP_DCHitBox_LegB_LR' has a wrong offset!");
static_assert(offsetof(ABP_MidnightStag_C, BP_DCHitBox_LegB_RR) == 0x001408, "Member 'ABP_MidnightStag_C::BP_DCHitBox_LegB_RR' has a wrong offset!");
static_assert(offsetof(ABP_MidnightStag_C, BP_DCHitBox_LegF_LL) == 0x001410, "Member 'ABP_MidnightStag_C::BP_DCHitBox_LegF_LL' has a wrong offset!");
static_assert(offsetof(ABP_MidnightStag_C, BP_DCHitBox_LegF_LR) == 0x001418, "Member 'ABP_MidnightStag_C::BP_DCHitBox_LegF_LR' has a wrong offset!");
static_assert(offsetof(ABP_MidnightStag_C, FXS_MidnightStag_Body_001A) == 0x001420, "Member 'ABP_MidnightStag_C::FXS_MidnightStag_Body_001A' has a wrong offset!");
static_assert(offsetof(ABP_MidnightStag_C, BP_DCHitBox_HornR) == 0x001428, "Member 'ABP_MidnightStag_C::BP_DCHitBox_HornR' has a wrong offset!");
static_assert(offsetof(ABP_MidnightStag_C, BP_DCHitBox_HornL) == 0x001430, "Member 'ABP_MidnightStag_C::BP_DCHitBox_HornL' has a wrong offset!");
static_assert(offsetof(ABP_MidnightStag_C, BP_DCHitBox_LegB_UL) == 0x001438, "Member 'ABP_MidnightStag_C::BP_DCHitBox_LegB_UL' has a wrong offset!");
static_assert(offsetof(ABP_MidnightStag_C, BP_DCHitBox_LegF_UL) == 0x001440, "Member 'ABP_MidnightStag_C::BP_DCHitBox_LegF_UL' has a wrong offset!");
static_assert(offsetof(ABP_MidnightStag_C, BP_DCHitBox_LegB_UR) == 0x001448, "Member 'ABP_MidnightStag_C::BP_DCHitBox_LegB_UR' has a wrong offset!");
static_assert(offsetof(ABP_MidnightStag_C, BP_DCHitBox_LegF_UR) == 0x001450, "Member 'ABP_MidnightStag_C::BP_DCHitBox_LegF_UR' has a wrong offset!");
static_assert(offsetof(ABP_MidnightStag_C, BP_DCHitBox_Neck) == 0x001458, "Member 'ABP_MidnightStag_C::BP_DCHitBox_Neck' has a wrong offset!");
static_assert(offsetof(ABP_MidnightStag_C, BP_DCHitBox_Body) == 0x001460, "Member 'ABP_MidnightStag_C::BP_DCHitBox_Body' has a wrong offset!");
static_assert(offsetof(ABP_MidnightStag_C, BP_DCHitBox_Head) == 0x001468, "Member 'ABP_MidnightStag_C::BP_DCHitBox_Head' has a wrong offset!");
static_assert(offsetof(ABP_MidnightStag_C, DCCharacter_Base) == 0x001470, "Member 'ABP_MidnightStag_C::DCCharacter_Base' has a wrong offset!");

}

