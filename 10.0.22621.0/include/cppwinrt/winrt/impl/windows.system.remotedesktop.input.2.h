// C++/WinRT v2.0.220110.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_System_RemoteDesktop_Input_2_H
#define WINRT_Windows_System_RemoteDesktop_Input_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.System.RemoteDesktop.Input.1.h"
WINRT_EXPORT namespace winrt::Windows::System::RemoteDesktop::Input
{
    struct RemoteTextConnectionDataHandler : winrt::Windows::Foundation::IUnknown
    {
        RemoteTextConnectionDataHandler(std::nullptr_t = nullptr) noexcept {}
        RemoteTextConnectionDataHandler(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> RemoteTextConnectionDataHandler(L lambda);
        template <typename F> RemoteTextConnectionDataHandler(F* function);
        template <typename O, typename M> RemoteTextConnectionDataHandler(O* object, M method);
        template <typename O, typename M> RemoteTextConnectionDataHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> RemoteTextConnectionDataHandler(weak_ref<O>&& object, M method);
        auto operator()(array_view<uint8_t const> pduData) const;
    };
    struct __declspec(empty_bases) RemoteTextConnection : winrt::Windows::System::RemoteDesktop::Input::IRemoteTextConnection,
        impl::require<RemoteTextConnection, winrt::Windows::Foundation::IClosable>
    {
        RemoteTextConnection(std::nullptr_t) noexcept {}
        RemoteTextConnection(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::System::RemoteDesktop::Input::IRemoteTextConnection(ptr, take_ownership_from_abi) {}
        RemoteTextConnection(winrt::guid const& connectionId, winrt::Windows::System::RemoteDesktop::Input::RemoteTextConnectionDataHandler const& pduForwarder);
    };
}
#endif
