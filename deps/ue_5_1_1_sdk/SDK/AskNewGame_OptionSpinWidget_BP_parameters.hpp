#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AskNewGame_OptionSpinWidget_BP

#include "Basic.hpp"


namespace SDK::Params
{

// Function AskNewGame_OptionSpinWidget_BP.AskNewGame_OptionSpinWidget_BP_C.ExecuteUbergraph_AskNewGame_OptionSpinWidget_BP
// 0x0028 (0x0028 - 0x0000)
struct AskNewGame_OptionSpinWidget_BP_C_ExecuteUbergraph_AskNewGame_OptionSpinWidget_BP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsActive;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Event_Value;                                // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_WasChanged;                           // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Event_Text;                                 // 0x0010(0x0018)(ConstParm)
};
static_assert(alignof(AskNewGame_OptionSpinWidget_BP_C_ExecuteUbergraph_AskNewGame_OptionSpinWidget_BP) == 0x000008, "Wrong alignment on AskNewGame_OptionSpinWidget_BP_C_ExecuteUbergraph_AskNewGame_OptionSpinWidget_BP");
static_assert(sizeof(AskNewGame_OptionSpinWidget_BP_C_ExecuteUbergraph_AskNewGame_OptionSpinWidget_BP) == 0x000028, "Wrong size on AskNewGame_OptionSpinWidget_BP_C_ExecuteUbergraph_AskNewGame_OptionSpinWidget_BP");
static_assert(offsetof(AskNewGame_OptionSpinWidget_BP_C_ExecuteUbergraph_AskNewGame_OptionSpinWidget_BP, EntryPoint) == 0x000000, "Member 'AskNewGame_OptionSpinWidget_BP_C_ExecuteUbergraph_AskNewGame_OptionSpinWidget_BP::EntryPoint' has a wrong offset!");
static_assert(offsetof(AskNewGame_OptionSpinWidget_BP_C_ExecuteUbergraph_AskNewGame_OptionSpinWidget_BP, K2Node_Event_IsActive) == 0x000004, "Member 'AskNewGame_OptionSpinWidget_BP_C_ExecuteUbergraph_AskNewGame_OptionSpinWidget_BP::K2Node_Event_IsActive' has a wrong offset!");
static_assert(offsetof(AskNewGame_OptionSpinWidget_BP_C_ExecuteUbergraph_AskNewGame_OptionSpinWidget_BP, K2Node_Event_Value) == 0x000008, "Member 'AskNewGame_OptionSpinWidget_BP_C_ExecuteUbergraph_AskNewGame_OptionSpinWidget_BP::K2Node_Event_Value' has a wrong offset!");
static_assert(offsetof(AskNewGame_OptionSpinWidget_BP_C_ExecuteUbergraph_AskNewGame_OptionSpinWidget_BP, K2Node_Event_WasChanged) == 0x00000C, "Member 'AskNewGame_OptionSpinWidget_BP_C_ExecuteUbergraph_AskNewGame_OptionSpinWidget_BP::K2Node_Event_WasChanged' has a wrong offset!");
static_assert(offsetof(AskNewGame_OptionSpinWidget_BP_C_ExecuteUbergraph_AskNewGame_OptionSpinWidget_BP, K2Node_Event_Text) == 0x000010, "Member 'AskNewGame_OptionSpinWidget_BP_C_ExecuteUbergraph_AskNewGame_OptionSpinWidget_BP::K2Node_Event_Text' has a wrong offset!");

// Function AskNewGame_OptionSpinWidget_BP.AskNewGame_OptionSpinWidget_BP_C.OnLabelTextChanged
// 0x0018 (0x0018 - 0x0000)
struct AskNewGame_OptionSpinWidget_BP_C_OnLabelTextChanged final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(AskNewGame_OptionSpinWidget_BP_C_OnLabelTextChanged) == 0x000008, "Wrong alignment on AskNewGame_OptionSpinWidget_BP_C_OnLabelTextChanged");
static_assert(sizeof(AskNewGame_OptionSpinWidget_BP_C_OnLabelTextChanged) == 0x000018, "Wrong size on AskNewGame_OptionSpinWidget_BP_C_OnLabelTextChanged");
static_assert(offsetof(AskNewGame_OptionSpinWidget_BP_C_OnLabelTextChanged, Text) == 0x000000, "Member 'AskNewGame_OptionSpinWidget_BP_C_OnLabelTextChanged::Text' has a wrong offset!");

// Function AskNewGame_OptionSpinWidget_BP.AskNewGame_OptionSpinWidget_BP_C.OnActivated
// 0x0001 (0x0001 - 0x0000)
struct AskNewGame_OptionSpinWidget_BP_C_OnActivated final
{
public:
	bool                                          IsActive;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AskNewGame_OptionSpinWidget_BP_C_OnActivated) == 0x000001, "Wrong alignment on AskNewGame_OptionSpinWidget_BP_C_OnActivated");
static_assert(sizeof(AskNewGame_OptionSpinWidget_BP_C_OnActivated) == 0x000001, "Wrong size on AskNewGame_OptionSpinWidget_BP_C_OnActivated");
static_assert(offsetof(AskNewGame_OptionSpinWidget_BP_C_OnActivated, IsActive) == 0x000000, "Member 'AskNewGame_OptionSpinWidget_BP_C_OnActivated::IsActive' has a wrong offset!");

// Function AskNewGame_OptionSpinWidget_BP.AskNewGame_OptionSpinWidget_BP_C.OnValueChanged
// 0x0008 (0x0008 - 0x0000)
struct AskNewGame_OptionSpinWidget_BP_C_OnValueChanged final
{
public:
	int32                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          WasChanged;                                        // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AskNewGame_OptionSpinWidget_BP_C_OnValueChanged) == 0x000004, "Wrong alignment on AskNewGame_OptionSpinWidget_BP_C_OnValueChanged");
static_assert(sizeof(AskNewGame_OptionSpinWidget_BP_C_OnValueChanged) == 0x000008, "Wrong size on AskNewGame_OptionSpinWidget_BP_C_OnValueChanged");
static_assert(offsetof(AskNewGame_OptionSpinWidget_BP_C_OnValueChanged, Value) == 0x000000, "Member 'AskNewGame_OptionSpinWidget_BP_C_OnValueChanged::Value' has a wrong offset!");
static_assert(offsetof(AskNewGame_OptionSpinWidget_BP_C_OnValueChanged, WasChanged) == 0x000004, "Member 'AskNewGame_OptionSpinWidget_BP_C_OnValueChanged::WasChanged' has a wrong offset!");

}

