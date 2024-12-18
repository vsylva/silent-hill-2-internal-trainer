#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NinjaCharacter

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "NinjaCharacter_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// Class NinjaCharacter.NinjaCharacter
// 0x0070 (0x06B0 - 0x0640)
class ANinjaCharacter : public ACharacter
{
public:
	uint8                                         Pad_638[0x38];                                     // 0x0638(0x0038)(Fixing Size After Last Property [ Dumper-7 ])
	uint8                                         bCapsuleRotatesControlRotation : 1;                // 0x0670(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bAltFlipControlRotation : 1;                       // 0x0670(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_671[0x3F];                                     // 0x0671(0x003F)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void K2_OnCharMovementAxisChanged(const struct FVector& OldAxisZ, const struct FVector& CurrentAxisZ);
	void K2_OnGravityDirectionChanged(ENinjaGravityDirectionMode OldGravityDirectionMode, ENinjaGravityDirectionMode CurrentGravityDirectionMode);
	void K2_OnUnwalkableHit(const struct FHitResult& Hit);
	void LaunchCharacterRotated(const struct FVector& LaunchVelocity, bool bHorizontalOverride, bool bVerticalOverride);
	bool SetCharMovementAxis(const struct FVector& NewAxisZ, bool bForceFindFloor);
	void SmoothComponentLocation(class USceneComponent* SceneComponent, float DeltaTime, float LocationSpeed, const struct FVector& RelativeLocation);
	void SmoothComponentLocationAndRotation(class USceneComponent* SceneComponent, float DeltaTime, float LocationSpeed, float RotationSpeed, const struct FVector& RelativeLocation, const struct FRotator& RelativeRotation);
	void SmoothComponentRotation(class USceneComponent* SceneComponent, float DeltaTime, float RotationSpeed, const struct FRotator& RelativeRotation);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NinjaCharacter">();
	}
	static class ANinjaCharacter* GetDefaultObj()
	{
		return GetDefaultObjImpl<ANinjaCharacter>();
	}
};
static_assert(alignof(ANinjaCharacter) == 0x000010, "Wrong alignment on ANinjaCharacter");
static_assert(sizeof(ANinjaCharacter) == 0x0006B0, "Wrong size on ANinjaCharacter");

