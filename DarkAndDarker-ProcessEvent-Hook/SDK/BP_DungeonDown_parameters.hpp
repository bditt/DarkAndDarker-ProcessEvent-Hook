#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DungeonDown

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function BP_DungeonDown.BP_DungeonDown_C.InteractTargetInfoName
// 0x0018 (0x0018 - 0x0000)
struct BP_DungeonDown_C_InteractTargetInfoName final
{
public:
	class FText                                   Param_Name;                                        // 0x0000(0x0018)(Parm, OutParm)
};
static_assert(alignof(BP_DungeonDown_C_InteractTargetInfoName) == 0x000008, "Wrong alignment on BP_DungeonDown_C_InteractTargetInfoName");
static_assert(sizeof(BP_DungeonDown_C_InteractTargetInfoName) == 0x000018, "Wrong size on BP_DungeonDown_C_InteractTargetInfoName");
static_assert(offsetof(BP_DungeonDown_C_InteractTargetInfoName, Param_Name) == 0x000000, "Member 'BP_DungeonDown_C_InteractTargetInfoName::Param_Name' has a wrong offset!");

// Function BP_DungeonDown.BP_DungeonDown_C.InteractTargetInfoRarity
// 0x0008 (0x0008 - 0x0000)
struct BP_DungeonDown_C_InteractTargetInfoRarity final
{
public:
	struct FGameplayTag                           RarityTag;                                         // 0x0000(0x0008)(Parm, OutParm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DungeonDown_C_InteractTargetInfoRarity) == 0x000004, "Wrong alignment on BP_DungeonDown_C_InteractTargetInfoRarity");
static_assert(sizeof(BP_DungeonDown_C_InteractTargetInfoRarity) == 0x000008, "Wrong size on BP_DungeonDown_C_InteractTargetInfoRarity");
static_assert(offsetof(BP_DungeonDown_C_InteractTargetInfoRarity, RarityTag) == 0x000000, "Member 'BP_DungeonDown_C_InteractTargetInfoRarity::RarityTag' has a wrong offset!");

// Function BP_DungeonDown.BP_DungeonDown_C.OnDungeonExitOverlapped
// 0x0028 (0x0028 - 0x0000)
struct BP_DungeonDown_C_OnDungeonExitOverlapped final
{
public:
	class ADCPlayerCharacterBase*                 PlayerCharacter;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          bResult;                                           // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5B67[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ADCPlayerController*                    K2Node_DynamicCast_AsDCPlayer_Controller;          // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_OnDungeonDownOverlapped_ReturnValue;      // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DungeonDown_C_OnDungeonExitOverlapped) == 0x000008, "Wrong alignment on BP_DungeonDown_C_OnDungeonExitOverlapped");
static_assert(sizeof(BP_DungeonDown_C_OnDungeonExitOverlapped) == 0x000028, "Wrong size on BP_DungeonDown_C_OnDungeonExitOverlapped");
static_assert(offsetof(BP_DungeonDown_C_OnDungeonExitOverlapped, PlayerCharacter) == 0x000000, "Member 'BP_DungeonDown_C_OnDungeonExitOverlapped::PlayerCharacter' has a wrong offset!");
static_assert(offsetof(BP_DungeonDown_C_OnDungeonExitOverlapped, bResult) == 0x000008, "Member 'BP_DungeonDown_C_OnDungeonExitOverlapped::bResult' has a wrong offset!");
static_assert(offsetof(BP_DungeonDown_C_OnDungeonExitOverlapped, CallFunc_GetController_ReturnValue) == 0x000010, "Member 'BP_DungeonDown_C_OnDungeonExitOverlapped::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DungeonDown_C_OnDungeonExitOverlapped, K2Node_DynamicCast_AsDCPlayer_Controller) == 0x000018, "Member 'BP_DungeonDown_C_OnDungeonExitOverlapped::K2Node_DynamicCast_AsDCPlayer_Controller' has a wrong offset!");
static_assert(offsetof(BP_DungeonDown_C_OnDungeonExitOverlapped, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BP_DungeonDown_C_OnDungeonExitOverlapped::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_DungeonDown_C_OnDungeonExitOverlapped, CallFunc_OnDungeonDownOverlapped_ReturnValue) == 0x000021, "Member 'BP_DungeonDown_C_OnDungeonExitOverlapped::CallFunc_OnDungeonDownOverlapped_ReturnValue' has a wrong offset!");

}

