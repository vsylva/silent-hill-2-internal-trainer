#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SimpleSpawnPoints

#include "Basic.hpp"

#include "DeveloperSettings_classes.hpp"
#include "LevelStreaming_structs.hpp"
#include "Engine_classes.hpp"
#include "SimpleSpawnPoints_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// Class SimpleSpawnPoints.SpawnPoint
// 0x0030 (0x0308 - 0x02D8)
class ASpawnPoint : public ANavigationObjectBase
{
public:
	class FString                                 CustomName;                                        // 0x02D8(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FLevelStreamingRequestHandle>   StreamingRequests;                                 // 0x02E8(0x0010)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FDataLayerStatus>               InitialDataLayerRequests;                          // 0x02F8(0x0010)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)

public:
	void OnPlayerSpawn();
	void OnPlayFromHere();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SpawnPoint">();
	}
	static class ASpawnPoint* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASpawnPoint>();
	}
};
static_assert(alignof(ASpawnPoint) == 0x000008, "Wrong alignment on ASpawnPoint");
static_assert(sizeof(ASpawnPoint) == 0x000308, "Wrong size on ASpawnPoint");
static_assert(offsetof(ASpawnPoint, CustomName) == 0x0002D8, "Member 'ASpawnPoint::CustomName' has a wrong offset!");
static_assert(offsetof(ASpawnPoint, StreamingRequests) == 0x0002E8, "Member 'ASpawnPoint::StreamingRequests' has a wrong offset!");
static_assert(offsetof(ASpawnPoint, InitialDataLayerRequests) == 0x0002F8, "Member 'ASpawnPoint::InitialDataLayerRequests' has a wrong offset!");

// Class SimpleSpawnPoints.SpawnPointsConfig
// 0x0010 (0x0040 - 0x0030)
class USpawnPointsConfig final : public UDataAsset
{
public:
	TArray<struct FSpawnPointData>                Spawnpoints;                                       // 0x0030(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SpawnPointsConfig">();
	}
	static class USpawnPointsConfig* GetDefaultObj()
	{
		return GetDefaultObjImpl<USpawnPointsConfig>();
	}
};
static_assert(alignof(USpawnPointsConfig) == 0x000008, "Wrong alignment on USpawnPointsConfig");
static_assert(sizeof(USpawnPointsConfig) == 0x000040, "Wrong size on USpawnPointsConfig");
static_assert(offsetof(USpawnPointsConfig, Spawnpoints) == 0x000030, "Member 'USpawnPointsConfig::Spawnpoints' has a wrong offset!");

// Class SimpleSpawnPoints.SpawnPointWidget
// 0x0158 (0x03D0 - 0x0278)
class USpawnPointWidget final : public UUserWidget
{
public:
	uint8                                         Pad_278[0x8];                                      // 0x0278(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSpawnPointData                        Data;                                              // 0x0280(0x0120)(BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class UBButton*                               Slot_but;                                          // 0x03A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_             OnClicked;                                         // 0x03A8(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	uint8                                         Pad_3B8[0x18];                                     // 0x03B8(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SpawnPointWidget">();
	}
	static class USpawnPointWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<USpawnPointWidget>();
	}
};
static_assert(alignof(USpawnPointWidget) == 0x000010, "Wrong alignment on USpawnPointWidget");
static_assert(sizeof(USpawnPointWidget) == 0x0003D0, "Wrong size on USpawnPointWidget");
static_assert(offsetof(USpawnPointWidget, Data) == 0x000280, "Member 'USpawnPointWidget::Data' has a wrong offset!");
static_assert(offsetof(USpawnPointWidget, Slot_but) == 0x0003A0, "Member 'USpawnPointWidget::Slot_but' has a wrong offset!");
static_assert(offsetof(USpawnPointWidget, OnClicked) == 0x0003A8, "Member 'USpawnPointWidget::OnClicked' has a wrong offset!");

// Class SimpleSpawnPoints.SpawnPointsListWidget
// 0x0060 (0x02D8 - 0x0278)
class USpawnPointsListWidget final : public UUserWidget
{
public:
	TSoftObjectPtr<class USpawnPointsConfig>      ConfigPath;                                        // 0x0278(0x0030)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class USpawnPointWidget>          ItemWidgetClass;                                   // 0x02A8(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPanelWidget*                           Items_box;                                         // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_             OnSpawnPointSelected;                              // 0x02B8(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_2C8[0x10];                                     // 0x02C8(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void ForEachSpawnPointData();
	void OnFocus();

	bool HasData() const;
	bool OnAddItem(const struct FSpawnPointData& Data) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SpawnPointsListWidget">();
	}
	static class USpawnPointsListWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<USpawnPointsListWidget>();
	}
};
static_assert(alignof(USpawnPointsListWidget) == 0x000008, "Wrong alignment on USpawnPointsListWidget");
static_assert(sizeof(USpawnPointsListWidget) == 0x0002D8, "Wrong size on USpawnPointsListWidget");
static_assert(offsetof(USpawnPointsListWidget, ConfigPath) == 0x000278, "Member 'USpawnPointsListWidget::ConfigPath' has a wrong offset!");
static_assert(offsetof(USpawnPointsListWidget, ItemWidgetClass) == 0x0002A8, "Member 'USpawnPointsListWidget::ItemWidgetClass' has a wrong offset!");
static_assert(offsetof(USpawnPointsListWidget, Items_box) == 0x0002B0, "Member 'USpawnPointsListWidget::Items_box' has a wrong offset!");
static_assert(offsetof(USpawnPointsListWidget, OnSpawnPointSelected) == 0x0002B8, "Member 'USpawnPointsListWidget::OnSpawnPointSelected' has a wrong offset!");

// Class SimpleSpawnPoints.SpawnPointsSettings
// 0x0030 (0x0068 - 0x0038)
class USpawnPointsSettings final : public UDeveloperSettings
{
public:
	TSoftObjectPtr<class USpawnPointsConfig>      SpawnPointConfig;                                  // 0x0038(0x0030)(Edit, BlueprintVisible, BlueprintReadOnly, Config, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SpawnPointsSettings">();
	}
	static class USpawnPointsSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<USpawnPointsSettings>();
	}
};
static_assert(alignof(USpawnPointsSettings) == 0x000008, "Wrong alignment on USpawnPointsSettings");
static_assert(sizeof(USpawnPointsSettings) == 0x000068, "Wrong size on USpawnPointsSettings");
static_assert(offsetof(USpawnPointsSettings, SpawnPointConfig) == 0x000038, "Member 'USpawnPointsSettings::SpawnPointConfig' has a wrong offset!");

}
