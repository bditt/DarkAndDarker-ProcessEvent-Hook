#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_LongswordBlockReaction

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_PlayerCharBlockReactionBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_LongswordBlockReaction.GA_LongswordBlockReaction_C
// 0x0008 (0x05F0 - 0x05E8)
class UGA_LongswordBlockReaction_C final : public UGA_PlayerCharBlockReactionBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_LongswordBlockReaction_C;        // 0x05E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_GA_LongswordBlockReaction(int32 EntryPoint);
	void InputActionCompleted_F37C73224C498F24B25B72863E97E15A();
	void InputActionStarted_F37C73224C498F24B25B72863E97E15A();
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_LongswordBlockReaction_C">();
	}
	static class UGA_LongswordBlockReaction_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_LongswordBlockReaction_C>();
	}
};
static_assert(alignof(UGA_LongswordBlockReaction_C) == 0x000008, "Wrong alignment on UGA_LongswordBlockReaction_C");
static_assert(sizeof(UGA_LongswordBlockReaction_C) == 0x0005F0, "Wrong size on UGA_LongswordBlockReaction_C");
static_assert(offsetof(UGA_LongswordBlockReaction_C, UberGraphFrame_GA_LongswordBlockReaction_C) == 0x0005E8, "Member 'UGA_LongswordBlockReaction_C::UberGraphFrame_GA_LongswordBlockReaction_C' has a wrong offset!");

}

