#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ItemActorWithQuiver_TEMP

#include "Basic.hpp"

#include "DungeonCrawler_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_ItemActorWithQuiver_TEMP.BP_ItemActorWithQuiver_TEMP_C.AmmoCountUpdated
// 0x0024 (0x0024 - 0x0000)
struct BP_ItemActorWithQuiver_TEMP_C_AmmoCountUpdated final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F38[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsBoneHiddenByName_ReturnValue;           // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsBoneHiddenByName_ReturnValue_1;         // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_DoesSocketExist_ReturnValue;              // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F39[0x1];                                     // 0x001B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ItemActorWithQuiver_TEMP_C_AmmoCountUpdated) == 0x000004, "Wrong alignment on BP_ItemActorWithQuiver_TEMP_C_AmmoCountUpdated");
static_assert(sizeof(BP_ItemActorWithQuiver_TEMP_C_AmmoCountUpdated) == 0x000024, "Wrong size on BP_ItemActorWithQuiver_TEMP_C_AmmoCountUpdated");
static_assert(offsetof(BP_ItemActorWithQuiver_TEMP_C_AmmoCountUpdated, Temp_int_Array_Index_Variable) == 0x000000, "Member 'BP_ItemActorWithQuiver_TEMP_C_AmmoCountUpdated::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_ItemActorWithQuiver_TEMP_C_AmmoCountUpdated, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'BP_ItemActorWithQuiver_TEMP_C_AmmoCountUpdated::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_ItemActorWithQuiver_TEMP_C_AmmoCountUpdated, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'BP_ItemActorWithQuiver_TEMP_C_AmmoCountUpdated::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ItemActorWithQuiver_TEMP_C_AmmoCountUpdated, CallFunc_Less_IntInt_ReturnValue) == 0x00000C, "Member 'BP_ItemActorWithQuiver_TEMP_C_AmmoCountUpdated::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ItemActorWithQuiver_TEMP_C_AmmoCountUpdated, CallFunc_Array_Get_Item) == 0x000010, "Member 'BP_ItemActorWithQuiver_TEMP_C_AmmoCountUpdated::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_ItemActorWithQuiver_TEMP_C_AmmoCountUpdated, CallFunc_IsBoneHiddenByName_ReturnValue) == 0x000018, "Member 'BP_ItemActorWithQuiver_TEMP_C_AmmoCountUpdated::CallFunc_IsBoneHiddenByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ItemActorWithQuiver_TEMP_C_AmmoCountUpdated, CallFunc_IsBoneHiddenByName_ReturnValue_1) == 0x000019, "Member 'BP_ItemActorWithQuiver_TEMP_C_AmmoCountUpdated::CallFunc_IsBoneHiddenByName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ItemActorWithQuiver_TEMP_C_AmmoCountUpdated, CallFunc_DoesSocketExist_ReturnValue) == 0x00001A, "Member 'BP_ItemActorWithQuiver_TEMP_C_AmmoCountUpdated::CallFunc_DoesSocketExist_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ItemActorWithQuiver_TEMP_C_AmmoCountUpdated, CallFunc_Array_Length_ReturnValue) == 0x00001C, "Member 'BP_ItemActorWithQuiver_TEMP_C_AmmoCountUpdated::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ItemActorWithQuiver_TEMP_C_AmmoCountUpdated, CallFunc_Less_IntInt_ReturnValue_1) == 0x000020, "Member 'BP_ItemActorWithQuiver_TEMP_C_AmmoCountUpdated::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");

