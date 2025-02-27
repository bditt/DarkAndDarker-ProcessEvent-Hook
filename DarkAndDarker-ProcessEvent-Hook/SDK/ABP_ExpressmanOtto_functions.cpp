#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_ExpressmanOtto

#include "Basic.hpp"

#include "ABP_ExpressmanOtto_classes.hpp"
#include "ABP_ExpressmanOtto_parameters.hpp"


namespace SDK
{

// Function ABP_ExpressmanOtto.ABP_ExpressmanOtto_C.Added_3A76CD49470AE79249B5AB80A626BD47
// (BlueprintCallable, BlueprintEvent)

void UABP_ExpressmanOtto_C::Added_3A76CD49470AE79249B5AB80A626BD47()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_ExpressmanOtto_C", "Added_3A76CD49470AE79249B5AB80A626BD47");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_ExpressmanOtto.ABP_ExpressmanOtto_C.Added_C0507A6545537D90A88D42AAF986EE13
// (BlueprintCallable, BlueprintEvent)

void UABP_ExpressmanOtto_C::Added_C0507A6545537D90A88D42AAF986EE13()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_ExpressmanOtto_C", "Added_C0507A6545537D90A88D42AAF986EE13");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_ExpressmanOtto.ABP_ExpressmanOtto_C.Added_DFADACBE42AF861541B357A3996D4960
// (BlueprintCallable, BlueprintEvent)

void UABP_ExpressmanOtto_C::Added_DFADACBE42AF861541B357A3996D4960()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_ExpressmanOtto_C", "Added_DFADACBE42AF861541B357A3996D4960");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_ExpressmanOtto.ABP_ExpressmanOtto_C.Added_FB3753E04B54BF16DEA049858E01C2EB
// (BlueprintCallable, BlueprintEvent)

void UABP_ExpressmanOtto_C::Added_FB3753E04B54BF16DEA049858E01C2EB()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_ExpressmanOtto_C", "Added_FB3753E04B54BF16DEA049858E01C2EB");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_ExpressmanOtto.ABP_ExpressmanOtto_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        Param_AnimGraph                                        (Parm, OutParm, NoDestructor)

void UABP_ExpressmanOtto_C::AnimGraph(struct FPoseLink* Param_AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_ExpressmanOtto_C", "AnimGraph");

	Params::ABP_ExpressmanOtto_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph != nullptr)
		*Param_AnimGraph = std::move(Parms.Param_AnimGraph);
}


// Function ABP_ExpressmanOtto.ABP_ExpressmanOtto_C.AnimNotify_BeginIdleDelay
// (BlueprintCallable, BlueprintEvent)

void UABP_ExpressmanOtto_C::AnimNotify_BeginIdleDelay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_ExpressmanOtto_C", "AnimNotify_BeginIdleDelay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_ExpressmanOtto.ABP_ExpressmanOtto_C.AnimNotify_EndIdleAnimation
// (BlueprintCallable, BlueprintEvent)

void UABP_ExpressmanOtto_C::AnimNotify_EndIdleAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_ExpressmanOtto_C", "AnimNotify_EndIdleAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_ExpressmanOtto.ABP_ExpressmanOtto_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)

void UABP_ExpressmanOtto_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_ExpressmanOtto_C", "BlueprintInitializeAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_ExpressmanOtto.ABP_ExpressmanOtto_C.BlueprintThreadSafeUpdateAnimation
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_ExpressmanOtto_C::BlueprintThreadSafeUpdateAnimation(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_ExpressmanOtto_C", "BlueprintThreadSafeUpdateAnimation");

	Params::ABP_ExpressmanOtto_C_BlueprintThreadSafeUpdateAnimation Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_ExpressmanOtto.ABP_ExpressmanOtto_C.ExecuteUbergraph_ABP_ExpressmanOtto
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_ExpressmanOtto_C::ExecuteUbergraph_ABP_ExpressmanOtto(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_ExpressmanOtto_C", "ExecuteUbergraph_ABP_ExpressmanOtto");

	Params::ABP_ExpressmanOtto_C_ExecuteUbergraph_ABP_ExpressmanOtto Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

