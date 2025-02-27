#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_MonsterStanceChange

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "E_Detachable_structs.hpp"
#include "GA_PlayMontageAndWaitForEventBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_MonsterStanceChange.GA_MonsterStanceChange_C
// 0x0038 (0x06B0 - 0x0678)
class UGA_MonsterStanceChange_C : public UGA_PlayMontageAndWaitForEventBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_MonsterStanceChange_C;           // 0x0678(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<E_Detachable>                          StanceDetachable;                                  // 0x0680(0x0010)(Edit, BlueprintVisible)
	TArray<struct FGameplayTag>                   Add_Gameplay_Tags;                                 // 0x0690(0x0010)(Edit, BlueprintVisible)
	TArray<struct FGameplayTagContainer>          Remove_Stance_Tags;                                // 0x06A0(0x0010)(Edit, BlueprintVisible)

public:
	void AbilityActivated(const struct FGameplayEventData& TriggerEventData);
	void ExecuteUbergraph_GA_MonsterStanceChange(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_MonsterStanceChange_C">();
	}
	static class UGA_MonsterStanceChange_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_MonsterStanceChange_C>();
	}
};
static_assert(alignof(UGA_MonsterStanceChange_C) == 0x000008, "Wrong alignment on UGA_MonsterStanceChange_C");
static_assert(sizeof(UGA_MonsterStanceChange_C) == 0x0006B0, "Wrong size on UGA_MonsterStanceChange_C");
static_assert(offsetof(UGA_MonsterStanceChange_C, UberGraphFrame_GA_MonsterStanceChange_C) == 0x000678, "Member 'UGA_MonsterStanceChange_C::UberGraphFrame_GA_MonsterStanceChange_C' has a wrong offset!");
static_assert(offsetof(UGA_MonsterStanceChange_C, StanceDetachable) == 0x000680, "Member 'UGA_MonsterStanceChange_C::StanceDetachable' has a wrong offset!");
static_assert(offsetof(UGA_MonsterStanceChange_C, Add_Gameplay_Tags) == 0x000690, "Member 'UGA_MonsterStanceChange_C::Add_Gameplay_Tags' has a wrong offset!");
static_assert(offsetof(UGA_MonsterStanceChange_C, Remove_Stance_Tags) == 0x0006A0, "Member 'UGA_MonsterStanceChange_C::Remove_Stance_Tags' has a wrong offset!");

}

