// C++/WinRT v2.0.220110.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_ApplicationModel_Activation_1_H
#define WINRT_Windows_ApplicationModel_Activation_1_H
#include "winrt/impl/Windows.ApplicationModel.Activation.0.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Activation
{
    struct __declspec(empty_bases) IActivatedEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IActivatedEventArgs>
    {
        IActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IActivatedEventArgsWithUser :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IActivatedEventArgsWithUser>,
        impl::require<winrt::Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser, winrt::Windows::ApplicationModel::Activation::IActivatedEventArgs>
    {
        IActivatedEventArgsWithUser(std::nullptr_t = nullptr) noexcept {}
        IActivatedEventArgsWithUser(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IApplicationViewActivatedEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IApplicationViewActivatedEventArgs>,
        impl::require<winrt::Windows::ApplicationModel::Activation::IApplicationViewActivatedEventArgs, winrt::Windows::ApplicationModel::Activation::IActivatedEventArgs>
    {
        IApplicationViewActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IApplicationViewActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAppointmentsProviderActivatedEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IAppointmentsProviderActivatedEventArgs>,
        impl::require<winrt::Windows::ApplicationModel::Activation::IAppointmentsProviderActivatedEventArgs, winrt::Windows::ApplicationModel::Activation::IActivatedEventArgs>
    {
        IAppointmentsProviderActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IAppointmentsProviderActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAppointmentsProviderAddAppointmentActivatedEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IAppointmentsProviderAddAppointmentActivatedEventArgs>,
        impl::require<winrt::Windows::ApplicationModel::Activation::IAppointmentsProviderAddAppointmentActivatedEventArgs, winrt::Windows::ApplicationModel::Activation::IActivatedEventArgs, winrt::Windows::ApplicationModel::Activation::IAppointmentsProviderActivatedEventArgs>
    {
        IAppointmentsProviderAddAppointmentActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IAppointmentsProviderAddAppointmentActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAppointmentsProviderRemoveAppointmentActivatedEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IAppointmentsProviderRemoveAppointmentActivatedEventArgs>,
        impl::require<winrt::Windows::ApplicationModel::Activation::IAppointmentsProviderRemoveAppointmentActivatedEventArgs, winrt::Windows::ApplicationModel::Activation::IActivatedEventArgs, winrt::Windows::ApplicationModel::Activation::IAppointmentsProviderActivatedEventArgs>
    {
        IAppointmentsProviderRemoveAppointmentActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IAppointmentsProviderRemoveAppointmentActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAppointmentsProviderReplaceAppointmentActivatedEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IAppointmentsProviderReplaceAppointmentActivatedEventArgs>,
        impl::require<winrt::Windows::ApplicationModel::Activation::IAppointmentsProviderReplaceAppointmentActivatedEventArgs, winrt::Windows::ApplicationModel::Activation::IActivatedEventArgs, winrt::Windows::ApplicationModel::Activation::IAppointmentsProviderActivatedEventArgs>
    {
        IAppointmentsProviderReplaceAppointmentActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IAppointmentsProviderReplaceAppointmentActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs>,
        impl::require<winrt::Windows::ApplicationModel::Activation::IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs, winrt::Windows::ApplicationModel::Activation::IActivatedEventArgs, winrt::Windows::ApplicationModel::Activation::IAppointmentsProviderActivatedEventArgs>
    {
        IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAppointmentsProviderShowTimeFrameActivatedEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IAppointmentsProviderShowTimeFrameActivatedEventArgs>,
        impl::require<winrt::Windows::ApplicationModel::Activation::IAppointmentsProviderShowTimeFrameActivatedEventArgs, winrt::Windows::ApplicationModel::Activation::IActivatedEventArgs, winrt::Windows::ApplicationModel::Activation::IAppointmentsProviderActivatedEventArgs>
    {
        IAppointmentsProviderShowTimeFrameActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IAppointmentsProviderShowTimeFrameActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBackgroundActivatedEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IBackgroundActivatedEventArgs>
    {
        IBackgroundActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IBackgroundActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBarcodeScannerPreviewActivatedEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IBarcodeScannerPreviewActivatedEventArgs>,
        impl::require<winrt::Windows::ApplicationModel::Activation::IBarcodeScannerPreviewActivatedEventArgs, winrt::Windows::ApplicationModel::Activation::IActivatedEventArgs>
    {
        IBarcodeScannerPreviewActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IBarcodeScannerPreviewActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICachedFileUpdaterActivatedEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ICachedFileUpdaterActivatedEventArgs>,
        impl::require<winrt::Windows::ApplicationModel::Activation::ICachedFileUpdaterActivatedEventArgs, winrt::Windows::ApplicationModel::Activation::IActivatedEventArgs>
    {
        ICachedFileUpdaterActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        ICachedFileUpdaterActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICameraSettingsActivatedEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ICameraSettingsActivatedEventArgs>,
        impl::require<winrt::Windows::ApplicationModel::Activation::ICameraSettingsActivatedEventArgs, winrt::Windows::ApplicationModel::Activation::IActivatedEventArgs>
    {
        ICameraSettingsActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        ICameraSettingsActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICommandLineActivatedEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ICommandLineActivatedEventArgs>,
        impl::require<winrt::Windows::ApplicationModel::Activation::ICommandLineActivatedEventArgs, winrt::Windows::ApplicationModel::Activation::IActivatedEventArgs>
    {
        ICommandLineActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        ICommandLineActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICommandLineActivationOperation :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ICommandLineActivationOperation>
    {
        ICommandLineActivationOperation(std::nullptr_t = nullptr) noexcept {}
        ICommandLineActivationOperation(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IContactActivatedEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IContactActivatedEventArgs>,
        impl::require<winrt::Windows::ApplicationModel::Activation::IContactActivatedEventArgs, winrt::Windows::ApplicationModel::Activation::IActivatedEventArgs>
    {
        IContactActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IContactActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IContactCallActivatedEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IContactCallActivatedEventArgs>,
        impl::require<winrt::Windows::ApplicationModel::Activation::IContactCallActivatedEventArgs, winrt::Windows::ApplicationModel::Activation::IActivatedEventArgs, winrt::Windows::ApplicationModel::Activation::IContactActivatedEventArgs>
    {
        IContactCallActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IContactCallActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IContactMapActivatedEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IContactMapActivatedEventArgs>,
        impl::require<winrt::Windows::ApplicationModel::Activation::IContactMapActivatedEventArgs, winrt::Windows::ApplicationModel::Activation::IActivatedEventArgs, winrt::Windows::ApplicationModel::Activation::IContactActivatedEventArgs>
    {
        IContactMapActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IContactMapActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IContactMessageActivatedEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IContactMessageActivatedEventArgs>,
        impl::require<winrt::Windows::ApplicationModel::Activation::IContactMessageActivatedEventArgs, winrt::Windows::ApplicationModel::Activation::IActivatedEventArgs, winrt::Windows::ApplicationModel::Activation::IContactActivatedEventArgs>
    {
        IContactMessageActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IContactMessageActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IContactPanelActivatedEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IContactPanelActivatedEventArgs>
    {
        IContactPanelActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IContactPanelActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IContactPickerActivatedEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IContactPickerActivatedEventArgs>,
        impl::require<winrt::Windows::ApplicationModel::Activation::IContactPickerActivatedEventArgs, winrt::Windows::ApplicationModel::Activation::IActivatedEventArgs>
    {
        IContactPickerActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IContactPickerActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IContactPostActivatedEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IContactPostActivatedEventArgs>,
        impl::require<winrt::Windows::ApplicationModel::Activation::IContactPostActivatedEventArgs, winrt::Windows::ApplicationModel::Activation::IActivatedEventArgs, winrt::Windows::ApplicationModel::Activation::IContactActivatedEventArgs>
    {
        IContactPostActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IContactPostActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IContactVideoCallActivatedEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IContactVideoCallActivatedEventArgs>,
        impl::require<winrt::Windows::ApplicationModel::Activation::IContactVideoCallActivatedEventArgs, winrt::Windows::ApplicationModel::Activation::IActivatedEventArgs, winrt::Windows::ApplicationModel::Activation::IContactActivatedEventArgs>
    {
        IContactVideoCallActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IContactVideoCallActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IContactsProviderActivatedEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IContactsProviderActivatedEventArgs>,
        impl::require<winrt::Windows::ApplicationModel::Activation::IContactsProviderActivatedEventArgs, winrt::Windows::ApplicationModel::Activation::IActivatedEventArgs>
    {
        IContactsProviderActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IContactsProviderActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IContinuationActivatedEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IContinuationActivatedEventArgs>,
        impl::require<winrt::Windows::ApplicationModel::Activation::IContinuationActivatedEventArgs, winrt::Windows::ApplicationModel::Activation::IActivatedEventArgs>
    {
        IContinuationActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IContinuationActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDeviceActivatedEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IDeviceActivatedEventArgs>,
        impl::require<winrt::Windows::ApplicationModel::Activation::IDeviceActivatedEventArgs, winrt::Windows::ApplicationModel::Activation::IActivatedEventArgs>
    {
        IDeviceActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IDeviceActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDevicePairingActivatedEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IDevicePairingActivatedEventArgs>,
        impl::require<winrt::Windows::ApplicationModel::Activation::IDevicePairingActivatedEventArgs, winrt::Windows::ApplicationModel::Activation::IActivatedEventArgs>
    {
        IDevicePairingActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IDevicePairingActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDialReceiverActivatedEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IDialReceiverActivatedEventArgs>,
        impl::require<winrt::Windows::ApplicationModel::Activation::IDialReceiverActivatedEventArgs, winrt::Windows::ApplicationModel::Activation::IActivatedEventArgs, winrt::Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs>
    {
        IDialReceiverActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IDialReceiverActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IFileActivatedEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IFileActivatedEventArgs>,
        impl::require<winrt::Windows::ApplicationModel::Activation::IFileActivatedEventArgs, winrt::Windows::ApplicationModel::Activation::IActivatedEventArgs>
    {
        IFileActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IFileActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IFileActivatedEventArgsWithCallerPackageFamilyName :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IFileActivatedEventArgsWithCallerPackageFamilyName>,
        impl::require<winrt::Windows::ApplicationModel::Activation::IFileActivatedEventArgsWithCallerPackageFamilyName, winrt::Windows::ApplicationModel::Activation::IActivatedEventArgs>
    {
        IFileActivatedEventArgsWithCallerPackageFamilyName(std::nullptr_t = nullptr) noexcept {}
        IFileActivatedEventArgsWithCallerPackageFamilyName(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IFileActivatedEventArgsWithNeighboringFiles :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IFileActivatedEventArgsWithNeighboringFiles>,
        impl::require<winrt::Windows::ApplicationModel::Activation::IFileActivatedEventArgsWithNeighboringFiles, winrt::Windows::ApplicationModel::Activation::IActivatedEventArgs, winrt::Windows::ApplicationModel::Activation::IFileActivatedEventArgs>
    {
        IFileActivatedEventArgsWithNeighboringFiles(std::nullptr_t = nullptr) noexcept {}
        IFileActivatedEventArgsWithNeighboringFiles(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IFileOpenPickerActivatedEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IFileOpenPickerActivatedEventArgs>,
        impl::require<winrt::Windows::ApplicationModel::Activation::IFileOpenPickerActivatedEventArgs, winrt::Windows::ApplicationModel::Activation::IActivatedEventArgs>
    {
        IFileOpenPickerActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IFileOpenPickerActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IFileOpenPickerActivatedEventArgs2 :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IFileOpenPickerActivatedEventArgs2>
    {
        IFileOpenPickerActivatedEventArgs2(std::nullptr_t = nullptr) noexcept {}
        IFileOpenPickerActivatedEventArgs2(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IFileOpenPickerContinuationEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IFileOpenPickerContinuationEventArgs>,
        impl::require<winrt::Windows::ApplicationModel::Activation::IFileOpenPickerContinuationEventArgs, winrt::Windows::ApplicationModel::Activation::IActivatedEventArgs, winrt::Windows::ApplicationModel::Activation::IContinuationActivatedEventArgs>
    {
        IFileOpenPickerContinuationEventArgs(std::nullptr_t = nullptr) noexcept {}
        IFileOpenPickerContinuationEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IFileSavePickerActivatedEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IFileSavePickerActivatedEventArgs>,
        impl::require<winrt::Windows::ApplicationModel::Activation::IFileSavePickerActivatedEventArgs, winrt::Windows::ApplicationModel::Activation::IActivatedEventArgs>
    {
        IFileSavePickerActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IFileSavePickerActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IFileSavePickerActivatedEventArgs2 :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IFileSavePickerActivatedEventArgs2>
    {
        IFileSavePickerActivatedEventArgs2(std::nullptr_t = nullptr) noexcept {}
        IFileSavePickerActivatedEventArgs2(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IFileSavePickerContinuationEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IFileSavePickerContinuationEventArgs>,
        impl::require<winrt::Windows::ApplicationModel::Activation::IFileSavePickerContinuationEventArgs, winrt::Windows::ApplicationModel::Activation::IActivatedEventArgs, winrt::Windows::ApplicationModel::Activation::IContinuationActivatedEventArgs>
    {
        IFileSavePickerContinuationEventArgs(std::nullptr_t = nullptr) noexcept {}
        IFileSavePickerContinuationEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IFolderPickerContinuationEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IFolderPickerContinuationEventArgs>,
        impl::require<winrt::Windows::ApplicationModel::Activation::IFolderPickerContinuationEventArgs, winrt::Windows::ApplicationModel::Activation::IActivatedEventArgs, winrt::Windows::ApplicationModel::Activation::IContinuationActivatedEventArgs>
    {
        IFolderPickerContinuationEventArgs(std::nullptr_t = nullptr) noexcept {}
        IFolderPickerContinuationEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ILaunchActivatedEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ILaunchActivatedEventArgs>,
        impl::require<winrt::Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs, winrt::Windows::ApplicationModel::Activation::IActivatedEventArgs>
    {
        ILaunchActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        ILaunchActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ILaunchActivatedEventArgs2 :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ILaunchActivatedEventArgs2>,
        impl::require<winrt::Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2, winrt::Windows::ApplicationModel::Activation::IActivatedEventArgs, winrt::Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs>
    {
        ILaunchActivatedEventArgs2(std::nullptr_t = nullptr) noexcept {}
        ILaunchActivatedEventArgs2(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ILockScreenActivatedEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ILockScreenActivatedEventArgs>,
        impl::require<winrt::Windows::ApplicationModel::Activation::ILockScreenActivatedEventArgs, winrt::Windows::ApplicationModel::Activation::IActivatedEventArgs>
    {
        ILockScreenActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        ILockScreenActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ILockScreenCallActivatedEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ILockScreenCallActivatedEventArgs>,
        impl::require<winrt::Windows::ApplicationModel::Activation::ILockScreenCallActivatedEventArgs, winrt::Windows::ApplicationModel::Activation::IActivatedEventArgs, winrt::Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs>
    {
        ILockScreenCallActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        ILockScreenCallActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPhoneCallActivatedEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPhoneCallActivatedEventArgs>,
        impl::require<winrt::Windows::ApplicationModel::Activation::IPhoneCallActivatedEventArgs, winrt::Windows::ApplicationModel::Activation::IActivatedEventArgs>
    {
        IPhoneCallActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IPhoneCallActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPickerReturnedActivatedEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPickerReturnedActivatedEventArgs>,
        impl::require<winrt::Windows::ApplicationModel::Activation::IPickerReturnedActivatedEventArgs, winrt::Windows::ApplicationModel::Activation::IActivatedEventArgs>
    {
        IPickerReturnedActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IPickerReturnedActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPrelaunchActivatedEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPrelaunchActivatedEventArgs>,
        impl::require<winrt::Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs, winrt::Windows::ApplicationModel::Activation::IActivatedEventArgs>
    {
        IPrelaunchActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IPrelaunchActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPrint3DWorkflowActivatedEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPrint3DWorkflowActivatedEventArgs>,
        impl::require<winrt::Windows::ApplicationModel::Activation::IPrint3DWorkflowActivatedEventArgs, winrt::Windows::ApplicationModel::Activation::IActivatedEventArgs>
    {
        IPrint3DWorkflowActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IPrint3DWorkflowActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPrintTaskSettingsActivatedEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPrintTaskSettingsActivatedEventArgs>,
        impl::require<winrt::Windows::ApplicationModel::Activation::IPrintTaskSettingsActivatedEventArgs, winrt::Windows::ApplicationModel::Activation::IActivatedEventArgs>
    {
        IPrintTaskSettingsActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IPrintTaskSettingsActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IProtocolActivatedEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IProtocolActivatedEventArgs>,
        impl::require<winrt::Windows::ApplicationModel::Activation::IProtocolActivatedEventArgs, winrt::Windows::ApplicationModel::Activation::IActivatedEventArgs>
    {
        IProtocolActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IProtocolActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData>,
        impl::require<winrt::Windows::ApplicationModel::Activation::IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData, winrt::Windows::ApplicationModel::Activation::IActivatedEventArgs>
    {
        IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData(std::nullptr_t = nullptr) noexcept {}
        IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IProtocolForResultsActivatedEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IProtocolForResultsActivatedEventArgs>,
        impl::require<winrt::Windows::ApplicationModel::Activation::IProtocolForResultsActivatedEventArgs, winrt::Windows::ApplicationModel::Activation::IActivatedEventArgs>
    {
        IProtocolForResultsActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IProtocolForResultsActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IRestrictedLaunchActivatedEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IRestrictedLaunchActivatedEventArgs>,
        impl::require<winrt::Windows::ApplicationModel::Activation::IRestrictedLaunchActivatedEventArgs, winrt::Windows::ApplicationModel::Activation::IActivatedEventArgs>
    {
        IRestrictedLaunchActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IRestrictedLaunchActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISearchActivatedEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISearchActivatedEventArgs>,
        impl::require<winrt::Windows::ApplicationModel::Activation::ISearchActivatedEventArgs, winrt::Windows::ApplicationModel::Activation::IActivatedEventArgs>
    {
        ISearchActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        ISearchActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISearchActivatedEventArgsWithLinguisticDetails :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISearchActivatedEventArgsWithLinguisticDetails>
    {
        ISearchActivatedEventArgsWithLinguisticDetails(std::nullptr_t = nullptr) noexcept {}
        ISearchActivatedEventArgsWithLinguisticDetails(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IShareTargetActivatedEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IShareTargetActivatedEventArgs>,
        impl::require<winrt::Windows::ApplicationModel::Activation::IShareTargetActivatedEventArgs, winrt::Windows::ApplicationModel::Activation::IActivatedEventArgs>
    {
        IShareTargetActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IShareTargetActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISplashScreen :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISplashScreen>
    {
        ISplashScreen(std::nullptr_t = nullptr) noexcept {}
        ISplashScreen(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStartupTaskActivatedEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IStartupTaskActivatedEventArgs>,
        impl::require<winrt::Windows::ApplicationModel::Activation::IStartupTaskActivatedEventArgs, winrt::Windows::ApplicationModel::Activation::IActivatedEventArgs>
    {
        IStartupTaskActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IStartupTaskActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ITileActivatedInfo :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ITileActivatedInfo>
    {
        ITileActivatedInfo(std::nullptr_t = nullptr) noexcept {}
        ITileActivatedInfo(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IToastNotificationActivatedEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IToastNotificationActivatedEventArgs>,
        impl::require<winrt::Windows::ApplicationModel::Activation::IToastNotificationActivatedEventArgs, winrt::Windows::ApplicationModel::Activation::IActivatedEventArgs>
    {
        IToastNotificationActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IToastNotificationActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IUserDataAccountProviderActivatedEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IUserDataAccountProviderActivatedEventArgs>,
        impl::require<winrt::Windows::ApplicationModel::Activation::IUserDataAccountProviderActivatedEventArgs, winrt::Windows::ApplicationModel::Activation::IActivatedEventArgs>
    {
        IUserDataAccountProviderActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IUserDataAccountProviderActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IViewSwitcherProvider :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IViewSwitcherProvider>,
        impl::require<winrt::Windows::ApplicationModel::Activation::IViewSwitcherProvider, winrt::Windows::ApplicationModel::Activation::IActivatedEventArgs>
    {
        IViewSwitcherProvider(std::nullptr_t = nullptr) noexcept {}
        IViewSwitcherProvider(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IVoiceCommandActivatedEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IVoiceCommandActivatedEventArgs>,
        impl::require<winrt::Windows::ApplicationModel::Activation::IVoiceCommandActivatedEventArgs, winrt::Windows::ApplicationModel::Activation::IActivatedEventArgs>
    {
        IVoiceCommandActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IVoiceCommandActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWalletActionActivatedEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IWalletActionActivatedEventArgs>,
        impl::require<winrt::Windows::ApplicationModel::Activation::IWalletActionActivatedEventArgs, winrt::Windows::ApplicationModel::Activation::IActivatedEventArgs>
    {
        IWalletActionActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IWalletActionActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWebAccountProviderActivatedEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IWebAccountProviderActivatedEventArgs>,
        impl::require<winrt::Windows::ApplicationModel::Activation::IWebAccountProviderActivatedEventArgs, winrt::Windows::ApplicationModel::Activation::IActivatedEventArgs>
    {
        IWebAccountProviderActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IWebAccountProviderActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWebAuthenticationBrokerContinuationEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IWebAuthenticationBrokerContinuationEventArgs>,
        impl::require<winrt::Windows::ApplicationModel::Activation::IWebAuthenticationBrokerContinuationEventArgs, winrt::Windows::ApplicationModel::Activation::IActivatedEventArgs, winrt::Windows::ApplicationModel::Activation::IContinuationActivatedEventArgs>
    {
        IWebAuthenticationBrokerContinuationEventArgs(std::nullptr_t = nullptr) noexcept {}
        IWebAuthenticationBrokerContinuationEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
