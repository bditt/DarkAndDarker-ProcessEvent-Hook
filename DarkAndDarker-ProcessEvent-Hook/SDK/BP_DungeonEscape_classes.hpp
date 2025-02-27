#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DungeonEscape

#include "Basic.hpp"

#include "BP_DungeonExitBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_DungeonEscape.BP_DungeonEscape_C
// 0x0000 (0x0528 - 0x0528)
class ABP_DungeonEscape_C : public ABP_DungeonExitBase_C
{
public:
	void OnDungeonExitOverlapped(class ADCPlayerCharacterBase* PlayerCharacter, bool* bResult);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DungeonEscape_C">();
	}
	static class ABP_DungeonEscape_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_DungeonEscape_C>();
	}
};
static_assert(alignof(ABP_DungeonEscape_C) == 0x000008, "Wrong alignment on ABP_DungeonEscape_C");
static_assert(sizeof(ABP_DungeonEscape_C) == 0x000528, "Wrong size on ABP_DungeonEscape_C");

}

