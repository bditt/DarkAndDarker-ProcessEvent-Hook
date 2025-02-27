#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_MusicalInstrumentPartyMaker

#include "Basic.hpp"

#include "GA_ActivateItem_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_MusicalInstrumentPartyMaker.GA_MusicalInstrumentPartyMaker_C
// 0x0010 (0x05F8 - 0x05E8)
class UGA_MusicalInstrumentPartyMaker_C final : public UGA_ActivateItem_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_MusicalInstrumentPartyMaker_C;   // 0x05E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         Radius;                                            // 0x05F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AbilityActivated(const struct FGameplayEventData& TriggerEventData);
	void ExecuteUbergraph_GA_MusicalInstrumentPartyMaker(int32 EntryPoint);
	void OnTargetActorOverlap_D833C8E14E03A4C9DBEB90A6FD4744C8(const TArray<class AActor*>& RadiusInActors);
	void ReceivedEvent(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_MusicalInstrumentPartyMaker_C">();
	}
	static class UGA_MusicalInstrumentPartyMaker_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_MusicalInstrumentPartyMaker_C>();
	}
};
static_assert(alignof(UGA_MusicalInstrumentPartyMaker_C) == 0x000008, "Wrong alignment on UGA_MusicalInstrumentPartyMaker_C");
static_assert(sizeof(UGA_MusicalInstrumentPartyMaker_C) == 0x0005F8, "Wrong size on UGA_MusicalInstrumentPartyMaker_C");
static_assert(offsetof(UGA_MusicalInstrumentPartyMaker_C, UberGraphFrame_GA_MusicalInstrumentPartyMaker_C) == 0x0005E8, "Member 'UGA_MusicalInstrumentPartyMaker_C::UberGraphFrame_GA_MusicalInstrumentPartyMaker_C' has a wrong offset!");
static_assert(offsetof(UGA_MusicalInstrumentPartyMaker_C, Radius) == 0x0005F0, "Member 'UGA_MusicalInstrumentPartyMaker_C::Radius' has a wrong offset!");

}

