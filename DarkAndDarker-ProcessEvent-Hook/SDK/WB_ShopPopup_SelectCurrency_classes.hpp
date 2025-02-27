#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_ShopPopup_SelectCurrency

#include "Basic.hpp"

#include "DungeonCrawler_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_ShopPopup_SelectCurrency.WB_ShopPopup_SelectCurrency_C
// 0x0030 (0x0500 - 0x04D0)
class UWB_ShopPopup_SelectCurrency_C final : public UDCShopCurrencyTypeSelectPopupBase
{
public:
	class UHorizontalBox*                         Currency_Bluestone;                                // 0x04D0(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         Currency_Redstone;                                 // 0x04D8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_1;                                       // 0x04E0(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_143;                                     // 0x04E8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_CurrencyTypeSlot_C*                 WB_CurrencyTypeSlot;                               // 0x04F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_CurrencyTypeSlot_C*                 WB_CurrencyTypeSlot_1;                             // 0x04F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	ESlateVisibility Get_Currency_Redstone_Visibility();
	ESlateVisibility Get_Currency_Bluestone_Visibility();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_ShopPopup_SelectCurrency_C">();
	}
	static class UWB_ShopPopup_SelectCurrency_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_ShopPopup_SelectCurrency_C>();
	}
};
static_assert(alignof(UWB_ShopPopup_SelectCurrency_C) == 0x000008, "Wrong alignment on UWB_ShopPopup_SelectCurrency_C");
static_assert(sizeof(UWB_ShopPopup_SelectCurrency_C) == 0x000500, "Wrong size on UWB_ShopPopup_SelectCurrency_C");
static_assert(offsetof(UWB_ShopPopup_SelectCurrency_C, Currency_Bluestone) == 0x0004D0, "Member 'UWB_ShopPopup_SelectCurrency_C::Currency_Bluestone' has a wrong offset!");
static_assert(offsetof(UWB_ShopPopup_SelectCurrency_C, Currency_Redstone) == 0x0004D8, "Member 'UWB_ShopPopup_SelectCurrency_C::Currency_Redstone' has a wrong offset!");
static_assert(offsetof(UWB_ShopPopup_SelectCurrency_C, TextBlock_1) == 0x0004E0, "Member 'UWB_ShopPopup_SelectCurrency_C::TextBlock_1' has a wrong offset!");
static_assert(offsetof(UWB_ShopPopup_SelectCurrency_C, TextBlock_143) == 0x0004E8, "Member 'UWB_ShopPopup_SelectCurrency_C::TextBlock_143' has a wrong offset!");
static_assert(offsetof(UWB_ShopPopup_SelectCurrency_C, WB_CurrencyTypeSlot) == 0x0004F0, "Member 'UWB_ShopPopup_SelectCurrency_C::WB_CurrencyTypeSlot' has a wrong offset!");
static_assert(offsetof(UWB_ShopPopup_SelectCurrency_C, WB_CurrencyTypeSlot_1) == 0x0004F8, "Member 'UWB_ShopPopup_SelectCurrency_C::WB_CurrencyTypeSlot_1' has a wrong offset!");

}

