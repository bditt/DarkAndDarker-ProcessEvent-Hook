#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FallingIcicleProjectile

#include "Basic.hpp"

#include "AkAudio_structs.hpp"


namespace SDK::Params
{

// Function BP_FallingIcicleProjectile.BP_FallingIcicleProjectile_C.ExecuteUbergraph_BP_FallingIcicleProjectile
// 0x0018 (0x0018 - 0x0000)
struct BP_FallingIcicleProjectile_C_ExecuteUbergraph_BP_FallingIcicleProjectile final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable;                            // 0x0004(0x0010)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PostAkEvent_ReturnValue;                  // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FallingIcicleProjectile_C_ExecuteUbergraph_BP_FallingIcicleProjectile) == 0x000004, "Wrong alignment on BP_FallingIcicleProjectile_C_ExecuteUbergraph_BP_FallingIcicleProjectile");
static_assert(sizeof(BP_FallingIcicleProjectile_C_ExecuteUbergraph_BP_FallingIcicleProjectile) == 0x000018, "Wrong size on BP_FallingIcicleProjectile_C_ExecuteUbergraph_BP_FallingIcicleProjectile");
static_assert(offsetof(BP_FallingIcicleProjectile_C_ExecuteUbergraph_BP_FallingIcicleProjectile, EntryPoint) == 0x000000, "Member 'BP_FallingIcicleProjectile_C_ExecuteUbergraph_BP_FallingIcicleProjectile::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_FallingIcicleProjectile_C_ExecuteUbergraph_BP_FallingIcicleProjectile, Temp_delegate_Variable) == 0x000004, "Member 'BP_FallingIcicleProjectile_C_ExecuteUbergraph_BP_FallingIcicleProjectile::Temp_delegate_Variable' has a wrong offset!");
static_assert(offsetof(BP_FallingIcicleProjectile_C_ExecuteUbergraph_BP_FallingIcicleProjectile, CallFunc_PostAkEvent_ReturnValue) == 0x000014, "Member 'BP_FallingIcicleProjectile_C_ExecuteUbergraph_BP_FallingIcicleProjectile::CallFunc_PostAkEvent_ReturnValue' has a wrong offset!");

}

