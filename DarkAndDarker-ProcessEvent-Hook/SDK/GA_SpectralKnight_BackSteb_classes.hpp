#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_SpectralKnight_BackSteb

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_PlayMontageAndWaitForEventBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_SpectralKnight_BackSteb.GA_SpectralKnight_BackSteb_C
// 0x0010 (0x0688 - 0x0678)
class UGA_SpectralKnight_BackSteb_C final : public UGA_PlayMontageAndWaitForEventBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_SpectralKnight_BackSteb_C;       // 0x0678(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class ABP_SpectralKnight_Common_C*            As_BP_Spectral_Knight;                             // 0x0680(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void AbilityActivated(const struct FGameplayEventData& TriggerEventData);
	void EventReceived_57ABDD48430FD50FB0379D9C6221C337(const struct FGameplayEventData& Payload);
	void ExecuteUbergraph_GA_SpectralKnight_BackSteb(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_SpectralKnight_BackSteb_C">();
	}
	static class UGA_SpectralKnight_BackSteb_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_SpectralKnight_BackSteb_C>();
	}
};
static_assert(alignof(UGA_SpectralKnight_BackSteb_C) == 0x000008, "Wrong alignment on UGA_SpectralKnight_BackSteb_C");
static_assert(sizeof(UGA_SpectralKnight_BackSteb_C) == 0x000688, "Wrong size on UGA_SpectralKnight_BackSteb_C");
static_assert(offsetof(UGA_SpectralKnight_BackSteb_C, UberGraphFrame_GA_SpectralKnight_BackSteb_C) == 0x000678, "Member 'UGA_SpectralKnight_BackSteb_C::UberGraphFrame_GA_SpectralKnight_BackSteb_C' has a wrong offset!");
static_assert(offsetof(UGA_SpectralKnight_BackSteb_C, As_BP_Spectral_Knight) == 0x000680, "Member 'UGA_SpectralKnight_BackSteb_C::As_BP_Spectral_Knight' has a wrong offset!");

}

