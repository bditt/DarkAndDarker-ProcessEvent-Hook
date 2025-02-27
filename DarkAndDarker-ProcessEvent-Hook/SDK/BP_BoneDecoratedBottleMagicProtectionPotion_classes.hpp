#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BoneDecoratedBottleMagicProtectionPotion

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_DrinkPotionActor_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_BoneDecoratedBottleMagicProtectionPotion.BP_BoneDecoratedBottleMagicProtectionPotion_C
// 0x0008 (0x05F8 - 0x05F0)
class ABP_BoneDecoratedBottleMagicProtectionPotion_C final : public ABP_DrinkPotionActor_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_BoneDecoratedBottleMagicProtectionPotion_C; // 0x05F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_BoneDecoratedBottleMagicProtectionPotion(int32 EntryPoint);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BoneDecoratedBottleMagicProtectionPotion_C">();
	}
	static class ABP_BoneDecoratedBottleMagicProtectionPotion_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BoneDecoratedBottleMagicProtectionPotion_C>();
	}
};
static_assert(alignof(ABP_BoneDecoratedBottleMagicProtectionPotion_C) == 0x000008, "Wrong alignment on ABP_BoneDecoratedBottleMagicProtectionPotion_C");
static_assert(sizeof(ABP_BoneDecoratedBottleMagicProtectionPotion_C) == 0x0005F8, "Wrong size on ABP_BoneDecoratedBottleMagicProtectionPotion_C");
static_assert(offsetof(ABP_BoneDecoratedBottleMagicProtectionPotion_C, UberGraphFrame_BP_BoneDecoratedBottleMagicProtectionPotion_C) == 0x0005F0, "Member 'ABP_BoneDecoratedBottleMagicProtectionPotion_C::UberGraphFrame_BP_BoneDecoratedBottleMagicProtectionPotion_C' has a wrong offset!");

}

