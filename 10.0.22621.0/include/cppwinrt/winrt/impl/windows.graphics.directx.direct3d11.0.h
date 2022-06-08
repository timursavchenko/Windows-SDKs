// C++/WinRT v2.0.220110.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_Graphics_DirectX_Direct3D11_0_H
#define WINRT_Windows_Graphics_DirectX_Direct3D11_0_H
WINRT_EXPORT namespace winrt::Windows::Graphics::DirectX
{
    enum class DirectXPixelFormat : int32_t;
}
WINRT_EXPORT namespace winrt::Windows::Graphics::DirectX::Direct3D11
{
    enum class Direct3DBindings : uint32_t
    {
        VertexBuffer = 0x1,
        IndexBuffer = 0x2,
        ConstantBuffer = 0x4,
        ShaderResource = 0x8,
        StreamOutput = 0x10,
        RenderTarget = 0x20,
        DepthStencil = 0x40,
        UnorderedAccess = 0x80,
        Decoder = 0x200,
        VideoEncoder = 0x400,
    };
    enum class Direct3DUsage : int32_t
    {
        Default = 0,
        Immutable = 1,
        Dynamic = 2,
        Staging = 3,
    };
    struct IDirect3DDevice;
    struct IDirect3DSurface;
    struct Direct3DMultisampleDescription;
    struct Direct3DSurfaceDescription;
}
namespace winrt::impl
{
    template <> struct category<winrt::Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Graphics::DirectX::Direct3D11::Direct3DBindings>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Graphics::DirectX::Direct3D11::Direct3DUsage>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Graphics::DirectX::Direct3D11::Direct3DMultisampleDescription>{ using type = struct_category<int32_t, int32_t>; };
    template <> struct category<winrt::Windows::Graphics::DirectX::Direct3D11::Direct3DSurfaceDescription>{ using type = struct_category<int32_t, int32_t, winrt::Windows::Graphics::DirectX::DirectXPixelFormat, winrt::Windows::Graphics::DirectX::Direct3D11::Direct3DMultisampleDescription>; };
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::DirectX::Direct3D11::Direct3DBindings> = L"Windows.Graphics.DirectX.Direct3D11.Direct3DBindings";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::DirectX::Direct3D11::Direct3DUsage> = L"Windows.Graphics.DirectX.Direct3D11.Direct3DUsage";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::DirectX::Direct3D11::Direct3DMultisampleDescription> = L"Windows.Graphics.DirectX.Direct3D11.Direct3DMultisampleDescription";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::DirectX::Direct3D11::Direct3DSurfaceDescription> = L"Windows.Graphics.DirectX.Direct3D11.Direct3DSurfaceDescription";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice> = L"Windows.Graphics.DirectX.Direct3D11.IDirect3DDevice";
    template <> inline constexpr auto& name_v<winrt::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface> = L"Windows.Graphics.DirectX.Direct3D11.IDirect3DSurface";
    template <> inline constexpr guid guid_v<winrt::Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice>{ 0xA37624AB,0x8D5F,0x4650,{ 0x9D,0x3E,0x9E,0xAE,0x3D,0x9B,0xC6,0x70 } }; // A37624AB-8D5F-4650-9D3E-9EAE3D9BC670
    template <> inline constexpr guid guid_v<winrt::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface>{ 0x0BF4A146,0x13C1,0x4694,{ 0xBE,0xE3,0x7A,0xBF,0x15,0xEA,0xF5,0x86 } }; // 0BF4A146-13C1-4694-BEE3-7ABF15EAF586
    template <> struct abi<winrt::Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Trim() noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Description(struct struct_Windows_Graphics_DirectX_Direct3D11_Direct3DSurfaceDescription*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Graphics_DirectX_Direct3D11_IDirect3DDevice
    {
        WINRT_IMPL_AUTO(void) Trim() const;
    };
    template <> struct consume<winrt::Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice>
    {
        template <typename D> using type = consume_Windows_Graphics_DirectX_Direct3D11_IDirect3DDevice<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_DirectX_Direct3D11_IDirect3DSurface
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Graphics::DirectX::Direct3D11::Direct3DSurfaceDescription) Description() const;
    };
    template <> struct consume<winrt::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface>
    {
        template <typename D> using type = consume_Windows_Graphics_DirectX_Direct3D11_IDirect3DSurface<D>;
    };
    struct struct_Windows_Graphics_DirectX_Direct3D11_Direct3DMultisampleDescription
    {
        int32_t Count;
        int32_t Quality;
    };
    template <> struct abi<Windows::Graphics::DirectX::Direct3D11::Direct3DMultisampleDescription>
    {
        using type = struct_Windows_Graphics_DirectX_Direct3D11_Direct3DMultisampleDescription;
    };
    struct struct_Windows_Graphics_DirectX_Direct3D11_Direct3DSurfaceDescription
    {
        int32_t Width;
        int32_t Height;
        int32_t Format;
        struct{ int32_t Count; int32_t Quality; } MultisampleDescription;
    };
    template <> struct abi<Windows::Graphics::DirectX::Direct3D11::Direct3DSurfaceDescription>
    {
        using type = struct_Windows_Graphics_DirectX_Direct3D11_Direct3DSurfaceDescription;
    };
}
#endif
