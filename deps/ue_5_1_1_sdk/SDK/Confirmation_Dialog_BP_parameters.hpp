#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Confirmation_Dialog_BP

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function Confirmation_Dialog_BP.Confirmation_Dialog_BP_C.ExecuteUbergraph_Confirmation_Dialog_BP
// 0x0004 (0x0004 - 0x0000)
struct Confirmation_Dialog_BP_C_ExecuteUbergraph_Confirmation_Dialog_BP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Confirmation_Dialog_BP_C_ExecuteUbergraph_Confirmation_Dialog_BP) == 0x000004, "Wrong alignment on Confirmation_Dialog_BP_C_ExecuteUbergraph_Confirmation_Dialog_BP");
static_assert(sizeof(Confirmation_Dialog_BP_C_ExecuteUbergraph_Confirmation_Dialog_BP) == 0x000004, "Wrong size on Confirmation_Dialog_BP_C_ExecuteUbergraph_Confirmation_Dialog_BP");
static_assert(offsetof(Confirmation_Dialog_BP_C_ExecuteUbergraph_Confirmation_Dialog_BP, EntryPoint) == 0x000000, "Member 'Confirmation_Dialog_BP_C_ExecuteUbergraph_Confirmation_Dialog_BP::EntryPoint' has a wrong offset!");

// Function Confirmation_Dialog_BP.Confirmation_Dialog_BP_C.OnFocusReceived
// 0x0270 (0x0270 - 0x0000)
struct Confirmation_Dialog_BP_C_OnFocusReceived final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                            InFocusEvent;                                      // 0x0040(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                            ReturnValue;                                       // 0x0048(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x0100(0x00B8)()
	struct FEventReply                            CallFunc_SetUserFocus_ReturnValue;                 // 0x01B8(0x00B8)()
};
static_assert(alignof(Confirmation_Dialog_BP_C_OnFocusReceived) == 0x000008, "Wrong alignment on Confirmation_Dialog_BP_C_OnFocusReceived");
static_assert(sizeof(Confirmation_Dialog_BP_C_OnFocusReceived) == 0x000270, "Wrong size on Confirmation_Dialog_BP_C_OnFocusReceived");
static_assert(offsetof(Confirmation_Dialog_BP_C_OnFocusReceived, MyGeometry) == 0x000000, "Member 'Confirmation_Dialog_BP_C_OnFocusReceived::MyGeometry' has a wrong offset!");
static_assert(offsetof(Confirmation_Dialog_BP_C_OnFocusReceived, InFocusEvent) == 0x000040, "Member 'Confirmation_Dialog_BP_C_OnFocusReceived::InFocusEvent' has a wrong offset!");
static_assert(offsetof(Confirmation_Dialog_BP_C_OnFocusReceived, ReturnValue) == 0x000048, "Member 'Confirmation_Dialog_BP_C_OnFocusReceived::ReturnValue' has a wrong offset!");
static_assert(offsetof(Confirmation_Dialog_BP_C_OnFocusReceived, CallFunc_Handled_ReturnValue) == 0x000100, "Member 'Confirmation_Dialog_BP_C_OnFocusReceived::CallFunc_Handled_ReturnValue' has a wrong offset!");
static_assert(offsetof(Confirmation_Dialog_BP_C_OnFocusReceived, CallFunc_SetUserFocus_ReturnValue) == 0x0001B8, "Member 'Confirmation_Dialog_BP_C_OnFocusReceived::CallFunc_SetUserFocus_ReturnValue' has a wrong offset!");

}

