#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_DemonDog_ReturnDamage

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "Engine_structs.hpp"
#include "AkAudio_structs.hpp"


namespace SDK::Params
{

// Function GA_DemonDog_ReturnDamage.GA_DemonDog_ReturnDamage_C.AbilityActivated
// 0x00B0 (0x00B0 - 0x0000)
struct GA_DemonDog_ReturnDamage_C_AbilityActivated final
{
public:
	struct FGameplayEventData                     TriggerEventData;                                  // 0x0000(0x00B0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GA_DemonDog_ReturnDamage_C_AbilityActivated) == 0x000008, "Wrong alignment on GA_DemonDog_ReturnDamage_C_AbilityActivated");
static_assert(sizeof(GA_DemonDog_ReturnDamage_C_AbilityActivated) == 0x0000B0, "Wrong size on GA_DemonDog_ReturnDamage_C_AbilityActivated");
static_assert(offsetof(GA_DemonDog_ReturnDamage_C_AbilityActivated, TriggerEventData) == 0x000000, "Member 'GA_DemonDog_ReturnDamage_C_AbilityActivated::TriggerEventData' has a wrong offset!");

// Function GA_DemonDog_ReturnDamage.GA_DemonDog_ReturnDamage_C.EventReceived_7AD18C924EBF9EFF077702863DB5AE57
// 0x00B8 (0x00B8 - 0x0000)
struct GA_DemonDog_ReturnDamage_C_EventReceived_7AD18C924EBF9EFF077702863DB5AE57 final
{
public:
	struct FGameplayTag                           EventTag;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     EventData;                                         // 0x0008(0x00B0)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GA_DemonDog_ReturnDamage_C_EventReceived_7AD18C924EBF9EFF077702863DB5AE57) == 0x000008, "Wrong alignment on GA_DemonDog_ReturnDamage_C_EventReceived_7AD18C924EBF9EFF077702863DB5AE57");
static_assert(sizeof(GA_DemonDog_ReturnDamage_C_EventReceived_7AD18C924EBF9EFF077702863DB5AE57) == 0x0000B8, "Wrong size on GA_DemonDog_ReturnDamage_C_EventReceived_7AD18C924EBF9EFF077702863DB5AE57");
static_assert(offsetof(GA_DemonDog_ReturnDamage_C_EventReceived_7AD18C924EBF9EFF077702863DB5AE57, EventTag) == 0x000000, "Member 'GA_DemonDog_ReturnDamage_C_EventReceived_7AD18C924EBF9EFF077702863DB5AE57::EventTag' has a wrong offset!");
static_assert(offsetof(GA_DemonDog_ReturnDamage_C_EventReceived_7AD18C924EBF9EFF077702863DB5AE57, EventData) == 0x000008, "Member 'GA_DemonDog_ReturnDamage_C_EventReceived_7AD18C924EBF9EFF077702863DB5AE57::EventData' has a wrong offset!");

// Function GA_DemonDog_ReturnDamage.GA_DemonDog_ReturnDamage_C.ExecuteUbergraph_GA_DemonDog_ReturnDamage
// 0x07B0 (0x07B0 - 0x0000)
struct GA_DemonDog_ReturnDamage_C_ExecuteUbergraph_GA_DemonDog_ReturnDamage final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           K2Node_CustomEvent_EventTag;                       // 0x0004(0x0008)(NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3818[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_CustomEvent_EventData;                      // 0x0010(0x00B0)()
	TDelegate<void(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)> K2Node_CreateDelegate_OutputDelegate;              // 0x00C0(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     Temp_struct_Variable;                              // 0x00D0(0x00B0)()
	struct FGameplayTag                           Temp_struct_Variable_1;                            // 0x0180(0x0008)(NoDestructor, HasGetValueTypeHash)
	class UDCAT_WaitForGameplayEvents*            CallFunc_WaitForGameplayEvents_ReturnValue;        // 0x0188(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_EffectContextGetHitResult_ReturnValue;    // 0x0190(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x0278(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x0279(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3819[0x2];                                     // 0x027A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x027C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x0280(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_381A[0x4];                                     // 0x0284(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x0288(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x02A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x02B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x02D0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x02E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x02F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x02F8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0300(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_BoneName;                  // 0x0308(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0310(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x0314(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x0318(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_381B[0x4];                                     // 0x031C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x0320(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x0338(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0350(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_381C[0x7];                                     // 0x0351(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_MakeStruct_GameplayEventData;               // 0x0358(0x00B0)()
	TArray<struct FActiveGameplayEffectHandle>    CallFunc_ApplyEffectContainer_ReturnValue;         // 0x0408(0x0010)(ReferenceParm)
	class AProjectileActor*                       K2Node_DynamicCast_AsProjectile_Actor;             // 0x0418(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0420(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_381D[0x3];                                     // 0x0421(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0424(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_381E[0x4];                                     // 0x0434(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_MakeStruct_GameplayEventData_1;             // 0x0438(0x00B0)()
	TArray<struct FActiveGameplayEffectHandle>    CallFunc_ApplyEffectContainer_ReturnValue_1;       // 0x04E8(0x0010)(ReferenceParm)
	class UAbilityTask_WaitGameplayTagAdded*      CallFunc_WaitGameplayTagAdd_ReturnValue;           // 0x04F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable;                            // 0x0500(0x0010)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PostEvent_ReturnValue;                    // 0x0510(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0514(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_381F[0x3];                                     // 0x0515(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable_1;                          // 0x0518(0x0010)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PostEvent_ReturnValue_1;                  // 0x0528(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3820[0x4];                                     // 0x052C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x0530(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_DemonDog_Nightmare_C*               K2Node_DynamicCast_AsBP_Demon_Dog_Nightmare;       // 0x0538(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0540(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3821[0x7];                                     // 0x0541(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayCueParameters                 CallFunc_MakeGameplayCueParameters_ReturnValue;    // 0x0548(0x00D8)(ContainsInstancedReference)
	struct FGameplayCueParameters                 CallFunc_MakeGameplayCueParameters_ReturnValue_1;  // 0x0620(0x00D8)(ContainsInstancedReference)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x06F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3822[0x7];                                     // 0x06F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_Event_TriggerEventData;                     // 0x0700(0x00B0)(ConstParm)
};
static_assert(alignof(GA_DemonDog_ReturnDamage_C_ExecuteUbergraph_GA_DemonDog_ReturnDamage) == 0x000008, "Wrong alignment on GA_DemonDog_ReturnDamage_C_ExecuteUbergraph_GA_DemonDog_ReturnDamage");
static_assert(sizeof(GA_DemonDog_ReturnDamage_C_ExecuteUbergraph_GA_DemonDog_ReturnDamage) == 0x0007B0, "Wrong size on GA_DemonDog_ReturnDamage_C_ExecuteUbergraph_GA_DemonDog_ReturnDamage");
static_assert(offsetof(GA_DemonDog_ReturnDamage_C_ExecuteUbergraph_GA_DemonDog_ReturnDamage, EntryPoint) == 0x000000, "Member 'GA_DemonDog_ReturnDamage_C_ExecuteUbergraph_GA_DemonDog_ReturnDamage::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_DemonDog_ReturnDamage_C_ExecuteUbergraph_GA_DemonDog_ReturnDamage, K2Node_CustomEvent_EventTag) == 0x000004, "Member 'GA_DemonDog_ReturnDamage_C_ExecuteUbergraph_GA_DemonDog_ReturnDamage::K2Node_CustomEvent_EventTag' has a wrong offset!");
static_assert(offsetof(GA_DemonDog_ReturnDamage_C_ExecuteUbergraph_GA_DemonDog_ReturnDamage, K2Node_CustomEvent_EventData) == 0x000010, "Member 'GA_DemonDog_ReturnDamage_C_ExecuteUbergraph_GA_DemonDog_ReturnDamage::K2Node_CustomEvent_EventData' has a wrong offset!");
static_assert(offsetof(GA_DemonDog_ReturnDamage_C_ExecuteUbergraph_GA_DemonDog_ReturnDamage, K2Node_CreateDelegate_OutputDelegate) == 0x0000C0, "Member 'GA_DemonDog_ReturnDamage_C_ExecuteUbergraph_GA_DemonDog_ReturnDamage::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_DemonDog_ReturnDamage_C_ExecuteUbergraph_GA_DemonDog_ReturnDamage, Temp_struct_Variable) == 0x0000D0, "Member 'GA_DemonDog_ReturnDamage_C_ExecuteUbergraph_GA_DemonDog_ReturnDamage::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GA_DemonDog_ReturnDamage_C_ExecuteUbergraph_GA_DemonDog_ReturnDamage, Temp_struct_Variable_1) == 0x000180, "Member 'GA_DemonDog_ReturnDamage_C_ExecuteUbergraph_GA_DemonDog_ReturnDamage::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(GA_DemonDog_ReturnDamage_C_ExecuteUbergraph_GA_DemonDog_ReturnDamage, CallFunc_WaitForGameplayEvents_ReturnValue) == 0x000188, "Member 'GA_DemonDog_ReturnDamage_C_ExecuteUbergraph_GA_DemonDog_ReturnDamage::CallFunc_WaitForGameplayEvents_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_DemonDog_ReturnDamage_C_ExecuteUbergraph_GA_DemonDog_ReturnDamage, CallFunc_EffectContextGetHitResult_ReturnValue) == 0x000190, "Member 'GA_DemonDog_ReturnDamage_C_ExecuteUbergraph_GA_DemonDog_ReturnDamage::CallFunc_EffectContextGetHitResult_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_DemonDog_ReturnDamage_C_ExecuteUbergraph_GA_DemonDog_ReturnDamage, CallFunc_BreakHitResult_bBlockingHit) == 0x000278, "Member 'GA_DemonDog_ReturnDamage_C_ExecuteUbergraph_GA_DemonDog_ReturnDamage::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(GA_DemonDog_ReturnDamage_C_ExecuteUbergraph_GA_DemonDog_ReturnDamage, CallFunc_BreakHitResult_bInitialOverlap) == 0x000279, "Member 'GA_DemonDog_ReturnDamage_C_ExecuteUbergraph_GA_DemonDog_ReturnDamage::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(GA_DemonDog_ReturnDamage_C_ExecuteUbergraph_GA_DemonDog_ReturnDamage, CallFunc_BreakHitResult_Time) == 0x00027C, "Member 'GA_DemonDog_ReturnDamage_C_ExecuteUbergraph_GA_DemonDog_ReturnDamage::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(GA_DemonDog_ReturnDamage_C_ExecuteUbergraph_GA_DemonDog_ReturnDamage, CallFunc_BreakHitResult_Distance) == 0x000280, "Member 'GA_DemonDog_ReturnDamage_C_ExecuteUbergraph_GA_DemonDog_ReturnDamage::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(GA_DemonDog_ReturnDamage_C_ExecuteUbergraph_GA_DemonDog_ReturnDamage, CallFunc_BreakHitResult_Location) == 0x000288, "Member 'GA_DemonDog_ReturnDamage_C_ExecuteUbergraph_GA_DemonDog_ReturnDamage::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(GA_DemonDog_ReturnDamage_C_ExecuteUbergraph_GA_DemonDog_ReturnDamage, CallFunc_BreakHitResult_ImpactPoint) == 0x0002A0, "Member 'GA_DemonDog_ReturnDamage_C_ExecuteUbergraph_GA_DemonDog_ReturnDamage::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(GA_DemonDog_ReturnDamage_C_ExecuteUbergraph_GA_DemonDog_ReturnDamage, CallFunc_BreakHitResult_Normal) == 0x0002B8, "Member 'GA_DemonDog_ReturnDamage_C_ExecuteUbergraph_GA_DemonDog_ReturnDamage::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(GA_DemonDog_ReturnDamage_C_ExecuteUbergraph_GA_DemonDog_ReturnDamage, CallFunc_BreakHitResult_ImpactNormal) == 0x0002D0, "Member 'GA_DemonDog_ReturnDamage_C_ExecuteUbergraph_GA_DemonDog_ReturnDamage::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(GA_DemonDog_ReturnDamage_C_ExecuteUbergraph_GA_DemonDog_ReturnDamage, CallFunc_BreakHitResult_PhysMat) == 0x0002E8, "Member 'GA_DemonDog_ReturnDamage_C_ExecuteUbergraph_GA_DemonDog_ReturnDamage::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(GA_DemonDog_ReturnDamage_C_ExecuteUbergraph_GA_DemonDog_ReturnDamage, CallFunc_BreakHitResult_HitActor) == 0x0002F0, "Member 'GA_DemonDog_ReturnDamage_C_ExecuteUbergraph_GA_DemonDog_ReturnDamage::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(GA_DemonDog_ReturnDamage_C_ExecuteUbergraph_GA_DemonDog_ReturnDamage, CallFunc_BreakHitResult_HitComponent) == 0x0002F8, "Member 'GA_DemonDog_ReturnDamage_C_ExecuteUbergraph_GA_DemonDog_ReturnDamage::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(GA_DemonDog_ReturnDamage_C_ExecuteUbergraph_GA_DemonDog_ReturnDamage, CallFunc_BreakHitResult_HitBoneName) == 0x000300, "Member 'GA_DemonDog_ReturnDamage_C_ExecuteUbergraph_GA_DemonDog_ReturnDamage::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(GA_DemonDog_ReturnDamage_C_ExecuteUbergraph_GA_DemonDog_ReturnDamage, CallFunc_BreakHitResult_BoneName) == 0x000308, "Member 'GA_DemonDog_ReturnDamage_C_ExecuteUbergraph_GA_DemonDog_ReturnDamage::CallFunc_BreakHitResult_BoneName' has a wrong offset!");
static_assert(offsetof(GA_DemonDog_ReturnDamage_C_ExecuteUbergraph_GA_DemonDog_ReturnDamage, CallFunc_BreakHitResult_HitItem) == 0x000310, "Member 'GA_DemonDog_ReturnDamage_C_ExecuteUbergraph_GA_DemonDog_ReturnDamage::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(GA_DemonDog_ReturnDamage_C_ExecuteUbergraph_GA_DemonDog_ReturnDamage, CallFunc_BreakHitResult_ElementIndex) == 0x000314, "Member 'GA_DemonDog_ReturnDamage_C_ExecuteUbergraph_GA_DemonDog_ReturnDamage::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(GA_DemonDog_ReturnDamage_C_ExecuteUbergraph_GA_DemonDog_ReturnDamage, CallFunc_BreakHitResult_FaceIndex) == 0x000318, "Member 'GA_DemonDog_ReturnDamage_C_ExecuteUbergraph_GA_DemonDog_ReturnDamage::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(GA_DemonDog_ReturnDamage_C_ExecuteUbergraph_GA_DemonDog_ReturnDamage, CallFunc_BreakHitResult_TraceStart) == 0x000320, "Member 'GA_DemonDog_ReturnDamage_C_ExecuteUbergraph_GA_DemonDog_ReturnDamage::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(GA_DemonDog_ReturnDamage_C_ExecuteUbergraph_GA_DemonDog_ReturnDamage, CallFunc_BreakHitResult_TraceEnd) == 0x000338, "Member 'GA_DemonDog_ReturnDamage_C_ExecuteUbergraph_GA_DemonDog_ReturnDamage::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(GA_DemonDog_ReturnDamage_C_ExecuteUbergraph_GA_DemonDog_ReturnDamage, CallFunc_IsValid_ReturnValue) == 0x000350, "Member 'GA_DemonDog_ReturnDamage_C_ExecuteUbergraph_GA_DemonDog_ReturnDamage::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_DemonDog_ReturnDamage_C_ExecuteUbergraph_GA_DemonDog_ReturnDamage, K2Node_MakeStruct_GameplayEventData) == 0x000358, "Member 'GA_DemonDog_ReturnDamage_C_ExecuteUbergraph_GA_DemonDog_ReturnDamage::K2Node_MakeStruct_GameplayEventData' has a wrong offset!");
static_assert(offsetof(GA_DemonDog_ReturnDamage_C_ExecuteUbergraph_GA_DemonDog_ReturnDamage, CallFunc_ApplyEffectContainer_ReturnValue) == 0x000408, "Member 'GA_DemonDog_ReturnDamage_C_ExecuteUbergraph_GA_DemonDog_ReturnDamage::CallFunc_ApplyEffectContainer_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_DemonDog_ReturnDamage_C_ExecuteUbergraph_GA_DemonDog_ReturnDamage, K2Node_DynamicCast_AsProjectile_Actor) == 0x000418, "Member 'GA_DemonDog_ReturnDamage_C_ExecuteUbergraph_GA_DemonDog_ReturnDamage::K2Node_DynamicCast_AsProjectile_Actor' has a wrong offset!");
static_assert(offsetof(GA_DemonDog_ReturnDamage_C_ExecuteUbergraph_GA_DemonDog_ReturnDamage, K2Node_DynamicCast_bSuccess) == 0x000420, "Member 'GA_DemonDog_ReturnDamage_C_ExecuteUbergraph_GA_DemonDog_ReturnDamage::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_DemonDog_ReturnDamage_C_ExecuteUbergraph_GA_DemonDog_ReturnDamage, K2Node_CreateDelegate_OutputDelegate_1) == 0x000424, "Member 'GA_DemonDog_ReturnDamage_C_ExecuteUbergraph_GA_DemonDog_ReturnDamage::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GA_DemonDog_ReturnDamage_C_ExecuteUbergraph_GA_DemonDog_ReturnDamage, K2Node_MakeStruct_GameplayEventData_1) == 0x000438, "Member 'GA_DemonDog_ReturnDamage_C_ExecuteUbergraph_GA_DemonDog_ReturnDamage::K2Node_MakeStruct_GameplayEventData_1' has a wrong offset!");
static_assert(offsetof(GA_DemonDog_ReturnDamage_C_ExecuteUbergraph_GA_DemonDog_ReturnDamage, CallFunc_ApplyEffectContainer_ReturnValue_1) == 0x0004E8, "Member 'GA_DemonDog_ReturnDamage_C_ExecuteUbergraph_GA_DemonDog_ReturnDamage::CallFunc_ApplyEffectContainer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_DemonDog_ReturnDamage_C_ExecuteUbergraph_GA_DemonDog_ReturnDamage, CallFunc_WaitGameplayTagAdd_ReturnValue) == 0x0004F8, "Member 'GA_DemonDog_ReturnDamage_C_ExecuteUbergraph_GA_DemonDog_ReturnDamage::CallFunc_WaitGameplayTagAdd_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_DemonDog_ReturnDamage_C_ExecuteUbergraph_GA_DemonDog_ReturnDamage, Temp_delegate_Variable) == 0x000500, "Member 'GA_DemonDog_ReturnDamage_C_ExecuteUbergraph_GA_DemonDog_ReturnDamage::Temp_delegate_Variable' has a wrong offset!");
static_assert(offsetof(GA_DemonDog_ReturnDamage_C_ExecuteUbergraph_GA_DemonDog_ReturnDamage, CallFunc_PostEvent_ReturnValue) == 0x000510, "Member 'GA_DemonDog_ReturnDamage_C_ExecuteUbergraph_GA_DemonDog_ReturnDamage::CallFunc_PostEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_DemonDog_ReturnDamage_C_ExecuteUbergraph_GA_DemonDog_ReturnDamage, CallFunc_IsValid_ReturnValue_1) == 0x000514, "Member 'GA_DemonDog_ReturnDamage_C_ExecuteUbergraph_GA_DemonDog_ReturnDamage::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_DemonDog_ReturnDamage_C_ExecuteUbergraph_GA_DemonDog_ReturnDamage, Temp_delegate_Variable_1) == 0x000518, "Member 'GA_DemonDog_ReturnDamage_C_ExecuteUbergraph_GA_DemonDog_ReturnDamage::Temp_delegate_Variable_1' has a wrong offset!");
static_assert(offsetof(GA_DemonDog_ReturnDamage_C_ExecuteUbergraph_GA_DemonDog_ReturnDamage, CallFunc_PostEvent_ReturnValue_1) == 0x000528, "Member 'GA_DemonDog_ReturnDamage_C_ExecuteUbergraph_GA_DemonDog_ReturnDamage::CallFunc_PostEvent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_DemonDog_ReturnDamage_C_ExecuteUbergraph_GA_DemonDog_ReturnDamage, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000530, "Member 'GA_DemonDog_ReturnDamage_C_ExecuteUbergraph_GA_DemonDog_ReturnDamage::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_DemonDog_ReturnDamage_C_ExecuteUbergraph_GA_DemonDog_ReturnDamage, K2Node_DynamicCast_AsBP_Demon_Dog_Nightmare) == 0x000538, "Member 'GA_DemonDog_ReturnDamage_C_ExecuteUbergraph_GA_DemonDog_ReturnDamage::K2Node_DynamicCast_AsBP_Demon_Dog_Nightmare' has a wrong offset!");
static_assert(offsetof(GA_DemonDog_ReturnDamage_C_ExecuteUbergraph_GA_DemonDog_ReturnDamage, K2Node_DynamicCast_bSuccess_1) == 0x000540, "Member 'GA_DemonDog_ReturnDamage_C_ExecuteUbergraph_GA_DemonDog_ReturnDamage::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GA_DemonDog_ReturnDamage_C_ExecuteUbergraph_GA_DemonDog_ReturnDamage, CallFunc_MakeGameplayCueParameters_ReturnValue) == 0x000548, "Member 'GA_DemonDog_ReturnDamage_C_ExecuteUbergraph_GA_DemonDog_ReturnDamage::CallFunc_MakeGameplayCueParameters_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_DemonDog_ReturnDamage_C_ExecuteUbergraph_GA_DemonDog_ReturnDamage, CallFunc_MakeGameplayCueParameters_ReturnValue_1) == 0x000620, "Member 'GA_DemonDog_ReturnDamage_C_ExecuteUbergraph_GA_DemonDog_ReturnDamage::CallFunc_MakeGameplayCueParameters_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_DemonDog_ReturnDamage_C_ExecuteUbergraph_GA_DemonDog_ReturnDamage, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x0006F8, "Member 'GA_DemonDog_ReturnDamage_C_ExecuteUbergraph_GA_DemonDog_ReturnDamage::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_DemonDog_ReturnDamage_C_ExecuteUbergraph_GA_DemonDog_ReturnDamage, K2Node_Event_TriggerEventData) == 0x000700, "Member 'GA_DemonDog_ReturnDamage_C_ExecuteUbergraph_GA_DemonDog_ReturnDamage::K2Node_Event_TriggerEventData' has a wrong offset!");

}

