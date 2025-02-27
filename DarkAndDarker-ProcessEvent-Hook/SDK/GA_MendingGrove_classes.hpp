#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_MendingGrove

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_SpellCasting_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_MendingGrove.GA_MendingGrove_C
// 0x0008 (0x0670 - 0x0668)
class UGA_MendingGrove_C final : public UGA_SpellCasting_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0668(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void AbilityActivated_BP(const struct FGameplayEventData& TriggerEventData, bool bIsSocketSightBlocked);
	void ExecuteUbergraph_GA_MendingGrove(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_MendingGrove_C">();
	}
	static class UGA_MendingGrove_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_MendingGrove_C>();
	}
};
static_assert(alignof(UGA_MendingGrove_C) == 0x000008, "Wrong alignment on UGA_MendingGrove_C");
static_assert(sizeof(UGA_MendingGrove_C) == 0x000670, "Wrong size on UGA_MendingGrove_C");
static_assert(offsetof(UGA_MendingGrove_C, UberGraphFrame) == 0x000668, "Member 'UGA_MendingGrove_C::UberGraphFrame' has a wrong offset!");

}