// Function BP_ItemActorWithQuiver_TEMP.BP_ItemActorWithQuiver_TEMP_C.AttachQuiverMeshComponentToSocket
// 0x0038 (0x0038 - 0x0000)
struct BP_ItemActorWithQuiver_TEMP_C_AttachQuiverMeshComponentToSocket final
{
public:
	class FName                                   InSocketName;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F3A[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_GetAttachSocketName_ReturnValue;          // 0x000C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F3B[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAttachParentActor_ReturnValue;         // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F3C[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ADCPlayerCharacterBase*                 K2Node_DynamicCast_AsDCPlayer_Character_Base;      // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue;         // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ItemActorWithQuiver_TEMP_C_AttachQuiverMeshComponentToSocket) == 0x000008, "Wrong alignment on BP_ItemActorWithQuiver_TEMP_C_AttachQuiverMeshComponentToSocket");
static_assert(sizeof(BP_ItemActorWithQuiver_TEMP_C_AttachQuiverMeshComponentToSocket) == 0x000038, "Wrong size on BP_ItemActorWithQuiver_TEMP_C_AttachQuiverMeshComponentToSocket");
static_assert(offsetof(BP_ItemActorWithQuiver_TEMP_C_AttachQuiverMeshComponentToSocket, InSocketName) == 0x000000, "Member 'BP_ItemActorWithQuiver_TEMP_C_AttachQuiverMeshComponentToSocket::InSocketName' has a wrong offset!");
static_assert(offsetof(BP_ItemActorWithQuiver_TEMP_C_AttachQuiverMeshComponentToSocket, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'BP_ItemActorWithQuiver_TEMP_C_AttachQuiverMeshComponentToSocket::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ItemActorWithQuiver_TEMP_C_AttachQuiverMeshComponentToSocket, CallFunc_GetAttachSocketName_ReturnValue) == 0x00000C, "Member 'BP_ItemActorWithQuiver_TEMP_C_AttachQuiverMeshComponentToSocket::CallFunc_GetAttachSocketName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ItemActorWithQuiver_TEMP_C_AttachQuiverMeshComponentToSocket, CallFunc_NotEqual_NameName_ReturnValue) == 0x000014, "Member 'BP_ItemActorWithQuiver_TEMP_C_AttachQuiverMeshComponentToSocket::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ItemActorWithQuiver_TEMP_C_AttachQuiverMeshComponentToSocket, CallFunc_GetAttachParentActor_ReturnValue) == 0x000018, "Member 'BP_ItemActorWithQuiver_TEMP_C_AttachQuiverMeshComponentToSocket::CallFunc_GetAttachParentActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ItemActorWithQuiver_TEMP_C_AttachQuiverMeshComponentToSocket, CallFunc_IsValid_ReturnValue_1) == 0x000020, "Member 'BP_ItemActorWithQuiver_TEMP_C_AttachQuiverMeshComponentToSocket::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ItemActorWithQuiver_TEMP_C_AttachQuiverMeshComponentToSocket, K2Node_DynamicCast_AsDCPlayer_Character_Base) == 0x000028, "Member 'BP_ItemActorWithQuiver_TEMP_C_AttachQuiverMeshComponentToSocket::K2Node_DynamicCast_AsDCPlayer_Character_Base' has a wrong offset!");
static_assert(offsetof(BP_ItemActorWithQuiver_TEMP_C_AttachQuiverMeshComponentToSocket, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'BP_ItemActorWithQuiver_TEMP_C_AttachQuiverMeshComponentToSocket::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ItemActorWithQuiver_TEMP_C_AttachQuiverMeshComponentToSocket, CallFunc_K2_AttachToComponent_ReturnValue) == 0x000031, "Member 'BP_ItemActorWithQuiver_TEMP_C_AttachQuiverMeshComponentToSocket::CallFunc_K2_AttachToComponent_ReturnValue' has a wrong offset!");

// Function BP_ItemActorWithQuiver_TEMP.BP_ItemActorWithQuiver_TEMP_C.ExecuteUbergraph_BP_ItemActorWithQuiver_TEMP
// 0x0380 (0x0380 - 0x0000)
struct BP_ItemActorWithQuiver_TEMP_C_ExecuteUbergraph_BP_ItemActorWithQuiver_TEMP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F3D[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMsgBaseNode*                           K2Node_CustomEvent_ProxyObject;                    // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UMsgBaseNode* ProxyObject)> K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FMsgItemDataUpdateNotify               Temp_struct_Variable;                              // 0x0020(0x0118)()
	class UMsgBaseNode*                           Temp_object_Variable;                              // 0x0138(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue_1;               // 0x0141(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue_2;               // 0x0142(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue_3;               // 0x0143(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_ReduceCount;                          // 0x0144(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue_4;               // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F3E[0x3];                                     // 0x0149(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x014C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_GetAttachParentSocketName_ReturnValue;    // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMsgItemDataUpdateNotify               Temp_struct_Variable_1;                            // 0x0158(0x0118)()
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0270(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetPayload_ReturnValue;                   // 0x0271(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue_1;        // 0x0272(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue_2;        // 0x0273(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0274(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F3F[0x3];                                     // 0x0275(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetRelativeRotation_SweepHitResult;    // 0x0278(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	TScriptInterface<class IBaseInterface>        CallFunc_BindMsgNode_BaseInterface_CastInput;      // 0x0360(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UBindMsgNode*                           CallFunc_BindMsgNode_ReturnValue;                  // 0x0370(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0378(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ItemActorWithQuiver_TEMP_C_ExecuteUbergraph_BP_ItemActorWithQuiver_TEMP) == 0x000008, "Wrong alignment on BP_ItemActorWithQuiver_TEMP_C_ExecuteUbergraph_BP_ItemActorWithQuiver_TEMP");
static_assert(sizeof(BP_ItemActorWithQuiver_TEMP_C_ExecuteUbergraph_BP_ItemActorWithQuiver_TEMP) == 0x000380, "Wrong size on BP_ItemActorWithQuiver_TEMP_C_ExecuteUbergraph_BP_ItemActorWithQuiver_TEMP");
static_assert(offsetof(BP_ItemActorWithQuiver_TEMP_C_ExecuteUbergraph_BP_ItemActorWithQuiver_TEMP, EntryPoint) == 0x000000, "Member 'BP_ItemActorWithQuiver_TEMP_C_ExecuteUbergraph_BP_ItemActorWithQuiver_TEMP::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ItemActorWithQuiver_TEMP_C_ExecuteUbergraph_BP_ItemActorWithQuiver_TEMP, K2Node_CustomEvent_ProxyObject) == 0x000008, "Member 'BP_ItemActorWithQuiver_TEMP_C_ExecuteUbergraph_BP_ItemActorWithQuiver_TEMP::K2Node_CustomEvent_ProxyObject' has a wrong offset!");
static_assert(offsetof(BP_ItemActorWithQuiver_TEMP_C_ExecuteUbergraph_BP_ItemActorWithQuiver_TEMP, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'BP_ItemActorWithQuiver_TEMP_C_ExecuteUbergraph_BP_ItemActorWithQuiver_TEMP::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_ItemActorWithQuiver_TEMP_C_ExecuteUbergraph_BP_ItemActorWithQuiver_TEMP, Temp_struct_Variable) == 0x000020, "Member 'BP_ItemActorWithQuiver_TEMP_C_ExecuteUbergraph_BP_ItemActorWithQuiver_TEMP::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(BP_ItemActorWithQuiver_TEMP_C_ExecuteUbergraph_BP_ItemActorWithQuiver_TEMP, Temp_object_Variable) == 0x000138, "Member 'BP_ItemActorWithQuiver_TEMP_C_ExecuteUbergraph_BP_ItemActorWithQuiver_TEMP::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BP_ItemActorWithQuiver_TEMP_C_ExecuteUbergraph_BP_ItemActorWithQuiver_TEMP, CallFunc_HasAuthority_ReturnValue) == 0x000140, "Member 'BP_ItemActorWithQuiver_TEMP_C_ExecuteUbergraph_BP_ItemActorWithQuiver_TEMP::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ItemActorWithQuiver_TEMP_C_ExecuteUbergraph_BP_ItemActorWithQuiver_TEMP, CallFunc_HasAuthority_ReturnValue_1) == 0x000141, "Member 'BP_ItemActorWithQuiver_TEMP_C_ExecuteUbergraph_BP_ItemActorWithQuiver_TEMP::CallFunc_HasAuthority_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ItemActorWithQuiver_TEMP_C_ExecuteUbergraph_BP_ItemActorWithQuiver_TEMP, CallFunc_HasAuthority_ReturnValue_2) == 0x000142, "Member 'BP_ItemActorWithQuiver_TEMP_C_ExecuteUbergraph_BP_ItemActorWithQuiver_TEMP::CallFunc_HasAuthority_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ItemActorWithQuiver_TEMP_C_ExecuteUbergraph_BP_ItemActorWithQuiver_TEMP, CallFunc_HasAuthority_ReturnValue_3) == 0x000143, "Member 'BP_ItemActorWithQuiver_TEMP_C_ExecuteUbergraph_BP_ItemActorWithQuiver_TEMP::CallFunc_HasAuthority_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_ItemActorWithQuiver_TEMP_C_ExecuteUbergraph_BP_ItemActorWithQuiver_TEMP, K2Node_Event_ReduceCount) == 0x000144, "Member 'BP_ItemActorWithQuiver_TEMP_C_ExecuteUbergraph_BP_ItemActorWithQuiver_TEMP::K2Node_Event_ReduceCount' has a wrong offset!");
static_assert(offsetof(BP_ItemActorWithQuiver_TEMP_C_ExecuteUbergraph_BP_ItemActorWithQuiver_TEMP, CallFunc_HasAuthority_ReturnValue_4) == 0x000148, "Member 'BP_ItemActorWithQuiver_TEMP_C_ExecuteUbergraph_BP_ItemActorWithQuiver_TEMP::CallFunc_HasAuthority_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_ItemActorWithQuiver_TEMP_C_ExecuteUbergraph_BP_ItemActorWithQuiver_TEMP, CallFunc_Subtract_IntInt_ReturnValue) == 0x00014C, "Member 'BP_ItemActorWithQuiver_TEMP_C_ExecuteUbergraph_BP_ItemActorWithQuiver_TEMP::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ItemActorWithQuiver_TEMP_C_ExecuteUbergraph_BP_ItemActorWithQuiver_TEMP, CallFunc_GetAttachParentSocketName_ReturnValue) == 0x000150, "Member 'BP_ItemActorWithQuiver_TEMP_C_ExecuteUbergraph_BP_ItemActorWithQuiver_TEMP::CallFunc_GetAttachParentSocketName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ItemActorWithQuiver_TEMP_C_ExecuteUbergraph_BP_ItemActorWithQuiver_TEMP, Temp_struct_Variable_1) == 0x000158, "Member 'BP_ItemActorWithQuiver_TEMP_C_ExecuteUbergraph_BP_ItemActorWithQuiver_TEMP::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_ItemActorWithQuiver_TEMP_C_ExecuteUbergraph_BP_ItemActorWithQuiver_TEMP, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000270, "Member 'BP_ItemActorWithQuiver_TEMP_C_ExecuteUbergraph_BP_ItemActorWithQuiver_TEMP::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ItemActorWithQuiver_TEMP_C_ExecuteUbergraph_BP_ItemActorWithQuiver_TEMP, CallFunc_GetPayload_ReturnValue) == 0x000271, "Member 'BP_ItemActorWithQuiver_TEMP_C_ExecuteUbergraph_BP_ItemActorWithQuiver_TEMP::CallFunc_GetPayload_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ItemActorWithQuiver_TEMP_C_ExecuteUbergraph_BP_ItemActorWithQuiver_TEMP, CallFunc_EqualEqual_NameName_ReturnValue_1) == 0x000272, "Member 'BP_ItemActorWithQuiver_TEMP_C_ExecuteUbergraph_BP_ItemActorWithQuiver_TEMP::CallFunc_EqualEqual_NameName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ItemActorWithQuiver_TEMP_C_ExecuteUbergraph_BP_ItemActorWithQuiver_TEMP, CallFunc_EqualEqual_NameName_ReturnValue_2) == 0x000273, "Member 'BP_ItemActorWithQuiver_TEMP_C_ExecuteUbergraph_BP_ItemActorWithQuiver_TEMP::CallFunc_EqualEqual_NameName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ItemActorWithQuiver_TEMP_C_ExecuteUbergraph_BP_ItemActorWithQuiver_TEMP, CallFunc_BooleanOR_ReturnValue) == 0x000274, "Member 'BP_ItemActorWithQuiver_TEMP_C_ExecuteUbergraph_BP_ItemActorWithQuiver_TEMP::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ItemActorWithQuiver_TEMP_C_ExecuteUbergraph_BP_ItemActorWithQuiver_TEMP, CallFunc_K2_SetRelativeRotation_SweepHitResult) == 0x000278, "Member 'BP_ItemActorWithQuiver_TEMP_C_ExecuteUbergraph_BP_ItemActorWithQuiver_TEMP::CallFunc_K2_SetRelativeRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_ItemActorWithQuiver_TEMP_C_ExecuteUbergraph_BP_ItemActorWithQuiver_TEMP, CallFunc_BindMsgNode_BaseInterface_CastInput) == 0x000360, "Member 'BP_ItemActorWithQuiver_TEMP_C_ExecuteUbergraph_BP_ItemActorWithQuiver_TEMP::CallFunc_BindMsgNode_BaseInterface_CastInput' has a wrong offset!");
static_assert(offsetof(BP_ItemActorWithQuiver_TEMP_C_ExecuteUbergraph_BP_ItemActorWithQuiver_TEMP, CallFunc_BindMsgNode_ReturnValue) == 0x000370, "Member 'BP_ItemActorWithQuiver_TEMP_C_ExecuteUbergraph_BP_ItemActorWithQuiver_TEMP::CallFunc_BindMsgNode_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ItemActorWithQuiver_TEMP_C_ExecuteUbergraph_BP_ItemActorWithQuiver_TEMP, CallFunc_IsValid_ReturnValue) == 0x000378, "Member 'BP_ItemActorWithQuiver_TEMP_C_ExecuteUbergraph_BP_ItemActorWithQuiver_TEMP::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_ItemActorWithQuiver_TEMP.BP_ItemActorWithQuiver_TEMP_C.OnMessageReceived_1405972642FA7B590F2BD9AFA6734179
// 0x0008 (0x0008 - 0x0000)
struct BP_ItemActorWithQuiver_TEMP_C_OnMessageReceived_1405972642FA7B590F2BD9AFA6734179 final
{
public:
	class UMsgBaseNode*                           ProxyObject;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ItemActorWithQuiver_TEMP_C_OnMessageReceived_1405972642FA7B590F2BD9AFA6734179) == 0x000008, "Wrong alignment on BP_ItemActorWithQuiver_TEMP_C_OnMessageReceived_1405972642FA7B590F2BD9AFA6734179");
static_assert(sizeof(BP_ItemActorWithQuiver_TEMP_C_OnMessageReceived_1405972642FA7B590F2BD9AFA6734179) == 0x000008, "Wrong size on BP_ItemActorWithQuiver_TEMP_C_OnMessageReceived_1405972642FA7B590F2BD9AFA6734179");
static_assert(offsetof(BP_ItemActorWithQuiver_TEMP_C_OnMessageReceived_1405972642FA7B590F2BD9AFA6734179, ProxyObject) == 0x000000, "Member 'BP_ItemActorWithQuiver_TEMP_C_OnMessageReceived_1405972642FA7B590F2BD9AFA6734179::ProxyObject' has a wrong offset!");

// Function BP_ItemActorWithQuiver_TEMP.BP_ItemActorWithQuiver_TEMP_C.OnMontageFinished
// 0x0168 (0x0168 - 0x0000)
struct BP_ItemActorWithQuiver_TEMP_C_OnMontageFinished final
{
public:
	struct FDCItemInfo                            CallFunc_GetItemInfo_ReturnValue;                  // 0x0000(0x0168)(ConstParm, HasGetValueTypeHash)
};
static_assert(alignof(BP_ItemActorWithQuiver_TEMP_C_OnMontageFinished) == 0x000008, "Wrong alignment on BP_ItemActorWithQuiver_TEMP_C_OnMontageFinished");
static_assert(sizeof(BP_ItemActorWithQuiver_TEMP_C_OnMontageFinished) == 0x000168, "Wrong size on BP_ItemActorWithQuiver_TEMP_C_OnMontageFinished");
static_assert(offsetof(BP_ItemActorWithQuiver_TEMP_C_OnMontageFinished, CallFunc_GetItemInfo_ReturnValue) == 0x000000, "Member 'BP_ItemActorWithQuiver_TEMP_C_OnMontageFinished::CallFunc_GetItemInfo_ReturnValue' has a wrong offset!");

// Function BP_ItemActorWithQuiver_TEMP.BP_ItemActorWithQuiver_TEMP_C.PreReduceAmmoCount
// 0x0004 (0x0004 - 0x0000)
struct BP_ItemActorWithQuiver_TEMP_C_PreReduceAmmoCount final
{
public:
	int32                                         ReduceCount;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ItemActorWithQuiver_TEMP_C_PreReduceAmmoCount) == 0x000004, "Wrong alignment on BP_ItemActorWithQuiver_TEMP_C_PreReduceAmmoCount");
static_assert(sizeof(BP_ItemActorWithQuiver_TEMP_C_PreReduceAmmoCount) == 0x000004, "Wrong size on BP_ItemActorWithQuiver_TEMP_C_PreReduceAmmoCount");
static_assert(offsetof(BP_ItemActorWithQuiver_TEMP_C_PreReduceAmmoCount, ReduceCount) == 0x000000, "Member 'BP_ItemActorWithQuiver_TEMP_C_PreReduceAmmoCount::ReduceCount' has a wrong offset!");

}