// Class NinjaCharacter.NinjaCharacterMovementComponent
// 0x0100 (0x1000 - 0x0F00)
class UNinjaCharacterMovementComponent : public UCharacterMovementComponent
{
public:
	uint8                                         BitPad_EF8_0 : 1;                                  // 0x0EF8(0x0001)(Fixing Bit-Field Size Between Bits [ Dumper-7 ])
	uint8                                         bForceSimulateMovement : 1;                        // 0x0EF8(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected))
	uint8                                         bRevertToDefaultGravity : 1;                       // 0x0EF8(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_EF9[0x3];                                      // 0x0EF9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	bool                                          bLandOnAnySurface;                                 // 0x0EFC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_EFD[0x9B];                                     // 0x0EFD(0x009B)(Fixing Size After Last Property [ Dumper-7 ])
	uint8                                         bTriggerUnwalkableHits : 1;                        // 0x0F98(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_F99[0x7];                                      // 0x0F99(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	ENinjaGravityDirectionMode                    GravityDirectionMode;                              // 0x0FA0(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_FA1[0x7];                                      // 0x0FA1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                GravityVectorA;                                    // 0x0FA8(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                                GravityVectorB;                                    // 0x0FC0(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AActor*                                 GravityActor;                                      // 0x0FD8(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         BitPad_FE0_0 : 1;                                  // 0x0FE0(0x0001)(Fixing Bit-Field Size Between Bits [ Dumper-7 ])
	uint8                                         bDisableGravityReplication : 1;                    // 0x0FE0(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected))
	uint8                                         BitPad_FE0_2 : 6;                                  // 0x0FE0(0x0001)(Fixing Bit-Field Size For New Byte [ Dumper-7 ])
	uint8                                         Pad_FE1[0x7];                                      // 0x0FE1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	uint8                                         bAlignGravityToBase : 1;                           // 0x0FE8(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bAlignComponentToFloor : 1;                        // 0x0FE8(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bAlignComponentToGravity : 1;                      // 0x0FE8(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bAlwaysRotateAroundCenter : 1;                     // 0x0FE8(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bRotateVelocityOnGround : 1;                       // 0x0FE8(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_FE9[0x3];                                      // 0x0FE9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ThresholdParallelAngle;                            // 0x0FEC(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         ThresholdOrthogonalCosine;                         // 0x0FF0(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         ThresholdParallelCosine;                           // 0x0FF4(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_FF8[0x8];                                      // 0x0FF8(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void K2_SetFixedGravityDirection(const struct FVector& NewGravityDirection);
	void K2_SetPlaneGravityDirection(const struct FVector& NewGravityPlaneBase, const struct FVector& NewGravityPlaneNormal);
	void MulticastDisableAlignComponentToFloor();
	void MulticastDisableAlignComponentToGravity();
	void MulticastDisableAlignGravityToBase();
	void MulticastEnableAlignComponentToFloor();
	void MulticastEnableAlignComponentToGravity();
	void MulticastEnableAlignGravityToBase();
	void MulticastSetBoxGravityDirection(const struct FVector& NewGravityBoxOrigin, const struct FVector& NewGravityBoxExtent);
	void MulticastSetBoxGravityDirectionFromActor(class AActor* NewGravityActor);
	void MulticastSetCollisionGravityDirection(class AActor* NewGravityActor);
	void MulticastSetFixedGravityDirection(const struct FVector& NewFixedGravityDirection);
	void MulticastSetGravityScale(float NewGravityScale);
	void MulticastSetLineGravityDirection(const struct FVector& NewGravityLineStart, const struct FVector& NewGravityLineEnd);
	void MulticastSetPlaneGravityDirection(const struct FVector& NewGravityPlaneBase, const struct FVector& NewGravityPlaneNormal);
	void MulticastSetPointGravityDirection(const struct FVector& NewGravityPoint);
	void MulticastSetPointGravityDirectionFromActor(class AActor* NewGravityActor);
	void MulticastSetSegmentGravityDirection(const struct FVector& NewGravitySegmentStart, const struct FVector& NewGravitySegmentEnd);
	void MulticastSetSplineGravityDirection(class AActor* NewGravityActor);
	void MulticastSetSplinePlaneGravityDirection(class AActor* NewGravityActor);
	void MulticastSetSplineTangentGravityDirection(class AActor* NewGravityActor);
	void OnComponentHit(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void SetAlignComponentToFloor(bool bNewAlignComponentToFloor);
	void SetAlignComponentToGravity(bool bNewAlignComponentToGravity);
	void SetAlignGravityToBase(bool bNewAlignGravityToBase);
	void SetBoxGravityDirection(const struct FVector& NewGravityBoxOrigin, const struct FVector& NewGravityBoxExtent);
	void SetBoxGravityDirectionFromActor(class AActor* NewGravityActor);
	void SetCollisionGravityDirection(class AActor* NewGravityActor);
	void SetLineGravityDirection(const struct FVector& NewGravityLineStart, const struct FVector& NewGravityLineEnd);
	void SetPointGravityDirection(const struct FVector& NewGravityPoint);
	void SetPointGravityDirectionFromActor(class AActor* NewGravityActor);
	void SetSegmentGravityDirection(const struct FVector& NewGravitySegmentStart, const struct FVector& NewGravitySegmentEnd);
	void SetSplineGravityDirection(class AActor* NewGravityActor);
	void SetSplinePlaneGravityDirection(class AActor* NewGravityActor);
	void SetSplineTangentGravityDirection(class AActor* NewGravityActor);

	struct FVector GetGravityDirection(bool bAvoidZeroGravity) const;
	float GetGravityMagnitude() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NinjaCharacterMovementComponent">();
	}
	static class UNinjaCharacterMovementComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNinjaCharacterMovementComponent>();
	}
};
static_assert(alignof(UNinjaCharacterMovementComponent) == 0x000010, "Wrong alignment on UNinjaCharacterMovementComponent");
static_assert(sizeof(UNinjaCharacterMovementComponent) == 0x001000, "Wrong size on UNinjaCharacterMovementComponent");
static_assert(offsetof(UNinjaCharacterMovementComponent, bLandOnAnySurface) == 0x000EFC, "Member 'UNinjaCharacterMovementComponent::bLandOnAnySurface' has a wrong offset!");
static_assert(offsetof(UNinjaCharacterMovementComponent, GravityDirectionMode) == 0x000FA0, "Member 'UNinjaCharacterMovementComponent::GravityDirectionMode' has a wrong offset!");
static_assert(offsetof(UNinjaCharacterMovementComponent, GravityVectorA) == 0x000FA8, "Member 'UNinjaCharacterMovementComponent::GravityVectorA' has a wrong offset!");
static_assert(offsetof(UNinjaCharacterMovementComponent, GravityVectorB) == 0x000FC0, "Member 'UNinjaCharacterMovementComponent::GravityVectorB' has a wrong offset!");
static_assert(offsetof(UNinjaCharacterMovementComponent, GravityActor) == 0x000FD8, "Member 'UNinjaCharacterMovementComponent::GravityActor' has a wrong offset!");
static_assert(offsetof(UNinjaCharacterMovementComponent, ThresholdParallelAngle) == 0x000FEC, "Member 'UNinjaCharacterMovementComponent::ThresholdParallelAngle' has a wrong offset!");
static_assert(offsetof(UNinjaCharacterMovementComponent, ThresholdOrthogonalCosine) == 0x000FF0, "Member 'UNinjaCharacterMovementComponent::ThresholdOrthogonalCosine' has a wrong offset!");
static_assert(offsetof(UNinjaCharacterMovementComponent, ThresholdParallelCosine) == 0x000FF4, "Member 'UNinjaCharacterMovementComponent::ThresholdParallelCosine' has a wrong offset!");

