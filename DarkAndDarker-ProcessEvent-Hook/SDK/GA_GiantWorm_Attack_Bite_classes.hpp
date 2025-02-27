#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_GiantWorm_Attack_Bite

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_MonsterMeleeAttackBaseWithOptions_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_GiantWorm_Attack_Bite.GA_GiantWorm_Attack_Bite_C
// 0x0008 (0x0728 - 0x0720)
class UGA_GiantWorm_Attack_Bite_C final : public UGA_MonsterMeleeAttackBaseWithOptions_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_GiantWorm_Attack_Bite_C;         // 0x0720(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_GA_GiantWorm_Attack_Bite(int32 EntryPoint);
	void K2_OnEndAbility(bool bWasCancelled);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_GiantWorm_Attack_Bite_C">();
	}
	static class UGA_GiantWorm_Attack_Bite_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_GiantWorm_Attack_Bite_C>();
	}
};
static_assert(alignof(UGA_GiantWorm_Attack_Bite_C) == 0x000008, "Wrong alignment on UGA_GiantWorm_Attack_Bite_C");
static_assert(sizeof(UGA_GiantWorm_Attack_Bite_C) == 0x000728, "Wrong size on UGA_GiantWorm_Attack_Bite_C");
static_assert(offsetof(UGA_GiantWorm_Attack_Bite_C, UberGraphFrame_GA_GiantWorm_Attack_Bite_C) == 0x000720, "Member 'UGA_GiantWorm_Attack_Bite_C::UberGraphFrame_GA_GiantWorm_Attack_Bite_C' has a wrong offset!");

}

