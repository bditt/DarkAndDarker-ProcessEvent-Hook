#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_FrostDemon_Attack_01

#include "Basic.hpp"

#include "GA_FrostDemon_Attack_01_classes.hpp"
#include "GA_FrostDemon_Attack_01_parameters.hpp"


namespace SDK
{

// Function GA_FrostDemon_Attack_01.GA_FrostDemon_Attack_01_C.AbilityActivated
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               TriggerEventData                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_FrostDemon_Attack_01_C::AbilityActivated(const struct FGameplayEventData& TriggerEventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_FrostDemon_Attack_01_C", "AbilityActivated");

	Params::GA_FrostDemon_Attack_01_C_AbilityActivated Parms{};

	Parms.TriggerEventData = std::move(TriggerEventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_FrostDemon_Attack_01.GA_FrostDemon_Attack_01_C.CreateProjectiles
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     EventTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData               EventData                                              (BlueprintVisible, BlueprintReadOnly, Parm)
// float                                   FirePower                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          StartLocation                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_FrostDemon_Attack_01_C::CreateProjectiles(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData, float FirePower, const struct FVector& StartLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_FrostDemon_Attack_01_C", "CreateProjectiles");

	Params::GA_FrostDemon_Attack_01_C_CreateProjectiles Parms{};

	Parms.EventTag = std::move(EventTag);
	Parms.EventData = std::move(EventData);
	Parms.FirePower = FirePower;
	Parms.StartLocation = std::move(StartLocation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_FrostDemon_Attack_01.GA_FrostDemon_Attack_01_C.EventReceived_F8A8ABE0485A2A425E6088810B735772
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     EventTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData               EventData                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_FrostDemon_Attack_01_C::EventReceived_F8A8ABE0485A2A425E6088810B735772(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_FrostDemon_Attack_01_C", "EventReceived_F8A8ABE0485A2A425E6088810B735772");

	Params::GA_FrostDemon_Attack_01_C_EventReceived_F8A8ABE0485A2A425E6088810B735772 Parms{};

	Parms.EventTag = std::move(EventTag);
	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_FrostDemon_Attack_01.GA_FrostDemon_Attack_01_C.ExecuteUbergraph_GA_FrostDemon_Attack_01
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_FrostDemon_Attack_01_C::ExecuteUbergraph_GA_FrostDemon_Attack_01(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_FrostDemon_Attack_01_C", "ExecuteUbergraph_GA_FrostDemon_Attack_01");

	Params::GA_FrostDemon_Attack_01_C_ExecuteUbergraph_GA_FrostDemon_Attack_01 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_FrostDemon_Attack_01.GA_FrostDemon_Attack_01_C.Get Angle And Interval Per Shot Num
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  ShotNum                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Param_Interval                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Final_X_Angle                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Final_Y_Angle                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Final_Z_Angle                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_FrostDemon_Attack_01_C::Get_Angle_And_Interval_Per_Shot_Num(double ShotNum, double* Param_Interval, double* Final_X_Angle, double* Final_Y_Angle, double* Final_Z_Angle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_FrostDemon_Attack_01_C", "Get Angle And Interval Per Shot Num");

	Params::GA_FrostDemon_Attack_01_C_Get_Angle_And_Interval_Per_Shot_Num Parms{};

	Parms.ShotNum = ShotNum;

	UObject::ProcessEvent(Func, &Parms);

	if (Param_Interval != nullptr)
		*Param_Interval = Parms.Param_Interval;

	if (Final_X_Angle != nullptr)
		*Final_X_Angle = Parms.Final_X_Angle;

	if (Final_Y_Angle != nullptr)
		*Final_Y_Angle = Parms.Final_Y_Angle;

	if (Final_Z_Angle != nullptr)
		*Final_Z_Angle = Parms.Final_Z_Angle;
}


// Function GA_FrostDemon_Attack_01.GA_FrostDemon_Attack_01_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_FrostDemon_Attack_01_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_FrostDemon_Attack_01_C", "K2_OnEndAbility");

	Params::GA_FrostDemon_Attack_01_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_FrostDemon_Attack_01.GA_FrostDemon_Attack_01_C.NewFunction
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_FrostDemon_Attack_01_C::NewFunction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_FrostDemon_Attack_01_C", "NewFunction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_FrostDemon_Attack_01.GA_FrostDemon_Attack_01_C.OnSuccess_3F4A3DA94D72A71DC307D59A18169C2C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           ProjectileActor                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGA_FrostDemon_Attack_01_C::OnSuccess_3F4A3DA94D72A71DC307D59A18169C2C(class AActor* ProjectileActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_FrostDemon_Attack_01_C", "OnSuccess_3F4A3DA94D72A71DC307D59A18169C2C");

	Params::GA_FrostDemon_Attack_01_C_OnSuccess_3F4A3DA94D72A71DC307D59A18169C2C Parms{};

	Parms.ProjectileActor = ProjectileActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_FrostDemon_Attack_01.GA_FrostDemon_Attack_01_C.OnSuccess_695CC851461265CFDF1401B4F613F4F2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           ProjectileActor                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGA_FrostDemon_Attack_01_C::OnSuccess_695CC851461265CFDF1401B4F613F4F2(class AActor* ProjectileActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_FrostDemon_Attack_01_C", "OnSuccess_695CC851461265CFDF1401B4F613F4F2");

	Params::GA_FrostDemon_Attack_01_C_OnSuccess_695CC851461265CFDF1401B4F613F4F2 Parms{};

	Parms.ProjectileActor = ProjectileActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_FrostDemon_Attack_01.GA_FrostDemon_Attack_01_C.OnSuccess_8818F3624644A94F10B3B293949173C5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           ProjectileActor                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGA_FrostDemon_Attack_01_C::OnSuccess_8818F3624644A94F10B3B293949173C5(class AActor* ProjectileActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_FrostDemon_Attack_01_C", "OnSuccess_8818F3624644A94F10B3B293949173C5");

	Params::GA_FrostDemon_Attack_01_C_OnSuccess_8818F3624644A94F10B3B293949173C5 Parms{};

	Parms.ProjectileActor = ProjectileActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_FrostDemon_Attack_01.GA_FrostDemon_Attack_01_C.OnSuccess_A8037135471E04DC33856CBFBCDF289D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           ProjectileActor                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGA_FrostDemon_Attack_01_C::OnSuccess_A8037135471E04DC33856CBFBCDF289D(class AActor* ProjectileActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_FrostDemon_Attack_01_C", "OnSuccess_A8037135471E04DC33856CBFBCDF289D");

	Params::GA_FrostDemon_Attack_01_C_OnSuccess_A8037135471E04DC33856CBFBCDF289D Parms{};

	Parms.ProjectileActor = ProjectileActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_FrostDemon_Attack_01.GA_FrostDemon_Attack_01_C.OnSuccess_EE3D147C45C9C0B3B93E568E20E162AB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           ProjectileActor                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGA_FrostDemon_Attack_01_C::OnSuccess_EE3D147C45C9C0B3B93E568E20E162AB(class AActor* ProjectileActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_FrostDemon_Attack_01_C", "OnSuccess_EE3D147C45C9C0B3B93E568E20E162AB");

	Params::GA_FrostDemon_Attack_01_C_OnSuccess_EE3D147C45C9C0B3B93E568E20E162AB Parms{};

	Parms.ProjectileActor = ProjectileActor;

	UObject::ProcessEvent(Func, &Parms);
}

}

