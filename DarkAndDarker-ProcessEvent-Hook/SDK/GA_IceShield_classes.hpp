#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_IceShield

#include "Basic.hpp"

#include "GA_ActivateOnAbilityHandleData_classes.hpp"
#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_IceShield.GA_IceShield_C
// 0x0010 (0x05B0 - 0x05A0)
class UGA_IceShield_C final : public UGA_ActivateOnAbilityHandleData_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x05A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                           CooldownTag;                                       // 0x05A8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void EventReceived_5EB0E3114F71A35895119AB12A8713E4(const struct FGameplayEventData& Payload);
	void ExecuteUbergraph_GA_IceShield(int32 EntryPoint);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_IceShield_C">();
	}
	static class UGA_IceShield_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_IceShield_C>();
	}
};
static_assert(alignof(UGA_IceShield_C) == 0x000008, "Wrong alignment on UGA_IceShield_C");
static_assert(sizeof(UGA_IceShield_C) == 0x0005B0, "Wrong size on UGA_IceShield_C");
static_assert(offsetof(UGA_IceShield_C, UberGraphFrame) == 0x0005A0, "Member 'UGA_IceShield_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_IceShield_C, CooldownTag) == 0x0005A8, "Member 'UGA_IceShield_C::CooldownTag' has a wrong offset!");

}

