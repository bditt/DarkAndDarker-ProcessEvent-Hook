#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_IceGiantSpider_SpiderWeb

#include "Basic.hpp"

#include "BP_AoeDefineBase_Sphere_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_IceGiantSpider_SpiderWeb.BP_IceGiantSpider_SpiderWeb_C
// 0x0020 (0x0930 - 0x0910)
class ABP_IceGiantSpider_SpiderWeb_C final : public ABP_AoeDefineBase_Sphere_C
{
public:
	class UNiagaraComponent*                      FX_OnDestroy;                                      // 0x0908(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   FX_Web_Feature1;                                   // 0x0910(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   FX_Web_Feature;                                    // 0x0918(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   FX_Web_Ambient;                                    // 0x0920(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_IceGiantSpider_SpiderWeb_C">();
	}
	static class ABP_IceGiantSpider_SpiderWeb_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_IceGiantSpider_SpiderWeb_C>();
	}
};
static_assert(alignof(ABP_IceGiantSpider_SpiderWeb_C) == 0x000010, "Wrong alignment on ABP_IceGiantSpider_SpiderWeb_C");
static_assert(sizeof(ABP_IceGiantSpider_SpiderWeb_C) == 0x000930, "Wrong size on ABP_IceGiantSpider_SpiderWeb_C");
static_assert(offsetof(ABP_IceGiantSpider_SpiderWeb_C, FX_OnDestroy) == 0x000908, "Member 'ABP_IceGiantSpider_SpiderWeb_C::FX_OnDestroy' has a wrong offset!");
static_assert(offsetof(ABP_IceGiantSpider_SpiderWeb_C, FX_Web_Feature1) == 0x000910, "Member 'ABP_IceGiantSpider_SpiderWeb_C::FX_Web_Feature1' has a wrong offset!");
static_assert(offsetof(ABP_IceGiantSpider_SpiderWeb_C, FX_Web_Feature) == 0x000918, "Member 'ABP_IceGiantSpider_SpiderWeb_C::FX_Web_Feature' has a wrong offset!");
static_assert(offsetof(ABP_IceGiantSpider_SpiderWeb_C, FX_Web_Ambient) == 0x000920, "Member 'ABP_IceGiantSpider_SpiderWeb_C::FX_Web_Ambient' has a wrong offset!");

}

