#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Detection

#include "Basic.hpp"

#include "Detection_classes.hpp"
#include "Detection_parameters.hpp"


namespace SDK
{

// Function Detection.DetectableBaseComponent.BindShape
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UShapeComponent*                  NewShape                                               (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDetectableBaseComponent::BindShape(class UShapeComponent* NewShape)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DetectableBaseComponent", "BindShape");

	Params::DetectableBaseComponent_BindShape Parms{};

	Parms.NewShape = NewShape;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Detection.DetectableBaseComponent.GetShape
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UShapeComponent*                  ReturnValue                                            (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UShapeComponent* UDetectableBaseComponent::GetShape()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DetectableBaseComponent", "GetShape");

	Params::DetectableBaseComponent_GetShape Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function Detection.DetectableBaseComponent.GetShapeAsBox
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UBoxComponent*                    ReturnValue                                            (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UBoxComponent* UDetectableBaseComponent::GetShapeAsBox()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DetectableBaseComponent", "GetShapeAsBox");

	Params::DetectableBaseComponent_GetShapeAsBox Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function Detection.DetectableBaseComponent.GetShapeAsCapsule
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UCapsuleComponent*                ReturnValue                                            (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCapsuleComponent* UDetectableBaseComponent::GetShapeAsCapsule()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DetectableBaseComponent", "GetShapeAsCapsule");

	Params::DetectableBaseComponent_GetShapeAsCapsule Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function Detection.DetectableBaseComponent.GetShapeAsSphere
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class USphereComponent*                 ReturnValue                                            (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USphereComponent* UDetectableBaseComponent::GetShapeAsSphere()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DetectableBaseComponent", "GetShapeAsSphere");

	Params::DetectableBaseComponent_GetShapeAsSphere Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function Detection.DetectableBaseComponent.ContainsPoint
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                          WorldLocation                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDetectableBaseComponent::ContainsPoint(const struct FVector& WorldLocation) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DetectableBaseComponent", "ContainsPoint");

	Params::DetectableBaseComponent_ContainsPoint Parms{};

	Parms.WorldLocation = std::move(WorldLocation);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function Detection.DetectableBaseComponent.HasShape
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDetectableBaseComponent::HasShape() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DetectableBaseComponent", "HasShape");

	Params::DetectableBaseComponent_HasShape Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// DelegateFunction Detection.RaycastDetectableComponent.DetectedBy__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// class AActor*                           Detector                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// ECollisionChannel                       CollisionChannel                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRaycastDetectableDetectEventDataData                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FHitResult                       HitResult                                              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void URaycastDetectableComponent::DetectedBy__DelegateSignature(class AActor* Detector, ECollisionChannel CollisionChannel, const struct FRaycastDetectableDetectEventData& Data, const struct FHitResult& HitResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RaycastDetectableComponent", "DetectedBy__DelegateSignature");

	Params::RaycastDetectableComponent_DetectedBy__DelegateSignature Parms{};

	Parms.Detector = Detector;
	Parms.CollisionChannel = CollisionChannel;
	Parms.Data = std::move(Data);
	Parms.HitResult = std::move(HitResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Detection.RaycastDetectableComponent.DisableDetection
// (Native, Public, BlueprintCallable)

void URaycastDetectableComponent::DisableDetection()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RaycastDetectableComponent", "DisableDetection");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function Detection.RaycastDetectableComponent.DisableDetectionOnChannel
// (Native, Public, BlueprintCallable)
// Parameters:
// ECollisionChannel                       CollisionChannel                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URaycastDetectableComponent::DisableDetectionOnChannel(const ECollisionChannel CollisionChannel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RaycastDetectableComponent", "DisableDetectionOnChannel");

	Params::RaycastDetectableComponent_DisableDetectionOnChannel Parms{};

	Parms.CollisionChannel = CollisionChannel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function Detection.RaycastDetectableComponent.EnableDetection
// (Native, Public, BlueprintCallable)

void URaycastDetectableComponent::EnableDetection()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RaycastDetectableComponent", "EnableDetection");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function Detection.RaycastDetectableComponent.EnableDetectionOnChannel
// (Native, Public, BlueprintCallable)
// Parameters:
// ECollisionChannel                       CollisionChannel                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URaycastDetectableComponent::EnableDetectionOnChannel(const ECollisionChannel CollisionChannel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RaycastDetectableComponent", "EnableDetectionOnChannel");

	Params::RaycastDetectableComponent_EnableDetectionOnChannel Parms{};

	Parms.CollisionChannel = CollisionChannel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function Detection.RaycastDetectableComponent.GetWasEverDetected
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URaycastDetectableComponent::GetWasEverDetected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RaycastDetectableComponent", "GetWasEverDetected");

	Params::RaycastDetectableComponent_GetWasEverDetected Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function Detection.RaycastDetectableComponent.LoseDetectors
// (Native, Public, BlueprintCallable)

void URaycastDetectableComponent::LoseDetectors()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RaycastDetectableComponent", "LoseDetectors");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function Detection.RaycastDetectableComponent.LoseDetectorsOnChannel
// (Native, Public, BlueprintCallable)
// Parameters:
// ECollisionChannel                       CollisionChannel                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URaycastDetectableComponent::LoseDetectorsOnChannel(const ECollisionChannel CollisionChannel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RaycastDetectableComponent", "LoseDetectorsOnChannel");

	Params::RaycastDetectableComponent_LoseDetectorsOnChannel Parms{};

	Parms.CollisionChannel = CollisionChannel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// DelegateFunction Detection.RaycastDetectableComponent.LostBy__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// class AActor*                           Detector                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// ECollisionChannel                       CollisionChannel                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRaycastDetectableLoseEventData  Data                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void URaycastDetectableComponent::LostBy__DelegateSignature(class AActor* Detector, ECollisionChannel CollisionChannel, const struct FRaycastDetectableLoseEventData& Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RaycastDetectableComponent", "LostBy__DelegateSignature");

	Params::RaycastDetectableComponent_LostBy__DelegateSignature Parms{};

	Parms.Detector = Detector;
	Parms.CollisionChannel = CollisionChannel;
	Parms.Data = std::move(Data);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Detection.RaycastDetectableComponent.CanBeDetectedByActor
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                           Detector                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   Distance                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URaycastDetectableComponent::CanBeDetectedByActor(class AActor* Detector, const float Distance) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RaycastDetectableComponent", "CanBeDetectedByActor");

	Params::RaycastDetectableComponent_CanBeDetectedByActor Parms{};

	Parms.Detector = Detector;
	Parms.Distance = Distance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function Detection.RaycastDetectableComponent.CanBeDetectedByActorOnChannel
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                           Detector                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// ECollisionChannel                       CollisionChannel                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   Distance                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URaycastDetectableComponent::CanBeDetectedByActorOnChannel(class AActor* Detector, const ECollisionChannel CollisionChannel, const float Distance) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RaycastDetectableComponent", "CanBeDetectedByActorOnChannel");

	Params::RaycastDetectableComponent_CanBeDetectedByActorOnChannel Parms{};

	Parms.Detector = Detector;
	Parms.CollisionChannel = CollisionChannel;
	Parms.Distance = Distance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function Detection.RaycastDetectableComponent.CanBeDetectedOnChannel
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// ECollisionChannel                       CollisionChannel                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URaycastDetectableComponent::CanBeDetectedOnChannel(const ECollisionChannel CollisionChannel) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RaycastDetectableComponent", "CanBeDetectedOnChannel");

	Params::RaycastDetectableComponent_CanBeDetectedOnChannel Parms{};

	Parms.CollisionChannel = CollisionChannel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function Detection.RaycastDetectableComponent.GetDistanceMethodForChannel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// ECollisionChannel                       CollisionChannel                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// ERaycastDetectableDistanceMethod        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

ERaycastDetectableDistanceMethod URaycastDetectableComponent::GetDistanceMethodForChannel(const ECollisionChannel CollisionChannel) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RaycastDetectableComponent", "GetDistanceMethodForChannel");

	Params::RaycastDetectableComponent_GetDistanceMethodForChannel Parms{};

	Parms.CollisionChannel = CollisionChannel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function Detection.RaycastDetectableComponent.IsDetectedByActor
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                           Detector                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URaycastDetectableComponent::IsDetectedByActor(class AActor* Detector) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RaycastDetectableComponent", "IsDetectedByActor");

	Params::RaycastDetectableComponent_IsDetectedByActor Parms{};

	Parms.Detector = Detector;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function Detection.RaycastDetectableComponent.IsDetectedByActorOnChannel
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                           Detector                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// ECollisionChannel                       CollisionChannel                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URaycastDetectableComponent::IsDetectedByActorOnChannel(class AActor* Detector, const ECollisionChannel CollisionChannel) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RaycastDetectableComponent", "IsDetectedByActorOnChannel");

	Params::RaycastDetectableComponent_IsDetectedByActorOnChannel Parms{};

	Parms.Detector = Detector;
	Parms.CollisionChannel = CollisionChannel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function Detection.RaycastDetectableComponent.IsDetectedOnChannel
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// ECollisionChannel                       CollisionChannel                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URaycastDetectableComponent::IsDetectedOnChannel(const ECollisionChannel CollisionChannel) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RaycastDetectableComponent", "IsDetectedOnChannel");

	Params::RaycastDetectableComponent_IsDetectedOnChannel Parms{};

	Parms.CollisionChannel = CollisionChannel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function Detection.RaycastDetectableComponent.IsUsingChannel
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// ECollisionChannel                       CollisionChannel                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    MustBeEnabled                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URaycastDetectableComponent::IsUsingChannel(const ECollisionChannel CollisionChannel, const bool MustBeEnabled) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RaycastDetectableComponent", "IsUsingChannel");

	Params::RaycastDetectableComponent_IsUsingChannel Parms{};

	Parms.CollisionChannel = CollisionChannel;
	Parms.MustBeEnabled = MustBeEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function Detection.RaycastDetectorComponent.LoseDetectedObjects
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FRaycastDetectorTraceData        Data                                                   (Parm, OutParm, NativeAccessSpecifierPublic)

void URaycastDetectorComponent::LoseDetectedObjects(struct FRaycastDetectorTraceData* Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RaycastDetectorComponent", "LoseDetectedObjects");

	Params::RaycastDetectorComponent_LoseDetectedObjects Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Data != nullptr)
		*Data = std::move(Parms.Data);
}


// Function Detection.RaycastDetectorComponent.ProcessData
// (Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRaycastDetectorTraceData        Data                                                   (Parm, OutParm, NativeAccessSpecifierPublic)
// struct FVector                          TraceStart                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                          TraceEnd                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URaycastDetectorComponent::ProcessData(struct FRaycastDetectorTraceData* Data, const struct FVector& TraceStart, const struct FVector& TraceEnd)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RaycastDetectorComponent", "ProcessData");

	Params::RaycastDetectorComponent_ProcessData Parms{};

	Parms.TraceStart = std::move(TraceStart);
	Parms.TraceEnd = std::move(TraceEnd);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Data != nullptr)
		*Data = std::move(Parms.Data);
}


// DelegateFunction Detection.ScreenDetectableComponent.Detected__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UScreenDetectableComponent*       Detectable                                             (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UScreenDetectableComponent::Detected__DelegateSignature(class UScreenDetectableComponent* Detectable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScreenDetectableComponent", "Detected__DelegateSignature");

	Params::ScreenDetectableComponent_Detected__DelegateSignature Parms{};

	Parms.Detectable = Detectable;

	UObject::ProcessEvent(Func, &Parms);
}


// DelegateFunction Detection.ScreenDetectableComponent.Lost__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UScreenDetectableComponent*       Detectable                                             (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UScreenDetectableComponent::Lost__DelegateSignature(class UScreenDetectableComponent* Detectable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScreenDetectableComponent", "Lost__DelegateSignature");

	Params::ScreenDetectableComponent_Lost__DelegateSignature Parms{};

	Parms.Detectable = Detectable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Detection.ScreenDetectableComponent.SetDetectionEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                          Object                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    Enabled                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UScreenDetectableComponent::SetDetectionEnabled(class UObject* Object, const bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScreenDetectableComponent", "SetDetectionEnabled");

	Params::ScreenDetectableComponent_SetDetectionEnabled Parms{};

	Parms.Object = Object;
	Parms.Enabled = Enabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Detection.ScreenDetectableComponent.GetCurrentStatus
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EScreenDetectableStatus                 ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

EScreenDetectableStatus UScreenDetectableComponent::GetCurrentStatus() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScreenDetectableComponent", "GetCurrentStatus");

	Params::ScreenDetectableComponent_GetCurrentStatus Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function Detection.ScreenDetectableComponent.IsDetected
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UScreenDetectableComponent::IsDetected() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScreenDetectableComponent", "IsDetected");

	Params::ScreenDetectableComponent_IsDetected Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function Detection.ScreenDetectableComponent.IsDetectionEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UScreenDetectableComponent::IsDetectionEnabled() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScreenDetectableComponent", "IsDetectionEnabled");

	Params::ScreenDetectableComponent_IsDetectionEnabled Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
