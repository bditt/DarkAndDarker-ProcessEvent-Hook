#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Bookshelf_Book_A02

#include "Basic.hpp"

#include "BP_TriggerBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Bookshelf_Book_A02.BP_Bookshelf_Book_A02_C
// 0x0008 (0x04E0 - 0x04D8)
class ABP_Bookshelf_Book_A02_C final : public ABP_TriggerBase_C
{
public:
	class UArrowComponent*                        Arrow;                                             // 0x04D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Bookshelf_Book_A02_C">();
	}
	static class ABP_Bookshelf_Book_A02_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Bookshelf_Book_A02_C>();
	}
};
static_assert(alignof(ABP_Bookshelf_Book_A02_C) == 0x000008, "Wrong alignment on ABP_Bookshelf_Book_A02_C");
static_assert(sizeof(ABP_Bookshelf_Book_A02_C) == 0x0004E0, "Wrong size on ABP_Bookshelf_Book_A02_C");
static_assert(offsetof(ABP_Bookshelf_Book_A02_C, Arrow) == 0x0004D8, "Member 'ABP_Bookshelf_Book_A02_C::Arrow' has a wrong offset!");

}

