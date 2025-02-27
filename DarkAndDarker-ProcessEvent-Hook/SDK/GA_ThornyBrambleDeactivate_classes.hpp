#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_ThornyBrambleDeactivate

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "DungeonCrawler_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_ThornyBrambleDeactivate.GA_ThornyBrambleDeactivate_C
// 0x0008 (0x05A8 - 0x05A0)
class UGA_ThornyBrambleDeactivate_C final : public UDCGameplayAbilityBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x05A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_GA_ThornyBrambleDeactivate(int32 EntryPoint);
	void K2_ActivateAbility();
	void OnFinish_E371C157467D14B21AE61BBD68EA0BAF();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_ThornyBrambleDeactivate_C">();
	}
	static class UGA_ThornyBrambleDeactivate_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_ThornyBrambleDeactivate_C>();
	}
};
static_assert(alignof(UGA_ThornyBrambleDeactivate_C) == 0x000008, "Wrong alignment on UGA_ThornyBrambleDeactivate_C");
static_assert(sizeof(UGA_ThornyBrambleDeactivate_C) == 0x0005A8, "Wrong size on UGA_ThornyBrambleDeactivate_C");
static_assert(offsetof(UGA_ThornyBrambleDeactivate_C, UberGraphFrame) == 0x0005A0, "Member 'UGA_ThornyBrambleDeactivate_C::UberGraphFrame' has a wrong offset!");

}

