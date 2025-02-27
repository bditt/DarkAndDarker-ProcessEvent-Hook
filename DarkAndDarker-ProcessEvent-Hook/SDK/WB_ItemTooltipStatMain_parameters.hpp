#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_ItemTooltipStatMain

#include "Basic.hpp"


namespace SDK::Params
{

// Function WB_ItemTooltipStatMain.WB_ItemTooltipStatMain_C.OnListItemObjectSet
// 0x0008 (0x0008 - 0x0000)
struct WB_ItemTooltipStatMain_C_OnListItemObjectSet final
{
public:
	class UObject*                                ListItemObject;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_ItemTooltipStatMain_C_OnListItemObjectSet) == 0x000008, "Wrong alignment on WB_ItemTooltipStatMain_C_OnListItemObjectSet");
static_assert(sizeof(WB_ItemTooltipStatMain_C_OnListItemObjectSet) == 0x000008, "Wrong size on WB_ItemTooltipStatMain_C_OnListItemObjectSet");
static_assert(offsetof(WB_ItemTooltipStatMain_C_OnListItemObjectSet, ListItemObject) == 0x000000, "Member 'WB_ItemTooltipStatMain_C_OnListItemObjectSet::ListItemObject' has a wrong offset!");

// Function WB_ItemTooltipStatMain.WB_ItemTooltipStatMain_C.ExecuteUbergraph_WB_ItemTooltipStatMain
// 0x0050 (0x0050 - 0x0000)
struct WB_ItemTooltipStatMain_C_ExecuteUbergraph_WB_ItemTooltipStatMain final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E57[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E58[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_Event_ListItemObject;                       // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UItemTooltipStatWidgetData*             K2Node_DynamicCast_AsItem_Tooltip_Stat_Widget_Data; // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E59[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Array_Get_Item;                           // 0x0030(0x0018)()
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_ItemTooltipStatMain_C_ExecuteUbergraph_WB_ItemTooltipStatMain) == 0x000008, "Wrong alignment on WB_ItemTooltipStatMain_C_ExecuteUbergraph_WB_ItemTooltipStatMain");
static_assert(sizeof(WB_ItemTooltipStatMain_C_ExecuteUbergraph_WB_ItemTooltipStatMain) == 0x000050, "Wrong size on WB_ItemTooltipStatMain_C_ExecuteUbergraph_WB_ItemTooltipStatMain");
static_assert(offsetof(WB_ItemTooltipStatMain_C_ExecuteUbergraph_WB_ItemTooltipStatMain, EntryPoint) == 0x000000, "Member 'WB_ItemTooltipStatMain_C_ExecuteUbergraph_WB_ItemTooltipStatMain::EntryPoint' has a wrong offset!");
static_assert(offsetof(WB_ItemTooltipStatMain_C_ExecuteUbergraph_WB_ItemTooltipStatMain, Temp_int_Array_Index_Variable) == 0x000004, "Member 'WB_ItemTooltipStatMain_C_ExecuteUbergraph_WB_ItemTooltipStatMain::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WB_ItemTooltipStatMain_C_ExecuteUbergraph_WB_ItemTooltipStatMain, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'WB_ItemTooltipStatMain_C_ExecuteUbergraph_WB_ItemTooltipStatMain::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WB_ItemTooltipStatMain_C_ExecuteUbergraph_WB_ItemTooltipStatMain, K2Node_SwitchInteger_CmpSuccess) == 0x00000C, "Member 'WB_ItemTooltipStatMain_C_ExecuteUbergraph_WB_ItemTooltipStatMain::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WB_ItemTooltipStatMain_C_ExecuteUbergraph_WB_ItemTooltipStatMain, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'WB_ItemTooltipStatMain_C_ExecuteUbergraph_WB_ItemTooltipStatMain::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ItemTooltipStatMain_C_ExecuteUbergraph_WB_ItemTooltipStatMain, K2Node_Event_ListItemObject) == 0x000018, "Member 'WB_ItemTooltipStatMain_C_ExecuteUbergraph_WB_ItemTooltipStatMain::K2Node_Event_ListItemObject' has a wrong offset!");
static_assert(offsetof(WB_ItemTooltipStatMain_C_ExecuteUbergraph_WB_ItemTooltipStatMain, K2Node_DynamicCast_AsItem_Tooltip_Stat_Widget_Data) == 0x000020, "Member 'WB_ItemTooltipStatMain_C_ExecuteUbergraph_WB_ItemTooltipStatMain::K2Node_DynamicCast_AsItem_Tooltip_Stat_Widget_Data' has a wrong offset!");
static_assert(offsetof(WB_ItemTooltipStatMain_C_ExecuteUbergraph_WB_ItemTooltipStatMain, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'WB_ItemTooltipStatMain_C_ExecuteUbergraph_WB_ItemTooltipStatMain::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WB_ItemTooltipStatMain_C_ExecuteUbergraph_WB_ItemTooltipStatMain, CallFunc_Array_Length_ReturnValue) == 0x00002C, "Member 'WB_ItemTooltipStatMain_C_ExecuteUbergraph_WB_ItemTooltipStatMain::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ItemTooltipStatMain_C_ExecuteUbergraph_WB_ItemTooltipStatMain, CallFunc_Array_Get_Item) == 0x000030, "Member 'WB_ItemTooltipStatMain_C_ExecuteUbergraph_WB_ItemTooltipStatMain::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WB_ItemTooltipStatMain_C_ExecuteUbergraph_WB_ItemTooltipStatMain, CallFunc_Less_IntInt_ReturnValue) == 0x000048, "Member 'WB_ItemTooltipStatMain_C_ExecuteUbergraph_WB_ItemTooltipStatMain::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

}

