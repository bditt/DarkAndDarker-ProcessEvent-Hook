#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_FrostWyvern_Special_LeapAttack3ToCenter

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GA_FrostWyvern_Combo_LeapAttack3_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_FrostWyvern_Special_LeapAttack3ToCenter.GA_FrostWyvern_Special_LeapAttack3ToCenter_C
// 0x0040 (0x0718 - 0x06D8)
class UGA_FrostWyvern_Special_LeapAttack3ToCenter_C final : public UGA_FrostWyvern_Combo_LeapAttack3_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_FrostWyvern_Special_LeapAttack3ToCenter_C; // 0x06D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	double                                        Can_Move_Distance_Tick;                            // 0x06E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Remain_Tick;                                       // 0x06E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4E91[0x4];                                     // 0x06EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Remain_Distance;                                   // 0x06F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               Start_Rotation;                                    // 0x06F8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	double                                        Move_Distance_Tick;                                // 0x0710(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AbilityActivated(const struct FGameplayEventData& TriggerEventData);
	void Do_Dash();
	void ExecuteUbergraph_GA_FrostWyvern_Special_LeapAttack3ToCenter(int32 EntryPoint);
	double Input_Power_Proportional_To_Spawn_Location();
	void Start_Dash();
	void Stop_Dash();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_FrostWyvern_Special_LeapAttack3ToCenter_C">();
	}
	static class UGA_FrostWyvern_Special_LeapAttack3ToCenter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_FrostWyvern_Special_LeapAttack3ToCenter_C>();
	}
};
static_assert(alignof(UGA_FrostWyvern_Special_LeapAttack3ToCenter_C) == 0x000008, "Wrong alignment on UGA_FrostWyvern_Special_LeapAttack3ToCenter_C");
static_assert(sizeof(UGA_FrostWyvern_Special_LeapAttack3ToCenter_C) == 0x000718, "Wrong size on UGA_FrostWyvern_Special_LeapAttack3ToCenter_C");
static_assert(offsetof(UGA_FrostWyvern_Special_LeapAttack3ToCenter_C, UberGraphFrame_GA_FrostWyvern_Special_LeapAttack3ToCenter_C) == 0x0006D8, "Member 'UGA_FrostWyvern_Special_LeapAttack3ToCenter_C::UberGraphFrame_GA_FrostWyvern_Special_LeapAttack3ToCenter_C' has a wrong offset!");
static_assert(offsetof(UGA_FrostWyvern_Special_LeapAttack3ToCenter_C, Can_Move_Distance_Tick) == 0x0006E0, "Member 'UGA_FrostWyvern_Special_LeapAttack3ToCenter_C::Can_Move_Distance_Tick' has a wrong offset!");
static_assert(offsetof(UGA_FrostWyvern_Special_LeapAttack3ToCenter_C, Remain_Tick) == 0x0006E8, "Member 'UGA_FrostWyvern_Special_LeapAttack3ToCenter_C::Remain_Tick' has a wrong offset!");
static_assert(offsetof(UGA_FrostWyvern_Special_LeapAttack3ToCenter_C, Remain_Distance) == 0x0006F0, "Member 'UGA_FrostWyvern_Special_LeapAttack3ToCenter_C::Remain_Distance' has a wrong offset!");
static_assert(offsetof(UGA_FrostWyvern_Special_LeapAttack3ToCenter_C, Start_Rotation) == 0x0006F8, "Member 'UGA_FrostWyvern_Special_LeapAttack3ToCenter_C::Start_Rotation' has a wrong offset!");
static_assert(offsetof(UGA_FrostWyvern_Special_LeapAttack3ToCenter_C, Move_Distance_Tick) == 0x000710, "Member 'UGA_FrostWyvern_Special_LeapAttack3ToCenter_C::Move_Distance_Tick' has a wrong offset!");

}

