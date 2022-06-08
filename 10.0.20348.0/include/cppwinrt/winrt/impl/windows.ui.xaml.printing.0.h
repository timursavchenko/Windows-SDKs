// C++/WinRT v2.0.200609.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_Xaml_Printing_0_H
#define WINRT_Windows_UI_Xaml_Printing_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
}
WINRT_EXPORT namespace winrt::Windows::Graphics::Printing
{
    struct IPrintDocumentSource;
    struct PrintTaskOptions;
}
WINRT_EXPORT namespace winrt::Windows::UI::Xaml
{
    struct DependencyProperty;
    struct UIElement;
}
WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Printing
{
    enum class PreviewPageCountType : int32_t
    {
        Final = 0,
        Intermediate = 1,
    };
    struct IAddPagesEventArgs;
    struct IGetPreviewPageEventArgs;
    struct IPaginateEventArgs;
    struct IPrintDocument;
    struct IPrintDocumentFactory;
    struct IPrintDocumentStatics;
    struct AddPagesEventArgs;
    struct GetPreviewPageEventArgs;
    struct PaginateEventArgs;
    struct PrintDocument;
    struct AddPagesEventHandler;
    struct GetPreviewPageEventHandler;
    struct PaginateEventHandler;
}
namespace winrt::impl
{
    template <> struct category<Windows::UI::Xaml::Printing::IAddPagesEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Printing::IGetPreviewPageEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Printing::IPaginateEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Printing::IPrintDocument>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Printing::IPrintDocumentFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Printing::IPrintDocumentStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Printing::AddPagesEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Printing::GetPreviewPageEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Printing::PaginateEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Printing::PrintDocument>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Printing::PreviewPageCountType>{ using type = enum_category; };
    template <> struct category<Windows::UI::Xaml::Printing::AddPagesEventHandler>{ using type = delegate_category; };
    template <> struct category<Windows::UI::Xaml::Printing::GetPreviewPageEventHandler>{ using type = delegate_category; };
    template <> struct category<Windows::UI::Xaml::Printing::PaginateEventHandler>{ using type = delegate_category; };
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Printing::AddPagesEventArgs> = L"Windows.UI.Xaml.Printing.AddPagesEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Printing::GetPreviewPageEventArgs> = L"Windows.UI.Xaml.Printing.GetPreviewPageEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Printing::PaginateEventArgs> = L"Windows.UI.Xaml.Printing.PaginateEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Printing::PrintDocument> = L"Windows.UI.Xaml.Printing.PrintDocument";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Printing::PreviewPageCountType> = L"Windows.UI.Xaml.Printing.PreviewPageCountType";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Printing::IAddPagesEventArgs> = L"Windows.UI.Xaml.Printing.IAddPagesEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Printing::IGetPreviewPageEventArgs> = L"Windows.UI.Xaml.Printing.IGetPreviewPageEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Printing::IPaginateEventArgs> = L"Windows.UI.Xaml.Printing.IPaginateEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Printing::IPrintDocument> = L"Windows.UI.Xaml.Printing.IPrintDocument";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Printing::IPrintDocumentFactory> = L"Windows.UI.Xaml.Printing.IPrintDocumentFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Printing::IPrintDocumentStatics> = L"Windows.UI.Xaml.Printing.IPrintDocumentStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Printing::AddPagesEventHandler> = L"Windows.UI.Xaml.Printing.AddPagesEventHandler";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Printing::GetPreviewPageEventHandler> = L"Windows.UI.Xaml.Printing.GetPreviewPageEventHandler";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Printing::PaginateEventHandler> = L"Windows.UI.Xaml.Printing.PaginateEventHandler";
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Printing::IAddPagesEventArgs>{ 0xE2E52BE5,0x056C,0x4420,{ 0x97,0x95,0xCB,0x35,0x26,0xCE,0x0C,0x20 } }; // E2E52BE5-056C-4420-9795-CB3526CE0C20
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Printing::IGetPreviewPageEventArgs>{ 0xA43D703D,0xDEA9,0x4DF6,{ 0xA7,0xED,0x35,0x04,0x9C,0xD4,0x85,0xC7 } }; // A43D703D-DEA9-4DF6-A7ED-35049CD485C7
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Printing::IPaginateEventArgs>{ 0xED945FD6,0x79AB,0x42B7,{ 0x93,0x0A,0x3D,0x6E,0x09,0x01,0x1D,0x21 } }; // ED945FD6-79AB-42B7-930A-3D6E09011D21
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Printing::IPrintDocument>{ 0xE44327C3,0xA999,0x485B,{ 0xB1,0xD8,0x72,0xDC,0x51,0x78,0x21,0xE6 } }; // E44327C3-A999-485B-B1D8-72DC517821E6
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Printing::IPrintDocumentFactory>{ 0xFB87B18F,0x2606,0x4A2F,{ 0x99,0xD4,0xA7,0xCD,0xBC,0x35,0xD7,0xC7 } }; // FB87B18F-2606-4A2F-99D4-A7CDBC35D7C7
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Printing::IPrintDocumentStatics>{ 0xFD970A3C,0xB152,0x49E0,{ 0xA6,0xBD,0x6A,0xA6,0x47,0x7E,0x43,0xC7 } }; // FD970A3C-B152-49E0-A6BD-6AA6477E43C7
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Printing::AddPagesEventHandler>{ 0xD4B57970,0x57A0,0x4209,{ 0x84,0x7C,0xC0,0x93,0xB5,0x4B,0xC7,0x29 } }; // D4B57970-57A0-4209-847C-C093B54BC729
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Printing::GetPreviewPageEventHandler>{ 0xCCB3E9ED,0x9C11,0x4E50,{ 0xAB,0x49,0xE9,0x80,0x86,0xBB,0xFD,0xEF } }; // CCB3E9ED-9C11-4E50-AB49-E98086BBFDEF
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Printing::PaginateEventHandler>{ 0x0CC05B61,0x811B,0x4A32,{ 0x99,0x65,0x13,0xEB,0x78,0xDB,0xB0,0x1B } }; // 0CC05B61-811B-4A32-9965-13EB78DBB01B
    template <> struct default_interface<Windows::UI::Xaml::Printing::AddPagesEventArgs>{ using type = Windows::UI::Xaml::Printing::IAddPagesEventArgs; };
    template <> struct default_interface<Windows::UI::Xaml::Printing::GetPreviewPageEventArgs>{ using type = Windows::UI::Xaml::Printing::IGetPreviewPageEventArgs; };
    template <> struct default_interface<Windows::UI::Xaml::Printing::PaginateEventArgs>{ using type = Windows::UI::Xaml::Printing::IPaginateEventArgs; };
    template <> struct default_interface<Windows::UI::Xaml::Printing::PrintDocument>{ using type = Windows::UI::Xaml::Printing::IPrintDocument; };
    template <> struct abi<Windows::UI::Xaml::Printing::IAddPagesEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PrintTaskOptions(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Printing::IGetPreviewPageEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PageNumber(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Printing::IPaginateEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PrintTaskOptions(void**) noexcept = 0;
            virtual int32_t __stdcall get_CurrentPreviewPageNumber(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Printing::IPrintDocument>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DocumentSource(void**) noexcept = 0;
            virtual int32_t __stdcall add_Paginate(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Paginate(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_GetPreviewPage(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_GetPreviewPage(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_AddPages(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_AddPages(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall AddPage(void*) noexcept = 0;
            virtual int32_t __stdcall AddPagesComplete() noexcept = 0;
            virtual int32_t __stdcall SetPreviewPageCount(int32_t, int32_t) noexcept = 0;
            virtual int32_t __stdcall SetPreviewPage(int32_t, void*) noexcept = 0;
            virtual int32_t __stdcall InvalidatePreview() noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Printing::IPrintDocumentFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Printing::IPrintDocumentStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DocumentSourceProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Printing::AddPagesEventHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Printing::GetPreviewPageEventHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Printing::PaginateEventHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*, void*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Printing_IAddPagesEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Graphics::Printing::PrintTaskOptions) PrintTaskOptions() const;
    };
    template <> struct consume<Windows::UI::Xaml::Printing::IAddPagesEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Printing_IAddPagesEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Printing_IGetPreviewPageEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) PageNumber() const;
    };
    template <> struct consume<Windows::UI::Xaml::Printing::IGetPreviewPageEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Printing_IGetPreviewPageEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Printing_IPaginateEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Graphics::Printing::PrintTaskOptions) PrintTaskOptions() const;
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) CurrentPreviewPageNumber() const;
    };
    template <> struct consume<Windows::UI::Xaml::Printing::IPaginateEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Printing_IPaginateEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Printing_IPrintDocument
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Graphics::Printing::IPrintDocumentSource) DocumentSource() const;
        WINRT_IMPL_AUTO(winrt::event_token) Paginate(Windows::UI::Xaml::Printing::PaginateEventHandler const& handler) const;
        using Paginate_revoker = impl::event_revoker<Windows::UI::Xaml::Printing::IPrintDocument, &impl::abi_t<Windows::UI::Xaml::Printing::IPrintDocument>::remove_Paginate>;
        [[nodiscard]] Paginate_revoker Paginate(auto_revoke_t, Windows::UI::Xaml::Printing::PaginateEventHandler const& handler) const;
        WINRT_IMPL_AUTO(void) Paginate(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) GetPreviewPage(Windows::UI::Xaml::Printing::GetPreviewPageEventHandler const& handler) const;
        using GetPreviewPage_revoker = impl::event_revoker<Windows::UI::Xaml::Printing::IPrintDocument, &impl::abi_t<Windows::UI::Xaml::Printing::IPrintDocument>::remove_GetPreviewPage>;
        [[nodiscard]] GetPreviewPage_revoker GetPreviewPage(auto_revoke_t, Windows::UI::Xaml::Printing::GetPreviewPageEventHandler const& handler) const;
        WINRT_IMPL_AUTO(void) GetPreviewPage(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) AddPages(Windows::UI::Xaml::Printing::AddPagesEventHandler const& handler) const;
        using AddPages_revoker = impl::event_revoker<Windows::UI::Xaml::Printing::IPrintDocument, &impl::abi_t<Windows::UI::Xaml::Printing::IPrintDocument>::remove_AddPages>;
        [[nodiscard]] AddPages_revoker AddPages(auto_revoke_t, Windows::UI::Xaml::Printing::AddPagesEventHandler const& handler) const;
        WINRT_IMPL_AUTO(void) AddPages(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(void) AddPage(Windows::UI::Xaml::UIElement const& pageVisual) const;
        WINRT_IMPL_AUTO(void) AddPagesComplete() const;
        WINRT_IMPL_AUTO(void) SetPreviewPageCount(int32_t count, Windows::UI::Xaml::Printing::PreviewPageCountType const& type) const;
        WINRT_IMPL_AUTO(void) SetPreviewPage(int32_t pageNumber, Windows::UI::Xaml::UIElement const& pageVisual) const;
        WINRT_IMPL_AUTO(void) InvalidatePreview() const;
    };
    template <> struct consume<Windows::UI::Xaml::Printing::IPrintDocument>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Printing_IPrintDocument<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Printing_IPrintDocumentFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Printing::PrintDocument) CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Printing::IPrintDocumentFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Printing_IPrintDocumentFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Printing_IPrintDocumentStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) DocumentSourceProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Printing::IPrintDocumentStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Printing_IPrintDocumentStatics<D>;
    };
}
#endif
