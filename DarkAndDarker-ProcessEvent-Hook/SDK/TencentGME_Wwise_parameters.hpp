#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TencentGME_Wwise

#include "Basic.hpp"

#include "TencentGME_Wwise_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function TencentGME_Wwise.TencentGMEBlueprintLibrary.AddAudioBlockList
// 0x0010 (0x0010 - 0x0000)
struct TencentGMEBlueprintLibrary_AddAudioBlockList final
{
public:
	class FString                                 TargetId;                                          // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(TencentGMEBlueprintLibrary_AddAudioBlockList) == 0x000008, "Wrong alignment on TencentGMEBlueprintLibrary_AddAudioBlockList");
static_assert(sizeof(TencentGMEBlueprintLibrary_AddAudioBlockList) == 0x000010, "Wrong size on TencentGMEBlueprintLibrary_AddAudioBlockList");
static_assert(offsetof(TencentGMEBlueprintLibrary_AddAudioBlockList, TargetId) == 0x000000, "Member 'TencentGMEBlueprintLibrary_AddAudioBlockList::TargetId' has a wrong offset!");

// Function TencentGME_Wwise.TencentGMEBlueprintLibrary.EnableBluetoothMic
// 0x0001 (0x0001 - 0x0000)
struct TencentGMEBlueprintLibrary_EnableBluetoothMic final
{
public:
	bool                                          Enable;                                            // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(TencentGMEBlueprintLibrary_EnableBluetoothMic) == 0x000001, "Wrong alignment on TencentGMEBlueprintLibrary_EnableBluetoothMic");
static_assert(sizeof(TencentGMEBlueprintLibrary_EnableBluetoothMic) == 0x000001, "Wrong size on TencentGMEBlueprintLibrary_EnableBluetoothMic");
static_assert(offsetof(TencentGMEBlueprintLibrary_EnableBluetoothMic, Enable) == 0x000000, "Member 'TencentGMEBlueprintLibrary_EnableBluetoothMic::Enable' has a wrong offset!");

// Function TencentGME_Wwise.TencentGMEBlueprintLibrary.GetAudioRecvStreamLevel
// 0x0018 (0x0018 - 0x0000)
struct TencentGMEBlueprintLibrary_GetAudioRecvStreamLevel final
{
public:
	class FString                                 TargetId;                                          // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ReturnValue;                                       // 0x0010(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1DEA[0x4];                                     // 0x0014(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(TencentGMEBlueprintLibrary_GetAudioRecvStreamLevel) == 0x000008, "Wrong alignment on TencentGMEBlueprintLibrary_GetAudioRecvStreamLevel");
static_assert(sizeof(TencentGMEBlueprintLibrary_GetAudioRecvStreamLevel) == 0x000018, "Wrong size on TencentGMEBlueprintLibrary_GetAudioRecvStreamLevel");
static_assert(offsetof(TencentGMEBlueprintLibrary_GetAudioRecvStreamLevel, TargetId) == 0x000000, "Member 'TencentGMEBlueprintLibrary_GetAudioRecvStreamLevel::TargetId' has a wrong offset!");
static_assert(offsetof(TencentGMEBlueprintLibrary_GetAudioRecvStreamLevel, ReturnValue) == 0x000010, "Member 'TencentGMEBlueprintLibrary_GetAudioRecvStreamLevel::ReturnValue' has a wrong offset!");

// Function TencentGME_Wwise.TencentGMEBlueprintLibrary.GetAudioSendStreamLevel
// 0x0004 (0x0004 - 0x0000)
struct TencentGMEBlueprintLibrary_GetAudioSendStreamLevel final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(TencentGMEBlueprintLibrary_GetAudioSendStreamLevel) == 0x000004, "Wrong alignment on TencentGMEBlueprintLibrary_GetAudioSendStreamLevel");
static_assert(sizeof(TencentGMEBlueprintLibrary_GetAudioSendStreamLevel) == 0x000004, "Wrong size on TencentGMEBlueprintLibrary_GetAudioSendStreamLevel");
static_assert(offsetof(TencentGMEBlueprintLibrary_GetAudioSendStreamLevel, ReturnValue) == 0x000000, "Member 'TencentGMEBlueprintLibrary_GetAudioSendStreamLevel::ReturnValue' has a wrong offset!");

// Function TencentGME_Wwise.TencentGMEBlueprintLibrary.GetGMEVersion
// 0x0010 (0x0010 - 0x0000)
struct TencentGMEBlueprintLibrary_GetGMEVersion final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(TencentGMEBlueprintLibrary_GetGMEVersion) == 0x000008, "Wrong alignment on TencentGMEBlueprintLibrary_GetGMEVersion");
static_assert(sizeof(TencentGMEBlueprintLibrary_GetGMEVersion) == 0x000010, "Wrong size on TencentGMEBlueprintLibrary_GetGMEVersion");
static_assert(offsetof(TencentGMEBlueprintLibrary_GetGMEVersion, ReturnValue) == 0x000000, "Member 'TencentGMEBlueprintLibrary_GetGMEVersion::ReturnValue' has a wrong offset!");

// Function TencentGME_Wwise.TencentGMEBlueprintLibrary.GetMessage
// 0x0038 (0x0038 - 0x0000)
struct TencentGMEBlueprintLibrary_GetMessage final
{
public:
	struct FTencentGmeMessage                     TencentGmeMessage;                                 // 0x0000(0x0030)(Parm, OutParm, NativeAccessSpecifierPublic)
	int32                                         ReturnValue;                                       // 0x0030(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1DEB[0x4];                                     // 0x0034(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(TencentGMEBlueprintLibrary_GetMessage) == 0x000008, "Wrong alignment on TencentGMEBlueprintLibrary_GetMessage");
static_assert(sizeof(TencentGMEBlueprintLibrary_GetMessage) == 0x000038, "Wrong size on TencentGMEBlueprintLibrary_GetMessage");
static_assert(offsetof(TencentGMEBlueprintLibrary_GetMessage, TencentGmeMessage) == 0x000000, "Member 'TencentGMEBlueprintLibrary_GetMessage::TencentGmeMessage' has a wrong offset!");
static_assert(offsetof(TencentGMEBlueprintLibrary_GetMessage, ReturnValue) == 0x000030, "Member 'TencentGMEBlueprintLibrary_GetMessage::ReturnValue' has a wrong offset!");

// Function TencentGME_Wwise.TencentGMEBlueprintLibrary.GetVoiceFileDuration
// 0x0018 (0x0018 - 0x0000)
struct TencentGMEBlueprintLibrary_GetVoiceFileDuration final
{
public:
	class FString                                 Fileid;                                            // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ReturnValue;                                       // 0x0010(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1DEC[0x4];                                     // 0x0014(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(TencentGMEBlueprintLibrary_GetVoiceFileDuration) == 0x000008, "Wrong alignment on TencentGMEBlueprintLibrary_GetVoiceFileDuration");
static_assert(sizeof(TencentGMEBlueprintLibrary_GetVoiceFileDuration) == 0x000018, "Wrong size on TencentGMEBlueprintLibrary_GetVoiceFileDuration");
static_assert(offsetof(TencentGMEBlueprintLibrary_GetVoiceFileDuration, Fileid) == 0x000000, "Member 'TencentGMEBlueprintLibrary_GetVoiceFileDuration::Fileid' has a wrong offset!");
static_assert(offsetof(TencentGMEBlueprintLibrary_GetVoiceFileDuration, ReturnValue) == 0x000010, "Member 'TencentGMEBlueprintLibrary_GetVoiceFileDuration::ReturnValue' has a wrong offset!");

// Function TencentGME_Wwise.TencentGMEBlueprintLibrary.PlayRecordFile
// 0x0018 (0x0018 - 0x0000)
struct TencentGMEBlueprintLibrary_PlayRecordFile final
{
public:
	class FString                                 Fileid;                                            // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ReturnValue;                                       // 0x0010(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1DED[0x4];                                     // 0x0014(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(TencentGMEBlueprintLibrary_PlayRecordFile) == 0x000008, "Wrong alignment on TencentGMEBlueprintLibrary_PlayRecordFile");
static_assert(sizeof(TencentGMEBlueprintLibrary_PlayRecordFile) == 0x000018, "Wrong size on TencentGMEBlueprintLibrary_PlayRecordFile");
static_assert(offsetof(TencentGMEBlueprintLibrary_PlayRecordFile, Fileid) == 0x000000, "Member 'TencentGMEBlueprintLibrary_PlayRecordFile::Fileid' has a wrong offset!");
static_assert(offsetof(TencentGMEBlueprintLibrary_PlayRecordFile, ReturnValue) == 0x000010, "Member 'TencentGMEBlueprintLibrary_PlayRecordFile::ReturnValue' has a wrong offset!");

// Function TencentGME_Wwise.TencentGMEBlueprintLibrary.ReceivePlugin_GetReceiveOpenIDWithActor
// 0x0018 (0x0018 - 0x0000)
struct TencentGMEBlueprintLibrary_ReceivePlugin_GetReceiveOpenIDWithActor final
{
public:
	class AActor*                                 Actor;                                             // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 UserId;                                            // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(TencentGMEBlueprintLibrary_ReceivePlugin_GetReceiveOpenIDWithActor) == 0x000008, "Wrong alignment on TencentGMEBlueprintLibrary_ReceivePlugin_GetReceiveOpenIDWithActor");
static_assert(sizeof(TencentGMEBlueprintLibrary_ReceivePlugin_GetReceiveOpenIDWithActor) == 0x000018, "Wrong size on TencentGMEBlueprintLibrary_ReceivePlugin_GetReceiveOpenIDWithActor");
static_assert(offsetof(TencentGMEBlueprintLibrary_ReceivePlugin_GetReceiveOpenIDWithActor, Actor) == 0x000000, "Member 'TencentGMEBlueprintLibrary_ReceivePlugin_GetReceiveOpenIDWithActor::Actor' has a wrong offset!");
static_assert(offsetof(TencentGMEBlueprintLibrary_ReceivePlugin_GetReceiveOpenIDWithActor, UserId) == 0x000008, "Member 'TencentGMEBlueprintLibrary_ReceivePlugin_GetReceiveOpenIDWithActor::UserId' has a wrong offset!");

// Function TencentGME_Wwise.TencentGMEBlueprintLibrary.ReceivePlugin_GetReceiveOpenIDWithAkComponent
// 0x0018 (0x0018 - 0x0000)
struct TencentGMEBlueprintLibrary_ReceivePlugin_GetReceiveOpenIDWithAkComponent final
{
public:
	class UAkComponent*                           AkComponent;                                       // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 UserId;                                            // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(TencentGMEBlueprintLibrary_ReceivePlugin_GetReceiveOpenIDWithAkComponent) == 0x000008, "Wrong alignment on TencentGMEBlueprintLibrary_ReceivePlugin_GetReceiveOpenIDWithAkComponent");
static_assert(sizeof(TencentGMEBlueprintLibrary_ReceivePlugin_GetReceiveOpenIDWithAkComponent) == 0x000018, "Wrong size on TencentGMEBlueprintLibrary_ReceivePlugin_GetReceiveOpenIDWithAkComponent");
static_assert(offsetof(TencentGMEBlueprintLibrary_ReceivePlugin_GetReceiveOpenIDWithAkComponent, AkComponent) == 0x000000, "Member 'TencentGMEBlueprintLibrary_ReceivePlugin_GetReceiveOpenIDWithAkComponent::AkComponent' has a wrong offset!");
static_assert(offsetof(TencentGMEBlueprintLibrary_ReceivePlugin_GetReceiveOpenIDWithAkComponent, UserId) == 0x000008, "Member 'TencentGMEBlueprintLibrary_ReceivePlugin_GetReceiveOpenIDWithAkComponent::UserId' has a wrong offset!");

// Function TencentGME_Wwise.TencentGMEBlueprintLibrary.ReceivePlugin_SetReceiveOpenIDWithActor
// 0x0018 (0x0018 - 0x0000)
struct TencentGMEBlueprintLibrary_ReceivePlugin_SetReceiveOpenIDWithActor final
{
public:
	class AActor*                                 Actor;                                             // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 UserId;                                            // 0x0008(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(TencentGMEBlueprintLibrary_ReceivePlugin_SetReceiveOpenIDWithActor) == 0x000008, "Wrong alignment on TencentGMEBlueprintLibrary_ReceivePlugin_SetReceiveOpenIDWithActor");
static_assert(sizeof(TencentGMEBlueprintLibrary_ReceivePlugin_SetReceiveOpenIDWithActor) == 0x000018, "Wrong size on TencentGMEBlueprintLibrary_ReceivePlugin_SetReceiveOpenIDWithActor");
static_assert(offsetof(TencentGMEBlueprintLibrary_ReceivePlugin_SetReceiveOpenIDWithActor, Actor) == 0x000000, "Member 'TencentGMEBlueprintLibrary_ReceivePlugin_SetReceiveOpenIDWithActor::Actor' has a wrong offset!");
static_assert(offsetof(TencentGMEBlueprintLibrary_ReceivePlugin_SetReceiveOpenIDWithActor, UserId) == 0x000008, "Member 'TencentGMEBlueprintLibrary_ReceivePlugin_SetReceiveOpenIDWithActor::UserId' has a wrong offset!");

// Function TencentGME_Wwise.TencentGMEBlueprintLibrary.ReceivePlugin_SetReceiveOpenIDWithAkComponent
// 0x0018 (0x0018 - 0x0000)
struct TencentGMEBlueprintLibrary_ReceivePlugin_SetReceiveOpenIDWithAkComponent final
{
public:
	class UAkComponent*                           AkComponent;                                       // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 UserId;                                            // 0x0008(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(TencentGMEBlueprintLibrary_ReceivePlugin_SetReceiveOpenIDWithAkComponent) == 0x000008, "Wrong alignment on TencentGMEBlueprintLibrary_ReceivePlugin_SetReceiveOpenIDWithAkComponent");
static_assert(sizeof(TencentGMEBlueprintLibrary_ReceivePlugin_SetReceiveOpenIDWithAkComponent) == 0x000018, "Wrong size on TencentGMEBlueprintLibrary_ReceivePlugin_SetReceiveOpenIDWithAkComponent");
static_assert(offsetof(TencentGMEBlueprintLibrary_ReceivePlugin_SetReceiveOpenIDWithAkComponent, AkComponent) == 0x000000, "Member 'TencentGMEBlueprintLibrary_ReceivePlugin_SetReceiveOpenIDWithAkComponent::AkComponent' has a wrong offset!");
static_assert(offsetof(TencentGMEBlueprintLibrary_ReceivePlugin_SetReceiveOpenIDWithAkComponent, UserId) == 0x000008, "Member 'TencentGMEBlueprintLibrary_ReceivePlugin_SetReceiveOpenIDWithAkComponent::UserId' has a wrong offset!");

// Function TencentGME_Wwise.TencentGMEBlueprintLibrary.RemoveAudioBlockList
// 0x0010 (0x0010 - 0x0000)
struct TencentGMEBlueprintLibrary_RemoveAudioBlockList final
{
public:
	class FString                                 TargetId;                                          // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(TencentGMEBlueprintLibrary_RemoveAudioBlockList) == 0x000008, "Wrong alignment on TencentGMEBlueprintLibrary_RemoveAudioBlockList");
static_assert(sizeof(TencentGMEBlueprintLibrary_RemoveAudioBlockList) == 0x000010, "Wrong size on TencentGMEBlueprintLibrary_RemoveAudioBlockList");
static_assert(offsetof(TencentGMEBlueprintLibrary_RemoveAudioBlockList, TargetId) == 0x000000, "Member 'TencentGMEBlueprintLibrary_RemoveAudioBlockList::TargetId' has a wrong offset!");

// Function TencentGME_Wwise.TencentGMEBlueprintLibrary.SendPlugin_EnableLoopbackWithActor
// 0x0010 (0x0010 - 0x0000)
struct TencentGMEBlueprintLibrary_SendPlugin_EnableLoopbackWithActor final
{
public:
	class AActor*                                 Actor;                                             // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          EnableLoopback;                                    // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1DEE[0x7];                                     // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(TencentGMEBlueprintLibrary_SendPlugin_EnableLoopbackWithActor) == 0x000008, "Wrong alignment on TencentGMEBlueprintLibrary_SendPlugin_EnableLoopbackWithActor");
static_assert(sizeof(TencentGMEBlueprintLibrary_SendPlugin_EnableLoopbackWithActor) == 0x000010, "Wrong size on TencentGMEBlueprintLibrary_SendPlugin_EnableLoopbackWithActor");
static_assert(offsetof(TencentGMEBlueprintLibrary_SendPlugin_EnableLoopbackWithActor, Actor) == 0x000000, "Member 'TencentGMEBlueprintLibrary_SendPlugin_EnableLoopbackWithActor::Actor' has a wrong offset!");
static_assert(offsetof(TencentGMEBlueprintLibrary_SendPlugin_EnableLoopbackWithActor, EnableLoopback) == 0x000008, "Member 'TencentGMEBlueprintLibrary_SendPlugin_EnableLoopbackWithActor::EnableLoopback' has a wrong offset!");

// Function TencentGME_Wwise.TencentGMEBlueprintLibrary.SendPlugin_EnableLoopbackWithAkComponent
// 0x0010 (0x0010 - 0x0000)
struct TencentGMEBlueprintLibrary_SendPlugin_EnableLoopbackWithAkComponent final
{
public:
	class UAkComponent*                           AkComponent;                                       // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          EnableLoopback;                                    // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1DEF[0x7];                                     // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(TencentGMEBlueprintLibrary_SendPlugin_EnableLoopbackWithAkComponent) == 0x000008, "Wrong alignment on TencentGMEBlueprintLibrary_SendPlugin_EnableLoopbackWithAkComponent");
static_assert(sizeof(TencentGMEBlueprintLibrary_SendPlugin_EnableLoopbackWithAkComponent) == 0x000010, "Wrong size on TencentGMEBlueprintLibrary_SendPlugin_EnableLoopbackWithAkComponent");
static_assert(offsetof(TencentGMEBlueprintLibrary_SendPlugin_EnableLoopbackWithAkComponent, AkComponent) == 0x000000, "Member 'TencentGMEBlueprintLibrary_SendPlugin_EnableLoopbackWithAkComponent::AkComponent' has a wrong offset!");
static_assert(offsetof(TencentGMEBlueprintLibrary_SendPlugin_EnableLoopbackWithAkComponent, EnableLoopback) == 0x000008, "Member 'TencentGMEBlueprintLibrary_SendPlugin_EnableLoopbackWithAkComponent::EnableLoopback' has a wrong offset!");

// Function TencentGME_Wwise.TencentGMEBlueprintLibrary.SendPlugin_GetEnableLoopbackWithActor
// 0x0010 (0x0010 - 0x0000)
struct TencentGMEBlueprintLibrary_SendPlugin_GetEnableLoopbackWithActor final
{
public:
	class AActor*                                 Actor;                                             // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1DF0[0x7];                                     // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(TencentGMEBlueprintLibrary_SendPlugin_GetEnableLoopbackWithActor) == 0x000008, "Wrong alignment on TencentGMEBlueprintLibrary_SendPlugin_GetEnableLoopbackWithActor");
static_assert(sizeof(TencentGMEBlueprintLibrary_SendPlugin_GetEnableLoopbackWithActor) == 0x000010, "Wrong size on TencentGMEBlueprintLibrary_SendPlugin_GetEnableLoopbackWithActor");
static_assert(offsetof(TencentGMEBlueprintLibrary_SendPlugin_GetEnableLoopbackWithActor, Actor) == 0x000000, "Member 'TencentGMEBlueprintLibrary_SendPlugin_GetEnableLoopbackWithActor::Actor' has a wrong offset!");
static_assert(offsetof(TencentGMEBlueprintLibrary_SendPlugin_GetEnableLoopbackWithActor, ReturnValue) == 0x000008, "Member 'TencentGMEBlueprintLibrary_SendPlugin_GetEnableLoopbackWithActor::ReturnValue' has a wrong offset!");

// Function TencentGME_Wwise.TencentGMEBlueprintLibrary.SendPlugin_GetEnableLoopbackWithAkComponent
// 0x0010 (0x0010 - 0x0000)
struct TencentGMEBlueprintLibrary_SendPlugin_GetEnableLoopbackWithAkComponent final
{
public:
	class UAkComponent*                           AkComponent;                                       // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1DF1[0x7];                                     // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(TencentGMEBlueprintLibrary_SendPlugin_GetEnableLoopbackWithAkComponent) == 0x000008, "Wrong alignment on TencentGMEBlueprintLibrary_SendPlugin_GetEnableLoopbackWithAkComponent");
static_assert(sizeof(TencentGMEBlueprintLibrary_SendPlugin_GetEnableLoopbackWithAkComponent) == 0x000010, "Wrong size on TencentGMEBlueprintLibrary_SendPlugin_GetEnableLoopbackWithAkComponent");
static_assert(offsetof(TencentGMEBlueprintLibrary_SendPlugin_GetEnableLoopbackWithAkComponent, AkComponent) == 0x000000, "Member 'TencentGMEBlueprintLibrary_SendPlugin_GetEnableLoopbackWithAkComponent::AkComponent' has a wrong offset!");
static_assert(offsetof(TencentGMEBlueprintLibrary_SendPlugin_GetEnableLoopbackWithAkComponent, ReturnValue) == 0x000008, "Member 'TencentGMEBlueprintLibrary_SendPlugin_GetEnableLoopbackWithAkComponent::ReturnValue' has a wrong offset!");

// Function TencentGME_Wwise.TencentGMEBlueprintLibrary.SetAudioStreamProfile
// 0x0001 (0x0001 - 0x0000)
struct TencentGMEBlueprintLibrary_SetAudioStreamProfile final
{
public:
	EUTencentGME_StreamProfile                    Profile;                                           // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(TencentGMEBlueprintLibrary_SetAudioStreamProfile) == 0x000001, "Wrong alignment on TencentGMEBlueprintLibrary_SetAudioStreamProfile");
static_assert(sizeof(TencentGMEBlueprintLibrary_SetAudioStreamProfile) == 0x000001, "Wrong size on TencentGMEBlueprintLibrary_SetAudioStreamProfile");
static_assert(offsetof(TencentGMEBlueprintLibrary_SetAudioStreamProfile, Profile) == 0x000000, "Member 'TencentGMEBlueprintLibrary_SetAudioStreamProfile::Profile' has a wrong offset!");

// Function TencentGME_Wwise.TencentGMEBlueprintLibrary.SetLogLevel
// 0x0002 (0x0002 - 0x0000)
struct TencentGMEBlueprintLibrary_SetLogLevel final
{
public:
	EUTencentGME_LogLevel                         LogLevelWrite;                                     // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EUTencentGME_LogLevel                         LogLevelPrint;                                     // 0x0001(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(TencentGMEBlueprintLibrary_SetLogLevel) == 0x000001, "Wrong alignment on TencentGMEBlueprintLibrary_SetLogLevel");
static_assert(sizeof(TencentGMEBlueprintLibrary_SetLogLevel) == 0x000002, "Wrong size on TencentGMEBlueprintLibrary_SetLogLevel");
static_assert(offsetof(TencentGMEBlueprintLibrary_SetLogLevel, LogLevelWrite) == 0x000000, "Member 'TencentGMEBlueprintLibrary_SetLogLevel::LogLevelWrite' has a wrong offset!");
static_assert(offsetof(TencentGMEBlueprintLibrary_SetLogLevel, LogLevelPrint) == 0x000001, "Member 'TencentGMEBlueprintLibrary_SetLogLevel::LogLevelPrint' has a wrong offset!");

// Function TencentGME_Wwise.TencentGMEBlueprintLibrary.SetRangeAudioRecvRange
// 0x0004 (0x0004 - 0x0000)
struct TencentGMEBlueprintLibrary_SetRangeAudioRecvRange final
{
public:
	int32                                         Range;                                             // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(TencentGMEBlueprintLibrary_SetRangeAudioRecvRange) == 0x000004, "Wrong alignment on TencentGMEBlueprintLibrary_SetRangeAudioRecvRange");
static_assert(sizeof(TencentGMEBlueprintLibrary_SetRangeAudioRecvRange) == 0x000004, "Wrong size on TencentGMEBlueprintLibrary_SetRangeAudioRecvRange");
static_assert(offsetof(TencentGMEBlueprintLibrary_SetRangeAudioRecvRange, Range) == 0x000000, "Member 'TencentGMEBlueprintLibrary_SetRangeAudioRecvRange::Range' has a wrong offset!");

// Function TencentGME_Wwise.TencentGMEBlueprintLibrary.SetRangeAudioTeamID
// 0x0004 (0x0004 - 0x0000)
struct TencentGMEBlueprintLibrary_SetRangeAudioTeamID final
{
public:
	int32                                         TeamID;                                            // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(TencentGMEBlueprintLibrary_SetRangeAudioTeamID) == 0x000004, "Wrong alignment on TencentGMEBlueprintLibrary_SetRangeAudioTeamID");
static_assert(sizeof(TencentGMEBlueprintLibrary_SetRangeAudioTeamID) == 0x000004, "Wrong size on TencentGMEBlueprintLibrary_SetRangeAudioTeamID");
static_assert(offsetof(TencentGMEBlueprintLibrary_SetRangeAudioTeamID, TeamID) == 0x000000, "Member 'TencentGMEBlueprintLibrary_SetRangeAudioTeamID::TeamID' has a wrong offset!");

// Function TencentGME_Wwise.TencentGMEBlueprintLibrary.SetRangeAudioTeamMode
// 0x0001 (0x0001 - 0x0000)
struct TencentGMEBlueprintLibrary_SetRangeAudioTeamMode final
{
public:
	EUTencentGME_TeamMode                         TeamMode;                                          // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(TencentGMEBlueprintLibrary_SetRangeAudioTeamMode) == 0x000001, "Wrong alignment on TencentGMEBlueprintLibrary_SetRangeAudioTeamMode");
static_assert(sizeof(TencentGMEBlueprintLibrary_SetRangeAudioTeamMode) == 0x000001, "Wrong size on TencentGMEBlueprintLibrary_SetRangeAudioTeamMode");
static_assert(offsetof(TencentGMEBlueprintLibrary_SetRangeAudioTeamMode, TeamMode) == 0x000000, "Member 'TencentGMEBlueprintLibrary_SetRangeAudioTeamMode::TeamMode' has a wrong offset!");

// Function TencentGME_Wwise.TencentGMEBlueprintLibrary.SetRegion
// 0x0001 (0x0001 - 0x0000)
struct TencentGMEBlueprintLibrary_SetRegion final
{
public:
	EUTencentGME_Region                           Region;                                            // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(TencentGMEBlueprintLibrary_SetRegion) == 0x000001, "Wrong alignment on TencentGMEBlueprintLibrary_SetRegion");
static_assert(sizeof(TencentGMEBlueprintLibrary_SetRegion) == 0x000001, "Wrong size on TencentGMEBlueprintLibrary_SetRegion");
static_assert(offsetof(TencentGMEBlueprintLibrary_SetRegion, Region) == 0x000000, "Member 'TencentGMEBlueprintLibrary_SetRegion::Region' has a wrong offset!");

// Function TencentGME_Wwise.TencentGMEBlueprintLibrary.SetRoomID
// 0x0018 (0x0018 - 0x0000)
struct TencentGMEBlueprintLibrary_SetRoomID final
{
public:
	class FString                                 RoomID;                                            // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ReturnValue;                                       // 0x0010(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1DF2[0x4];                                     // 0x0014(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(TencentGMEBlueprintLibrary_SetRoomID) == 0x000008, "Wrong alignment on TencentGMEBlueprintLibrary_SetRoomID");
static_assert(sizeof(TencentGMEBlueprintLibrary_SetRoomID) == 0x000018, "Wrong size on TencentGMEBlueprintLibrary_SetRoomID");
static_assert(offsetof(TencentGMEBlueprintLibrary_SetRoomID, RoomID) == 0x000000, "Member 'TencentGMEBlueprintLibrary_SetRoomID::RoomID' has a wrong offset!");
static_assert(offsetof(TencentGMEBlueprintLibrary_SetRoomID, ReturnValue) == 0x000010, "Member 'TencentGMEBlueprintLibrary_SetRoomID::ReturnValue' has a wrong offset!");

// Function TencentGME_Wwise.TencentGMEBlueprintLibrary.SetSelfPosition
// 0x000C (0x000C - 0x0000)
struct TencentGMEBlueprintLibrary_SetSelfPosition final
{
public:
	int32                                         PositionX;                                         // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         PositionY;                                         // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         PositionZ;                                         // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(TencentGMEBlueprintLibrary_SetSelfPosition) == 0x000004, "Wrong alignment on TencentGMEBlueprintLibrary_SetSelfPosition");
static_assert(sizeof(TencentGMEBlueprintLibrary_SetSelfPosition) == 0x00000C, "Wrong size on TencentGMEBlueprintLibrary_SetSelfPosition");
static_assert(offsetof(TencentGMEBlueprintLibrary_SetSelfPosition, PositionX) == 0x000000, "Member 'TencentGMEBlueprintLibrary_SetSelfPosition::PositionX' has a wrong offset!");
static_assert(offsetof(TencentGMEBlueprintLibrary_SetSelfPosition, PositionY) == 0x000004, "Member 'TencentGMEBlueprintLibrary_SetSelfPosition::PositionY' has a wrong offset!");
static_assert(offsetof(TencentGMEBlueprintLibrary_SetSelfPosition, PositionZ) == 0x000008, "Member 'TencentGMEBlueprintLibrary_SetSelfPosition::PositionZ' has a wrong offset!");

// Function TencentGME_Wwise.TencentGMEBlueprintLibrary.SetUserID
// 0x0018 (0x0018 - 0x0000)
struct TencentGMEBlueprintLibrary_SetUserID final
{
public:
	class FString                                 UserId;                                            // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ReturnValue;                                       // 0x0010(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1DF3[0x4];                                     // 0x0014(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(TencentGMEBlueprintLibrary_SetUserID) == 0x000008, "Wrong alignment on TencentGMEBlueprintLibrary_SetUserID");
static_assert(sizeof(TencentGMEBlueprintLibrary_SetUserID) == 0x000018, "Wrong size on TencentGMEBlueprintLibrary_SetUserID");
static_assert(offsetof(TencentGMEBlueprintLibrary_SetUserID, UserId) == 0x000000, "Member 'TencentGMEBlueprintLibrary_SetUserID::UserId' has a wrong offset!");
static_assert(offsetof(TencentGMEBlueprintLibrary_SetUserID, ReturnValue) == 0x000010, "Member 'TencentGMEBlueprintLibrary_SetUserID::ReturnValue' has a wrong offset!");

// Function TencentGME_Wwise.TencentGMEBlueprintLibrary.SpeechToText
// 0x0038 (0x0038 - 0x0000)
struct TencentGMEBlueprintLibrary_SpeechToText final
{
public:
	class FString                                 Fileid;                                            // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 SpeechLanguage;                                    // 0x0010(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 TranslateLanguage;                                 // 0x0020(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ReturnValue;                                       // 0x0030(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1DF4[0x4];                                     // 0x0034(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(TencentGMEBlueprintLibrary_SpeechToText) == 0x000008, "Wrong alignment on TencentGMEBlueprintLibrary_SpeechToText");
static_assert(sizeof(TencentGMEBlueprintLibrary_SpeechToText) == 0x000038, "Wrong size on TencentGMEBlueprintLibrary_SpeechToText");
static_assert(offsetof(TencentGMEBlueprintLibrary_SpeechToText, Fileid) == 0x000000, "Member 'TencentGMEBlueprintLibrary_SpeechToText::Fileid' has a wrong offset!");
static_assert(offsetof(TencentGMEBlueprintLibrary_SpeechToText, SpeechLanguage) == 0x000010, "Member 'TencentGMEBlueprintLibrary_SpeechToText::SpeechLanguage' has a wrong offset!");
static_assert(offsetof(TencentGMEBlueprintLibrary_SpeechToText, TranslateLanguage) == 0x000020, "Member 'TencentGMEBlueprintLibrary_SpeechToText::TranslateLanguage' has a wrong offset!");
static_assert(offsetof(TencentGMEBlueprintLibrary_SpeechToText, ReturnValue) == 0x000030, "Member 'TencentGMEBlueprintLibrary_SpeechToText::ReturnValue' has a wrong offset!");

// Function TencentGME_Wwise.TencentGMEBlueprintLibrary.StartRecording
// 0x0018 (0x0018 - 0x0000)
struct TencentGMEBlueprintLibrary_StartRecording final
{
public:
	class FString                                 Fileid;                                            // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ReturnValue;                                       // 0x0010(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1DF5[0x4];                                     // 0x0014(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(TencentGMEBlueprintLibrary_StartRecording) == 0x000008, "Wrong alignment on TencentGMEBlueprintLibrary_StartRecording");
static_assert(sizeof(TencentGMEBlueprintLibrary_StartRecording) == 0x000018, "Wrong size on TencentGMEBlueprintLibrary_StartRecording");
static_assert(offsetof(TencentGMEBlueprintLibrary_StartRecording, Fileid) == 0x000000, "Member 'TencentGMEBlueprintLibrary_StartRecording::Fileid' has a wrong offset!");
static_assert(offsetof(TencentGMEBlueprintLibrary_StartRecording, ReturnValue) == 0x000010, "Member 'TencentGMEBlueprintLibrary_StartRecording::ReturnValue' has a wrong offset!");

// Function TencentGME_Wwise.TencentGMEBlueprintLibrary.StopPlayFile
// 0x0004 (0x0004 - 0x0000)
struct TencentGMEBlueprintLibrary_StopPlayFile final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(TencentGMEBlueprintLibrary_StopPlayFile) == 0x000004, "Wrong alignment on TencentGMEBlueprintLibrary_StopPlayFile");
static_assert(sizeof(TencentGMEBlueprintLibrary_StopPlayFile) == 0x000004, "Wrong size on TencentGMEBlueprintLibrary_StopPlayFile");
static_assert(offsetof(TencentGMEBlueprintLibrary_StopPlayFile, ReturnValue) == 0x000000, "Member 'TencentGMEBlueprintLibrary_StopPlayFile::ReturnValue' has a wrong offset!");

// Function TencentGME_Wwise.TencentGMEBlueprintLibrary.StopRecording
// 0x0004 (0x0004 - 0x0000)
struct TencentGMEBlueprintLibrary_StopRecording final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(TencentGMEBlueprintLibrary_StopRecording) == 0x000004, "Wrong alignment on TencentGMEBlueprintLibrary_StopRecording");
static_assert(sizeof(TencentGMEBlueprintLibrary_StopRecording) == 0x000004, "Wrong size on TencentGMEBlueprintLibrary_StopRecording");
static_assert(offsetof(TencentGMEBlueprintLibrary_StopRecording, ReturnValue) == 0x000000, "Member 'TencentGMEBlueprintLibrary_StopRecording::ReturnValue' has a wrong offset!");

// Function TencentGME_Wwise.TencentGMESelfPositioner.GetPosition
// 0x0018 (0x0018 - 0x0000)
struct TencentGMESelfPositioner_GetPosition final
{
public:
	struct FVector                                ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(TencentGMESelfPositioner_GetPosition) == 0x000008, "Wrong alignment on TencentGMESelfPositioner_GetPosition");
static_assert(sizeof(TencentGMESelfPositioner_GetPosition) == 0x000018, "Wrong size on TencentGMESelfPositioner_GetPosition");
static_assert(offsetof(TencentGMESelfPositioner_GetPosition, ReturnValue) == 0x000000, "Member 'TencentGMESelfPositioner_GetPosition::ReturnValue' has a wrong offset!");

}

