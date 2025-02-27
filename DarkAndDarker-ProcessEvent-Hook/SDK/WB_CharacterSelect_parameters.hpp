#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_CharacterSelect

#include "Basic.hpp"

#include "DungeonCrawler_structs.hpp"


namespace SDK::Params
{

// Function WB_CharacterSelect.WB_CharacterSelect_C.OnMessageReceived_DB58151943EC564859806EB851DC5E04
// 0x0008 (0x0008 - 0x0000)
struct WB_CharacterSelect_C_OnMessageReceived_DB58151943EC564859806EB851DC5E04 final
{
public:
	class UMsgBaseNode*                           ProxyObject;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_CharacterSelect_C_OnMessageReceived_DB58151943EC564859806EB851DC5E04) == 0x000008, "Wrong alignment on WB_CharacterSelect_C_OnMessageReceived_DB58151943EC564859806EB851DC5E04");
static_assert(sizeof(WB_CharacterSelect_C_OnMessageReceived_DB58151943EC564859806EB851DC5E04) == 0x000008, "Wrong size on WB_CharacterSelect_C_OnMessageReceived_DB58151943EC564859806EB851DC5E04");
static_assert(offsetof(WB_CharacterSelect_C_OnMessageReceived_DB58151943EC564859806EB851DC5E04, ProxyObject) == 0x000000, "Member 'WB_CharacterSelect_C_OnMessageReceived_DB58151943EC564859806EB851DC5E04::ProxyObject' has a wrong offset!");

