#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BlooberMedia

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "MovieScene_classes.hpp"


namespace SDK
{

// Class BlooberMedia.BinkMediaPlayerMovieSceneSection
// 0x0010 (0x0100 - 0x00F0)
class UBinkMediaPlayerMovieSceneSection final : public UMovieSceneSection
{
public:
	class UBinkMediaPlayer*                       BinkMediaPlayer;                                   // 0x00F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bLooping;                                          // 0x00F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_F9[0x3];                                       // 0x00F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFrameNumber                           StartFrameOffset;                                  // 0x00FC(0x0004)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BinkMediaPlayerMovieSceneSection">();
	}
	static class UBinkMediaPlayerMovieSceneSection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBinkMediaPlayerMovieSceneSection>();
	}
};
static_assert(alignof(UBinkMediaPlayerMovieSceneSection) == 0x000008, "Wrong alignment on UBinkMediaPlayerMovieSceneSection");
static_assert(sizeof(UBinkMediaPlayerMovieSceneSection) == 0x000100, "Wrong size on UBinkMediaPlayerMovieSceneSection");
static_assert(offsetof(UBinkMediaPlayerMovieSceneSection, BinkMediaPlayer) == 0x0000F0, "Member 'UBinkMediaPlayerMovieSceneSection::BinkMediaPlayer' has a wrong offset!");
static_assert(offsetof(UBinkMediaPlayerMovieSceneSection, bLooping) == 0x0000F8, "Member 'UBinkMediaPlayerMovieSceneSection::bLooping' has a wrong offset!");
static_assert(offsetof(UBinkMediaPlayerMovieSceneSection, StartFrameOffset) == 0x0000FC, "Member 'UBinkMediaPlayerMovieSceneSection::StartFrameOffset' has a wrong offset!");

// Class BlooberMedia.BinkMediaPlayerMovieSceneTrack
// 0x0018 (0x00B0 - 0x0098)
class UBinkMediaPlayerMovieSceneTrack final : public UMovieSceneNameableTrack
{
public:
	uint8                                         Pad_98[0x8];                                       // 0x0098(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UMovieSceneSection*>             Sections;                                          // 0x00A0(0x0010)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BinkMediaPlayerMovieSceneTrack">();
	}
	static class UBinkMediaPlayerMovieSceneTrack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBinkMediaPlayerMovieSceneTrack>();
	}
};
static_assert(alignof(UBinkMediaPlayerMovieSceneTrack) == 0x000008, "Wrong alignment on UBinkMediaPlayerMovieSceneTrack");
static_assert(sizeof(UBinkMediaPlayerMovieSceneTrack) == 0x0000B0, "Wrong size on UBinkMediaPlayerMovieSceneTrack");
static_assert(offsetof(UBinkMediaPlayerMovieSceneTrack, Sections) == 0x0000A0, "Member 'UBinkMediaPlayerMovieSceneTrack::Sections' has a wrong offset!");

}
