#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_SkeletonFootmanResurrection

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_MonsterStanceChange_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_SkeletonFootmanResurrection.GA_SkeletonFootmanResurrection_C
// 0x0008 (0x06B8 - 0x06B0)
class UGA_SkeletonFootmanResurrection_C final : public UGA_MonsterStanceChange_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_SkeletonFootmanResurrection_C;   // 0x06B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_GA_SkeletonFootmanResurrection(int32 EntryPoint);
	void K2_OnEndAbility(bool bWasCancelled);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_SkeletonFootmanResurrection_C">();
	}
	static class UGA_SkeletonFootmanResurrection_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_SkeletonFootmanResurrection_C>();
	}
};
static_assert(alignof(UGA_SkeletonFootmanResurrection_C) == 0x000008, "Wrong alignment on UGA_SkeletonFootmanResurrection_C");
static_assert(sizeof(UGA_SkeletonFootmanResurrection_C) == 0x0006B8, "Wrong size on UGA_SkeletonFootmanResurrection_C");
static_assert(offsetof(UGA_SkeletonFootmanResurrection_C, UberGraphFrame_GA_SkeletonFootmanResurrection_C) == 0x0006B0, "Member 'UGA_SkeletonFootmanResurrection_C::UberGraphFrame_GA_SkeletonFootmanResurrection_C' has a wrong offset!");

}

