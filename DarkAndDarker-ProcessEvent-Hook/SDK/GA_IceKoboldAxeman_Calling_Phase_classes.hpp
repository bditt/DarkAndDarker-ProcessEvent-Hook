#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_IceKoboldAxeman_Calling_Phase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "GA_MonsterGameplayAbilityBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_IceKoboldAxeman_Calling_Phase.GA_IceKoboldAxeman_Calling_Phase_C
// 0x0010 (0x05D8 - 0x05C8)
class UGA_IceKoboldAxeman_Calling_Phase_C final : public UGA_MonsterGameplayAbilityBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x05C8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                           Event_Tag;                                         // 0x05D0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void AbilityActivated(const struct FGameplayEventData& TriggerEventData);
	void EventReceived_2BAF84E84C76494BE9E4979B29DA2BF2(const struct FGameplayEventData& Payload);
	void ExecuteUbergraph_GA_IceKoboldAxeman_Calling_Phase(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_IceKoboldAxeman_Calling_Phase_C">();
	}
	static class UGA_IceKoboldAxeman_Calling_Phase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_IceKoboldAxeman_Calling_Phase_C>();
	}
};
static_assert(alignof(UGA_IceKoboldAxeman_Calling_Phase_C) == 0x000008, "Wrong alignment on UGA_IceKoboldAxeman_Calling_Phase_C");
static_assert(sizeof(UGA_IceKoboldAxeman_Calling_Phase_C) == 0x0005D8, "Wrong size on UGA_IceKoboldAxeman_Calling_Phase_C");
static_assert(offsetof(UGA_IceKoboldAxeman_Calling_Phase_C, UberGraphFrame) == 0x0005C8, "Member 'UGA_IceKoboldAxeman_Calling_Phase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_IceKoboldAxeman_Calling_Phase_C, Event_Tag) == 0x0005D0, "Member 'UGA_IceKoboldAxeman_Calling_Phase_C::Event_Tag' has a wrong offset!");

}

