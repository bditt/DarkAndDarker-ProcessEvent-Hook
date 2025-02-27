#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_IceWall_04

#include "Basic.hpp"

#include "BP_PropsActorBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_IceWall_04.BP_IceWall_04_C
// 0x0010 (0x04C8 - 0x04B8)
class ABP_IceWall_04_C final : public ABP_PropsActorBase_C
{
public:
	class UDCGeometryCollectionComponent*         GC_IceWall_Default;                                // 0x04B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x04C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_IceWall_04_C">();
	}
	static class ABP_IceWall_04_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_IceWall_04_C>();
	}
};
static_assert(alignof(ABP_IceWall_04_C) == 0x000008, "Wrong alignment on ABP_IceWall_04_C");
static_assert(sizeof(ABP_IceWall_04_C) == 0x0004C8, "Wrong size on ABP_IceWall_04_C");
static_assert(offsetof(ABP_IceWall_04_C, GC_IceWall_Default) == 0x0004B8, "Member 'ABP_IceWall_04_C::GC_IceWall_Default' has a wrong offset!");
static_assert(offsetof(ABP_IceWall_04_C, StaticMesh) == 0x0004C0, "Member 'ABP_IceWall_04_C::StaticMesh' has a wrong offset!");

}

