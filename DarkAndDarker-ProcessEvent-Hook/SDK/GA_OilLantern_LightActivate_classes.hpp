#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_OilLantern_LightActivate

#include "Basic.hpp"

#include "GA_ActivateItem_classes.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_OilLantern_LightActivate.GA_OilLantern_LightActivate_C
// 0x0020 (0x0608 - 0x05E8)
class UGA_OilLantern_LightActivate_C final : public UGA_ActivateItem_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_OilLantern_LightActivate_C;      // 0x05E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAnimMontage*                           MontageToPlay_SourceObject;                        // 0x05F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<struct FPrimaryAssetId>                OilLantern_Activate_Id;                            // 0x05F8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void AbilityActivated(const struct FGameplayEventData& TriggerEventData);
	void ExecuteUbergraph_GA_OilLantern_LightActivate(int32 EntryPoint);
	void InputActionCompleted_2ECE16BB4BD658617D893EA21CA677EA();
	void InputActionStarted_2ECE16BB4BD658617D893EA21CA677EA();
	void PlayAnimation(class FName PlaySection);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_OilLantern_LightActivate_C">();
	}
	static class UGA_OilLantern_LightActivate_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_OilLantern_LightActivate_C>();
	}
};
static_assert(alignof(UGA_OilLantern_LightActivate_C) == 0x000008, "Wrong alignment on UGA_OilLantern_LightActivate_C");
static_assert(sizeof(UGA_OilLantern_LightActivate_C) == 0x000608, "Wrong size on UGA_OilLantern_LightActivate_C");
static_assert(offsetof(UGA_OilLantern_LightActivate_C, UberGraphFrame_GA_OilLantern_LightActivate_C) == 0x0005E8, "Member 'UGA_OilLantern_LightActivate_C::UberGraphFrame_GA_OilLantern_LightActivate_C' has a wrong offset!");
static_assert(offsetof(UGA_OilLantern_LightActivate_C, MontageToPlay_SourceObject) == 0x0005F0, "Member 'UGA_OilLantern_LightActivate_C::MontageToPlay_SourceObject' has a wrong offset!");
static_assert(offsetof(UGA_OilLantern_LightActivate_C, OilLantern_Activate_Id) == 0x0005F8, "Member 'UGA_OilLantern_LightActivate_C::OilLantern_Activate_Id' has a wrong offset!");

}

