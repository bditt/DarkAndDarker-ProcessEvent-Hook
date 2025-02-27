#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_GoblinBolasinger_Flee

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "GA_MonsterGameplayAbilityBase_classes.hpp"
#include "AIModule_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_GoblinBolasinger_Flee.GA_GoblinBolasinger_Flee_C
// 0x00F0 (0x06B8 - 0x05C8)
class UGA_GoblinBolasinger_Flee_C final : public UGA_MonsterGameplayAbilityBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x05C8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayEventData                     Trigger_Event_Data;                                // 0x05D0(0x00B0)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AActor*                                 Target;                                            // 0x0680(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          Reached;                                           // 0x0688(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F5D[0x7];                                     // 0x0689(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_GoblinBolaslinger_C*                As_BP_Goblin_Bolaslinger;                          // 0x0690(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           MoveFleeTimerHandle;                               // 0x0698(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        LimitFleeTime;                                     // 0x06A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           MoveFailTimerHandle;                               // 0x06A8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         GoalDistanceFromEnemy;                             // 0x06B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AbilityActivated(const struct FGameplayEventData& TriggerEventData);
	void EventReceived_3FDA19F04FD64EF8679FE3B72FA17924(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void EventReceived_B56679AE43FF329382C750930B7E2180(const struct FGameplayEventData& Payload);
	void ExecuteUbergraph_GA_GoblinBolasinger_Flee(int32 EntryPoint);
	void K2_OnEndAbility(bool bWasCancelled);
	void MoveFailTimeout();
	void MoveFlee();
	void OnBlendOut_3FDA19F04FD64EF8679FE3B72FA17924(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnCancelled_3FDA19F04FD64EF8679FE3B72FA17924(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnCompleted_3FDA19F04FD64EF8679FE3B72FA17924(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnFail_D60F649742A7B239BC5AFCAE0F7D2692(EPathFollowingResult MovementResult);
	void OnInterrupted_3FDA19F04FD64EF8679FE3B72FA17924(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnSuccess_D60F649742A7B239BC5AFCAE0F7D2692(EPathFollowingResult MovementResult);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_GoblinBolasinger_Flee_C">();
	}
	static class UGA_GoblinBolasinger_Flee_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_GoblinBolasinger_Flee_C>();
	}
};
static_assert(alignof(UGA_GoblinBolasinger_Flee_C) == 0x000008, "Wrong alignment on UGA_GoblinBolasinger_Flee_C");
static_assert(sizeof(UGA_GoblinBolasinger_Flee_C) == 0x0006B8, "Wrong size on UGA_GoblinBolasinger_Flee_C");
static_assert(offsetof(UGA_GoblinBolasinger_Flee_C, UberGraphFrame) == 0x0005C8, "Member 'UGA_GoblinBolasinger_Flee_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_GoblinBolasinger_Flee_C, Trigger_Event_Data) == 0x0005D0, "Member 'UGA_GoblinBolasinger_Flee_C::Trigger_Event_Data' has a wrong offset!");
static_assert(offsetof(UGA_GoblinBolasinger_Flee_C, Target) == 0x000680, "Member 'UGA_GoblinBolasinger_Flee_C::Target' has a wrong offset!");
static_assert(offsetof(UGA_GoblinBolasinger_Flee_C, Reached) == 0x000688, "Member 'UGA_GoblinBolasinger_Flee_C::Reached' has a wrong offset!");
static_assert(offsetof(UGA_GoblinBolasinger_Flee_C, As_BP_Goblin_Bolaslinger) == 0x000690, "Member 'UGA_GoblinBolasinger_Flee_C::As_BP_Goblin_Bolaslinger' has a wrong offset!");
static_assert(offsetof(UGA_GoblinBolasinger_Flee_C, MoveFleeTimerHandle) == 0x000698, "Member 'UGA_GoblinBolasinger_Flee_C::MoveFleeTimerHandle' has a wrong offset!");
static_assert(offsetof(UGA_GoblinBolasinger_Flee_C, LimitFleeTime) == 0x0006A0, "Member 'UGA_GoblinBolasinger_Flee_C::LimitFleeTime' has a wrong offset!");
static_assert(offsetof(UGA_GoblinBolasinger_Flee_C, MoveFailTimerHandle) == 0x0006A8, "Member 'UGA_GoblinBolasinger_Flee_C::MoveFailTimerHandle' has a wrong offset!");
static_assert(offsetof(UGA_GoblinBolasinger_Flee_C, GoalDistanceFromEnemy) == 0x0006B0, "Member 'UGA_GoblinBolasinger_Flee_C::GoalDistanceFromEnemy' has a wrong offset!");

}

