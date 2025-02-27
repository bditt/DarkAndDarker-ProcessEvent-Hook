#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_LavaMonster_SpawnLava_Nightmare

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GA_AoeCallerAtLocationFromMontage_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_LavaMonster_SpawnLava_Nightmare.GA_LavaMonster_SpawnLava_Nightmare_C
// 0x0098 (0x0790 - 0x06F8)
class UGA_LavaMonster_SpawnLava_Nightmare_C final : public UGA_AoeCallerAtLocationFromMontage_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_LavaMonster_SpawnLava_Nightmare_C; // 0x06F8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                                Target_Bottom_Location;                            // 0x0700(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Spawn_Count;                                       // 0x0718(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5172[0x4];                                     // 0x071C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Target_Spawn_Location;                             // 0x0720(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Line_Spawn_Forward_Vector;                         // 0x0738(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           Line_Spawn_TimerHandle;                            // 0x0750(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Target_Spawn_Location2;                            // 0x0758(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Line_Spawn_Forward_Vector2;                        // 0x0770(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Random_Angle;                                      // 0x0788(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AbilityActivated(const struct FGameplayEventData& TriggerEventData);
	void EventReceived_E40F5943497DCAF72B3B2CBB58BE2A63(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GA_LavaMonster_SpawnLava_Nightmare(int32 EntryPoint);
	void K2_OnEndAbility(bool bWasCancelled);
	void Spawn_Line_Aoe();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_LavaMonster_SpawnLava_Nightmare_C">();
	}
	static class UGA_LavaMonster_SpawnLava_Nightmare_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_LavaMonster_SpawnLava_Nightmare_C>();
	}
};
static_assert(alignof(UGA_LavaMonster_SpawnLava_Nightmare_C) == 0x000008, "Wrong alignment on UGA_LavaMonster_SpawnLava_Nightmare_C");
static_assert(sizeof(UGA_LavaMonster_SpawnLava_Nightmare_C) == 0x000790, "Wrong size on UGA_LavaMonster_SpawnLava_Nightmare_C");
static_assert(offsetof(UGA_LavaMonster_SpawnLava_Nightmare_C, UberGraphFrame_GA_LavaMonster_SpawnLava_Nightmare_C) == 0x0006F8, "Member 'UGA_LavaMonster_SpawnLava_Nightmare_C::UberGraphFrame_GA_LavaMonster_SpawnLava_Nightmare_C' has a wrong offset!");
static_assert(offsetof(UGA_LavaMonster_SpawnLava_Nightmare_C, Target_Bottom_Location) == 0x000700, "Member 'UGA_LavaMonster_SpawnLava_Nightmare_C::Target_Bottom_Location' has a wrong offset!");
static_assert(offsetof(UGA_LavaMonster_SpawnLava_Nightmare_C, Spawn_Count) == 0x000718, "Member 'UGA_LavaMonster_SpawnLava_Nightmare_C::Spawn_Count' has a wrong offset!");
static_assert(offsetof(UGA_LavaMonster_SpawnLava_Nightmare_C, Target_Spawn_Location) == 0x000720, "Member 'UGA_LavaMonster_SpawnLava_Nightmare_C::Target_Spawn_Location' has a wrong offset!");
static_assert(offsetof(UGA_LavaMonster_SpawnLava_Nightmare_C, Line_Spawn_Forward_Vector) == 0x000738, "Member 'UGA_LavaMonster_SpawnLava_Nightmare_C::Line_Spawn_Forward_Vector' has a wrong offset!");
static_assert(offsetof(UGA_LavaMonster_SpawnLava_Nightmare_C, Line_Spawn_TimerHandle) == 0x000750, "Member 'UGA_LavaMonster_SpawnLava_Nightmare_C::Line_Spawn_TimerHandle' has a wrong offset!");
static_assert(offsetof(UGA_LavaMonster_SpawnLava_Nightmare_C, Target_Spawn_Location2) == 0x000758, "Member 'UGA_LavaMonster_SpawnLava_Nightmare_C::Target_Spawn_Location2' has a wrong offset!");
static_assert(offsetof(UGA_LavaMonster_SpawnLava_Nightmare_C, Line_Spawn_Forward_Vector2) == 0x000770, "Member 'UGA_LavaMonster_SpawnLava_Nightmare_C::Line_Spawn_Forward_Vector2' has a wrong offset!");
static_assert(offsetof(UGA_LavaMonster_SpawnLava_Nightmare_C, Random_Angle) == 0x000788, "Member 'UGA_LavaMonster_SpawnLava_Nightmare_C::Random_Angle' has a wrong offset!");

}

