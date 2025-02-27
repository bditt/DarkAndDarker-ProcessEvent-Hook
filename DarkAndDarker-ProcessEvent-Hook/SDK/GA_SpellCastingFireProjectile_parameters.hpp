#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_SpellCastingFireProjectile

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function GA_SpellCastingFireProjectile.GA_SpellCastingFireProjectile_C.AbilityActivated_BP
// 0x00B8 (0x00B8 - 0x0000)
struct GA_SpellCastingFireProjectile_C_AbilityActivated_BP final
{
public:
	struct FGameplayEventData                     TriggerEventData;                                  // 0x0000(0x00B0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          bIsSocketSightBlocked;                             // 0x00B0(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_SpellCastingFireProjectile_C_AbilityActivated_BP) == 0x000008, "Wrong alignment on GA_SpellCastingFireProjectile_C_AbilityActivated_BP");
static_assert(sizeof(GA_SpellCastingFireProjectile_C_AbilityActivated_BP) == 0x0000B8, "Wrong size on GA_SpellCastingFireProjectile_C_AbilityActivated_BP");
static_assert(offsetof(GA_SpellCastingFireProjectile_C_AbilityActivated_BP, TriggerEventData) == 0x000000, "Member 'GA_SpellCastingFireProjectile_C_AbilityActivated_BP::TriggerEventData' has a wrong offset!");
static_assert(offsetof(GA_SpellCastingFireProjectile_C_AbilityActivated_BP, bIsSocketSightBlocked) == 0x0000B0, "Member 'GA_SpellCastingFireProjectile_C_AbilityActivated_BP::bIsSocketSightBlocked' has a wrong offset!");

// Function GA_SpellCastingFireProjectile.GA_SpellCastingFireProjectile_C.Cancelled_C378A5BF41738C2738392290DFF9265B
// 0x0028 (0x0028 - 0x0000)
struct GA_SpellCastingFireProjectile_C_Cancelled_C378A5BF41738C2738392290DFF9265B final
{
public:
	struct FGameplayAbilityTargetDataHandle       Data;                                              // 0x0000(0x0028)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(GA_SpellCastingFireProjectile_C_Cancelled_C378A5BF41738C2738392290DFF9265B) == 0x000008, "Wrong alignment on GA_SpellCastingFireProjectile_C_Cancelled_C378A5BF41738C2738392290DFF9265B");
static_assert(sizeof(GA_SpellCastingFireProjectile_C_Cancelled_C378A5BF41738C2738392290DFF9265B) == 0x000028, "Wrong size on GA_SpellCastingFireProjectile_C_Cancelled_C378A5BF41738C2738392290DFF9265B");
static_assert(offsetof(GA_SpellCastingFireProjectile_C_Cancelled_C378A5BF41738C2738392290DFF9265B, Data) == 0x000000, "Member 'GA_SpellCastingFireProjectile_C_Cancelled_C378A5BF41738C2738392290DFF9265B::Data' has a wrong offset!");

// Function GA_SpellCastingFireProjectile.GA_SpellCastingFireProjectile_C.ExecuteUbergraph_GA_SpellCastingFireProjectile
// 0x0278 (0x0278 - 0x0000)
struct GA_SpellCastingFireProjectile_C_ExecuteUbergraph_GA_SpellCastingFireProjectile final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_56EB[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_Data_1;                         // 0x0008(0x0028)(ConstParm)
	TDelegate<void(struct FGameplayAbilityTargetDataHandle& Data)> K2Node_CreateDelegate_OutputDelegate;              // 0x0030(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_Data;                           // 0x0040(0x0028)(ConstParm)
	TDelegate<void(struct FGameplayAbilityTargetDataHandle& Data)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0068(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle       Temp_struct_Variable;                              // 0x0078(0x0028)()
	class UAbilityTask_WaitTargetData*            CallFunc_WaitTargetData_ReturnValue;               // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_56EC[0x7];                                     // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameplayAbilityTargetActor*            CallFunc_BeginSpawningActor_SpawnedActor;          // 0x00B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BeginSpawningActor_ReturnValue;           // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_56ED[0x6];                                     // 0x00BA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_GetHitResultFromTargetData_ReturnValue;   // 0x00C0(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AProjectileActor*                       CallFunc_FireProjectile_ReturnValue;               // 0x01A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetRange_ReturnValue;                     // 0x01B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_56EE[0x4];                                     // 0x01B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_Event_TriggerEventData;                     // 0x01B8(0x00B0)(ConstParm)
	bool                                          K2Node_Event_bIsSocketSightBlocked;                // 0x0268(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_56EF[0x7];                                     // 0x0269(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_SetDoublePropertyByName_Value_ImplicitCast; // 0x0270(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_SpellCastingFireProjectile_C_ExecuteUbergraph_GA_SpellCastingFireProjectile) == 0x000008, "Wrong alignment on GA_SpellCastingFireProjectile_C_ExecuteUbergraph_GA_SpellCastingFireProjectile");
static_assert(sizeof(GA_SpellCastingFireProjectile_C_ExecuteUbergraph_GA_SpellCastingFireProjectile) == 0x000278, "Wrong size on GA_SpellCastingFireProjectile_C_ExecuteUbergraph_GA_SpellCastingFireProjectile");
static_assert(offsetof(GA_SpellCastingFireProjectile_C_ExecuteUbergraph_GA_SpellCastingFireProjectile, EntryPoint) == 0x000000, "Member 'GA_SpellCastingFireProjectile_C_ExecuteUbergraph_GA_SpellCastingFireProjectile::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_SpellCastingFireProjectile_C_ExecuteUbergraph_GA_SpellCastingFireProjectile, K2Node_CustomEvent_Data_1) == 0x000008, "Member 'GA_SpellCastingFireProjectile_C_ExecuteUbergraph_GA_SpellCastingFireProjectile::K2Node_CustomEvent_Data_1' has a wrong offset!");
static_assert(offsetof(GA_SpellCastingFireProjectile_C_ExecuteUbergraph_GA_SpellCastingFireProjectile, K2Node_CreateDelegate_OutputDelegate) == 0x000030, "Member 'GA_SpellCastingFireProjectile_C_ExecuteUbergraph_GA_SpellCastingFireProjectile::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_SpellCastingFireProjectile_C_ExecuteUbergraph_GA_SpellCastingFireProjectile, K2Node_CustomEvent_Data) == 0x000040, "Member 'GA_SpellCastingFireProjectile_C_ExecuteUbergraph_GA_SpellCastingFireProjectile::K2Node_CustomEvent_Data' has a wrong offset!");
static_assert(offsetof(GA_SpellCastingFireProjectile_C_ExecuteUbergraph_GA_SpellCastingFireProjectile, K2Node_CreateDelegate_OutputDelegate_1) == 0x000068, "Member 'GA_SpellCastingFireProjectile_C_ExecuteUbergraph_GA_SpellCastingFireProjectile::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GA_SpellCastingFireProjectile_C_ExecuteUbergraph_GA_SpellCastingFireProjectile, Temp_struct_Variable) == 0x000078, "Member 'GA_SpellCastingFireProjectile_C_ExecuteUbergraph_GA_SpellCastingFireProjectile::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GA_SpellCastingFireProjectile_C_ExecuteUbergraph_GA_SpellCastingFireProjectile, CallFunc_WaitTargetData_ReturnValue) == 0x0000A0, "Member 'GA_SpellCastingFireProjectile_C_ExecuteUbergraph_GA_SpellCastingFireProjectile::CallFunc_WaitTargetData_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SpellCastingFireProjectile_C_ExecuteUbergraph_GA_SpellCastingFireProjectile, CallFunc_IsValid_ReturnValue) == 0x0000A8, "Member 'GA_SpellCastingFireProjectile_C_ExecuteUbergraph_GA_SpellCastingFireProjectile::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SpellCastingFireProjectile_C_ExecuteUbergraph_GA_SpellCastingFireProjectile, CallFunc_BeginSpawningActor_SpawnedActor) == 0x0000B0, "Member 'GA_SpellCastingFireProjectile_C_ExecuteUbergraph_GA_SpellCastingFireProjectile::CallFunc_BeginSpawningActor_SpawnedActor' has a wrong offset!");
static_assert(offsetof(GA_SpellCastingFireProjectile_C_ExecuteUbergraph_GA_SpellCastingFireProjectile, CallFunc_BeginSpawningActor_ReturnValue) == 0x0000B8, "Member 'GA_SpellCastingFireProjectile_C_ExecuteUbergraph_GA_SpellCastingFireProjectile::CallFunc_BeginSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SpellCastingFireProjectile_C_ExecuteUbergraph_GA_SpellCastingFireProjectile, CallFunc_IsValid_ReturnValue_1) == 0x0000B9, "Member 'GA_SpellCastingFireProjectile_C_ExecuteUbergraph_GA_SpellCastingFireProjectile::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_SpellCastingFireProjectile_C_ExecuteUbergraph_GA_SpellCastingFireProjectile, CallFunc_GetHitResultFromTargetData_ReturnValue) == 0x0000C0, "Member 'GA_SpellCastingFireProjectile_C_ExecuteUbergraph_GA_SpellCastingFireProjectile::CallFunc_GetHitResultFromTargetData_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SpellCastingFireProjectile_C_ExecuteUbergraph_GA_SpellCastingFireProjectile, CallFunc_FireProjectile_ReturnValue) == 0x0001A8, "Member 'GA_SpellCastingFireProjectile_C_ExecuteUbergraph_GA_SpellCastingFireProjectile::CallFunc_FireProjectile_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SpellCastingFireProjectile_C_ExecuteUbergraph_GA_SpellCastingFireProjectile, CallFunc_GetRange_ReturnValue) == 0x0001B0, "Member 'GA_SpellCastingFireProjectile_C_ExecuteUbergraph_GA_SpellCastingFireProjectile::CallFunc_GetRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SpellCastingFireProjectile_C_ExecuteUbergraph_GA_SpellCastingFireProjectile, K2Node_Event_TriggerEventData) == 0x0001B8, "Member 'GA_SpellCastingFireProjectile_C_ExecuteUbergraph_GA_SpellCastingFireProjectile::K2Node_Event_TriggerEventData' has a wrong offset!");
static_assert(offsetof(GA_SpellCastingFireProjectile_C_ExecuteUbergraph_GA_SpellCastingFireProjectile, K2Node_Event_bIsSocketSightBlocked) == 0x000268, "Member 'GA_SpellCastingFireProjectile_C_ExecuteUbergraph_GA_SpellCastingFireProjectile::K2Node_Event_bIsSocketSightBlocked' has a wrong offset!");
static_assert(offsetof(GA_SpellCastingFireProjectile_C_ExecuteUbergraph_GA_SpellCastingFireProjectile, CallFunc_SetDoublePropertyByName_Value_ImplicitCast) == 0x000270, "Member 'GA_SpellCastingFireProjectile_C_ExecuteUbergraph_GA_SpellCastingFireProjectile::CallFunc_SetDoublePropertyByName_Value_ImplicitCast' has a wrong offset!");

// Function GA_SpellCastingFireProjectile.GA_SpellCastingFireProjectile_C.ValidData_C378A5BF41738C2738392290DFF9265B
// 0x0028 (0x0028 - 0x0000)
struct GA_SpellCastingFireProjectile_C_ValidData_C378A5BF41738C2738392290DFF9265B final
{
public:
	struct FGameplayAbilityTargetDataHandle       Data;                                              // 0x0000(0x0028)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(GA_SpellCastingFireProjectile_C_ValidData_C378A5BF41738C2738392290DFF9265B) == 0x000008, "Wrong alignment on GA_SpellCastingFireProjectile_C_ValidData_C378A5BF41738C2738392290DFF9265B");
static_assert(sizeof(GA_SpellCastingFireProjectile_C_ValidData_C378A5BF41738C2738392290DFF9265B) == 0x000028, "Wrong size on GA_SpellCastingFireProjectile_C_ValidData_C378A5BF41738C2738392290DFF9265B");
static_assert(offsetof(GA_SpellCastingFireProjectile_C_ValidData_C378A5BF41738C2738392290DFF9265B, Data) == 0x000000, "Member 'GA_SpellCastingFireProjectile_C_ValidData_C378A5BF41738C2738392290DFF9265B::Data' has a wrong offset!");

}

