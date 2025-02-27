#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Dreamfire

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_SpellCastingAndInstall_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Dreamfire.GA_Dreamfire_C
// 0x0010 (0x06F8 - 0x06E8)
class UGA_Dreamfire_C final : public UGA_SpellCastingAndInstall_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_Dreamfire_C;                     // 0x06E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         TargettedEnemiesCount;                             // 0x06F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Event_Installed_Ground();
	void ExecuteUbergraph_GA_Dreamfire(int32 EntryPoint);
	void HealAllies(TArray<class AActor*>& Allies);
	void HitEnemies(TArray<class AActor*>* Param_HitEnemies);
	void OnFinish_E7AB71B844E2F6A6471086BE68B2AA2C();
	void OnTargetActorOverlap_792B27E24A5707063D56D7B3963C6650(const TArray<class AActor*>& RadiusInActors);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Dreamfire_C">();
	}
	static class UGA_Dreamfire_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Dreamfire_C>();
	}
};
static_assert(alignof(UGA_Dreamfire_C) == 0x000008, "Wrong alignment on UGA_Dreamfire_C");
static_assert(sizeof(UGA_Dreamfire_C) == 0x0006F8, "Wrong size on UGA_Dreamfire_C");
static_assert(offsetof(UGA_Dreamfire_C, UberGraphFrame_GA_Dreamfire_C) == 0x0006E8, "Member 'UGA_Dreamfire_C::UberGraphFrame_GA_Dreamfire_C' has a wrong offset!");
static_assert(offsetof(UGA_Dreamfire_C, TargettedEnemiesCount) == 0x0006F0, "Member 'UGA_Dreamfire_C::TargettedEnemiesCount' has a wrong offset!");

}

