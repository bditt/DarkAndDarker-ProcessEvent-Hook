#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LobbySelectCharacter

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "DungeonCrawler_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_LobbySelectCharacter.BP_LobbySelectCharacter_C
// 0x0010 (0x0920 - 0x0910)
class ABP_LobbySelectCharacter_C final : public ADCCharacterSelectCapture
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0910(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_LobbySelectCharacter(int32 EntryPoint);
	void CustomEvent(const class UAnimationAsset* ItemStandIdle, const struct FGameplayTag& ItemHandType, const struct FGameplayTag& ItemSlotType);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_LobbySelectCharacter_C">();
	}
	static class ABP_LobbySelectCharacter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_LobbySelectCharacter_C>();
	}
};
static_assert(alignof(ABP_LobbySelectCharacter_C) == 0x000010, "Wrong alignment on ABP_LobbySelectCharacter_C");
static_assert(sizeof(ABP_LobbySelectCharacter_C) == 0x000920, "Wrong size on ABP_LobbySelectCharacter_C");
static_assert(offsetof(ABP_LobbySelectCharacter_C, UberGraphFrame) == 0x000910, "Member 'ABP_LobbySelectCharacter_C::UberGraphFrame' has a wrong offset!");

}

