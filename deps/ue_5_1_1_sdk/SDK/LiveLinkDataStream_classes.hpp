#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LiveLinkDataStream

#include "Basic.hpp"

#include "LiveLinkCamera_classes.hpp"
#include "LiveLinkInterface_classes.hpp"
#include "Engine_classes.hpp"
#include "CameraCalibrationCore_classes.hpp"


namespace SDK
{

// Class LiveLinkDataStream.LiveLinkViconUDPSender
// 0x0018 (0x02C8 - 0x02B0)
class ALiveLinkViconUDPSender final : public AActor
{
public:
	uint8                                         Pad_2B0[0x18];                                     // 0x02B0(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	bool LiveLinkViconUDPStartTrigger(const class FString& CaptureName, const class FString& CaptureNotes, const class FString& CaptureDescription, const class FString& DatabasePath, const class FString& CaptureDelayInms, const class FString& ToSend);
	bool LiveLinkViconUDPStopTrigger(const class FString& CaptureName, const class FString& CaptureNotes, const class FString& CaptureDescription, const class FString& DatabasePath, const class FString& CaptureDelayInms, const class FString& ToSend);
	bool StartUDPSender(const class FString& YourChosenSocketName, const class FString& RemoteIP, int32 RemotePort);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkViconUDPSender">();
	}
	static class ALiveLinkViconUDPSender* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALiveLinkViconUDPSender>();
	}
};
static_assert(alignof(ALiveLinkViconUDPSender) == 0x000008, "Wrong alignment on ALiveLinkViconUDPSender");
static_assert(sizeof(ALiveLinkViconUDPSender) == 0x0002C8, "Wrong size on ALiveLinkViconUDPSender");

// Class LiveLinkDataStream.LiveLinkViconCameraController
// 0x0000 (0x00C8 - 0x00C8)
class ULiveLinkViconCameraController final : public ULiveLinkCameraController
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkViconCameraController">();
	}
	static class ULiveLinkViconCameraController* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkViconCameraController>();
	}
};
static_assert(alignof(ULiveLinkViconCameraController) == 0x000008, "Wrong alignment on ULiveLinkViconCameraController");
static_assert(sizeof(ULiveLinkViconCameraController) == 0x0000C8, "Wrong size on ULiveLinkViconCameraController");

// Class LiveLinkDataStream.LiveLinkViconDataStreamBlueprint
// 0x0000 (0x0028 - 0x0028)
class ULiveLinkViconDataStreamBlueprint final : public UBlueprintFunctionLibrary
{
public:
	static void CreateViconLiveLinkSource(const class FString& ServerName, int32 PortNumber, const class FString& SubjectFilter, bool bIsRetimed, bool bUsePreFetch, bool bIsScaled, bool bLogOutput, float Offset, struct FLiveLinkSourceHandle* SourceHandle);
	static struct FTimecode TimecodeFromFrameNumber(const struct FFrameNumber& FrameNumber, const struct FFrameRate& FrameRate);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkViconDataStreamBlueprint">();
	}
	static class ULiveLinkViconDataStreamBlueprint* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkViconDataStreamBlueprint>();
	}
};
static_assert(alignof(ULiveLinkViconDataStreamBlueprint) == 0x000008, "Wrong alignment on ULiveLinkViconDataStreamBlueprint");
static_assert(sizeof(ULiveLinkViconDataStreamBlueprint) == 0x000028, "Wrong size on ULiveLinkViconDataStreamBlueprint");

// Class LiveLinkDataStream.LiveLinkDataStreamSourceSettings
// 0x0008 (0x00B0 - 0x00A8)
class ULiveLinkDataStreamSourceSettings final : public ULiveLinkSourceSettings
{
public:
	bool                                          EnableLightweight;                                 // 0x00A8(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          StreamMarkerData;                                  // 0x00A9(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          StreamUnlabeledMarkerData;                         // 0x00AA(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ShowAllVideoCamera;                                // 0x00AB(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_AC[0x4];                                       // 0x00AC(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkDataStreamSourceSettings">();
	}
	static class ULiveLinkDataStreamSourceSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkDataStreamSourceSettings>();
	}
};
static_assert(alignof(ULiveLinkDataStreamSourceSettings) == 0x000008, "Wrong alignment on ULiveLinkDataStreamSourceSettings");
static_assert(sizeof(ULiveLinkDataStreamSourceSettings) == 0x0000B0, "Wrong size on ULiveLinkDataStreamSourceSettings");
static_assert(offsetof(ULiveLinkDataStreamSourceSettings, EnableLightweight) == 0x0000A8, "Member 'ULiveLinkDataStreamSourceSettings::EnableLightweight' has a wrong offset!");
static_assert(offsetof(ULiveLinkDataStreamSourceSettings, StreamMarkerData) == 0x0000A9, "Member 'ULiveLinkDataStreamSourceSettings::StreamMarkerData' has a wrong offset!");
static_assert(offsetof(ULiveLinkDataStreamSourceSettings, StreamUnlabeledMarkerData) == 0x0000AA, "Member 'ULiveLinkDataStreamSourceSettings::StreamUnlabeledMarkerData' has a wrong offset!");
static_assert(offsetof(ULiveLinkDataStreamSourceSettings, ShowAllVideoCamera) == 0x0000AB, "Member 'ULiveLinkDataStreamSourceSettings::ShowAllVideoCamera' has a wrong offset!");

// Class LiveLinkDataStream.LiveLinkViconMarkerRole
// 0x0000 (0x0028 - 0x0028)
class ULiveLinkViconMarkerRole final : public ULiveLinkBasicRole
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkViconMarkerRole">();
	}
	static class ULiveLinkViconMarkerRole* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkViconMarkerRole>();
	}
};
static_assert(alignof(ULiveLinkViconMarkerRole) == 0x000008, "Wrong alignment on ULiveLinkViconMarkerRole");
static_assert(sizeof(ULiveLinkViconMarkerRole) == 0x000028, "Wrong size on ULiveLinkViconMarkerRole");

// Class LiveLinkDataStream.ViconLensDistortionModelHandler
// 0x00A0 (0x0158 - 0x00B8)
class UViconLensDistortionModelHandler final : public ULensDistortionModelHandlerBase
{
public:
	uint8                                         Pad_B8[0xA0];                                      // 0x00B8(0x00A0)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ViconLensDistortionModelHandler">();
	}
	static class UViconLensDistortionModelHandler* GetDefaultObj()
	{
		return GetDefaultObjImpl<UViconLensDistortionModelHandler>();
	}
};
static_assert(alignof(UViconLensDistortionModelHandler) == 0x000008, "Wrong alignment on UViconLensDistortionModelHandler");
static_assert(sizeof(UViconLensDistortionModelHandler) == 0x000158, "Wrong size on UViconLensDistortionModelHandler");

// Class LiveLinkDataStream.ViconLensModel
// 0x0000 (0x0028 - 0x0028)
class UViconLensModel final : public ULensModel
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ViconLensModel">();
	}
	static class UViconLensModel* GetDefaultObj()
	{
		return GetDefaultObjImpl<UViconLensModel>();
	}
};
static_assert(alignof(UViconLensModel) == 0x000008, "Wrong alignment on UViconLensModel");
static_assert(sizeof(UViconLensModel) == 0x000028, "Wrong size on UViconLensModel");

}
