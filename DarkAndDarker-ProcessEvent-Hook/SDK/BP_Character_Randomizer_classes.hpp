#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Character_Randomizer

#include "Basic.hpp"

#include "BP_DCMonsterBaseWithOptions_classes.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Character_Randomizer.BP_Character_Randomizer_C
// 0x00F0 (0x14D0 - 0x13E0)
class ABP_Character_Randomizer_C : public ABP_DCMonsterBaseWithOptions_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_Character_Randomizer_C;          // 0x13D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                 BonusItemB;                                        // 0x13E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 BonusItemA;                                        // 0x13E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 BeardExtra;                                        // 0x13F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Item_R;                                            // 0x13F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Item_L;                                            // 0x1400(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Beard;                                             // 0x1408(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Hair;                                              // 0x1410(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          RandomizeSeed;                                     // 0x1418(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          RandomizeOnConstruct;                              // 0x1419(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3362[0x2];                                     // 0x141A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         SeedValue;                                         // 0x141C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FRandomStream                          Seed;                                              // 0x1420(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor)
	TArray<class USkeletalMesh*>                  Variations_Character;                              // 0x1428(0x0010)(Edit, BlueprintVisible)
	TArray<class USkeletalMesh*>                  Variations_Hair;                                   // 0x1438(0x0010)(Edit, BlueprintVisible)
	TArray<class USkeletalMesh*>                  Variations_Beard;                                  // 0x1448(0x0010)(Edit, BlueprintVisible)
	TArray<class USkeletalMesh*>                  Variations_BeardExtras;                            // 0x1458(0x0010)(Edit, BlueprintVisible)
	TArray<class UStaticMesh*>                    Variations_Item_R;                                 // 0x1468(0x0010)(Edit, BlueprintVisible)
	TArray<class UStaticMesh*>                    Variations_Item_L;                                 // 0x1478(0x0010)(Edit, BlueprintVisible)
	TArray<class USkeletalMesh*>                  Variations_BonusItemA;                             // 0x1488(0x0010)(Edit, BlueprintVisible)
	TArray<class USkeletalMesh*>                  Variations_BonusItemB;                             // 0x1498(0x0010)(Edit, BlueprintVisible)
	bool                                          DebugEnabled;                                      // 0x14A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Enable_BeardExtra;                                 // 0x14A9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Enable_Beard;                                      // 0x14AA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Enable_Hair;                                       // 0x14AB(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Enable_BaseVariation;                              // 0x14AC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Enable_Item_L;                                     // 0x14AD(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Enable_Item_R;                                     // 0x14AE(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Enable_BonusItem_A;                                // 0x14AF(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Enable_BonusItem_B;                                // 0x14B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3363[0x3];                                     // 0x14B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         SkeletalMesh_Material_Slot1;                       // 0x14B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SkeletalMesh_Material_Slot2;                       // 0x14B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3364[0x4];                                     // 0x14BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     SkeletalMesh_Material_Asset1;                      // 0x14C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     SkeletalMesh_Material_Asset2;                      // 0x14C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void DebugMessage(const class FString& Warning_Message);
	void ExecuteUbergraph_BP_Character_Randomizer(int32 EntryPoint);
	void Randomize();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Character_Randomizer_C">();
	}
	static class ABP_Character_Randomizer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Character_Randomizer_C>();
	}
};
static_assert(alignof(ABP_Character_Randomizer_C) == 0x000010, "Wrong alignment on ABP_Character_Randomizer_C");
static_assert(sizeof(ABP_Character_Randomizer_C) == 0x0014D0, "Wrong size on ABP_Character_Randomizer_C");
static_assert(offsetof(ABP_Character_Randomizer_C, UberGraphFrame_BP_Character_Randomizer_C) == 0x0013D8, "Member 'ABP_Character_Randomizer_C::UberGraphFrame_BP_Character_Randomizer_C' has a wrong offset!");
static_assert(offsetof(ABP_Character_Randomizer_C, BonusItemB) == 0x0013E0, "Member 'ABP_Character_Randomizer_C::BonusItemB' has a wrong offset!");
static_assert(offsetof(ABP_Character_Randomizer_C, BonusItemA) == 0x0013E8, "Member 'ABP_Character_Randomizer_C::BonusItemA' has a wrong offset!");
static_assert(offsetof(ABP_Character_Randomizer_C, BeardExtra) == 0x0013F0, "Member 'ABP_Character_Randomizer_C::BeardExtra' has a wrong offset!");
static_assert(offsetof(ABP_Character_Randomizer_C, Item_R) == 0x0013F8, "Member 'ABP_Character_Randomizer_C::Item_R' has a wrong offset!");
static_assert(offsetof(ABP_Character_Randomizer_C, Item_L) == 0x001400, "Member 'ABP_Character_Randomizer_C::Item_L' has a wrong offset!");
static_assert(offsetof(ABP_Character_Randomizer_C, Beard) == 0x001408, "Member 'ABP_Character_Randomizer_C::Beard' has a wrong offset!");
static_assert(offsetof(ABP_Character_Randomizer_C, Hair) == 0x001410, "Member 'ABP_Character_Randomizer_C::Hair' has a wrong offset!");
static_assert(offsetof(ABP_Character_Randomizer_C, RandomizeSeed) == 0x001418, "Member 'ABP_Character_Randomizer_C::RandomizeSeed' has a wrong offset!");
static_assert(offsetof(ABP_Character_Randomizer_C, RandomizeOnConstruct) == 0x001419, "Member 'ABP_Character_Randomizer_C::RandomizeOnConstruct' has a wrong offset!");
static_assert(offsetof(ABP_Character_Randomizer_C, SeedValue) == 0x00141C, "Member 'ABP_Character_Randomizer_C::SeedValue' has a wrong offset!");
static_assert(offsetof(ABP_Character_Randomizer_C, Seed) == 0x001420, "Member 'ABP_Character_Randomizer_C::Seed' has a wrong offset!");
static_assert(offsetof(ABP_Character_Randomizer_C, Variations_Character) == 0x001428, "Member 'ABP_Character_Randomizer_C::Variations_Character' has a wrong offset!");
static_assert(offsetof(ABP_Character_Randomizer_C, Variations_Hair) == 0x001438, "Member 'ABP_Character_Randomizer_C::Variations_Hair' has a wrong offset!");
static_assert(offsetof(ABP_Character_Randomizer_C, Variations_Beard) == 0x001448, "Member 'ABP_Character_Randomizer_C::Variations_Beard' has a wrong offset!");
static_assert(offsetof(ABP_Character_Randomizer_C, Variations_BeardExtras) == 0x001458, "Member 'ABP_Character_Randomizer_C::Variations_BeardExtras' has a wrong offset!");
static_assert(offsetof(ABP_Character_Randomizer_C, Variations_Item_R) == 0x001468, "Member 'ABP_Character_Randomizer_C::Variations_Item_R' has a wrong offset!");
static_assert(offsetof(ABP_Character_Randomizer_C, Variations_Item_L) == 0x001478, "Member 'ABP_Character_Randomizer_C::Variations_Item_L' has a wrong offset!");
static_assert(offsetof(ABP_Character_Randomizer_C, Variations_BonusItemA) == 0x001488, "Member 'ABP_Character_Randomizer_C::Variations_BonusItemA' has a wrong offset!");
static_assert(offsetof(ABP_Character_Randomizer_C, Variations_BonusItemB) == 0x001498, "Member 'ABP_Character_Randomizer_C::Variations_BonusItemB' has a wrong offset!");
static_assert(offsetof(ABP_Character_Randomizer_C, DebugEnabled) == 0x0014A8, "Member 'ABP_Character_Randomizer_C::DebugEnabled' has a wrong offset!");
static_assert(offsetof(ABP_Character_Randomizer_C, Enable_BeardExtra) == 0x0014A9, "Member 'ABP_Character_Randomizer_C::Enable_BeardExtra' has a wrong offset!");
static_assert(offsetof(ABP_Character_Randomizer_C, Enable_Beard) == 0x0014AA, "Member 'ABP_Character_Randomizer_C::Enable_Beard' has a wrong offset!");
static_assert(offsetof(ABP_Character_Randomizer_C, Enable_Hair) == 0x0014AB, "Member 'ABP_Character_Randomizer_C::Enable_Hair' has a wrong offset!");
static_assert(offsetof(ABP_Character_Randomizer_C, Enable_BaseVariation) == 0x0014AC, "Member 'ABP_Character_Randomizer_C::Enable_BaseVariation' has a wrong offset!");
static_assert(offsetof(ABP_Character_Randomizer_C, Enable_Item_L) == 0x0014AD, "Member 'ABP_Character_Randomizer_C::Enable_Item_L' has a wrong offset!");
static_assert(offsetof(ABP_Character_Randomizer_C, Enable_Item_R) == 0x0014AE, "Member 'ABP_Character_Randomizer_C::Enable_Item_R' has a wrong offset!");
static_assert(offsetof(ABP_Character_Randomizer_C, Enable_BonusItem_A) == 0x0014AF, "Member 'ABP_Character_Randomizer_C::Enable_BonusItem_A' has a wrong offset!");
static_assert(offsetof(ABP_Character_Randomizer_C, Enable_BonusItem_B) == 0x0014B0, "Member 'ABP_Character_Randomizer_C::Enable_BonusItem_B' has a wrong offset!");
static_assert(offsetof(ABP_Character_Randomizer_C, SkeletalMesh_Material_Slot1) == 0x0014B4, "Member 'ABP_Character_Randomizer_C::SkeletalMesh_Material_Slot1' has a wrong offset!");
static_assert(offsetof(ABP_Character_Randomizer_C, SkeletalMesh_Material_Slot2) == 0x0014B8, "Member 'ABP_Character_Randomizer_C::SkeletalMesh_Material_Slot2' has a wrong offset!");
static_assert(offsetof(ABP_Character_Randomizer_C, SkeletalMesh_Material_Asset1) == 0x0014C0, "Member 'ABP_Character_Randomizer_C::SkeletalMesh_Material_Asset1' has a wrong offset!");
static_assert(offsetof(ABP_Character_Randomizer_C, SkeletalMesh_Material_Asset2) == 0x0014C8, "Member 'ABP_Character_Randomizer_C::SkeletalMesh_Material_Asset2' has a wrong offset!");

}

