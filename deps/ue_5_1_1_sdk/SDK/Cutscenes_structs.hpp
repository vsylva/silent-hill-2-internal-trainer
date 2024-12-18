#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Cutscenes

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "MovieScene_structs.hpp"
#include "LevelStreaming_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// Enum Cutscenes.ESearchResult
// NumValues: 0x0004
enum class ESearchResult : uint8
{
	Result_Success                           = 0,
	Result_NothingFound                      = 1,
	Result_Ambiguous                         = 2,
	Result_MAX                               = 3,
};

// Enum Cutscenes.ELogMessageSeverity
// NumValues: 0x0006
enum class ELogMessageSeverity : uint8
{
	CriticalError                            = 0,
	Error                                    = 1,
	PerformanceWarning                       = 2,
	Warning                                  = 3,
	Info                                     = 4,
	ELogMessageSeverity_MAX                  = 5,
};

// ScriptStruct Cutscenes.CutsceneProxyPossessor
// 0x0038 (0x0038 - 0x0000)
struct FCutsceneProxyPossessor final
{
public:
	TSoftClassPtr<class UClass>                   Actor;                                             // 0x0000(0x0030)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ExistsOnlyInCutscene;                              // 0x0030(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FCutsceneProxyPossessor) == 0x000008, "Wrong alignment on FCutsceneProxyPossessor");
static_assert(sizeof(FCutsceneProxyPossessor) == 0x000038, "Wrong size on FCutsceneProxyPossessor");
static_assert(offsetof(FCutsceneProxyPossessor, Actor) == 0x000000, "Member 'FCutsceneProxyPossessor::Actor' has a wrong offset!");
static_assert(offsetof(FCutsceneProxyPossessor, ExistsOnlyInCutscene) == 0x000030, "Member 'FCutsceneProxyPossessor::ExistsOnlyInCutscene' has a wrong offset!");

// ScriptStruct Cutscenes.BatchHandleWithStatus
// 0x000C (0x000C - 0x0000)
struct FBatchHandleWithStatus final
{
public:
	struct FStreamableLevelBatchHandle            StreamableLevelBatchHandle;                        // 0x0000(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	EStreamableLevelStatus                        ExpectedStatus;                                    // 0x0008(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FBatchHandleWithStatus) == 0x000004, "Wrong alignment on FBatchHandleWithStatus");
static_assert(sizeof(FBatchHandleWithStatus) == 0x00000C, "Wrong size on FBatchHandleWithStatus");
static_assert(offsetof(FBatchHandleWithStatus, StreamableLevelBatchHandle) == 0x000000, "Member 'FBatchHandleWithStatus::StreamableLevelBatchHandle' has a wrong offset!");
static_assert(offsetof(FBatchHandleWithStatus, ExpectedStatus) == 0x000008, "Member 'FBatchHandleWithStatus::ExpectedStatus' has a wrong offset!");

// ScriptStruct Cutscenes.DialogSpeakerBinding
// 0x0020 (0x0020 - 0x0000)
struct FDialogSpeakerBinding final
{
public:
	struct FMovieSceneObjectBindingID             BindingID;                                         // 0x0000(0x0018)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                DialogSpeaker;                                     // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FDialogSpeakerBinding) == 0x000008, "Wrong alignment on FDialogSpeakerBinding");
static_assert(sizeof(FDialogSpeakerBinding) == 0x000020, "Wrong size on FDialogSpeakerBinding");
static_assert(offsetof(FDialogSpeakerBinding, BindingID) == 0x000000, "Member 'FDialogSpeakerBinding::BindingID' has a wrong offset!");
static_assert(offsetof(FDialogSpeakerBinding, DialogSpeaker) == 0x000018, "Member 'FDialogSpeakerBinding::DialogSpeaker' has a wrong offset!");

// ScriptStruct Cutscenes.BranchFilterEx
// 0x000C (0x000C - 0x0000)
struct FBranchFilterEx final
{
public:
	class FName                                   BoneName;                                          // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         BlendDepth;                                        // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FBranchFilterEx) == 0x000004, "Wrong alignment on FBranchFilterEx");
static_assert(sizeof(FBranchFilterEx) == 0x00000C, "Wrong size on FBranchFilterEx");
static_assert(offsetof(FBranchFilterEx, BoneName) == 0x000000, "Member 'FBranchFilterEx::BoneName' has a wrong offset!");
static_assert(offsetof(FBranchFilterEx, BlendDepth) == 0x000008, "Member 'FBranchFilterEx::BlendDepth' has a wrong offset!");

// ScriptStruct Cutscenes.CharacterNoCollisionMode
// 0x0060 (0x0060 - 0x0000)
struct FCharacterNoCollisionMode final
{
public:
	class ACharacter*                             OwningCharacter;                                   // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                          NoCollisionMode;                                   // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<ECollisionChannel, ECollisionResponse>   CapsuleCollisionSettings;                          // 0x0010(0x0050)(NativeAccessSpecifierPrivate)
};
static_assert(alignof(FCharacterNoCollisionMode) == 0x000008, "Wrong alignment on FCharacterNoCollisionMode");
static_assert(sizeof(FCharacterNoCollisionMode) == 0x000060, "Wrong size on FCharacterNoCollisionMode");
static_assert(offsetof(FCharacterNoCollisionMode, OwningCharacter) == 0x000000, "Member 'FCharacterNoCollisionMode::OwningCharacter' has a wrong offset!");
static_assert(offsetof(FCharacterNoCollisionMode, NoCollisionMode) == 0x000008, "Member 'FCharacterNoCollisionMode::NoCollisionMode' has a wrong offset!");
static_assert(offsetof(FCharacterNoCollisionMode, CapsuleCollisionSettings) == 0x000010, "Member 'FCharacterNoCollisionMode::CapsuleCollisionSettings' has a wrong offset!");

// ScriptStruct Cutscenes.CharacterBinding
// 0x0090 (0x0090 - 0x0000)
struct FCharacterBinding final
{
public:
	struct FMovieSceneObjectBindingID             BindingID;                                         // 0x0000(0x0018)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCharacterNoCollisionMode              NoCollisionMode;                                   // 0x0018(0x0060)(NativeAccessSpecifierPublic)
	uint8                                         Pad_78[0x8];                                       // 0x0078(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                Character;                                         // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ACutsceneCharacterProxy*                Proxy;                                             // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FCharacterBinding) == 0x000008, "Wrong alignment on FCharacterBinding");
static_assert(sizeof(FCharacterBinding) == 0x000090, "Wrong size on FCharacterBinding");
static_assert(offsetof(FCharacterBinding, BindingID) == 0x000000, "Member 'FCharacterBinding::BindingID' has a wrong offset!");
static_assert(offsetof(FCharacterBinding, NoCollisionMode) == 0x000018, "Member 'FCharacterBinding::NoCollisionMode' has a wrong offset!");
static_assert(offsetof(FCharacterBinding, Character) == 0x000080, "Member 'FCharacterBinding::Character' has a wrong offset!");
static_assert(offsetof(FCharacterBinding, Proxy) == 0x000088, "Member 'FCharacterBinding::Proxy' has a wrong offset!");

// ScriptStruct Cutscenes.CutsceneBoostMaterialConfig
// 0x0038 (0x0038 - 0x0000)
struct FCutsceneBoostMaterialConfig final
{
public:
	TSoftObjectPtr<class UMaterialInterface>      Material;                                          // 0x0000(0x0030)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         BoostTime;                                         // 0x0030(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ForceAllMiplevelsToBeResident;                     // 0x0034(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          FastResponse;                                      // 0x0035(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_36[0x2];                                       // 0x0036(0x0002)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FCutsceneBoostMaterialConfig) == 0x000008, "Wrong alignment on FCutsceneBoostMaterialConfig");
static_assert(sizeof(FCutsceneBoostMaterialConfig) == 0x000038, "Wrong size on FCutsceneBoostMaterialConfig");
static_assert(offsetof(FCutsceneBoostMaterialConfig, Material) == 0x000000, "Member 'FCutsceneBoostMaterialConfig::Material' has a wrong offset!");
static_assert(offsetof(FCutsceneBoostMaterialConfig, BoostTime) == 0x000030, "Member 'FCutsceneBoostMaterialConfig::BoostTime' has a wrong offset!");
static_assert(offsetof(FCutsceneBoostMaterialConfig, ForceAllMiplevelsToBeResident) == 0x000034, "Member 'FCutsceneBoostMaterialConfig::ForceAllMiplevelsToBeResident' has a wrong offset!");
static_assert(offsetof(FCutsceneBoostMaterialConfig, FastResponse) == 0x000035, "Member 'FCutsceneBoostMaterialConfig::FastResponse' has a wrong offset!");

// ScriptStruct Cutscenes.CutsceneSkipSettings
// 0x0018 (0x0018 - 0x0000)
struct FCutsceneSkipSettings final
{
public:
	bool                                          CanBeSkipped;                                      // 0x0000(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          UseSkipConditions;                                 // 0x0001(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          WaitForStreamingConditionsCompletion;              // 0x0002(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3[0x5];                                        // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FBatchHandleWithStatus>         StreamingConditions;                               // 0x0008(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FCutsceneSkipSettings) == 0x000008, "Wrong alignment on FCutsceneSkipSettings");
static_assert(sizeof(FCutsceneSkipSettings) == 0x000018, "Wrong size on FCutsceneSkipSettings");
static_assert(offsetof(FCutsceneSkipSettings, CanBeSkipped) == 0x000000, "Member 'FCutsceneSkipSettings::CanBeSkipped' has a wrong offset!");
static_assert(offsetof(FCutsceneSkipSettings, UseSkipConditions) == 0x000001, "Member 'FCutsceneSkipSettings::UseSkipConditions' has a wrong offset!");
static_assert(offsetof(FCutsceneSkipSettings, WaitForStreamingConditionsCompletion) == 0x000002, "Member 'FCutsceneSkipSettings::WaitForStreamingConditionsCompletion' has a wrong offset!");
static_assert(offsetof(FCutsceneSkipSettings, StreamingConditions) == 0x000008, "Member 'FCutsceneSkipSettings::StreamingConditions' has a wrong offset!");

// ScriptStruct Cutscenes.AnimNode_SingleBranchLayeredBoneBlend
// 0x00A8 (0x00B8 - 0x0010)
struct FAnimNode_SingleBranchLayeredBoneBlend final : public FAnimNode_Base
{
public:
	struct FPoseLink                              BasePose;                                          // 0x0010(0x0010)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FPoseLink                              BlendPose;                                         // 0x0020(0x0010)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FBranchFilterEx                        BranchFilter;                                      // 0x0030(0x000C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                         BlendWeight;                                       // 0x003C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bMeshSpaceRotationBlend;                           // 0x0040(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bMeshSpaceScaleBlend;                              // 0x0041(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ECurveBlendOption                             CurveBlendOption;                                  // 0x0042(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bBlendRootMotionBasedOnRootBone;                   // 0x0043(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LODThreshold;                                      // 0x0048(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FPerBoneBlendWeight>            PerBoneBlendWeights;                               // 0x0050(0x0010)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	struct FGuid                                  SkeletonGuid;                                      // 0x0060(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGuid                                  VirtualBoneGuid;                                   // 0x0070(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_80[0x38];                                      // 0x0080(0x0038)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FAnimNode_SingleBranchLayeredBoneBlend) == 0x000008, "Wrong alignment on FAnimNode_SingleBranchLayeredBoneBlend");
static_assert(sizeof(FAnimNode_SingleBranchLayeredBoneBlend) == 0x0000B8, "Wrong size on FAnimNode_SingleBranchLayeredBoneBlend");
static_assert(offsetof(FAnimNode_SingleBranchLayeredBoneBlend, BasePose) == 0x000010, "Member 'FAnimNode_SingleBranchLayeredBoneBlend::BasePose' has a wrong offset!");
static_assert(offsetof(FAnimNode_SingleBranchLayeredBoneBlend, BlendPose) == 0x000020, "Member 'FAnimNode_SingleBranchLayeredBoneBlend::BlendPose' has a wrong offset!");
static_assert(offsetof(FAnimNode_SingleBranchLayeredBoneBlend, BranchFilter) == 0x000030, "Member 'FAnimNode_SingleBranchLayeredBoneBlend::BranchFilter' has a wrong offset!");
static_assert(offsetof(FAnimNode_SingleBranchLayeredBoneBlend, BlendWeight) == 0x00003C, "Member 'FAnimNode_SingleBranchLayeredBoneBlend::BlendWeight' has a wrong offset!");
static_assert(offsetof(FAnimNode_SingleBranchLayeredBoneBlend, bMeshSpaceRotationBlend) == 0x000040, "Member 'FAnimNode_SingleBranchLayeredBoneBlend::bMeshSpaceRotationBlend' has a wrong offset!");
static_assert(offsetof(FAnimNode_SingleBranchLayeredBoneBlend, bMeshSpaceScaleBlend) == 0x000041, "Member 'FAnimNode_SingleBranchLayeredBoneBlend::bMeshSpaceScaleBlend' has a wrong offset!");
static_assert(offsetof(FAnimNode_SingleBranchLayeredBoneBlend, CurveBlendOption) == 0x000042, "Member 'FAnimNode_SingleBranchLayeredBoneBlend::CurveBlendOption' has a wrong offset!");
static_assert(offsetof(FAnimNode_SingleBranchLayeredBoneBlend, bBlendRootMotionBasedOnRootBone) == 0x000043, "Member 'FAnimNode_SingleBranchLayeredBoneBlend::bBlendRootMotionBasedOnRootBone' has a wrong offset!");
static_assert(offsetof(FAnimNode_SingleBranchLayeredBoneBlend, LODThreshold) == 0x000048, "Member 'FAnimNode_SingleBranchLayeredBoneBlend::LODThreshold' has a wrong offset!");
static_assert(offsetof(FAnimNode_SingleBranchLayeredBoneBlend, PerBoneBlendWeights) == 0x000050, "Member 'FAnimNode_SingleBranchLayeredBoneBlend::PerBoneBlendWeights' has a wrong offset!");
static_assert(offsetof(FAnimNode_SingleBranchLayeredBoneBlend, SkeletonGuid) == 0x000060, "Member 'FAnimNode_SingleBranchLayeredBoneBlend::SkeletonGuid' has a wrong offset!");
static_assert(offsetof(FAnimNode_SingleBranchLayeredBoneBlend, VirtualBoneGuid) == 0x000070, "Member 'FAnimNode_SingleBranchLayeredBoneBlend::VirtualBoneGuid' has a wrong offset!");

// ScriptStruct Cutscenes.CutsceneToGameClassMap
// 0x0050 (0x0050 - 0x0000)
struct FCutsceneToGameClassMap final
{
public:
	TMap<TSoftClassPtr<class UClass>, struct FCutsceneProxyPossessor> Data;                                              // 0x0000(0x0050)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};
static_assert(alignof(FCutsceneToGameClassMap) == 0x000008, "Wrong alignment on FCutsceneToGameClassMap");
static_assert(sizeof(FCutsceneToGameClassMap) == 0x000050, "Wrong size on FCutsceneToGameClassMap");
static_assert(offsetof(FCutsceneToGameClassMap, Data) == 0x000000, "Member 'FCutsceneToGameClassMap::Data' has a wrong offset!");

}

