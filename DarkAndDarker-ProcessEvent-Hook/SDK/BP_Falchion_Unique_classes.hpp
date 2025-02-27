#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Falchion_Unique

#include "Basic.hpp"

#include "BP_UniqueItemActor_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Falchion_Unique.BP_Falchion_Unique_C
// 0x0010 (0x05B0 - 0x05A0)
class ABP_Falchion_Unique_C final : public ABP_UniqueItemActor_C
{
public:
	class UNiagaraComponent*                      FXS_Kuma_ArmingSword_CrackGlow;                    // 0x05A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      FXS_Kuma_ArmingSword;                              // 0x05A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Falchion_Unique_C">();
	}
	static class ABP_Falchion_Unique_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Falchion_Unique_C>();
	}
};
static_assert(alignof(ABP_Falchion_Unique_C) == 0x000008, "Wrong alignment on ABP_Falchion_Unique_C");
static_assert(sizeof(ABP_Falchion_Unique_C) == 0x0005B0, "Wrong size on ABP_Falchion_Unique_C");
static_assert(offsetof(ABP_Falchion_Unique_C, FXS_Kuma_ArmingSword_CrackGlow) == 0x0005A0, "Member 'ABP_Falchion_Unique_C::FXS_Kuma_ArmingSword_CrackGlow' has a wrong offset!");
static_assert(offsetof(ABP_Falchion_Unique_C, FXS_Kuma_ArmingSword) == 0x0005A8, "Member 'ABP_Falchion_Unique_C::FXS_Kuma_ArmingSword' has a wrong offset!");

}

