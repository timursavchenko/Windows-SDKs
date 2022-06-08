// C++/WinRT v2.0.200609.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Devices_WiFiDirect_0_H
#define WINRT_Windows_Devices_WiFiDirect_0_H
WINRT_EXPORT namespace winrt::Windows::Devices::Enumeration
{
    struct DeviceInformation;
    enum class DevicePairingKinds : uint32_t;
}
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    template <typename TResult> struct __declspec(empty_bases) IAsyncOperation;
    template <typename TSender, typename TResult> struct __declspec(empty_bases) TypedEventHandler;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct __declspec(empty_bases) IVectorView;
    template <typename T> struct __declspec(empty_bases) IVector;
}
WINRT_EXPORT namespace winrt::Windows::Networking
{
    struct EndpointPair;
}
WINRT_EXPORT namespace winrt::Windows::Security::Credentials
{
    struct PasswordCredential;
}
WINRT_EXPORT namespace winrt::Windows::Storage::Streams
{
    struct IBuffer;
}
WINRT_EXPORT namespace winrt::Windows::Devices::WiFiDirect
{
    enum class WiFiDirectAdvertisementListenStateDiscoverability : int32_t
    {
        None = 0,
        Normal = 1,
        Intensive = 2,
    };
    enum class WiFiDirectAdvertisementPublisherStatus : int32_t
    {
        Created = 0,
        Started = 1,
        Stopped = 2,
        Aborted = 3,
    };
    enum class WiFiDirectConfigurationMethod : int32_t
    {
        ProvidePin = 0,
        DisplayPin = 1,
        PushButton = 2,
    };
    enum class WiFiDirectConnectionStatus : int32_t
    {
        Disconnected = 0,
        Connected = 1,
    };
    enum class WiFiDirectDeviceSelectorType : int32_t
    {
        DeviceInterface = 0,
        AssociationEndpoint = 1,
    };
    enum class WiFiDirectError : int32_t
    {
        Success = 0,
        RadioNotAvailable = 1,
        ResourceInUse = 2,
    };
    enum class WiFiDirectPairingProcedure : int32_t
    {
        GroupOwnerNegotiation = 0,
        Invitation = 1,
    };
    struct IWiFiDirectAdvertisement;
    struct IWiFiDirectAdvertisement2;
    struct IWiFiDirectAdvertisementPublisher;
    struct IWiFiDirectAdvertisementPublisherStatusChangedEventArgs;
    struct IWiFiDirectConnectionListener;
    struct IWiFiDirectConnectionParameters;
    struct IWiFiDirectConnectionParameters2;
    struct IWiFiDirectConnectionParametersStatics;
    struct IWiFiDirectConnectionRequest;
    struct IWiFiDirectConnectionRequestedEventArgs;
    struct IWiFiDirectDevice;
    struct IWiFiDirectDeviceStatics;
    struct IWiFiDirectDeviceStatics2;
    struct IWiFiDirectInformationElement;
    struct IWiFiDirectInformationElementStatics;
    struct IWiFiDirectLegacySettings;
    struct WiFiDirectAdvertisement;
    struct WiFiDirectAdvertisementPublisher;
    struct WiFiDirectAdvertisementPublisherStatusChangedEventArgs;
    struct WiFiDirectConnectionListener;
    struct WiFiDirectConnectionParameters;
    struct WiFiDirectConnectionRequest;
    struct WiFiDirectConnectionRequestedEventArgs;
    struct WiFiDirectDevice;
    struct WiFiDirectInformationElement;
    struct WiFiDirectLegacySettings;
}
namespace winrt::impl
{
    template <> struct category<Windows::Devices::WiFiDirect::IWiFiDirectAdvertisement>{ using type = interface_category; };
    template <> struct category<Windows::Devices::WiFiDirect::IWiFiDirectAdvertisement2>{ using type = interface_category; };
    template <> struct category<Windows::Devices::WiFiDirect::IWiFiDirectAdvertisementPublisher>{ using type = interface_category; };
    template <> struct category<Windows::Devices::WiFiDirect::IWiFiDirectAdvertisementPublisherStatusChangedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Devices::WiFiDirect::IWiFiDirectConnectionListener>{ using type = interface_category; };
    template <> struct category<Windows::Devices::WiFiDirect::IWiFiDirectConnectionParameters>{ using type = interface_category; };
    template <> struct category<Windows::Devices::WiFiDirect::IWiFiDirectConnectionParameters2>{ using type = interface_category; };
    template <> struct category<Windows::Devices::WiFiDirect::IWiFiDirectConnectionParametersStatics>{ using type = interface_category; };
    template <> struct category<Windows::Devices::WiFiDirect::IWiFiDirectConnectionRequest>{ using type = interface_category; };
    template <> struct category<Windows::Devices::WiFiDirect::IWiFiDirectConnectionRequestedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Devices::WiFiDirect::IWiFiDirectDevice>{ using type = interface_category; };
    template <> struct category<Windows::Devices::WiFiDirect::IWiFiDirectDeviceStatics>{ using type = interface_category; };
    template <> struct category<Windows::Devices::WiFiDirect::IWiFiDirectDeviceStatics2>{ using type = interface_category; };
    template <> struct category<Windows::Devices::WiFiDirect::IWiFiDirectInformationElement>{ using type = interface_category; };
    template <> struct category<Windows::Devices::WiFiDirect::IWiFiDirectInformationElementStatics>{ using type = interface_category; };
    template <> struct category<Windows::Devices::WiFiDirect::IWiFiDirectLegacySettings>{ using type = interface_category; };
    template <> struct category<Windows::Devices::WiFiDirect::WiFiDirectAdvertisement>{ using type = class_category; };
    template <> struct category<Windows::Devices::WiFiDirect::WiFiDirectAdvertisementPublisher>{ using type = class_category; };
    template <> struct category<Windows::Devices::WiFiDirect::WiFiDirectAdvertisementPublisherStatusChangedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Devices::WiFiDirect::WiFiDirectConnectionListener>{ using type = class_category; };
    template <> struct category<Windows::Devices::WiFiDirect::WiFiDirectConnectionParameters>{ using type = class_category; };
    template <> struct category<Windows::Devices::WiFiDirect::WiFiDirectConnectionRequest>{ using type = class_category; };
    template <> struct category<Windows::Devices::WiFiDirect::WiFiDirectConnectionRequestedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Devices::WiFiDirect::WiFiDirectDevice>{ using type = class_category; };
    template <> struct category<Windows::Devices::WiFiDirect::WiFiDirectInformationElement>{ using type = class_category; };
    template <> struct category<Windows::Devices::WiFiDirect::WiFiDirectLegacySettings>{ using type = class_category; };
    template <> struct category<Windows::Devices::WiFiDirect::WiFiDirectAdvertisementListenStateDiscoverability>{ using type = enum_category; };
    template <> struct category<Windows::Devices::WiFiDirect::WiFiDirectAdvertisementPublisherStatus>{ using type = enum_category; };
    template <> struct category<Windows::Devices::WiFiDirect::WiFiDirectConfigurationMethod>{ using type = enum_category; };
    template <> struct category<Windows::Devices::WiFiDirect::WiFiDirectConnectionStatus>{ using type = enum_category; };
    template <> struct category<Windows::Devices::WiFiDirect::WiFiDirectDeviceSelectorType>{ using type = enum_category; };
    template <> struct category<Windows::Devices::WiFiDirect::WiFiDirectError>{ using type = enum_category; };
    template <> struct category<Windows::Devices::WiFiDirect::WiFiDirectPairingProcedure>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<Windows::Devices::WiFiDirect::WiFiDirectAdvertisement> = L"Windows.Devices.WiFiDirect.WiFiDirectAdvertisement";
    template <> inline constexpr auto& name_v<Windows::Devices::WiFiDirect::WiFiDirectAdvertisementPublisher> = L"Windows.Devices.WiFiDirect.WiFiDirectAdvertisementPublisher";
    template <> inline constexpr auto& name_v<Windows::Devices::WiFiDirect::WiFiDirectAdvertisementPublisherStatusChangedEventArgs> = L"Windows.Devices.WiFiDirect.WiFiDirectAdvertisementPublisherStatusChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Devices::WiFiDirect::WiFiDirectConnectionListener> = L"Windows.Devices.WiFiDirect.WiFiDirectConnectionListener";
    template <> inline constexpr auto& name_v<Windows::Devices::WiFiDirect::WiFiDirectConnectionParameters> = L"Windows.Devices.WiFiDirect.WiFiDirectConnectionParameters";
    template <> inline constexpr auto& name_v<Windows::Devices::WiFiDirect::WiFiDirectConnectionRequest> = L"Windows.Devices.WiFiDirect.WiFiDirectConnectionRequest";
    template <> inline constexpr auto& name_v<Windows::Devices::WiFiDirect::WiFiDirectConnectionRequestedEventArgs> = L"Windows.Devices.WiFiDirect.WiFiDirectConnectionRequestedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Devices::WiFiDirect::WiFiDirectDevice> = L"Windows.Devices.WiFiDirect.WiFiDirectDevice";
    template <> inline constexpr auto& name_v<Windows::Devices::WiFiDirect::WiFiDirectInformationElement> = L"Windows.Devices.WiFiDirect.WiFiDirectInformationElement";
    template <> inline constexpr auto& name_v<Windows::Devices::WiFiDirect::WiFiDirectLegacySettings> = L"Windows.Devices.WiFiDirect.WiFiDirectLegacySettings";
    template <> inline constexpr auto& name_v<Windows::Devices::WiFiDirect::WiFiDirectAdvertisementListenStateDiscoverability> = L"Windows.Devices.WiFiDirect.WiFiDirectAdvertisementListenStateDiscoverability";
    template <> inline constexpr auto& name_v<Windows::Devices::WiFiDirect::WiFiDirectAdvertisementPublisherStatus> = L"Windows.Devices.WiFiDirect.WiFiDirectAdvertisementPublisherStatus";
    template <> inline constexpr auto& name_v<Windows::Devices::WiFiDirect::WiFiDirectConfigurationMethod> = L"Windows.Devices.WiFiDirect.WiFiDirectConfigurationMethod";
    template <> inline constexpr auto& name_v<Windows::Devices::WiFiDirect::WiFiDirectConnectionStatus> = L"Windows.Devices.WiFiDirect.WiFiDirectConnectionStatus";
    template <> inline constexpr auto& name_v<Windows::Devices::WiFiDirect::WiFiDirectDeviceSelectorType> = L"Windows.Devices.WiFiDirect.WiFiDirectDeviceSelectorType";
    template <> inline constexpr auto& name_v<Windows::Devices::WiFiDirect::WiFiDirectError> = L"Windows.Devices.WiFiDirect.WiFiDirectError";
    template <> inline constexpr auto& name_v<Windows::Devices::WiFiDirect::WiFiDirectPairingProcedure> = L"Windows.Devices.WiFiDirect.WiFiDirectPairingProcedure";
    template <> inline constexpr auto& name_v<Windows::Devices::WiFiDirect::IWiFiDirectAdvertisement> = L"Windows.Devices.WiFiDirect.IWiFiDirectAdvertisement";
    template <> inline constexpr auto& name_v<Windows::Devices::WiFiDirect::IWiFiDirectAdvertisement2> = L"Windows.Devices.WiFiDirect.IWiFiDirectAdvertisement2";
    template <> inline constexpr auto& name_v<Windows::Devices::WiFiDirect::IWiFiDirectAdvertisementPublisher> = L"Windows.Devices.WiFiDirect.IWiFiDirectAdvertisementPublisher";
    template <> inline constexpr auto& name_v<Windows::Devices::WiFiDirect::IWiFiDirectAdvertisementPublisherStatusChangedEventArgs> = L"Windows.Devices.WiFiDirect.IWiFiDirectAdvertisementPublisherStatusChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Devices::WiFiDirect::IWiFiDirectConnectionListener> = L"Windows.Devices.WiFiDirect.IWiFiDirectConnectionListener";
    template <> inline constexpr auto& name_v<Windows::Devices::WiFiDirect::IWiFiDirectConnectionParameters> = L"Windows.Devices.WiFiDirect.IWiFiDirectConnectionParameters";
    template <> inline constexpr auto& name_v<Windows::Devices::WiFiDirect::IWiFiDirectConnectionParameters2> = L"Windows.Devices.WiFiDirect.IWiFiDirectConnectionParameters2";
    template <> inline constexpr auto& name_v<Windows::Devices::WiFiDirect::IWiFiDirectConnectionParametersStatics> = L"Windows.Devices.WiFiDirect.IWiFiDirectConnectionParametersStatics";
    template <> inline constexpr auto& name_v<Windows::Devices::WiFiDirect::IWiFiDirectConnectionRequest> = L"Windows.Devices.WiFiDirect.IWiFiDirectConnectionRequest";
    template <> inline constexpr auto& name_v<Windows::Devices::WiFiDirect::IWiFiDirectConnectionRequestedEventArgs> = L"Windows.Devices.WiFiDirect.IWiFiDirectConnectionRequestedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Devices::WiFiDirect::IWiFiDirectDevice> = L"Windows.Devices.WiFiDirect.IWiFiDirectDevice";
    template <> inline constexpr auto& name_v<Windows::Devices::WiFiDirect::IWiFiDirectDeviceStatics> = L"Windows.Devices.WiFiDirect.IWiFiDirectDeviceStatics";
    template <> inline constexpr auto& name_v<Windows::Devices::WiFiDirect::IWiFiDirectDeviceStatics2> = L"Windows.Devices.WiFiDirect.IWiFiDirectDeviceStatics2";
    template <> inline constexpr auto& name_v<Windows::Devices::WiFiDirect::IWiFiDirectInformationElement> = L"Windows.Devices.WiFiDirect.IWiFiDirectInformationElement";
    template <> inline constexpr auto& name_v<Windows::Devices::WiFiDirect::IWiFiDirectInformationElementStatics> = L"Windows.Devices.WiFiDirect.IWiFiDirectInformationElementStatics";
    template <> inline constexpr auto& name_v<Windows::Devices::WiFiDirect::IWiFiDirectLegacySettings> = L"Windows.Devices.WiFiDirect.IWiFiDirectLegacySettings";
    template <> inline constexpr guid guid_v<Windows::Devices::WiFiDirect::IWiFiDirectAdvertisement>{ 0xAB511A2D,0x2A06,0x49A1,{ 0xA5,0x84,0x61,0x43,0x5C,0x79,0x05,0xA6 } }; // AB511A2D-2A06-49A1-A584-61435C7905A6
    template <> inline constexpr guid guid_v<Windows::Devices::WiFiDirect::IWiFiDirectAdvertisement2>{ 0xB759AA46,0xD816,0x491B,{ 0x91,0x7A,0xB4,0x0D,0x7D,0xC4,0x03,0xA2 } }; // B759AA46-D816-491B-917A-B40D7DC403A2
    template <> inline constexpr guid guid_v<Windows::Devices::WiFiDirect::IWiFiDirectAdvertisementPublisher>{ 0xB35A2D1A,0x9B1F,0x45D9,{ 0x92,0x5A,0x69,0x4D,0x66,0xDF,0x68,0xEF } }; // B35A2D1A-9B1F-45D9-925A-694D66DF68EF
    template <> inline constexpr guid guid_v<Windows::Devices::WiFiDirect::IWiFiDirectAdvertisementPublisherStatusChangedEventArgs>{ 0xAAFDE53C,0x5481,0x46E6,{ 0x90,0xDD,0x32,0x11,0x65,0x18,0xF1,0x92 } }; // AAFDE53C-5481-46E6-90DD-32116518F192
    template <> inline constexpr guid guid_v<Windows::Devices::WiFiDirect::IWiFiDirectConnectionListener>{ 0x699C1B0D,0x8D13,0x4EE9,{ 0xB9,0xEC,0x9C,0x72,0xF8,0x25,0x1F,0x7D } }; // 699C1B0D-8D13-4EE9-B9EC-9C72F8251F7D
    template <> inline constexpr guid guid_v<Windows::Devices::WiFiDirect::IWiFiDirectConnectionParameters>{ 0xB2E55405,0x5702,0x4B16,{ 0xA0,0x2C,0xBB,0xCD,0x21,0xEF,0x60,0x98 } }; // B2E55405-5702-4B16-A02C-BBCD21EF6098
    template <> inline constexpr guid guid_v<Windows::Devices::WiFiDirect::IWiFiDirectConnectionParameters2>{ 0xAB3B0FBE,0xAA82,0x44B4,{ 0x88,0xC8,0xE3,0x05,0x6B,0x89,0x80,0x1D } }; // AB3B0FBE-AA82-44B4-88C8-E3056B89801D
    template <> inline constexpr guid guid_v<Windows::Devices::WiFiDirect::IWiFiDirectConnectionParametersStatics>{ 0x598AF493,0x7642,0x456F,{ 0xB9,0xD8,0xE8,0xA9,0xEB,0x1F,0x40,0x1A } }; // 598AF493-7642-456F-B9D8-E8A9EB1F401A
    template <> inline constexpr guid guid_v<Windows::Devices::WiFiDirect::IWiFiDirectConnectionRequest>{ 0x8EB99605,0x914F,0x49C3,{ 0xA6,0x14,0xD1,0x8D,0xC5,0xB1,0x9B,0x43 } }; // 8EB99605-914F-49C3-A614-D18DC5B19B43
    template <> inline constexpr guid guid_v<Windows::Devices::WiFiDirect::IWiFiDirectConnectionRequestedEventArgs>{ 0xF99D20BE,0xD38D,0x484F,{ 0x82,0x15,0xE7,0xB6,0x5A,0xBF,0x24,0x4C } }; // F99D20BE-D38D-484F-8215-E7B65ABF244C
    template <> inline constexpr guid guid_v<Windows::Devices::WiFiDirect::IWiFiDirectDevice>{ 0x72DEAAA8,0x72EB,0x4DAE,{ 0x8A,0x28,0x85,0x13,0x35,0x5D,0x27,0x77 } }; // 72DEAAA8-72EB-4DAE-8A28-8513355D2777
    template <> inline constexpr guid guid_v<Windows::Devices::WiFiDirect::IWiFiDirectDeviceStatics>{ 0xE86CB57C,0x3AAC,0x4851,{ 0xA7,0x92,0x48,0x2A,0xAF,0x93,0x1B,0x04 } }; // E86CB57C-3AAC-4851-A792-482AAF931B04
    template <> inline constexpr guid guid_v<Windows::Devices::WiFiDirect::IWiFiDirectDeviceStatics2>{ 0x1A953E49,0xB103,0x437E,{ 0x92,0x26,0xAB,0x67,0x97,0x13,0x42,0xF9 } }; // 1A953E49-B103-437E-9226-AB67971342F9
    template <> inline constexpr guid guid_v<Windows::Devices::WiFiDirect::IWiFiDirectInformationElement>{ 0xAFFB72D6,0x76BB,0x497E,{ 0xAC,0x8B,0xDC,0x72,0x83,0x8B,0xC3,0x09 } }; // AFFB72D6-76BB-497E-AC8B-DC72838BC309
    template <> inline constexpr guid guid_v<Windows::Devices::WiFiDirect::IWiFiDirectInformationElementStatics>{ 0xDBD02F16,0x11A5,0x4E60,{ 0x8C,0xAA,0x34,0x77,0x21,0x48,0x37,0x8A } }; // DBD02F16-11A5-4E60-8CAA-34772148378A
    template <> inline constexpr guid guid_v<Windows::Devices::WiFiDirect::IWiFiDirectLegacySettings>{ 0xA64FDBBA,0xF2FD,0x4567,{ 0xA9,0x1B,0xF5,0xC2,0xF5,0x32,0x10,0x57 } }; // A64FDBBA-F2FD-4567-A91B-F5C2F5321057
    template <> struct default_interface<Windows::Devices::WiFiDirect::WiFiDirectAdvertisement>{ using type = Windows::Devices::WiFiDirect::IWiFiDirectAdvertisement; };
    template <> struct default_interface<Windows::Devices::WiFiDirect::WiFiDirectAdvertisementPublisher>{ using type = Windows::Devices::WiFiDirect::IWiFiDirectAdvertisementPublisher; };
    template <> struct default_interface<Windows::Devices::WiFiDirect::WiFiDirectAdvertisementPublisherStatusChangedEventArgs>{ using type = Windows::Devices::WiFiDirect::IWiFiDirectAdvertisementPublisherStatusChangedEventArgs; };
    template <> struct default_interface<Windows::Devices::WiFiDirect::WiFiDirectConnectionListener>{ using type = Windows::Devices::WiFiDirect::IWiFiDirectConnectionListener; };
    template <> struct default_interface<Windows::Devices::WiFiDirect::WiFiDirectConnectionParameters>{ using type = Windows::Devices::WiFiDirect::IWiFiDirectConnectionParameters; };
    template <> struct default_interface<Windows::Devices::WiFiDirect::WiFiDirectConnectionRequest>{ using type = Windows::Devices::WiFiDirect::IWiFiDirectConnectionRequest; };
    template <> struct default_interface<Windows::Devices::WiFiDirect::WiFiDirectConnectionRequestedEventArgs>{ using type = Windows::Devices::WiFiDirect::IWiFiDirectConnectionRequestedEventArgs; };
    template <> struct default_interface<Windows::Devices::WiFiDirect::WiFiDirectDevice>{ using type = Windows::Devices::WiFiDirect::IWiFiDirectDevice; };
    template <> struct default_interface<Windows::Devices::WiFiDirect::WiFiDirectInformationElement>{ using type = Windows::Devices::WiFiDirect::IWiFiDirectInformationElement; };
    template <> struct default_interface<Windows::Devices::WiFiDirect::WiFiDirectLegacySettings>{ using type = Windows::Devices::WiFiDirect::IWiFiDirectLegacySettings; };
    template <> struct abi<Windows::Devices::WiFiDirect::IWiFiDirectAdvertisement>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_InformationElements(void**) noexcept = 0;
            virtual int32_t __stdcall put_InformationElements(void*) noexcept = 0;
            virtual int32_t __stdcall get_ListenStateDiscoverability(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ListenStateDiscoverability(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_IsAutonomousGroupOwnerEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsAutonomousGroupOwnerEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_LegacySettings(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::WiFiDirect::IWiFiDirectAdvertisement2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SupportedConfigurationMethods(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::WiFiDirect::IWiFiDirectAdvertisementPublisher>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Advertisement(void**) noexcept = 0;
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall add_StatusChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_StatusChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall Start() noexcept = 0;
            virtual int32_t __stdcall Stop() noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::WiFiDirect::IWiFiDirectAdvertisementPublisherStatusChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Error(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::WiFiDirect::IWiFiDirectConnectionListener>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_ConnectionRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ConnectionRequested(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::WiFiDirect::IWiFiDirectConnectionParameters>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_GroupOwnerIntent(int16_t*) noexcept = 0;
            virtual int32_t __stdcall put_GroupOwnerIntent(int16_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::WiFiDirect::IWiFiDirectConnectionParameters2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PreferenceOrderedConfigurationMethods(void**) noexcept = 0;
            virtual int32_t __stdcall get_PreferredPairingProcedure(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_PreferredPairingProcedure(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::WiFiDirect::IWiFiDirectConnectionParametersStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDevicePairingKinds(int32_t, uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::WiFiDirect::IWiFiDirectConnectionRequest>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DeviceInformation(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::WiFiDirect::IWiFiDirectConnectionRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetConnectionRequest(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::WiFiDirect::IWiFiDirectDevice>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ConnectionStatus(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_DeviceId(void**) noexcept = 0;
            virtual int32_t __stdcall add_ConnectionStatusChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ConnectionStatusChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall GetConnectionEndpointPairs(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::WiFiDirect::IWiFiDirectDeviceStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDeviceSelector(void**) noexcept = 0;
            virtual int32_t __stdcall FromIdAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::WiFiDirect::IWiFiDirectDeviceStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDeviceSelector(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall FromIdAsync(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::WiFiDirect::IWiFiDirectInformationElement>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Oui(void**) noexcept = 0;
            virtual int32_t __stdcall put_Oui(void*) noexcept = 0;
            virtual int32_t __stdcall get_OuiType(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall put_OuiType(uint8_t) noexcept = 0;
            virtual int32_t __stdcall get_Value(void**) noexcept = 0;
            virtual int32_t __stdcall put_Value(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::WiFiDirect::IWiFiDirectInformationElementStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromBuffer(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromDeviceInformation(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::WiFiDirect::IWiFiDirectLegacySettings>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_Ssid(void**) noexcept = 0;
            virtual int32_t __stdcall put_Ssid(void*) noexcept = 0;
            virtual int32_t __stdcall get_Passphrase(void**) noexcept = 0;
            virtual int32_t __stdcall put_Passphrase(void*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Devices_WiFiDirect_IWiFiDirectAdvertisement
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::Devices::WiFiDirect::WiFiDirectInformationElement>) InformationElements() const;
        WINRT_IMPL_AUTO(void) InformationElements(param::vector<Windows::Devices::WiFiDirect::WiFiDirectInformationElement> const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::WiFiDirect::WiFiDirectAdvertisementListenStateDiscoverability) ListenStateDiscoverability() const;
        WINRT_IMPL_AUTO(void) ListenStateDiscoverability(Windows::Devices::WiFiDirect::WiFiDirectAdvertisementListenStateDiscoverability const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsAutonomousGroupOwnerEnabled() const;
        WINRT_IMPL_AUTO(void) IsAutonomousGroupOwnerEnabled(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::WiFiDirect::WiFiDirectLegacySettings) LegacySettings() const;
    };
    template <> struct consume<Windows::Devices::WiFiDirect::IWiFiDirectAdvertisement>
    {
        template <typename D> using type = consume_Windows_Devices_WiFiDirect_IWiFiDirectAdvertisement<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_WiFiDirect_IWiFiDirectAdvertisement2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::Devices::WiFiDirect::WiFiDirectConfigurationMethod>) SupportedConfigurationMethods() const;
    };
    template <> struct consume<Windows::Devices::WiFiDirect::IWiFiDirectAdvertisement2>
    {
        template <typename D> using type = consume_Windows_Devices_WiFiDirect_IWiFiDirectAdvertisement2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_WiFiDirect_IWiFiDirectAdvertisementPublisher
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::WiFiDirect::WiFiDirectAdvertisement) Advertisement() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::WiFiDirect::WiFiDirectAdvertisementPublisherStatus) Status() const;
        WINRT_IMPL_AUTO(winrt::event_token) StatusChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::WiFiDirectAdvertisementPublisher, Windows::Devices::WiFiDirect::WiFiDirectAdvertisementPublisherStatusChangedEventArgs> const& handler) const;
        using StatusChanged_revoker = impl::event_revoker<Windows::Devices::WiFiDirect::IWiFiDirectAdvertisementPublisher, &impl::abi_t<Windows::Devices::WiFiDirect::IWiFiDirectAdvertisementPublisher>::remove_StatusChanged>;
        [[nodiscard]] StatusChanged_revoker StatusChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::WiFiDirectAdvertisementPublisher, Windows::Devices::WiFiDirect::WiFiDirectAdvertisementPublisherStatusChangedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) StatusChanged(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(void) Start() const;
        WINRT_IMPL_AUTO(void) Stop() const;
    };
    template <> struct consume<Windows::Devices::WiFiDirect::IWiFiDirectAdvertisementPublisher>
    {
        template <typename D> using type = consume_Windows_Devices_WiFiDirect_IWiFiDirectAdvertisementPublisher<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_WiFiDirect_IWiFiDirectAdvertisementPublisherStatusChangedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::WiFiDirect::WiFiDirectAdvertisementPublisherStatus) Status() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::WiFiDirect::WiFiDirectError) Error() const;
    };
    template <> struct consume<Windows::Devices::WiFiDirect::IWiFiDirectAdvertisementPublisherStatusChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_WiFiDirect_IWiFiDirectAdvertisementPublisherStatusChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_WiFiDirect_IWiFiDirectConnectionListener
    {
        WINRT_IMPL_AUTO(winrt::event_token) ConnectionRequested(Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::WiFiDirectConnectionListener, Windows::Devices::WiFiDirect::WiFiDirectConnectionRequestedEventArgs> const& handler) const;
        using ConnectionRequested_revoker = impl::event_revoker<Windows::Devices::WiFiDirect::IWiFiDirectConnectionListener, &impl::abi_t<Windows::Devices::WiFiDirect::IWiFiDirectConnectionListener>::remove_ConnectionRequested>;
        [[nodiscard]] ConnectionRequested_revoker ConnectionRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::WiFiDirectConnectionListener, Windows::Devices::WiFiDirect::WiFiDirectConnectionRequestedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) ConnectionRequested(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Devices::WiFiDirect::IWiFiDirectConnectionListener>
    {
        template <typename D> using type = consume_Windows_Devices_WiFiDirect_IWiFiDirectConnectionListener<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_WiFiDirect_IWiFiDirectConnectionParameters
    {
        [[nodiscard]] WINRT_IMPL_AUTO(int16_t) GroupOwnerIntent() const;
        WINRT_IMPL_AUTO(void) GroupOwnerIntent(int16_t value) const;
    };
    template <> struct consume<Windows::Devices::WiFiDirect::IWiFiDirectConnectionParameters>
    {
        template <typename D> using type = consume_Windows_Devices_WiFiDirect_IWiFiDirectConnectionParameters<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_WiFiDirect_IWiFiDirectConnectionParameters2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::Devices::WiFiDirect::WiFiDirectConfigurationMethod>) PreferenceOrderedConfigurationMethods() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::WiFiDirect::WiFiDirectPairingProcedure) PreferredPairingProcedure() const;
        WINRT_IMPL_AUTO(void) PreferredPairingProcedure(Windows::Devices::WiFiDirect::WiFiDirectPairingProcedure const& value) const;
    };
    template <> struct consume<Windows::Devices::WiFiDirect::IWiFiDirectConnectionParameters2>
    {
        template <typename D> using type = consume_Windows_Devices_WiFiDirect_IWiFiDirectConnectionParameters2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_WiFiDirect_IWiFiDirectConnectionParametersStatics
    {
        WINRT_IMPL_AUTO(Windows::Devices::Enumeration::DevicePairingKinds) GetDevicePairingKinds(Windows::Devices::WiFiDirect::WiFiDirectConfigurationMethod const& configurationMethod) const;
    };
    template <> struct consume<Windows::Devices::WiFiDirect::IWiFiDirectConnectionParametersStatics>
    {
        template <typename D> using type = consume_Windows_Devices_WiFiDirect_IWiFiDirectConnectionParametersStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_WiFiDirect_IWiFiDirectConnectionRequest
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Enumeration::DeviceInformation) DeviceInformation() const;
    };
    template <> struct consume<Windows::Devices::WiFiDirect::IWiFiDirectConnectionRequest>
    {
        template <typename D> using type = consume_Windows_Devices_WiFiDirect_IWiFiDirectConnectionRequest<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_WiFiDirect_IWiFiDirectConnectionRequestedEventArgs
    {
        WINRT_IMPL_AUTO(Windows::Devices::WiFiDirect::WiFiDirectConnectionRequest) GetConnectionRequest() const;
    };
    template <> struct consume<Windows::Devices::WiFiDirect::IWiFiDirectConnectionRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_WiFiDirect_IWiFiDirectConnectionRequestedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_WiFiDirect_IWiFiDirectDevice
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::WiFiDirect::WiFiDirectConnectionStatus) ConnectionStatus() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) DeviceId() const;
        WINRT_IMPL_AUTO(winrt::event_token) ConnectionStatusChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::WiFiDirectDevice, Windows::Foundation::IInspectable> const& handler) const;
        using ConnectionStatusChanged_revoker = impl::event_revoker<Windows::Devices::WiFiDirect::IWiFiDirectDevice, &impl::abi_t<Windows::Devices::WiFiDirect::IWiFiDirectDevice>::remove_ConnectionStatusChanged>;
        [[nodiscard]] ConnectionStatusChanged_revoker ConnectionStatusChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::WiFiDirect::WiFiDirectDevice, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) ConnectionStatusChanged(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Networking::EndpointPair>) GetConnectionEndpointPairs() const;
    };
    template <> struct consume<Windows::Devices::WiFiDirect::IWiFiDirectDevice>
    {
        template <typename D> using type = consume_Windows_Devices_WiFiDirect_IWiFiDirectDevice<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_WiFiDirect_IWiFiDirectDeviceStatics
    {
        WINRT_IMPL_AUTO(hstring) GetDeviceSelector() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::WiFiDirect::WiFiDirectDevice>) FromIdAsync(param::hstring const& deviceId) const;
    };
    template <> struct consume<Windows::Devices::WiFiDirect::IWiFiDirectDeviceStatics>
    {
        template <typename D> using type = consume_Windows_Devices_WiFiDirect_IWiFiDirectDeviceStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_WiFiDirect_IWiFiDirectDeviceStatics2
    {
        WINRT_IMPL_AUTO(hstring) GetDeviceSelector(Windows::Devices::WiFiDirect::WiFiDirectDeviceSelectorType const& type) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::WiFiDirect::WiFiDirectDevice>) FromIdAsync(param::hstring const& deviceId, Windows::Devices::WiFiDirect::WiFiDirectConnectionParameters const& connectionParameters) const;
    };
    template <> struct consume<Windows::Devices::WiFiDirect::IWiFiDirectDeviceStatics2>
    {
        template <typename D> using type = consume_Windows_Devices_WiFiDirect_IWiFiDirectDeviceStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_WiFiDirect_IWiFiDirectInformationElement
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Storage::Streams::IBuffer) Oui() const;
        WINRT_IMPL_AUTO(void) Oui(Windows::Storage::Streams::IBuffer const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint8_t) OuiType() const;
        WINRT_IMPL_AUTO(void) OuiType(uint8_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Storage::Streams::IBuffer) Value() const;
        WINRT_IMPL_AUTO(void) Value(Windows::Storage::Streams::IBuffer const& value) const;
    };
    template <> struct consume<Windows::Devices::WiFiDirect::IWiFiDirectInformationElement>
    {
        template <typename D> using type = consume_Windows_Devices_WiFiDirect_IWiFiDirectInformationElement<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_WiFiDirect_IWiFiDirectInformationElementStatics
    {
        WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::Devices::WiFiDirect::WiFiDirectInformationElement>) CreateFromBuffer(Windows::Storage::Streams::IBuffer const& buffer) const;
        WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::Devices::WiFiDirect::WiFiDirectInformationElement>) CreateFromDeviceInformation(Windows::Devices::Enumeration::DeviceInformation const& deviceInformation) const;
    };
    template <> struct consume<Windows::Devices::WiFiDirect::IWiFiDirectInformationElementStatics>
    {
        template <typename D> using type = consume_Windows_Devices_WiFiDirect_IWiFiDirectInformationElementStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_WiFiDirect_IWiFiDirectLegacySettings
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsEnabled() const;
        WINRT_IMPL_AUTO(void) IsEnabled(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Ssid() const;
        WINRT_IMPL_AUTO(void) Ssid(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Security::Credentials::PasswordCredential) Passphrase() const;
        WINRT_IMPL_AUTO(void) Passphrase(Windows::Security::Credentials::PasswordCredential const& value) const;
    };
    template <> struct consume<Windows::Devices::WiFiDirect::IWiFiDirectLegacySettings>
    {
        template <typename D> using type = consume_Windows_Devices_WiFiDirect_IWiFiDirectLegacySettings<D>;
    };
}
#endif
