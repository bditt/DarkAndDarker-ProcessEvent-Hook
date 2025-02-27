#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DCMonsterBase

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "DungeonCrawler_structs.hpp"
#include "Engine_structs.hpp"
#include "AkAudio_structs.hpp"


namespace SDK::Params
{

// Function BP_DCMonsterBase.BP_DCMonsterBase_C.BndEvt__BP_DCMonsterBase_ItemRandomGenerate_K2Node_ComponentBoundEvent_0_ItemGenerationFinishedSignature__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct BP_DCMonsterBase_C_BndEvt__BP_DCMonsterBase_ItemRandomGenerate_K2Node_ComponentBoundEvent_0_ItemGenerationFinishedSignature__DelegateSignature final
{
public:
	TArray<struct FItemData>                      ResultItems;                                       // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(BP_DCMonsterBase_C_BndEvt__BP_DCMonsterBase_ItemRandomGenerate_K2Node_ComponentBoundEvent_0_ItemGenerationFinishedSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_DCMonsterBase_C_BndEvt__BP_DCMonsterBase_ItemRandomGenerate_K2Node_ComponentBoundEvent_0_ItemGenerationFinishedSignature__DelegateSignature");
static_assert(sizeof(BP_DCMonsterBase_C_BndEvt__BP_DCMonsterBase_ItemRandomGenerate_K2Node_ComponentBoundEvent_0_ItemGenerationFinishedSignature__DelegateSignature) == 0x000010, "Wrong size on BP_DCMonsterBase_C_BndEvt__BP_DCMonsterBase_ItemRandomGenerate_K2Node_ComponentBoundEvent_0_ItemGenerationFinishedSignature__DelegateSignature");
static_assert(offsetof(BP_DCMonsterBase_C_BndEvt__BP_DCMonsterBase_ItemRandomGenerate_K2Node_ComponentBoundEvent_0_ItemGenerationFinishedSignature__DelegateSignature, ResultItems) == 0x000000, "Member 'BP_DCMonsterBase_C_BndEvt__BP_DCMonsterBase_ItemRandomGenerate_K2Node_ComponentBoundEvent_0_ItemGenerationFinishedSignature__DelegateSignature::ResultItems' has a wrong offset!");

// Function BP_DCMonsterBase.BP_DCMonsterBase_C.EventFMsgSoundEvent
// 0x0028 (0x0028 - 0x0000)
struct BP_DCMonsterBase_C_EventFMsgSoundEvent final
{
public:
	struct FMsgSoundEvent                         Msg;                                               // 0x0000(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(BP_DCMonsterBase_C_EventFMsgSoundEvent) == 0x000008, "Wrong alignment on BP_DCMonsterBase_C_EventFMsgSoundEvent");
static_assert(sizeof(BP_DCMonsterBase_C_EventFMsgSoundEvent) == 0x000028, "Wrong size on BP_DCMonsterBase_C_EventFMsgSoundEvent");
static_assert(offsetof(BP_DCMonsterBase_C_EventFMsgSoundEvent, Msg) == 0x000000, "Member 'BP_DCMonsterBase_C_EventFMsgSoundEvent::Msg' has a wrong offset!");

// Function BP_DCMonsterBase.BP_DCMonsterBase_C.ExecuteUbergraph_BP_DCMonsterBase
// 0x02F0 (0x02F0 - 0x0000)
struct BP_DCMonsterBase_C_ExecuteUbergraph_BP_DCMonsterBase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_359A[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMsgBaseNode*                           K2Node_CustomEvent_ProxyObject;                    // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UMsgBaseNode* ProxyObject)> K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FMsgSoundEvent                         Temp_struct_Variable;                              // 0x0020(0x0028)()
	class UMsgBaseNode*                           Temp_object_Variable;                              // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_359B[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMsgSoundEvent                         K2Node_CustomEvent_Msg;                            // 0x0060(0x0028)()
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;   // 0x008A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_359C[0x5];                                     // 0x008B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FItemData>                      K2Node_ComponentBoundEvent_ResultItems;            // 0x0090(0x0010)(ReferenceParm)
	class AActor*                                 K2Node_Event_Interacter;                           // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           K2Node_Event_StateTag;                             // 0x00A8(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           K2Node_Event_TriggerTag;                           // 0x00B0(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_Event_HitResult;                            // 0x00B8(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_InitExpandableBox_ReturnValue;            // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess_1; // 0x01A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_359D[0x6];                                     // 0x01A2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ADCPlayerCharacterBase*                 K2Node_DynamicCast_AsDCPlayer_Character_Base;      // 0x01A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_359E[0x3];                                     // 0x01B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPrimaryAssetId                        CallFunc_Array_Get_Item;                           // 0x01B4(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x01C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDesignDataPropsInteract               CallFunc_GetDesignDataPropsInteract_ReturnValue;   // 0x01C8(0x00C0)()
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0288(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_359F[0x3];                                     // 0x0289(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable;                            // 0x028C(0x0010)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35A0[0x4];                                     // 0x029C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBaseInterface>        CallFunc_BindMsgNode_BaseInterface_CastInput;      // 0x02A0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UBindMsgNode*                           CallFunc_BindMsgNode_ReturnValue;                  // 0x02B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PostAkEvent_ReturnValue;                  // 0x02B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x02BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35A1[0x3];                                     // 0x02BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMsgSoundEvent                         Temp_struct_Variable_1;                            // 0x02C0(0x0028)()
	bool                                          CallFunc_GetPayload_ReturnValue;                   // 0x02E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DCMonsterBase_C_ExecuteUbergraph_BP_DCMonsterBase) == 0x000008, "Wrong alignment on BP_DCMonsterBase_C_ExecuteUbergraph_BP_DCMonsterBase");
static_assert(sizeof(BP_DCMonsterBase_C_ExecuteUbergraph_BP_DCMonsterBase) == 0x0002F0, "Wrong size on BP_DCMonsterBase_C_ExecuteUbergraph_BP_DCMonsterBase");
static_assert(offsetof(BP_DCMonsterBase_C_ExecuteUbergraph_BP_DCMonsterBase, EntryPoint) == 0x000000, "Member 'BP_DCMonsterBase_C_ExecuteUbergraph_BP_DCMonsterBase::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_DCMonsterBase_C_ExecuteUbergraph_BP_DCMonsterBase, K2Node_CustomEvent_ProxyObject) == 0x000008, "Member 'BP_DCMonsterBase_C_ExecuteUbergraph_BP_DCMonsterBase::K2Node_CustomEvent_ProxyObject' has a wrong offset!");
static_assert(offsetof(BP_DCMonsterBase_C_ExecuteUbergraph_BP_DCMonsterBase, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'BP_DCMonsterBase_C_ExecuteUbergraph_BP_DCMonsterBase::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_DCMonsterBase_C_ExecuteUbergraph_BP_DCMonsterBase, Temp_struct_Variable) == 0x000020, "Member 'BP_DCMonsterBase_C_ExecuteUbergraph_BP_DCMonsterBase::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(BP_DCMonsterBase_C_ExecuteUbergraph_BP_DCMonsterBase, Temp_object_Variable) == 0x000048, "Member 'BP_DCMonsterBase_C_ExecuteUbergraph_BP_DCMonsterBase::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BP_DCMonsterBase_C_ExecuteUbergraph_BP_DCMonsterBase, Temp_int_Array_Index_Variable) == 0x000050, "Member 'BP_DCMonsterBase_C_ExecuteUbergraph_BP_DCMonsterBase::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_DCMonsterBase_C_ExecuteUbergraph_BP_DCMonsterBase, Temp_int_Loop_Counter_Variable) == 0x000054, "Member 'BP_DCMonsterBase_C_ExecuteUbergraph_BP_DCMonsterBase::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_DCMonsterBase_C_ExecuteUbergraph_BP_DCMonsterBase, CallFunc_Add_IntInt_ReturnValue) == 0x000058, "Member 'BP_DCMonsterBase_C_ExecuteUbergraph_BP_DCMonsterBase::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DCMonsterBase_C_ExecuteUbergraph_BP_DCMonsterBase, K2Node_CustomEvent_Msg) == 0x000060, "Member 'BP_DCMonsterBase_C_ExecuteUbergraph_BP_DCMonsterBase::K2Node_CustomEvent_Msg' has a wrong offset!");
static_assert(offsetof(BP_DCMonsterBase_C_ExecuteUbergraph_BP_DCMonsterBase, CallFunc_HasAuthority_ReturnValue) == 0x000088, "Member 'BP_DCMonsterBase_C_ExecuteUbergraph_BP_DCMonsterBase::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DCMonsterBase_C_ExecuteUbergraph_BP_DCMonsterBase, CallFunc_IsValid_ReturnValue) == 0x000089, "Member 'BP_DCMonsterBase_C_ExecuteUbergraph_BP_DCMonsterBase::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DCMonsterBase_C_ExecuteUbergraph_BP_DCMonsterBase, GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess) == 0x00008A, "Member 'BP_DCMonsterBase_C_ExecuteUbergraph_BP_DCMonsterBase::GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_DCMonsterBase_C_ExecuteUbergraph_BP_DCMonsterBase, K2Node_ComponentBoundEvent_ResultItems) == 0x000090, "Member 'BP_DCMonsterBase_C_ExecuteUbergraph_BP_DCMonsterBase::K2Node_ComponentBoundEvent_ResultItems' has a wrong offset!");
static_assert(offsetof(BP_DCMonsterBase_C_ExecuteUbergraph_BP_DCMonsterBase, K2Node_Event_Interacter) == 0x0000A0, "Member 'BP_DCMonsterBase_C_ExecuteUbergraph_BP_DCMonsterBase::K2Node_Event_Interacter' has a wrong offset!");
static_assert(offsetof(BP_DCMonsterBase_C_ExecuteUbergraph_BP_DCMonsterBase, K2Node_Event_StateTag) == 0x0000A8, "Member 'BP_DCMonsterBase_C_ExecuteUbergraph_BP_DCMonsterBase::K2Node_Event_StateTag' has a wrong offset!");
static_assert(offsetof(BP_DCMonsterBase_C_ExecuteUbergraph_BP_DCMonsterBase, K2Node_Event_TriggerTag) == 0x0000B0, "Member 'BP_DCMonsterBase_C_ExecuteUbergraph_BP_DCMonsterBase::K2Node_Event_TriggerTag' has a wrong offset!");
static_assert(offsetof(BP_DCMonsterBase_C_ExecuteUbergraph_BP_DCMonsterBase, K2Node_Event_HitResult) == 0x0000B8, "Member 'BP_DCMonsterBase_C_ExecuteUbergraph_BP_DCMonsterBase::K2Node_Event_HitResult' has a wrong offset!");
static_assert(offsetof(BP_DCMonsterBase_C_ExecuteUbergraph_BP_DCMonsterBase, CallFunc_InitExpandableBox_ReturnValue) == 0x0001A0, "Member 'BP_DCMonsterBase_C_ExecuteUbergraph_BP_DCMonsterBase::CallFunc_InitExpandableBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DCMonsterBase_C_ExecuteUbergraph_BP_DCMonsterBase, GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess_1) == 0x0001A1, "Member 'BP_DCMonsterBase_C_ExecuteUbergraph_BP_DCMonsterBase::GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_DCMonsterBase_C_ExecuteUbergraph_BP_DCMonsterBase, K2Node_DynamicCast_AsDCPlayer_Character_Base) == 0x0001A8, "Member 'BP_DCMonsterBase_C_ExecuteUbergraph_BP_DCMonsterBase::K2Node_DynamicCast_AsDCPlayer_Character_Base' has a wrong offset!");
static_assert(offsetof(BP_DCMonsterBase_C_ExecuteUbergraph_BP_DCMonsterBase, K2Node_DynamicCast_bSuccess) == 0x0001B0, "Member 'BP_DCMonsterBase_C_ExecuteUbergraph_BP_DCMonsterBase::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_DCMonsterBase_C_ExecuteUbergraph_BP_DCMonsterBase, CallFunc_Array_Get_Item) == 0x0001B4, "Member 'BP_DCMonsterBase_C_ExecuteUbergraph_BP_DCMonsterBase::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_DCMonsterBase_C_ExecuteUbergraph_BP_DCMonsterBase, CallFunc_Array_Length_ReturnValue) == 0x0001C4, "Member 'BP_DCMonsterBase_C_ExecuteUbergraph_BP_DCMonsterBase::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DCMonsterBase_C_ExecuteUbergraph_BP_DCMonsterBase, CallFunc_GetDesignDataPropsInteract_ReturnValue) == 0x0001C8, "Member 'BP_DCMonsterBase_C_ExecuteUbergraph_BP_DCMonsterBase::CallFunc_GetDesignDataPropsInteract_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DCMonsterBase_C_ExecuteUbergraph_BP_DCMonsterBase, CallFunc_Less_IntInt_ReturnValue) == 0x000288, "Member 'BP_DCMonsterBase_C_ExecuteUbergraph_BP_DCMonsterBase::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DCMonsterBase_C_ExecuteUbergraph_BP_DCMonsterBase, Temp_delegate_Variable) == 0x00028C, "Member 'BP_DCMonsterBase_C_ExecuteUbergraph_BP_DCMonsterBase::Temp_delegate_Variable' has a wrong offset!");
static_assert(offsetof(BP_DCMonsterBase_C_ExecuteUbergraph_BP_DCMonsterBase, CallFunc_BindMsgNode_BaseInterface_CastInput) == 0x0002A0, "Member 'BP_DCMonsterBase_C_ExecuteUbergraph_BP_DCMonsterBase::CallFunc_BindMsgNode_BaseInterface_CastInput' has a wrong offset!");
static_assert(offsetof(BP_DCMonsterBase_C_ExecuteUbergraph_BP_DCMonsterBase, CallFunc_BindMsgNode_ReturnValue) == 0x0002B0, "Member 'BP_DCMonsterBase_C_ExecuteUbergraph_BP_DCMonsterBase::CallFunc_BindMsgNode_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DCMonsterBase_C_ExecuteUbergraph_BP_DCMonsterBase, CallFunc_PostAkEvent_ReturnValue) == 0x0002B8, "Member 'BP_DCMonsterBase_C_ExecuteUbergraph_BP_DCMonsterBase::CallFunc_PostAkEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DCMonsterBase_C_ExecuteUbergraph_BP_DCMonsterBase, CallFunc_IsValid_ReturnValue_1) == 0x0002BC, "Member 'BP_DCMonsterBase_C_ExecuteUbergraph_BP_DCMonsterBase::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DCMonsterBase_C_ExecuteUbergraph_BP_DCMonsterBase, Temp_struct_Variable_1) == 0x0002C0, "Member 'BP_DCMonsterBase_C_ExecuteUbergraph_BP_DCMonsterBase::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_DCMonsterBase_C_ExecuteUbergraph_BP_DCMonsterBase, CallFunc_GetPayload_ReturnValue) == 0x0002E8, "Member 'BP_DCMonsterBase_C_ExecuteUbergraph_BP_DCMonsterBase::CallFunc_GetPayload_ReturnValue' has a wrong offset!");

// Function BP_DCMonsterBase.BP_DCMonsterBase_C.InteractSucceed
// 0x0100 (0x0100 - 0x0000)
struct BP_DCMonsterBase_C_InteractSucceed final
{
public:
	class AActor*                                 Interacter;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           StateTag;                                          // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           TriggerTag;                                        // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             HitResult;                                         // 0x0018(0x00E8)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_DCMonsterBase_C_InteractSucceed) == 0x000008, "Wrong alignment on BP_DCMonsterBase_C_InteractSucceed");
static_assert(sizeof(BP_DCMonsterBase_C_InteractSucceed) == 0x000100, "Wrong size on BP_DCMonsterBase_C_InteractSucceed");
static_assert(offsetof(BP_DCMonsterBase_C_InteractSucceed, Interacter) == 0x000000, "Member 'BP_DCMonsterBase_C_InteractSucceed::Interacter' has a wrong offset!");
static_assert(offsetof(BP_DCMonsterBase_C_InteractSucceed, StateTag) == 0x000008, "Member 'BP_DCMonsterBase_C_InteractSucceed::StateTag' has a wrong offset!");
static_assert(offsetof(BP_DCMonsterBase_C_InteractSucceed, TriggerTag) == 0x000010, "Member 'BP_DCMonsterBase_C_InteractSucceed::TriggerTag' has a wrong offset!");
static_assert(offsetof(BP_DCMonsterBase_C_InteractSucceed, HitResult) == 0x000018, "Member 'BP_DCMonsterBase_C_InteractSucceed::HitResult' has a wrong offset!");

// Function BP_DCMonsterBase.BP_DCMonsterBase_C.OnMessageReceived_BD0C56DE4311A2D9C82D2C927A275C83
// 0x0008 (0x0008 - 0x0000)
struct BP_DCMonsterBase_C_OnMessageReceived_BD0C56DE4311A2D9C82D2C927A275C83 final
{
public:
	class UMsgBaseNode*                           ProxyObject;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DCMonsterBase_C_OnMessageReceived_BD0C56DE4311A2D9C82D2C927A275C83) == 0x000008, "Wrong alignment on BP_DCMonsterBase_C_OnMessageReceived_BD0C56DE4311A2D9C82D2C927A275C83");
static_assert(sizeof(BP_DCMonsterBase_C_OnMessageReceived_BD0C56DE4311A2D9C82D2C927A275C83) == 0x000008, "Wrong size on BP_DCMonsterBase_C_OnMessageReceived_BD0C56DE4311A2D9C82D2C927A275C83");
static_assert(offsetof(BP_DCMonsterBase_C_OnMessageReceived_BD0C56DE4311A2D9C82D2C927A275C83, ProxyObject) == 0x000000, "Member 'BP_DCMonsterBase_C_OnMessageReceived_BD0C56DE4311A2D9C82D2C927A275C83::ProxyObject' has a wrong offset!");

}

