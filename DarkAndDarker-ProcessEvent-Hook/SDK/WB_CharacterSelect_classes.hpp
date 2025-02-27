#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_CharacterSelect

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "DungeonCrawler_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_CharacterSelect.WB_CharacterSelect_C
// 0x0040 (0x0398 - 0x0358)
class UWB_CharacterSelect_C final : public UDCWidgetBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0358(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWB_CharacterCreateGroupMain_C*         WB_CharacterCreateGroupMain;                       // 0x0360(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_CharacterSelectGroupMain_C*         WB_CharacterSelectGroupMain;                       // 0x0368(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_CharacterSelectGroupMenu_C*         WB_CharacterSelectMenu;                            // 0x0370(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Common_Popup_Manage_C*              WB_Common_Popup_Manage;                            // 0x0378(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_CommonPopup_S_C*                    WB_CommonPopup_S;                                  // 0x0380(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_GameSystemMessageGroup_C*           WB_GameSystemMessageGroup;                         // 0x0388(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_ShopPurchaseProcess_C*              WB_ShopPurchaseProcess;                            // 0x0390(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void OnMessageReceived_DB58151943EC564859806EB851DC5E04(class UMsgBaseNode* ProxyObject);
	void ExecuteUbergraph_WB_CharacterSelect(int32 EntryPoint);
	void EventFMsgWidgetCreateCharacterErrorMessageNotify(const struct FMsgWidgetCreateCharacterErrorMessageNotify& Msg);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_CharacterSelect_C">();
	}
	static class UWB_CharacterSelect_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_CharacterSelect_C>();
	}
};
static_assert(alignof(UWB_CharacterSelect_C) == 0x000008, "Wrong alignment on UWB_CharacterSelect_C");
static_assert(sizeof(UWB_CharacterSelect_C) == 0x000398, "Wrong size on UWB_CharacterSelect_C");
static_assert(offsetof(UWB_CharacterSelect_C, UberGraphFrame) == 0x000358, "Member 'UWB_CharacterSelect_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_CharacterSelect_C, WB_CharacterCreateGroupMain) == 0x000360, "Member 'UWB_CharacterSelect_C::WB_CharacterCreateGroupMain' has a wrong offset!");
static_assert(offsetof(UWB_CharacterSelect_C, WB_CharacterSelectGroupMain) == 0x000368, "Member 'UWB_CharacterSelect_C::WB_CharacterSelectGroupMain' has a wrong offset!");
static_assert(offsetof(UWB_CharacterSelect_C, WB_CharacterSelectMenu) == 0x000370, "Member 'UWB_CharacterSelect_C::WB_CharacterSelectMenu' has a wrong offset!");
static_assert(offsetof(UWB_CharacterSelect_C, WB_Common_Popup_Manage) == 0x000378, "Member 'UWB_CharacterSelect_C::WB_Common_Popup_Manage' has a wrong offset!");
static_assert(offsetof(UWB_CharacterSelect_C, WB_CommonPopup_S) == 0x000380, "Member 'UWB_CharacterSelect_C::WB_CommonPopup_S' has a wrong offset!");
static_assert(offsetof(UWB_CharacterSelect_C, WB_GameSystemMessageGroup) == 0x000388, "Member 'UWB_CharacterSelect_C::WB_GameSystemMessageGroup' has a wrong offset!");
static_assert(offsetof(UWB_CharacterSelect_C, WB_ShopPurchaseProcess) == 0x000390, "Member 'UWB_CharacterSelect_C::WB_ShopPurchaseProcess' has a wrong offset!");

}

