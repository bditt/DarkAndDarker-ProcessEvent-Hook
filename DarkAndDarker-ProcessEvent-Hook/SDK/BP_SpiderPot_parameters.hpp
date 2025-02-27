#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SpiderPot

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "DungeonCrawler_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_SpiderPot.BP_SpiderPot_C.ExecuteUbergraph_BP_SpiderPot
// 0x1440 (0x1440 - 0x0000)
struct BP_SpiderPot_C_ExecuteUbergraph_BP_SpiderPot final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4432[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameModeBase*                          CallFunc_GetGameMode_ReturnValue;                  // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ADCDungeonGameMode*                     K2Node_DynamicCast_AsDCDungeon_Game_Mode;          // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4433[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMsgBaseNode*                           Temp_object_Variable;                              // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FMsgGASActorDieNotify                  Temp_struct_Variable;                              // 0x0028(0x06E8)(ContainsInstancedReference)
	class UMsgBaseNode*                           K2Node_CustomEvent_ProxyObject;                    // 0x0710(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0718(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue_1;               // 0x0719(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4434[0x2];                                     // 0x071A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UMsgBaseNode* ProxyObject)> K2Node_CreateDelegate_OutputDelegate;              // 0x071C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue_2;               // 0x072C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4435[0x3];                                     // 0x072D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMsgGASActorDieNotify                  Temp_struct_Variable_1;                            // 0x0730(0x06E8)(ContainsInstancedReference)
	bool                                          CallFunc_GetPayload_ReturnValue;                   // 0x0E18(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4436[0x7];                                     // 0x0E19(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0E20(0x0060)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0E80(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4437[0x4];                                     // 0x0E84(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x0E88(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x0EA0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x0EB8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetForwardVector_ReturnValue;             // 0x0ED0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0EE8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0F00(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4438[0x8];                                     // 0x0F18(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0F20(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0F80(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_GameSpawner_C*                      CallFunc_FinishSpawningActor_ReturnValue;          // 0x0F88(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0F90(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4439[0x3];                                     // 0x0F91(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_ExhaustedTime;                        // 0x0F94(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class UGameplayEffect>            K2Node_Event_GameplayEffectClass;                  // 0x0F98(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FDCGameplayEffectContext               K2Node_Event_EffectContext;                        // 0x0FA0(0x0420)(ContainsInstancedReference)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x13C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RandomBool_ReturnValue;                   // 0x13C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_443A[0x3];                                     // 0x13C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x13C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_RandomFloatInRange_ReturnValue;           // 0x13D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x13D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_RandomFloatInRange_ReturnValue_1;         // 0x13E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADCMonsterBase*                         CallFunc_SpawnMonster_ReturnValue;                 // 0x13E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x13F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x13F4(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_443B[0x4];                                     // 0x1404(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x1408(0x0008)(NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBaseInterface>        CallFunc_BindMsgNode_BaseInterface_CastInput;      // 0x1410(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UBindMsgNode*                           CallFunc_BindMsgNode_ReturnValue;                  // 0x1420(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x1428(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_443C[0x7];                                     // 0x1429(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Add_DoubleDouble_A_ImplicitCast;          // 0x1430(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_VariableSet_Spawn_Interval_ImplicitCast;    // 0x1438(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SpiderPot_C_ExecuteUbergraph_BP_SpiderPot) == 0x000010, "Wrong alignment on BP_SpiderPot_C_ExecuteUbergraph_BP_SpiderPot");
static_assert(sizeof(BP_SpiderPot_C_ExecuteUbergraph_BP_SpiderPot) == 0x001440, "Wrong size on BP_SpiderPot_C_ExecuteUbergraph_BP_SpiderPot");
static_assert(offsetof(BP_SpiderPot_C_ExecuteUbergraph_BP_SpiderPot, EntryPoint) == 0x000000, "Member 'BP_SpiderPot_C_ExecuteUbergraph_BP_SpiderPot::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_SpiderPot_C_ExecuteUbergraph_BP_SpiderPot, CallFunc_GetGameMode_ReturnValue) == 0x000008, "Member 'BP_SpiderPot_C_ExecuteUbergraph_BP_SpiderPot::CallFunc_GetGameMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SpiderPot_C_ExecuteUbergraph_BP_SpiderPot, K2Node_DynamicCast_AsDCDungeon_Game_Mode) == 0x000010, "Member 'BP_SpiderPot_C_ExecuteUbergraph_BP_SpiderPot::K2Node_DynamicCast_AsDCDungeon_Game_Mode' has a wrong offset!");
static_assert(offsetof(BP_SpiderPot_C_ExecuteUbergraph_BP_SpiderPot, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_SpiderPot_C_ExecuteUbergraph_BP_SpiderPot::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_SpiderPot_C_ExecuteUbergraph_BP_SpiderPot, Temp_int_Variable) == 0x00001C, "Member 'BP_SpiderPot_C_ExecuteUbergraph_BP_SpiderPot::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_SpiderPot_C_ExecuteUbergraph_BP_SpiderPot, Temp_object_Variable) == 0x000020, "Member 'BP_SpiderPot_C_ExecuteUbergraph_BP_SpiderPot::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BP_SpiderPot_C_ExecuteUbergraph_BP_SpiderPot, Temp_struct_Variable) == 0x000028, "Member 'BP_SpiderPot_C_ExecuteUbergraph_BP_SpiderPot::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(BP_SpiderPot_C_ExecuteUbergraph_BP_SpiderPot, K2Node_CustomEvent_ProxyObject) == 0x000710, "Member 'BP_SpiderPot_C_ExecuteUbergraph_BP_SpiderPot::K2Node_CustomEvent_ProxyObject' has a wrong offset!");
static_assert(offsetof(BP_SpiderPot_C_ExecuteUbergraph_BP_SpiderPot, CallFunc_HasAuthority_ReturnValue) == 0x000718, "Member 'BP_SpiderPot_C_ExecuteUbergraph_BP_SpiderPot::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SpiderPot_C_ExecuteUbergraph_BP_SpiderPot, CallFunc_HasAuthority_ReturnValue_1) == 0x000719, "Member 'BP_SpiderPot_C_ExecuteUbergraph_BP_SpiderPot::CallFunc_HasAuthority_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SpiderPot_C_ExecuteUbergraph_BP_SpiderPot, K2Node_CreateDelegate_OutputDelegate) == 0x00071C, "Member 'BP_SpiderPot_C_ExecuteUbergraph_BP_SpiderPot::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_SpiderPot_C_ExecuteUbergraph_BP_SpiderPot, CallFunc_HasAuthority_ReturnValue_2) == 0x00072C, "Member 'BP_SpiderPot_C_ExecuteUbergraph_BP_SpiderPot::CallFunc_HasAuthority_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SpiderPot_C_ExecuteUbergraph_BP_SpiderPot, Temp_struct_Variable_1) == 0x000730, "Member 'BP_SpiderPot_C_ExecuteUbergraph_BP_SpiderPot::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_SpiderPot_C_ExecuteUbergraph_BP_SpiderPot, CallFunc_GetPayload_ReturnValue) == 0x000E18, "Member 'BP_SpiderPot_C_ExecuteUbergraph_BP_SpiderPot::CallFunc_GetPayload_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SpiderPot_C_ExecuteUbergraph_BP_SpiderPot, CallFunc_GetTransform_ReturnValue) == 0x000E20, "Member 'BP_SpiderPot_C_ExecuteUbergraph_BP_SpiderPot::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SpiderPot_C_ExecuteUbergraph_BP_SpiderPot, Temp_int_Variable_1) == 0x000E80, "Member 'BP_SpiderPot_C_ExecuteUbergraph_BP_SpiderPot::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_SpiderPot_C_ExecuteUbergraph_BP_SpiderPot, CallFunc_BreakTransform_Location) == 0x000E88, "Member 'BP_SpiderPot_C_ExecuteUbergraph_BP_SpiderPot::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(BP_SpiderPot_C_ExecuteUbergraph_BP_SpiderPot, CallFunc_BreakTransform_Rotation) == 0x000EA0, "Member 'BP_SpiderPot_C_ExecuteUbergraph_BP_SpiderPot::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(BP_SpiderPot_C_ExecuteUbergraph_BP_SpiderPot, CallFunc_BreakTransform_Scale) == 0x000EB8, "Member 'BP_SpiderPot_C_ExecuteUbergraph_BP_SpiderPot::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(BP_SpiderPot_C_ExecuteUbergraph_BP_SpiderPot, CallFunc_GetForwardVector_ReturnValue) == 0x000ED0, "Member 'BP_SpiderPot_C_ExecuteUbergraph_BP_SpiderPot::CallFunc_GetForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SpiderPot_C_ExecuteUbergraph_BP_SpiderPot, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000EE8, "Member 'BP_SpiderPot_C_ExecuteUbergraph_BP_SpiderPot::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SpiderPot_C_ExecuteUbergraph_BP_SpiderPot, CallFunc_Add_VectorVector_ReturnValue) == 0x000F00, "Member 'BP_SpiderPot_C_ExecuteUbergraph_BP_SpiderPot::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SpiderPot_C_ExecuteUbergraph_BP_SpiderPot, CallFunc_MakeTransform_ReturnValue) == 0x000F20, "Member 'BP_SpiderPot_C_ExecuteUbergraph_BP_SpiderPot::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SpiderPot_C_ExecuteUbergraph_BP_SpiderPot, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000F80, "Member 'BP_SpiderPot_C_ExecuteUbergraph_BP_SpiderPot::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SpiderPot_C_ExecuteUbergraph_BP_SpiderPot, CallFunc_FinishSpawningActor_ReturnValue) == 0x000F88, "Member 'BP_SpiderPot_C_ExecuteUbergraph_BP_SpiderPot::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SpiderPot_C_ExecuteUbergraph_BP_SpiderPot, CallFunc_Less_IntInt_ReturnValue) == 0x000F90, "Member 'BP_SpiderPot_C_ExecuteUbergraph_BP_SpiderPot::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SpiderPot_C_ExecuteUbergraph_BP_SpiderPot, K2Node_Event_ExhaustedTime) == 0x000F94, "Member 'BP_SpiderPot_C_ExecuteUbergraph_BP_SpiderPot::K2Node_Event_ExhaustedTime' has a wrong offset!");
static_assert(offsetof(BP_SpiderPot_C_ExecuteUbergraph_BP_SpiderPot, K2Node_Event_GameplayEffectClass) == 0x000F98, "Member 'BP_SpiderPot_C_ExecuteUbergraph_BP_SpiderPot::K2Node_Event_GameplayEffectClass' has a wrong offset!");
static_assert(offsetof(BP_SpiderPot_C_ExecuteUbergraph_BP_SpiderPot, K2Node_Event_EffectContext) == 0x000FA0, "Member 'BP_SpiderPot_C_ExecuteUbergraph_BP_SpiderPot::K2Node_Event_EffectContext' has a wrong offset!");
static_assert(offsetof(BP_SpiderPot_C_ExecuteUbergraph_BP_SpiderPot, CallFunc_Add_IntInt_ReturnValue) == 0x0013C0, "Member 'BP_SpiderPot_C_ExecuteUbergraph_BP_SpiderPot::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SpiderPot_C_ExecuteUbergraph_BP_SpiderPot, CallFunc_RandomBool_ReturnValue) == 0x0013C4, "Member 'BP_SpiderPot_C_ExecuteUbergraph_BP_SpiderPot::CallFunc_RandomBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SpiderPot_C_ExecuteUbergraph_BP_SpiderPot, CallFunc_Add_DoubleDouble_ReturnValue) == 0x0013C8, "Member 'BP_SpiderPot_C_ExecuteUbergraph_BP_SpiderPot::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SpiderPot_C_ExecuteUbergraph_BP_SpiderPot, CallFunc_RandomFloatInRange_ReturnValue) == 0x0013D0, "Member 'BP_SpiderPot_C_ExecuteUbergraph_BP_SpiderPot::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SpiderPot_C_ExecuteUbergraph_BP_SpiderPot, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x0013D8, "Member 'BP_SpiderPot_C_ExecuteUbergraph_BP_SpiderPot::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SpiderPot_C_ExecuteUbergraph_BP_SpiderPot, CallFunc_RandomFloatInRange_ReturnValue_1) == 0x0013E0, "Member 'BP_SpiderPot_C_ExecuteUbergraph_BP_SpiderPot::CallFunc_RandomFloatInRange_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SpiderPot_C_ExecuteUbergraph_BP_SpiderPot, CallFunc_SpawnMonster_ReturnValue) == 0x0013E8, "Member 'BP_SpiderPot_C_ExecuteUbergraph_BP_SpiderPot::CallFunc_SpawnMonster_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SpiderPot_C_ExecuteUbergraph_BP_SpiderPot, CallFunc_Subtract_IntInt_ReturnValue) == 0x0013F0, "Member 'BP_SpiderPot_C_ExecuteUbergraph_BP_SpiderPot::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SpiderPot_C_ExecuteUbergraph_BP_SpiderPot, K2Node_CreateDelegate_OutputDelegate_1) == 0x0013F4, "Member 'BP_SpiderPot_C_ExecuteUbergraph_BP_SpiderPot::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_SpiderPot_C_ExecuteUbergraph_BP_SpiderPot, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x001408, "Member 'BP_SpiderPot_C_ExecuteUbergraph_BP_SpiderPot::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SpiderPot_C_ExecuteUbergraph_BP_SpiderPot, CallFunc_BindMsgNode_BaseInterface_CastInput) == 0x001410, "Member 'BP_SpiderPot_C_ExecuteUbergraph_BP_SpiderPot::CallFunc_BindMsgNode_BaseInterface_CastInput' has a wrong offset!");
static_assert(offsetof(BP_SpiderPot_C_ExecuteUbergraph_BP_SpiderPot, CallFunc_BindMsgNode_ReturnValue) == 0x001420, "Member 'BP_SpiderPot_C_ExecuteUbergraph_BP_SpiderPot::CallFunc_BindMsgNode_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SpiderPot_C_ExecuteUbergraph_BP_SpiderPot, CallFunc_IsValid_ReturnValue) == 0x001428, "Member 'BP_SpiderPot_C_ExecuteUbergraph_BP_SpiderPot::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SpiderPot_C_ExecuteUbergraph_BP_SpiderPot, CallFunc_Add_DoubleDouble_A_ImplicitCast) == 0x001430, "Member 'BP_SpiderPot_C_ExecuteUbergraph_BP_SpiderPot::CallFunc_Add_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_SpiderPot_C_ExecuteUbergraph_BP_SpiderPot, K2Node_VariableSet_Spawn_Interval_ImplicitCast) == 0x001438, "Member 'BP_SpiderPot_C_ExecuteUbergraph_BP_SpiderPot::K2Node_VariableSet_Spawn_Interval_ImplicitCast' has a wrong offset!");

