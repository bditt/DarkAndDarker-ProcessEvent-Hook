#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_HazeBladePassive

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_MinorArtifactPassive_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_HazeBladePassive.GA_HazeBladePassive_C
// 0x0008 (0x05A8 - 0x05A0)
class UGA_HazeBladePassive_C final : public UGA_MinorArtifactPassive_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x05A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void EventReceived_34D934FA4FA4578DA7BE409456A12B87(const struct FGameplayEventData& Payload);
	void ExecuteUbergraph_GA_HazeBladePassive(int32 EntryPoint);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_HazeBladePassive_C">();
	}
	static class UGA_HazeBladePassive_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_HazeBladePassive_C>();
	}
};
static_assert(alignof(UGA_HazeBladePassive_C) == 0x000008, "Wrong alignment on UGA_HazeBladePassive_C");
static_assert(sizeof(UGA_HazeBladePassive_C) == 0x0005A8, "Wrong size on UGA_HazeBladePassive_C");
static_assert(offsetof(UGA_HazeBladePassive_C, UberGraphFrame) == 0x0005A0, "Member 'UGA_HazeBladePassive_C::UberGraphFrame' has a wrong offset!");

}

