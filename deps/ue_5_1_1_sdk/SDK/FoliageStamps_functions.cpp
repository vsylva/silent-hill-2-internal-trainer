#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FoliageStamps

#include "Basic.hpp"

#include "FoliageStamps_classes.hpp"
#include "FoliageStamps_parameters.hpp"


namespace SDK
{

// Function FoliageStamps.FoliageStampsStatics.PaintFoliageOnLayer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class ALandscapeProxy*                  Landscape                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFoliageType*                     Foliage                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   Layer                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   Density                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   WeightTreshold                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFoliageStampsStatics::PaintFoliageOnLayer(class ALandscapeProxy* Landscape, class UFoliageType* Foliage, int32 Layer, float Density, float WeightTreshold)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FoliageStampsStatics", "PaintFoliageOnLayer");

	Params::FoliageStampsStatics_PaintFoliageOnLayer Parms{};

	Parms.Landscape = Landscape;
	Parms.Foliage = Foliage;
	Parms.Layer = Layer;
	Parms.Density = Density;
	Parms.WeightTreshold = WeightTreshold;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function FoliageStamps.FoliageStampsStatics.UpdateStampsDefinitions
// (Final, Native, Static, Public, BlueprintCallable)

void UFoliageStampsStatics::UpdateStampsDefinitions()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FoliageStampsStatics", "UpdateStampsDefinitions");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}
