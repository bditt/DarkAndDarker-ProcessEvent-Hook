#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_SkeletonWarlord_SoulPassFromPlayer

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "DungeonCrawler_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_SkeletonWarlord_SoulPassFromPlayer.GA_SkeletonWarlord_SoulPassFromPlayer_C
// 0x0028 (0x0780 - 0x0758)
class UGA_SkeletonWarlord_SoulPassFromPlayer_C final : public UGA_MonsterChargedRangedAttackBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0758(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class ADCCharacterBase*>               Target_Array;                                      // 0x0760(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	class ADCCharacterBase*                       DCCharacter_Base;                                  // 0x0770(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Projectile_Actor;                                  // 0x0778(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void AbilityActivated(const struct FGameplayEventData& TriggerEventData);
	void ExecuteUbergraph_GA_SkeletonWarlord_SoulPassFromPlayer(int32 EntryPoint);
	void OnApplied_CF5CCFE740FA854749CD529B24F66BBF(class AActor* Source, const struct FGameplayEffectSpecHandle& SpecHandle, const struct FActiveGameplayEffectHandle& ActiveHandle);
	void OnFinish_2C0EA8BD41F8B1DEAB9EBF996A705D1A();
	void OnFinish_A81052C64B49D6839A4D65A89622689F();
	void OnSuccess_48A59F624177C1EAB8E96499AAA37DE7(class AActor* ProjectileActor);
	void OnSuccess_6B5820104DE01D620D648692AA6053FF(class AActor* ProjectileActor);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_SkeletonWarlord_SoulPassFromPlayer_C">();
	}
	static class UGA_SkeletonWarlord_SoulPassFromPlayer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_SkeletonWarlord_SoulPassFromPlayer_C>();
	}
};
static_assert(alignof(UGA_SkeletonWarlord_SoulPassFromPlayer_C) == 0x000008, "Wrong alignment on UGA_SkeletonWarlord_SoulPassFromPlayer_C");
static_assert(sizeof(UGA_SkeletonWarlord_SoulPassFromPlayer_C) == 0x000780, "Wrong size on UGA_SkeletonWarlord_SoulPassFromPlayer_C");
static_assert(offsetof(UGA_SkeletonWarlord_SoulPassFromPlayer_C, UberGraphFrame) == 0x000758, "Member 'UGA_SkeletonWarlord_SoulPassFromPlayer_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_SkeletonWarlord_SoulPassFromPlayer_C, Target_Array) == 0x000760, "Member 'UGA_SkeletonWarlord_SoulPassFromPlayer_C::Target_Array' has a wrong offset!");
static_assert(offsetof(UGA_SkeletonWarlord_SoulPassFromPlayer_C, DCCharacter_Base) == 0x000770, "Member 'UGA_SkeletonWarlord_SoulPassFromPlayer_C::DCCharacter_Base' has a wrong offset!");
static_assert(offsetof(UGA_SkeletonWarlord_SoulPassFromPlayer_C, Projectile_Actor) == 0x000778, "Member 'UGA_SkeletonWarlord_SoulPassFromPlayer_C::Projectile_Actor' has a wrong offset!");

}

