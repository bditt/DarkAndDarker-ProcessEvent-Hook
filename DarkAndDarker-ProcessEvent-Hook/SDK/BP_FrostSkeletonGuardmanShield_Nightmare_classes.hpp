#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FrostSkeletonGuardmanShield_Nightmare

#include "Basic.hpp"

#include "BP_FrostSkeletonGuardmanShield_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_FrostSkeletonGuardmanShield_Nightmare.BP_FrostSkeletonGuardmanShield_Nightmare_C
// 0x0008 (0x0578 - 0x0570)
class ABP_FrostSkeletonGuardmanShield_Nightmare_C final : public ABP_FrostSkeletonGuardmanShield_C
{
public:
	class UNiagaraComponent*                      Niagara;                                           // 0x0570(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FrostSkeletonGuardmanShield_Nightmare_C">();
	}
	static class ABP_FrostSkeletonGuardmanShield_Nightmare_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_FrostSkeletonGuardmanShield_Nightmare_C>();
	}
};
static_assert(alignof(ABP_FrostSkeletonGuardmanShield_Nightmare_C) == 0x000008, "Wrong alignment on ABP_FrostSkeletonGuardmanShield_Nightmare_C");
static_assert(sizeof(ABP_FrostSkeletonGuardmanShield_Nightmare_C) == 0x000578, "Wrong size on ABP_FrostSkeletonGuardmanShield_Nightmare_C");
static_assert(offsetof(ABP_FrostSkeletonGuardmanShield_Nightmare_C, Niagara) == 0x000570, "Member 'ABP_FrostSkeletonGuardmanShield_Nightmare_C::Niagara' has a wrong offset!");

}

