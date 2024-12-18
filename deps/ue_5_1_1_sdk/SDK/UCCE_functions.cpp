#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UCCE

#include "Basic.hpp"

#include "UCCE_classes.hpp"
#include "UCCE_parameters.hpp"


namespace SDK
{

// Function UCCE.ControllerEffectsManager.ForceStopForceFeedbackEffects
// (Final, Native, Public, BlueprintCallable)

void UControllerEffectsManager::ForceStopForceFeedbackEffects()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControllerEffectsManager", "ForceStopForceFeedbackEffects");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function UCCE.ControllerEffectsManager.HandleControllerConnectionChange
// (Final, Native, Protected)
// Parameters:
// EInputDeviceConnectionState             InputDeviceConnectionState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPlatformUserId                  PlatformUserId                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FInputDeviceId                   InputDeviceId                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UControllerEffectsManager::HandleControllerConnectionChange(EInputDeviceConnectionState InputDeviceConnectionState, const struct FPlatformUserId& PlatformUserId, const struct FInputDeviceId& InputDeviceId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControllerEffectsManager", "HandleControllerConnectionChange");

	Params::ControllerEffectsManager_HandleControllerConnectionChange Parms{};

	Parms.InputDeviceConnectionState = InputDeviceConnectionState;
	Parms.PlatformUserId = std::move(PlatformUserId);
	Parms.InputDeviceId = std::move(InputDeviceId);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function UCCE.ControllerEffectsManager.K2_PlayDynamicForceFeedback
// (Final, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// struct FDynamicForceFeedbackBPHandle    InHandle                                               (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// float                                   Intensity                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   Duration                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bAffectsLeftLarge                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bAffectsLeftSmall                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bAffectsRightLarge                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bAffectsRightSmall                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// EDynamicForceFeedbackAction             Action                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UControllerEffectsManager::K2_PlayDynamicForceFeedback(struct FDynamicForceFeedbackBPHandle* InHandle, float Intensity, float Duration, bool bAffectsLeftLarge, bool bAffectsLeftSmall, bool bAffectsRightLarge, bool bAffectsRightSmall, EDynamicForceFeedbackAction Action)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControllerEffectsManager", "K2_PlayDynamicForceFeedback");

	Params::ControllerEffectsManager_K2_PlayDynamicForceFeedback Parms{};

	Parms.Intensity = Intensity;
	Parms.Duration = Duration;
	Parms.bAffectsLeftLarge = bAffectsLeftLarge;
	Parms.bAffectsLeftSmall = bAffectsLeftSmall;
	Parms.bAffectsRightLarge = bAffectsRightLarge;
	Parms.bAffectsRightSmall = bAffectsRightSmall;
	Parms.Action = Action;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (InHandle != nullptr)
		*InHandle = std::move(Parms.InHandle);
}


// Function UCCE.ControllerEffectsManager.K2_PlayForceFeedback
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UForceFeedbackEffect*             ForceFeedbackEffect                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                             Tag                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bLooping                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bIgnoreTimeDilation                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bPlayWhilePaused                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UControllerEffectsManager::K2_PlayForceFeedback(class UForceFeedbackEffect* ForceFeedbackEffect, class FName Tag, bool bLooping, bool bIgnoreTimeDilation, bool bPlayWhilePaused)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControllerEffectsManager", "K2_PlayForceFeedback");

	Params::ControllerEffectsManager_K2_PlayForceFeedback Parms{};

	Parms.ForceFeedbackEffect = ForceFeedbackEffect;
	Parms.Tag = Tag;
	Parms.bLooping = bLooping;
	Parms.bIgnoreTimeDilation = bIgnoreTimeDilation;
	Parms.bPlayWhilePaused = bPlayWhilePaused;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function UCCE.ControllerEffectsManager.K2_SetTriggerEffect
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTriggerEffect*                   Effect                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UControllerEffectsManager::K2_SetTriggerEffect(class UTriggerEffect* Effect)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControllerEffectsManager", "K2_SetTriggerEffect");

	Params::ControllerEffectsManager_K2_SetTriggerEffect Parms{};

	Parms.Effect = Effect;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function UCCE.ControllerEffectsManager.K2_StartDynamicForceFeedback
// (Final, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// struct FDynamicForceFeedbackBPHandle    InHandle                                               (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// float                                   Intensity                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   Duration                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bAffectsLeftLarge                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bAffectsLeftSmall                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bAffectsRightLarge                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bAffectsRightSmall                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UControllerEffectsManager::K2_StartDynamicForceFeedback(struct FDynamicForceFeedbackBPHandle* InHandle, float Intensity, float Duration, bool bAffectsLeftLarge, bool bAffectsLeftSmall, bool bAffectsRightLarge, bool bAffectsRightSmall)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControllerEffectsManager", "K2_StartDynamicForceFeedback");

	Params::ControllerEffectsManager_K2_StartDynamicForceFeedback Parms{};

	Parms.Intensity = Intensity;
	Parms.Duration = Duration;
	Parms.bAffectsLeftLarge = bAffectsLeftLarge;
	Parms.bAffectsLeftSmall = bAffectsLeftSmall;
	Parms.bAffectsRightLarge = bAffectsRightLarge;
	Parms.bAffectsRightSmall = bAffectsRightSmall;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (InHandle != nullptr)
		*InHandle = std::move(Parms.InHandle);
}


