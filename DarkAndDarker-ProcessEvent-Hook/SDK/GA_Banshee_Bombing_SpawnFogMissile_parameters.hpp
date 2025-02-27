#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Banshee_Bombing_SpawnFogMissile

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function GA_Banshee_Bombing_SpawnFogMissile.GA_Banshee_Bombing_SpawnFogMissile_C.AbilityActivated
// 0x00B0 (0x00B0 - 0x0000)
struct GA_Banshee_Bombing_SpawnFogMissile_C_AbilityActivated final
{
public:
	struct FGameplayEventData                     TriggerEventData;                                  // 0x0000(0x00B0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GA_Banshee_Bombing_SpawnFogMissile_C_AbilityActivated) == 0x000008, "Wrong alignment on GA_Banshee_Bombing_SpawnFogMissile_C_AbilityActivated");
static_assert(sizeof(GA_Banshee_Bombing_SpawnFogMissile_C_AbilityActivated) == 0x0000B0, "Wrong size on GA_Banshee_Bombing_SpawnFogMissile_C_AbilityActivated");
static_assert(offsetof(GA_Banshee_Bombing_SpawnFogMissile_C_AbilityActivated, TriggerEventData) == 0x000000, "Member 'GA_Banshee_Bombing_SpawnFogMissile_C_AbilityActivated::TriggerEventData' has a wrong offset!");

// Function GA_Banshee_Bombing_SpawnFogMissile.GA_Banshee_Bombing_SpawnFogMissile_C.Call Projectile Spawn Event
// 0x000C (0x000C - 0x0000)
struct GA_Banshee_Bombing_SpawnFogMissile_C_Call_Projectile_Spawn_Event final
{
public:
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Banshee_Bombing_SpawnFogMissile_C_Call_Projectile_Spawn_Event) == 0x000004, "Wrong alignment on GA_Banshee_Bombing_SpawnFogMissile_C_Call_Projectile_Spawn_Event");
static_assert(sizeof(GA_Banshee_Bombing_SpawnFogMissile_C_Call_Projectile_Spawn_Event) == 0x00000C, "Wrong size on GA_Banshee_Bombing_SpawnFogMissile_C_Call_Projectile_Spawn_Event");
static_assert(offsetof(GA_Banshee_Bombing_SpawnFogMissile_C_Call_Projectile_Spawn_Event, CallFunc_Add_IntInt_ReturnValue) == 0x000000, "Member 'GA_Banshee_Bombing_SpawnFogMissile_C_Call_Projectile_Spawn_Event::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Banshee_Bombing_SpawnFogMissile_C_Call_Projectile_Spawn_Event, Temp_int_Variable) == 0x000004, "Member 'GA_Banshee_Bombing_SpawnFogMissile_C_Call_Projectile_Spawn_Event::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(GA_Banshee_Bombing_SpawnFogMissile_C_Call_Projectile_Spawn_Event, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000008, "Member 'GA_Banshee_Bombing_SpawnFogMissile_C_Call_Projectile_Spawn_Event::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");

// Function GA_Banshee_Bombing_SpawnFogMissile.GA_Banshee_Bombing_SpawnFogMissile_C.ExecuteUbergraph_GA_Banshee_Bombing_SpawnFogMissile
// 0x03C0 (0x03C0 - 0x0000)
struct GA_Banshee_Bombing_SpawnFogMissile_C_ExecuteUbergraph_GA_Banshee_Bombing_SpawnFogMissile final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4538[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_CustomEvent_ProjectileActor;                // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_Banshee_Common_C*                   K2Node_DynamicCast_AsBP_Banshee_Common;            // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4539[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 Temp_object_Variable;                              // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AProjectileActor*                       K2Node_DynamicCast_AsProjectile_Actor;             // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_453A[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     Temp_struct_Variable;                              // 0x0040(0x00B0)(ConstParm)
	struct FGameplayEventData                     K2Node_Event_TriggerEventData;                     // 0x00F0(0x00B0)(ConstParm)
	struct FHitResult                             CallFunc_GetHitResultFromTargetData_ReturnValue;   // 0x01A0(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0288(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_RandomFloatInRange_ReturnValue;           // 0x02A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bWasCancelled;                        // 0x02A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_453B[0x7];                                     // 0x02A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimer_ReturnValue;                  // 0x02B0(0x0008)(NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Random_OutItem;                     // 0x02B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Random_OutIndex;                    // 0x02BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Array_Get_Item;                           // 0x02C0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_FindLookAtRotation_ReturnValue;           // 0x02D8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x02F0(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_RemoveItem_ReturnValue;             // 0x0350(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_453C[0x7];                                     // 0x0351(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UDCAT_SpawnProjectile*                  CallFunc_SpawnProjectile_ReturnValue;              // 0x0358(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0360(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_453D[0x7];                                     // 0x0361(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ADCCharacterBase*                       K2Node_DynamicCast_AsDCCharacter_Base;             // 0x0368(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0370(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_453E[0x7];                                     // 0x0371(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FVector>                        CallFunc_Get_FogMissile1_Spawn_Location_Return_Spawn_Locations; // 0x0378(0x0010)(ReferenceParm)
	TDelegate<void(class AActor* ProjectileActor)> K2Node_CreateDelegate_OutputDelegate;              // 0x0388(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0398(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x039C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x03A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x03A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_453F[0x3];                                     // 0x03A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x03A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4540[0x4];                                     // 0x03AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ADCCharacterBase*                       K2Node_DynamicCast_AsDCCharacter_Base_1;           // 0x03B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x03B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4541[0x3];                                     // 0x03B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_K2_SetTimer_Time_ImplicitCast;            // 0x03BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Banshee_Bombing_SpawnFogMissile_C_ExecuteUbergraph_GA_Banshee_Bombing_SpawnFogMissile) == 0x000010, "Wrong alignment on GA_Banshee_Bombing_SpawnFogMissile_C_ExecuteUbergraph_GA_Banshee_Bombing_SpawnFogMissile");
static_assert(sizeof(GA_Banshee_Bombing_SpawnFogMissile_C_ExecuteUbergraph_GA_Banshee_Bombing_SpawnFogMissile) == 0x0003C0, "Wrong size on GA_Banshee_Bombing_SpawnFogMissile_C_ExecuteUbergraph_GA_Banshee_Bombing_SpawnFogMissile");
static_assert(offsetof(GA_Banshee_Bombing_SpawnFogMissile_C_ExecuteUbergraph_GA_Banshee_Bombing_SpawnFogMissile, EntryPoint) == 0x000000, "Member 'GA_Banshee_Bombing_SpawnFogMissile_C_ExecuteUbergraph_GA_Banshee_Bombing_SpawnFogMissile::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Banshee_Bombing_SpawnFogMissile_C_ExecuteUbergraph_GA_Banshee_Bombing_SpawnFogMissile, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000008, "Member 'GA_Banshee_Bombing_SpawnFogMissile_C_ExecuteUbergraph_GA_Banshee_Bombing_SpawnFogMissile::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Banshee_Bombing_SpawnFogMissile_C_ExecuteUbergraph_GA_Banshee_Bombing_SpawnFogMissile, K2Node_CustomEvent_ProjectileActor) == 0x000010, "Member 'GA_Banshee_Bombing_SpawnFogMissile_C_ExecuteUbergraph_GA_Banshee_Bombing_SpawnFogMissile::K2Node_CustomEvent_ProjectileActor' has a wrong offset!");
static_assert(offsetof(GA_Banshee_Bombing_SpawnFogMissile_C_ExecuteUbergraph_GA_Banshee_Bombing_SpawnFogMissile, K2Node_DynamicCast_AsBP_Banshee_Common) == 0x000018, "Member 'GA_Banshee_Bombing_SpawnFogMissile_C_ExecuteUbergraph_GA_Banshee_Bombing_SpawnFogMissile::K2Node_DynamicCast_AsBP_Banshee_Common' has a wrong offset!");
static_assert(offsetof(GA_Banshee_Bombing_SpawnFogMissile_C_ExecuteUbergraph_GA_Banshee_Bombing_SpawnFogMissile, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'GA_Banshee_Bombing_SpawnFogMissile_C_ExecuteUbergraph_GA_Banshee_Bombing_SpawnFogMissile::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Banshee_Bombing_SpawnFogMissile_C_ExecuteUbergraph_GA_Banshee_Bombing_SpawnFogMissile, Temp_object_Variable) == 0x000028, "Member 'GA_Banshee_Bombing_SpawnFogMissile_C_ExecuteUbergraph_GA_Banshee_Bombing_SpawnFogMissile::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(GA_Banshee_Bombing_SpawnFogMissile_C_ExecuteUbergraph_GA_Banshee_Bombing_SpawnFogMissile, K2Node_DynamicCast_AsProjectile_Actor) == 0x000030, "Member 'GA_Banshee_Bombing_SpawnFogMissile_C_ExecuteUbergraph_GA_Banshee_Bombing_SpawnFogMissile::K2Node_DynamicCast_AsProjectile_Actor' has a wrong offset!");
static_assert(offsetof(GA_Banshee_Bombing_SpawnFogMissile_C_ExecuteUbergraph_GA_Banshee_Bombing_SpawnFogMissile, K2Node_DynamicCast_bSuccess_1) == 0x000038, "Member 'GA_Banshee_Bombing_SpawnFogMissile_C_ExecuteUbergraph_GA_Banshee_Bombing_SpawnFogMissile::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GA_Banshee_Bombing_SpawnFogMissile_C_ExecuteUbergraph_GA_Banshee_Bombing_SpawnFogMissile, Temp_struct_Variable) == 0x000040, "Member 'GA_Banshee_Bombing_SpawnFogMissile_C_ExecuteUbergraph_GA_Banshee_Bombing_SpawnFogMissile::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GA_Banshee_Bombing_SpawnFogMissile_C_ExecuteUbergraph_GA_Banshee_Bombing_SpawnFogMissile, K2Node_Event_TriggerEventData) == 0x0000F0, "Member 'GA_Banshee_Bombing_SpawnFogMissile_C_ExecuteUbergraph_GA_Banshee_Bombing_SpawnFogMissile::K2Node_Event_TriggerEventData' has a wrong offset!");
static_assert(offsetof(GA_Banshee_Bombing_SpawnFogMissile_C_ExecuteUbergraph_GA_Banshee_Bombing_SpawnFogMissile, CallFunc_GetHitResultFromTargetData_ReturnValue) == 0x0001A0, "Member 'GA_Banshee_Bombing_SpawnFogMissile_C_ExecuteUbergraph_GA_Banshee_Bombing_SpawnFogMissile::CallFunc_GetHitResultFromTargetData_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Banshee_Bombing_SpawnFogMissile_C_ExecuteUbergraph_GA_Banshee_Bombing_SpawnFogMissile, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000288, "Member 'GA_Banshee_Bombing_SpawnFogMissile_C_ExecuteUbergraph_GA_Banshee_Bombing_SpawnFogMissile::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Banshee_Bombing_SpawnFogMissile_C_ExecuteUbergraph_GA_Banshee_Bombing_SpawnFogMissile, CallFunc_RandomFloatInRange_ReturnValue) == 0x0002A0, "Member 'GA_Banshee_Bombing_SpawnFogMissile_C_ExecuteUbergraph_GA_Banshee_Bombing_SpawnFogMissile::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Banshee_Bombing_SpawnFogMissile_C_ExecuteUbergraph_GA_Banshee_Bombing_SpawnFogMissile, K2Node_Event_bWasCancelled) == 0x0002A8, "Member 'GA_Banshee_Bombing_SpawnFogMissile_C_ExecuteUbergraph_GA_Banshee_Bombing_SpawnFogMissile::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GA_Banshee_Bombing_SpawnFogMissile_C_ExecuteUbergraph_GA_Banshee_Bombing_SpawnFogMissile, CallFunc_K2_SetTimer_ReturnValue) == 0x0002B0, "Member 'GA_Banshee_Bombing_SpawnFogMissile_C_ExecuteUbergraph_GA_Banshee_Bombing_SpawnFogMissile::CallFunc_K2_SetTimer_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Banshee_Bombing_SpawnFogMissile_C_ExecuteUbergraph_GA_Banshee_Bombing_SpawnFogMissile, CallFunc_Array_Random_OutItem) == 0x0002B8, "Member 'GA_Banshee_Bombing_SpawnFogMissile_C_ExecuteUbergraph_GA_Banshee_Bombing_SpawnFogMissile::CallFunc_Array_Random_OutItem' has a wrong offset!");
static_assert(offsetof(GA_Banshee_Bombing_SpawnFogMissile_C_ExecuteUbergraph_GA_Banshee_Bombing_SpawnFogMissile, CallFunc_Array_Random_OutIndex) == 0x0002BC, "Member 'GA_Banshee_Bombing_SpawnFogMissile_C_ExecuteUbergraph_GA_Banshee_Bombing_SpawnFogMissile::CallFunc_Array_Random_OutIndex' has a wrong offset!");
static_assert(offsetof(GA_Banshee_Bombing_SpawnFogMissile_C_ExecuteUbergraph_GA_Banshee_Bombing_SpawnFogMissile, CallFunc_Array_Get_Item) == 0x0002C0, "Member 'GA_Banshee_Bombing_SpawnFogMissile_C_ExecuteUbergraph_GA_Banshee_Bombing_SpawnFogMissile::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GA_Banshee_Bombing_SpawnFogMissile_C_ExecuteUbergraph_GA_Banshee_Bombing_SpawnFogMissile, CallFunc_FindLookAtRotation_ReturnValue) == 0x0002D8, "Member 'GA_Banshee_Bombing_SpawnFogMissile_C_ExecuteUbergraph_GA_Banshee_Bombing_SpawnFogMissile::CallFunc_FindLookAtRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Banshee_Bombing_SpawnFogMissile_C_ExecuteUbergraph_GA_Banshee_Bombing_SpawnFogMissile, CallFunc_MakeTransform_ReturnValue) == 0x0002F0, "Member 'GA_Banshee_Bombing_SpawnFogMissile_C_ExecuteUbergraph_GA_Banshee_Bombing_SpawnFogMissile::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Banshee_Bombing_SpawnFogMissile_C_ExecuteUbergraph_GA_Banshee_Bombing_SpawnFogMissile, CallFunc_Array_RemoveItem_ReturnValue) == 0x000350, "Member 'GA_Banshee_Bombing_SpawnFogMissile_C_ExecuteUbergraph_GA_Banshee_Bombing_SpawnFogMissile::CallFunc_Array_RemoveItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Banshee_Bombing_SpawnFogMissile_C_ExecuteUbergraph_GA_Banshee_Bombing_SpawnFogMissile, CallFunc_SpawnProjectile_ReturnValue) == 0x000358, "Member 'GA_Banshee_Bombing_SpawnFogMissile_C_ExecuteUbergraph_GA_Banshee_Bombing_SpawnFogMissile::CallFunc_SpawnProjectile_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Banshee_Bombing_SpawnFogMissile_C_ExecuteUbergraph_GA_Banshee_Bombing_SpawnFogMissile, CallFunc_IsValid_ReturnValue) == 0x000360, "Member 'GA_Banshee_Bombing_SpawnFogMissile_C_ExecuteUbergraph_GA_Banshee_Bombing_SpawnFogMissile::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Banshee_Bombing_SpawnFogMissile_C_ExecuteUbergraph_GA_Banshee_Bombing_SpawnFogMissile, K2Node_DynamicCast_AsDCCharacter_Base) == 0x000368, "Member 'GA_Banshee_Bombing_SpawnFogMissile_C_ExecuteUbergraph_GA_Banshee_Bombing_SpawnFogMissile::K2Node_DynamicCast_AsDCCharacter_Base' has a wrong offset!");
static_assert(offsetof(GA_Banshee_Bombing_SpawnFogMissile_C_ExecuteUbergraph_GA_Banshee_Bombing_SpawnFogMissile, K2Node_DynamicCast_bSuccess_2) == 0x000370, "Member 'GA_Banshee_Bombing_SpawnFogMissile_C_ExecuteUbergraph_GA_Banshee_Bombing_SpawnFogMissile::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(GA_Banshee_Bombing_SpawnFogMissile_C_ExecuteUbergraph_GA_Banshee_Bombing_SpawnFogMissile, CallFunc_Get_FogMissile1_Spawn_Location_Return_Spawn_Locations) == 0x000378, "Member 'GA_Banshee_Bombing_SpawnFogMissile_C_ExecuteUbergraph_GA_Banshee_Bombing_SpawnFogMissile::CallFunc_Get_FogMissile1_Spawn_Location_Return_Spawn_Locations' has a wrong offset!");
static_assert(offsetof(GA_Banshee_Bombing_SpawnFogMissile_C_ExecuteUbergraph_GA_Banshee_Bombing_SpawnFogMissile, K2Node_CreateDelegate_OutputDelegate) == 0x000388, "Member 'GA_Banshee_Bombing_SpawnFogMissile_C_ExecuteUbergraph_GA_Banshee_Bombing_SpawnFogMissile::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_Banshee_Bombing_SpawnFogMissile_C_ExecuteUbergraph_GA_Banshee_Bombing_SpawnFogMissile, CallFunc_Subtract_IntInt_ReturnValue) == 0x000398, "Member 'GA_Banshee_Bombing_SpawnFogMissile_C_ExecuteUbergraph_GA_Banshee_Bombing_SpawnFogMissile::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Banshee_Bombing_SpawnFogMissile_C_ExecuteUbergraph_GA_Banshee_Bombing_SpawnFogMissile, Temp_int_Variable) == 0x00039C, "Member 'GA_Banshee_Bombing_SpawnFogMissile_C_ExecuteUbergraph_GA_Banshee_Bombing_SpawnFogMissile::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(GA_Banshee_Bombing_SpawnFogMissile_C_ExecuteUbergraph_GA_Banshee_Bombing_SpawnFogMissile, CallFunc_Array_Add_ReturnValue) == 0x0003A0, "Member 'GA_Banshee_Bombing_SpawnFogMissile_C_ExecuteUbergraph_GA_Banshee_Bombing_SpawnFogMissile::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Banshee_Bombing_SpawnFogMissile_C_ExecuteUbergraph_GA_Banshee_Bombing_SpawnFogMissile, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0003A4, "Member 'GA_Banshee_Bombing_SpawnFogMissile_C_ExecuteUbergraph_GA_Banshee_Bombing_SpawnFogMissile::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Banshee_Bombing_SpawnFogMissile_C_ExecuteUbergraph_GA_Banshee_Bombing_SpawnFogMissile, CallFunc_Add_IntInt_ReturnValue) == 0x0003A8, "Member 'GA_Banshee_Bombing_SpawnFogMissile_C_ExecuteUbergraph_GA_Banshee_Bombing_SpawnFogMissile::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Banshee_Bombing_SpawnFogMissile_C_ExecuteUbergraph_GA_Banshee_Bombing_SpawnFogMissile, K2Node_DynamicCast_AsDCCharacter_Base_1) == 0x0003B0, "Member 'GA_Banshee_Bombing_SpawnFogMissile_C_ExecuteUbergraph_GA_Banshee_Bombing_SpawnFogMissile::K2Node_DynamicCast_AsDCCharacter_Base_1' has a wrong offset!");
static_assert(offsetof(GA_Banshee_Bombing_SpawnFogMissile_C_ExecuteUbergraph_GA_Banshee_Bombing_SpawnFogMissile, K2Node_DynamicCast_bSuccess_3) == 0x0003B8, "Member 'GA_Banshee_Bombing_SpawnFogMissile_C_ExecuteUbergraph_GA_Banshee_Bombing_SpawnFogMissile::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(GA_Banshee_Bombing_SpawnFogMissile_C_ExecuteUbergraph_GA_Banshee_Bombing_SpawnFogMissile, CallFunc_K2_SetTimer_Time_ImplicitCast) == 0x0003BC, "Member 'GA_Banshee_Bombing_SpawnFogMissile_C_ExecuteUbergraph_GA_Banshee_Bombing_SpawnFogMissile::CallFunc_K2_SetTimer_Time_ImplicitCast' has a wrong offset!");

// Function GA_Banshee_Bombing_SpawnFogMissile.GA_Banshee_Bombing_SpawnFogMissile_C.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct GA_Banshee_Bombing_SpawnFogMissile_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Banshee_Bombing_SpawnFogMissile_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GA_Banshee_Bombing_SpawnFogMissile_C_K2_OnEndAbility");
static_assert(sizeof(GA_Banshee_Bombing_SpawnFogMissile_C_K2_OnEndAbility) == 0x000001, "Wrong size on GA_Banshee_Bombing_SpawnFogMissile_C_K2_OnEndAbility");
static_assert(offsetof(GA_Banshee_Bombing_SpawnFogMissile_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GA_Banshee_Bombing_SpawnFogMissile_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

// Function GA_Banshee_Bombing_SpawnFogMissile.GA_Banshee_Bombing_SpawnFogMissile_C.OnSuccess_C18673B14F7D35E022E896926A691516
// 0x0008 (0x0008 - 0x0000)
struct GA_Banshee_Bombing_SpawnFogMissile_C_OnSuccess_C18673B14F7D35E022E896926A691516 final
{
public:
	class AActor*                                 ProjectileActor;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Banshee_Bombing_SpawnFogMissile_C_OnSuccess_C18673B14F7D35E022E896926A691516) == 0x000008, "Wrong alignment on GA_Banshee_Bombing_SpawnFogMissile_C_OnSuccess_C18673B14F7D35E022E896926A691516");
static_assert(sizeof(GA_Banshee_Bombing_SpawnFogMissile_C_OnSuccess_C18673B14F7D35E022E896926A691516) == 0x000008, "Wrong size on GA_Banshee_Bombing_SpawnFogMissile_C_OnSuccess_C18673B14F7D35E022E896926A691516");
static_assert(offsetof(GA_Banshee_Bombing_SpawnFogMissile_C_OnSuccess_C18673B14F7D35E022E896926A691516, ProjectileActor) == 0x000000, "Member 'GA_Banshee_Bombing_SpawnFogMissile_C_OnSuccess_C18673B14F7D35E022E896926A691516::ProjectileActor' has a wrong offset!");

}

