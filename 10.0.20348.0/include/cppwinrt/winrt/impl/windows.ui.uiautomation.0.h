// C++/WinRT v2.0.200609.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_UIAutomation_0_H
#define WINRT_Windows_UI_UIAutomation_0_H
WINRT_EXPORT namespace winrt::Windows::UI::UIAutomation
{
    struct IAutomationElement;
    struct IAutomationTextRange;
    struct AutomationElement;
    struct AutomationTextRange;
}
namespace winrt::impl
{
    template <> struct category<Windows::UI::UIAutomation::IAutomationElement>{ using type = interface_category; };
    template <> struct category<Windows::UI::UIAutomation::IAutomationTextRange>{ using type = interface_category; };
    template <> struct category<Windows::UI::UIAutomation::AutomationElement>{ using type = class_category; };
    template <> struct category<Windows::UI::UIAutomation::AutomationTextRange>{ using type = class_category; };
    template <> inline constexpr auto& name_v<Windows::UI::UIAutomation::AutomationElement> = L"Windows.UI.UIAutomation.AutomationElement";
    template <> inline constexpr auto& name_v<Windows::UI::UIAutomation::AutomationTextRange> = L"Windows.UI.UIAutomation.AutomationTextRange";
    template <> inline constexpr auto& name_v<Windows::UI::UIAutomation::IAutomationElement> = L"Windows.UI.UIAutomation.IAutomationElement";
    template <> inline constexpr auto& name_v<Windows::UI::UIAutomation::IAutomationTextRange> = L"Windows.UI.UIAutomation.IAutomationTextRange";
    template <> inline constexpr guid guid_v<Windows::UI::UIAutomation::IAutomationElement>{ 0xA1898370,0x2C07,0x56FD,{ 0x99,0x3F,0x61,0xA7,0x2A,0x08,0x05,0x8C } }; // A1898370-2C07-56FD-993F-61A72A08058C
    template <> inline constexpr guid guid_v<Windows::UI::UIAutomation::IAutomationTextRange>{ 0x7E101B65,0x40D3,0x5994,{ 0x85,0xA9,0x0A,0x0C,0xB9,0xA4,0xEC,0x98 } }; // 7E101B65-40D3-5994-85A9-0A0CB9A4EC98
    template <> struct default_interface<Windows::UI::UIAutomation::AutomationElement>{ using type = Windows::UI::UIAutomation::IAutomationElement; };
    template <> struct default_interface<Windows::UI::UIAutomation::AutomationTextRange>{ using type = Windows::UI::UIAutomation::IAutomationTextRange; };
    template <> struct abi<Windows::UI::UIAutomation::IAutomationElement>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsRemoteSystem(bool*) noexcept = 0;
            virtual int32_t __stdcall get_AppUserModelId(void**) noexcept = 0;
            virtual int32_t __stdcall get_ExecutableFileName(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::UIAutomation::IAutomationTextRange>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <typename D>
    struct consume_Windows_UI_UIAutomation_IAutomationElement
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsRemoteSystem() const noexcept;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) AppUserModelId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) ExecutableFileName() const;
    };
    template <> struct consume<Windows::UI::UIAutomation::IAutomationElement>
    {
        template <typename D> using type = consume_Windows_UI_UIAutomation_IAutomationElement<D>;
    };
    template <typename D>
    struct consume_Windows_UI_UIAutomation_IAutomationTextRange
    {
    };
    template <> struct consume<Windows::UI::UIAutomation::IAutomationTextRange>
    {
        template <typename D> using type = consume_Windows_UI_UIAutomation_IAutomationTextRange<D>;
    };
}
#endif