// Function UCCE.ControllerEffectsManager.K2_StoptDynamicForceFeedback
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FDynamicForceFeedbackBPHandle    InHandle                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                                    bAffectsLeftLarge                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bAffectsLeftSmall                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bAffectsRightLarge                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bAffectsRightSmall                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UControllerEffectsManager::K2_StoptDynamicForceFeedback(const struct FDynamicForceFeedbackBPHandle& InHandle, bool bAffectsLeftLarge, bool bAffectsLeftSmall, bool bAffectsRightLarge, bool bAffectsRightSmall)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControllerEffectsManager", "K2_StoptDynamicForceFeedback");

	Params::ControllerEffectsManager_K2_StoptDynamicForceFeedback Parms{};

	Parms.InHandle = std::move(InHandle);
	Parms.bAffectsLeftLarge = bAffectsLeftLarge;
	Parms.bAffectsLeftSmall = bAffectsLeftSmall;
	Parms.bAffectsRightLarge = bAffectsRightLarge;
	Parms.bAffectsRightSmall = bAffectsRightSmall;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function UCCE.ControllerEffectsManager.K2_UpdateDynamicForceFeedback
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FDynamicForceFeedbackBPHandle    InHandle                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// float                                   Intensity                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bAffectsLeftLarge                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bAffectsLeftSmall                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bAffectsRightLarge                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bAffectsRightSmall                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UControllerEffectsManager::K2_UpdateDynamicForceFeedback(const struct FDynamicForceFeedbackBPHandle& InHandle, float Intensity, bool bAffectsLeftLarge, bool bAffectsLeftSmall, bool bAffectsRightLarge, bool bAffectsRightSmall)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControllerEffectsManager", "K2_UpdateDynamicForceFeedback");

	Params::ControllerEffectsManager_K2_UpdateDynamicForceFeedback Parms{};

	Parms.InHandle = std::move(InHandle);
	Parms.Intensity = Intensity;
	Parms.bAffectsLeftLarge = bAffectsLeftLarge;
	Parms.bAffectsLeftSmall = bAffectsLeftSmall;
	Parms.bAffectsRightLarge = bAffectsRightLarge;
	Parms.bAffectsRightSmall = bAffectsRightSmall;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function UCCE.ControllerEffectsManager.OnActorEndPlay
// (Final, Native, Protected)
// Parameters:
// class AActor*                           Actor                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// EEndPlayReason                          EndPlayReason                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UControllerEffectsManager::OnActorEndPlay(class AActor* Actor, EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControllerEffectsManager", "OnActorEndPlay");

	Params::ControllerEffectsManager_OnActorEndPlay Parms{};

	Parms.Actor = Actor;
	Parms.EndPlayReason = EndPlayReason;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function UCCE.ControllerEffectsManager.PlaySpecialEffect
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FEffectHandle                    Handle                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                                    Loop                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   Variant                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UControllerEffectsManager::PlaySpecialEffect(const struct FEffectHandle& Handle, bool Loop, int32 Variant)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControllerEffectsManager", "PlaySpecialEffect");

	Params::ControllerEffectsManager_PlaySpecialEffect Parms{};

	Parms.Handle = std::move(Handle);
	Parms.Loop = Loop;
	Parms.Variant = Variant;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function UCCE.ControllerEffectsManager.ResetAllStates
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                                    PersistentEvents                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UControllerEffectsManager::ResetAllStates(bool PersistentEvents)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControllerEffectsManager", "ResetAllStates");

	Params::ControllerEffectsManager_ResetAllStates Parms{};

	Parms.PersistentEvents = PersistentEvents;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function UCCE.ControllerEffectsManager.ResetControllerLightColor
// (Final, Native, Public, BlueprintCallable)

void UControllerEffectsManager::ResetControllerLightColor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControllerEffectsManager", "ResetControllerLightColor");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function UCCE.ControllerEffectsManager.ResetPersistentEvents
// (Final, Native, Public, BlueprintCallable)

