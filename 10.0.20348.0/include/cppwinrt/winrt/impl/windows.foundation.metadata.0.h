// C++/WinRT v2.0.200609.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Foundation_Metadata_0_H
#define WINRT_Windows_Foundation_Metadata_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation::Metadata
{
    enum class AttributeTargets : uint32_t
    {
        All = 0xffffffff,
        Delegate = 0x1,
        Enum = 0x2,
        Event = 0x4,
        Field = 0x8,
        Interface = 0x10,
        Method = 0x40,
        Parameter = 0x80,
        Property = 0x100,
        RuntimeClass = 0x200,
        Struct = 0x400,
        InterfaceImpl = 0x800,
        ApiContract = 0x2000,
    };
    enum class CompositionType : int32_t
    {
        Protected = 1,
        Public = 2,
    };
    enum class DeprecationType : int32_t
    {
        Deprecate = 0,
        Remove = 1,
    };
    enum class FeatureStage : int32_t
    {
        AlwaysDisabled = 0,
        DisabledByDefault = 1,
        EnabledByDefault = 2,
        AlwaysEnabled = 3,
    };
    enum class GCPressureAmount : int32_t
    {
        Low = 0,
        Medium = 1,
        High = 2,
    };
    enum class MarshalingType : int32_t
    {
        None = 1,
        Agile = 2,
        Standard = 3,
        InvalidMarshaling = 0,
    };
    enum class Platform : int32_t
    {
        Windows = 0,
        WindowsPhone = 1,
    };
    enum class ThreadingModel : int32_t
    {
        STA = 1,
        MTA = 2,
        Both = 3,
        InvalidThreading = 0,
    };
    struct IApiInformationStatics;
    struct ApiInformation;
}
namespace winrt::impl
{
    template <> struct category<Windows::Foundation::Metadata::IApiInformationStatics>{ using type = interface_category; };
    template <> struct category<Windows::Foundation::Metadata::ApiInformation>{ using type = class_category; };
    template <> struct category<Windows::Foundation::Metadata::AttributeTargets>{ using type = enum_category; };
    template <> struct category<Windows::Foundation::Metadata::CompositionType>{ using type = enum_category; };
    template <> struct category<Windows::Foundation::Metadata::DeprecationType>{ using type = enum_category; };
    template <> struct category<Windows::Foundation::Metadata::FeatureStage>{ using type = enum_category; };
    template <> struct category<Windows::Foundation::Metadata::GCPressureAmount>{ using type = enum_category; };
    template <> struct category<Windows::Foundation::Metadata::MarshalingType>{ using type = enum_category; };
    template <> struct category<Windows::Foundation::Metadata::Platform>{ using type = enum_category; };
    template <> struct category<Windows::Foundation::Metadata::ThreadingModel>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<Windows::Foundation::Metadata::ApiInformation> = L"Windows.Foundation.Metadata.ApiInformation";
    template <> inline constexpr auto& name_v<Windows::Foundation::Metadata::AttributeTargets> = L"Windows.Foundation.Metadata.AttributeTargets";
    template <> inline constexpr auto& name_v<Windows::Foundation::Metadata::CompositionType> = L"Windows.Foundation.Metadata.CompositionType";
    template <> inline constexpr auto& name_v<Windows::Foundation::Metadata::DeprecationType> = L"Windows.Foundation.Metadata.DeprecationType";
    template <> inline constexpr auto& name_v<Windows::Foundation::Metadata::FeatureStage> = L"Windows.Foundation.Metadata.FeatureStage";
    template <> inline constexpr auto& name_v<Windows::Foundation::Metadata::GCPressureAmount> = L"Windows.Foundation.Metadata.GCPressureAmount";
    template <> inline constexpr auto& name_v<Windows::Foundation::Metadata::MarshalingType> = L"Windows.Foundation.Metadata.MarshalingType";
    template <> inline constexpr auto& name_v<Windows::Foundation::Metadata::Platform> = L"Windows.Foundation.Metadata.Platform";
    template <> inline constexpr auto& name_v<Windows::Foundation::Metadata::ThreadingModel> = L"Windows.Foundation.Metadata.ThreadingModel";
    template <> inline constexpr auto& name_v<Windows::Foundation::Metadata::IApiInformationStatics> = L"Windows.Foundation.Metadata.IApiInformationStatics";
    template <> inline constexpr guid guid_v<Windows::Foundation::Metadata::IApiInformationStatics>{ 0x997439FE,0xF681,0x4A11,{ 0xB4,0x16,0xC1,0x3A,0x47,0xE8,0xBA,0x36 } }; // 997439FE-F681-4A11-B416-C13A47E8BA36
    template <> struct abi<Windows::Foundation::Metadata::IApiInformationStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall IsTypePresent(void*, bool*) noexcept = 0;
            virtual int32_t __stdcall IsMethodPresent(void*, void*, bool*) noexcept = 0;
            virtual int32_t __stdcall IsMethodPresentWithArity(void*, void*, uint32_t, bool*) noexcept = 0;
            virtual int32_t __stdcall IsEventPresent(void*, void*, bool*) noexcept = 0;
            virtual int32_t __stdcall IsPropertyPresent(void*, void*, bool*) noexcept = 0;
            virtual int32_t __stdcall IsReadOnlyPropertyPresent(void*, void*, bool*) noexcept = 0;
            virtual int32_t __stdcall IsWriteablePropertyPresent(void*, void*, bool*) noexcept = 0;
            virtual int32_t __stdcall IsEnumNamedValuePresent(void*, void*, bool*) noexcept = 0;
            virtual int32_t __stdcall IsApiContractPresentByMajor(void*, uint16_t, bool*) noexcept = 0;
            virtual int32_t __stdcall IsApiContractPresentByMajorAndMinor(void*, uint16_t, uint16_t, bool*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Foundation_Metadata_IApiInformationStatics
    {
        WINRT_IMPL_AUTO(bool) IsTypePresent(param::hstring const& typeName) const;
        WINRT_IMPL_AUTO(bool) IsMethodPresent(param::hstring const& typeName, param::hstring const& methodName) const;
        WINRT_IMPL_AUTO(bool) IsMethodPresent(param::hstring const& typeName, param::hstring const& methodName, uint32_t inputParameterCount) const;
        WINRT_IMPL_AUTO(bool) IsEventPresent(param::hstring const& typeName, param::hstring const& eventName) const;
        WINRT_IMPL_AUTO(bool) IsPropertyPresent(param::hstring const& typeName, param::hstring const& propertyName) const;
        WINRT_IMPL_AUTO(bool) IsReadOnlyPropertyPresent(param::hstring const& typeName, param::hstring const& propertyName) const;
        WINRT_IMPL_AUTO(bool) IsWriteablePropertyPresent(param::hstring const& typeName, param::hstring const& propertyName) const;
        WINRT_IMPL_AUTO(bool) IsEnumNamedValuePresent(param::hstring const& enumTypeName, param::hstring const& valueName) const;
        WINRT_IMPL_AUTO(bool) IsApiContractPresent(param::hstring const& contractName, uint16_t majorVersion) const;
        WINRT_IMPL_AUTO(bool) IsApiContractPresent(param::hstring const& contractName, uint16_t majorVersion, uint16_t minorVersion) const;
    };
    template <> struct consume<Windows::Foundation::Metadata::IApiInformationStatics>
    {
        template <typename D> using type = consume_Windows_Foundation_Metadata_IApiInformationStatics<D>;
    };
}
#endif
