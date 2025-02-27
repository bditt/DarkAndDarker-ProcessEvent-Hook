#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_MenuButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "DungeonCrawler_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_MenuButton.WB_MenuButton_C
// 0x0030 (0x1690 - 0x1660)
class UWB_MenuButton_C final : public UDCCommonButtonBase
{
public:
	uint8                                         Pad_3CBD[0x8];                                     // 0x1658(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x1660(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             Menu_Normal;                                       // 0x1668(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Menu_Selected;                                     // 0x1670(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Selected;                                          // 0x1678(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        Switcher_Selected;                                 // 0x1680(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WB_MenuButton(int32 EntryPoint);
	void Construct();
	void ButtonDeselected();
	void BP_OnDeselected();
	void BP_OnClicked();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_MenuButton_C">();
	}
	static class UWB_MenuButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_MenuButton_C>();
	}
};
static_assert(alignof(UWB_MenuButton_C) == 0x000010, "Wrong alignment on UWB_MenuButton_C");
static_assert(sizeof(UWB_MenuButton_C) == 0x001690, "Wrong size on UWB_MenuButton_C");
static_assert(offsetof(UWB_MenuButton_C, UberGraphFrame) == 0x001660, "Member 'UWB_MenuButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_MenuButton_C, Menu_Normal) == 0x001668, "Member 'UWB_MenuButton_C::Menu_Normal' has a wrong offset!");
static_assert(offsetof(UWB_MenuButton_C, Menu_Selected) == 0x001670, "Member 'UWB_MenuButton_C::Menu_Selected' has a wrong offset!");
static_assert(offsetof(UWB_MenuButton_C, Selected) == 0x001678, "Member 'UWB_MenuButton_C::Selected' has a wrong offset!");
static_assert(offsetof(UWB_MenuButton_C, Switcher_Selected) == 0x001680, "Member 'UWB_MenuButton_C::Switcher_Selected' has a wrong offset!");

}

