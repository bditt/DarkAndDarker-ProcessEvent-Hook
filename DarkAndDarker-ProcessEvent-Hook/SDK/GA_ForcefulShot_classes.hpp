#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_ForcefulShot

#include "Basic.hpp"

#include "GA_PlayerSkillInstantAndWaitForEnd_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_ForcefulShot.GA_ForcefulShot_C
// 0x0008 (0x06E8 - 0x06E0)
class UGA_ForcefulShot_C final : public UGA_PlayerSkillInstantAndWaitForEnd_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x06E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void AbilityActivated(const struct FGameplayEventData& TriggerEventData);
	void EventReceived_71BD8AA2429E3C9F1C2813B20526FB8E(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GA_ForcefulShot(int32 EntryPoint);
	void On_Launch_Character(class AActor* TargetActor, const struct FVector& HitDirection);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_ForcefulShot_C">();
	}
	static class UGA_ForcefulShot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_ForcefulShot_C>();
	}
};
static_assert(alignof(UGA_ForcefulShot_C) == 0x000008, "Wrong alignment on UGA_ForcefulShot_C");
static_assert(sizeof(UGA_ForcefulShot_C) == 0x0006E8, "Wrong size on UGA_ForcefulShot_C");
static_assert(offsetof(UGA_ForcefulShot_C, UberGraphFrame) == 0x0006E0, "Member 'UGA_ForcefulShot_C::UberGraphFrame' has a wrong offset!");

}

