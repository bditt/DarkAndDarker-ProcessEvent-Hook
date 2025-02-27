#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Lich_NormalAttack

#include "Basic.hpp"

#include "BP_ProjectileActor_classes.hpp"
#include "Engine_structs.hpp"
#include "AkAudio_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Lich_NormalAttack.BP_Lich_NormalAttack_C
// 0x0000 (0x0790 - 0x0790)
class ABP_Lich_NormalAttack_C final : public ABP_ProjectileActor_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_Lich_NormalAttack_C;             // 0x0788(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_Lich_NormalAttack(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Lich_NormalAttack_C">();
	}
	static class ABP_Lich_NormalAttack_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Lich_NormalAttack_C>();
	}
};
static_assert(alignof(ABP_Lich_NormalAttack_C) == 0x000010, "Wrong alignment on ABP_Lich_NormalAttack_C");
static_assert(sizeof(ABP_Lich_NormalAttack_C) == 0x000790, "Wrong size on ABP_Lich_NormalAttack_C");
static_assert(offsetof(ABP_Lich_NormalAttack_C, UberGraphFrame_BP_Lich_NormalAttack_C) == 0x000788, "Member 'ABP_Lich_NormalAttack_C::UberGraphFrame_BP_Lich_NormalAttack_C' has a wrong offset!");

}

