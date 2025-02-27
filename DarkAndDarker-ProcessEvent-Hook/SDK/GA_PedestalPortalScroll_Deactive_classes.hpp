#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_PedestalPortalScroll_Deactive

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "DungeonCrawler_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_PedestalPortalScroll_Deactive.GA_PedestalPortalScroll_Deactive_C
// 0x0008 (0x05B0 - 0x05A8)
class UGA_PedestalPortalScroll_Deactive_C final : public UGA_ChangeIdle
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x05A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_GA_PedestalPortalScroll_Deactive(int32 EntryPoint);
	void K2_OnEndAbility(bool bWasCancelled);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_PedestalPortalScroll_Deactive_C">();
	}
	static class UGA_PedestalPortalScroll_Deactive_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_PedestalPortalScroll_Deactive_C>();
	}
};
static_assert(alignof(UGA_PedestalPortalScroll_Deactive_C) == 0x000008, "Wrong alignment on UGA_PedestalPortalScroll_Deactive_C");
static_assert(sizeof(UGA_PedestalPortalScroll_Deactive_C) == 0x0005B0, "Wrong size on UGA_PedestalPortalScroll_Deactive_C");
static_assert(offsetof(UGA_PedestalPortalScroll_Deactive_C, UberGraphFrame) == 0x0005A8, "Member 'UGA_PedestalPortalScroll_Deactive_C::UberGraphFrame' has a wrong offset!");

}

