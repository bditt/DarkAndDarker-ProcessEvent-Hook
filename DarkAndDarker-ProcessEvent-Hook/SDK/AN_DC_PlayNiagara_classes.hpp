#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AN_DC_PlayNiagara

#include "Basic.hpp"

#include "NiagaraAnimNotifies_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass AN_DC_PlayNiagara.AN_DC_PlayNiagara_C
// 0x0020 (0x00F0 - 0x00D0)
class UAN_DC_PlayNiagara_C final : public UAnimNotify_PlayNiagaraEffect
{
public:
	int32                                         Translucent_Sort_Priority_Override;                // 0x00D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Use_World_Scale;                                   // 0x00D4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_48D9[0x3];                                     // 0x00D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Scale_Multiplier__World_Scale_;                    // 0x00D8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const struct FAnimNotifyEventReference& EventReference) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AN_DC_PlayNiagara_C">();
	}
	static class UAN_DC_PlayNiagara_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAN_DC_PlayNiagara_C>();
	}
};
static_assert(alignof(UAN_DC_PlayNiagara_C) == 0x000010, "Wrong alignment on UAN_DC_PlayNiagara_C");
static_assert(sizeof(UAN_DC_PlayNiagara_C) == 0x0000F0, "Wrong size on UAN_DC_PlayNiagara_C");
static_assert(offsetof(UAN_DC_PlayNiagara_C, Translucent_Sort_Priority_Override) == 0x0000D0, "Member 'UAN_DC_PlayNiagara_C::Translucent_Sort_Priority_Override' has a wrong offset!");
static_assert(offsetof(UAN_DC_PlayNiagara_C, Use_World_Scale) == 0x0000D4, "Member 'UAN_DC_PlayNiagara_C::Use_World_Scale' has a wrong offset!");
static_assert(offsetof(UAN_DC_PlayNiagara_C, Scale_Multiplier__World_Scale_) == 0x0000D8, "Member 'UAN_DC_PlayNiagara_C::Scale_Multiplier__World_Scale_' has a wrong offset!");

}

