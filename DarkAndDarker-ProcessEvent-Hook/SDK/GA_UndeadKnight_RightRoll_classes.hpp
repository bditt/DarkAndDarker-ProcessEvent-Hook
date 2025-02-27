#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_UndeadKnight_RightRoll

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_PlayMontageAndWaitForEventBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_UndeadKnight_RightRoll.GA_UndeadKnight_RightRoll_C
// 0x0008 (0x0680 - 0x0678)
class UGA_UndeadKnight_RightRoll_C final : public UGA_PlayMontageAndWaitForEventBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_UndeadKnight_RightRoll_C;        // 0x0678(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void AbilityActivated(const struct FGameplayEventData& TriggerEventData);
	void ExecuteUbergraph_GA_UndeadKnight_RightRoll(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_UndeadKnight_RightRoll_C">();
	}
	static class UGA_UndeadKnight_RightRoll_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_UndeadKnight_RightRoll_C>();
	}
};
static_assert(alignof(UGA_UndeadKnight_RightRoll_C) == 0x000008, "Wrong alignment on UGA_UndeadKnight_RightRoll_C");
static_assert(sizeof(UGA_UndeadKnight_RightRoll_C) == 0x000680, "Wrong size on UGA_UndeadKnight_RightRoll_C");
static_assert(offsetof(UGA_UndeadKnight_RightRoll_C, UberGraphFrame_GA_UndeadKnight_RightRoll_C) == 0x000678, "Member 'UGA_UndeadKnight_RightRoll_C::UberGraphFrame_GA_UndeadKnight_RightRoll_C' has a wrong offset!");

}

