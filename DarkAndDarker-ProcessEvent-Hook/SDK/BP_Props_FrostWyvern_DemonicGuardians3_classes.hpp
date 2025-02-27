#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Props_FrostWyvern_DemonicGuardians3

#include "Basic.hpp"

#include "BP_Props_FrostWyvern_DemonicGuardians_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Props_FrostWyvern_DemonicGuardians3.BP_Props_FrostWyvern_DemonicGuardians3_C
// 0x0018 (0x0560 - 0x0548)
class ABP_Props_FrostWyvern_DemonicGuardians3_C final : public ABP_Props_FrostWyvern_DemonicGuardians_C
{
public:
	class UStaticMeshComponent*                   SM_IceAbyss_StatueProp;                            // 0x0548(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_IceAbyss_StatueSphere;                          // 0x0550(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Beta;                                           // 0x0558(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Props_FrostWyvern_DemonicGuardians3_C">();
	}
	static class ABP_Props_FrostWyvern_DemonicGuardians3_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Props_FrostWyvern_DemonicGuardians3_C>();
	}
};
static_assert(alignof(ABP_Props_FrostWyvern_DemonicGuardians3_C) == 0x000008, "Wrong alignment on ABP_Props_FrostWyvern_DemonicGuardians3_C");
static_assert(sizeof(ABP_Props_FrostWyvern_DemonicGuardians3_C) == 0x000560, "Wrong size on ABP_Props_FrostWyvern_DemonicGuardians3_C");
static_assert(offsetof(ABP_Props_FrostWyvern_DemonicGuardians3_C, SM_IceAbyss_StatueProp) == 0x000548, "Member 'ABP_Props_FrostWyvern_DemonicGuardians3_C::SM_IceAbyss_StatueProp' has a wrong offset!");
static_assert(offsetof(ABP_Props_FrostWyvern_DemonicGuardians3_C, SM_IceAbyss_StatueSphere) == 0x000550, "Member 'ABP_Props_FrostWyvern_DemonicGuardians3_C::SM_IceAbyss_StatueSphere' has a wrong offset!");
static_assert(offsetof(ABP_Props_FrostWyvern_DemonicGuardians3_C, SM_Beta) == 0x000558, "Member 'ABP_Props_FrostWyvern_DemonicGuardians3_C::SM_Beta' has a wrong offset!");

}

