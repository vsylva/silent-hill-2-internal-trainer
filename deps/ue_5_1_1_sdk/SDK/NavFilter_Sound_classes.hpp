#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NavFilter_Sound

#include "Basic.hpp"

#include "NavigationSystem_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass NavFilter_Sound.NavFilter_Sound_C
// 0x0000 (0x0048 - 0x0048)
class UNavFilter_Sound_C final : public UNavigationQueryFilter
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NavFilter_Sound_C">();
	}
	static class UNavFilter_Sound_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNavFilter_Sound_C>();
	}
};
static_assert(alignof(UNavFilter_Sound_C) == 0x000008, "Wrong alignment on UNavFilter_Sound_C");
static_assert(sizeof(UNavFilter_Sound_C) == 0x000048, "Wrong size on UNavFilter_Sound_C");

}

