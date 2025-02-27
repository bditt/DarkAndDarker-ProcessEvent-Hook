#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FrostWyvern_HitBox

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_DCHitBox_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_FrostWyvern_HitBox.BP_FrostWyvern_HitBox_C
// 0x0010 (0x05E0 - 0x05D0)
class UBP_FrostWyvern_HitBox_C final : public UBP_DCHitBox_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x05D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void EventReceived_320489B14061A855CE80A59002CAE9D5(const struct FGameplayEventData& Payload);
	void ExecuteUbergraph_BP_FrostWyvern_HitBox(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FrostWyvern_HitBox_C">();
	}
	static class UBP_FrostWyvern_HitBox_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_FrostWyvern_HitBox_C>();
	}
};
static_assert(alignof(UBP_FrostWyvern_HitBox_C) == 0x000010, "Wrong alignment on UBP_FrostWyvern_HitBox_C");
static_assert(sizeof(UBP_FrostWyvern_HitBox_C) == 0x0005E0, "Wrong size on UBP_FrostWyvern_HitBox_C");
static_assert(offsetof(UBP_FrostWyvern_HitBox_C, UberGraphFrame) == 0x0005D0, "Member 'UBP_FrostWyvern_HitBox_C::UberGraphFrame' has a wrong offset!");

}

