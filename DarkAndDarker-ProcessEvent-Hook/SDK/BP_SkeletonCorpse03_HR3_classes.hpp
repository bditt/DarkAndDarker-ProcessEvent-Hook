#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SkeletonCorpse03_HR3

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_Chest_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SkeletonCorpse03_HR3.BP_SkeletonCorpse03_HR3_C
// 0x0008 (0x0548 - 0x0540)
class ABP_SkeletonCorpse03_HR3_C final : public ABP_Chest_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_SkeletonCorpse03_HR3_C;          // 0x0540(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_SkeletonCorpse03_HR3(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SkeletonCorpse03_HR3_C">();
	}
	static class ABP_SkeletonCorpse03_HR3_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SkeletonCorpse03_HR3_C>();
	}
};
static_assert(alignof(ABP_SkeletonCorpse03_HR3_C) == 0x000008, "Wrong alignment on ABP_SkeletonCorpse03_HR3_C");
static_assert(sizeof(ABP_SkeletonCorpse03_HR3_C) == 0x000548, "Wrong size on ABP_SkeletonCorpse03_HR3_C");
static_assert(offsetof(ABP_SkeletonCorpse03_HR3_C, UberGraphFrame_BP_SkeletonCorpse03_HR3_C) == 0x000540, "Member 'ABP_SkeletonCorpse03_HR3_C::UberGraphFrame_BP_SkeletonCorpse03_HR3_C' has a wrong offset!");

}

