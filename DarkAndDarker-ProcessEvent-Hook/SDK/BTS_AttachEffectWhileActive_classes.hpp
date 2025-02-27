#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTS_AttachEffectWhileActive

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "E_BTActionsFromMonsterBP_structs.hpp"
#include "E_ActionWhileCombat_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "AIModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BTS_AttachEffectWhileActive.BTS_AttachEffectWhileActive_C
// 0x0038 (0x00D0 - 0x0098)
class UBTS_AttachEffectWhileActive_C final : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0098(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          Get_Data_From_Monster_BP;                          // 0x00A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_BTActionsFromMonsterBP                      Check_BT_Action;                                   // 0x00A1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_ActionWhileCombat                           Combat_Action;                                     // 0x00A2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A20[0x5];                                     // 0x00A3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FPrimaryAssetId>                Attach_Effect;                                     // 0x00A8(0x0010)(Edit, BlueprintVisible)
	class ABP_DCMonsterBaseWithOptions_C*         As_BP_DCMonster_Base_With_Options;                 // 0x00B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<struct FActiveGameplayEffectHandle>    Effect_Handle;                                     // 0x00C0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_BTS_AttachEffectWhileActive(int32 EntryPoint);
	void ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveDeactivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BTS_AttachEffectWhileActive_C">();
	}
	static class UBTS_AttachEffectWhileActive_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTS_AttachEffectWhileActive_C>();
	}
};
static_assert(alignof(UBTS_AttachEffectWhileActive_C) == 0x000008, "Wrong alignment on UBTS_AttachEffectWhileActive_C");
static_assert(sizeof(UBTS_AttachEffectWhileActive_C) == 0x0000D0, "Wrong size on UBTS_AttachEffectWhileActive_C");
static_assert(offsetof(UBTS_AttachEffectWhileActive_C, UberGraphFrame) == 0x000098, "Member 'UBTS_AttachEffectWhileActive_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBTS_AttachEffectWhileActive_C, Get_Data_From_Monster_BP) == 0x0000A0, "Member 'UBTS_AttachEffectWhileActive_C::Get_Data_From_Monster_BP' has a wrong offset!");
static_assert(offsetof(UBTS_AttachEffectWhileActive_C, Check_BT_Action) == 0x0000A1, "Member 'UBTS_AttachEffectWhileActive_C::Check_BT_Action' has a wrong offset!");
static_assert(offsetof(UBTS_AttachEffectWhileActive_C, Combat_Action) == 0x0000A2, "Member 'UBTS_AttachEffectWhileActive_C::Combat_Action' has a wrong offset!");
static_assert(offsetof(UBTS_AttachEffectWhileActive_C, Attach_Effect) == 0x0000A8, "Member 'UBTS_AttachEffectWhileActive_C::Attach_Effect' has a wrong offset!");
static_assert(offsetof(UBTS_AttachEffectWhileActive_C, As_BP_DCMonster_Base_With_Options) == 0x0000B8, "Member 'UBTS_AttachEffectWhileActive_C::As_BP_DCMonster_Base_With_Options' has a wrong offset!");
static_assert(offsetof(UBTS_AttachEffectWhileActive_C, Effect_Handle) == 0x0000C0, "Member 'UBTS_AttachEffectWhileActive_C::Effect_Handle' has a wrong offset!");

}

