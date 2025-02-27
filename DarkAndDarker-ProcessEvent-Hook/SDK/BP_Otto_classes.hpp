#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Otto

#include "Basic.hpp"

#include "BP_DCMonsterBaseWithOptions_classes.hpp"
#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Otto.BP_Otto_C
// 0x0020 (0x1400 - 0x13E0)
class ABP_Otto_C final : public ABP_DCMonsterBaseWithOptions_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_Otto_C;                          // 0x13D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class AActor*>                         Interacters;                                       // 0x13E0(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	struct FGameplayTag                           Selection;                                         // 0x13F0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void EventFMsgInteractFailed(const struct FMsgInteractFailed& Msg);
	void EventFMsgInteractStarted(const struct FMsgInteractStarted& Msg);
	void ExecuteUbergraph_BP_Otto(int32 EntryPoint);
	void InteractSucceed(class AActor* Interacter, const struct FGameplayTag& StateTag, const struct FGameplayTag& TriggerTag, const struct FHitResult& HitResult);
	void OnMessageReceived_B39992A64B1101C700A945B3A442429D(class UMsgBaseNode* ProxyObject);
	void OnMessageReceived_C089C7A74477A8F15E2C599BA276E0B8(class UMsgBaseNode* ProxyObject);
	void RandomActionFromLie();
	void RandomActionFromSit();
	void RandomActionFromStand();
	void ReceiveBeginPlay();
	void Removed_6EE33BEA4490BDF397E479ADC218DF7F();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Otto_C">();
	}
	static class ABP_Otto_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Otto_C>();
	}
};
static_assert(alignof(ABP_Otto_C) == 0x000010, "Wrong alignment on ABP_Otto_C");
static_assert(sizeof(ABP_Otto_C) == 0x001400, "Wrong size on ABP_Otto_C");
static_assert(offsetof(ABP_Otto_C, UberGraphFrame_BP_Otto_C) == 0x0013D8, "Member 'ABP_Otto_C::UberGraphFrame_BP_Otto_C' has a wrong offset!");
static_assert(offsetof(ABP_Otto_C, Interacters) == 0x0013E0, "Member 'ABP_Otto_C::Interacters' has a wrong offset!");
static_assert(offsetof(ABP_Otto_C, Selection) == 0x0013F0, "Member 'ABP_Otto_C::Selection' has a wrong offset!");

}

