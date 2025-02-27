#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_MonsterMeleeAttackBaseWithOptions_InputVector

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "E_TargetType_structs.hpp"
#include "DungeonCrawler_structs.hpp"
#include "DungeonCrawler_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_MonsterMeleeAttackBaseWithOptions_InputVector.GA_MonsterMeleeAttackBaseWithOptions_InputVector_C
// 0x0080 (0x06F0 - 0x0670)
class UGA_MonsterMeleeAttackBaseWithOptions_InputVector_C : public UGA_MonsterMeleeAttackBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0670(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<E_TargetType>                          Control_Point;                                     // 0x0678(0x0010)(Edit, BlueprintVisible)
	TArray<double>                                Angle;                                             // 0x0688(0x0010)(Edit, BlueprintVisible)
	TArray<double>                                Distance;                                          // 0x0698(0x0010)(Edit, BlueprintVisible)
	class ADCCharacterBase*                       CasterPawn;                                        // 0x06A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ADCCharacterBase*                       TargetPawn;                                        // 0x06B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         Index_GA_MonsterMeleeAttackBaseWithOptions_InputVector_C; // 0x06B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44E5[0x4];                                     // 0x06BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilityTask*                           MovementTask;                                      // 0x06C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        RotationSpeed;                                     // 0x06C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Without_Pitch;                                     // 0x06D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44E6[0x3];                                     // 0x06D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           EndTagSignal;                                      // 0x06D4(0x0008)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           Gameplay_Tag;                                      // 0x06DC(0x0008)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	EHitBoxType                                   Hit_Box;                                           // 0x06E4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44E7[0x3];                                     // 0x06E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UCurveVector*                           InputCurve;                                        // 0x06E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void AbilityActivated(const struct FGameplayEventData& TriggerEventData);
	void EventReceived_345BBB4C476117C4949AE2A581954F06(const struct FGameplayEventData& Payload);
	void EventReceived_AE81807E4915675DEB1BD0847699B25D(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GA_MonsterMeleeAttackBaseWithOptions_InputVector(int32 EntryPoint);
	void GetAvailableLocation(const struct FVector& DestLocation, bool* Result, struct FVector* Location);
	void GetBBTargetActor(bool* Result, class UObject** Return_Value);
	void GetBBTargetActorToCharacterBase(bool* Result, class ADCCharacterBase** As_DCCharacter_Base);
	void GetBBTargetActorToMonsterBase(bool* Result, class ABP_DCMonsterBaseWithOptions_C** DCMonsterBaseWithOptions);
	void GetSignal();
	void OnFinish_AB08374A4B9F12BF12E6DA84E1306A84(bool IsArrivedDestLocation);
	void OnFinish_FFD00FE4461E73F15B901CA7FD69D470(bool IsArrivedDestLocation);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_MonsterMeleeAttackBaseWithOptions_InputVector_C">();
	}
	static class UGA_MonsterMeleeAttackBaseWithOptions_InputVector_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_MonsterMeleeAttackBaseWithOptions_InputVector_C>();
	}
};
static_assert(alignof(UGA_MonsterMeleeAttackBaseWithOptions_InputVector_C) == 0x000008, "Wrong alignment on UGA_MonsterMeleeAttackBaseWithOptions_InputVector_C");
static_assert(sizeof(UGA_MonsterMeleeAttackBaseWithOptions_InputVector_C) == 0x0006F0, "Wrong size on UGA_MonsterMeleeAttackBaseWithOptions_InputVector_C");
static_assert(offsetof(UGA_MonsterMeleeAttackBaseWithOptions_InputVector_C, UberGraphFrame) == 0x000670, "Member 'UGA_MonsterMeleeAttackBaseWithOptions_InputVector_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_MonsterMeleeAttackBaseWithOptions_InputVector_C, Control_Point) == 0x000678, "Member 'UGA_MonsterMeleeAttackBaseWithOptions_InputVector_C::Control_Point' has a wrong offset!");
static_assert(offsetof(UGA_MonsterMeleeAttackBaseWithOptions_InputVector_C, Angle) == 0x000688, "Member 'UGA_MonsterMeleeAttackBaseWithOptions_InputVector_C::Angle' has a wrong offset!");
static_assert(offsetof(UGA_MonsterMeleeAttackBaseWithOptions_InputVector_C, Distance) == 0x000698, "Member 'UGA_MonsterMeleeAttackBaseWithOptions_InputVector_C::Distance' has a wrong offset!");
static_assert(offsetof(UGA_MonsterMeleeAttackBaseWithOptions_InputVector_C, CasterPawn) == 0x0006A8, "Member 'UGA_MonsterMeleeAttackBaseWithOptions_InputVector_C::CasterPawn' has a wrong offset!");
static_assert(offsetof(UGA_MonsterMeleeAttackBaseWithOptions_InputVector_C, TargetPawn) == 0x0006B0, "Member 'UGA_MonsterMeleeAttackBaseWithOptions_InputVector_C::TargetPawn' has a wrong offset!");
static_assert(offsetof(UGA_MonsterMeleeAttackBaseWithOptions_InputVector_C, Index_GA_MonsterMeleeAttackBaseWithOptions_InputVector_C) == 0x0006B8, "Member 'UGA_MonsterMeleeAttackBaseWithOptions_InputVector_C::Index_GA_MonsterMeleeAttackBaseWithOptions_InputVector_C' has a wrong offset!");
static_assert(offsetof(UGA_MonsterMeleeAttackBaseWithOptions_InputVector_C, MovementTask) == 0x0006C0, "Member 'UGA_MonsterMeleeAttackBaseWithOptions_InputVector_C::MovementTask' has a wrong offset!");
static_assert(offsetof(UGA_MonsterMeleeAttackBaseWithOptions_InputVector_C, RotationSpeed) == 0x0006C8, "Member 'UGA_MonsterMeleeAttackBaseWithOptions_InputVector_C::RotationSpeed' has a wrong offset!");
static_assert(offsetof(UGA_MonsterMeleeAttackBaseWithOptions_InputVector_C, Without_Pitch) == 0x0006D0, "Member 'UGA_MonsterMeleeAttackBaseWithOptions_InputVector_C::Without_Pitch' has a wrong offset!");
static_assert(offsetof(UGA_MonsterMeleeAttackBaseWithOptions_InputVector_C, EndTagSignal) == 0x0006D4, "Member 'UGA_MonsterMeleeAttackBaseWithOptions_InputVector_C::EndTagSignal' has a wrong offset!");
static_assert(offsetof(UGA_MonsterMeleeAttackBaseWithOptions_InputVector_C, Gameplay_Tag) == 0x0006DC, "Member 'UGA_MonsterMeleeAttackBaseWithOptions_InputVector_C::Gameplay_Tag' has a wrong offset!");
static_assert(offsetof(UGA_MonsterMeleeAttackBaseWithOptions_InputVector_C, Hit_Box) == 0x0006E4, "Member 'UGA_MonsterMeleeAttackBaseWithOptions_InputVector_C::Hit_Box' has a wrong offset!");
static_assert(offsetof(UGA_MonsterMeleeAttackBaseWithOptions_InputVector_C, InputCurve) == 0x0006E8, "Member 'UGA_MonsterMeleeAttackBaseWithOptions_InputVector_C::InputCurve' has a wrong offset!");

}

