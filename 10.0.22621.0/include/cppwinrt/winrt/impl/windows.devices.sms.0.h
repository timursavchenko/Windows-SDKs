// C++/WinRT v2.0.220110.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_Devices_Sms_0_H
#define WINRT_Windows_Devices_Sms_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    struct IAsyncAction;
    template <typename TResult, typename TProgress> struct __declspec(empty_bases) IAsyncOperationWithProgress;
    template <typename TResult> struct __declspec(empty_bases) IAsyncOperation;
    template <typename T> struct __declspec(empty_bases) IReference;
    template <typename TSender, typename TResult> struct __declspec(empty_bases) TypedEventHandler;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    template <typename K, typename V> struct __declspec(empty_bases) IMap;
    template <typename T> struct __declspec(empty_bases) IVectorView;
    template <typename T> struct __declspec(empty_bases) IVector;
}
WINRT_EXPORT namespace winrt::Windows::Storage::Streams
{
    struct IBuffer;
}
WINRT_EXPORT namespace winrt::Windows::Devices::Sms
{
    enum class CellularClass : int32_t
    {
        None = 0,
        Gsm = 1,
        Cdma = 2,
    };
    enum class SmsBroadcastType : int32_t
    {
        Other = 0,
        CmasPresidential = 1,
        CmasExtreme = 2,
        CmasSevere = 3,
        CmasAmber = 4,
        CmasTest = 5,
        EUAlert1 = 6,
        EUAlert2 = 7,
        EUAlert3 = 8,
        EUAlertAmber = 9,
        EUAlertInfo = 10,
        EtwsEarthquake = 11,
        EtwsTsunami = 12,
        EtwsTsunamiAndEarthquake = 13,
        LatAlertLocal = 14,
    };
    enum class SmsDataFormat : int32_t
    {
        Unknown = 0,
        CdmaSubmit = 1,
        GsmSubmit = 2,
        CdmaDeliver = 3,
        GsmDeliver = 4,
    };
    enum class SmsDeviceStatus : int32_t
    {
        Off = 0,
        Ready = 1,
        SimNotInserted = 2,
        BadSim = 3,
        DeviceFailure = 4,
        SubscriptionNotActivated = 5,
        DeviceLocked = 6,
        DeviceBlocked = 7,
    };
    enum class SmsEncoding : int32_t
    {
        Unknown = 0,
        Optimal = 1,
        SevenBitAscii = 2,
        Unicode = 3,
        GsmSevenBit = 4,
        EightBit = 5,
        Latin = 6,
        Korean = 7,
        IA5 = 8,
        ShiftJis = 9,
        LatinHebrew = 10,
    };
    enum class SmsFilterActionType : int32_t
    {
        AcceptImmediately = 0,
        Drop = 1,
        Peek = 2,
        Accept = 3,
    };
    enum class SmsGeographicalScope : int32_t
    {
        None = 0,
        CellWithImmediateDisplay = 1,
        LocationArea = 2,
        Plmn = 3,
        Cell = 4,
    };
    enum class SmsMessageClass : int32_t
    {
        None = 0,
        Class0 = 1,
        Class1 = 2,
        Class2 = 3,
        Class3 = 4,
    };
    enum class SmsMessageFilter : int32_t
    {
        All = 0,
        Unread = 1,
        Read = 2,
        Sent = 3,
        Draft = 4,
    };
    enum class SmsMessageType : int32_t
    {
        Binary = 0,
        Text = 1,
        Wap = 2,
        App = 3,
        Broadcast = 4,
        Voicemail = 5,
        Status = 6,
    };
    enum class SmsModemErrorCode : int32_t
    {
        Other = 0,
        MessagingNetworkError = 1,
        SmsOperationNotSupportedByDevice = 2,
        SmsServiceNotSupportedByNetwork = 3,
        DeviceFailure = 4,
        MessageNotEncodedProperly = 5,
        MessageTooLarge = 6,
        DeviceNotReady = 7,
        NetworkNotReady = 8,
        InvalidSmscAddress = 9,
        NetworkFailure = 10,
        FixedDialingNumberRestricted = 11,
    };
    struct ISmsAppMessage;
    struct ISmsBinaryMessage;
    struct ISmsBroadcastMessage;
    struct ISmsDevice;
    struct ISmsDevice2;
    struct ISmsDevice2Statics;
    struct ISmsDeviceMessageStore;
    struct ISmsDeviceStatics;
    struct ISmsDeviceStatics2;
    struct ISmsFilterRule;
    struct ISmsFilterRuleFactory;
    struct ISmsFilterRules;
    struct ISmsFilterRulesFactory;
    struct ISmsMessage;
    struct ISmsMessageBase;
    struct ISmsMessageReceivedEventArgs;
    struct ISmsMessageReceivedTriggerDetails;
    struct ISmsMessageRegistration;
    struct ISmsMessageRegistrationStatics;
    struct ISmsReceivedEventDetails;
    struct ISmsReceivedEventDetails2;
    struct ISmsSendMessageResult;
    struct ISmsStatusMessage;
    struct ISmsTextMessage;
    struct ISmsTextMessage2;
    struct ISmsTextMessageStatics;
    struct ISmsVoicemailMessage;
    struct ISmsWapMessage;
    struct DeleteSmsMessageOperation;
    struct DeleteSmsMessagesOperation;
    struct GetSmsDeviceOperation;
    struct GetSmsMessageOperation;
    struct GetSmsMessagesOperation;
    struct SendSmsMessageOperation;
    struct SmsAppMessage;
    struct SmsBinaryMessage;
    struct SmsBroadcastMessage;
    struct SmsDevice;
    struct SmsDevice2;
    struct SmsDeviceMessageStore;
    struct SmsFilterRule;
    struct SmsFilterRules;
    struct SmsMessageReceivedEventArgs;
    struct SmsMessageReceivedTriggerDetails;
    struct SmsMessageRegistration;
    struct SmsReceivedEventDetails;
    struct SmsSendMessageResult;
    struct SmsStatusMessage;
    struct SmsTextMessage;
    struct SmsTextMessage2;
    struct SmsVoicemailMessage;
    struct SmsWapMessage;
    struct SmsEncodedLength;
    struct SmsDeviceStatusChangedEventHandler;
    struct SmsMessageReceivedEventHandler;
}
namespace winrt::impl
{
    template <> struct category<winrt::Windows::Devices::Sms::ISmsAppMessage>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Sms::ISmsBinaryMessage>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Sms::ISmsBroadcastMessage>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Sms::ISmsDevice>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Sms::ISmsDevice2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Sms::ISmsDevice2Statics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Sms::ISmsDeviceMessageStore>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Sms::ISmsDeviceStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Sms::ISmsDeviceStatics2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Sms::ISmsFilterRule>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Sms::ISmsFilterRuleFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Sms::ISmsFilterRules>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Sms::ISmsFilterRulesFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Sms::ISmsMessage>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Sms::ISmsMessageBase>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Sms::ISmsMessageReceivedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Sms::ISmsMessageReceivedTriggerDetails>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Sms::ISmsMessageRegistration>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Sms::ISmsMessageRegistrationStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Sms::ISmsReceivedEventDetails>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Sms::ISmsReceivedEventDetails2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Sms::ISmsSendMessageResult>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Sms::ISmsStatusMessage>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Sms::ISmsTextMessage>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Sms::ISmsTextMessage2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Sms::ISmsTextMessageStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Sms::ISmsVoicemailMessage>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Sms::ISmsWapMessage>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Sms::DeleteSmsMessageOperation>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::Sms::DeleteSmsMessagesOperation>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::Sms::GetSmsDeviceOperation>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::Sms::GetSmsMessageOperation>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::Sms::GetSmsMessagesOperation>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::Sms::SendSmsMessageOperation>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::Sms::SmsAppMessage>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::Sms::SmsBinaryMessage>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::Sms::SmsBroadcastMessage>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::Sms::SmsDevice>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::Sms::SmsDevice2>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::Sms::SmsDeviceMessageStore>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::Sms::SmsFilterRule>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::Sms::SmsFilterRules>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::Sms::SmsMessageReceivedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::Sms::SmsMessageReceivedTriggerDetails>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::Sms::SmsMessageRegistration>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::Sms::SmsReceivedEventDetails>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::Sms::SmsSendMessageResult>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::Sms::SmsStatusMessage>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::Sms::SmsTextMessage>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::Sms::SmsTextMessage2>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::Sms::SmsVoicemailMessage>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::Sms::SmsWapMessage>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::Sms::CellularClass>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Devices::Sms::SmsBroadcastType>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Devices::Sms::SmsDataFormat>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Devices::Sms::SmsDeviceStatus>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Devices::Sms::SmsEncoding>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Devices::Sms::SmsFilterActionType>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Devices::Sms::SmsGeographicalScope>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Devices::Sms::SmsMessageClass>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Devices::Sms::SmsMessageFilter>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Devices::Sms::SmsMessageType>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Devices::Sms::SmsModemErrorCode>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Devices::Sms::SmsEncodedLength>{ using type = struct_category<uint32_t, uint32_t, uint32_t, uint32_t, uint32_t>; };
    template <> struct category<winrt::Windows::Devices::Sms::SmsDeviceStatusChangedEventHandler>{ using type = delegate_category; };
    template <> struct category<winrt::Windows::Devices::Sms::SmsMessageReceivedEventHandler>{ using type = delegate_category; };
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Sms::DeleteSmsMessageOperation> = L"Windows.Devices.Sms.DeleteSmsMessageOperation";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Sms::DeleteSmsMessagesOperation> = L"Windows.Devices.Sms.DeleteSmsMessagesOperation";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Sms::GetSmsDeviceOperation> = L"Windows.Devices.Sms.GetSmsDeviceOperation";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Sms::GetSmsMessageOperation> = L"Windows.Devices.Sms.GetSmsMessageOperation";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Sms::GetSmsMessagesOperation> = L"Windows.Devices.Sms.GetSmsMessagesOperation";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Sms::SendSmsMessageOperation> = L"Windows.Devices.Sms.SendSmsMessageOperation";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Sms::SmsAppMessage> = L"Windows.Devices.Sms.SmsAppMessage";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Sms::SmsBinaryMessage> = L"Windows.Devices.Sms.SmsBinaryMessage";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Sms::SmsBroadcastMessage> = L"Windows.Devices.Sms.SmsBroadcastMessage";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Sms::SmsDevice> = L"Windows.Devices.Sms.SmsDevice";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Sms::SmsDevice2> = L"Windows.Devices.Sms.SmsDevice2";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Sms::SmsDeviceMessageStore> = L"Windows.Devices.Sms.SmsDeviceMessageStore";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Sms::SmsFilterRule> = L"Windows.Devices.Sms.SmsFilterRule";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Sms::SmsFilterRules> = L"Windows.Devices.Sms.SmsFilterRules";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Sms::SmsMessageReceivedEventArgs> = L"Windows.Devices.Sms.SmsMessageReceivedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Sms::SmsMessageReceivedTriggerDetails> = L"Windows.Devices.Sms.SmsMessageReceivedTriggerDetails";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Sms::SmsMessageRegistration> = L"Windows.Devices.Sms.SmsMessageRegistration";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Sms::SmsReceivedEventDetails> = L"Windows.Devices.Sms.SmsReceivedEventDetails";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Sms::SmsSendMessageResult> = L"Windows.Devices.Sms.SmsSendMessageResult";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Sms::SmsStatusMessage> = L"Windows.Devices.Sms.SmsStatusMessage";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Sms::SmsTextMessage> = L"Windows.Devices.Sms.SmsTextMessage";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Sms::SmsTextMessage2> = L"Windows.Devices.Sms.SmsTextMessage2";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Sms::SmsVoicemailMessage> = L"Windows.Devices.Sms.SmsVoicemailMessage";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Sms::SmsWapMessage> = L"Windows.Devices.Sms.SmsWapMessage";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Sms::CellularClass> = L"Windows.Devices.Sms.CellularClass";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Sms::SmsBroadcastType> = L"Windows.Devices.Sms.SmsBroadcastType";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Sms::SmsDataFormat> = L"Windows.Devices.Sms.SmsDataFormat";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Sms::SmsDeviceStatus> = L"Windows.Devices.Sms.SmsDeviceStatus";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Sms::SmsEncoding> = L"Windows.Devices.Sms.SmsEncoding";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Sms::SmsFilterActionType> = L"Windows.Devices.Sms.SmsFilterActionType";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Sms::SmsGeographicalScope> = L"Windows.Devices.Sms.SmsGeographicalScope";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Sms::SmsMessageClass> = L"Windows.Devices.Sms.SmsMessageClass";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Sms::SmsMessageFilter> = L"Windows.Devices.Sms.SmsMessageFilter";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Sms::SmsMessageType> = L"Windows.Devices.Sms.SmsMessageType";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Sms::SmsModemErrorCode> = L"Windows.Devices.Sms.SmsModemErrorCode";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Sms::SmsEncodedLength> = L"Windows.Devices.Sms.SmsEncodedLength";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Sms::ISmsAppMessage> = L"Windows.Devices.Sms.ISmsAppMessage";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Sms::ISmsBinaryMessage> = L"Windows.Devices.Sms.ISmsBinaryMessage";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Sms::ISmsBroadcastMessage> = L"Windows.Devices.Sms.ISmsBroadcastMessage";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Sms::ISmsDevice> = L"Windows.Devices.Sms.ISmsDevice";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Sms::ISmsDevice2> = L"Windows.Devices.Sms.ISmsDevice2";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Sms::ISmsDevice2Statics> = L"Windows.Devices.Sms.ISmsDevice2Statics";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Sms::ISmsDeviceMessageStore> = L"Windows.Devices.Sms.ISmsDeviceMessageStore";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Sms::ISmsDeviceStatics> = L"Windows.Devices.Sms.ISmsDeviceStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Sms::ISmsDeviceStatics2> = L"Windows.Devices.Sms.ISmsDeviceStatics2";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Sms::ISmsFilterRule> = L"Windows.Devices.Sms.ISmsFilterRule";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Sms::ISmsFilterRuleFactory> = L"Windows.Devices.Sms.ISmsFilterRuleFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Sms::ISmsFilterRules> = L"Windows.Devices.Sms.ISmsFilterRules";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Sms::ISmsFilterRulesFactory> = L"Windows.Devices.Sms.ISmsFilterRulesFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Sms::ISmsMessage> = L"Windows.Devices.Sms.ISmsMessage";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Sms::ISmsMessageBase> = L"Windows.Devices.Sms.ISmsMessageBase";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Sms::ISmsMessageReceivedEventArgs> = L"Windows.Devices.Sms.ISmsMessageReceivedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Sms::ISmsMessageReceivedTriggerDetails> = L"Windows.Devices.Sms.ISmsMessageReceivedTriggerDetails";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Sms::ISmsMessageRegistration> = L"Windows.Devices.Sms.ISmsMessageRegistration";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Sms::ISmsMessageRegistrationStatics> = L"Windows.Devices.Sms.ISmsMessageRegistrationStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Sms::ISmsReceivedEventDetails> = L"Windows.Devices.Sms.ISmsReceivedEventDetails";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Sms::ISmsReceivedEventDetails2> = L"Windows.Devices.Sms.ISmsReceivedEventDetails2";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Sms::ISmsSendMessageResult> = L"Windows.Devices.Sms.ISmsSendMessageResult";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Sms::ISmsStatusMessage> = L"Windows.Devices.Sms.ISmsStatusMessage";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Sms::ISmsTextMessage> = L"Windows.Devices.Sms.ISmsTextMessage";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Sms::ISmsTextMessage2> = L"Windows.Devices.Sms.ISmsTextMessage2";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Sms::ISmsTextMessageStatics> = L"Windows.Devices.Sms.ISmsTextMessageStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Sms::ISmsVoicemailMessage> = L"Windows.Devices.Sms.ISmsVoicemailMessage";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Sms::ISmsWapMessage> = L"Windows.Devices.Sms.ISmsWapMessage";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Sms::SmsDeviceStatusChangedEventHandler> = L"Windows.Devices.Sms.SmsDeviceStatusChangedEventHandler";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Sms::SmsMessageReceivedEventHandler> = L"Windows.Devices.Sms.SmsMessageReceivedEventHandler";
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Sms::ISmsAppMessage>{ 0xE8BB8494,0xD3A0,0x4A0A,{ 0x86,0xD7,0x29,0x10,0x33,0xA8,0xCF,0x54 } }; // E8BB8494-D3A0-4A0A-86D7-291033A8CF54
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Sms::ISmsBinaryMessage>{ 0x5BF4E813,0x3B53,0x4C6E,{ 0xB6,0x1A,0xD8,0x6A,0x63,0x75,0x56,0x50 } }; // 5BF4E813-3B53-4C6E-B61A-D86A63755650
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Sms::ISmsBroadcastMessage>{ 0x75AEBBF1,0xE4B7,0x4874,{ 0xA0,0x9C,0x29,0x56,0xE5,0x92,0xF9,0x57 } }; // 75AEBBF1-E4B7-4874-A09C-2956E592F957
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Sms::ISmsDevice>{ 0x091791ED,0x872B,0x4EEC,{ 0x9C,0x72,0xAB,0x11,0x62,0x7B,0x34,0xEC } }; // 091791ED-872B-4EEC-9C72-AB11627B34EC
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Sms::ISmsDevice2>{ 0xBD8A5C13,0xE522,0x46CB,{ 0xB8,0xD5,0x9E,0xAD,0x30,0xFB,0x6C,0x47 } }; // BD8A5C13-E522-46CB-B8D5-9EAD30FB6C47
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Sms::ISmsDevice2Statics>{ 0x65C78325,0x1031,0x491E,{ 0x8F,0xB6,0xEF,0x99,0x91,0xAF,0xE3,0x63 } }; // 65C78325-1031-491E-8FB6-EF9991AFE363
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Sms::ISmsDeviceMessageStore>{ 0x9889F253,0xF188,0x4427,{ 0x8D,0x54,0xCE,0x0C,0x24,0x23,0xC5,0xC1 } }; // 9889F253-F188-4427-8D54-CE0C2423C5C1
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Sms::ISmsDeviceStatics>{ 0xF88D07EA,0xD815,0x4DD1,{ 0xA2,0x34,0x45,0x20,0xCE,0x46,0x04,0xA4 } }; // F88D07EA-D815-4DD1-A234-4520CE4604A4
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Sms::ISmsDeviceStatics2>{ 0x2CA11C87,0x0873,0x4CAF,{ 0x8A,0x7D,0xBD,0x47,0x1E,0x85,0x86,0xD1 } }; // 2CA11C87-0873-4CAF-8A7D-BD471E8586D1
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Sms::ISmsFilterRule>{ 0x40E32FAE,0xB049,0x4FBC,{ 0xAF,0xE9,0xE2,0xA6,0x10,0xEF,0xF5,0x5C } }; // 40E32FAE-B049-4FBC-AFE9-E2A610EFF55C
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Sms::ISmsFilterRuleFactory>{ 0x00C36508,0x6296,0x4F29,{ 0x9A,0xAD,0x89,0x20,0xCE,0xBA,0x3C,0xE8 } }; // 00C36508-6296-4F29-9AAD-8920CEBA3CE8
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Sms::ISmsFilterRules>{ 0x4E47EAFB,0x79CD,0x4881,{ 0x98,0x94,0x55,0xA4,0x13,0x5B,0x23,0xFA } }; // 4E47EAFB-79CD-4881-9894-55A4135B23FA
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Sms::ISmsFilterRulesFactory>{ 0xA09924ED,0x6E2E,0x4530,{ 0x9F,0xDE,0x46,0x5D,0x02,0xEE,0xD0,0x0E } }; // A09924ED-6E2E-4530-9FDE-465D02EED00E
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Sms::ISmsMessage>{ 0xED3C5E28,0x6984,0x4B07,{ 0x81,0x1D,0x8D,0x59,0x06,0xED,0x3C,0xEA } }; // ED3C5E28-6984-4B07-811D-8D5906ED3CEA
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Sms::ISmsMessageBase>{ 0x2CF0FE30,0xFE50,0x4FC6,{ 0xAA,0x88,0x4C,0xCF,0xE2,0x7A,0x29,0xEA } }; // 2CF0FE30-FE50-4FC6-AA88-4CCFE27A29EA
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Sms::ISmsMessageReceivedEventArgs>{ 0x08E80A98,0xB8E5,0x41C1,{ 0xA3,0xD8,0xD3,0xAB,0xFA,0xE2,0x26,0x75 } }; // 08E80A98-B8E5-41C1-A3D8-D3ABFAE22675
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Sms::ISmsMessageReceivedTriggerDetails>{ 0x2BCFCBD4,0x2657,0x4128,{ 0xAD,0x5F,0xE3,0x87,0x71,0x32,0xBD,0xB1 } }; // 2BCFCBD4-2657-4128-AD5F-E3877132BDB1
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Sms::ISmsMessageRegistration>{ 0x1720503E,0xF34F,0x446B,{ 0x83,0xB3,0x0F,0xF1,0x99,0x23,0xB4,0x09 } }; // 1720503E-F34F-446B-83B3-0FF19923B409
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Sms::ISmsMessageRegistrationStatics>{ 0x63A05464,0x2898,0x4778,{ 0xA0,0x3C,0x6F,0x99,0x49,0x07,0xD6,0x3A } }; // 63A05464-2898-4778-A03C-6F994907D63A
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Sms::ISmsReceivedEventDetails>{ 0x5BB50F15,0xE46D,0x4C82,{ 0x84,0x7D,0x5A,0x03,0x04,0xC1,0xD5,0x3D } }; // 5BB50F15-E46D-4C82-847D-5A0304C1D53D
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Sms::ISmsReceivedEventDetails2>{ 0x40E05C86,0xA7B4,0x4771,{ 0x9A,0xE7,0x0B,0x5F,0xFB,0x12,0xC0,0x3A } }; // 40E05C86-A7B4-4771-9AE7-0B5FFB12C03A
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Sms::ISmsSendMessageResult>{ 0xDB139AF2,0x78C9,0x4FEB,{ 0x96,0x22,0x45,0x23,0x28,0x08,0x8D,0x62 } }; // DB139AF2-78C9-4FEB-9622-452328088D62
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Sms::ISmsStatusMessage>{ 0xE6D28342,0xB70B,0x4677,{ 0x93,0x79,0xC9,0x78,0x3F,0xDF,0xF8,0xF4 } }; // E6D28342-B70B-4677-9379-C9783FDFF8F4
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Sms::ISmsTextMessage>{ 0xD61C904C,0xA495,0x487F,{ 0x9A,0x6F,0x97,0x15,0x48,0xC5,0xBC,0x9F } }; // D61C904C-A495-487F-9A6F-971548C5BC9F
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Sms::ISmsTextMessage2>{ 0x22A0D893,0x4555,0x4755,{ 0xB5,0xA1,0xE7,0xFD,0x84,0x95,0x5F,0x8D } }; // 22A0D893-4555-4755-B5A1-E7FD84955F8D
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Sms::ISmsTextMessageStatics>{ 0x7F68C5ED,0x3CCC,0x47A3,{ 0x8C,0x55,0x38,0x0D,0x3B,0x01,0x08,0x92 } }; // 7F68C5ED-3CCC-47A3-8C55-380D3B010892
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Sms::ISmsVoicemailMessage>{ 0x271AA0A6,0x95B1,0x44FF,{ 0xBC,0xB8,0xB8,0xFD,0xD7,0xE0,0x8B,0xC3 } }; // 271AA0A6-95B1-44FF-BCB8-B8FDD7E08BC3
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Sms::ISmsWapMessage>{ 0xCD937743,0x7A55,0x4D3B,{ 0x90,0x21,0xF2,0x2E,0x02,0x2D,0x09,0xC5 } }; // CD937743-7A55-4D3B-9021-F22E022D09C5
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Sms::SmsDeviceStatusChangedEventHandler>{ 0x982B1162,0x3DD7,0x4618,{ 0xAF,0x89,0x0C,0x27,0x2D,0x5D,0x06,0xD8 } }; // 982B1162-3DD7-4618-AF89-0C272D5D06D8
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Sms::SmsMessageReceivedEventHandler>{ 0x0B7AD409,0xEC2D,0x47CE,{ 0xA2,0x53,0x73,0x2B,0xEE,0xEB,0xCA,0xCD } }; // 0B7AD409-EC2D-47CE-A253-732BEEEBCACD
    template <> struct default_interface<winrt::Windows::Devices::Sms::DeleteSmsMessageOperation>{ using type = winrt::Windows::Foundation::IAsyncAction; };
    template <> struct default_interface<winrt::Windows::Devices::Sms::DeleteSmsMessagesOperation>{ using type = winrt::Windows::Foundation::IAsyncAction; };
    template <> struct default_interface<winrt::Windows::Devices::Sms::GetSmsDeviceOperation>{ using type = winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::Sms::SmsDevice>; };
    template <> struct default_interface<winrt::Windows::Devices::Sms::GetSmsMessageOperation>{ using type = winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::Sms::ISmsMessage>; };
    template <> struct default_interface<winrt::Windows::Devices::Sms::GetSmsMessagesOperation>{ using type = winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Devices::Sms::ISmsMessage>, int32_t>; };
    template <> struct default_interface<winrt::Windows::Devices::Sms::SendSmsMessageOperation>{ using type = winrt::Windows::Foundation::IAsyncAction; };
    template <> struct default_interface<winrt::Windows::Devices::Sms::SmsAppMessage>{ using type = winrt::Windows::Devices::Sms::ISmsAppMessage; };
    template <> struct default_interface<winrt::Windows::Devices::Sms::SmsBinaryMessage>{ using type = winrt::Windows::Devices::Sms::ISmsBinaryMessage; };
    template <> struct default_interface<winrt::Windows::Devices::Sms::SmsBroadcastMessage>{ using type = winrt::Windows::Devices::Sms::ISmsBroadcastMessage; };
    template <> struct default_interface<winrt::Windows::Devices::Sms::SmsDevice>{ using type = winrt::Windows::Devices::Sms::ISmsDevice; };
    template <> struct default_interface<winrt::Windows::Devices::Sms::SmsDevice2>{ using type = winrt::Windows::Devices::Sms::ISmsDevice2; };
    template <> struct default_interface<winrt::Windows::Devices::Sms::SmsDeviceMessageStore>{ using type = winrt::Windows::Devices::Sms::ISmsDeviceMessageStore; };
    template <> struct default_interface<winrt::Windows::Devices::Sms::SmsFilterRule>{ using type = winrt::Windows::Devices::Sms::ISmsFilterRule; };
    template <> struct default_interface<winrt::Windows::Devices::Sms::SmsFilterRules>{ using type = winrt::Windows::Devices::Sms::ISmsFilterRules; };
    template <> struct default_interface<winrt::Windows::Devices::Sms::SmsMessageReceivedEventArgs>{ using type = winrt::Windows::Devices::Sms::ISmsMessageReceivedEventArgs; };
    template <> struct default_interface<winrt::Windows::Devices::Sms::SmsMessageReceivedTriggerDetails>{ using type = winrt::Windows::Devices::Sms::ISmsMessageReceivedTriggerDetails; };
    template <> struct default_interface<winrt::Windows::Devices::Sms::SmsMessageRegistration>{ using type = winrt::Windows::Devices::Sms::ISmsMessageRegistration; };
    template <> struct default_interface<winrt::Windows::Devices::Sms::SmsReceivedEventDetails>{ using type = winrt::Windows::Devices::Sms::ISmsReceivedEventDetails; };
    template <> struct default_interface<winrt::Windows::Devices::Sms::SmsSendMessageResult>{ using type = winrt::Windows::Devices::Sms::ISmsSendMessageResult; };
    template <> struct default_interface<winrt::Windows::Devices::Sms::SmsStatusMessage>{ using type = winrt::Windows::Devices::Sms::ISmsStatusMessage; };
    template <> struct default_interface<winrt::Windows::Devices::Sms::SmsTextMessage>{ using type = winrt::Windows::Devices::Sms::ISmsTextMessage; };
    template <> struct default_interface<winrt::Windows::Devices::Sms::SmsTextMessage2>{ using type = winrt::Windows::Devices::Sms::ISmsTextMessage2; };
    template <> struct default_interface<winrt::Windows::Devices::Sms::SmsVoicemailMessage>{ using type = winrt::Windows::Devices::Sms::ISmsVoicemailMessage; };
    template <> struct default_interface<winrt::Windows::Devices::Sms::SmsWapMessage>{ using type = winrt::Windows::Devices::Sms::ISmsWapMessage; };
    template <> struct abi<winrt::Windows::Devices::Sms::ISmsAppMessage>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Timestamp(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_To(void**) noexcept = 0;
            virtual int32_t __stdcall put_To(void*) noexcept = 0;
            virtual int32_t __stdcall get_From(void**) noexcept = 0;
            virtual int32_t __stdcall get_Body(void**) noexcept = 0;
            virtual int32_t __stdcall put_Body(void*) noexcept = 0;
            virtual int32_t __stdcall get_CallbackNumber(void**) noexcept = 0;
            virtual int32_t __stdcall put_CallbackNumber(void*) noexcept = 0;
            virtual int32_t __stdcall get_IsDeliveryNotificationEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsDeliveryNotificationEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_RetryAttemptCount(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_RetryAttemptCount(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Encoding(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Encoding(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_PortNumber(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_PortNumber(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_TeleserviceId(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_TeleserviceId(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_ProtocolId(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ProtocolId(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_BinaryBody(void**) noexcept = 0;
            virtual int32_t __stdcall put_BinaryBody(void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Sms::ISmsBinaryMessage>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Format(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Format(int32_t) noexcept = 0;
            virtual int32_t __stdcall GetData(uint32_t* __valueSize, uint8_t**) noexcept = 0;
            virtual int32_t __stdcall SetData(uint32_t, uint8_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Sms::ISmsBroadcastMessage>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Timestamp(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_To(void**) noexcept = 0;
            virtual int32_t __stdcall get_Body(void**) noexcept = 0;
            virtual int32_t __stdcall get_Channel(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_GeographicalScope(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MessageCode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_UpdateNumber(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_BroadcastType(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_IsEmergencyAlert(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsUserPopupRequested(bool*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Sms::ISmsDevice>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SendMessageAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CalculateLength(void*, struct struct_Windows_Devices_Sms_SmsEncodedLength*) noexcept = 0;
            virtual int32_t __stdcall get_AccountPhoneNumber(void**) noexcept = 0;
            virtual int32_t __stdcall get_CellularClass(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MessageStore(void**) noexcept = 0;
            virtual int32_t __stdcall get_DeviceStatus(int32_t*) noexcept = 0;
            virtual int32_t __stdcall add_SmsMessageReceived(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SmsMessageReceived(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_SmsDeviceStatusChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SmsDeviceStatusChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Sms::ISmsDevice2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SmscAddress(void**) noexcept = 0;
            virtual int32_t __stdcall put_SmscAddress(void*) noexcept = 0;
            virtual int32_t __stdcall get_DeviceId(void**) noexcept = 0;
            virtual int32_t __stdcall get_ParentDeviceId(void**) noexcept = 0;
            virtual int32_t __stdcall get_AccountPhoneNumber(void**) noexcept = 0;
            virtual int32_t __stdcall get_CellularClass(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_DeviceStatus(int32_t*) noexcept = 0;
            virtual int32_t __stdcall CalculateLength(void*, struct struct_Windows_Devices_Sms_SmsEncodedLength*) noexcept = 0;
            virtual int32_t __stdcall SendMessageAndGetResultAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall add_DeviceStatusChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_DeviceStatusChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Sms::ISmsDevice2Statics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDeviceSelector(void**) noexcept = 0;
            virtual int32_t __stdcall FromId(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetDefault(void**) noexcept = 0;
            virtual int32_t __stdcall FromParentId(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Sms::ISmsDeviceMessageStore>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall DeleteMessageAsync(uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall DeleteMessagesAsync(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetMessageAsync(uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetMessagesAsync(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall get_MaxMessages(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Sms::ISmsDeviceStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDeviceSelector(void**) noexcept = 0;
            virtual int32_t __stdcall FromIdAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetDefaultAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Sms::ISmsDeviceStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FromNetworkAccountIdAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Sms::ISmsFilterRule>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MessageType(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ImsiPrefixes(void**) noexcept = 0;
            virtual int32_t __stdcall get_DeviceIds(void**) noexcept = 0;
            virtual int32_t __stdcall get_SenderNumbers(void**) noexcept = 0;
            virtual int32_t __stdcall get_TextMessagePrefixes(void**) noexcept = 0;
            virtual int32_t __stdcall get_PortNumbers(void**) noexcept = 0;
            virtual int32_t __stdcall get_CellularClass(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_CellularClass(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_ProtocolIds(void**) noexcept = 0;
            virtual int32_t __stdcall get_TeleserviceIds(void**) noexcept = 0;
            virtual int32_t __stdcall get_WapApplicationIds(void**) noexcept = 0;
            virtual int32_t __stdcall get_WapContentTypes(void**) noexcept = 0;
            virtual int32_t __stdcall get_BroadcastTypes(void**) noexcept = 0;
            virtual int32_t __stdcall get_BroadcastChannels(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Sms::ISmsFilterRuleFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFilterRule(int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Sms::ISmsFilterRules>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ActionType(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Rules(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Sms::ISmsFilterRulesFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFilterRules(int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Sms::ISmsMessage>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MessageClass(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Sms::ISmsMessageBase>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MessageType(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_DeviceId(void**) noexcept = 0;
            virtual int32_t __stdcall get_CellularClass(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MessageClass(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_SimIccId(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Sms::ISmsMessageReceivedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TextMessage(void**) noexcept = 0;
            virtual int32_t __stdcall get_BinaryMessage(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Sms::ISmsMessageReceivedTriggerDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MessageType(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_TextMessage(void**) noexcept = 0;
            virtual int32_t __stdcall get_WapMessage(void**) noexcept = 0;
            virtual int32_t __stdcall get_AppMessage(void**) noexcept = 0;
            virtual int32_t __stdcall get_BroadcastMessage(void**) noexcept = 0;
            virtual int32_t __stdcall get_VoicemailMessage(void**) noexcept = 0;
            virtual int32_t __stdcall get_StatusMessage(void**) noexcept = 0;
            virtual int32_t __stdcall Drop() noexcept = 0;
            virtual int32_t __stdcall Accept() noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Sms::ISmsMessageRegistration>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(void**) noexcept = 0;
            virtual int32_t __stdcall Unregister() noexcept = 0;
            virtual int32_t __stdcall add_MessageReceived(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_MessageReceived(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Sms::ISmsMessageRegistrationStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AllRegistrations(void**) noexcept = 0;
            virtual int32_t __stdcall Register(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Sms::ISmsReceivedEventDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DeviceId(void**) noexcept = 0;
            virtual int32_t __stdcall get_MessageIndex(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Sms::ISmsReceivedEventDetails2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MessageClass(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_BinaryMessage(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Sms::ISmsSendMessageResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsSuccessful(bool*) noexcept = 0;
            virtual int32_t __stdcall get_MessageReferenceNumbers(void**) noexcept = 0;
            virtual int32_t __stdcall get_CellularClass(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ModemErrorCode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_IsErrorTransient(bool*) noexcept = 0;
            virtual int32_t __stdcall get_NetworkCauseCode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_TransportFailureCause(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Sms::ISmsStatusMessage>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_To(void**) noexcept = 0;
            virtual int32_t __stdcall get_From(void**) noexcept = 0;
            virtual int32_t __stdcall get_Body(void**) noexcept = 0;
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MessageReferenceNumber(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ServiceCenterTimestamp(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_DischargeTime(int64_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Sms::ISmsTextMessage>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Timestamp(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_PartReferenceId(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_PartNumber(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_PartCount(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_To(void**) noexcept = 0;
            virtual int32_t __stdcall put_To(void*) noexcept = 0;
            virtual int32_t __stdcall get_From(void**) noexcept = 0;
            virtual int32_t __stdcall put_From(void*) noexcept = 0;
            virtual int32_t __stdcall get_Body(void**) noexcept = 0;
            virtual int32_t __stdcall put_Body(void*) noexcept = 0;
            virtual int32_t __stdcall get_Encoding(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Encoding(int32_t) noexcept = 0;
            virtual int32_t __stdcall ToBinaryMessages(int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Sms::ISmsTextMessage2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Timestamp(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_To(void**) noexcept = 0;
            virtual int32_t __stdcall put_To(void*) noexcept = 0;
            virtual int32_t __stdcall get_From(void**) noexcept = 0;
            virtual int32_t __stdcall get_Body(void**) noexcept = 0;
            virtual int32_t __stdcall put_Body(void*) noexcept = 0;
            virtual int32_t __stdcall get_Encoding(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Encoding(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_CallbackNumber(void**) noexcept = 0;
            virtual int32_t __stdcall put_CallbackNumber(void*) noexcept = 0;
            virtual int32_t __stdcall get_IsDeliveryNotificationEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsDeliveryNotificationEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_RetryAttemptCount(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_RetryAttemptCount(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_TeleserviceId(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ProtocolId(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Sms::ISmsTextMessageStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FromBinaryMessage(void*, void**) noexcept = 0;
            virtual int32_t __stdcall FromBinaryData(int32_t, uint32_t, uint8_t*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Sms::ISmsVoicemailMessage>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Timestamp(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_To(void**) noexcept = 0;
            virtual int32_t __stdcall get_Body(void**) noexcept = 0;
            virtual int32_t __stdcall get_MessageCount(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Sms::ISmsWapMessage>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Timestamp(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_To(void**) noexcept = 0;
            virtual int32_t __stdcall get_From(void**) noexcept = 0;
            virtual int32_t __stdcall get_ApplicationId(void**) noexcept = 0;
            virtual int32_t __stdcall get_ContentType(void**) noexcept = 0;
            virtual int32_t __stdcall get_BinaryBody(void**) noexcept = 0;
            virtual int32_t __stdcall get_Headers(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Sms::SmsDeviceStatusChangedEventHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Sms::SmsMessageReceivedEventHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*, void*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Devices_Sms_ISmsAppMessage
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::DateTime) Timestamp() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) To() const;
        WINRT_IMPL_AUTO(void) To(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) From() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Body() const;
        WINRT_IMPL_AUTO(void) Body(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) CallbackNumber() const;
        WINRT_IMPL_AUTO(void) CallbackNumber(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsDeliveryNotificationEnabled() const;
        WINRT_IMPL_AUTO(void) IsDeliveryNotificationEnabled(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) RetryAttemptCount() const;
        WINRT_IMPL_AUTO(void) RetryAttemptCount(int32_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Devices::Sms::SmsEncoding) Encoding() const;
        WINRT_IMPL_AUTO(void) Encoding(winrt::Windows::Devices::Sms::SmsEncoding const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) PortNumber() const;
        WINRT_IMPL_AUTO(void) PortNumber(int32_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) TeleserviceId() const;
        WINRT_IMPL_AUTO(void) TeleserviceId(int32_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) ProtocolId() const;
        WINRT_IMPL_AUTO(void) ProtocolId(int32_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Storage::Streams::IBuffer) BinaryBody() const;
        WINRT_IMPL_AUTO(void) BinaryBody(winrt::Windows::Storage::Streams::IBuffer const& value) const;
    };
    template <> struct consume<winrt::Windows::Devices::Sms::ISmsAppMessage>
    {
        template <typename D> using type = consume_Windows_Devices_Sms_ISmsAppMessage<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sms_ISmsBinaryMessage
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Devices::Sms::SmsDataFormat) Format() const;
        WINRT_IMPL_AUTO(void) Format(winrt::Windows::Devices::Sms::SmsDataFormat const& value) const;
        WINRT_IMPL_AUTO(com_array<uint8_t>) GetData() const;
        WINRT_IMPL_AUTO(void) SetData(array_view<uint8_t const> value) const;
    };
    template <> struct consume<winrt::Windows::Devices::Sms::ISmsBinaryMessage>
    {
        template <typename D> using type = consume_Windows_Devices_Sms_ISmsBinaryMessage<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sms_ISmsBroadcastMessage
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::DateTime) Timestamp() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) To() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Body() const;
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) Channel() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Devices::Sms::SmsGeographicalScope) GeographicalScope() const;
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) MessageCode() const;
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) UpdateNumber() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Devices::Sms::SmsBroadcastType) BroadcastType() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsEmergencyAlert() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsUserPopupRequested() const;
    };
    template <> struct consume<winrt::Windows::Devices::Sms::ISmsBroadcastMessage>
    {
        template <typename D> using type = consume_Windows_Devices_Sms_ISmsBroadcastMessage<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sms_ISmsDevice
    {
        WINRT_IMPL_AUTO(winrt::Windows::Devices::Sms::SendSmsMessageOperation) SendMessageAsync(winrt::Windows::Devices::Sms::ISmsMessage const& message) const;
        WINRT_IMPL_AUTO(winrt::Windows::Devices::Sms::SmsEncodedLength) CalculateLength(winrt::Windows::Devices::Sms::SmsTextMessage const& message) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) AccountPhoneNumber() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Devices::Sms::CellularClass) CellularClass() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Devices::Sms::SmsDeviceMessageStore) MessageStore() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Devices::Sms::SmsDeviceStatus) DeviceStatus() const;
        WINRT_IMPL_AUTO(winrt::event_token) SmsMessageReceived(winrt::Windows::Devices::Sms::SmsMessageReceivedEventHandler const& eventHandler) const;
        using SmsMessageReceived_revoker = impl::event_revoker<winrt::Windows::Devices::Sms::ISmsDevice, &impl::abi_t<winrt::Windows::Devices::Sms::ISmsDevice>::remove_SmsMessageReceived>;
        [[nodiscard]] SmsMessageReceived_revoker SmsMessageReceived(auto_revoke_t, winrt::Windows::Devices::Sms::SmsMessageReceivedEventHandler const& eventHandler) const;
        WINRT_IMPL_AUTO(void) SmsMessageReceived(winrt::event_token const& eventCookie) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) SmsDeviceStatusChanged(winrt::Windows::Devices::Sms::SmsDeviceStatusChangedEventHandler const& eventHandler) const;
        using SmsDeviceStatusChanged_revoker = impl::event_revoker<winrt::Windows::Devices::Sms::ISmsDevice, &impl::abi_t<winrt::Windows::Devices::Sms::ISmsDevice>::remove_SmsDeviceStatusChanged>;
        [[nodiscard]] SmsDeviceStatusChanged_revoker SmsDeviceStatusChanged(auto_revoke_t, winrt::Windows::Devices::Sms::SmsDeviceStatusChangedEventHandler const& eventHandler) const;
        WINRT_IMPL_AUTO(void) SmsDeviceStatusChanged(winrt::event_token const& eventCookie) const noexcept;
    };
    template <> struct consume<winrt::Windows::Devices::Sms::ISmsDevice>
    {
        template <typename D> using type = consume_Windows_Devices_Sms_ISmsDevice<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sms_ISmsDevice2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) SmscAddress() const;
        WINRT_IMPL_AUTO(void) SmscAddress(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) DeviceId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) ParentDeviceId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) AccountPhoneNumber() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Devices::Sms::CellularClass) CellularClass() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Devices::Sms::SmsDeviceStatus) DeviceStatus() const;
        WINRT_IMPL_AUTO(winrt::Windows::Devices::Sms::SmsEncodedLength) CalculateLength(winrt::Windows::Devices::Sms::ISmsMessageBase const& message) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::Sms::SmsSendMessageResult>) SendMessageAndGetResultAsync(winrt::Windows::Devices::Sms::ISmsMessageBase const& message) const;
        WINRT_IMPL_AUTO(winrt::event_token) DeviceStatusChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Devices::Sms::SmsDevice2, winrt::Windows::Foundation::IInspectable> const& eventHandler) const;
        using DeviceStatusChanged_revoker = impl::event_revoker<winrt::Windows::Devices::Sms::ISmsDevice2, &impl::abi_t<winrt::Windows::Devices::Sms::ISmsDevice2>::remove_DeviceStatusChanged>;
        [[nodiscard]] DeviceStatusChanged_revoker DeviceStatusChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Devices::Sms::SmsDevice2, winrt::Windows::Foundation::IInspectable> const& eventHandler) const;
        WINRT_IMPL_AUTO(void) DeviceStatusChanged(winrt::event_token const& eventCookie) const noexcept;
    };
    template <> struct consume<winrt::Windows::Devices::Sms::ISmsDevice2>
    {
        template <typename D> using type = consume_Windows_Devices_Sms_ISmsDevice2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sms_ISmsDevice2Statics
    {
        WINRT_IMPL_AUTO(hstring) GetDeviceSelector() const;
        WINRT_IMPL_AUTO(winrt::Windows::Devices::Sms::SmsDevice2) FromId(param::hstring const& deviceId) const;
        WINRT_IMPL_AUTO(winrt::Windows::Devices::Sms::SmsDevice2) GetDefault() const;
        WINRT_IMPL_AUTO(winrt::Windows::Devices::Sms::SmsDevice2) FromParentId(param::hstring const& parentDeviceId) const;
    };
    template <> struct consume<winrt::Windows::Devices::Sms::ISmsDevice2Statics>
    {
        template <typename D> using type = consume_Windows_Devices_Sms_ISmsDevice2Statics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sms_ISmsDeviceMessageStore
    {
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncAction) DeleteMessageAsync(uint32_t messageId) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncAction) DeleteMessagesAsync(winrt::Windows::Devices::Sms::SmsMessageFilter const& messageFilter) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::Sms::ISmsMessage>) GetMessageAsync(uint32_t messageId) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Devices::Sms::ISmsMessage>, int32_t>) GetMessagesAsync(winrt::Windows::Devices::Sms::SmsMessageFilter const& messageFilter) const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) MaxMessages() const;
    };
    template <> struct consume<winrt::Windows::Devices::Sms::ISmsDeviceMessageStore>
    {
        template <typename D> using type = consume_Windows_Devices_Sms_ISmsDeviceMessageStore<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sms_ISmsDeviceStatics
    {
        WINRT_IMPL_AUTO(hstring) GetDeviceSelector() const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::Sms::SmsDevice>) FromIdAsync(param::hstring const& deviceId) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::Sms::SmsDevice>) GetDefaultAsync() const;
    };
    template <> struct consume<winrt::Windows::Devices::Sms::ISmsDeviceStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Sms_ISmsDeviceStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sms_ISmsDeviceStatics2
    {
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::Sms::SmsDevice>) FromNetworkAccountIdAsync(param::hstring const& networkAccountId) const;
    };
    template <> struct consume<winrt::Windows::Devices::Sms::ISmsDeviceStatics2>
    {
        template <typename D> using type = consume_Windows_Devices_Sms_ISmsDeviceStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sms_ISmsFilterRule
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Devices::Sms::SmsMessageType) MessageType() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVector<hstring>) ImsiPrefixes() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVector<hstring>) DeviceIds() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVector<hstring>) SenderNumbers() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVector<hstring>) TextMessagePrefixes() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVector<int32_t>) PortNumbers() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Devices::Sms::CellularClass) CellularClass() const;
        WINRT_IMPL_AUTO(void) CellularClass(winrt::Windows::Devices::Sms::CellularClass const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVector<int32_t>) ProtocolIds() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVector<int32_t>) TeleserviceIds() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVector<hstring>) WapApplicationIds() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVector<hstring>) WapContentTypes() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Devices::Sms::SmsBroadcastType>) BroadcastTypes() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVector<int32_t>) BroadcastChannels() const;
    };
    template <> struct consume<winrt::Windows::Devices::Sms::ISmsFilterRule>
    {
        template <typename D> using type = consume_Windows_Devices_Sms_ISmsFilterRule<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sms_ISmsFilterRuleFactory
    {
        WINRT_IMPL_AUTO(winrt::Windows::Devices::Sms::SmsFilterRule) CreateFilterRule(winrt::Windows::Devices::Sms::SmsMessageType const& messageType) const;
    };
    template <> struct consume<winrt::Windows::Devices::Sms::ISmsFilterRuleFactory>
    {
        template <typename D> using type = consume_Windows_Devices_Sms_ISmsFilterRuleFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sms_ISmsFilterRules
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Devices::Sms::SmsFilterActionType) ActionType() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Devices::Sms::SmsFilterRule>) Rules() const;
    };
    template <> struct consume<winrt::Windows::Devices::Sms::ISmsFilterRules>
    {
        template <typename D> using type = consume_Windows_Devices_Sms_ISmsFilterRules<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sms_ISmsFilterRulesFactory
    {
        WINRT_IMPL_AUTO(winrt::Windows::Devices::Sms::SmsFilterRules) CreateFilterRules(winrt::Windows::Devices::Sms::SmsFilterActionType const& actionType) const;
    };
    template <> struct consume<winrt::Windows::Devices::Sms::ISmsFilterRulesFactory>
    {
        template <typename D> using type = consume_Windows_Devices_Sms_ISmsFilterRulesFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sms_ISmsMessage
    {
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) Id() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Devices::Sms::SmsMessageClass) MessageClass() const;
    };
    template <> struct consume<winrt::Windows::Devices::Sms::ISmsMessage>
    {
        template <typename D> using type = consume_Windows_Devices_Sms_ISmsMessage<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sms_ISmsMessageBase
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Devices::Sms::SmsMessageType) MessageType() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) DeviceId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Devices::Sms::CellularClass) CellularClass() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Devices::Sms::SmsMessageClass) MessageClass() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) SimIccId() const;
    };
    template <> struct consume<winrt::Windows::Devices::Sms::ISmsMessageBase>
    {
        template <typename D> using type = consume_Windows_Devices_Sms_ISmsMessageBase<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sms_ISmsMessageReceivedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Devices::Sms::SmsTextMessage) TextMessage() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Devices::Sms::SmsBinaryMessage) BinaryMessage() const;
    };
    template <> struct consume<winrt::Windows::Devices::Sms::ISmsMessageReceivedEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_Sms_ISmsMessageReceivedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sms_ISmsMessageReceivedTriggerDetails
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Devices::Sms::SmsMessageType) MessageType() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Devices::Sms::SmsTextMessage2) TextMessage() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Devices::Sms::SmsWapMessage) WapMessage() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Devices::Sms::SmsAppMessage) AppMessage() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Devices::Sms::SmsBroadcastMessage) BroadcastMessage() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Devices::Sms::SmsVoicemailMessage) VoicemailMessage() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Devices::Sms::SmsStatusMessage) StatusMessage() const;
        WINRT_IMPL_AUTO(void) Drop() const;
        WINRT_IMPL_AUTO(void) Accept() const;
    };
    template <> struct consume<winrt::Windows::Devices::Sms::ISmsMessageReceivedTriggerDetails>
    {
        template <typename D> using type = consume_Windows_Devices_Sms_ISmsMessageReceivedTriggerDetails<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sms_ISmsMessageRegistration
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Id() const;
        WINRT_IMPL_AUTO(void) Unregister() const;
        WINRT_IMPL_AUTO(winrt::event_token) MessageReceived(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Devices::Sms::SmsMessageRegistration, winrt::Windows::Devices::Sms::SmsMessageReceivedTriggerDetails> const& eventHandler) const;
        using MessageReceived_revoker = impl::event_revoker<winrt::Windows::Devices::Sms::ISmsMessageRegistration, &impl::abi_t<winrt::Windows::Devices::Sms::ISmsMessageRegistration>::remove_MessageReceived>;
        [[nodiscard]] MessageReceived_revoker MessageReceived(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Devices::Sms::SmsMessageRegistration, winrt::Windows::Devices::Sms::SmsMessageReceivedTriggerDetails> const& eventHandler) const;
        WINRT_IMPL_AUTO(void) MessageReceived(winrt::event_token const& eventCookie) const noexcept;
    };
    template <> struct consume<winrt::Windows::Devices::Sms::ISmsMessageRegistration>
    {
        template <typename D> using type = consume_Windows_Devices_Sms_ISmsMessageRegistration<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sms_ISmsMessageRegistrationStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Devices::Sms::SmsMessageRegistration>) AllRegistrations() const;
        WINRT_IMPL_AUTO(winrt::Windows::Devices::Sms::SmsMessageRegistration) Register(param::hstring const& id, winrt::Windows::Devices::Sms::SmsFilterRules const& filterRules) const;
    };
    template <> struct consume<winrt::Windows::Devices::Sms::ISmsMessageRegistrationStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Sms_ISmsMessageRegistrationStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sms_ISmsReceivedEventDetails
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) DeviceId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) MessageIndex() const;
    };
    template <> struct consume<winrt::Windows::Devices::Sms::ISmsReceivedEventDetails>
    {
        template <typename D> using type = consume_Windows_Devices_Sms_ISmsReceivedEventDetails<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sms_ISmsReceivedEventDetails2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Devices::Sms::SmsMessageClass) MessageClass() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Devices::Sms::SmsBinaryMessage) BinaryMessage() const;
    };
    template <> struct consume<winrt::Windows::Devices::Sms::ISmsReceivedEventDetails2>
    {
        template <typename D> using type = consume_Windows_Devices_Sms_ISmsReceivedEventDetails2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sms_ISmsSendMessageResult
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsSuccessful() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVectorView<int32_t>) MessageReferenceNumbers() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Devices::Sms::CellularClass) CellularClass() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Devices::Sms::SmsModemErrorCode) ModemErrorCode() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsErrorTransient() const;
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) NetworkCauseCode() const;
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) TransportFailureCause() const;
    };
    template <> struct consume<winrt::Windows::Devices::Sms::ISmsSendMessageResult>
    {
        template <typename D> using type = consume_Windows_Devices_Sms_ISmsSendMessageResult<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sms_ISmsStatusMessage
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) To() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) From() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Body() const;
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) Status() const;
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) MessageReferenceNumber() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::DateTime) ServiceCenterTimestamp() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::DateTime) DischargeTime() const;
    };
    template <> struct consume<winrt::Windows::Devices::Sms::ISmsStatusMessage>
    {
        template <typename D> using type = consume_Windows_Devices_Sms_ISmsStatusMessage<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sms_ISmsTextMessage
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::DateTime) Timestamp() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) PartReferenceId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) PartNumber() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) PartCount() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) To() const;
        WINRT_IMPL_AUTO(void) To(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) From() const;
        WINRT_IMPL_AUTO(void) From(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Body() const;
        WINRT_IMPL_AUTO(void) Body(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Devices::Sms::SmsEncoding) Encoding() const;
        WINRT_IMPL_AUTO(void) Encoding(winrt::Windows::Devices::Sms::SmsEncoding const& value) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Devices::Sms::ISmsBinaryMessage>) ToBinaryMessages(winrt::Windows::Devices::Sms::SmsDataFormat const& format) const;
    };
    template <> struct consume<winrt::Windows::Devices::Sms::ISmsTextMessage>
    {
        template <typename D> using type = consume_Windows_Devices_Sms_ISmsTextMessage<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sms_ISmsTextMessage2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::DateTime) Timestamp() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) To() const;
        WINRT_IMPL_AUTO(void) To(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) From() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Body() const;
        WINRT_IMPL_AUTO(void) Body(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Devices::Sms::SmsEncoding) Encoding() const;
        WINRT_IMPL_AUTO(void) Encoding(winrt::Windows::Devices::Sms::SmsEncoding const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) CallbackNumber() const;
        WINRT_IMPL_AUTO(void) CallbackNumber(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsDeliveryNotificationEnabled() const;
        WINRT_IMPL_AUTO(void) IsDeliveryNotificationEnabled(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) RetryAttemptCount() const;
        WINRT_IMPL_AUTO(void) RetryAttemptCount(int32_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) TeleserviceId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) ProtocolId() const;
    };
    template <> struct consume<winrt::Windows::Devices::Sms::ISmsTextMessage2>
    {
        template <typename D> using type = consume_Windows_Devices_Sms_ISmsTextMessage2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sms_ISmsTextMessageStatics
    {
        WINRT_IMPL_AUTO(winrt::Windows::Devices::Sms::SmsTextMessage) FromBinaryMessage(winrt::Windows::Devices::Sms::SmsBinaryMessage const& binaryMessage) const;
        WINRT_IMPL_AUTO(winrt::Windows::Devices::Sms::SmsTextMessage) FromBinaryData(winrt::Windows::Devices::Sms::SmsDataFormat const& format, array_view<uint8_t const> value) const;
    };
    template <> struct consume<winrt::Windows::Devices::Sms::ISmsTextMessageStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Sms_ISmsTextMessageStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sms_ISmsVoicemailMessage
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::DateTime) Timestamp() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) To() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Body() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::IReference<int32_t>) MessageCount() const;
    };
    template <> struct consume<winrt::Windows::Devices::Sms::ISmsVoicemailMessage>
    {
        template <typename D> using type = consume_Windows_Devices_Sms_ISmsVoicemailMessage<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sms_ISmsWapMessage
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::DateTime) Timestamp() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) To() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) From() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) ApplicationId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) ContentType() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Storage::Streams::IBuffer) BinaryBody() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IMap<hstring, hstring>) Headers() const;
    };
    template <> struct consume<winrt::Windows::Devices::Sms::ISmsWapMessage>
    {
        template <typename D> using type = consume_Windows_Devices_Sms_ISmsWapMessage<D>;
    };
    struct struct_Windows_Devices_Sms_SmsEncodedLength
    {
        uint32_t SegmentCount;
        uint32_t CharacterCountLastSegment;
        uint32_t CharactersPerSegment;
        uint32_t ByteCountLastSegment;
        uint32_t BytesPerSegment;
    };
    template <> struct abi<Windows::Devices::Sms::SmsEncodedLength>
    {
        using type = struct_Windows_Devices_Sms_SmsEncodedLength;
    };
}
#endif
