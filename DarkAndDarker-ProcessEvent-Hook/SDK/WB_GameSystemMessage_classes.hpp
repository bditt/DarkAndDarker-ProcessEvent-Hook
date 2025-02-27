#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_GameSystemMessage

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "DungeonCrawler_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_GameSystemMessage.WB_GameSystemMessage_C
// 0x0040 (0x0398 - 0x0358)
class UWB_GameSystemMessage_C final : public UDCWidgetBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0358(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Slide_Out;                                         // 0x0360(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Slide_In;                                          // 0x0368(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 BG_Gra;                                            // 0x0370(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         Line_Bot;                                          // 0x0378(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         Line_Top;                                          // 0x0380(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             SystemMessageText;                                 // 0x0388(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FTimerHandle                           MessageTimerHandle;                                // 0x0390(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ShowMessage(const class FText& Text, double Duration);
	void OnAnnounceEnd();
	void GetLocalizedString(const class FString& Text, const class FString& Namespace, const class FString& Key, class FString* LocalizedString);
	void ExecuteUbergraph_WB_GameSystemMessage(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_GameSystemMessage_C">();
	}
	static class UWB_GameSystemMessage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_GameSystemMessage_C>();
	}
};
static_assert(alignof(UWB_GameSystemMessage_C) == 0x000008, "Wrong alignment on UWB_GameSystemMessage_C");
static_assert(sizeof(UWB_GameSystemMessage_C) == 0x000398, "Wrong size on UWB_GameSystemMessage_C");
static_assert(offsetof(UWB_GameSystemMessage_C, UberGraphFrame) == 0x000358, "Member 'UWB_GameSystemMessage_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_GameSystemMessage_C, Slide_Out) == 0x000360, "Member 'UWB_GameSystemMessage_C::Slide_Out' has a wrong offset!");
static_assert(offsetof(UWB_GameSystemMessage_C, Slide_In) == 0x000368, "Member 'UWB_GameSystemMessage_C::Slide_In' has a wrong offset!");
static_assert(offsetof(UWB_GameSystemMessage_C, BG_Gra) == 0x000370, "Member 'UWB_GameSystemMessage_C::BG_Gra' has a wrong offset!");
static_assert(offsetof(UWB_GameSystemMessage_C, Line_Bot) == 0x000378, "Member 'UWB_GameSystemMessage_C::Line_Bot' has a wrong offset!");
static_assert(offsetof(UWB_GameSystemMessage_C, Line_Top) == 0x000380, "Member 'UWB_GameSystemMessage_C::Line_Top' has a wrong offset!");
static_assert(offsetof(UWB_GameSystemMessage_C, SystemMessageText) == 0x000388, "Member 'UWB_GameSystemMessage_C::SystemMessageText' has a wrong offset!");
static_assert(offsetof(UWB_GameSystemMessage_C, MessageTimerHandle) == 0x000390, "Member 'UWB_GameSystemMessage_C::MessageTimerHandle' has a wrong offset!");

}

