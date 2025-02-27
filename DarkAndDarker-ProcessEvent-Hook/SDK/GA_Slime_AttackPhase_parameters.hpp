#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Slime_AttackPhase

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function GA_Slime_AttackPhase.GA_Slime_AttackPhase_C.AbilityActivated
// 0x00B0 (0x00B0 - 0x0000)
struct GA_Slime_AttackPhase_C_AbilityActivated final
{
public:
	struct FGameplayEventData                     TriggerEventData;                                  // 0x0000(0x00B0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GA_Slime_AttackPhase_C_AbilityActivated) == 0x000008, "Wrong alignment on GA_Slime_AttackPhase_C_AbilityActivated");
static_assert(sizeof(GA_Slime_AttackPhase_C_AbilityActivated) == 0x0000B0, "Wrong size on GA_Slime_AttackPhase_C_AbilityActivated");
static_assert(offsetof(GA_Slime_AttackPhase_C_AbilityActivated, TriggerEventData) == 0x000000, "Member 'GA_Slime_AttackPhase_C_AbilityActivated::TriggerEventData' has a wrong offset!");

// Function GA_Slime_AttackPhase.GA_Slime_AttackPhase_C.EventReceived_24CAE78F43C9EF3054EB50932E944C21
// 0x00B0 (0x00B0 - 0x0000)
struct GA_Slime_AttackPhase_C_EventReceived_24CAE78F43C9EF3054EB50932E944C21 final
{
public:
	struct FGameplayEventData                     Payload;                                           // 0x0000(0x00B0)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GA_Slime_AttackPhase_C_EventReceived_24CAE78F43C9EF3054EB50932E944C21) == 0x000008, "Wrong alignment on GA_Slime_AttackPhase_C_EventReceived_24CAE78F43C9EF3054EB50932E944C21");
static_assert(sizeof(GA_Slime_AttackPhase_C_EventReceived_24CAE78F43C9EF3054EB50932E944C21) == 0x0000B0, "Wrong size on GA_Slime_AttackPhase_C_EventReceived_24CAE78F43C9EF3054EB50932E944C21");
static_assert(offsetof(GA_Slime_AttackPhase_C_EventReceived_24CAE78F43C9EF3054EB50932E944C21, Payload) == 0x000000, "Member 'GA_Slime_AttackPhase_C_EventReceived_24CAE78F43C9EF3054EB50932E944C21::Payload' has a wrong offset!");

// Function GA_Slime_AttackPhase.GA_Slime_AttackPhase_C.ExecuteUbergraph_GA_Slime_AttackPhase
// 0x0340 (0x0340 - 0x0000)
struct GA_Slime_AttackPhase_C_ExecuteUbergraph_GA_Slime_AttackPhase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5378[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_CustomEvent_Payload;                        // 0x0008(0x00B0)()
	struct FGameplayEventData                     Temp_struct_Variable;                              // 0x00B8(0x00B0)()
	class UAbilityTask_WaitGameplayEvent*         CallFunc_WaitGameplayEvent_ReturnValue;            // 0x0168(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5379[0x7];                                     // 0x0171(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         Temp_object_Variable;                              // 0x0178(0x0010)(ConstParm, ReferenceParm)
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x0188(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0190(0x0060)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     K2Node_Event_TriggerEventData;                     // 0x01F0(0x00B0)(ConstParm)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x02A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x02B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x02D0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1; // 0x02E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<EObjectTypeQuery>                      K2Node_MakeArray_Array;                            // 0x02F0(0x0010)(ConstParm, ReferenceParm)
	class ABP_Slime_C*                            K2Node_DynamicCast_AsBP_Slime;                     // 0x0300(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0308(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_537A[0x3];                                     // 0x0309(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const struct FGameplayEventData& Payload)> K2Node_CreateDelegate_OutputDelegate;              // 0x030C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_537B[0x4];                                     // 0x031C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         CallFunc_CapsuleOverlapActors_OutActors;           // 0x0320(0x0010)(ReferenceParm)
	bool                                          CallFunc_CapsuleOverlapActors_ReturnValue;         // 0x0330(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Slime_AttackPhase_C_ExecuteUbergraph_GA_Slime_AttackPhase) == 0x000010, "Wrong alignment on GA_Slime_AttackPhase_C_ExecuteUbergraph_GA_Slime_AttackPhase");
static_assert(sizeof(GA_Slime_AttackPhase_C_ExecuteUbergraph_GA_Slime_AttackPhase) == 0x000340, "Wrong size on GA_Slime_AttackPhase_C_ExecuteUbergraph_GA_Slime_AttackPhase");
static_assert(offsetof(GA_Slime_AttackPhase_C_ExecuteUbergraph_GA_Slime_AttackPhase, EntryPoint) == 0x000000, "Member 'GA_Slime_AttackPhase_C_ExecuteUbergraph_GA_Slime_AttackPhase::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Slime_AttackPhase_C_ExecuteUbergraph_GA_Slime_AttackPhase, K2Node_CustomEvent_Payload) == 0x000008, "Member 'GA_Slime_AttackPhase_C_ExecuteUbergraph_GA_Slime_AttackPhase::K2Node_CustomEvent_Payload' has a wrong offset!");
static_assert(offsetof(GA_Slime_AttackPhase_C_ExecuteUbergraph_GA_Slime_AttackPhase, Temp_struct_Variable) == 0x0000B8, "Member 'GA_Slime_AttackPhase_C_ExecuteUbergraph_GA_Slime_AttackPhase::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GA_Slime_AttackPhase_C_ExecuteUbergraph_GA_Slime_AttackPhase, CallFunc_WaitGameplayEvent_ReturnValue) == 0x000168, "Member 'GA_Slime_AttackPhase_C_ExecuteUbergraph_GA_Slime_AttackPhase::CallFunc_WaitGameplayEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Slime_AttackPhase_C_ExecuteUbergraph_GA_Slime_AttackPhase, CallFunc_IsValid_ReturnValue) == 0x000170, "Member 'GA_Slime_AttackPhase_C_ExecuteUbergraph_GA_Slime_AttackPhase::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Slime_AttackPhase_C_ExecuteUbergraph_GA_Slime_AttackPhase, Temp_object_Variable) == 0x000178, "Member 'GA_Slime_AttackPhase_C_ExecuteUbergraph_GA_Slime_AttackPhase::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(GA_Slime_AttackPhase_C_ExecuteUbergraph_GA_Slime_AttackPhase, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000188, "Member 'GA_Slime_AttackPhase_C_ExecuteUbergraph_GA_Slime_AttackPhase::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Slime_AttackPhase_C_ExecuteUbergraph_GA_Slime_AttackPhase, CallFunc_GetTransform_ReturnValue) == 0x000190, "Member 'GA_Slime_AttackPhase_C_ExecuteUbergraph_GA_Slime_AttackPhase::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Slime_AttackPhase_C_ExecuteUbergraph_GA_Slime_AttackPhase, K2Node_Event_TriggerEventData) == 0x0001F0, "Member 'GA_Slime_AttackPhase_C_ExecuteUbergraph_GA_Slime_AttackPhase::K2Node_Event_TriggerEventData' has a wrong offset!");
static_assert(offsetof(GA_Slime_AttackPhase_C_ExecuteUbergraph_GA_Slime_AttackPhase, CallFunc_BreakTransform_Location) == 0x0002A0, "Member 'GA_Slime_AttackPhase_C_ExecuteUbergraph_GA_Slime_AttackPhase::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(GA_Slime_AttackPhase_C_ExecuteUbergraph_GA_Slime_AttackPhase, CallFunc_BreakTransform_Rotation) == 0x0002B8, "Member 'GA_Slime_AttackPhase_C_ExecuteUbergraph_GA_Slime_AttackPhase::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(GA_Slime_AttackPhase_C_ExecuteUbergraph_GA_Slime_AttackPhase, CallFunc_BreakTransform_Scale) == 0x0002D0, "Member 'GA_Slime_AttackPhase_C_ExecuteUbergraph_GA_Slime_AttackPhase::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(GA_Slime_AttackPhase_C_ExecuteUbergraph_GA_Slime_AttackPhase, CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1) == 0x0002E8, "Member 'GA_Slime_AttackPhase_C_ExecuteUbergraph_GA_Slime_AttackPhase::CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Slime_AttackPhase_C_ExecuteUbergraph_GA_Slime_AttackPhase, K2Node_MakeArray_Array) == 0x0002F0, "Member 'GA_Slime_AttackPhase_C_ExecuteUbergraph_GA_Slime_AttackPhase::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(GA_Slime_AttackPhase_C_ExecuteUbergraph_GA_Slime_AttackPhase, K2Node_DynamicCast_AsBP_Slime) == 0x000300, "Member 'GA_Slime_AttackPhase_C_ExecuteUbergraph_GA_Slime_AttackPhase::K2Node_DynamicCast_AsBP_Slime' has a wrong offset!");
static_assert(offsetof(GA_Slime_AttackPhase_C_ExecuteUbergraph_GA_Slime_AttackPhase, K2Node_DynamicCast_bSuccess) == 0x000308, "Member 'GA_Slime_AttackPhase_C_ExecuteUbergraph_GA_Slime_AttackPhase::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Slime_AttackPhase_C_ExecuteUbergraph_GA_Slime_AttackPhase, K2Node_CreateDelegate_OutputDelegate) == 0x00030C, "Member 'GA_Slime_AttackPhase_C_ExecuteUbergraph_GA_Slime_AttackPhase::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_Slime_AttackPhase_C_ExecuteUbergraph_GA_Slime_AttackPhase, CallFunc_CapsuleOverlapActors_OutActors) == 0x000320, "Member 'GA_Slime_AttackPhase_C_ExecuteUbergraph_GA_Slime_AttackPhase::CallFunc_CapsuleOverlapActors_OutActors' has a wrong offset!");
static_assert(offsetof(GA_Slime_AttackPhase_C_ExecuteUbergraph_GA_Slime_AttackPhase, CallFunc_CapsuleOverlapActors_ReturnValue) == 0x000330, "Member 'GA_Slime_AttackPhase_C_ExecuteUbergraph_GA_Slime_AttackPhase::CallFunc_CapsuleOverlapActors_ReturnValue' has a wrong offset!");

}