// Function BP_SpiderPot.BP_SpiderPot_C.OnImpactEnduranceExhausted
// 0x0430 (0x0430 - 0x0000)
struct BP_SpiderPot_C_OnImpactEnduranceExhausted final
{
public:
	float                                         ExhaustedTime;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_443D[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UGameplayEffect>            GameplayEffectClass;                               // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FDCGameplayEffectContext               EffectContext;                                     // 0x0010(0x0420)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
};
static_assert(alignof(BP_SpiderPot_C_OnImpactEnduranceExhausted) == 0x000008, "Wrong alignment on BP_SpiderPot_C_OnImpactEnduranceExhausted");
static_assert(sizeof(BP_SpiderPot_C_OnImpactEnduranceExhausted) == 0x000430, "Wrong size on BP_SpiderPot_C_OnImpactEnduranceExhausted");
static_assert(offsetof(BP_SpiderPot_C_OnImpactEnduranceExhausted, ExhaustedTime) == 0x000000, "Member 'BP_SpiderPot_C_OnImpactEnduranceExhausted::ExhaustedTime' has a wrong offset!");
static_assert(offsetof(BP_SpiderPot_C_OnImpactEnduranceExhausted, GameplayEffectClass) == 0x000008, "Member 'BP_SpiderPot_C_OnImpactEnduranceExhausted::GameplayEffectClass' has a wrong offset!");
static_assert(offsetof(BP_SpiderPot_C_OnImpactEnduranceExhausted, EffectContext) == 0x000010, "Member 'BP_SpiderPot_C_OnImpactEnduranceExhausted::EffectContext' has a wrong offset!");

// Function BP_SpiderPot.BP_SpiderPot_C.OnMessageReceived_72CC1EC34A59F6F630B6F4A7FF85942F
// 0x0008 (0x0008 - 0x0000)
struct BP_SpiderPot_C_OnMessageReceived_72CC1EC34A59F6F630B6F4A7FF85942F final
{
public:
	class UMsgBaseNode*                           ProxyObject;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SpiderPot_C_OnMessageReceived_72CC1EC34A59F6F630B6F4A7FF85942F) == 0x000008, "Wrong alignment on BP_SpiderPot_C_OnMessageReceived_72CC1EC34A59F6F630B6F4A7FF85942F");
static_assert(sizeof(BP_SpiderPot_C_OnMessageReceived_72CC1EC34A59F6F630B6F4A7FF85942F) == 0x000008, "Wrong size on BP_SpiderPot_C_OnMessageReceived_72CC1EC34A59F6F630B6F4A7FF85942F");
static_assert(offsetof(BP_SpiderPot_C_OnMessageReceived_72CC1EC34A59F6F630B6F4A7FF85942F, ProxyObject) == 0x000000, "Member 'BP_SpiderPot_C_OnMessageReceived_72CC1EC34A59F6F630B6F4A7FF85942F::ProxyObject' has a wrong offset!");

}

