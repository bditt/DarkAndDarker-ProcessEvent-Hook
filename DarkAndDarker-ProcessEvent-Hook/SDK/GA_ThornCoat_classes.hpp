#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_ThornCoat

#include "Basic.hpp"

#include "GA_ActivateOnAbilityHandleData_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_ThornCoat.GA_ThornCoat_C
// 0x0008 (0x05A8 - 0x05A0)
class UGA_ThornCoat_C final : public UGA_ActivateOnAbilityHandleData_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x05A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void EventReceived_4D8E8D564E18076D355DF3806D521815(const struct FGameplayEventData& Payload);
	void ExecuteUbergraph_GA_ThornCoat(int32 EntryPoint);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_ThornCoat_C">();
	}
	static class UGA_ThornCoat_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_ThornCoat_C>();
	}
};
static_assert(alignof(UGA_ThornCoat_C) == 0x000008, "Wrong alignment on UGA_ThornCoat_C");
static_assert(sizeof(UGA_ThornCoat_C) == 0x0005A8, "Wrong size on UGA_ThornCoat_C");
static_assert(offsetof(UGA_ThornCoat_C, UberGraphFrame) == 0x0005A0, "Member 'UGA_ThornCoat_C::UberGraphFrame' has a wrong offset!");

}

