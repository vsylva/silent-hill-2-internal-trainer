#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CharacterAnimationExtras

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "ControlRig_structs.hpp"


namespace SDK
{

// ScriptStruct CharacterAnimationExtras.RigUnit_SphereTraceByTraceChannelEx
// 0x0070 (0x0078 - 0x0008)
struct FRigUnit_SphereTraceByTraceChannelEx final : public FRigUnit
{
public:
	struct FVector                                Start;                                             // 0x0008(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                End;                                               // 0x0020(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ETraceTypeQuery                               TraceChannel;                                      // 0x0038(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          TraceComplex;                                      // 0x0039(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3A[0x2];                                       // 0x003A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Radius;                                            // 0x003C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          DrawDebug;                                         // 0x0040(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bHit;                                              // 0x0041(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_42[0x6];                                       // 0x0042(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                HitLocation;                                       // 0x0048(0x0018)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                HitNormal;                                         // 0x0060(0x0018)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FRigUnit_SphereTraceByTraceChannelEx) == 0x000008, "Wrong alignment on FRigUnit_SphereTraceByTraceChannelEx");
static_assert(sizeof(FRigUnit_SphereTraceByTraceChannelEx) == 0x000078, "Wrong size on FRigUnit_SphereTraceByTraceChannelEx");
static_assert(offsetof(FRigUnit_SphereTraceByTraceChannelEx, Start) == 0x000008, "Member 'FRigUnit_SphereTraceByTraceChannelEx::Start' has a wrong offset!");
static_assert(offsetof(FRigUnit_SphereTraceByTraceChannelEx, End) == 0x000020, "Member 'FRigUnit_SphereTraceByTraceChannelEx::End' has a wrong offset!");
static_assert(offsetof(FRigUnit_SphereTraceByTraceChannelEx, TraceChannel) == 0x000038, "Member 'FRigUnit_SphereTraceByTraceChannelEx::TraceChannel' has a wrong offset!");
static_assert(offsetof(FRigUnit_SphereTraceByTraceChannelEx, TraceComplex) == 0x000039, "Member 'FRigUnit_SphereTraceByTraceChannelEx::TraceComplex' has a wrong offset!");
static_assert(offsetof(FRigUnit_SphereTraceByTraceChannelEx, Radius) == 0x00003C, "Member 'FRigUnit_SphereTraceByTraceChannelEx::Radius' has a wrong offset!");
static_assert(offsetof(FRigUnit_SphereTraceByTraceChannelEx, DrawDebug) == 0x000040, "Member 'FRigUnit_SphereTraceByTraceChannelEx::DrawDebug' has a wrong offset!");
static_assert(offsetof(FRigUnit_SphereTraceByTraceChannelEx, bHit) == 0x000041, "Member 'FRigUnit_SphereTraceByTraceChannelEx::bHit' has a wrong offset!");
static_assert(offsetof(FRigUnit_SphereTraceByTraceChannelEx, HitLocation) == 0x000048, "Member 'FRigUnit_SphereTraceByTraceChannelEx::HitLocation' has a wrong offset!");
static_assert(offsetof(FRigUnit_SphereTraceByTraceChannelEx, HitNormal) == 0x000060, "Member 'FRigUnit_SphereTraceByTraceChannelEx::HitNormal' has a wrong offset!");

// ScriptStruct CharacterAnimationExtras.AnimNode_CreatePoseSnapshot
// 0x0048 (0x0110 - 0x00C8)
struct FAnimNode_CreatePoseSnapshot final : public FAnimNode_SkeletalControlBase
{
public:
	bool                                          Enabled;                                           // 0x00C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C9[0x3];                                       // 0x00C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   SnapshotName;                                      // 0x00CC(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D4[0x4];                                       // 0x00D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPoseSnapshot                          Snapshot;                                          // 0x00D8(0x0038)(NativeAccessSpecifierPrivate)
};
static_assert(alignof(FAnimNode_CreatePoseSnapshot) == 0x000008, "Wrong alignment on FAnimNode_CreatePoseSnapshot");
static_assert(sizeof(FAnimNode_CreatePoseSnapshot) == 0x000110, "Wrong size on FAnimNode_CreatePoseSnapshot");
static_assert(offsetof(FAnimNode_CreatePoseSnapshot, Enabled) == 0x0000C8, "Member 'FAnimNode_CreatePoseSnapshot::Enabled' has a wrong offset!");
static_assert(offsetof(FAnimNode_CreatePoseSnapshot, SnapshotName) == 0x0000CC, "Member 'FAnimNode_CreatePoseSnapshot::SnapshotName' has a wrong offset!");
static_assert(offsetof(FAnimNode_CreatePoseSnapshot, Snapshot) == 0x0000D8, "Member 'FAnimNode_CreatePoseSnapshot::Snapshot' has a wrong offset!");

// ScriptStruct CharacterAnimationExtras.RigUnit_SphereTraceMultiByTraceChannelEx
// 0x0078 (0x0080 - 0x0008)
struct FRigUnit_SphereTraceMultiByTraceChannelEx final : public FRigUnit
{
public:
	struct FVector                                Start;                                             // 0x0008(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                End;                                               // 0x0020(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ETraceTypeQuery                               TraceChannel;                                      // 0x0038(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_39[0x3];                                       // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   PreferredObjectProfileName;                        // 0x003C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          TraceComplex;                                      // 0x0044(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_45[0x3];                                       // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Radius;                                            // 0x0048(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          DrawDebug;                                         // 0x004C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bHit;                                              // 0x004D(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4E[0x2];                                       // 0x004E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                HitLocation;                                       // 0x0050(0x0018)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                HitNormal;                                         // 0x0068(0x0018)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FRigUnit_SphereTraceMultiByTraceChannelEx) == 0x000008, "Wrong alignment on FRigUnit_SphereTraceMultiByTraceChannelEx");
static_assert(sizeof(FRigUnit_SphereTraceMultiByTraceChannelEx) == 0x000080, "Wrong size on FRigUnit_SphereTraceMultiByTraceChannelEx");
static_assert(offsetof(FRigUnit_SphereTraceMultiByTraceChannelEx, Start) == 0x000008, "Member 'FRigUnit_SphereTraceMultiByTraceChannelEx::Start' has a wrong offset!");
static_assert(offsetof(FRigUnit_SphereTraceMultiByTraceChannelEx, End) == 0x000020, "Member 'FRigUnit_SphereTraceMultiByTraceChannelEx::End' has a wrong offset!");
static_assert(offsetof(FRigUnit_SphereTraceMultiByTraceChannelEx, TraceChannel) == 0x000038, "Member 'FRigUnit_SphereTraceMultiByTraceChannelEx::TraceChannel' has a wrong offset!");
static_assert(offsetof(FRigUnit_SphereTraceMultiByTraceChannelEx, PreferredObjectProfileName) == 0x00003C, "Member 'FRigUnit_SphereTraceMultiByTraceChannelEx::PreferredObjectProfileName' has a wrong offset!");
static_assert(offsetof(FRigUnit_SphereTraceMultiByTraceChannelEx, TraceComplex) == 0x000044, "Member 'FRigUnit_SphereTraceMultiByTraceChannelEx::TraceComplex' has a wrong offset!");
static_assert(offsetof(FRigUnit_SphereTraceMultiByTraceChannelEx, Radius) == 0x000048, "Member 'FRigUnit_SphereTraceMultiByTraceChannelEx::Radius' has a wrong offset!");
static_assert(offsetof(FRigUnit_SphereTraceMultiByTraceChannelEx, DrawDebug) == 0x00004C, "Member 'FRigUnit_SphereTraceMultiByTraceChannelEx::DrawDebug' has a wrong offset!");
static_assert(offsetof(FRigUnit_SphereTraceMultiByTraceChannelEx, bHit) == 0x00004D, "Member 'FRigUnit_SphereTraceMultiByTraceChannelEx::bHit' has a wrong offset!");
static_assert(offsetof(FRigUnit_SphereTraceMultiByTraceChannelEx, HitLocation) == 0x000050, "Member 'FRigUnit_SphereTraceMultiByTraceChannelEx::HitLocation' has a wrong offset!");
static_assert(offsetof(FRigUnit_SphereTraceMultiByTraceChannelEx, HitNormal) == 0x000068, "Member 'FRigUnit_SphereTraceMultiByTraceChannelEx::HitNormal' has a wrong offset!");

// ScriptStruct CharacterAnimationExtras.AnimNode_RootMotionScale
// 0x00B0 (0x00C0 - 0x0010)
struct FAnimNode_RootMotionScale final : public FAnimNode_Base
{
public:
	struct FPoseLink                              BasePose;                                          // 0x0010(0x0010)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                         Scale;                                             // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAnimAlphaInputType                           AlphaInputType;                                    // 0x0024(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bAlphaBoolEnabled : 1;                             // 0x0025(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_26[0x2];                                       // 0x0026(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ALPHA;                                             // 0x0028(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputScaleBias                        AlphaScaleBias;                                    // 0x002C(0x0008)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInputAlphaBoolBlend                   AlphaBoolBlend;                                    // 0x0038(0x0048)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	class FName                                   AlphaCurveName;                                    // 0x0080(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputScaleBiasClamp                   AlphaScaleBiasClamp;                               // 0x0088(0x0030)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_B8[0x8];                                       // 0x00B8(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FAnimNode_RootMotionScale) == 0x000008, "Wrong alignment on FAnimNode_RootMotionScale");
static_assert(sizeof(FAnimNode_RootMotionScale) == 0x0000C0, "Wrong size on FAnimNode_RootMotionScale");
static_assert(offsetof(FAnimNode_RootMotionScale, BasePose) == 0x000010, "Member 'FAnimNode_RootMotionScale::BasePose' has a wrong offset!");
static_assert(offsetof(FAnimNode_RootMotionScale, Scale) == 0x000020, "Member 'FAnimNode_RootMotionScale::Scale' has a wrong offset!");
static_assert(offsetof(FAnimNode_RootMotionScale, AlphaInputType) == 0x000024, "Member 'FAnimNode_RootMotionScale::AlphaInputType' has a wrong offset!");
static_assert(offsetof(FAnimNode_RootMotionScale, ALPHA) == 0x000028, "Member 'FAnimNode_RootMotionScale::ALPHA' has a wrong offset!");
static_assert(offsetof(FAnimNode_RootMotionScale, AlphaScaleBias) == 0x00002C, "Member 'FAnimNode_RootMotionScale::AlphaScaleBias' has a wrong offset!");
static_assert(offsetof(FAnimNode_RootMotionScale, AlphaBoolBlend) == 0x000038, "Member 'FAnimNode_RootMotionScale::AlphaBoolBlend' has a wrong offset!");
static_assert(offsetof(FAnimNode_RootMotionScale, AlphaCurveName) == 0x000080, "Member 'FAnimNode_RootMotionScale::AlphaCurveName' has a wrong offset!");
static_assert(offsetof(FAnimNode_RootMotionScale, AlphaScaleBiasClamp) == 0x000088, "Member 'FAnimNode_RootMotionScale::AlphaScaleBiasClamp' has a wrong offset!");

// ScriptStruct CharacterAnimationExtras.RandomSequenceEntry
// 0x0010 (0x0010 - 0x0000)
struct FRandomSequenceEntry final
{
public:
	class UAnimSequence*                          Sequence;                                          // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ChanceToPlay;                                      // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FRandomSequenceEntry) == 0x000008, "Wrong alignment on FRandomSequenceEntry");
static_assert(sizeof(FRandomSequenceEntry) == 0x000010, "Wrong size on FRandomSequenceEntry");
static_assert(offsetof(FRandomSequenceEntry, Sequence) == 0x000000, "Member 'FRandomSequenceEntry::Sequence' has a wrong offset!");
static_assert(offsetof(FRandomSequenceEntry, ChanceToPlay) == 0x000008, "Member 'FRandomSequenceEntry::ChanceToPlay' has a wrong offset!");

// ScriptStruct CharacterAnimationExtras.AnimNode_RandomSingleSequencePlayer
// 0x0060 (0x00A0 - 0x0040)
struct FAnimNode_RandomSingleSequencePlayer final : public FAnimNode_SequencePlayerBase
{
public:
	TArray<struct FRandomSequenceEntry>           Entries;                                           // 0x0040(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                          bShuffleMode;                                      // 0x0050(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimSequenceBase*                      Sequence;                                          // 0x0058(0x0008)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_60[0x40];                                      // 0x0060(0x0040)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FAnimNode_RandomSingleSequencePlayer) == 0x000008, "Wrong alignment on FAnimNode_RandomSingleSequencePlayer");
static_assert(sizeof(FAnimNode_RandomSingleSequencePlayer) == 0x0000A0, "Wrong size on FAnimNode_RandomSingleSequencePlayer");
static_assert(offsetof(FAnimNode_RandomSingleSequencePlayer, Entries) == 0x000040, "Member 'FAnimNode_RandomSingleSequencePlayer::Entries' has a wrong offset!");
static_assert(offsetof(FAnimNode_RandomSingleSequencePlayer, bShuffleMode) == 0x000050, "Member 'FAnimNode_RandomSingleSequencePlayer::bShuffleMode' has a wrong offset!");
static_assert(offsetof(FAnimNode_RandomSingleSequencePlayer, Sequence) == 0x000058, "Member 'FAnimNode_RandomSingleSequencePlayer::Sequence' has a wrong offset!");

}

