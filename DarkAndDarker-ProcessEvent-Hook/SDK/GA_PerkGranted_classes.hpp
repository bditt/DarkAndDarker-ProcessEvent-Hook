#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_PerkGranted

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "GA_ActivateOnGranted_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_PerkGranted.GA_PerkGranted_C
// 0x0028 (0x05C8 - 0x05A0)
class UGA_PerkGranted_C : public UGA_ActivateOnGranted_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x05A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                           GrantedBuffTag;                                    // 0x05A8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           BuffTag;                                           // 0x05B0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<struct FPrimaryAssetId>                In_Gameplay_Effect_Id_Array;                       // 0x05B8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_GA_PerkGranted(int32 EntryPoint);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void K2_OnEndAbility(bool bWasCancelled);
	void Removed_99BC46A248ED96A63B3A4E913BC31F32();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_PerkGranted_C">();
	}
	static class UGA_PerkGranted_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_PerkGranted_C>();
	}
};
static_assert(alignof(UGA_PerkGranted_C) == 0x000008, "Wrong alignment on UGA_PerkGranted_C");
static_assert(sizeof(UGA_PerkGranted_C) == 0x0005C8, "Wrong size on UGA_PerkGranted_C");
static_assert(offsetof(UGA_PerkGranted_C, UberGraphFrame) == 0x0005A0, "Member 'UGA_PerkGranted_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_PerkGranted_C, GrantedBuffTag) == 0x0005A8, "Member 'UGA_PerkGranted_C::GrantedBuffTag' has a wrong offset!");
static_assert(offsetof(UGA_PerkGranted_C, BuffTag) == 0x0005B0, "Member 'UGA_PerkGranted_C::BuffTag' has a wrong offset!");
static_assert(offsetof(UGA_PerkGranted_C, In_Gameplay_Effect_Id_Array) == 0x0005B8, "Member 'UGA_PerkGranted_C::In_Gameplay_Effect_Id_Array' has a wrong offset!");

}

