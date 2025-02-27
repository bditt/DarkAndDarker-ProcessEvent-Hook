#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_SmallGhost_Death

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_MonsterDeath_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_SmallGhost_Death.GA_SmallGhost_Death_C
// 0x0010 (0x0600 - 0x05F0)
class UGA_SmallGhost_Death_C final : public UGA_MonsterDeath_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_SmallGhost_Death_C;              // 0x05F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class ABP_DCMonsterBaseWithOptions_C*         As_BP_DCMonster_Base_With_Options;                 // 0x05F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void AbilityActivated(const struct FGameplayEventData& TriggerEventData);
	void EventReceived_905269414E38620A7B4BD9BD4DE20C6B(const struct FGameplayEventData& Payload);
	void ExecuteUbergraph_GA_SmallGhost_Death(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_SmallGhost_Death_C">();
	}
	static class UGA_SmallGhost_Death_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_SmallGhost_Death_C>();
	}
};
static_assert(alignof(UGA_SmallGhost_Death_C) == 0x000008, "Wrong alignment on UGA_SmallGhost_Death_C");
static_assert(sizeof(UGA_SmallGhost_Death_C) == 0x000600, "Wrong size on UGA_SmallGhost_Death_C");
static_assert(offsetof(UGA_SmallGhost_Death_C, UberGraphFrame_GA_SmallGhost_Death_C) == 0x0005F0, "Member 'UGA_SmallGhost_Death_C::UberGraphFrame_GA_SmallGhost_Death_C' has a wrong offset!");
static_assert(offsetof(UGA_SmallGhost_Death_C, As_BP_DCMonster_Base_With_Options) == 0x0005F8, "Member 'UGA_SmallGhost_Death_C::As_BP_DCMonster_Base_With_Options' has a wrong offset!");

}

