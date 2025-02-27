#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SafetyZone

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_PropsActorBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SafetyZone.BP_SafetyZone_C
// 0x0010 (0x04C8 - 0x04B8)
class ABP_SafetyZone_C final : public ABP_PropsActorBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_SafetyZone_C;                    // 0x04B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                          AuraBox;                                           // 0x04C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_SafetyZone(int32 EntryPoint);
	void OnBegin();
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SafetyZone_C">();
	}
	static class ABP_SafetyZone_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SafetyZone_C>();
	}
};
static_assert(alignof(ABP_SafetyZone_C) == 0x000008, "Wrong alignment on ABP_SafetyZone_C");
static_assert(sizeof(ABP_SafetyZone_C) == 0x0004C8, "Wrong size on ABP_SafetyZone_C");
static_assert(offsetof(ABP_SafetyZone_C, UberGraphFrame_BP_SafetyZone_C) == 0x0004B8, "Member 'ABP_SafetyZone_C::UberGraphFrame_BP_SafetyZone_C' has a wrong offset!");
static_assert(offsetof(ABP_SafetyZone_C, AuraBox) == 0x0004C0, "Member 'ABP_SafetyZone_C::AuraBox' has a wrong offset!");

}

