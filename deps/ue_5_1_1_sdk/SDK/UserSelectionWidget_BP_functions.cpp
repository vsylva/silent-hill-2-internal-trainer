#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UserSelectionWidget_BP

#include "Basic.hpp"

#include "UserSelectionWidget_BP_classes.hpp"
#include "UserSelectionWidget_BP_parameters.hpp"


namespace SDK
{

// Function UserSelectionWidget_BP.UserSelectionWidget_BP_C.ExecuteUbergraph_UserSelectionWidget_BP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUserSelectionWidget_BP_C::ExecuteUbergraph_UserSelectionWidget_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserSelectionWidget_BP_C", "ExecuteUbergraph_UserSelectionWidget_BP");

	Params::UserSelectionWidget_BP_C_ExecuteUbergraph_UserSelectionWidget_BP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UserSelectionWidget_BP.UserSelectionWidget_BP_C.OnAnimationFinished_Event_0
// (BlueprintCallable, BlueprintEvent)

void UUserSelectionWidget_BP_C::OnAnimationFinished_Event_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserSelectionWidget_BP_C", "OnAnimationFinished_Event_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UserSelectionWidget_BP.UserSelectionWidget_BP_C.OnFadeOut
// (Event, Protected, BlueprintEvent)

void UUserSelectionWidget_BP_C::OnFadeOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserSelectionWidget_BP_C", "OnFadeOut");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UserSelectionWidget_BP.UserSelectionWidget_BP_C.OnShowAskNoUser
// (Event, Protected, BlueprintEvent)

void UUserSelectionWidget_BP_C::OnShowAskNoUser()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserSelectionWidget_BP_C", "OnShowAskNoUser");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UserSelectionWidget_BP.UserSelectionWidget_BP_C.OnShowPressA
// (Event, Protected, BlueprintEvent)

void UUserSelectionWidget_BP_C::OnShowPressA()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserSelectionWidget_BP_C", "OnShowPressA");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UserSelectionWidget_BP.UserSelectionWidget_BP_C.OnShowProcessing
// (Event, Protected, BlueprintEvent)

void UUserSelectionWidget_BP_C::OnShowProcessing()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserSelectionWidget_BP_C", "OnShowProcessing");

	UObject::ProcessEvent(Func, nullptr);
}

}

