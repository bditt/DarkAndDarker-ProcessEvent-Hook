#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FrostWolf_Unique

#include "Basic.hpp"

#include "BP_FrostWolf_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_FrostWolf_Unique.BP_FrostWolf_Unique_C
// 0x0000 (0x1470 - 0x1470)
class ABP_FrostWolf_Unique_C final : public ABP_FrostWolf_C
{
public:
	uint8                                         Pad_429D[0x7];                                     // 0x1461(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_FrostWolf_Unique_C;              // 0x1468(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_FrostWolf_Unique(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FrostWolf_Unique_C">();
	}
	static class ABP_FrostWolf_Unique_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_FrostWolf_Unique_C>();
	}
};
static_assert(alignof(ABP_FrostWolf_Unique_C) == 0x000010, "Wrong alignment on ABP_FrostWolf_Unique_C");
static_assert(sizeof(ABP_FrostWolf_Unique_C) == 0x001470, "Wrong size on ABP_FrostWolf_Unique_C");
static_assert(offsetof(ABP_FrostWolf_Unique_C, UberGraphFrame_BP_FrostWolf_Unique_C) == 0x001468, "Member 'ABP_FrostWolf_Unique_C::UberGraphFrame_BP_FrostWolf_Unique_C' has a wrong offset!");

}

