#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_BardicheActivate

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GA_BardicheActivate.GA_BardicheActivate_C.ExecuteUbergraph_GA_BardicheActivate
// 0x00C0 (0x00C0 - 0x0000)
struct GA_BardicheActivate_C_ExecuteUbergraph_GA_BardicheActivate final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           K2Node_Event_EventTag;                             // 0x0004(0x0008)(NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4661[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_Event_EventData;                            // 0x0010(0x00B0)()
};
static_assert(alignof(GA_BardicheActivate_C_ExecuteUbergraph_GA_BardicheActivate) == 0x000008, "Wrong alignment on GA_BardicheActivate_C_ExecuteUbergraph_GA_BardicheActivate");
static_assert(sizeof(GA_BardicheActivate_C_ExecuteUbergraph_GA_BardicheActivate) == 0x0000C0, "Wrong size on GA_BardicheActivate_C_ExecuteUbergraph_GA_BardicheActivate");
static_assert(offsetof(GA_BardicheActivate_C_ExecuteUbergraph_GA_BardicheActivate, EntryPoint) == 0x000000, "Member 'GA_BardicheActivate_C_ExecuteUbergraph_GA_BardicheActivate::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_BardicheActivate_C_ExecuteUbergraph_GA_BardicheActivate, K2Node_Event_EventTag) == 0x000004, "Member 'GA_BardicheActivate_C_ExecuteUbergraph_GA_BardicheActivate::K2Node_Event_EventTag' has a wrong offset!");
static_assert(offsetof(GA_BardicheActivate_C_ExecuteUbergraph_GA_BardicheActivate, K2Node_Event_EventData) == 0x000010, "Member 'GA_BardicheActivate_C_ExecuteUbergraph_GA_BardicheActivate::K2Node_Event_EventData' has a wrong offset!");

// Function GA_BardicheActivate.GA_BardicheActivate_C.ReceivedEvent
// 0x00B8 (0x00B8 - 0x0000)
struct GA_BardicheActivate_C_ReceivedEvent final
{
public:
	struct FGameplayTag                           EventTag;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     EventData;                                         // 0x0008(0x00B0)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GA_BardicheActivate_C_ReceivedEvent) == 0x000008, "Wrong alignment on GA_BardicheActivate_C_ReceivedEvent");
static_assert(sizeof(GA_BardicheActivate_C_ReceivedEvent) == 0x0000B8, "Wrong size on GA_BardicheActivate_C_ReceivedEvent");
static_assert(offsetof(GA_BardicheActivate_C_ReceivedEvent, EventTag) == 0x000000, "Member 'GA_BardicheActivate_C_ReceivedEvent::EventTag' has a wrong offset!");
static_assert(offsetof(GA_BardicheActivate_C_ReceivedEvent, EventData) == 0x000008, "Member 'GA_BardicheActivate_C_ReceivedEvent::EventData' has a wrong offset!");

}

