#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NavArea_DoorClosed

#include "Basic.hpp"

#include "NavigationSystem_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass NavArea_DoorClosed.NavArea_DoorClosed_C
// 0x0000 (0x0048 - 0x0048)
class UNavArea_DoorClosed_C final : public UNavArea
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NavArea_DoorClosed_C">();
	}
	static class UNavArea_DoorClosed_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNavArea_DoorClosed_C>();
	}
};
static_assert(alignof(UNavArea_DoorClosed_C) == 0x000008, "Wrong alignment on UNavArea_DoorClosed_C");
static_assert(sizeof(UNavArea_DoorClosed_C) == 0x000048, "Wrong size on UNavArea_DoorClosed_C");

}
