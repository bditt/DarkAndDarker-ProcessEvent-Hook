#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MonsterBPLibrary

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "E_Direction_structs.hpp"
#include "DungeonCrawler_structs.hpp"
#include "E_ModeType_structs.hpp"
#include "E_DistanceFromVariables_structs.hpp"
#include "E_SensorType_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass MonsterBPLibrary.MonsterBPLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UMonsterBPLibrary_C final : public UBlueprintFunctionLibrary
{
public:
	static void Actor_Has_AI_Timer(class AActor* Actor, int32 Timer_Index, class UObject* __WorldContext, bool* Return_Value);
	static void Add_AI_Timer(class AActor* Actor, int32 Timer_Index, double Second, class UObject* __WorldContext);
	static void Change_GE_Attribute_And_Apply(class AActor* SourceActor, class AActor* Target_Actor, const struct FPrimaryAssetId& Gameplay_Effect, const struct FGameplayTag& Set_By_Caller_Tag, double Value, class UObject* __WorldContext, TArray<struct FActiveGameplayEffectHandle>* Return_Value);
	static void Check_Target_Has_State_Tags_To_Lose_From_Array(class UObject* Target, class UObject* __WorldContext, bool* Result);
	static void Filter_Target_From_CombatArea(const struct FVector& SpawnLocation, double FilterDistanceFromSpawnLocation, TArray<class ADCCharacterBase*>& TargetArray, class UObject* __WorldContext, bool* Return_Value, TArray<class ADCCharacterBase*>* Result);
	static void Filter_Target_From_Spawn_Location(const struct FVector& SpawnLocation, double FilterDistanceFromSpawnLocation, TArray<class ADCCharacterBase*>& TargetArray, class UObject* __WorldContext, bool* Return_Value, TArray<class ADCCharacterBase*>* Result);
	static void Filter_Target_Has_Aggro(class ABP_DCMonsterBase_C* MonsterBase, TArray<class ADCCharacterBase*>& Input_TargetArray, class UObject* __WorldContext, bool* Return_Value, TArray<class ADCCharacterBase*>* Output_TargetArray);
	static void Get_Actors_In_Range_And_Angle_From_Location(const struct FVector& Location, double Range, double Direction, double Angle, const TArray<class AActor*>& ActorsToIgnore, class UObject* __WorldContext, bool* Result, TArray<class ADCCharacterBase*>* DCCharacterBase);
	static void Get_And_Compare_To_BlackBoard_Mode(class ABP_DCMonsterBaseWithOptions_C* DCMonsterBase, E_ModeType Mode_Type, class UObject* __WorldContext, bool* Result);
	static void Get_Angle_Vector_From_Actor(class AActor* Actor, double Angle, double Distance, class UObject* __WorldContext, struct FVector* Return_Valut);
	static void Get_Angle_Vector_From_Location(const struct FVector& Location, const struct FRotator& Rotation, double Angle, double Distance, class UObject* __WorldContext, struct FVector* Return_Valut);
	static void Get_Aoe_Variables(class AActor* Instigator, class UObject* __WorldContext, class ABP_AoeDefineBase_C** AsBP_Aoe_Define_Base, double* Preceding_Time, double* Firing_Time, double* Destroying_Time);
	static void Get_BB_HPRatio(class ABP_DCMonsterBaseWithOptions_C* MonsterBase, class UObject* __WorldContext, double* HPRatio);
	static void Get_BB_Phase(class ABP_DCMonsterBaseWithOptions_C* MonsterBase, class UObject* __WorldContext, int32* Phase);
	static void Get_BB_Probability(class ABP_DCMonsterBaseWithOptions_C* MonsterBase, class UObject* __WorldContext, double* Probability);
	static void Get_BB_Target_Actor(class ABP_DCMonsterBaseWithOptions_C* MonsterBaseWithOptions, class UObject* __WorldContext, bool* Result, class ADCCharacterBase** DCCharacterBase);
	static void Get_Debuff_Immune_Tags(class UObject* __WorldContext, TArray<struct FGameplayTag>* Debuff_Immune_Tags);
	static void Get_Direction_From_Angle(double Angle, class UObject* __WorldContext, E_Direction* Direction);
	static void Get_Direction_Vector(class AActor* Actor, E_Direction Direction, double Distance, class UObject* __WorldContext, struct FVector* Result_Vector);
	static void Get_Enemies_In_Range_And_Angle_From_Actor(class AActor* Actor, bool Result_By_TargetActor, bool Get_from_Combat_Area, double Min_Range, double Max_Range, double Direction, double Angle, bool DrawDebugArea, class UObject* __WorldContext, bool* Result, TArray<class ADCCharacterBase*>* DCCharacterBase);
	static void Get_Enemy_Angle_From_Actor(class AActor* Caster, class AActor* Target, class UObject* __WorldContext, double* Return_Value);
	static void Get_Enemy_Relative_Angle_From_Actor(class AActor* Caster, class AActor* Target, class UObject* __WorldContext, float* Angle);
	static void Get_Instigator_From_Added_Tag(const struct FGameplayTag& Gameplay_Tag, const struct FGameplayEffectSpecHandle& Spec_Handle, class UObject* __WorldContext, bool* Result, class AActor** Instigator);
	static void Get_Interrupt_Montage_Immune_Tags(class UObject* __WorldContext, TArray<struct FGameplayTag>* Interrupt_Action_Immune_Tags);
	static void Get_Max_Distance_From_Perception(class ABP_DCMonsterBaseWithOptions_C* Monster_BP, E_DistanceFromVariables Get_Distance_From, double Default_Distance, class UObject* __WorldContext, bool* Result, double* Return_Value);
	static void Get_Native_Angle(double Angle, class UObject* __WorldContext, double* Return_Value);
	static void Get_Number_Of_Active_Players_In_Combat_Area(TArray<class ADCCharacterBase*>& Enemies_In_Combat_Area, TArray<class ADCCharacterBase*>& Lost_Enemies_In_Combat_Area, class UObject* __WorldContext, int32* Number_Of_Players);
	static void Get_Number_Of_Active_Players_In_Recognition_Area(TArray<class AActor*>& Enemies_In_Recog_Area, TArray<class AActor*>& Lost_Enemies_In_Recog_Area, class UObject* __WorldContext, int32* Number_Of_Players);
	static void Get_Projectile_Relative_Spawn_Transform(class ADCCharacterBase* Start_Actor, const struct FVector& Start_Location, EHitBoxType Hit_Box_Type, TArray<struct FVector>& Spawn_Location, TArray<struct FRotator>& Shooting_Direction, class UObject* __WorldContext, bool* Result, TArray<struct FVector>* Spawn_Transform_Location, TArray<struct FRotator>* Spawn_Transform_Rotation);
	static void Kill_Actor(class AActor* Actor, class UObject* __WorldContext);
	static void Launch_Enemy(const struct FGameplayEventData& Event_Data, bool Launch_Weapon_Direction, double XY_Value, double Z_Value, class UObject* __WorldContext);
	static void Remove_AI_Timer(class ADCMonsterBase* DCMonsterBase, int32 Timer_Index, class UObject* __WorldContext);
	static void Remove_Debuff_Immune(class AActor* Actor, bool Fear, bool Impact, bool KnockBack, bool Trap, bool UnableMove, bool Unhealable, class UObject* __WorldContext);
	static void Remove_Immune_To_Comeback(class ABP_DCMonsterBaseWithOptions_C* DCMonsterBase, class UObject* __WorldContext);
	static void Remove_Interrtupt_Montage_Immune(class AActor* Actor, class UObject* __WorldContext);
	static void Set_BB_HPRatio(class ABP_DCMonsterBaseWithOptions_C* MonsterBase, double HPRatio, class UObject* __WorldContext);
	static void Set_BB_Phase(class ABP_DCMonsterBaseWithOptions_C* MonsterBase, int32 Phase, class UObject* __WorldContext);
	static void Set_BB_Probability(class ABP_DCMonsterBaseWithOptions_C* MonsterBase, double Probability, class UObject* __WorldContext);
	static void Set_BlackBoard_Mode(class ABP_DCMonsterBaseWithOptions_C* DCMonsterBase, E_ModeType Mode_Type, class UObject* __WorldContext);
	static void Set_BlackBoard_Mode_For_Linked_Monsters(TArray<class ABP_DCMonsterBaseWithOptions_C*>& Linked_Monster_Array, E_ModeType Mode_Type, class UObject* __WorldContext);
	static void Set_BlackBoard_TargetActor_To_MonsterBase(class ABP_DCMonsterBaseWithOptions_C* MonsterBaseWithOptions, class UObject* __WorldContext);
	static void Set_Combo_Attack(class UDCGameplayAbilityBase* Gameplay_Ability, class UObject* Caster, double Sphere_Overlap_Forward_Pos, double Sphere_Overlap_Radius, const struct FGameplayTag& Event_Tag, double Trigger_Ratio, class UObject* __WorldContext, class ADCCharacterBase** Target_Enemy, TArray<class ADCCharacterBase*>* TargetArray, bool* Combo_Triggered);
	static void Set_Debuff_Immune(class AActor* Actor, bool Fear, bool Impact, bool KnockBack, bool Trap, bool UnableMove, bool Unhealable, class UObject* __WorldContext);
	static void Set_Immune_To_Comeback(class ABP_DCMonsterBaseWithOptions_C* DCMonsterBase, class UObject* __WorldContext);
	static void Set_Immune_To_Comeback_For_Linked_Monsters(TArray<class ABP_DCMonsterBaseWithOptions_C*>& Linked_Monster_Array, class UObject* __WorldContext);
	static void Set_Interrupt_Montage_Immune(class AActor* Actor, class UObject* __WorldContext);
	static void Set_Projectile_Spec_and_Options(class UDCGameplayAbilityBase* DCGameplay_Ability_Base, class AActor* Spawned_Projectile, const struct FGameplayTag& Gameplay_Tag_For_Spec, double Pierce_Count, bool Pierce_Obstacle, double Decrease_Pierce_Obstacle_Count, bool Homing, class ADCCharacterBase* Homing_Target, EHitBoxType Homing_Hit_Box_Type, double Homing_Magnitude, class UObject* __WorldContext, bool* Result, class AProjectileActor** Projectile_Actor);
	static bool Set_Stance(class AActor* Actor, int32 Stance_Number, class UObject* __WorldContext);
	static void Set_Target_Provider(class ABP_DCMonsterBaseWithOptions_C* Source_Target, class UDCGameObjectLinkComponent* DCGame_Object_Link, const struct FGameplayTagQuery& Provider_Object_Tag, class UObject* __WorldContext, bool* Result);

	void Get_Target_Array(class ADCMonsterBase* DCMonsterBase, E_SensorType Get_List_From, bool Get_From_CombatArea, bool Get_Target_Has_Aggro_Only, class UObject* __WorldContext, bool* Return_Value, TArray<class ADCCharacterBase*>* TargetArray);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MonsterBPLibrary_C">();
	}
	static class UMonsterBPLibrary_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMonsterBPLibrary_C>();
	}
};
static_assert(alignof(UMonsterBPLibrary_C) == 0x000008, "Wrong alignment on UMonsterBPLibrary_C");
static_assert(sizeof(UMonsterBPLibrary_C) == 0x000028, "Wrong size on UMonsterBPLibrary_C");

}