// Function WB_CharacterSelect.WB_CharacterSelect_C.ExecuteUbergraph_WB_CharacterSelect
// 0x0170 (0x0170 - 0x0000)
struct WB_CharacterSelect_C_ExecuteUbergraph_WB_CharacterSelect final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4BF5[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMsgWidgetCreateCharacterErrorMessageNotify Temp_struct_Variable;                              // 0x0008(0x0030)()
	class UMsgBaseNode*                           K2Node_CustomEvent_ProxyObject;                    // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UMsgBaseNode* ProxyObject)> K2Node_CreateDelegate_OutputDelegate;              // 0x0040(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FMsgWidgetCreateCharacterErrorMessageNotify Temp_struct_Variable_1;                            // 0x0050(0x0030)()
	class UMsgBaseNode*                           Temp_object_Variable;                              // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetPayload_ReturnValue;                   // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4BF6[0x7];                                     // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMsgWidgetCreateCharacterErrorMessageNotify K2Node_CustomEvent_Msg;                            // 0x0090(0x0030)()
	class UClass*                                 CallFunc_GetObjectClass_ReturnValue;               // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x00C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPopupDataSWidget*                      CallFunc_MakePopupDataSWidget_ReturnValue;         // 0x00D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBaseInterface>        K2Node_DynamicCast_AsBase_Interface;               // 0x00D8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4BF7[0x7];                                     // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMsgWidgetPopupMessageRequest          CallFunc_MakePopupMessageReqeust_ReturnValue;      // 0x00F0(0x0038)()
	class UBindMsgNode*                           CallFunc_BindMsgNode_ReturnValue;                  // 0x0128(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0130(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBaseInterface>        K2Node_DynamicCast_AsBase_Interface_1;             // 0x0138(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0149(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4BF8[0x6];                                     // 0x014A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x0150(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_MetaPlayerController_C*             K2Node_DynamicCast_AsBP_Meta_Player_Controller;    // 0x0158(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4BF9[0x7];                                     // 0x0161(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue_1;            // 0x0168(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_CharacterSelect_C_ExecuteUbergraph_WB_CharacterSelect) == 0x000008, "Wrong alignment on WB_CharacterSelect_C_ExecuteUbergraph_WB_CharacterSelect");
static_assert(sizeof(WB_CharacterSelect_C_ExecuteUbergraph_WB_CharacterSelect) == 0x000170, "Wrong size on WB_CharacterSelect_C_ExecuteUbergraph_WB_CharacterSelect");
static_assert(offsetof(WB_CharacterSelect_C_ExecuteUbergraph_WB_CharacterSelect, EntryPoint) == 0x000000, "Member 'WB_CharacterSelect_C_ExecuteUbergraph_WB_CharacterSelect::EntryPoint' has a wrong offset!");
static_assert(offsetof(WB_CharacterSelect_C_ExecuteUbergraph_WB_CharacterSelect, Temp_struct_Variable) == 0x000008, "Member 'WB_CharacterSelect_C_ExecuteUbergraph_WB_CharacterSelect::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(WB_CharacterSelect_C_ExecuteUbergraph_WB_CharacterSelect, K2Node_CustomEvent_ProxyObject) == 0x000038, "Member 'WB_CharacterSelect_C_ExecuteUbergraph_WB_CharacterSelect::K2Node_CustomEvent_ProxyObject' has a wrong offset!");
static_assert(offsetof(WB_CharacterSelect_C_ExecuteUbergraph_WB_CharacterSelect, K2Node_CreateDelegate_OutputDelegate) == 0x000040, "Member 'WB_CharacterSelect_C_ExecuteUbergraph_WB_CharacterSelect::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WB_CharacterSelect_C_ExecuteUbergraph_WB_CharacterSelect, Temp_struct_Variable_1) == 0x000050, "Member 'WB_CharacterSelect_C_ExecuteUbergraph_WB_CharacterSelect::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(WB_CharacterSelect_C_ExecuteUbergraph_WB_CharacterSelect, Temp_object_Variable) == 0x000080, "Member 'WB_CharacterSelect_C_ExecuteUbergraph_WB_CharacterSelect::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(WB_CharacterSelect_C_ExecuteUbergraph_WB_CharacterSelect, CallFunc_GetPayload_ReturnValue) == 0x000088, "Member 'WB_CharacterSelect_C_ExecuteUbergraph_WB_CharacterSelect::CallFunc_GetPayload_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_CharacterSelect_C_ExecuteUbergraph_WB_CharacterSelect, K2Node_CustomEvent_Msg) == 0x000090, "Member 'WB_CharacterSelect_C_ExecuteUbergraph_WB_CharacterSelect::K2Node_CustomEvent_Msg' has a wrong offset!");
static_assert(offsetof(WB_CharacterSelect_C_ExecuteUbergraph_WB_CharacterSelect, CallFunc_GetObjectClass_ReturnValue) == 0x0000C0, "Member 'WB_CharacterSelect_C_ExecuteUbergraph_WB_CharacterSelect::CallFunc_GetObjectClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_CharacterSelect_C_ExecuteUbergraph_WB_CharacterSelect, CallFunc_GetOwningPlayer_ReturnValue) == 0x0000C8, "Member 'WB_CharacterSelect_C_ExecuteUbergraph_WB_CharacterSelect::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_CharacterSelect_C_ExecuteUbergraph_WB_CharacterSelect, CallFunc_MakePopupDataSWidget_ReturnValue) == 0x0000D0, "Member 'WB_CharacterSelect_C_ExecuteUbergraph_WB_CharacterSelect::CallFunc_MakePopupDataSWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_CharacterSelect_C_ExecuteUbergraph_WB_CharacterSelect, K2Node_DynamicCast_AsBase_Interface) == 0x0000D8, "Member 'WB_CharacterSelect_C_ExecuteUbergraph_WB_CharacterSelect::K2Node_DynamicCast_AsBase_Interface' has a wrong offset!");
static_assert(offsetof(WB_CharacterSelect_C_ExecuteUbergraph_WB_CharacterSelect, K2Node_DynamicCast_bSuccess) == 0x0000E8, "Member 'WB_CharacterSelect_C_ExecuteUbergraph_WB_CharacterSelect::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WB_CharacterSelect_C_ExecuteUbergraph_WB_CharacterSelect, CallFunc_MakePopupMessageReqeust_ReturnValue) == 0x0000F0, "Member 'WB_CharacterSelect_C_ExecuteUbergraph_WB_CharacterSelect::CallFunc_MakePopupMessageReqeust_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_CharacterSelect_C_ExecuteUbergraph_WB_CharacterSelect, CallFunc_BindMsgNode_ReturnValue) == 0x000128, "Member 'WB_CharacterSelect_C_ExecuteUbergraph_WB_CharacterSelect::CallFunc_BindMsgNode_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_CharacterSelect_C_ExecuteUbergraph_WB_CharacterSelect, CallFunc_GetPlayerController_ReturnValue) == 0x000130, "Member 'WB_CharacterSelect_C_ExecuteUbergraph_WB_CharacterSelect::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_CharacterSelect_C_ExecuteUbergraph_WB_CharacterSelect, K2Node_DynamicCast_AsBase_Interface_1) == 0x000138, "Member 'WB_CharacterSelect_C_ExecuteUbergraph_WB_CharacterSelect::K2Node_DynamicCast_AsBase_Interface_1' has a wrong offset!");
static_assert(offsetof(WB_CharacterSelect_C_ExecuteUbergraph_WB_CharacterSelect, K2Node_DynamicCast_bSuccess_1) == 0x000148, "Member 'WB_CharacterSelect_C_ExecuteUbergraph_WB_CharacterSelect::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WB_CharacterSelect_C_ExecuteUbergraph_WB_CharacterSelect, CallFunc_IsValid_ReturnValue) == 0x000149, "Member 'WB_CharacterSelect_C_ExecuteUbergraph_WB_CharacterSelect::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_CharacterSelect_C_ExecuteUbergraph_WB_CharacterSelect, CallFunc_GetPlayerController_ReturnValue_1) == 0x000150, "Member 'WB_CharacterSelect_C_ExecuteUbergraph_WB_CharacterSelect::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_CharacterSelect_C_ExecuteUbergraph_WB_CharacterSelect, K2Node_DynamicCast_AsBP_Meta_Player_Controller) == 0x000158, "Member 'WB_CharacterSelect_C_ExecuteUbergraph_WB_CharacterSelect::K2Node_DynamicCast_AsBP_Meta_Player_Controller' has a wrong offset!");
static_assert(offsetof(WB_CharacterSelect_C_ExecuteUbergraph_WB_CharacterSelect, K2Node_DynamicCast_bSuccess_2) == 0x000160, "Member 'WB_CharacterSelect_C_ExecuteUbergraph_WB_CharacterSelect::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(WB_CharacterSelect_C_ExecuteUbergraph_WB_CharacterSelect, CallFunc_GetOwningPlayer_ReturnValue_1) == 0x000168, "Member 'WB_CharacterSelect_C_ExecuteUbergraph_WB_CharacterSelect::CallFunc_GetOwningPlayer_ReturnValue_1' has a wrong offset!");

// Function WB_CharacterSelect.WB_CharacterSelect_C.EventFMsgWidgetCreateCharacterErrorMessageNotify
// 0x0030 (0x0030 - 0x0000)
struct WB_CharacterSelect_C_EventFMsgWidgetCreateCharacterErrorMessageNotify final
{
public:
	struct FMsgWidgetCreateCharacterErrorMessageNotify Msg;                                               // 0x0000(0x0030)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WB_CharacterSelect_C_EventFMsgWidgetCreateCharacterErrorMessageNotify) == 0x000008, "Wrong alignment on WB_CharacterSelect_C_EventFMsgWidgetCreateCharacterErrorMessageNotify");
static_assert(sizeof(WB_CharacterSelect_C_EventFMsgWidgetCreateCharacterErrorMessageNotify) == 0x000030, "Wrong size on WB_CharacterSelect_C_EventFMsgWidgetCreateCharacterErrorMessageNotify");
static_assert(offsetof(WB_CharacterSelect_C_EventFMsgWidgetCreateCharacterErrorMessageNotify, Msg) == 0x000000, "Member 'WB_CharacterSelect_C_EventFMsgWidgetCreateCharacterErrorMessageNotify::Msg' has a wrong offset!");

}