// Class NinjaCharacter.NinjaPhysicsVolume
// 0x0080 (0x0378 - 0x02F8)
class ANinjaPhysicsVolume : public APhysicsVolume
{
public:
	TArray<class AActor*>                         TrackedActors;                                     // 0x02F8(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, Protected, NativeAccessSpecifierProtected)
	TArray<class ANinjaCharacter*>                TrackedNinjas;                                     // 0x0308(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, Protected, NativeAccessSpecifierProtected)
	ENinjaGravityDirectionMode                    GravityDirectionMode;                              // 0x0318(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_319[0x7];                                      // 0x0319(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                GravityVectorA;                                    // 0x0320(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                                GravityVectorB;                                    // 0x0338(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AActor*                                 GravityActor;                                      // 0x0350(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         GravityScale;                                      // 0x0358(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_35C[0x4];                                      // 0x035C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                NinjaFallVelocity;                                 // 0x0360(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void K2_SetFixedGravityDirection(const struct FVector& NewGravityDirection);
	void K2_SetPlaneGravityDirection(const struct FVector& NewGravityPlaneBase, const struct FVector& NewGravityPlaneNormal);
	void SetBoxGravityDirection(const struct FVector& NewGravityBoxOrigin, const struct FVector& NewGravityBoxExtent);
	void SetBoxGravityDirectionFromActor(class AActor* NewGravityActor);
	void SetCollisionGravityDirection(class AActor* NewGravityActor);
	void SetGravityScale(float NewGravityScale);
	void SetLineGravityDirection(const struct FVector& NewGravityLineStart, const struct FVector& NewGravityLineEnd);
	void SetPointGravityDirection(const struct FVector& NewGravityPoint);
	void SetPointGravityDirectionFromActor(class AActor* NewGravityActor);
	void SetSegmentGravityDirection(const struct FVector& NewGravitySegmentStart, const struct FVector& NewGravitySegmentEnd);
	void SetSplineGravityDirection(class AActor* NewGravityActor);
	void SetSplinePlaneGravityDirection(class AActor* NewGravityActor);
	void SetSplineTangentGravityDirection(class AActor* NewGravityActor);

