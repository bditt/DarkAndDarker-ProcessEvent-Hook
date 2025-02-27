#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Taunt

#include "Basic.hpp"

#include "GA_Taunt_classes.hpp"
#include "GA_Taunt_parameters.hpp"


namespace SDK
{

// Function GA_Taunt.GA_Taunt_C.ExecuteUbergraph_GA_Taunt
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Taunt_C::ExecuteUbergraph_GA_Taunt(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Taunt_C", "ExecuteUbergraph_GA_Taunt");

	Params::GA_Taunt_C_ExecuteUbergraph_GA_Taunt Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Taunt.GA_Taunt_C.ServerOnSkillActivate
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     SkillTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                     CooldownTag                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_Taunt_C::ServerOnSkillActivate(const struct FGameplayTag& SkillTag, const struct FGameplayTag& CooldownTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Taunt_C", "ServerOnSkillActivate");

	Params::GA_Taunt_C_ServerOnSkillActivate Parms{};

	Parms.SkillTag = std::move(SkillTag);
	Parms.CooldownTag = std::move(CooldownTag);

	UObject::ProcessEvent(Func, &Parms);
}

}

