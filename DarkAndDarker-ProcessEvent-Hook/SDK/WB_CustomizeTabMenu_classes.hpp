#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_CustomizeTabMenu

#include "Basic.hpp"

#include "DungeonCrawler_structs.hpp"
#include "DungeonCrawler_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_CustomizeTabMenu.WB_CustomizeTabMenu_C
// 0x0020 (0x0460 - 0x0440)
class UWB_CustomizeTabMenu_C final : public UDCTabListWidgetBase
{
public:
	class UWB_CustomizeTabBtn_C*                  CustomizeTab;                                      // 0x0440(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_CustomizeTabBtn_C*                  CustomizeTab_1;                                    // 0x0448(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_CustomizeTabBtn_C*                  CustomizeTab_2;                                    // 0x0450(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	EWidgetClassGroupType                         LastSelectedTap;                                   // 0x0458(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_CustomizeTabMenu_C">();
	}
	static class UWB_CustomizeTabMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_CustomizeTabMenu_C>();
	}
};
static_assert(alignof(UWB_CustomizeTabMenu_C) == 0x000008, "Wrong alignment on UWB_CustomizeTabMenu_C");
static_assert(sizeof(UWB_CustomizeTabMenu_C) == 0x000460, "Wrong size on UWB_CustomizeTabMenu_C");
static_assert(offsetof(UWB_CustomizeTabMenu_C, CustomizeTab) == 0x000440, "Member 'UWB_CustomizeTabMenu_C::CustomizeTab' has a wrong offset!");
static_assert(offsetof(UWB_CustomizeTabMenu_C, CustomizeTab_1) == 0x000448, "Member 'UWB_CustomizeTabMenu_C::CustomizeTab_1' has a wrong offset!");
static_assert(offsetof(UWB_CustomizeTabMenu_C, CustomizeTab_2) == 0x000450, "Member 'UWB_CustomizeTabMenu_C::CustomizeTab_2' has a wrong offset!");
static_assert(offsetof(UWB_CustomizeTabMenu_C, LastSelectedTap) == 0x000458, "Member 'UWB_CustomizeTabMenu_C::LastSelectedTap' has a wrong offset!");

}

