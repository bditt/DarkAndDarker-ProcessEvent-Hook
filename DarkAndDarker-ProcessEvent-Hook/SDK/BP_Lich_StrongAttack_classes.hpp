#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Lich_StrongAttack

#include "Basic.hpp"

#include "BP_ProjectileActor_classes.hpp"
#include "Engine_structs.hpp"
#include "AkAudio_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Lich_StrongAttack.BP_Lich_StrongAttack_C
// 0x0010 (0x07A0 - 0x0790)
class ABP_Lich_StrongAttack_C final : public ABP_ProjectileActor_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_Lich_StrongAttack_C;             // 0x0788(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class ABP_Lich_Common_C*                      As_BP_Lich_Common;                                 // 0x0790(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void Added_90ED0D3848B33D87C2E38190FD8715D9();
	void ExecuteUbergraph_BP_Lich_StrongAttack(int32 EntryPoint);
	void GameplayTagUpdated(const struct FGameplayTag& InGameplayTag, int32 InCount);
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Lich_StrongAttack_C">();
	}
	static class ABP_Lich_StrongAttack_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Lich_StrongAttack_C>();
	}
};
static_assert(alignof(ABP_Lich_StrongAttack_C) == 0x000010, "Wrong alignment on ABP_Lich_StrongAttack_C");
static_assert(sizeof(ABP_Lich_StrongAttack_C) == 0x0007A0, "Wrong size on ABP_Lich_StrongAttack_C");
static_assert(offsetof(ABP_Lich_StrongAttack_C, UberGraphFrame_BP_Lich_StrongAttack_C) == 0x000788, "Member 'ABP_Lich_StrongAttack_C::UberGraphFrame_BP_Lich_StrongAttack_C' has a wrong offset!");
static_assert(offsetof(ABP_Lich_StrongAttack_C, As_BP_Lich_Common) == 0x000790, "Member 'ABP_Lich_StrongAttack_C::As_BP_Lich_Common' has a wrong offset!");

}

