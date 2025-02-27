#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_FrostWyvern_Death

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function GA_FrostWyvern_Death.GA_FrostWyvern_Death_C.AbilityActivated
// 0x00B0 (0x00B0 - 0x0000)
struct GA_FrostWyvern_Death_C_AbilityActivated final
{
public:
	struct FGameplayEventData                     TriggerEventData;                                  // 0x0000(0x00B0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GA_FrostWyvern_Death_C_AbilityActivated) == 0x000008, "Wrong alignment on GA_FrostWyvern_Death_C_AbilityActivated");
static_assert(sizeof(GA_FrostWyvern_Death_C_AbilityActivated) == 0x0000B0, "Wrong size on GA_FrostWyvern_Death_C_AbilityActivated");
static_assert(offsetof(GA_FrostWyvern_Death_C_AbilityActivated, TriggerEventData) == 0x000000, "Member 'GA_FrostWyvern_Death_C_AbilityActivated::TriggerEventData' has a wrong offset!");

// Function GA_FrostWyvern_Death.GA_FrostWyvern_Death_C.EventReceived_B81004ED48FB574BCD62578227D3D819
// 0x00B0 (0x00B0 - 0x0000)
struct GA_FrostWyvern_Death_C_EventReceived_B81004ED48FB574BCD62578227D3D819 final
{
public:
	struct FGameplayEventData                     Payload;                                           // 0x0000(0x00B0)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GA_FrostWyvern_Death_C_EventReceived_B81004ED48FB574BCD62578227D3D819) == 0x000008, "Wrong alignment on GA_FrostWyvern_Death_C_EventReceived_B81004ED48FB574BCD62578227D3D819");
static_assert(sizeof(GA_FrostWyvern_Death_C_EventReceived_B81004ED48FB574BCD62578227D3D819) == 0x0000B0, "Wrong size on GA_FrostWyvern_Death_C_EventReceived_B81004ED48FB574BCD62578227D3D819");
static_assert(offsetof(GA_FrostWyvern_Death_C_EventReceived_B81004ED48FB574BCD62578227D3D819, Payload) == 0x000000, "Member 'GA_FrostWyvern_Death_C_EventReceived_B81004ED48FB574BCD62578227D3D819::Payload' has a wrong offset!");

// Function GA_FrostWyvern_Death.GA_FrostWyvern_Death_C.ExecuteUbergraph_GA_FrostWyvern_Death
// 0x02F0 (0x02F0 - 0x0000)
struct GA_FrostWyvern_Death_C_ExecuteUbergraph_GA_FrostWyvern_Death final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4256[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_Event_TriggerEventData;                     // 0x0008(0x00B0)(ConstParm)
	TDelegate<void(const struct FGameplayEventData& Payload)> K2Node_CreateDelegate_OutputDelegate;              // 0x00B8(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     K2Node_CustomEvent_Payload;                        // 0x00C8(0x00B0)()
	struct FGameplayEventData                     Temp_struct_Variable;                              // 0x0178(0x00B0)()
	class UAbilityTask_WaitGameplayEvent*         CallFunc_WaitGameplayEvent_ReturnValue;            // 0x0228(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0230(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4257[0x7];                                     // 0x0231(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x0238(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0240(0x0060)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x02A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x02B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x02D0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_FrostWyvern_Death_C_ExecuteUbergraph_GA_FrostWyvern_Death) == 0x000010, "Wrong alignment on GA_FrostWyvern_Death_C_ExecuteUbergraph_GA_FrostWyvern_Death");
static_assert(sizeof(GA_FrostWyvern_Death_C_ExecuteUbergraph_GA_FrostWyvern_Death) == 0x0002F0, "Wrong size on GA_FrostWyvern_Death_C_ExecuteUbergraph_GA_FrostWyvern_Death");
static_assert(offsetof(GA_FrostWyvern_Death_C_ExecuteUbergraph_GA_FrostWyvern_Death, EntryPoint) == 0x000000, "Member 'GA_FrostWyvern_Death_C_ExecuteUbergraph_GA_FrostWyvern_Death::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_FrostWyvern_Death_C_ExecuteUbergraph_GA_FrostWyvern_Death, K2Node_Event_TriggerEventData) == 0x000008, "Member 'GA_FrostWyvern_Death_C_ExecuteUbergraph_GA_FrostWyvern_Death::K2Node_Event_TriggerEventData' has a wrong offset!");
static_assert(offsetof(GA_FrostWyvern_Death_C_ExecuteUbergraph_GA_FrostWyvern_Death, K2Node_CreateDelegate_OutputDelegate) == 0x0000B8, "Member 'GA_FrostWyvern_Death_C_ExecuteUbergraph_GA_FrostWyvern_Death::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_FrostWyvern_Death_C_ExecuteUbergraph_GA_FrostWyvern_Death, K2Node_CustomEvent_Payload) == 0x0000C8, "Member 'GA_FrostWyvern_Death_C_ExecuteUbergraph_GA_FrostWyvern_Death::K2Node_CustomEvent_Payload' has a wrong offset!");
static_assert(offsetof(GA_FrostWyvern_Death_C_ExecuteUbergraph_GA_FrostWyvern_Death, Temp_struct_Variable) == 0x000178, "Member 'GA_FrostWyvern_Death_C_ExecuteUbergraph_GA_FrostWyvern_Death::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GA_FrostWyvern_Death_C_ExecuteUbergraph_GA_FrostWyvern_Death, CallFunc_WaitGameplayEvent_ReturnValue) == 0x000228, "Member 'GA_FrostWyvern_Death_C_ExecuteUbergraph_GA_FrostWyvern_Death::CallFunc_WaitGameplayEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_FrostWyvern_Death_C_ExecuteUbergraph_GA_FrostWyvern_Death, CallFunc_IsValid_ReturnValue) == 0x000230, "Member 'GA_FrostWyvern_Death_C_ExecuteUbergraph_GA_FrostWyvern_Death::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_FrostWyvern_Death_C_ExecuteUbergraph_GA_FrostWyvern_Death, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000238, "Member 'GA_FrostWyvern_Death_C_ExecuteUbergraph_GA_FrostWyvern_Death::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_FrostWyvern_Death_C_ExecuteUbergraph_GA_FrostWyvern_Death, CallFunc_GetTransform_ReturnValue) == 0x000240, "Member 'GA_FrostWyvern_Death_C_ExecuteUbergraph_GA_FrostWyvern_Death::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_FrostWyvern_Death_C_ExecuteUbergraph_GA_FrostWyvern_Death, CallFunc_BreakTransform_Location) == 0x0002A0, "Member 'GA_FrostWyvern_Death_C_ExecuteUbergraph_GA_FrostWyvern_Death::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(GA_FrostWyvern_Death_C_ExecuteUbergraph_GA_FrostWyvern_Death, CallFunc_BreakTransform_Rotation) == 0x0002B8, "Member 'GA_FrostWyvern_Death_C_ExecuteUbergraph_GA_FrostWyvern_Death::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(GA_FrostWyvern_Death_C_ExecuteUbergraph_GA_FrostWyvern_Death, CallFunc_BreakTransform_Scale) == 0x0002D0, "Member 'GA_FrostWyvern_Death_C_ExecuteUbergraph_GA_FrostWyvern_Death::CallFunc_BreakTransform_Scale' has a wrong offset!");

}

