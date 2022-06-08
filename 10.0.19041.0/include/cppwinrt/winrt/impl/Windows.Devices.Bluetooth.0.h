// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Devices_Bluetooth_0_H
#define WINRT_Windows_Devices_Bluetooth_0_H
namespace winrt::Windows::Devices::Bluetooth::GenericAttributeProfile
{
    struct GattDeviceService;
}
namespace winrt::Windows::Devices::Bluetooth::Rfcomm
{
    struct RfcommServiceId;
}
namespace winrt::Windows::Devices::Enumeration
{
    struct DeviceAccessInformation;
    struct DeviceInformation;
}
namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    template <typename T> struct IReference;
    template <typename TSender, typename TResult> struct TypedEventHandler;
}
namespace winrt::Windows::Networking
{
    struct HostName;
}
namespace winrt::Windows::Devices::Bluetooth
{
    enum class BluetoothAddressType : int32_t
    {
        Public = 0,
        Random = 1,
        Unspecified = 2,
    };
    enum class BluetoothCacheMode : int32_t
    {
        Cached = 0,
        Uncached = 1,
    };
    enum class BluetoothConnectionStatus : int32_t
    {
        Disconnected = 0,
        Connected = 1,
    };
    enum class BluetoothError : int32_t
    {
        Success = 0,
        RadioNotAvailable = 1,
        ResourceInUse = 2,
        DeviceNotConnected = 3,
        OtherError = 4,
        DisabledByPolicy = 5,
        NotSupported = 6,
        DisabledByUser = 7,
        ConsentRequired = 8,
        TransportNotSupported = 9,
    };
    enum class BluetoothMajorClass : int32_t
    {
        Miscellaneous = 0,
        Computer = 1,
        Phone = 2,
        NetworkAccessPoint = 3,
        AudioVideo = 4,
        Peripheral = 5,
        Imaging = 6,
        Wearable = 7,
        Toy = 8,
        Health = 9,
    };
    enum class BluetoothMinorClass : int32_t
    {
        Uncategorized = 0,
        ComputerDesktop = 1,
        ComputerServer = 2,
        ComputerLaptop = 3,
        ComputerHandheld = 4,
        ComputerPalmSize = 5,
        ComputerWearable = 6,
        ComputerTablet = 7,
        PhoneCellular = 1,
        PhoneCordless = 2,
        PhoneSmartPhone = 3,
        PhoneWired = 4,
        PhoneIsdn = 5,
        NetworkFullyAvailable = 0,
        NetworkUsed01To17Percent = 8,
        NetworkUsed17To33Percent = 16,
        NetworkUsed33To50Percent = 24,
        NetworkUsed50To67Percent = 32,
        NetworkUsed67To83Percent = 40,
        NetworkUsed83To99Percent = 48,
        NetworkNoServiceAvailable = 56,
        AudioVideoWearableHeadset = 1,
        AudioVideoHandsFree = 2,
        AudioVideoMicrophone = 4,
        AudioVideoLoudspeaker = 5,
        AudioVideoHeadphones = 6,
        AudioVideoPortableAudio = 7,
        AudioVideoCarAudio = 8,
        AudioVideoSetTopBox = 9,
        AudioVideoHifiAudioDevice = 10,
        AudioVideoVcr = 11,
        AudioVideoVideoCamera = 12,
        AudioVideoCamcorder = 13,
        AudioVideoVideoMonitor = 14,
        AudioVideoVideoDisplayAndLoudspeaker = 15,
        AudioVideoVideoConferencing = 16,
        AudioVideoGamingOrToy = 18,
        PeripheralJoystick = 1,
        PeripheralGamepad = 2,
        PeripheralRemoteControl = 3,
        PeripheralSensing = 4,
        PeripheralDigitizerTablet = 5,
        PeripheralCardReader = 6,
        PeripheralDigitalPen = 7,
        PeripheralHandheldScanner = 8,
        PeripheralHandheldGesture = 9,
        WearableWristwatch = 1,
        WearablePager = 2,
        WearableJacket = 3,
        WearableHelmet = 4,
        WearableGlasses = 5,
        ToyRobot = 1,
        ToyVehicle = 2,
        ToyDoll = 3,
        ToyController = 4,
        ToyGame = 5,
        HealthBloodPressureMonitor = 1,
        HealthThermometer = 2,
        HealthWeighingScale = 3,
        HealthGlucoseMeter = 4,
        HealthPulseOximeter = 5,
        HealthHeartRateMonitor = 6,
        HealthHealthDataDisplay = 7,
        HealthStepCounter = 8,
        HealthBodyCompositionAnalyzer = 9,
        HealthPeakFlowMonitor = 10,
        HealthMedicationMonitor = 11,
        HealthKneeProsthesis = 12,
        HealthAnkleProsthesis = 13,
        HealthGenericHealthManager = 14,
        HealthPersonalMobilityDevice = 15,
    };
    enum class BluetoothServiceCapabilities : uint32_t
    {
        None = 0,
        LimitedDiscoverableMode = 0x1,
        PositioningService = 0x8,
        NetworkingService = 0x10,
        RenderingService = 0x20,
        CapturingService = 0x40,
        ObjectTransferService = 0x80,
        AudioService = 0x100,
        TelephoneService = 0x200,
        InformationService = 0x400,
    };
    struct IBluetoothAdapter;
    struct IBluetoothAdapter2;
    struct IBluetoothAdapter3;
    struct IBluetoothAdapterStatics;
    struct IBluetoothClassOfDevice;
    struct IBluetoothClassOfDeviceStatics;
    struct IBluetoothDevice;
    struct IBluetoothDevice2;
    struct IBluetoothDevice3;
    struct IBluetoothDevice4;
    struct IBluetoothDevice5;
    struct IBluetoothDeviceId;
    struct IBluetoothDeviceIdStatics;
    struct IBluetoothDeviceStatics;
    struct IBluetoothDeviceStatics2;
    struct IBluetoothLEAppearance;
    struct IBluetoothLEAppearanceCategoriesStatics;
    struct IBluetoothLEAppearanceStatics;
    struct IBluetoothLEAppearanceSubcategoriesStatics;
    struct IBluetoothLEDevice;
    struct IBluetoothLEDevice2;
    struct IBluetoothLEDevice3;
    struct IBluetoothLEDevice4;
    struct IBluetoothLEDevice5;
    struct IBluetoothLEDeviceStatics;
    struct IBluetoothLEDeviceStatics2;
    struct IBluetoothSignalStrengthFilter;
    struct IBluetoothUuidHelperStatics;
    struct BluetoothAdapter;
    struct BluetoothClassOfDevice;
    struct BluetoothDevice;
    struct BluetoothDeviceId;
    struct BluetoothLEAppearance;
    struct BluetoothLEAppearanceCategories;
    struct BluetoothLEAppearanceSubcategories;
    struct BluetoothLEDevice;
    struct BluetoothSignalStrengthFilter;
    struct BluetoothUuidHelper;
}
namespace winrt::impl
{
    template <> struct category<Windows::Devices::Bluetooth::IBluetoothAdapter>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::IBluetoothAdapter2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::IBluetoothAdapter3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::IBluetoothAdapterStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::IBluetoothClassOfDevice>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::IBluetoothClassOfDeviceStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::IBluetoothDevice>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::IBluetoothDevice2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::IBluetoothDevice3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::IBluetoothDevice4>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::IBluetoothDevice5>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::IBluetoothDeviceId>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::IBluetoothDeviceIdStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::IBluetoothDeviceStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::IBluetoothDeviceStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::IBluetoothLEAppearance>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::IBluetoothLEAppearanceCategoriesStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::IBluetoothLEAppearanceStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::IBluetoothLEAppearanceSubcategoriesStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::IBluetoothLEDevice>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::IBluetoothLEDevice2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::IBluetoothLEDevice3>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::IBluetoothLEDevice4>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::IBluetoothLEDevice5>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::IBluetoothLEDeviceStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::IBluetoothLEDeviceStatics2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::IBluetoothSignalStrengthFilter>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::IBluetoothUuidHelperStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::BluetoothAdapter>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::BluetoothClassOfDevice>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::BluetoothDevice>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::BluetoothDeviceId>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::BluetoothLEAppearance>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::BluetoothLEAppearanceCategories>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::BluetoothLEAppearanceSubcategories>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::BluetoothLEDevice>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::BluetoothSignalStrengthFilter>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::BluetoothUuidHelper>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::BluetoothAddressType>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::BluetoothCacheMode>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::BluetoothConnectionStatus>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::BluetoothError>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::BluetoothMajorClass>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::BluetoothMinorClass>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Devices::Bluetooth::BluetoothServiceCapabilities>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::Devices::Bluetooth::IBluetoothAdapter>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.IBluetoothAdapter" };
    };
    template <> struct name<Windows::Devices::Bluetooth::IBluetoothAdapter2>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.IBluetoothAdapter2" };
    };
    template <> struct name<Windows::Devices::Bluetooth::IBluetoothAdapter3>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.IBluetoothAdapter3" };
    };
    template <> struct name<Windows::Devices::Bluetooth::IBluetoothAdapterStatics>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.IBluetoothAdapterStatics" };
    };
    template <> struct name<Windows::Devices::Bluetooth::IBluetoothClassOfDevice>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.IBluetoothClassOfDevice" };
    };
    template <> struct name<Windows::Devices::Bluetooth::IBluetoothClassOfDeviceStatics>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.IBluetoothClassOfDeviceStatics" };
    };
    template <> struct name<Windows::Devices::Bluetooth::IBluetoothDevice>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.IBluetoothDevice" };
    };
    template <> struct name<Windows::Devices::Bluetooth::IBluetoothDevice2>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.IBluetoothDevice2" };
    };
    template <> struct name<Windows::Devices::Bluetooth::IBluetoothDevice3>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.IBluetoothDevice3" };
    };
    template <> struct name<Windows::Devices::Bluetooth::IBluetoothDevice4>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.IBluetoothDevice4" };
    };
    template <> struct name<Windows::Devices::Bluetooth::IBluetoothDevice5>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.IBluetoothDevice5" };
    };
    template <> struct name<Windows::Devices::Bluetooth::IBluetoothDeviceId>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.IBluetoothDeviceId" };
    };
    template <> struct name<Windows::Devices::Bluetooth::IBluetoothDeviceIdStatics>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.IBluetoothDeviceIdStatics" };
    };
    template <> struct name<Windows::Devices::Bluetooth::IBluetoothDeviceStatics>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.IBluetoothDeviceStatics" };
    };
    template <> struct name<Windows::Devices::Bluetooth::IBluetoothDeviceStatics2>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.IBluetoothDeviceStatics2" };
    };
    template <> struct name<Windows::Devices::Bluetooth::IBluetoothLEAppearance>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.IBluetoothLEAppearance" };
    };
    template <> struct name<Windows::Devices::Bluetooth::IBluetoothLEAppearanceCategoriesStatics>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.IBluetoothLEAppearanceCategoriesStatics" };
    };
    template <> struct name<Windows::Devices::Bluetooth::IBluetoothLEAppearanceStatics>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.IBluetoothLEAppearanceStatics" };
    };
    template <> struct name<Windows::Devices::Bluetooth::IBluetoothLEAppearanceSubcategoriesStatics>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.IBluetoothLEAppearanceSubcategoriesStatics" };
    };
    template <> struct name<Windows::Devices::Bluetooth::IBluetoothLEDevice>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.IBluetoothLEDevice" };
    };
    template <> struct name<Windows::Devices::Bluetooth::IBluetoothLEDevice2>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.IBluetoothLEDevice2" };
    };
    template <> struct name<Windows::Devices::Bluetooth::IBluetoothLEDevice3>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.IBluetoothLEDevice3" };
    };
    template <> struct name<Windows::Devices::Bluetooth::IBluetoothLEDevice4>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.IBluetoothLEDevice4" };
    };
    template <> struct name<Windows::Devices::Bluetooth::IBluetoothLEDevice5>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.IBluetoothLEDevice5" };
    };
    template <> struct name<Windows::Devices::Bluetooth::IBluetoothLEDeviceStatics>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.IBluetoothLEDeviceStatics" };
    };
    template <> struct name<Windows::Devices::Bluetooth::IBluetoothLEDeviceStatics2>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.IBluetoothLEDeviceStatics2" };
    };
    template <> struct name<Windows::Devices::Bluetooth::IBluetoothSignalStrengthFilter>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.IBluetoothSignalStrengthFilter" };
    };
    template <> struct name<Windows::Devices::Bluetooth::IBluetoothUuidHelperStatics>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.IBluetoothUuidHelperStatics" };
    };
    template <> struct name<Windows::Devices::Bluetooth::BluetoothAdapter>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.BluetoothAdapter" };
    };
    template <> struct name<Windows::Devices::Bluetooth::BluetoothClassOfDevice>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.BluetoothClassOfDevice" };
    };
    template <> struct name<Windows::Devices::Bluetooth::BluetoothDevice>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.BluetoothDevice" };
    };
    template <> struct name<Windows::Devices::Bluetooth::BluetoothDeviceId>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.BluetoothDeviceId" };
    };
    template <> struct name<Windows::Devices::Bluetooth::BluetoothLEAppearance>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.BluetoothLEAppearance" };
    };
    template <> struct name<Windows::Devices::Bluetooth::BluetoothLEAppearanceCategories>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.BluetoothLEAppearanceCategories" };
    };
    template <> struct name<Windows::Devices::Bluetooth::BluetoothLEAppearanceSubcategories>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.BluetoothLEAppearanceSubcategories" };
    };
    template <> struct name<Windows::Devices::Bluetooth::BluetoothLEDevice>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.BluetoothLEDevice" };
    };
    template <> struct name<Windows::Devices::Bluetooth::BluetoothSignalStrengthFilter>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.BluetoothSignalStrengthFilter" };
    };
    template <> struct name<Windows::Devices::Bluetooth::BluetoothUuidHelper>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.BluetoothUuidHelper" };
    };
    template <> struct name<Windows::Devices::Bluetooth::BluetoothAddressType>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.BluetoothAddressType" };
    };
    template <> struct name<Windows::Devices::Bluetooth::BluetoothCacheMode>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.BluetoothCacheMode" };
    };
    template <> struct name<Windows::Devices::Bluetooth::BluetoothConnectionStatus>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.BluetoothConnectionStatus" };
    };
    template <> struct name<Windows::Devices::Bluetooth::BluetoothError>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.BluetoothError" };
    };
    template <> struct name<Windows::Devices::Bluetooth::BluetoothMajorClass>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.BluetoothMajorClass" };
    };
    template <> struct name<Windows::Devices::Bluetooth::BluetoothMinorClass>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.BluetoothMinorClass" };
    };
    template <> struct name<Windows::Devices::Bluetooth::BluetoothServiceCapabilities>
    {
        static constexpr auto & value{ L"Windows.Devices.Bluetooth.BluetoothServiceCapabilities" };
    };
    template <> struct guid_storage<Windows::Devices::Bluetooth::IBluetoothAdapter>
    {
        static constexpr guid value{ 0x7974F04C,0x5F7A,0x4A34,{ 0x92,0x25,0xA8,0x55,0xF8,0x4B,0x1A,0x8B } };
    };
    template <> struct guid_storage<Windows::Devices::Bluetooth::IBluetoothAdapter2>
    {
        static constexpr guid value{ 0xAC94CECC,0x24D5,0x41B3,{ 0x91,0x6D,0x10,0x97,0xC5,0x0B,0x10,0x2B } };
    };
    template <> struct guid_storage<Windows::Devices::Bluetooth::IBluetoothAdapter3>
    {
        static constexpr guid value{ 0x8F8624E0,0xCBA9,0x5211,{ 0x9F,0x89,0x3A,0xAC,0x62,0xB4,0xC6,0xB8 } };
    };
    template <> struct guid_storage<Windows::Devices::Bluetooth::IBluetoothAdapterStatics>
    {
        static constexpr guid value{ 0x8B02FB6A,0xAC4C,0x4741,{ 0x86,0x61,0x8E,0xAB,0x7D,0x17,0xEA,0x9F } };
    };
    template <> struct guid_storage<Windows::Devices::Bluetooth::IBluetoothClassOfDevice>
    {
        static constexpr guid value{ 0xD640227E,0xD7D7,0x4661,{ 0x94,0x54,0x65,0x03,0x9C,0xA1,0x7A,0x2B } };
    };
    template <> struct guid_storage<Windows::Devices::Bluetooth::IBluetoothClassOfDeviceStatics>
    {
        static constexpr guid value{ 0xE46135BD,0x0FA2,0x416C,{ 0x91,0xB4,0xC1,0xE4,0x8C,0xA0,0x61,0xC1 } };
    };
    template <> struct guid_storage<Windows::Devices::Bluetooth::IBluetoothDevice>
    {
        static constexpr guid value{ 0x2335B156,0x90D2,0x4A04,{ 0xAE,0xF5,0x0E,0x20,0xB9,0xE6,0xB7,0x07 } };
    };
    template <> struct guid_storage<Windows::Devices::Bluetooth::IBluetoothDevice2>
    {
        static constexpr guid value{ 0x0133F954,0xB156,0x4DD0,{ 0xB1,0xF5,0xC1,0x1B,0xC3,0x1A,0x51,0x63 } };
    };
    template <> struct guid_storage<Windows::Devices::Bluetooth::IBluetoothDevice3>
    {
        static constexpr guid value{ 0x57FFF78B,0x651A,0x4454,{ 0xB9,0x0F,0xEB,0x21,0xEF,0x0B,0x0D,0x71 } };
    };
    template <> struct guid_storage<Windows::Devices::Bluetooth::IBluetoothDevice4>
    {
        static constexpr guid value{ 0x817C34AD,0x0E9C,0x42B2,{ 0xA8,0xDC,0x3E,0x80,0x94,0x94,0x0D,0x12 } };
    };
    template <> struct guid_storage<Windows::Devices::Bluetooth::IBluetoothDevice5>
    {
        static constexpr guid value{ 0xB5E0B385,0x5E85,0x4559,{ 0xA1,0x0D,0x1C,0x72,0x81,0x37,0x9F,0x96 } };
    };
    template <> struct guid_storage<Windows::Devices::Bluetooth::IBluetoothDeviceId>
    {
        static constexpr guid value{ 0xC17949AF,0x57C1,0x4642,{ 0xBC,0xCE,0xE6,0xC0,0x6B,0x20,0xAE,0x76 } };
    };
    template <> struct guid_storage<Windows::Devices::Bluetooth::IBluetoothDeviceIdStatics>
    {
        static constexpr guid value{ 0xA7884E67,0x3EFB,0x4F31,{ 0xBB,0xC2,0x81,0x0E,0x09,0x97,0x74,0x04 } };
    };
    template <> struct guid_storage<Windows::Devices::Bluetooth::IBluetoothDeviceStatics>
    {
        static constexpr guid value{ 0x0991DF51,0x57DB,0x4725,{ 0xBB,0xD7,0x84,0xF6,0x43,0x27,0xEC,0x2C } };
    };
    template <> struct guid_storage<Windows::Devices::Bluetooth::IBluetoothDeviceStatics2>
    {
        static constexpr guid value{ 0xC29E8E2F,0x4E14,0x4477,{ 0xAA,0x1B,0xB8,0xB4,0x7E,0x5B,0x7E,0xCE } };
    };
    template <> struct guid_storage<Windows::Devices::Bluetooth::IBluetoothLEAppearance>
    {
        static constexpr guid value{ 0x5D2079F2,0x66A8,0x4258,{ 0x98,0x5E,0x02,0xB4,0xD9,0x50,0x9F,0x18 } };
    };
    template <> struct guid_storage<Windows::Devices::Bluetooth::IBluetoothLEAppearanceCategoriesStatics>
    {
        static constexpr guid value{ 0x6D4D54FE,0x046A,0x4185,{ 0xAA,0xB6,0x82,0x4C,0xF0,0x61,0x08,0x61 } };
    };
    template <> struct guid_storage<Windows::Devices::Bluetooth::IBluetoothLEAppearanceStatics>
    {
        static constexpr guid value{ 0xA193C0C7,0x4504,0x4F4A,{ 0x9B,0xA5,0xCD,0x10,0x54,0xE5,0xE0,0x65 } };
    };
    template <> struct guid_storage<Windows::Devices::Bluetooth::IBluetoothLEAppearanceSubcategoriesStatics>
    {
        static constexpr guid value{ 0xE57BA606,0x2144,0x415A,{ 0x83,0x12,0x71,0xCC,0xF2,0x91,0xF8,0xD1 } };
    };
    template <> struct guid_storage<Windows::Devices::Bluetooth::IBluetoothLEDevice>
    {
        static constexpr guid value{ 0xB5EE2F7B,0x4AD8,0x4642,{ 0xAC,0x48,0x80,0xA0,0xB5,0x00,0xE8,0x87 } };
    };
    template <> struct guid_storage<Windows::Devices::Bluetooth::IBluetoothLEDevice2>
    {
        static constexpr guid value{ 0x26F062B3,0x7AEE,0x4D31,{ 0xBA,0xBA,0xB1,0xB9,0x77,0x5F,0x59,0x16 } };
    };
    template <> struct guid_storage<Windows::Devices::Bluetooth::IBluetoothLEDevice3>
    {
        static constexpr guid value{ 0xAEE9E493,0x44AC,0x40DC,{ 0xAF,0x33,0xB2,0xC1,0x3C,0x01,0xCA,0x46 } };
    };
    template <> struct guid_storage<Windows::Devices::Bluetooth::IBluetoothLEDevice4>
    {
        static constexpr guid value{ 0x2B605031,0x2248,0x4B2F,{ 0xAC,0xF0,0x7C,0xEE,0x36,0xFC,0x58,0x70 } };
    };
    template <> struct guid_storage<Windows::Devices::Bluetooth::IBluetoothLEDevice5>
    {
        static constexpr guid value{ 0x9D6A1260,0x5287,0x458E,{ 0x95,0xBA,0x17,0xC8,0xB7,0xBB,0x32,0x6E } };
    };
    template <> struct guid_storage<Windows::Devices::Bluetooth::IBluetoothLEDeviceStatics>
    {
        static constexpr guid value{ 0xC8CF1A19,0xF0B6,0x4BF0,{ 0x86,0x89,0x41,0x30,0x3D,0xE2,0xD9,0xF4 } };
    };
    template <> struct guid_storage<Windows::Devices::Bluetooth::IBluetoothLEDeviceStatics2>
    {
        static constexpr guid value{ 0x5F12C06B,0x3BAC,0x43E8,{ 0xAD,0x16,0x56,0x32,0x71,0xBD,0x41,0xC2 } };
    };
    template <> struct guid_storage<Windows::Devices::Bluetooth::IBluetoothSignalStrengthFilter>
    {
        static constexpr guid value{ 0xDF7B7391,0x6BB5,0x4CFE,{ 0x90,0xB1,0x5D,0x73,0x24,0xED,0xCF,0x7F } };
    };
    template <> struct guid_storage<Windows::Devices::Bluetooth::IBluetoothUuidHelperStatics>
    {
        static constexpr guid value{ 0x17DF0CD8,0xCF74,0x4B21,{ 0xAF,0xE6,0xF5,0x7A,0x11,0xBC,0xDE,0xA0 } };
    };
    template <> struct default_interface<Windows::Devices::Bluetooth::BluetoothAdapter>
    {
        using type = Windows::Devices::Bluetooth::IBluetoothAdapter;
    };
    template <> struct default_interface<Windows::Devices::Bluetooth::BluetoothClassOfDevice>
    {
        using type = Windows::Devices::Bluetooth::IBluetoothClassOfDevice;
    };
    template <> struct default_interface<Windows::Devices::Bluetooth::BluetoothDevice>
    {
        using type = Windows::Devices::Bluetooth::IBluetoothDevice;
    };
    template <> struct default_interface<Windows::Devices::Bluetooth::BluetoothDeviceId>
    {
        using type = Windows::Devices::Bluetooth::IBluetoothDeviceId;
    };
    template <> struct default_interface<Windows::Devices::Bluetooth::BluetoothLEAppearance>
    {
        using type = Windows::Devices::Bluetooth::IBluetoothLEAppearance;
    };
    template <> struct default_interface<Windows::Devices::Bluetooth::BluetoothLEDevice>
    {
        using type = Windows::Devices::Bluetooth::IBluetoothLEDevice;
    };
    template <> struct default_interface<Windows::Devices::Bluetooth::BluetoothSignalStrengthFilter>
    {
        using type = Windows::Devices::Bluetooth::IBluetoothSignalStrengthFilter;
    };
    template <> struct abi<Windows::Devices::Bluetooth::IBluetoothAdapter>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DeviceId(void**) noexcept = 0;
            virtual int32_t __stdcall get_BluetoothAddress(uint64_t*) noexcept = 0;
            virtual int32_t __stdcall get_IsClassicSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsLowEnergySupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsPeripheralRoleSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsCentralRoleSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsAdvertisementOffloadSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall GetRadioAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Bluetooth::IBluetoothAdapter2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AreClassicSecureConnectionsSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_AreLowEnergySecureConnectionsSupported(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Bluetooth::IBluetoothAdapter3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsExtendedAdvertisingSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_MaxAdvertisementDataLength(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Bluetooth::IBluetoothAdapterStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDeviceSelector(void**) noexcept = 0;
            virtual int32_t __stdcall FromIdAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetDefaultAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Bluetooth::IBluetoothClassOfDevice>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RawValue(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MajorClass(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MinorClass(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ServiceCapabilities(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Bluetooth::IBluetoothClassOfDeviceStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FromRawValue(uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall FromParts(int32_t, int32_t, uint32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Bluetooth::IBluetoothDevice>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DeviceId(void**) noexcept = 0;
            virtual int32_t __stdcall get_HostName(void**) noexcept = 0;
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
            virtual int32_t __stdcall get_ClassOfDevice(void**) noexcept = 0;
            virtual int32_t __stdcall get_SdpRecords(void**) noexcept = 0;
            virtual int32_t __stdcall get_RfcommServices(void**) noexcept = 0;
            virtual int32_t __stdcall get_ConnectionStatus(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_BluetoothAddress(uint64_t*) noexcept = 0;
            virtual int32_t __stdcall add_NameChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_NameChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_SdpRecordsChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SdpRecordsChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_ConnectionStatusChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ConnectionStatusChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Bluetooth::IBluetoothDevice2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DeviceInformation(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Bluetooth::IBluetoothDevice3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DeviceAccessInformation(void**) noexcept = 0;
            virtual int32_t __stdcall RequestAccessAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetRfcommServicesAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetRfcommServicesWithCacheModeAsync(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetRfcommServicesForIdAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetRfcommServicesForIdWithCacheModeAsync(void*, int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Bluetooth::IBluetoothDevice4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_BluetoothDeviceId(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Bluetooth::IBluetoothDevice5>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_WasSecureConnectionUsedForPairing(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Bluetooth::IBluetoothDeviceId>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsClassicDevice(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsLowEnergyDevice(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Bluetooth::IBluetoothDeviceIdStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FromId(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Bluetooth::IBluetoothDeviceStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FromIdAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall FromHostNameAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall FromBluetoothAddressAsync(uint64_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetDeviceSelector(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Bluetooth::IBluetoothDeviceStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDeviceSelectorFromPairingState(bool, void**) noexcept = 0;
            virtual int32_t __stdcall GetDeviceSelectorFromConnectionStatus(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetDeviceSelectorFromDeviceName(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetDeviceSelectorFromBluetoothAddress(uint64_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetDeviceSelectorFromClassOfDevice(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Bluetooth::IBluetoothLEAppearance>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RawValue(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_Category(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_SubCategory(uint16_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Bluetooth::IBluetoothLEAppearanceCategoriesStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Uncategorized(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_Phone(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_Computer(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_Watch(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_Clock(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_Display(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_RemoteControl(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_EyeGlasses(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_Tag(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_Keyring(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_MediaPlayer(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_BarcodeScanner(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_Thermometer(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_HeartRate(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_BloodPressure(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_HumanInterfaceDevice(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_GlucoseMeter(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_RunningWalking(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_Cycling(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_PulseOximeter(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_WeightScale(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_OutdoorSportActivity(uint16_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Bluetooth::IBluetoothLEAppearanceStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FromRawValue(uint16_t, void**) noexcept = 0;
            virtual int32_t __stdcall FromParts(uint16_t, uint16_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Bluetooth::IBluetoothLEAppearanceSubcategoriesStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Generic(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_SportsWatch(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_ThermometerEar(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_HeartRateBelt(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_BloodPressureArm(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_BloodPressureWrist(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_Keyboard(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_Mouse(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_Joystick(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_Gamepad(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_DigitizerTablet(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_CardReader(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_DigitalPen(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_BarcodeScanner(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_RunningWalkingInShoe(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_RunningWalkingOnShoe(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_RunningWalkingOnHip(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_CyclingComputer(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_CyclingSpeedSensor(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_CyclingCadenceSensor(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_CyclingPowerSensor(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_CyclingSpeedCadenceSensor(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_OximeterFingertip(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_OximeterWristWorn(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_LocationDisplay(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_LocationNavigationDisplay(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_LocationPod(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_LocationNavigationPod(uint16_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Bluetooth::IBluetoothLEDevice>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DeviceId(void**) noexcept = 0;
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
            virtual int32_t __stdcall get_GattServices(void**) noexcept = 0;
            virtual int32_t __stdcall get_ConnectionStatus(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_BluetoothAddress(uint64_t*) noexcept = 0;
            virtual int32_t __stdcall GetGattService(winrt::guid, void**) noexcept = 0;
            virtual int32_t __stdcall add_NameChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_NameChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_GattServicesChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_GattServicesChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_ConnectionStatusChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ConnectionStatusChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Bluetooth::IBluetoothLEDevice2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DeviceInformation(void**) noexcept = 0;
            virtual int32_t __stdcall get_Appearance(void**) noexcept = 0;
            virtual int32_t __stdcall get_BluetoothAddressType(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Bluetooth::IBluetoothLEDevice3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DeviceAccessInformation(void**) noexcept = 0;
            virtual int32_t __stdcall RequestAccessAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetGattServicesAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetGattServicesWithCacheModeAsync(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetGattServicesForUuidAsync(winrt::guid, void**) noexcept = 0;
            virtual int32_t __stdcall GetGattServicesForUuidWithCacheModeAsync(winrt::guid, int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Bluetooth::IBluetoothLEDevice4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_BluetoothDeviceId(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Bluetooth::IBluetoothLEDevice5>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_WasSecureConnectionUsedForPairing(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Bluetooth::IBluetoothLEDeviceStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FromIdAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall FromBluetoothAddressAsync(uint64_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetDeviceSelector(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Bluetooth::IBluetoothLEDeviceStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDeviceSelectorFromPairingState(bool, void**) noexcept = 0;
            virtual int32_t __stdcall GetDeviceSelectorFromConnectionStatus(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetDeviceSelectorFromDeviceName(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetDeviceSelectorFromBluetoothAddress(uint64_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetDeviceSelectorFromBluetoothAddressWithBluetoothAddressType(uint64_t, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetDeviceSelectorFromAppearance(void*, void**) noexcept = 0;
            virtual int32_t __stdcall FromBluetoothAddressWithBluetoothAddressTypeAsync(uint64_t, int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Bluetooth::IBluetoothSignalStrengthFilter>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_InRangeThresholdInDBm(void**) noexcept = 0;
            virtual int32_t __stdcall put_InRangeThresholdInDBm(void*) noexcept = 0;
            virtual int32_t __stdcall get_OutOfRangeThresholdInDBm(void**) noexcept = 0;
            virtual int32_t __stdcall put_OutOfRangeThresholdInDBm(void*) noexcept = 0;
            virtual int32_t __stdcall get_OutOfRangeTimeout(void**) noexcept = 0;
            virtual int32_t __stdcall put_OutOfRangeTimeout(void*) noexcept = 0;
            virtual int32_t __stdcall get_SamplingInterval(void**) noexcept = 0;
            virtual int32_t __stdcall put_SamplingInterval(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Bluetooth::IBluetoothUuidHelperStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FromShortId(uint32_t, winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall TryGetShortId(winrt::guid, void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Devices_Bluetooth_IBluetoothAdapter
    {
        [[nodiscard]] auto DeviceId() const;
        [[nodiscard]] auto BluetoothAddress() const;
        [[nodiscard]] auto IsClassicSupported() const;
        [[nodiscard]] auto IsLowEnergySupported() const;
        [[nodiscard]] auto IsPeripheralRoleSupported() const;
        [[nodiscard]] auto IsCentralRoleSupported() const;
        [[nodiscard]] auto IsAdvertisementOffloadSupported() const;
        auto GetRadioAsync() const;
    };
    template <> struct consume<Windows::Devices::Bluetooth::IBluetoothAdapter>
    {
        template <typename D> using type = consume_Windows_Devices_Bluetooth_IBluetoothAdapter<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Bluetooth_IBluetoothAdapter2
    {
        [[nodiscard]] auto AreClassicSecureConnectionsSupported() const;
        [[nodiscard]] auto AreLowEnergySecureConnectionsSupported() const;
    };
    template <> struct consume<Windows::Devices::Bluetooth::IBluetoothAdapter2>
    {
        template <typename D> using type = consume_Windows_Devices_Bluetooth_IBluetoothAdapter2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Bluetooth_IBluetoothAdapter3
    {
        [[nodiscard]] auto IsExtendedAdvertisingSupported() const;
        [[nodiscard]] auto MaxAdvertisementDataLength() const;
    };
    template <> struct consume<Windows::Devices::Bluetooth::IBluetoothAdapter3>
    {
        template <typename D> using type = consume_Windows_Devices_Bluetooth_IBluetoothAdapter3<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Bluetooth_IBluetoothAdapterStatics
    {
        auto GetDeviceSelector() const;
        auto FromIdAsync(param::hstring const& deviceId) const;
        auto GetDefaultAsync() const;
    };
    template <> struct consume<Windows::Devices::Bluetooth::IBluetoothAdapterStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Bluetooth_IBluetoothAdapterStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Bluetooth_IBluetoothClassOfDevice
    {
        [[nodiscard]] auto RawValue() const;
        [[nodiscard]] auto MajorClass() const;
        [[nodiscard]] auto MinorClass() const;
        [[nodiscard]] auto ServiceCapabilities() const;
    };
    template <> struct consume<Windows::Devices::Bluetooth::IBluetoothClassOfDevice>
    {
        template <typename D> using type = consume_Windows_Devices_Bluetooth_IBluetoothClassOfDevice<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Bluetooth_IBluetoothClassOfDeviceStatics
    {
        auto FromRawValue(uint32_t rawValue) const;
        auto FromParts(Windows::Devices::Bluetooth::BluetoothMajorClass const& majorClass, Windows::Devices::Bluetooth::BluetoothMinorClass const& minorClass, Windows::Devices::Bluetooth::BluetoothServiceCapabilities const& serviceCapabilities) const;
    };
    template <> struct consume<Windows::Devices::Bluetooth::IBluetoothClassOfDeviceStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Bluetooth_IBluetoothClassOfDeviceStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Bluetooth_IBluetoothDevice
    {
        [[nodiscard]] auto DeviceId() const;
        [[nodiscard]] auto HostName() const;
        [[nodiscard]] auto Name() const;
        [[nodiscard]] auto ClassOfDevice() const;
        [[nodiscard]] auto SdpRecords() const;
        [[nodiscard]] auto RfcommServices() const;
        [[nodiscard]] auto ConnectionStatus() const;
        [[nodiscard]] auto BluetoothAddress() const;
        auto NameChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::BluetoothDevice, Windows::Foundation::IInspectable> const& handler) const;
        using NameChanged_revoker = impl::event_revoker<Windows::Devices::Bluetooth::IBluetoothDevice, &impl::abi_t<Windows::Devices::Bluetooth::IBluetoothDevice>::remove_NameChanged>;
        NameChanged_revoker NameChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::BluetoothDevice, Windows::Foundation::IInspectable> const& handler) const;
        auto NameChanged(winrt::event_token const& token) const noexcept;
        auto SdpRecordsChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::BluetoothDevice, Windows::Foundation::IInspectable> const& handler) const;
        using SdpRecordsChanged_revoker = impl::event_revoker<Windows::Devices::Bluetooth::IBluetoothDevice, &impl::abi_t<Windows::Devices::Bluetooth::IBluetoothDevice>::remove_SdpRecordsChanged>;
        SdpRecordsChanged_revoker SdpRecordsChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::BluetoothDevice, Windows::Foundation::IInspectable> const& handler) const;
        auto SdpRecordsChanged(winrt::event_token const& token) const noexcept;
        auto ConnectionStatusChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::BluetoothDevice, Windows::Foundation::IInspectable> const& handler) const;
        using ConnectionStatusChanged_revoker = impl::event_revoker<Windows::Devices::Bluetooth::IBluetoothDevice, &impl::abi_t<Windows::Devices::Bluetooth::IBluetoothDevice>::remove_ConnectionStatusChanged>;
        ConnectionStatusChanged_revoker ConnectionStatusChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::BluetoothDevice, Windows::Foundation::IInspectable> const& handler) const;
        auto ConnectionStatusChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Devices::Bluetooth::IBluetoothDevice>
    {
        template <typename D> using type = consume_Windows_Devices_Bluetooth_IBluetoothDevice<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Bluetooth_IBluetoothDevice2
    {
        [[nodiscard]] auto DeviceInformation() const;
    };
    template <> struct consume<Windows::Devices::Bluetooth::IBluetoothDevice2>
    {
        template <typename D> using type = consume_Windows_Devices_Bluetooth_IBluetoothDevice2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Bluetooth_IBluetoothDevice3
    {
        [[nodiscard]] auto DeviceAccessInformation() const;
        auto RequestAccessAsync() const;
        auto GetRfcommServicesAsync() const;
        auto GetRfcommServicesAsync(Windows::Devices::Bluetooth::BluetoothCacheMode const& cacheMode) const;
        auto GetRfcommServicesForIdAsync(Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId const& serviceId) const;
        auto GetRfcommServicesForIdAsync(Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId const& serviceId, Windows::Devices::Bluetooth::BluetoothCacheMode const& cacheMode) const;
    };
    template <> struct consume<Windows::Devices::Bluetooth::IBluetoothDevice3>
    {
        template <typename D> using type = consume_Windows_Devices_Bluetooth_IBluetoothDevice3<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Bluetooth_IBluetoothDevice4
    {
        [[nodiscard]] auto BluetoothDeviceId() const;
    };
    template <> struct consume<Windows::Devices::Bluetooth::IBluetoothDevice4>
    {
        template <typename D> using type = consume_Windows_Devices_Bluetooth_IBluetoothDevice4<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Bluetooth_IBluetoothDevice5
    {
        [[nodiscard]] auto WasSecureConnectionUsedForPairing() const;
    };
    template <> struct consume<Windows::Devices::Bluetooth::IBluetoothDevice5>
    {
        template <typename D> using type = consume_Windows_Devices_Bluetooth_IBluetoothDevice5<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Bluetooth_IBluetoothDeviceId
    {
        [[nodiscard]] auto Id() const;
        [[nodiscard]] auto IsClassicDevice() const;
        [[nodiscard]] auto IsLowEnergyDevice() const;
    };
    template <> struct consume<Windows::Devices::Bluetooth::IBluetoothDeviceId>
    {
        template <typename D> using type = consume_Windows_Devices_Bluetooth_IBluetoothDeviceId<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Bluetooth_IBluetoothDeviceIdStatics
    {
        auto FromId(param::hstring const& deviceId) const;
    };
    template <> struct consume<Windows::Devices::Bluetooth::IBluetoothDeviceIdStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Bluetooth_IBluetoothDeviceIdStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Bluetooth_IBluetoothDeviceStatics
    {
        auto FromIdAsync(param::hstring const& deviceId) const;
        auto FromHostNameAsync(Windows::Networking::HostName const& hostName) const;
        auto FromBluetoothAddressAsync(uint64_t address) const;
        auto GetDeviceSelector() const;
    };
    template <> struct consume<Windows::Devices::Bluetooth::IBluetoothDeviceStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Bluetooth_IBluetoothDeviceStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Bluetooth_IBluetoothDeviceStatics2
    {
        auto GetDeviceSelectorFromPairingState(bool pairingState) const;
        auto GetDeviceSelectorFromConnectionStatus(Windows::Devices::Bluetooth::BluetoothConnectionStatus const& connectionStatus) const;
        auto GetDeviceSelectorFromDeviceName(param::hstring const& deviceName) const;
        auto GetDeviceSelectorFromBluetoothAddress(uint64_t bluetoothAddress) const;
        auto GetDeviceSelectorFromClassOfDevice(Windows::Devices::Bluetooth::BluetoothClassOfDevice const& classOfDevice) const;
    };
    template <> struct consume<Windows::Devices::Bluetooth::IBluetoothDeviceStatics2>
    {
        template <typename D> using type = consume_Windows_Devices_Bluetooth_IBluetoothDeviceStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Bluetooth_IBluetoothLEAppearance
    {
        [[nodiscard]] auto RawValue() const;
        [[nodiscard]] auto Category() const;
        [[nodiscard]] auto SubCategory() const;
    };
    template <> struct consume<Windows::Devices::Bluetooth::IBluetoothLEAppearance>
    {
        template <typename D> using type = consume_Windows_Devices_Bluetooth_IBluetoothLEAppearance<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Bluetooth_IBluetoothLEAppearanceCategoriesStatics
    {
        [[nodiscard]] auto Uncategorized() const;
        [[nodiscard]] auto Phone() const;
        [[nodiscard]] auto Computer() const;
        [[nodiscard]] auto Watch() const;
        [[nodiscard]] auto Clock() const;
        [[nodiscard]] auto Display() const;
        [[nodiscard]] auto RemoteControl() const;
        [[nodiscard]] auto EyeGlasses() const;
        [[nodiscard]] auto Tag() const;
        [[nodiscard]] auto Keyring() const;
        [[nodiscard]] auto MediaPlayer() const;
        [[nodiscard]] auto BarcodeScanner() const;
        [[nodiscard]] auto Thermometer() const;
        [[nodiscard]] auto HeartRate() const;
        [[nodiscard]] auto BloodPressure() const;
        [[nodiscard]] auto HumanInterfaceDevice() const;
        [[nodiscard]] auto GlucoseMeter() const;
        [[nodiscard]] auto RunningWalking() const;
        [[nodiscard]] auto Cycling() const;
        [[nodiscard]] auto PulseOximeter() const;
        [[nodiscard]] auto WeightScale() const;
        [[nodiscard]] auto OutdoorSportActivity() const;
    };
    template <> struct consume<Windows::Devices::Bluetooth::IBluetoothLEAppearanceCategoriesStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Bluetooth_IBluetoothLEAppearanceCategoriesStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Bluetooth_IBluetoothLEAppearanceStatics
    {
        auto FromRawValue(uint16_t rawValue) const;
        auto FromParts(uint16_t appearanceCategory, uint16_t appearanceSubCategory) const;
    };
    template <> struct consume<Windows::Devices::Bluetooth::IBluetoothLEAppearanceStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Bluetooth_IBluetoothLEAppearanceStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Bluetooth_IBluetoothLEAppearanceSubcategoriesStatics
    {
        [[nodiscard]] auto Generic() const;
        [[nodiscard]] auto SportsWatch() const;
        [[nodiscard]] auto ThermometerEar() const;
        [[nodiscard]] auto HeartRateBelt() const;
        [[nodiscard]] auto BloodPressureArm() const;
        [[nodiscard]] auto BloodPressureWrist() const;
        [[nodiscard]] auto Keyboard() const;
        [[nodiscard]] auto Mouse() const;
        [[nodiscard]] auto Joystick() const;
        [[nodiscard]] auto Gamepad() const;
        [[nodiscard]] auto DigitizerTablet() const;
        [[nodiscard]] auto CardReader() const;
        [[nodiscard]] auto DigitalPen() const;
        [[nodiscard]] auto BarcodeScanner() const;
        [[nodiscard]] auto RunningWalkingInShoe() const;
        [[nodiscard]] auto RunningWalkingOnShoe() const;
        [[nodiscard]] auto RunningWalkingOnHip() const;
        [[nodiscard]] auto CyclingComputer() const;
        [[nodiscard]] auto CyclingSpeedSensor() const;
        [[nodiscard]] auto CyclingCadenceSensor() const;
        [[nodiscard]] auto CyclingPowerSensor() const;
        [[nodiscard]] auto CyclingSpeedCadenceSensor() const;
        [[nodiscard]] auto OximeterFingertip() const;
        [[nodiscard]] auto OximeterWristWorn() const;
        [[nodiscard]] auto LocationDisplay() const;
        [[nodiscard]] auto LocationNavigationDisplay() const;
        [[nodiscard]] auto LocationPod() const;
        [[nodiscard]] auto LocationNavigationPod() const;
    };
    template <> struct consume<Windows::Devices::Bluetooth::IBluetoothLEAppearanceSubcategoriesStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Bluetooth_IBluetoothLEAppearanceSubcategoriesStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Bluetooth_IBluetoothLEDevice
    {
        [[nodiscard]] auto DeviceId() const;
        [[nodiscard]] auto Name() const;
        [[nodiscard]] auto GattServices() const;
        [[nodiscard]] auto ConnectionStatus() const;
        [[nodiscard]] auto BluetoothAddress() const;
        auto GetGattService(winrt::guid const& serviceUuid) const;
        auto NameChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::BluetoothLEDevice, Windows::Foundation::IInspectable> const& handler) const;
        using NameChanged_revoker = impl::event_revoker<Windows::Devices::Bluetooth::IBluetoothLEDevice, &impl::abi_t<Windows::Devices::Bluetooth::IBluetoothLEDevice>::remove_NameChanged>;
        NameChanged_revoker NameChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::BluetoothLEDevice, Windows::Foundation::IInspectable> const& handler) const;
        auto NameChanged(winrt::event_token const& token) const noexcept;
        auto GattServicesChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::BluetoothLEDevice, Windows::Foundation::IInspectable> const& handler) const;
        using GattServicesChanged_revoker = impl::event_revoker<Windows::Devices::Bluetooth::IBluetoothLEDevice, &impl::abi_t<Windows::Devices::Bluetooth::IBluetoothLEDevice>::remove_GattServicesChanged>;
        GattServicesChanged_revoker GattServicesChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::BluetoothLEDevice, Windows::Foundation::IInspectable> const& handler) const;
        auto GattServicesChanged(winrt::event_token const& token) const noexcept;
        auto ConnectionStatusChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::BluetoothLEDevice, Windows::Foundation::IInspectable> const& handler) const;
        using ConnectionStatusChanged_revoker = impl::event_revoker<Windows::Devices::Bluetooth::IBluetoothLEDevice, &impl::abi_t<Windows::Devices::Bluetooth::IBluetoothLEDevice>::remove_ConnectionStatusChanged>;
        ConnectionStatusChanged_revoker ConnectionStatusChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::BluetoothLEDevice, Windows::Foundation::IInspectable> const& handler) const;
        auto ConnectionStatusChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Devices::Bluetooth::IBluetoothLEDevice>
    {
        template <typename D> using type = consume_Windows_Devices_Bluetooth_IBluetoothLEDevice<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Bluetooth_IBluetoothLEDevice2
    {
        [[nodiscard]] auto DeviceInformation() const;
        [[nodiscard]] auto Appearance() const;
        [[nodiscard]] auto BluetoothAddressType() const;
    };
    template <> struct consume<Windows::Devices::Bluetooth::IBluetoothLEDevice2>
    {
        template <typename D> using type = consume_Windows_Devices_Bluetooth_IBluetoothLEDevice2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Bluetooth_IBluetoothLEDevice3
    {
        [[nodiscard]] auto DeviceAccessInformation() const;
        auto RequestAccessAsync() const;
        auto GetGattServicesAsync() const;
        auto GetGattServicesAsync(Windows::Devices::Bluetooth::BluetoothCacheMode const& cacheMode) const;
        auto GetGattServicesForUuidAsync(winrt::guid const& serviceUuid) const;
        auto GetGattServicesForUuidAsync(winrt::guid const& serviceUuid, Windows::Devices::Bluetooth::BluetoothCacheMode const& cacheMode) const;
    };
    template <> struct consume<Windows::Devices::Bluetooth::IBluetoothLEDevice3>
    {
        template <typename D> using type = consume_Windows_Devices_Bluetooth_IBluetoothLEDevice3<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Bluetooth_IBluetoothLEDevice4
    {
        [[nodiscard]] auto BluetoothDeviceId() const;
    };
    template <> struct consume<Windows::Devices::Bluetooth::IBluetoothLEDevice4>
    {
        template <typename D> using type = consume_Windows_Devices_Bluetooth_IBluetoothLEDevice4<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Bluetooth_IBluetoothLEDevice5
    {
        [[nodiscard]] auto WasSecureConnectionUsedForPairing() const;
    };
    template <> struct consume<Windows::Devices::Bluetooth::IBluetoothLEDevice5>
    {
        template <typename D> using type = consume_Windows_Devices_Bluetooth_IBluetoothLEDevice5<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Bluetooth_IBluetoothLEDeviceStatics
    {
        auto FromIdAsync(param::hstring const& deviceId) const;
        auto FromBluetoothAddressAsync(uint64_t bluetoothAddress) const;
        auto GetDeviceSelector() const;
    };
    template <> struct consume<Windows::Devices::Bluetooth::IBluetoothLEDeviceStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Bluetooth_IBluetoothLEDeviceStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Bluetooth_IBluetoothLEDeviceStatics2
    {
        auto GetDeviceSelectorFromPairingState(bool pairingState) const;
        auto GetDeviceSelectorFromConnectionStatus(Windows::Devices::Bluetooth::BluetoothConnectionStatus const& connectionStatus) const;
        auto GetDeviceSelectorFromDeviceName(param::hstring const& deviceName) const;
        auto GetDeviceSelectorFromBluetoothAddress(uint64_t bluetoothAddress) const;
        auto GetDeviceSelectorFromBluetoothAddress(uint64_t bluetoothAddress, Windows::Devices::Bluetooth::BluetoothAddressType const& bluetoothAddressType) const;
        auto GetDeviceSelectorFromAppearance(Windows::Devices::Bluetooth::BluetoothLEAppearance const& appearance) const;
        auto FromBluetoothAddressAsync(uint64_t bluetoothAddress, Windows::Devices::Bluetooth::BluetoothAddressType const& bluetoothAddressType) const;
    };
    template <> struct consume<Windows::Devices::Bluetooth::IBluetoothLEDeviceStatics2>
    {
        template <typename D> using type = consume_Windows_Devices_Bluetooth_IBluetoothLEDeviceStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Bluetooth_IBluetoothSignalStrengthFilter
    {
        [[nodiscard]] auto InRangeThresholdInDBm() const;
        auto InRangeThresholdInDBm(Windows::Foundation::IReference<int16_t> const& value) const;
        [[nodiscard]] auto OutOfRangeThresholdInDBm() const;
        auto OutOfRangeThresholdInDBm(Windows::Foundation::IReference<int16_t> const& value) const;
        [[nodiscard]] auto OutOfRangeTimeout() const;
        auto OutOfRangeTimeout(Windows::Foundation::IReference<Windows::Foundation::TimeSpan> const& value) const;
        [[nodiscard]] auto SamplingInterval() const;
        auto SamplingInterval(Windows::Foundation::IReference<Windows::Foundation::TimeSpan> const& value) const;
    };
    template <> struct consume<Windows::Devices::Bluetooth::IBluetoothSignalStrengthFilter>
    {
        template <typename D> using type = consume_Windows_Devices_Bluetooth_IBluetoothSignalStrengthFilter<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Bluetooth_IBluetoothUuidHelperStatics
    {
        auto FromShortId(uint32_t shortId) const;
        auto TryGetShortId(winrt::guid const& uuid) const;
    };
    template <> struct consume<Windows::Devices::Bluetooth::IBluetoothUuidHelperStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Bluetooth_IBluetoothUuidHelperStatics<D>;
    };
}
#endif