	struct FVector GetGravity(const struct FVector& Point) const;
	struct FVector GetGravityDirection(const struct FVector& Point) const;
	float GetGravityMagnitude(const struct FVector& Point) const;
	float GetGravityScale() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NinjaPhysicsVolume">();
	}
	static class ANinjaPhysicsVolume* GetDefaultObj()
	{
		return GetDefaultObjImpl<ANinjaPhysicsVolume>();
	}
};
static_assert(alignof(ANinjaPhysicsVolume) == 0x000008, "Wrong alignment on ANinjaPhysicsVolume");
static_assert(sizeof(ANinjaPhysicsVolume) == 0x000378, "Wrong size on ANinjaPhysicsVolume");
static_assert(offsetof(ANinjaPhysicsVolume, TrackedActors) == 0x0002F8, "Member 'ANinjaPhysicsVolume::TrackedActors' has a wrong offset!");
static_assert(offsetof(ANinjaPhysicsVolume, TrackedNinjas) == 0x000308, "Member 'ANinjaPhysicsVolume::TrackedNinjas' has a wrong offset!");
static_assert(offsetof(ANinjaPhysicsVolume, GravityDirectionMode) == 0x000318, "Member 'ANinjaPhysicsVolume::GravityDirectionMode' has a wrong offset!");
static_assert(offsetof(ANinjaPhysicsVolume, GravityVectorA) == 0x000320, "Member 'ANinjaPhysicsVolume::GravityVectorA' has a wrong offset!");
static_assert(offsetof(ANinjaPhysicsVolume, GravityVectorB) == 0x000338, "Member 'ANinjaPhysicsVolume::GravityVectorB' has a wrong offset!");
static_assert(offsetof(ANinjaPhysicsVolume, GravityActor) == 0x000350, "Member 'ANinjaPhysicsVolume::GravityActor' has a wrong offset!");
static_assert(offsetof(ANinjaPhysicsVolume, GravityScale) == 0x000358, "Member 'ANinjaPhysicsVolume::GravityScale' has a wrong offset!");
static_assert(offsetof(ANinjaPhysicsVolume, NinjaFallVelocity) == 0x000360, "Member 'ANinjaPhysicsVolume::NinjaFallVelocity' has a wrong offset!");

// Class NinjaCharacter.NinjaPhysicsVolumeSpline
// 0x0008 (0x0380 - 0x0378)
class ANinjaPhysicsVolumeSpline final : public ANinjaPhysicsVolume
{
public:
	class USplineComponent*                       SplineComponent;                                   // 0x0378(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NinjaPhysicsVolumeSpline">();
	}
	static class ANinjaPhysicsVolumeSpline* GetDefaultObj()
	{
		return GetDefaultObjImpl<ANinjaPhysicsVolumeSpline>();
	}
};
static_assert(alignof(ANinjaPhysicsVolumeSpline) == 0x000008, "Wrong alignment on ANinjaPhysicsVolumeSpline");
static_assert(sizeof(ANinjaPhysicsVolumeSpline) == 0x000380, "Wrong size on ANinjaPhysicsVolumeSpline");
static_assert(offsetof(ANinjaPhysicsVolumeSpline, SplineComponent) == 0x000378, "Member 'ANinjaPhysicsVolumeSpline::SplineComponent' has a wrong offset!");

// Class NinjaCharacter.NinjaPlayerCameraManager
// 0x0000 (0x3420 - 0x3420)
class ANinjaPlayerCameraManager final : public APlayerCameraManager
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NinjaPlayerCameraManager">();
	}
	static class ANinjaPlayerCameraManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<ANinjaPlayerCameraManager>();
	}
};
static_assert(alignof(ANinjaPlayerCameraManager) == 0x000010, "Wrong alignment on ANinjaPlayerCameraManager");
static_assert(sizeof(ANinjaPlayerCameraManager) == 0x003420, "Wrong size on ANinjaPlayerCameraManager");

// Class NinjaCharacter.NinjaProjectileMovementComponent
// 0x0020 (0x0260 - 0x0240)
class UNinjaProjectileMovementComponent final : public UProjectileMovementComponent
{
public:
	uint8                                         bFollowGravityDirection : 1;                       // 0x0238(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_239[0x27];                                     // 0x0239(0x0027)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NinjaProjectileMovementComponent">();
	}
	static class UNinjaProjectileMovementComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNinjaProjectileMovementComponent>();
	}
};
static_assert(alignof(UNinjaProjectileMovementComponent) == 0x000010, "Wrong alignment on UNinjaProjectileMovementComponent");
static_assert(sizeof(UNinjaProjectileMovementComponent) == 0x000260, "Wrong size on UNinjaProjectileMovementComponent");

}

