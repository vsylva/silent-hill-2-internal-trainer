#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CeilingLamp_02_A_BP

#include "Basic.hpp"

#include "FlickeringLampEx_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass CeilingLamp_02_A_BP.CeilingLamp_02_A_BP_C
// 0x0020 (0x0498 - 0x0478)
class ACeilingLamp_02_A_BP_C final : public AFlickeringLampEx_C
{
public:
	class USpotLightComponent*                    SpotLight_MAIN;                                    // 0x0478(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URectLightComponent*                    RectLight2;                                        // 0x0480(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URectLightComponent*                    RectLight1;                                        // 0x0488(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URectLightComponent*                    RectLight_SCATTER;                                 // 0x0490(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CeilingLamp_02_A_BP_C">();
	}
	static class ACeilingLamp_02_A_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACeilingLamp_02_A_BP_C>();
	}
};
static_assert(alignof(ACeilingLamp_02_A_BP_C) == 0x000008, "Wrong alignment on ACeilingLamp_02_A_BP_C");
static_assert(sizeof(ACeilingLamp_02_A_BP_C) == 0x000498, "Wrong size on ACeilingLamp_02_A_BP_C");
static_assert(offsetof(ACeilingLamp_02_A_BP_C, SpotLight_MAIN) == 0x000478, "Member 'ACeilingLamp_02_A_BP_C::SpotLight_MAIN' has a wrong offset!");
static_assert(offsetof(ACeilingLamp_02_A_BP_C, RectLight2) == 0x000480, "Member 'ACeilingLamp_02_A_BP_C::RectLight2' has a wrong offset!");
static_assert(offsetof(ACeilingLamp_02_A_BP_C, RectLight1) == 0x000488, "Member 'ACeilingLamp_02_A_BP_C::RectLight1' has a wrong offset!");
static_assert(offsetof(ACeilingLamp_02_A_BP_C, RectLight_SCATTER) == 0x000490, "Member 'ACeilingLamp_02_A_BP_C::RectLight_SCATTER' has a wrong offset!");

}