void UControllerEffectsManager::ResetPersistentEvents()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControllerEffectsManager", "ResetPersistentEvents");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function UCCE.ControllerEffectsManager.SetControllerLightColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FColor                           Color                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UControllerEffectsManager::SetControllerLightColor(const struct FColor& Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControllerEffectsManager", "SetControllerLightColor");

	Params::ControllerEffectsManager_SetControllerLightColor Parms{};

	Parms.Color = std::move(Color);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function UCCE.ControllerEffectsManager.SpawnForceFeedbackAtLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UForceFeedbackEffect*             ForceFeedbackEffect                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                          Location                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                         Rotation                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                                    bLooping                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   IntensityMultiplier                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   StartTime                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UForceFeedbackAttenuation*        AttenuationSettings                                    (Parm, ZeroConstructor, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bAutoDestroy                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UForceFeedbackComponent*          ReturnValue                                            (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UForceFeedbackComponent* UControllerEffectsManager::SpawnForceFeedbackAtLocation(class UForceFeedbackEffect* ForceFeedbackEffect, const struct FVector& Location, const struct FRotator& Rotation, bool bLooping, float IntensityMultiplier, float StartTime, class UForceFeedbackAttenuation* AttenuationSettings, bool bAutoDestroy)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControllerEffectsManager", "SpawnForceFeedbackAtLocation");

	Params::ControllerEffectsManager_SpawnForceFeedbackAtLocation Parms{};

	Parms.ForceFeedbackEffect = ForceFeedbackEffect;
	Parms.Location = std::move(Location);
	Parms.Rotation = std::move(Rotation);
	Parms.bLooping = bLooping;
	Parms.IntensityMultiplier = IntensityMultiplier;
	Parms.StartTime = StartTime;
	Parms.AttenuationSettings = AttenuationSettings;
	Parms.bAutoDestroy = bAutoDestroy;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function UCCE.ControllerEffectsManager.SpawnForceFeedbackAttached
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UForceFeedbackEffect*             ForceFeedbackEffect                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USceneComponent*                  AttachToComponent                                      (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                             AttachPointName                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                          Location                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                         Rotation                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
// EAttachLocation                         LocationType                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bStopWhenAttachedToDestroyed                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bLooping                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   IntensityMultiplier                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   StartTime                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UForceFeedbackAttenuation*        AttenuationSettings                                    (Parm, ZeroConstructor, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bAutoDestroy                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UForceFeedbackComponent*          ReturnValue                                            (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UForceFeedbackComponent* UControllerEffectsManager::SpawnForceFeedbackAttached(class UForceFeedbackEffect* ForceFeedbackEffect, class USceneComponent* AttachToComponent, class FName AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, EAttachLocation LocationType, bool bStopWhenAttachedToDestroyed, bool bLooping, float IntensityMultiplier, float StartTime, class UForceFeedbackAttenuation* AttenuationSettings, bool bAutoDestroy)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControllerEffectsManager", "SpawnForceFeedbackAttached");

	Params::ControllerEffectsManager_SpawnForceFeedbackAttached Parms{};

	Parms.ForceFeedbackEffect = ForceFeedbackEffect;
	Parms.AttachToComponent = AttachToComponent;
	Parms.AttachPointName = AttachPointName;
	Parms.Location = std::move(Location);
	Parms.Rotation = std::move(Rotation);
	Parms.LocationType = LocationType;
	Parms.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;
	Parms.bLooping = bLooping;
	Parms.IntensityMultiplier = IntensityMultiplier;
	Parms.StartTime = StartTime;
	Parms.AttenuationSettings = AttenuationSettings;
	Parms.bAutoDestroy = bAutoDestroy;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function UCCE.ControllerEffectsManager.StopForceFeedback
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UForceFeedbackEffect*             ForceFeedbackEffect                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                             Tag                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UControllerEffectsManager::StopForceFeedback(class UForceFeedbackEffect* ForceFeedbackEffect, class FName Tag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControllerEffectsManager", "StopForceFeedback");

	Params::ControllerEffectsManager_StopForceFeedback Parms{};

	Parms.ForceFeedbackEffect = ForceFeedbackEffect;
	Parms.Tag = Tag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function UCCE.ControllerEffectsManager.StopSpecialEffect
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FEffectHandle                    Handle                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UControllerEffectsManager::StopSpecialEffect(const struct FEffectHandle& Handle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControllerEffectsManager", "StopSpecialEffect");

	Params::ControllerEffectsManager_StopSpecialEffect Parms{};

	Parms.Handle = std::move(Handle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function UCCE.ControllerEffectsManager.TriggerEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                             Name_0                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UControllerEffectsManager::TriggerEvent(class FName Name_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControllerEffectsManager", "TriggerEvent");

	Params::ControllerEffectsManager_TriggerEvent Parms{};

	Parms.Name_0 = Name_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function UCCE.ControllerEffectsManager.TurnOffTriggerEffect
// (Final, Native, Public, BlueprintCallable)

void UControllerEffectsManager::TurnOffTriggerEffect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControllerEffectsManager", "TurnOffTriggerEffect");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}

