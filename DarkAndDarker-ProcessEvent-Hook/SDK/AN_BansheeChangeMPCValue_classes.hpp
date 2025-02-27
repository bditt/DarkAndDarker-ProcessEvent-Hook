#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AN_BansheeChangeMPCValue

#include "Basic.hpp"

#include "S_BansheeMPCChangeValue_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AN_BansheeChangeMPCValue.AN_BansheeChangeMPCValue_C
// 0x0010 (0x0048 - 0x0038)
class UAN_BansheeChangeMPCValue_C final : public UAnimNotify
{
public:
	TArray<struct FS_BansheeMPCChangeValue>       MPCParameter;                                      // 0x0038(0x0010)(Edit, BlueprintVisible)

public:
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const struct FAnimNotifyEventReference& EventReference) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AN_BansheeChangeMPCValue_C">();
	}
	static class UAN_BansheeChangeMPCValue_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAN_BansheeChangeMPCValue_C>();
	}
};
static_assert(alignof(UAN_BansheeChangeMPCValue_C) == 0x000008, "Wrong alignment on UAN_BansheeChangeMPCValue_C");
static_assert(sizeof(UAN_BansheeChangeMPCValue_C) == 0x000048, "Wrong size on UAN_BansheeChangeMPCValue_C");
static_assert(offsetof(UAN_BansheeChangeMPCValue_C, MPCParameter) == 0x000038, "Member 'UAN_BansheeChangeMPCValue_C::MPCParameter' has a wrong offset!");

}

