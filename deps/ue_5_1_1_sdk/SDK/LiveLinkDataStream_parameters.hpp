#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LiveLinkDataStream

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "LiveLinkInterface_structs.hpp"


namespace SDK::Params
{

// Function LiveLinkDataStream.LiveLinkViconUDPSender.LiveLinkViconUDPStartTrigger
// 0x0068 (0x0068 - 0x0000)
struct LiveLinkViconUDPSender_LiveLinkViconUDPStartTrigger final
{
public:
	class FString                                 CaptureName;                                       // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 CaptureNotes;                                      // 0x0010(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 CaptureDescription;                                // 0x0020(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 DatabasePath;                                      // 0x0030(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 CaptureDelayInms;                                  // 0x0040(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ToSend;                                            // 0x0050(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0060(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(LiveLinkViconUDPSender_LiveLinkViconUDPStartTrigger) == 0x000008, "Wrong alignment on LiveLinkViconUDPSender_LiveLinkViconUDPStartTrigger");
static_assert(sizeof(LiveLinkViconUDPSender_LiveLinkViconUDPStartTrigger) == 0x000068, "Wrong size on LiveLinkViconUDPSender_LiveLinkViconUDPStartTrigger");
static_assert(offsetof(LiveLinkViconUDPSender_LiveLinkViconUDPStartTrigger, CaptureName) == 0x000000, "Member 'LiveLinkViconUDPSender_LiveLinkViconUDPStartTrigger::CaptureName' has a wrong offset!");
static_assert(offsetof(LiveLinkViconUDPSender_LiveLinkViconUDPStartTrigger, CaptureNotes) == 0x000010, "Member 'LiveLinkViconUDPSender_LiveLinkViconUDPStartTrigger::CaptureNotes' has a wrong offset!");
static_assert(offsetof(LiveLinkViconUDPSender_LiveLinkViconUDPStartTrigger, CaptureDescription) == 0x000020, "Member 'LiveLinkViconUDPSender_LiveLinkViconUDPStartTrigger::CaptureDescription' has a wrong offset!");
static_assert(offsetof(LiveLinkViconUDPSender_LiveLinkViconUDPStartTrigger, DatabasePath) == 0x000030, "Member 'LiveLinkViconUDPSender_LiveLinkViconUDPStartTrigger::DatabasePath' has a wrong offset!");
static_assert(offsetof(LiveLinkViconUDPSender_LiveLinkViconUDPStartTrigger, CaptureDelayInms) == 0x000040, "Member 'LiveLinkViconUDPSender_LiveLinkViconUDPStartTrigger::CaptureDelayInms' has a wrong offset!");
static_assert(offsetof(LiveLinkViconUDPSender_LiveLinkViconUDPStartTrigger, ToSend) == 0x000050, "Member 'LiveLinkViconUDPSender_LiveLinkViconUDPStartTrigger::ToSend' has a wrong offset!");
static_assert(offsetof(LiveLinkViconUDPSender_LiveLinkViconUDPStartTrigger, ReturnValue) == 0x000060, "Member 'LiveLinkViconUDPSender_LiveLinkViconUDPStartTrigger::ReturnValue' has a wrong offset!");

// Function LiveLinkDataStream.LiveLinkViconUDPSender.LiveLinkViconUDPStopTrigger
// 0x0068 (0x0068 - 0x0000)
struct LiveLinkViconUDPSender_LiveLinkViconUDPStopTrigger final
{
public:
	class FString                                 CaptureName;                                       // 0x0000(0x0010)(Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 CaptureNotes;                                      // 0x0010(0x0010)(Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 CaptureDescription;                                // 0x0020(0x0010)(Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 DatabasePath;                                      // 0x0030(0x0010)(Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 CaptureDelayInms;                                  // 0x0040(0x0010)(Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ToSend;                                            // 0x0050(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0060(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(LiveLinkViconUDPSender_LiveLinkViconUDPStopTrigger) == 0x000008, "Wrong alignment on LiveLinkViconUDPSender_LiveLinkViconUDPStopTrigger");
static_assert(sizeof(LiveLinkViconUDPSender_LiveLinkViconUDPStopTrigger) == 0x000068, "Wrong size on LiveLinkViconUDPSender_LiveLinkViconUDPStopTrigger");
static_assert(offsetof(LiveLinkViconUDPSender_LiveLinkViconUDPStopTrigger, CaptureName) == 0x000000, "Member 'LiveLinkViconUDPSender_LiveLinkViconUDPStopTrigger::CaptureName' has a wrong offset!");
static_assert(offsetof(LiveLinkViconUDPSender_LiveLinkViconUDPStopTrigger, CaptureNotes) == 0x000010, "Member 'LiveLinkViconUDPSender_LiveLinkViconUDPStopTrigger::CaptureNotes' has a wrong offset!");
static_assert(offsetof(LiveLinkViconUDPSender_LiveLinkViconUDPStopTrigger, CaptureDescription) == 0x000020, "Member 'LiveLinkViconUDPSender_LiveLinkViconUDPStopTrigger::CaptureDescription' has a wrong offset!");
static_assert(offsetof(LiveLinkViconUDPSender_LiveLinkViconUDPStopTrigger, DatabasePath) == 0x000030, "Member 'LiveLinkViconUDPSender_LiveLinkViconUDPStopTrigger::DatabasePath' has a wrong offset!");
static_assert(offsetof(LiveLinkViconUDPSender_LiveLinkViconUDPStopTrigger, CaptureDelayInms) == 0x000040, "Member 'LiveLinkViconUDPSender_LiveLinkViconUDPStopTrigger::CaptureDelayInms' has a wrong offset!");
static_assert(offsetof(LiveLinkViconUDPSender_LiveLinkViconUDPStopTrigger, ToSend) == 0x000050, "Member 'LiveLinkViconUDPSender_LiveLinkViconUDPStopTrigger::ToSend' has a wrong offset!");
static_assert(offsetof(LiveLinkViconUDPSender_LiveLinkViconUDPStopTrigger, ReturnValue) == 0x000060, "Member 'LiveLinkViconUDPSender_LiveLinkViconUDPStopTrigger::ReturnValue' has a wrong offset!");

// Function LiveLinkDataStream.LiveLinkViconUDPSender.StartUDPSender
// 0x0028 (0x0028 - 0x0000)
struct LiveLinkViconUDPSender_StartUDPSender final
{
public:
	class FString                                 YourChosenSocketName;                              // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 RemoteIP;                                          // 0x0010(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         RemotePort;                                        // 0x0020(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0024(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_25[0x3];                                       // 0x0025(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(LiveLinkViconUDPSender_StartUDPSender) == 0x000008, "Wrong alignment on LiveLinkViconUDPSender_StartUDPSender");
static_assert(sizeof(LiveLinkViconUDPSender_StartUDPSender) == 0x000028, "Wrong size on LiveLinkViconUDPSender_StartUDPSender");
static_assert(offsetof(LiveLinkViconUDPSender_StartUDPSender, YourChosenSocketName) == 0x000000, "Member 'LiveLinkViconUDPSender_StartUDPSender::YourChosenSocketName' has a wrong offset!");
static_assert(offsetof(LiveLinkViconUDPSender_StartUDPSender, RemoteIP) == 0x000010, "Member 'LiveLinkViconUDPSender_StartUDPSender::RemoteIP' has a wrong offset!");
static_assert(offsetof(LiveLinkViconUDPSender_StartUDPSender, RemotePort) == 0x000020, "Member 'LiveLinkViconUDPSender_StartUDPSender::RemotePort' has a wrong offset!");
static_assert(offsetof(LiveLinkViconUDPSender_StartUDPSender, ReturnValue) == 0x000024, "Member 'LiveLinkViconUDPSender_StartUDPSender::ReturnValue' has a wrong offset!");

// Function LiveLinkDataStream.LiveLinkViconDataStreamBlueprint.CreateViconLiveLinkSource
// 0x0048 (0x0048 - 0x0000)
struct LiveLinkViconDataStreamBlueprint_CreateViconLiveLinkSource final
{
public:
	class FString                                 ServerName;                                        // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         PortNumber;                                        // 0x0010(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 SubjectFilter;                                     // 0x0018(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsRetimed;                                        // 0x0028(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUsePreFetch;                                      // 0x0029(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsScaled;                                         // 0x002A(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bLogOutput;                                        // 0x002B(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Offset;                                            // 0x002C(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLiveLinkSourceHandle                  SourceHandle;                                      // 0x0030(0x0018)(Parm, OutParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(LiveLinkViconDataStreamBlueprint_CreateViconLiveLinkSource) == 0x000008, "Wrong alignment on LiveLinkViconDataStreamBlueprint_CreateViconLiveLinkSource");
static_assert(sizeof(LiveLinkViconDataStreamBlueprint_CreateViconLiveLinkSource) == 0x000048, "Wrong size on LiveLinkViconDataStreamBlueprint_CreateViconLiveLinkSource");
static_assert(offsetof(LiveLinkViconDataStreamBlueprint_CreateViconLiveLinkSource, ServerName) == 0x000000, "Member 'LiveLinkViconDataStreamBlueprint_CreateViconLiveLinkSource::ServerName' has a wrong offset!");
static_assert(offsetof(LiveLinkViconDataStreamBlueprint_CreateViconLiveLinkSource, PortNumber) == 0x000010, "Member 'LiveLinkViconDataStreamBlueprint_CreateViconLiveLinkSource::PortNumber' has a wrong offset!");
static_assert(offsetof(LiveLinkViconDataStreamBlueprint_CreateViconLiveLinkSource, SubjectFilter) == 0x000018, "Member 'LiveLinkViconDataStreamBlueprint_CreateViconLiveLinkSource::SubjectFilter' has a wrong offset!");
static_assert(offsetof(LiveLinkViconDataStreamBlueprint_CreateViconLiveLinkSource, bIsRetimed) == 0x000028, "Member 'LiveLinkViconDataStreamBlueprint_CreateViconLiveLinkSource::bIsRetimed' has a wrong offset!");
static_assert(offsetof(LiveLinkViconDataStreamBlueprint_CreateViconLiveLinkSource, bUsePreFetch) == 0x000029, "Member 'LiveLinkViconDataStreamBlueprint_CreateViconLiveLinkSource::bUsePreFetch' has a wrong offset!");
static_assert(offsetof(LiveLinkViconDataStreamBlueprint_CreateViconLiveLinkSource, bIsScaled) == 0x00002A, "Member 'LiveLinkViconDataStreamBlueprint_CreateViconLiveLinkSource::bIsScaled' has a wrong offset!");
static_assert(offsetof(LiveLinkViconDataStreamBlueprint_CreateViconLiveLinkSource, bLogOutput) == 0x00002B, "Member 'LiveLinkViconDataStreamBlueprint_CreateViconLiveLinkSource::bLogOutput' has a wrong offset!");
static_assert(offsetof(LiveLinkViconDataStreamBlueprint_CreateViconLiveLinkSource, Offset) == 0x00002C, "Member 'LiveLinkViconDataStreamBlueprint_CreateViconLiveLinkSource::Offset' has a wrong offset!");
static_assert(offsetof(LiveLinkViconDataStreamBlueprint_CreateViconLiveLinkSource, SourceHandle) == 0x000030, "Member 'LiveLinkViconDataStreamBlueprint_CreateViconLiveLinkSource::SourceHandle' has a wrong offset!");

// Function LiveLinkDataStream.LiveLinkViconDataStreamBlueprint.TimecodeFromFrameNumber
// 0x0020 (0x0020 - 0x0000)
struct LiveLinkViconDataStreamBlueprint_TimecodeFromFrameNumber final
{
public:
	struct FFrameNumber                           FrameNumber;                                       // 0x0000(0x0004)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameRate                             FrameRate;                                         // 0x0004(0x0008)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTimecode                              ReturnValue;                                       // 0x000C(0x0014)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LiveLinkViconDataStreamBlueprint_TimecodeFromFrameNumber) == 0x000004, "Wrong alignment on LiveLinkViconDataStreamBlueprint_TimecodeFromFrameNumber");
static_assert(sizeof(LiveLinkViconDataStreamBlueprint_TimecodeFromFrameNumber) == 0x000020, "Wrong size on LiveLinkViconDataStreamBlueprint_TimecodeFromFrameNumber");
static_assert(offsetof(LiveLinkViconDataStreamBlueprint_TimecodeFromFrameNumber, FrameNumber) == 0x000000, "Member 'LiveLinkViconDataStreamBlueprint_TimecodeFromFrameNumber::FrameNumber' has a wrong offset!");
static_assert(offsetof(LiveLinkViconDataStreamBlueprint_TimecodeFromFrameNumber, FrameRate) == 0x000004, "Member 'LiveLinkViconDataStreamBlueprint_TimecodeFromFrameNumber::FrameRate' has a wrong offset!");
static_assert(offsetof(LiveLinkViconDataStreamBlueprint_TimecodeFromFrameNumber, ReturnValue) == 0x00000C, "Member 'LiveLinkViconDataStreamBlueprint_TimecodeFromFrameNumber::ReturnValue' has a wrong offset!");

}
