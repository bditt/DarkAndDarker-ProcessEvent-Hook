#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTT_GetTargetActor

#include "Basic.hpp"

#include "E_TargetSortingType_structs.hpp"
#include "E_DistanceFromVariables_structs.hpp"
#include "Engine_structs.hpp"
#include "DungeonCrawler_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "E_SensorType_structs.hpp"
#include "E_ActivityArea_structs.hpp"
#include "AIModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BTT_GetTargetActor.BTT_GetTargetActor_C
// 0x0110 (0x01B8 - 0x00A8)
class UBTT_GetTargetActor_C final : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class ABP_DCMonsterBaseWithOptions_C*         ControlledPawn;                                    // 0x00B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class ADCCharacterBase*>               Provider_Array;                                    // 0x00B8(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class ADCCharacterBase*>               TargetArray;                                       // 0x00C8(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	class ADCCharacterBase*                       Target;                                            // 0x00D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FName                                   TargetActor;                                       // 0x00E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBlackboardComponent*                   Blackboard;                                        // 0x00E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAIPerceptionComponent*                 AIPerception;                                      // 0x00F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          Get_Target_Has_Aggro_Only;                         // 0x00F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_SensorType                                  Get_List_From;                                     // 0x00F9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Player;                                            // 0x00FA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Monster;                                           // 0x00FB(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Get_from_Combat_Area;                              // 0x00FC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          FilterSpawnLocation;                               // 0x00FD(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3AB2[0x2];                                     // 0x00FE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        FilterDistanceFromSpawnLocation;                   // 0x0100(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                FilterBoxSizeFromSpawnLocation;                    // 0x0108(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FGameplayTag>                   Tags;                                              // 0x0120(0x0010)(Edit, BlueprintVisible)
	TArray<struct FGameplayTag>                   Untags;                                            // 0x0130(0x0010)(Edit, BlueprintVisible)
	bool                                          Get_ActivityArea_From_Monster_BP;                  // 0x0140(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_ActivityArea                                Activity_Area;                                     // 0x0141(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3AB3[0x6];                                     // 0x0142(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        MinDistance;                                       // 0x0148(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_DistanceFromVariables                       MaxDistance_From;                                  // 0x0150(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3AB4[0x7];                                     // 0x0151(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        MaxDistance;                                       // 0x0158(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Angle;                                             // 0x0160(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Direction;                                         // 0x0168(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_TargetSortingType                           Sorting_Type;                                      // 0x0170(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMonsterFilterSortingType                     Sort_By;                                           // 0x0171(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3AB5[0x2];                                     // 0x0172(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Pick_Index;                                        // 0x0174(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADCCharacterBase*                       TempTarget;                                        // 0x0178(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        MinHP;                                             // 0x0180(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MaxHP;                                             // 0x0188(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ADCCharacterBase*>               TempArray;                                         // 0x0190(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	class ABP_DCMonsterBase_C*                    CastProviderMonster;                               // 0x01A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_DCMonsterBaseWithOptions_C*         Provider_Actor;                                    // 0x01A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          Summoner;                                          // 0x01B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ClearVariables();
	void ExecuteUbergraph_BTT_GetTargetActor(int32 EntryPoint);
	void FilterHP(bool* Bool);
	void FilterRange(bool* Bool);
	void FilterTags(bool* Bool);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* Param_ControlledPawn);
	void Sorting(bool* Bool);
	void TargetingType(bool* Bool);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BTT_GetTargetActor_C">();
	}
	static class UBTT_GetTargetActor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTT_GetTargetActor_C>();
	}
};
static_assert(alignof(UBTT_GetTargetActor_C) == 0x000008, "Wrong alignment on UBTT_GetTargetActor_C");
static_assert(sizeof(UBTT_GetTargetActor_C) == 0x0001B8, "Wrong size on UBTT_GetTargetActor_C");
static_assert(offsetof(UBTT_GetTargetActor_C, UberGraphFrame) == 0x0000A8, "Member 'UBTT_GetTargetActor_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBTT_GetTargetActor_C, ControlledPawn) == 0x0000B0, "Member 'UBTT_GetTargetActor_C::ControlledPawn' has a wrong offset!");
static_assert(offsetof(UBTT_GetTargetActor_C, Provider_Array) == 0x0000B8, "Member 'UBTT_GetTargetActor_C::Provider_Array' has a wrong offset!");
static_assert(offsetof(UBTT_GetTargetActor_C, TargetArray) == 0x0000C8, "Member 'UBTT_GetTargetActor_C::TargetArray' has a wrong offset!");
static_assert(offsetof(UBTT_GetTargetActor_C, Target) == 0x0000D8, "Member 'UBTT_GetTargetActor_C::Target' has a wrong offset!");
static_assert(offsetof(UBTT_GetTargetActor_C, TargetActor) == 0x0000E0, "Member 'UBTT_GetTargetActor_C::TargetActor' has a wrong offset!");
static_assert(offsetof(UBTT_GetTargetActor_C, Blackboard) == 0x0000E8, "Member 'UBTT_GetTargetActor_C::Blackboard' has a wrong offset!");
static_assert(offsetof(UBTT_GetTargetActor_C, AIPerception) == 0x0000F0, "Member 'UBTT_GetTargetActor_C::AIPerception' has a wrong offset!");
static_assert(offsetof(UBTT_GetTargetActor_C, Get_Target_Has_Aggro_Only) == 0x0000F8, "Member 'UBTT_GetTargetActor_C::Get_Target_Has_Aggro_Only' has a wrong offset!");
static_assert(offsetof(UBTT_GetTargetActor_C, Get_List_From) == 0x0000F9, "Member 'UBTT_GetTargetActor_C::Get_List_From' has a wrong offset!");
static_assert(offsetof(UBTT_GetTargetActor_C, Player) == 0x0000FA, "Member 'UBTT_GetTargetActor_C::Player' has a wrong offset!");
static_assert(offsetof(UBTT_GetTargetActor_C, Monster) == 0x0000FB, "Member 'UBTT_GetTargetActor_C::Monster' has a wrong offset!");
static_assert(offsetof(UBTT_GetTargetActor_C, Get_from_Combat_Area) == 0x0000FC, "Member 'UBTT_GetTargetActor_C::Get_from_Combat_Area' has a wrong offset!");
static_assert(offsetof(UBTT_GetTargetActor_C, FilterSpawnLocation) == 0x0000FD, "Member 'UBTT_GetTargetActor_C::FilterSpawnLocation' has a wrong offset!");
static_assert(offsetof(UBTT_GetTargetActor_C, FilterDistanceFromSpawnLocation) == 0x000100, "Member 'UBTT_GetTargetActor_C::FilterDistanceFromSpawnLocation' has a wrong offset!");
static_assert(offsetof(UBTT_GetTargetActor_C, FilterBoxSizeFromSpawnLocation) == 0x000108, "Member 'UBTT_GetTargetActor_C::FilterBoxSizeFromSpawnLocation' has a wrong offset!");
static_assert(offsetof(UBTT_GetTargetActor_C, Tags) == 0x000120, "Member 'UBTT_GetTargetActor_C::Tags' has a wrong offset!");
static_assert(offsetof(UBTT_GetTargetActor_C, Untags) == 0x000130, "Member 'UBTT_GetTargetActor_C::Untags' has a wrong offset!");
static_assert(offsetof(UBTT_GetTargetActor_C, Get_ActivityArea_From_Monster_BP) == 0x000140, "Member 'UBTT_GetTargetActor_C::Get_ActivityArea_From_Monster_BP' has a wrong offset!");
static_assert(offsetof(UBTT_GetTargetActor_C, Activity_Area) == 0x000141, "Member 'UBTT_GetTargetActor_C::Activity_Area' has a wrong offset!");
static_assert(offsetof(UBTT_GetTargetActor_C, MinDistance) == 0x000148, "Member 'UBTT_GetTargetActor_C::MinDistance' has a wrong offset!");
static_assert(offsetof(UBTT_GetTargetActor_C, MaxDistance_From) == 0x000150, "Member 'UBTT_GetTargetActor_C::MaxDistance_From' has a wrong offset!");
static_assert(offsetof(UBTT_GetTargetActor_C, MaxDistance) == 0x000158, "Member 'UBTT_GetTargetActor_C::MaxDistance' has a wrong offset!");
static_assert(offsetof(UBTT_GetTargetActor_C, Angle) == 0x000160, "Member 'UBTT_GetTargetActor_C::Angle' has a wrong offset!");
static_assert(offsetof(UBTT_GetTargetActor_C, Direction) == 0x000168, "Member 'UBTT_GetTargetActor_C::Direction' has a wrong offset!");
static_assert(offsetof(UBTT_GetTargetActor_C, Sorting_Type) == 0x000170, "Member 'UBTT_GetTargetActor_C::Sorting_Type' has a wrong offset!");
static_assert(offsetof(UBTT_GetTargetActor_C, Sort_By) == 0x000171, "Member 'UBTT_GetTargetActor_C::Sort_By' has a wrong offset!");
static_assert(offsetof(UBTT_GetTargetActor_C, Pick_Index) == 0x000174, "Member 'UBTT_GetTargetActor_C::Pick_Index' has a wrong offset!");
static_assert(offsetof(UBTT_GetTargetActor_C, TempTarget) == 0x000178, "Member 'UBTT_GetTargetActor_C::TempTarget' has a wrong offset!");
static_assert(offsetof(UBTT_GetTargetActor_C, MinHP) == 0x000180, "Member 'UBTT_GetTargetActor_C::MinHP' has a wrong offset!");
static_assert(offsetof(UBTT_GetTargetActor_C, MaxHP) == 0x000188, "Member 'UBTT_GetTargetActor_C::MaxHP' has a wrong offset!");
static_assert(offsetof(UBTT_GetTargetActor_C, TempArray) == 0x000190, "Member 'UBTT_GetTargetActor_C::TempArray' has a wrong offset!");
static_assert(offsetof(UBTT_GetTargetActor_C, CastProviderMonster) == 0x0001A0, "Member 'UBTT_GetTargetActor_C::CastProviderMonster' has a wrong offset!");
static_assert(offsetof(UBTT_GetTargetActor_C, Provider_Actor) == 0x0001A8, "Member 'UBTT_GetTargetActor_C::Provider_Actor' has a wrong offset!");
static_assert(offsetof(UBTT_GetTargetActor_C, Summoner) == 0x0001B0, "Member 'UBTT_GetTargetActor_C::Summoner' has a wrong offset!");

}

