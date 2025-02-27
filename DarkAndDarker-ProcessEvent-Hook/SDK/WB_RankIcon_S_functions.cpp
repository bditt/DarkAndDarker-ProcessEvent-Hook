#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_RankIcon_S

#include "Basic.hpp"

#include "WB_RankIcon_S_classes.hpp"
#include "WB_RankIcon_S_parameters.hpp"


namespace SDK
{

// Function WB_RankIcon_S.WB_RankIcon_S_C.SetRankData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDCLeaderboardRankDataAsset*      LeaderboardRankData                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWB_RankIcon_S_C::SetRankData(class UDCLeaderboardRankDataAsset* LeaderboardRankData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_RankIcon_S_C", "SetRankData");

	Params::WB_RankIcon_S_C_SetRankData Parms{};

	Parms.LeaderboardRankData = LeaderboardRankData;

	UObject::ProcessEvent(Func, &Parms);
}

}

