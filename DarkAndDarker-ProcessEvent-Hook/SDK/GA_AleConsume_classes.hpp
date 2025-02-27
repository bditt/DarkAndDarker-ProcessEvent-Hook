#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_AleConsume

#include "Basic.hpp"

#include "GA_ItemConsume_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_AleConsume.GA_AleConsume_C
// 0x0010 (0x0768 - 0x0758)
class UGA_AleConsume_C final : public UGA_ItemConsume_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0758(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class ABP_DrinkPotionActor_C*                 DrinkPotionActor;                                  // 0x0760(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void AbilityActivated(const struct FGameplayEventData& TriggerEventData);
	void ExecuteUbergraph_GA_AleConsume(int32 EntryPoint);
	void K2_OnEndAbility(bool bWasCancelled);
	void OnConsumeEndEventReceived();
	void OnConsumeStartEventReceived(const float ConsumeDuration);
	void OnConsumeSucceed();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_AleConsume_C">();
	}
	static class UGA_AleConsume_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_AleConsume_C>();
	}
};
static_assert(alignof(UGA_AleConsume_C) == 0x000008, "Wrong alignment on UGA_AleConsume_C");
static_assert(sizeof(UGA_AleConsume_C) == 0x000768, "Wrong size on UGA_AleConsume_C");
static_assert(offsetof(UGA_AleConsume_C, UberGraphFrame) == 0x000758, "Member 'UGA_AleConsume_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_AleConsume_C, DrinkPotionActor) == 0x000760, "Member 'UGA_AleConsume_C::DrinkPotionActor' has a wrong offset!");

}

