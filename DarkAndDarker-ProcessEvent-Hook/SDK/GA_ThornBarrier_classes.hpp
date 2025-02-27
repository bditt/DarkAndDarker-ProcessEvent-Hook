#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_ThornBarrier

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_SpellCasting_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_ThornBarrier.GA_ThornBarrier_C
// 0x0008 (0x0670 - 0x0668)
class UGA_ThornBarrier_C final : public UGA_SpellCasting_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0668(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void AbilityActivated_BP(const struct FGameplayEventData& TriggerEventData, bool bIsSocketSightBlocked);
	void ExecuteUbergraph_GA_ThornBarrier(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_ThornBarrier_C">();
	}
	static class UGA_ThornBarrier_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_ThornBarrier_C>();
	}
};
static_assert(alignof(UGA_ThornBarrier_C) == 0x000008, "Wrong alignment on UGA_ThornBarrier_C");
static_assert(sizeof(UGA_ThornBarrier_C) == 0x000670, "Wrong size on UGA_ThornBarrier_C");
static_assert(offsetof(UGA_ThornBarrier_C, UberGraphFrame) == 0x000668, "Member 'UGA_ThornBarrier_C::UberGraphFrame' has a wrong offset!");

}

