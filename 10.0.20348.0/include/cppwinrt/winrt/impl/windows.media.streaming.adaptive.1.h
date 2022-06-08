// C++/WinRT v2.0.200609.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Media_Streaming_Adaptive_1_H
#define WINRT_Windows_Media_Streaming_Adaptive_1_H
#include "winrt/impl/Windows.Media.Core.0.h"
#include "winrt/impl/Windows.Media.Streaming.Adaptive.0.h"
WINRT_EXPORT namespace winrt::Windows::Media::Streaming::Adaptive
{
    struct __declspec(empty_bases) IAdaptiveMediaSource :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAdaptiveMediaSource>,
        impl::require<Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource, Windows::Media::Core::IMediaSource>
    {
        IAdaptiveMediaSource(std::nullptr_t = nullptr) noexcept {}
        IAdaptiveMediaSource(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAdaptiveMediaSource2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAdaptiveMediaSource2>
    {
        IAdaptiveMediaSource2(std::nullptr_t = nullptr) noexcept {}
        IAdaptiveMediaSource2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAdaptiveMediaSource3 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAdaptiveMediaSource3>
    {
        IAdaptiveMediaSource3(std::nullptr_t = nullptr) noexcept {}
        IAdaptiveMediaSource3(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAdaptiveMediaSourceAdvancedSettings :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAdaptiveMediaSourceAdvancedSettings>
    {
        IAdaptiveMediaSourceAdvancedSettings(std::nullptr_t = nullptr) noexcept {}
        IAdaptiveMediaSourceAdvancedSettings(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAdaptiveMediaSourceCorrelatedTimes :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAdaptiveMediaSourceCorrelatedTimes>
    {
        IAdaptiveMediaSourceCorrelatedTimes(std::nullptr_t = nullptr) noexcept {}
        IAdaptiveMediaSourceCorrelatedTimes(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAdaptiveMediaSourceCreationResult :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAdaptiveMediaSourceCreationResult>
    {
        IAdaptiveMediaSourceCreationResult(std::nullptr_t = nullptr) noexcept {}
        IAdaptiveMediaSourceCreationResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAdaptiveMediaSourceCreationResult2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAdaptiveMediaSourceCreationResult2>
    {
        IAdaptiveMediaSourceCreationResult2(std::nullptr_t = nullptr) noexcept {}
        IAdaptiveMediaSourceCreationResult2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAdaptiveMediaSourceDiagnosticAvailableEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAdaptiveMediaSourceDiagnosticAvailableEventArgs>
    {
        IAdaptiveMediaSourceDiagnosticAvailableEventArgs(std::nullptr_t = nullptr) noexcept {}
        IAdaptiveMediaSourceDiagnosticAvailableEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAdaptiveMediaSourceDiagnosticAvailableEventArgs2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAdaptiveMediaSourceDiagnosticAvailableEventArgs2>
    {
        IAdaptiveMediaSourceDiagnosticAvailableEventArgs2(std::nullptr_t = nullptr) noexcept {}
        IAdaptiveMediaSourceDiagnosticAvailableEventArgs2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAdaptiveMediaSourceDiagnosticAvailableEventArgs3 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAdaptiveMediaSourceDiagnosticAvailableEventArgs3>
    {
        IAdaptiveMediaSourceDiagnosticAvailableEventArgs3(std::nullptr_t = nullptr) noexcept {}
        IAdaptiveMediaSourceDiagnosticAvailableEventArgs3(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAdaptiveMediaSourceDiagnostics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAdaptiveMediaSourceDiagnostics>
    {
        IAdaptiveMediaSourceDiagnostics(std::nullptr_t = nullptr) noexcept {}
        IAdaptiveMediaSourceDiagnostics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAdaptiveMediaSourceDownloadBitrateChangedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAdaptiveMediaSourceDownloadBitrateChangedEventArgs>
    {
        IAdaptiveMediaSourceDownloadBitrateChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IAdaptiveMediaSourceDownloadBitrateChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAdaptiveMediaSourceDownloadBitrateChangedEventArgs2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAdaptiveMediaSourceDownloadBitrateChangedEventArgs2>
    {
        IAdaptiveMediaSourceDownloadBitrateChangedEventArgs2(std::nullptr_t = nullptr) noexcept {}
        IAdaptiveMediaSourceDownloadBitrateChangedEventArgs2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAdaptiveMediaSourceDownloadCompletedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAdaptiveMediaSourceDownloadCompletedEventArgs>
    {
        IAdaptiveMediaSourceDownloadCompletedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IAdaptiveMediaSourceDownloadCompletedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAdaptiveMediaSourceDownloadCompletedEventArgs2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAdaptiveMediaSourceDownloadCompletedEventArgs2>
    {
        IAdaptiveMediaSourceDownloadCompletedEventArgs2(std::nullptr_t = nullptr) noexcept {}
        IAdaptiveMediaSourceDownloadCompletedEventArgs2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAdaptiveMediaSourceDownloadCompletedEventArgs3 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAdaptiveMediaSourceDownloadCompletedEventArgs3>
    {
        IAdaptiveMediaSourceDownloadCompletedEventArgs3(std::nullptr_t = nullptr) noexcept {}
        IAdaptiveMediaSourceDownloadCompletedEventArgs3(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAdaptiveMediaSourceDownloadFailedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAdaptiveMediaSourceDownloadFailedEventArgs>
    {
        IAdaptiveMediaSourceDownloadFailedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IAdaptiveMediaSourceDownloadFailedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAdaptiveMediaSourceDownloadFailedEventArgs2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAdaptiveMediaSourceDownloadFailedEventArgs2>
    {
        IAdaptiveMediaSourceDownloadFailedEventArgs2(std::nullptr_t = nullptr) noexcept {}
        IAdaptiveMediaSourceDownloadFailedEventArgs2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAdaptiveMediaSourceDownloadFailedEventArgs3 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAdaptiveMediaSourceDownloadFailedEventArgs3>
    {
        IAdaptiveMediaSourceDownloadFailedEventArgs3(std::nullptr_t = nullptr) noexcept {}
        IAdaptiveMediaSourceDownloadFailedEventArgs3(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAdaptiveMediaSourceDownloadRequestedDeferral :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAdaptiveMediaSourceDownloadRequestedDeferral>
    {
        IAdaptiveMediaSourceDownloadRequestedDeferral(std::nullptr_t = nullptr) noexcept {}
        IAdaptiveMediaSourceDownloadRequestedDeferral(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAdaptiveMediaSourceDownloadRequestedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAdaptiveMediaSourceDownloadRequestedEventArgs>
    {
        IAdaptiveMediaSourceDownloadRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IAdaptiveMediaSourceDownloadRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAdaptiveMediaSourceDownloadRequestedEventArgs2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAdaptiveMediaSourceDownloadRequestedEventArgs2>
    {
        IAdaptiveMediaSourceDownloadRequestedEventArgs2(std::nullptr_t = nullptr) noexcept {}
        IAdaptiveMediaSourceDownloadRequestedEventArgs2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAdaptiveMediaSourceDownloadRequestedEventArgs3 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAdaptiveMediaSourceDownloadRequestedEventArgs3>
    {
        IAdaptiveMediaSourceDownloadRequestedEventArgs3(std::nullptr_t = nullptr) noexcept {}
        IAdaptiveMediaSourceDownloadRequestedEventArgs3(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAdaptiveMediaSourceDownloadResult :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAdaptiveMediaSourceDownloadResult>
    {
        IAdaptiveMediaSourceDownloadResult(std::nullptr_t = nullptr) noexcept {}
        IAdaptiveMediaSourceDownloadResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAdaptiveMediaSourceDownloadResult2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAdaptiveMediaSourceDownloadResult2>
    {
        IAdaptiveMediaSourceDownloadResult2(std::nullptr_t = nullptr) noexcept {}
        IAdaptiveMediaSourceDownloadResult2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAdaptiveMediaSourceDownloadStatistics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAdaptiveMediaSourceDownloadStatistics>
    {
        IAdaptiveMediaSourceDownloadStatistics(std::nullptr_t = nullptr) noexcept {}
        IAdaptiveMediaSourceDownloadStatistics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAdaptiveMediaSourcePlaybackBitrateChangedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAdaptiveMediaSourcePlaybackBitrateChangedEventArgs>
    {
        IAdaptiveMediaSourcePlaybackBitrateChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IAdaptiveMediaSourcePlaybackBitrateChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAdaptiveMediaSourceStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAdaptiveMediaSourceStatics>
    {
        IAdaptiveMediaSourceStatics(std::nullptr_t = nullptr) noexcept {}
        IAdaptiveMediaSourceStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
