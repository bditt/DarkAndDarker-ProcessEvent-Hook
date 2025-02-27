#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Kobold

#include "Basic.hpp"

#include "BP_DCMonsterBaseWithOptions_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Kobold.BP_Kobold_C
// 0x0030 (0x1410 - 0x13E0)
class ABP_Kobold_C : public ABP_DCMonsterBaseWithOptions_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_Kobold_C;                        // 0x13D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	double                                        Patrol_Signal_Distance;                            // 0x13E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        HP_to_Use_Calling;                                 // 0x13E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Calling_Used;                                      // 0x13F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4FB8[0x7];                                     // 0x13F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         Ally_To_Call;                                      // 0x13F8(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	class AActor*                                 Target_By_Called;                                  // 0x1408(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Kobold(int32 EntryPoint);
	void GameplayTagUpdated(const struct FGameplayTag& InGameplayTag, int32 InCount);
	void OnFMsgGASAttributeNotifyBlueprint(const struct FMsgGASAttributeNotify& InMsg);
	void Removed_FE21B53A439E4AD845A29084262234DE();
	void Used_Calling();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Kobold_C">();
	}
	static class ABP_Kobold_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Kobold_C>();
	}
};
static_assert(alignof(ABP_Kobold_C) == 0x000010, "Wrong alignment on ABP_Kobold_C");
static_assert(sizeof(ABP_Kobold_C) == 0x001410, "Wrong size on ABP_Kobold_C");
static_assert(offsetof(ABP_Kobold_C, UberGraphFrame_BP_Kobold_C) == 0x0013D8, "Member 'ABP_Kobold_C::UberGraphFrame_BP_Kobold_C' has a wrong offset!");
static_assert(offsetof(ABP_Kobold_C, Patrol_Signal_Distance) == 0x0013E0, "Member 'ABP_Kobold_C::Patrol_Signal_Distance' has a wrong offset!");
static_assert(offsetof(ABP_Kobold_C, HP_to_Use_Calling) == 0x0013E8, "Member 'ABP_Kobold_C::HP_to_Use_Calling' has a wrong offset!");
static_assert(offsetof(ABP_Kobold_C, Calling_Used) == 0x0013F0, "Member 'ABP_Kobold_C::Calling_Used' has a wrong offset!");
static_assert(offsetof(ABP_Kobold_C, Ally_To_Call) == 0x0013F8, "Member 'ABP_Kobold_C::Ally_To_Call' has a wrong offset!");
static_assert(offsetof(ABP_Kobold_C, Target_By_Called) == 0x001408, "Member 'ABP_Kobold_C::Target_By_Called' has a wrong offset!");

}

