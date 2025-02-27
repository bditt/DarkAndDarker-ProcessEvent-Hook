#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_HuntingTrap

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_DCItemActor_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_HuntingTrap.BP_HuntingTrap_C
// 0x0010 (0x0578 - 0x0568)
class ABP_HuntingTrap_C final : public ABP_DCItemActor_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0568(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                 Pin;                                               // 0x0570(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void EventFMsgSoundEvent(const struct FMsgSoundEvent& Msg);
	void ExecuteUbergraph_BP_HuntingTrap(int32 EntryPoint);
	void OnHiddenInGameStateChanged(const bool bIsHidden);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_HuntingTrap_C">();
	}
	static class ABP_HuntingTrap_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_HuntingTrap_C>();
	}
};
static_assert(alignof(ABP_HuntingTrap_C) == 0x000008, "Wrong alignment on ABP_HuntingTrap_C");
static_assert(sizeof(ABP_HuntingTrap_C) == 0x000578, "Wrong size on ABP_HuntingTrap_C");
static_assert(offsetof(ABP_HuntingTrap_C, UberGraphFrame) == 0x000568, "Member 'ABP_HuntingTrap_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_HuntingTrap_C, Pin) == 0x000570, "Member 'ABP_HuntingTrap_C::Pin' has a wrong offset!");

}

