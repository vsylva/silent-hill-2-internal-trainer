#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LiveLinkDataStream

#include "Basic.hpp"

#include "LiveLinkDataStream_classes.hpp"
#include "LiveLinkDataStream_parameters.hpp"


namespace SDK
{

// Function LiveLinkDataStream.LiveLinkViconUDPSender.LiveLinkViconUDPStartTrigger
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                           CaptureName                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           CaptureNotes                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           CaptureDescription                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           DatabasePath                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           CaptureDelayInms                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           ToSend                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ALiveLinkViconUDPSender::LiveLinkViconUDPStartTrigger(const class FString& CaptureName, const class FString& CaptureNotes, const class FString& CaptureDescription, const class FString& DatabasePath, const class FString& CaptureDelayInms, const class FString& ToSend)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LiveLinkViconUDPSender", "LiveLinkViconUDPStartTrigger");

	Params::LiveLinkViconUDPSender_LiveLinkViconUDPStartTrigger Parms{};

	Parms.CaptureName = std::move(CaptureName);
	Parms.CaptureNotes = std::move(CaptureNotes);
	Parms.CaptureDescription = std::move(CaptureDescription);
	Parms.DatabasePath = std::move(DatabasePath);
	Parms.CaptureDelayInms = std::move(CaptureDelayInms);
	Parms.ToSend = std::move(ToSend);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function LiveLinkDataStream.LiveLinkViconUDPSender.LiveLinkViconUDPStopTrigger
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                           CaptureName                                            (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           CaptureNotes                                           (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           CaptureDescription                                     (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           DatabasePath                                           (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           CaptureDelayInms                                       (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           ToSend                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ALiveLinkViconUDPSender::LiveLinkViconUDPStopTrigger(const class FString& CaptureName, const class FString& CaptureNotes, const class FString& CaptureDescription, const class FString& DatabasePath, const class FString& CaptureDelayInms, const class FString& ToSend)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LiveLinkViconUDPSender", "LiveLinkViconUDPStopTrigger");

	Params::LiveLinkViconUDPSender_LiveLinkViconUDPStopTrigger Parms{};

	Parms.CaptureName = std::move(CaptureName);
	Parms.CaptureNotes = std::move(CaptureNotes);
	Parms.CaptureDescription = std::move(CaptureDescription);
	Parms.DatabasePath = std::move(DatabasePath);
	Parms.CaptureDelayInms = std::move(CaptureDelayInms);
	Parms.ToSend = std::move(ToSend);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function LiveLinkDataStream.LiveLinkViconUDPSender.StartUDPSender
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                           YourChosenSocketName                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           RemoteIP                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   RemotePort                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ALiveLinkViconUDPSender::StartUDPSender(const class FString& YourChosenSocketName, const class FString& RemoteIP, int32 RemotePort)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LiveLinkViconUDPSender", "StartUDPSender");

	Params::LiveLinkViconUDPSender_StartUDPSender Parms{};

	Parms.YourChosenSocketName = std::move(YourChosenSocketName);
	Parms.RemoteIP = std::move(RemoteIP);
	Parms.RemotePort = RemotePort;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function LiveLinkDataStream.LiveLinkViconDataStreamBlueprint.CreateViconLiveLinkSource
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                           ServerName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   PortNumber                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           SubjectFilter                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bIsRetimed                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bUsePreFetch                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bIsScaled                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bLogOutput                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   Offset                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLiveLinkSourceHandle            SourceHandle                                           (Parm, OutParm, NativeAccessSpecifierPublic)

void ULiveLinkViconDataStreamBlueprint::CreateViconLiveLinkSource(const class FString& ServerName, int32 PortNumber, const class FString& SubjectFilter, bool bIsRetimed, bool bUsePreFetch, bool bIsScaled, bool bLogOutput, float Offset, struct FLiveLinkSourceHandle* SourceHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LiveLinkViconDataStreamBlueprint", "CreateViconLiveLinkSource");

	Params::LiveLinkViconDataStreamBlueprint_CreateViconLiveLinkSource Parms{};

	Parms.ServerName = std::move(ServerName);
	Parms.PortNumber = PortNumber;
	Parms.SubjectFilter = std::move(SubjectFilter);
	Parms.bIsRetimed = bIsRetimed;
	Parms.bUsePreFetch = bUsePreFetch;
	Parms.bIsScaled = bIsScaled;
	Parms.bLogOutput = bLogOutput;
	Parms.Offset = Offset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (SourceHandle != nullptr)
		*SourceHandle = std::move(Parms.SourceHandle);
}


// Function LiveLinkDataStream.LiveLinkViconDataStreamBlueprint.TimecodeFromFrameNumber
// (Final, Native, Static, Private, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FFrameNumber                     FrameNumber                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFrameRate                       FrameRate                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTimecode                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FTimecode ULiveLinkViconDataStreamBlueprint::TimecodeFromFrameNumber(const struct FFrameNumber& FrameNumber, const struct FFrameRate& FrameRate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LiveLinkViconDataStreamBlueprint", "TimecodeFromFrameNumber");

	Params::LiveLinkViconDataStreamBlueprint_TimecodeFromFrameNumber Parms{};

	Parms.FrameNumber = std::move(FrameNumber);
	Parms.FrameRate = std::move(FrameRate);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}

