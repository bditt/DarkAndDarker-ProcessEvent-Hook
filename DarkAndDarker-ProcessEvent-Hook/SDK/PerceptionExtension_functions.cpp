#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PerceptionExtension

#include "Basic.hpp"

#include "PerceptionExtension_classes.hpp"
#include "PerceptionExtension_parameters.hpp"


namespace SDK
{

// Function PerceptionExtension.PerceptionExtensionBPLibrary.ForgetActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAIPerceptionComponent*           Perception                                             (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                           Actor                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPerceptionExtensionBPLibrary::ForgetActor(class UAIPerceptionComponent* Perception, class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("PerceptionExtensionBPLibrary", "ForgetActor");

	Params::PerceptionExtensionBPLibrary_ForgetActor Parms{};

	Parms.Perception = Perception;
	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function PerceptionExtension.PerceptionExtensionBPLibrary.ForgetAll
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAIPerceptionComponent*           Perception                                             (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPerceptionExtensionBPLibrary::ForgetAll(class UAIPerceptionComponent* Perception)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("PerceptionExtensionBPLibrary", "ForgetAll");

	Params::PerceptionExtensionBPLibrary_ForgetAll Parms{};

	Parms.Perception = Perception;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function PerceptionExtension.PerceptionExtensionBPLibrary.GetAutoSuccessRange
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAIPerceptionComponent*           Perception                                             (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UPerceptionExtensionBPLibrary::GetAutoSuccessRange(class UAIPerceptionComponent* Perception)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("PerceptionExtensionBPLibrary", "GetAutoSuccessRange");

	Params::PerceptionExtensionBPLibrary_GetAutoSuccessRange Parms{};

	Parms.Perception = Perception;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function PerceptionExtension.PerceptionExtensionBPLibrary.GetDetectionByAffiliation
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAIPerceptionComponent*           Perception                                             (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UAISense>             SenseClass                                             (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAISenseAffiliationFilter        ReturnValue                                            (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FAISenseAffiliationFilter UPerceptionExtensionBPLibrary::GetDetectionByAffiliation(class UAIPerceptionComponent* Perception, TSubclassOf<class UAISense> SenseClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("PerceptionExtensionBPLibrary", "GetDetectionByAffiliation");

	Params::PerceptionExtensionBPLibrary_GetDetectionByAffiliation Parms{};

	Parms.Perception = Perception;
	Parms.SenseClass = SenseClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function PerceptionExtension.PerceptionExtensionBPLibrary.GetDominantSense
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAIPerceptionComponent*           Perception                                             (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UAISense>             ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TSubclassOf<class UAISense> UPerceptionExtensionBPLibrary::GetDominantSense(class UAIPerceptionComponent* Perception)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("PerceptionExtensionBPLibrary", "GetDominantSense");

	Params::PerceptionExtensionBPLibrary_GetDominantSense Parms{};

	Parms.Perception = Perception;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function PerceptionExtension.PerceptionExtensionBPLibrary.GetHearingRange
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAIPerceptionComponent*           Perception                                             (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UPerceptionExtensionBPLibrary::GetHearingRange(class UAIPerceptionComponent* Perception)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("PerceptionExtensionBPLibrary", "GetHearingRange");

	Params::PerceptionExtensionBPLibrary_GetHearingRange Parms{};

	Parms.Perception = Perception;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function PerceptionExtension.PerceptionExtensionBPLibrary.GetLoseSightRange
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAIPerceptionComponent*           Perception                                             (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UPerceptionExtensionBPLibrary::GetLoseSightRange(class UAIPerceptionComponent* Perception)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("PerceptionExtensionBPLibrary", "GetLoseSightRange");

	Params::PerceptionExtensionBPLibrary_GetLoseSightRange Parms{};

	Parms.Perception = Perception;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function PerceptionExtension.PerceptionExtensionBPLibrary.GetLoSHearingRange
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAIPerceptionComponent*           Perception                                             (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UPerceptionExtensionBPLibrary::GetLoSHearingRange(class UAIPerceptionComponent* Perception)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("PerceptionExtensionBPLibrary", "GetLoSHearingRange");

	Params::PerceptionExtensionBPLibrary_GetLoSHearingRange Parms{};

	Parms.Perception = Perception;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function PerceptionExtension.PerceptionExtensionBPLibrary.GetMaxAge
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAIPerceptionComponent*           Perception                                             (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UAISense>             SenseClass                                             (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UPerceptionExtensionBPLibrary::GetMaxAge(class UAIPerceptionComponent* Perception, TSubclassOf<class UAISense> SenseClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("PerceptionExtensionBPLibrary", "GetMaxAge");

	Params::PerceptionExtensionBPLibrary_GetMaxAge Parms{};

	Parms.Perception = Perception;
	Parms.SenseClass = SenseClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function PerceptionExtension.PerceptionExtensionBPLibrary.GetNearClippingRadius
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAIPerceptionComponent*           Perception                                             (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UPerceptionExtensionBPLibrary::GetNearClippingRadius(class UAIPerceptionComponent* Perception)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("PerceptionExtensionBPLibrary", "GetNearClippingRadius");

	Params::PerceptionExtensionBPLibrary_GetNearClippingRadius Parms{};

	Parms.Perception = Perception;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function PerceptionExtension.PerceptionExtensionBPLibrary.GetPOVBackwardOffset
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAIPerceptionComponent*           Perception                                             (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UPerceptionExtensionBPLibrary::GetPOVBackwardOffset(class UAIPerceptionComponent* Perception)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("PerceptionExtensionBPLibrary", "GetPOVBackwardOffset");

	Params::PerceptionExtensionBPLibrary_GetPOVBackwardOffset Parms{};

	Parms.Perception = Perception;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function PerceptionExtension.PerceptionExtensionBPLibrary.GetSightRange
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAIPerceptionComponent*           Perception                                             (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UPerceptionExtensionBPLibrary::GetSightRange(class UAIPerceptionComponent* Perception)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("PerceptionExtensionBPLibrary", "GetSightRange");

	Params::PerceptionExtensionBPLibrary_GetSightRange Parms{};

	Parms.Perception = Perception;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function PerceptionExtension.PerceptionExtensionBPLibrary.GetUseLoSHearing
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAIPerceptionComponent*           Perception                                             (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPerceptionExtensionBPLibrary::GetUseLoSHearing(class UAIPerceptionComponent* Perception)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("PerceptionExtensionBPLibrary", "GetUseLoSHearing");

	Params::PerceptionExtensionBPLibrary_GetUseLoSHearing Parms{};

	Parms.Perception = Perception;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function PerceptionExtension.PerceptionExtensionBPLibrary.GetVisionAngle
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAIPerceptionComponent*           Perception                                             (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UPerceptionExtensionBPLibrary::GetVisionAngle(class UAIPerceptionComponent* Perception)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("PerceptionExtensionBPLibrary", "GetVisionAngle");

	Params::PerceptionExtensionBPLibrary_GetVisionAngle Parms{};

	Parms.Perception = Perception;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function PerceptionExtension.PerceptionExtensionBPLibrary.SetAutoSuccessRange
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAIPerceptionComponent*           Perception                                             (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   AutoSuccessRange                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPerceptionExtensionBPLibrary::SetAutoSuccessRange(class UAIPerceptionComponent* Perception, float AutoSuccessRange)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("PerceptionExtensionBPLibrary", "SetAutoSuccessRange");

	Params::PerceptionExtensionBPLibrary_SetAutoSuccessRange Parms{};

	Parms.Perception = Perception;
	Parms.AutoSuccessRange = AutoSuccessRange;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function PerceptionExtension.PerceptionExtensionBPLibrary.SetDetectionByAffiliation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAIPerceptionComponent*           Perception                                             (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UAISense>             SenseClass                                             (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    DetectEnemies                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    DetectNeutrals                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    DetectFriendlies                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPerceptionExtensionBPLibrary::SetDetectionByAffiliation(class UAIPerceptionComponent* Perception, TSubclassOf<class UAISense> SenseClass, bool DetectEnemies, bool DetectNeutrals, bool DetectFriendlies)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("PerceptionExtensionBPLibrary", "SetDetectionByAffiliation");

	Params::PerceptionExtensionBPLibrary_SetDetectionByAffiliation Parms{};

	Parms.Perception = Perception;
	Parms.SenseClass = SenseClass;
	Parms.DetectEnemies = DetectEnemies;
	Parms.DetectNeutrals = DetectNeutrals;
	Parms.DetectFriendlies = DetectFriendlies;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function PerceptionExtension.PerceptionExtensionBPLibrary.SetDominantSense
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAIPerceptionComponent*           Perception                                             (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UAISense>             SenseClass                                             (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPerceptionExtensionBPLibrary::SetDominantSense(class UAIPerceptionComponent* Perception, TSubclassOf<class UAISense> SenseClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("PerceptionExtensionBPLibrary", "SetDominantSense");

	Params::PerceptionExtensionBPLibrary_SetDominantSense Parms{};

	Parms.Perception = Perception;
	Parms.SenseClass = SenseClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function PerceptionExtension.PerceptionExtensionBPLibrary.SetHearingRange
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAIPerceptionComponent*           Perception                                             (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   HearingRange                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPerceptionExtensionBPLibrary::SetHearingRange(class UAIPerceptionComponent* Perception, float HearingRange)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("PerceptionExtensionBPLibrary", "SetHearingRange");

	Params::PerceptionExtensionBPLibrary_SetHearingRange Parms{};

	Parms.Perception = Perception;
	Parms.HearingRange = HearingRange;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function PerceptionExtension.PerceptionExtensionBPLibrary.SetLoseSightRange
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAIPerceptionComponent*           Perception                                             (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   LoseSightRange                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPerceptionExtensionBPLibrary::SetLoseSightRange(class UAIPerceptionComponent* Perception, float LoseSightRange)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("PerceptionExtensionBPLibrary", "SetLoseSightRange");

	Params::PerceptionExtensionBPLibrary_SetLoseSightRange Parms{};

	Parms.Perception = Perception;
	Parms.LoseSightRange = LoseSightRange;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function PerceptionExtension.PerceptionExtensionBPLibrary.SetLoSHearingRange
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAIPerceptionComponent*           Perception                                             (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   LoSHearingRange                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPerceptionExtensionBPLibrary::SetLoSHearingRange(class UAIPerceptionComponent* Perception, float LoSHearingRange)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("PerceptionExtensionBPLibrary", "SetLoSHearingRange");

	Params::PerceptionExtensionBPLibrary_SetLoSHearingRange Parms{};

	Parms.Perception = Perception;
	Parms.LoSHearingRange = LoSHearingRange;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function PerceptionExtension.PerceptionExtensionBPLibrary.SetMaxAge
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAIPerceptionComponent*           Perception                                             (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UAISense>             SenseClass                                             (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   MaxAge                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPerceptionExtensionBPLibrary::SetMaxAge(class UAIPerceptionComponent* Perception, TSubclassOf<class UAISense> SenseClass, float MaxAge)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("PerceptionExtensionBPLibrary", "SetMaxAge");

	Params::PerceptionExtensionBPLibrary_SetMaxAge Parms{};

	Parms.Perception = Perception;
	Parms.SenseClass = SenseClass;
	Parms.MaxAge = MaxAge;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function PerceptionExtension.PerceptionExtensionBPLibrary.SetNearClippingRadius
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAIPerceptionComponent*           Perception                                             (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   NearClippingRadius                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPerceptionExtensionBPLibrary::SetNearClippingRadius(class UAIPerceptionComponent* Perception, float NearClippingRadius)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("PerceptionExtensionBPLibrary", "SetNearClippingRadius");

	Params::PerceptionExtensionBPLibrary_SetNearClippingRadius Parms{};

	Parms.Perception = Perception;
	Parms.NearClippingRadius = NearClippingRadius;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function PerceptionExtension.PerceptionExtensionBPLibrary.SetPOVBackwardOffset
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAIPerceptionComponent*           Perception                                             (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   POVBackwardsOffset                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPerceptionExtensionBPLibrary::SetPOVBackwardOffset(class UAIPerceptionComponent* Perception, float POVBackwardsOffset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("PerceptionExtensionBPLibrary", "SetPOVBackwardOffset");

	Params::PerceptionExtensionBPLibrary_SetPOVBackwardOffset Parms{};

	Parms.Perception = Perception;
	Parms.POVBackwardsOffset = POVBackwardsOffset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function PerceptionExtension.PerceptionExtensionBPLibrary.SetSightRange
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAIPerceptionComponent*           Perception                                             (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   SightRange                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPerceptionExtensionBPLibrary::SetSightRange(class UAIPerceptionComponent* Perception, float SightRange)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("PerceptionExtensionBPLibrary", "SetSightRange");

	Params::PerceptionExtensionBPLibrary_SetSightRange Parms{};

	Parms.Perception = Perception;
	Parms.SightRange = SightRange;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function PerceptionExtension.PerceptionExtensionBPLibrary.SetUseLoSHearing
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAIPerceptionComponent*           Perception                                             (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    UseLoSHearing                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPerceptionExtensionBPLibrary::SetUseLoSHearing(class UAIPerceptionComponent* Perception, bool UseLoSHearing)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("PerceptionExtensionBPLibrary", "SetUseLoSHearing");

	Params::PerceptionExtensionBPLibrary_SetUseLoSHearing Parms{};

	Parms.Perception = Perception;
	Parms.UseLoSHearing = UseLoSHearing;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function PerceptionExtension.PerceptionExtensionBPLibrary.SetVisionAngle
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAIPerceptionComponent*           Perception                                             (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   VisionAngle                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPerceptionExtensionBPLibrary::SetVisionAngle(class UAIPerceptionComponent* Perception, float VisionAngle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("PerceptionExtensionBPLibrary", "SetVisionAngle");

	Params::PerceptionExtensionBPLibrary_SetVisionAngle Parms{};

	Parms.Perception = Perception;
	Parms.VisionAngle = VisionAngle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}

