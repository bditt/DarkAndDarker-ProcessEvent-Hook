#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_RankIcon_S

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_RankIcon_S.WB_RankIcon_S_C
// 0x0028 (0x02E8 - 0x02C0)
class UWB_RankIcon_S_C final : public UUserWidget
{
public:
	class UImage*                                 Img_Rank_BG;                                       // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Rank_Dot_1;                                    // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Rank_Dot_2;                                    // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Rank_Dot_3;                                    // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Rank_Line;                                     // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetRankData(class UDCLeaderboardRankDataAsset* LeaderboardRankData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_RankIcon_S_C">();
	}
	static class UWB_RankIcon_S_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_RankIcon_S_C>();
	}
};
static_assert(alignof(UWB_RankIcon_S_C) == 0x000008, "Wrong alignment on UWB_RankIcon_S_C");
static_assert(sizeof(UWB_RankIcon_S_C) == 0x0002E8, "Wrong size on UWB_RankIcon_S_C");
static_assert(offsetof(UWB_RankIcon_S_C, Img_Rank_BG) == 0x0002C0, "Member 'UWB_RankIcon_S_C::Img_Rank_BG' has a wrong offset!");
static_assert(offsetof(UWB_RankIcon_S_C, Img_Rank_Dot_1) == 0x0002C8, "Member 'UWB_RankIcon_S_C::Img_Rank_Dot_1' has a wrong offset!");
static_assert(offsetof(UWB_RankIcon_S_C, Img_Rank_Dot_2) == 0x0002D0, "Member 'UWB_RankIcon_S_C::Img_Rank_Dot_2' has a wrong offset!");
static_assert(offsetof(UWB_RankIcon_S_C, Img_Rank_Dot_3) == 0x0002D8, "Member 'UWB_RankIcon_S_C::Img_Rank_Dot_3' has a wrong offset!");
static_assert(offsetof(UWB_RankIcon_S_C, Img_Rank_Line) == 0x0002E0, "Member 'UWB_RankIcon_S_C::Img_Rank_Line' has a wrong offset!");

}

