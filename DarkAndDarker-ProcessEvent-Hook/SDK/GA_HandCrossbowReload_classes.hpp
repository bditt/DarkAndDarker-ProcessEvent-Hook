#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_HandCrossbowReload

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_CrossbowReloadAmmoBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_HandCrossbowReload.GA_HandCrossbowReload_C
// 0x0008 (0x05E8 - 0x05E0)
class UGA_HandCrossbowReload_C final : public UGA_CrossbowReloadAmmoBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_HandCrossbowReload_C;            // 0x05E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void AbilityActivated(const struct FGameplayEventData& TriggerEventData);
	void ExecuteUbergraph_GA_HandCrossbowReload(int32 EntryPoint);
	void K2_OnEndAbility(bool bWasCancelled);
	void SetEquippedItemsHidden(bool IsHide);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_HandCrossbowReload_C">();
	}
	static class UGA_HandCrossbowReload_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_HandCrossbowReload_C>();
	}
};
static_assert(alignof(UGA_HandCrossbowReload_C) == 0x000008, "Wrong alignment on UGA_HandCrossbowReload_C");
static_assert(sizeof(UGA_HandCrossbowReload_C) == 0x0005E8, "Wrong size on UGA_HandCrossbowReload_C");
static_assert(offsetof(UGA_HandCrossbowReload_C, UberGraphFrame_GA_HandCrossbowReload_C) == 0x0005E0, "Member 'UGA_HandCrossbowReload_C::UberGraphFrame_GA_HandCrossbowReload_C' has a wrong offset!");

}

