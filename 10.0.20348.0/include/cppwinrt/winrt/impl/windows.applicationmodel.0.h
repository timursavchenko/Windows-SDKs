// C++/WinRT v2.0.200609.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_0_H
#define WINRT_Windows_ApplicationModel_0_H
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Activation
{
    struct IActivatedEventArgs;
}
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Core
{
    struct AppListEntry;
}
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct Deferral;
    struct EventRegistrationToken;
    struct HResult;
    struct IAsyncAction;
    template <typename TResult, typename TProgress> struct __declspec(empty_bases) IAsyncOperationWithProgress;
    template <typename TResult> struct __declspec(empty_bases) IAsyncOperation;
    template <typename T> struct __declspec(empty_bases) IReference;
    struct Size;
    template <typename TSender, typename TResult> struct __declspec(empty_bases) TypedEventHandler;
    struct Uri;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct __declspec(empty_bases) IIterable;
    template <typename T> struct __declspec(empty_bases) IVectorView;
    template <typename T> struct __declspec(empty_bases) IVector;
}
WINRT_EXPORT namespace winrt::Windows::Storage
{
    struct StorageFolder;
}
WINRT_EXPORT namespace winrt::Windows::Storage::Streams
{
    struct RandomAccessStreamReference;
}
WINRT_EXPORT namespace winrt::Windows::System
{
    enum class ProcessorArchitecture : int32_t;
    struct User;
}
WINRT_EXPORT namespace winrt::Windows::ApplicationModel
{
    enum class AddResourcePackageOptions : uint32_t
    {
        None = 0,
        ForceTargetAppShutdown = 0x1,
        ApplyUpdateIfAvailable = 0x2,
    };
    enum class AppExecutionContext : int32_t
    {
        Unknown = 0,
        Host = 1,
        Guest = 2,
    };
    enum class LimitedAccessFeatureStatus : int32_t
    {
        Unavailable = 0,
        Available = 1,
        AvailableWithoutToken = 2,
        Unknown = 3,
    };
    enum class PackageContentGroupState : int32_t
    {
        NotStaged = 0,
        Queued = 1,
        Staging = 2,
        Staged = 3,
    };
    enum class PackageSignatureKind : int32_t
    {
        None = 0,
        Developer = 1,
        Enterprise = 2,
        Store = 3,
        System = 4,
    };
    enum class PackageUpdateAvailability : int32_t
    {
        Unknown = 0,
        NoUpdates = 1,
        Available = 2,
        Required = 3,
        Error = 4,
    };
    enum class StartupTaskState : int32_t
    {
        Disabled = 0,
        DisabledByUser = 1,
        Enabled = 2,
        DisabledByPolicy = 3,
        EnabledByPolicy = 4,
    };
    struct IAppDisplayInfo;
    struct IAppInfo;
    struct IAppInfo2;
    struct IAppInfo3;
    struct IAppInfo4;
    struct IAppInfoStatics;
    struct IAppInstallerInfo;
    struct IAppInstance;
    struct IAppInstanceStatics;
    struct IDesignModeStatics;
    struct IDesignModeStatics2;
    struct IEnteredBackgroundEventArgs;
    struct IFullTrustProcessLauncherStatics;
    struct ILeavingBackgroundEventArgs;
    struct ILimitedAccessFeatureRequestResult;
    struct ILimitedAccessFeaturesStatics;
    struct IPackage;
    struct IPackage2;
    struct IPackage3;
    struct IPackage4;
    struct IPackage5;
    struct IPackage6;
    struct IPackage7;
    struct IPackage8;
    struct IPackageCatalog;
    struct IPackageCatalog2;
    struct IPackageCatalog3;
    struct IPackageCatalog4;
    struct IPackageCatalogAddOptionalPackageResult;
    struct IPackageCatalogAddResourcePackageResult;
    struct IPackageCatalogRemoveOptionalPackagesResult;
    struct IPackageCatalogRemoveResourcePackagesResult;
    struct IPackageCatalogStatics;
    struct IPackageContentGroup;
    struct IPackageContentGroupStagingEventArgs;
    struct IPackageContentGroupStatics;
    struct IPackageId;
    struct IPackageIdWithMetadata;
    struct IPackageInstallingEventArgs;
    struct IPackageStagingEventArgs;
    struct IPackageStatics;
    struct IPackageStatus;
    struct IPackageStatus2;
    struct IPackageStatusChangedEventArgs;
    struct IPackageUninstallingEventArgs;
    struct IPackageUpdateAvailabilityResult;
    struct IPackageUpdatingEventArgs;
    struct IPackageWithMetadata;
    struct IStartupTask;
    struct IStartupTaskStatics;
    struct ISuspendingDeferral;
    struct ISuspendingEventArgs;
    struct ISuspendingOperation;
    struct AppDisplayInfo;
    struct AppInfo;
    struct AppInstallerInfo;
    struct AppInstance;
    struct DesignMode;
    struct EnteredBackgroundEventArgs;
    struct FullTrustProcessLauncher;
    struct LeavingBackgroundEventArgs;
    struct LimitedAccessFeatureRequestResult;
    struct LimitedAccessFeatures;
    struct Package;
    struct PackageCatalog;
    struct PackageCatalogAddOptionalPackageResult;
    struct PackageCatalogAddResourcePackageResult;
    struct PackageCatalogRemoveOptionalPackagesResult;
    struct PackageCatalogRemoveResourcePackagesResult;
    struct PackageContentGroup;
    struct PackageContentGroupStagingEventArgs;
    struct PackageId;
    struct PackageInstallingEventArgs;
    struct PackageStagingEventArgs;
    struct PackageStatus;
    struct PackageStatusChangedEventArgs;
    struct PackageUninstallingEventArgs;
    struct PackageUpdateAvailabilityResult;
    struct PackageUpdatingEventArgs;
    struct StartupTask;
    struct SuspendingDeferral;
    struct SuspendingEventArgs;
    struct SuspendingOperation;
    struct PackageInstallProgress;
    struct PackageVersion;
}
namespace winrt::impl
{
    template <> struct category<Windows::ApplicationModel::IAppDisplayInfo>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::IAppInfo>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::IAppInfo2>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::IAppInfo3>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::IAppInfo4>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::IAppInfoStatics>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::IAppInstallerInfo>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::IAppInstance>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::IAppInstanceStatics>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::IDesignModeStatics>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::IDesignModeStatics2>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::IEnteredBackgroundEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::IFullTrustProcessLauncherStatics>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::ILeavingBackgroundEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::ILimitedAccessFeatureRequestResult>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::ILimitedAccessFeaturesStatics>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::IPackage>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::IPackage2>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::IPackage3>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::IPackage4>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::IPackage5>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::IPackage6>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::IPackage7>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::IPackage8>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::IPackageCatalog>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::IPackageCatalog2>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::IPackageCatalog3>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::IPackageCatalog4>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::IPackageCatalogAddOptionalPackageResult>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::IPackageCatalogAddResourcePackageResult>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::IPackageCatalogRemoveOptionalPackagesResult>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::IPackageCatalogRemoveResourcePackagesResult>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::IPackageCatalogStatics>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::IPackageContentGroup>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::IPackageContentGroupStagingEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::IPackageContentGroupStatics>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::IPackageId>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::IPackageIdWithMetadata>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::IPackageInstallingEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::IPackageStagingEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::IPackageStatics>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::IPackageStatus>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::IPackageStatus2>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::IPackageStatusChangedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::IPackageUninstallingEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::IPackageUpdateAvailabilityResult>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::IPackageUpdatingEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::IPackageWithMetadata>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::IStartupTask>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::IStartupTaskStatics>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::ISuspendingDeferral>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::ISuspendingEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::ISuspendingOperation>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::AppDisplayInfo>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::AppInfo>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::AppInstallerInfo>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::AppInstance>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::DesignMode>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::EnteredBackgroundEventArgs>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::FullTrustProcessLauncher>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::LeavingBackgroundEventArgs>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::LimitedAccessFeatureRequestResult>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::LimitedAccessFeatures>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Package>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::PackageCatalog>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::PackageCatalogAddOptionalPackageResult>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::PackageCatalogAddResourcePackageResult>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::PackageCatalogRemoveOptionalPackagesResult>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::PackageCatalogRemoveResourcePackagesResult>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::PackageContentGroup>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::PackageContentGroupStagingEventArgs>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::PackageId>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::PackageInstallingEventArgs>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::PackageStagingEventArgs>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::PackageStatus>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::PackageStatusChangedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::PackageUninstallingEventArgs>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::PackageUpdateAvailabilityResult>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::PackageUpdatingEventArgs>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::StartupTask>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::SuspendingDeferral>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::SuspendingEventArgs>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::SuspendingOperation>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::AddResourcePackageOptions>{ using type = enum_category; };
    template <> struct category<Windows::ApplicationModel::AppExecutionContext>{ using type = enum_category; };
    template <> struct category<Windows::ApplicationModel::LimitedAccessFeatureStatus>{ using type = enum_category; };
    template <> struct category<Windows::ApplicationModel::PackageContentGroupState>{ using type = enum_category; };
    template <> struct category<Windows::ApplicationModel::PackageSignatureKind>{ using type = enum_category; };
    template <> struct category<Windows::ApplicationModel::PackageUpdateAvailability>{ using type = enum_category; };
    template <> struct category<Windows::ApplicationModel::StartupTaskState>{ using type = enum_category; };
    template <> struct category<Windows::ApplicationModel::PackageInstallProgress>{ using type = struct_category<uint32_t>; };
    template <> struct category<Windows::ApplicationModel::PackageVersion>{ using type = struct_category<uint16_t, uint16_t, uint16_t, uint16_t>; };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::AppDisplayInfo> = L"Windows.ApplicationModel.AppDisplayInfo";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::AppInfo> = L"Windows.ApplicationModel.AppInfo";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::AppInstallerInfo> = L"Windows.ApplicationModel.AppInstallerInfo";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::AppInstance> = L"Windows.ApplicationModel.AppInstance";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::DesignMode> = L"Windows.ApplicationModel.DesignMode";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::EnteredBackgroundEventArgs> = L"Windows.ApplicationModel.EnteredBackgroundEventArgs";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::FullTrustProcessLauncher> = L"Windows.ApplicationModel.FullTrustProcessLauncher";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::LeavingBackgroundEventArgs> = L"Windows.ApplicationModel.LeavingBackgroundEventArgs";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::LimitedAccessFeatureRequestResult> = L"Windows.ApplicationModel.LimitedAccessFeatureRequestResult";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::LimitedAccessFeatures> = L"Windows.ApplicationModel.LimitedAccessFeatures";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Package> = L"Windows.ApplicationModel.Package";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::PackageCatalog> = L"Windows.ApplicationModel.PackageCatalog";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::PackageCatalogAddOptionalPackageResult> = L"Windows.ApplicationModel.PackageCatalogAddOptionalPackageResult";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::PackageCatalogAddResourcePackageResult> = L"Windows.ApplicationModel.PackageCatalogAddResourcePackageResult";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::PackageCatalogRemoveOptionalPackagesResult> = L"Windows.ApplicationModel.PackageCatalogRemoveOptionalPackagesResult";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::PackageCatalogRemoveResourcePackagesResult> = L"Windows.ApplicationModel.PackageCatalogRemoveResourcePackagesResult";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::PackageContentGroup> = L"Windows.ApplicationModel.PackageContentGroup";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::PackageContentGroupStagingEventArgs> = L"Windows.ApplicationModel.PackageContentGroupStagingEventArgs";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::PackageId> = L"Windows.ApplicationModel.PackageId";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::PackageInstallingEventArgs> = L"Windows.ApplicationModel.PackageInstallingEventArgs";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::PackageStagingEventArgs> = L"Windows.ApplicationModel.PackageStagingEventArgs";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::PackageStatus> = L"Windows.ApplicationModel.PackageStatus";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::PackageStatusChangedEventArgs> = L"Windows.ApplicationModel.PackageStatusChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::PackageUninstallingEventArgs> = L"Windows.ApplicationModel.PackageUninstallingEventArgs";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::PackageUpdateAvailabilityResult> = L"Windows.ApplicationModel.PackageUpdateAvailabilityResult";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::PackageUpdatingEventArgs> = L"Windows.ApplicationModel.PackageUpdatingEventArgs";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::StartupTask> = L"Windows.ApplicationModel.StartupTask";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::SuspendingDeferral> = L"Windows.ApplicationModel.SuspendingDeferral";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::SuspendingEventArgs> = L"Windows.ApplicationModel.SuspendingEventArgs";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::SuspendingOperation> = L"Windows.ApplicationModel.SuspendingOperation";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::AddResourcePackageOptions> = L"Windows.ApplicationModel.AddResourcePackageOptions";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::AppExecutionContext> = L"Windows.ApplicationModel.AppExecutionContext";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::LimitedAccessFeatureStatus> = L"Windows.ApplicationModel.LimitedAccessFeatureStatus";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::PackageContentGroupState> = L"Windows.ApplicationModel.PackageContentGroupState";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::PackageSignatureKind> = L"Windows.ApplicationModel.PackageSignatureKind";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::PackageUpdateAvailability> = L"Windows.ApplicationModel.PackageUpdateAvailability";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::StartupTaskState> = L"Windows.ApplicationModel.StartupTaskState";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::PackageInstallProgress> = L"Windows.ApplicationModel.PackageInstallProgress";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::PackageVersion> = L"Windows.ApplicationModel.PackageVersion";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::IAppDisplayInfo> = L"Windows.ApplicationModel.IAppDisplayInfo";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::IAppInfo> = L"Windows.ApplicationModel.IAppInfo";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::IAppInfo2> = L"Windows.ApplicationModel.IAppInfo2";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::IAppInfo3> = L"Windows.ApplicationModel.IAppInfo3";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::IAppInfo4> = L"Windows.ApplicationModel.IAppInfo4";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::IAppInfoStatics> = L"Windows.ApplicationModel.IAppInfoStatics";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::IAppInstallerInfo> = L"Windows.ApplicationModel.IAppInstallerInfo";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::IAppInstance> = L"Windows.ApplicationModel.IAppInstance";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::IAppInstanceStatics> = L"Windows.ApplicationModel.IAppInstanceStatics";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::IDesignModeStatics> = L"Windows.ApplicationModel.IDesignModeStatics";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::IDesignModeStatics2> = L"Windows.ApplicationModel.IDesignModeStatics2";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::IEnteredBackgroundEventArgs> = L"Windows.ApplicationModel.IEnteredBackgroundEventArgs";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::IFullTrustProcessLauncherStatics> = L"Windows.ApplicationModel.IFullTrustProcessLauncherStatics";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::ILeavingBackgroundEventArgs> = L"Windows.ApplicationModel.ILeavingBackgroundEventArgs";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::ILimitedAccessFeatureRequestResult> = L"Windows.ApplicationModel.ILimitedAccessFeatureRequestResult";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::ILimitedAccessFeaturesStatics> = L"Windows.ApplicationModel.ILimitedAccessFeaturesStatics";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::IPackage> = L"Windows.ApplicationModel.IPackage";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::IPackage2> = L"Windows.ApplicationModel.IPackage2";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::IPackage3> = L"Windows.ApplicationModel.IPackage3";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::IPackage4> = L"Windows.ApplicationModel.IPackage4";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::IPackage5> = L"Windows.ApplicationModel.IPackage5";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::IPackage6> = L"Windows.ApplicationModel.IPackage6";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::IPackage7> = L"Windows.ApplicationModel.IPackage7";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::IPackage8> = L"Windows.ApplicationModel.IPackage8";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::IPackageCatalog> = L"Windows.ApplicationModel.IPackageCatalog";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::IPackageCatalog2> = L"Windows.ApplicationModel.IPackageCatalog2";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::IPackageCatalog3> = L"Windows.ApplicationModel.IPackageCatalog3";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::IPackageCatalog4> = L"Windows.ApplicationModel.IPackageCatalog4";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::IPackageCatalogAddOptionalPackageResult> = L"Windows.ApplicationModel.IPackageCatalogAddOptionalPackageResult";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::IPackageCatalogAddResourcePackageResult> = L"Windows.ApplicationModel.IPackageCatalogAddResourcePackageResult";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::IPackageCatalogRemoveOptionalPackagesResult> = L"Windows.ApplicationModel.IPackageCatalogRemoveOptionalPackagesResult";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::IPackageCatalogRemoveResourcePackagesResult> = L"Windows.ApplicationModel.IPackageCatalogRemoveResourcePackagesResult";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::IPackageCatalogStatics> = L"Windows.ApplicationModel.IPackageCatalogStatics";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::IPackageContentGroup> = L"Windows.ApplicationModel.IPackageContentGroup";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::IPackageContentGroupStagingEventArgs> = L"Windows.ApplicationModel.IPackageContentGroupStagingEventArgs";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::IPackageContentGroupStatics> = L"Windows.ApplicationModel.IPackageContentGroupStatics";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::IPackageId> = L"Windows.ApplicationModel.IPackageId";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::IPackageIdWithMetadata> = L"Windows.ApplicationModel.IPackageIdWithMetadata";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::IPackageInstallingEventArgs> = L"Windows.ApplicationModel.IPackageInstallingEventArgs";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::IPackageStagingEventArgs> = L"Windows.ApplicationModel.IPackageStagingEventArgs";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::IPackageStatics> = L"Windows.ApplicationModel.IPackageStatics";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::IPackageStatus> = L"Windows.ApplicationModel.IPackageStatus";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::IPackageStatus2> = L"Windows.ApplicationModel.IPackageStatus2";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::IPackageStatusChangedEventArgs> = L"Windows.ApplicationModel.IPackageStatusChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::IPackageUninstallingEventArgs> = L"Windows.ApplicationModel.IPackageUninstallingEventArgs";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::IPackageUpdateAvailabilityResult> = L"Windows.ApplicationModel.IPackageUpdateAvailabilityResult";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::IPackageUpdatingEventArgs> = L"Windows.ApplicationModel.IPackageUpdatingEventArgs";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::IPackageWithMetadata> = L"Windows.ApplicationModel.IPackageWithMetadata";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::IStartupTask> = L"Windows.ApplicationModel.IStartupTask";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::IStartupTaskStatics> = L"Windows.ApplicationModel.IStartupTaskStatics";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::ISuspendingDeferral> = L"Windows.ApplicationModel.ISuspendingDeferral";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::ISuspendingEventArgs> = L"Windows.ApplicationModel.ISuspendingEventArgs";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::ISuspendingOperation> = L"Windows.ApplicationModel.ISuspendingOperation";
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::IAppDisplayInfo>{ 0x1AEB1103,0xE4D4,0x41AA,{ 0xA4,0xF6,0xC4,0xA2,0x76,0xE7,0x9E,0xAC } }; // 1AEB1103-E4D4-41AA-A4F6-C4A276E79EAC
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::IAppInfo>{ 0xCF7F59B3,0x6A09,0x4DE8,{ 0xA6,0xC0,0x57,0x92,0xD5,0x68,0x80,0xD1 } }; // CF7F59B3-6A09-4DE8-A6C0-5792D56880D1
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::IAppInfo2>{ 0xBE4B1F5A,0x2098,0x431B,{ 0xBD,0x25,0xB3,0x08,0x78,0x74,0x8D,0x47 } }; // BE4B1F5A-2098-431B-BD25-B30878748D47
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::IAppInfo3>{ 0x09A78E46,0x93A4,0x46DE,{ 0x93,0x97,0x08,0x43,0xB5,0x71,0x15,0xEA } }; // 09A78E46-93A4-46DE-9397-0843B57115EA
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::IAppInfo4>{ 0x2F34BDEB,0x1609,0x4554,{ 0x9F,0x33,0x12,0xE1,0xE8,0x03,0xE0,0xD4 } }; // 2F34BDEB-1609-4554-9F33-12E1E803E0D4
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::IAppInfoStatics>{ 0xCF1F782A,0xE48B,0x4F0C,{ 0x9B,0x0B,0x79,0xC3,0xF8,0x95,0x7D,0xD7 } }; // CF1F782A-E48B-4F0C-9B0B-79C3F8957DD7
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::IAppInstallerInfo>{ 0x29AB2AC0,0xD4F6,0x42A3,{ 0xAD,0xCD,0xD6,0x58,0x3C,0x65,0x95,0x08 } }; // 29AB2AC0-D4F6-42A3-ADCD-D6583C659508
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::IAppInstance>{ 0x675F2B47,0xF25F,0x4532,{ 0x9F,0xD6,0x36,0x33,0xE0,0x63,0x4D,0x01 } }; // 675F2B47-F25F-4532-9FD6-3633E0634D01
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::IAppInstanceStatics>{ 0x9D11E77F,0x9EA6,0x47AF,{ 0xA6,0xEC,0x46,0x78,0x4C,0x5B,0xA2,0x54 } }; // 9D11E77F-9EA6-47AF-A6EC-46784C5BA254
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::IDesignModeStatics>{ 0x2C3893CC,0xF81A,0x4E7A,{ 0xB8,0x57,0x76,0xA8,0x08,0x87,0xE1,0x85 } }; // 2C3893CC-F81A-4E7A-B857-76A80887E185
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::IDesignModeStatics2>{ 0x80CF8137,0xB064,0x4858,{ 0xBE,0xC8,0x3E,0xBA,0x22,0x35,0x75,0x35 } }; // 80CF8137-B064-4858-BEC8-3EBA22357535
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::IEnteredBackgroundEventArgs>{ 0xF722DCC2,0x9827,0x403D,{ 0xAA,0xED,0xEC,0xCA,0x9A,0xC1,0x73,0x98 } }; // F722DCC2-9827-403D-AAED-ECCA9AC17398
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::IFullTrustProcessLauncherStatics>{ 0xD784837F,0x1100,0x3C6B,{ 0xA4,0x55,0xF6,0x26,0x2C,0xC3,0x31,0xB6 } }; // D784837F-1100-3C6B-A455-F6262CC331B6
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::ILeavingBackgroundEventArgs>{ 0x39C6EC9A,0xAE6E,0x46F9,{ 0xA0,0x7A,0xCF,0xC2,0x3F,0x88,0x73,0x3E } }; // 39C6EC9A-AE6E-46F9-A07A-CFC23F88733E
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::ILimitedAccessFeatureRequestResult>{ 0xD45156A6,0x1E24,0x5DDD,{ 0xAB,0xB4,0x61,0x88,0xAB,0xA4,0xD5,0xBF } }; // D45156A6-1E24-5DDD-ABB4-6188ABA4D5BF
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::ILimitedAccessFeaturesStatics>{ 0x8BE612D4,0x302B,0x5FBF,{ 0xA6,0x32,0x1A,0x99,0xE4,0x3E,0x89,0x25 } }; // 8BE612D4-302B-5FBF-A632-1A99E43E8925
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::IPackage>{ 0x163C792F,0xBD75,0x413C,{ 0xBF,0x23,0xB1,0xFE,0x7B,0x95,0xD8,0x25 } }; // 163C792F-BD75-413C-BF23-B1FE7B95D825
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::IPackage2>{ 0xA6612FB6,0x7688,0x4ACE,{ 0x95,0xFB,0x35,0x95,0x38,0xE7,0xAA,0x01 } }; // A6612FB6-7688-4ACE-95FB-359538E7AA01
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::IPackage3>{ 0x5F738B61,0xF86A,0x4917,{ 0x93,0xD1,0xF1,0xEE,0x9D,0x3B,0x35,0xD9 } }; // 5F738B61-F86A-4917-93D1-F1EE9D3B35D9
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::IPackage4>{ 0x65AED1AE,0xB95B,0x450C,{ 0x88,0x2B,0x62,0x55,0x18,0x7F,0x39,0x7E } }; // 65AED1AE-B95B-450C-882B-6255187F397E
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::IPackage5>{ 0x0E842DD4,0xD9AC,0x45ED,{ 0x9A,0x1E,0x74,0xCE,0x05,0x6B,0x26,0x35 } }; // 0E842DD4-D9AC-45ED-9A1E-74CE056B2635
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::IPackage6>{ 0x8B1AD942,0x12D7,0x4754,{ 0xAE,0x4E,0x63,0x8C,0xBC,0x0E,0x3A,0x2E } }; // 8B1AD942-12D7-4754-AE4E-638CBC0E3A2E
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::IPackage7>{ 0x86FF8D31,0xA2E4,0x45E0,{ 0x97,0x32,0x28,0x3A,0x6D,0x88,0xFD,0xE1 } }; // 86FF8D31-A2E4-45E0-9732-283A6D88FDE1
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::IPackage8>{ 0x2C584F7B,0xCE2A,0x4BE6,{ 0xA0,0x93,0x77,0xCF,0xBB,0x2A,0x7E,0xA1 } }; // 2C584F7B-CE2A-4BE6-A093-77CFBB2A7EA1
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::IPackageCatalog>{ 0x230A3751,0x9DE3,0x4445,{ 0xBE,0x74,0x91,0xFB,0x32,0x5A,0xBE,0xFE } }; // 230A3751-9DE3-4445-BE74-91FB325ABEFE
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::IPackageCatalog2>{ 0x96A60C36,0x8FF7,0x4344,{ 0xB6,0xBF,0xEE,0x64,0xC2,0x20,0x7E,0xD2 } }; // 96A60C36-8FF7-4344-B6BF-EE64C2207ED2
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::IPackageCatalog3>{ 0x96DD5C88,0x8837,0x43F9,{ 0x90,0x15,0x03,0x34,0x34,0xBA,0x14,0xF3 } }; // 96DD5C88-8837-43F9-9015-033434BA14F3
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::IPackageCatalog4>{ 0xC37C399B,0x44CC,0x4B7B,{ 0x8B,0xAF,0x79,0x6C,0x04,0xEA,0xD3,0xB9 } }; // C37C399B-44CC-4B7B-8BAF-796C04EAD3B9
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::IPackageCatalogAddOptionalPackageResult>{ 0x3BF10CD4,0xB4DF,0x47B3,{ 0xA9,0x63,0xE2,0xFA,0x83,0x2F,0x7D,0xD3 } }; // 3BF10CD4-B4DF-47B3-A963-E2FA832F7DD3
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::IPackageCatalogAddResourcePackageResult>{ 0x9636CE0D,0x3E17,0x493F,{ 0xAA,0x08,0xCC,0xEC,0x6F,0xDE,0xF6,0x99 } }; // 9636CE0D-3E17-493F-AA08-CCEC6FDEF699
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::IPackageCatalogRemoveOptionalPackagesResult>{ 0x29D2F97B,0xD974,0x4E64,{ 0x93,0x59,0x22,0xCA,0xDF,0xD7,0x98,0x28 } }; // 29D2F97B-D974-4E64-9359-22CADFD79828
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::IPackageCatalogRemoveResourcePackagesResult>{ 0xAE719709,0x1A52,0x4321,{ 0x87,0xB3,0xE5,0xA1,0xA1,0x79,0x81,0xA7 } }; // AE719709-1A52-4321-87B3-E5A1A17981A7
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::IPackageCatalogStatics>{ 0xA18C9696,0xE65B,0x4634,{ 0xBA,0x21,0x5E,0x63,0xEB,0x72,0x44,0xA7 } }; // A18C9696-E65B-4634-BA21-5E63EB7244A7
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::IPackageContentGroup>{ 0x8F62695D,0x120A,0x4798,{ 0xB5,0xE1,0x58,0x00,0xDD,0xA8,0xF2,0xE1 } }; // 8F62695D-120A-4798-B5E1-5800DDA8F2E1
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::IPackageContentGroupStagingEventArgs>{ 0x3D7BC27E,0x6F27,0x446C,{ 0x98,0x6E,0xD4,0x73,0x3D,0x4D,0x91,0x13 } }; // 3D7BC27E-6F27-446C-986E-D4733D4D9113
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::IPackageContentGroupStatics>{ 0x70EE7619,0x5F12,0x4B92,{ 0xB9,0xEA,0x6C,0xCA,0xDA,0x13,0xBC,0x75 } }; // 70EE7619-5F12-4B92-B9EA-6CCADA13BC75
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::IPackageId>{ 0x1ADB665E,0x37C7,0x4790,{ 0x99,0x80,0xDD,0x7A,0xE7,0x4E,0x8B,0xB2 } }; // 1ADB665E-37C7-4790-9980-DD7AE74E8BB2
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::IPackageIdWithMetadata>{ 0x40577A7C,0x0C9E,0x443D,{ 0x90,0x74,0x85,0x5F,0x5C,0xE0,0xA0,0x8D } }; // 40577A7C-0C9E-443D-9074-855F5CE0A08D
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::IPackageInstallingEventArgs>{ 0x97741EB7,0xAB7A,0x401A,{ 0x8B,0x61,0xEB,0x0E,0x7F,0xAF,0xF2,0x37 } }; // 97741EB7-AB7A-401A-8B61-EB0E7FAFF237
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::IPackageStagingEventArgs>{ 0x1041682D,0x54E2,0x4F51,{ 0xB8,0x28,0x9E,0xF7,0x04,0x6C,0x21,0x0F } }; // 1041682D-54E2-4F51-B828-9EF7046C210F
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::IPackageStatics>{ 0x4E534BDF,0x2960,0x4878,{ 0x97,0xA4,0x96,0x24,0xDE,0xB7,0x2F,0x2D } }; // 4E534BDF-2960-4878-97A4-9624DEB72F2D
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::IPackageStatus>{ 0x5FE74F71,0xA365,0x4C09,{ 0xA0,0x2D,0x04,0x6D,0x52,0x5E,0xA1,0xDA } }; // 5FE74F71-A365-4C09-A02D-046D525EA1DA
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::IPackageStatus2>{ 0xF428FA93,0x7C56,0x4862,{ 0xAC,0xFA,0xAB,0xAE,0xDC,0xC0,0x69,0x4D } }; // F428FA93-7C56-4862-ACFA-ABAEDCC0694D
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::IPackageStatusChangedEventArgs>{ 0x437D714D,0xBD80,0x4A70,{ 0xBC,0x50,0xF6,0xE7,0x96,0x50,0x95,0x75 } }; // 437D714D-BD80-4A70-BC50-F6E796509575
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::IPackageUninstallingEventArgs>{ 0x4443AA52,0xAB22,0x44CD,{ 0x82,0xBB,0x4E,0xC9,0xB8,0x27,0x36,0x7A } }; // 4443AA52-AB22-44CD-82BB-4EC9B827367A
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::IPackageUpdateAvailabilityResult>{ 0x114E5009,0x199A,0x48A1,{ 0xA0,0x79,0x31,0x3C,0x45,0x63,0x4A,0x71 } }; // 114E5009-199A-48A1-A079-313C45634A71
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::IPackageUpdatingEventArgs>{ 0xCD7B4228,0xFD74,0x443E,{ 0xB1,0x14,0x23,0xE6,0x77,0xB0,0xE8,0x6F } }; // CD7B4228-FD74-443E-B114-23E677B0E86F
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::IPackageWithMetadata>{ 0x95949780,0x1DE9,0x40F2,{ 0xB4,0x52,0x0D,0xE9,0xF1,0x91,0x00,0x12 } }; // 95949780-1DE9-40F2-B452-0DE9F1910012
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::IStartupTask>{ 0xF75C23C8,0xB5F2,0x4F6C,{ 0x88,0xDD,0x36,0xCB,0x1D,0x59,0x9D,0x17 } }; // F75C23C8-B5F2-4F6C-88DD-36CB1D599D17
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::IStartupTaskStatics>{ 0xEE5B60BD,0xA148,0x41A7,{ 0xB2,0x6E,0xE8,0xB8,0x8A,0x1E,0x62,0xF8 } }; // EE5B60BD-A148-41A7-B26E-E8B88A1E62F8
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::ISuspendingDeferral>{ 0x59140509,0x8BC9,0x4EB4,{ 0xB6,0x36,0xDA,0xBD,0xC4,0xF4,0x6F,0x66 } }; // 59140509-8BC9-4EB4-B636-DABDC4F46F66
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::ISuspendingEventArgs>{ 0x96061C05,0x2DBA,0x4D08,{ 0xB0,0xBD,0x2B,0x30,0xA1,0x31,0xC6,0xAA } }; // 96061C05-2DBA-4D08-B0BD-2B30A131C6AA
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::ISuspendingOperation>{ 0x9DA4CA41,0x20E1,0x4E9B,{ 0x9F,0x65,0xA9,0xF4,0x35,0x34,0x0C,0x3A } }; // 9DA4CA41-20E1-4E9B-9F65-A9F435340C3A
    template <> struct default_interface<Windows::ApplicationModel::AppDisplayInfo>{ using type = Windows::ApplicationModel::IAppDisplayInfo; };
    template <> struct default_interface<Windows::ApplicationModel::AppInfo>{ using type = Windows::ApplicationModel::IAppInfo; };
    template <> struct default_interface<Windows::ApplicationModel::AppInstallerInfo>{ using type = Windows::ApplicationModel::IAppInstallerInfo; };
    template <> struct default_interface<Windows::ApplicationModel::AppInstance>{ using type = Windows::ApplicationModel::IAppInstance; };
    template <> struct default_interface<Windows::ApplicationModel::EnteredBackgroundEventArgs>{ using type = Windows::ApplicationModel::IEnteredBackgroundEventArgs; };
    template <> struct default_interface<Windows::ApplicationModel::LeavingBackgroundEventArgs>{ using type = Windows::ApplicationModel::ILeavingBackgroundEventArgs; };
    template <> struct default_interface<Windows::ApplicationModel::LimitedAccessFeatureRequestResult>{ using type = Windows::ApplicationModel::ILimitedAccessFeatureRequestResult; };
    template <> struct default_interface<Windows::ApplicationModel::Package>{ using type = Windows::ApplicationModel::IPackage; };
    template <> struct default_interface<Windows::ApplicationModel::PackageCatalog>{ using type = Windows::ApplicationModel::IPackageCatalog; };
    template <> struct default_interface<Windows::ApplicationModel::PackageCatalogAddOptionalPackageResult>{ using type = Windows::ApplicationModel::IPackageCatalogAddOptionalPackageResult; };
    template <> struct default_interface<Windows::ApplicationModel::PackageCatalogAddResourcePackageResult>{ using type = Windows::ApplicationModel::IPackageCatalogAddResourcePackageResult; };
    template <> struct default_interface<Windows::ApplicationModel::PackageCatalogRemoveOptionalPackagesResult>{ using type = Windows::ApplicationModel::IPackageCatalogRemoveOptionalPackagesResult; };
    template <> struct default_interface<Windows::ApplicationModel::PackageCatalogRemoveResourcePackagesResult>{ using type = Windows::ApplicationModel::IPackageCatalogRemoveResourcePackagesResult; };
    template <> struct default_interface<Windows::ApplicationModel::PackageContentGroup>{ using type = Windows::ApplicationModel::IPackageContentGroup; };
    template <> struct default_interface<Windows::ApplicationModel::PackageContentGroupStagingEventArgs>{ using type = Windows::ApplicationModel::IPackageContentGroupStagingEventArgs; };
    template <> struct default_interface<Windows::ApplicationModel::PackageId>{ using type = Windows::ApplicationModel::IPackageId; };
    template <> struct default_interface<Windows::ApplicationModel::PackageInstallingEventArgs>{ using type = Windows::ApplicationModel::IPackageInstallingEventArgs; };
    template <> struct default_interface<Windows::ApplicationModel::PackageStagingEventArgs>{ using type = Windows::ApplicationModel::IPackageStagingEventArgs; };
    template <> struct default_interface<Windows::ApplicationModel::PackageStatus>{ using type = Windows::ApplicationModel::IPackageStatus; };
    template <> struct default_interface<Windows::ApplicationModel::PackageStatusChangedEventArgs>{ using type = Windows::ApplicationModel::IPackageStatusChangedEventArgs; };
    template <> struct default_interface<Windows::ApplicationModel::PackageUninstallingEventArgs>{ using type = Windows::ApplicationModel::IPackageUninstallingEventArgs; };
    template <> struct default_interface<Windows::ApplicationModel::PackageUpdateAvailabilityResult>{ using type = Windows::ApplicationModel::IPackageUpdateAvailabilityResult; };
    template <> struct default_interface<Windows::ApplicationModel::PackageUpdatingEventArgs>{ using type = Windows::ApplicationModel::IPackageUpdatingEventArgs; };
    template <> struct default_interface<Windows::ApplicationModel::StartupTask>{ using type = Windows::ApplicationModel::IStartupTask; };
    template <> struct default_interface<Windows::ApplicationModel::SuspendingDeferral>{ using type = Windows::ApplicationModel::ISuspendingDeferral; };
    template <> struct default_interface<Windows::ApplicationModel::SuspendingEventArgs>{ using type = Windows::ApplicationModel::ISuspendingEventArgs; };
    template <> struct default_interface<Windows::ApplicationModel::SuspendingOperation>{ using type = Windows::ApplicationModel::ISuspendingOperation; };
    template <> struct abi<Windows::ApplicationModel::IAppDisplayInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DisplayName(void**) noexcept = 0;
            virtual int32_t __stdcall get_Description(void**) noexcept = 0;
            virtual int32_t __stdcall GetLogo(Windows::Foundation::Size, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::IAppInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(void**) noexcept = 0;
            virtual int32_t __stdcall get_AppUserModelId(void**) noexcept = 0;
            virtual int32_t __stdcall get_DisplayInfo(void**) noexcept = 0;
            virtual int32_t __stdcall get_PackageFamilyName(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::IAppInfo2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Package(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::IAppInfo3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ExecutionContext(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::IAppInfo4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SupportedFileExtensions(uint32_t* __valueSize, void***) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::IAppInfoStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Current(void**) noexcept = 0;
            virtual int32_t __stdcall GetFromAppUserModelId(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetFromAppUserModelIdForUser(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::IAppInstallerInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Uri(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::IAppInstance>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Key(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsCurrentInstance(bool*) noexcept = 0;
            virtual int32_t __stdcall RedirectActivationTo() noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::IAppInstanceStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RecommendedInstance(void**) noexcept = 0;
            virtual int32_t __stdcall GetActivatedEventArgs(void**) noexcept = 0;
            virtual int32_t __stdcall FindOrRegisterInstanceForKey(void*, void**) noexcept = 0;
            virtual int32_t __stdcall Unregister() noexcept = 0;
            virtual int32_t __stdcall GetInstances(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::IDesignModeStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DesignModeEnabled(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::IDesignModeStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DesignMode2Enabled(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::IEnteredBackgroundEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::IFullTrustProcessLauncherStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall LaunchFullTrustProcessForCurrentAppAsync(void**) noexcept = 0;
            virtual int32_t __stdcall LaunchFullTrustProcessForCurrentAppWithParametersAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall LaunchFullTrustProcessForAppAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall LaunchFullTrustProcessForAppWithParametersAsync(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::ILeavingBackgroundEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::ILimitedAccessFeatureRequestResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FeatureId(void**) noexcept = 0;
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_EstimatedRemovalDate(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::ILimitedAccessFeaturesStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall TryUnlockFeature(void*, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::IPackage>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(void**) noexcept = 0;
            virtual int32_t __stdcall get_InstalledLocation(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsFramework(bool*) noexcept = 0;
            virtual int32_t __stdcall get_Dependencies(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::IPackage2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DisplayName(void**) noexcept = 0;
            virtual int32_t __stdcall get_PublisherDisplayName(void**) noexcept = 0;
            virtual int32_t __stdcall get_Description(void**) noexcept = 0;
            virtual int32_t __stdcall get_Logo(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsResourcePackage(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsBundle(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsDevelopmentMode(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::IPackage3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(void**) noexcept = 0;
            virtual int32_t __stdcall get_InstalledDate(int64_t*) noexcept = 0;
            virtual int32_t __stdcall GetAppListEntriesAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::IPackage4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SignatureKind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_IsOptional(bool*) noexcept = 0;
            virtual int32_t __stdcall VerifyContentIntegrityAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::IPackage5>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetContentGroupsAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetContentGroupAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall StageContentGroupsAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall StageContentGroupsWithPriorityAsync(void*, bool, void**) noexcept = 0;
            virtual int32_t __stdcall SetInUseAsync(bool, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::IPackage6>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetAppInstallerInfo(void**) noexcept = 0;
            virtual int32_t __stdcall CheckUpdateAvailabilityAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::IPackage7>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MutableLocation(void**) noexcept = 0;
            virtual int32_t __stdcall get_EffectiveLocation(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::IPackage8>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EffectiveExternalLocation(void**) noexcept = 0;
            virtual int32_t __stdcall get_MachineExternalLocation(void**) noexcept = 0;
            virtual int32_t __stdcall get_UserExternalLocation(void**) noexcept = 0;
            virtual int32_t __stdcall get_InstalledPath(void**) noexcept = 0;
            virtual int32_t __stdcall get_MutablePath(void**) noexcept = 0;
            virtual int32_t __stdcall get_EffectivePath(void**) noexcept = 0;
            virtual int32_t __stdcall get_EffectiveExternalPath(void**) noexcept = 0;
            virtual int32_t __stdcall get_MachineExternalPath(void**) noexcept = 0;
            virtual int32_t __stdcall get_UserExternalPath(void**) noexcept = 0;
            virtual int32_t __stdcall GetLogoAsRandomAccessStreamReference(Windows::Foundation::Size, void**) noexcept = 0;
            virtual int32_t __stdcall GetAppListEntries(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsStub(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::IPackageCatalog>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_PackageStaging(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PackageStaging(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_PackageInstalling(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PackageInstalling(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_PackageUpdating(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PackageUpdating(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_PackageUninstalling(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PackageUninstalling(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_PackageStatusChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PackageStatusChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::IPackageCatalog2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_PackageContentGroupStaging(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PackageContentGroupStaging(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall AddOptionalPackageAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::IPackageCatalog3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall RemoveOptionalPackagesAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::IPackageCatalog4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall AddResourcePackageAsync(void*, void*, uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall RemoveResourcePackagesAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::IPackageCatalogAddOptionalPackageResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Package(void**) noexcept = 0;
            virtual int32_t __stdcall get_ExtendedError(winrt::hresult*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::IPackageCatalogAddResourcePackageResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Package(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsComplete(bool*) noexcept = 0;
            virtual int32_t __stdcall get_ExtendedError(winrt::hresult*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::IPackageCatalogRemoveOptionalPackagesResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PackagesRemoved(void**) noexcept = 0;
            virtual int32_t __stdcall get_ExtendedError(winrt::hresult*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::IPackageCatalogRemoveResourcePackagesResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PackagesRemoved(void**) noexcept = 0;
            virtual int32_t __stdcall get_ExtendedError(winrt::hresult*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::IPackageCatalogStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall OpenForCurrentPackage(void**) noexcept = 0;
            virtual int32_t __stdcall OpenForCurrentUser(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::IPackageContentGroup>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Package(void**) noexcept = 0;
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
            virtual int32_t __stdcall get_State(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_IsRequired(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::IPackageContentGroupStagingEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ActivityId(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_Package(void**) noexcept = 0;
            virtual int32_t __stdcall get_Progress(double*) noexcept = 0;
            virtual int32_t __stdcall get_IsComplete(bool*) noexcept = 0;
            virtual int32_t __stdcall get_ErrorCode(winrt::hresult*) noexcept = 0;
            virtual int32_t __stdcall get_ContentGroupName(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsContentGroupRequired(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::IPackageContentGroupStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RequiredGroupName(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::IPackageId>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
            virtual int32_t __stdcall get_Version(struct struct_Windows_ApplicationModel_PackageVersion*) noexcept = 0;
            virtual int32_t __stdcall get_Architecture(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ResourceId(void**) noexcept = 0;
            virtual int32_t __stdcall get_Publisher(void**) noexcept = 0;
            virtual int32_t __stdcall get_PublisherId(void**) noexcept = 0;
            virtual int32_t __stdcall get_FullName(void**) noexcept = 0;
            virtual int32_t __stdcall get_FamilyName(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::IPackageIdWithMetadata>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ProductId(void**) noexcept = 0;
            virtual int32_t __stdcall get_Author(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::IPackageInstallingEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ActivityId(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_Package(void**) noexcept = 0;
            virtual int32_t __stdcall get_Progress(double*) noexcept = 0;
            virtual int32_t __stdcall get_IsComplete(bool*) noexcept = 0;
            virtual int32_t __stdcall get_ErrorCode(winrt::hresult*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::IPackageStagingEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ActivityId(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_Package(void**) noexcept = 0;
            virtual int32_t __stdcall get_Progress(double*) noexcept = 0;
            virtual int32_t __stdcall get_IsComplete(bool*) noexcept = 0;
            virtual int32_t __stdcall get_ErrorCode(winrt::hresult*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::IPackageStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Current(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::IPackageStatus>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall VerifyIsOK(bool*) noexcept = 0;
            virtual int32_t __stdcall get_NotAvailable(bool*) noexcept = 0;
            virtual int32_t __stdcall get_PackageOffline(bool*) noexcept = 0;
            virtual int32_t __stdcall get_DataOffline(bool*) noexcept = 0;
            virtual int32_t __stdcall get_Disabled(bool*) noexcept = 0;
            virtual int32_t __stdcall get_NeedsRemediation(bool*) noexcept = 0;
            virtual int32_t __stdcall get_LicenseIssue(bool*) noexcept = 0;
            virtual int32_t __stdcall get_Modified(bool*) noexcept = 0;
            virtual int32_t __stdcall get_Tampered(bool*) noexcept = 0;
            virtual int32_t __stdcall get_DependencyIssue(bool*) noexcept = 0;
            virtual int32_t __stdcall get_Servicing(bool*) noexcept = 0;
            virtual int32_t __stdcall get_DeploymentInProgress(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::IPackageStatus2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsPartiallyStaged(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::IPackageStatusChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Package(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::IPackageUninstallingEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ActivityId(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_Package(void**) noexcept = 0;
            virtual int32_t __stdcall get_Progress(double*) noexcept = 0;
            virtual int32_t __stdcall get_IsComplete(bool*) noexcept = 0;
            virtual int32_t __stdcall get_ErrorCode(winrt::hresult*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::IPackageUpdateAvailabilityResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Availability(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ExtendedError(winrt::hresult*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::IPackageUpdatingEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ActivityId(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_SourcePackage(void**) noexcept = 0;
            virtual int32_t __stdcall get_TargetPackage(void**) noexcept = 0;
            virtual int32_t __stdcall get_Progress(double*) noexcept = 0;
            virtual int32_t __stdcall get_IsComplete(bool*) noexcept = 0;
            virtual int32_t __stdcall get_ErrorCode(winrt::hresult*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::IPackageWithMetadata>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_InstallDate(int64_t*) noexcept = 0;
            virtual int32_t __stdcall GetThumbnailToken(void**) noexcept = 0;
            virtual int32_t __stdcall Launch(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::IStartupTask>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall RequestEnableAsync(void**) noexcept = 0;
            virtual int32_t __stdcall Disable() noexcept = 0;
            virtual int32_t __stdcall get_State(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_TaskId(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::IStartupTaskStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetForCurrentPackageAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::ISuspendingDeferral>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Complete() noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::ISuspendingEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SuspendingOperation(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::ISuspendingOperation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
            virtual int32_t __stdcall get_Deadline(int64_t*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_IAppDisplayInfo
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) DisplayName() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Description() const;
        WINRT_IMPL_AUTO(Windows::Storage::Streams::RandomAccessStreamReference) GetLogo(Windows::Foundation::Size const& size) const;
    };
    template <> struct consume<Windows::ApplicationModel::IAppDisplayInfo>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_IAppDisplayInfo<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_IAppInfo
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Id() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) AppUserModelId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::AppDisplayInfo) DisplayInfo() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) PackageFamilyName() const;
    };
    template <> struct consume<Windows::ApplicationModel::IAppInfo>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_IAppInfo<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_IAppInfo2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::Package) Package() const;
    };
    template <> struct consume<Windows::ApplicationModel::IAppInfo2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_IAppInfo2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_IAppInfo3
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::AppExecutionContext) ExecutionContext() const;
    };
    template <> struct consume<Windows::ApplicationModel::IAppInfo3>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_IAppInfo3<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_IAppInfo4
    {
        [[nodiscard]] WINRT_IMPL_AUTO(com_array<hstring>) SupportedFileExtensions() const;
    };
    template <> struct consume<Windows::ApplicationModel::IAppInfo4>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_IAppInfo4<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_IAppInfoStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::AppInfo) Current() const;
        WINRT_IMPL_AUTO(Windows::ApplicationModel::AppInfo) GetFromAppUserModelId(param::hstring const& appUserModelId) const;
        WINRT_IMPL_AUTO(Windows::ApplicationModel::AppInfo) GetFromAppUserModelIdForUser(Windows::System::User const& user, param::hstring const& appUserModelId) const;
    };
    template <> struct consume<Windows::ApplicationModel::IAppInfoStatics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_IAppInfoStatics<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_IAppInstallerInfo
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Uri) Uri() const;
    };
    template <> struct consume<Windows::ApplicationModel::IAppInstallerInfo>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_IAppInstallerInfo<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_IAppInstance
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Key() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsCurrentInstance() const;
        WINRT_IMPL_AUTO(void) RedirectActivationTo() const;
    };
    template <> struct consume<Windows::ApplicationModel::IAppInstance>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_IAppInstance<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_IAppInstanceStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::AppInstance) RecommendedInstance() const;
        WINRT_IMPL_AUTO(Windows::ApplicationModel::Activation::IActivatedEventArgs) GetActivatedEventArgs() const;
        WINRT_IMPL_AUTO(Windows::ApplicationModel::AppInstance) FindOrRegisterInstanceForKey(param::hstring const& key) const;
        WINRT_IMPL_AUTO(void) Unregister() const;
        WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::ApplicationModel::AppInstance>) GetInstances() const;
    };
    template <> struct consume<Windows::ApplicationModel::IAppInstanceStatics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_IAppInstanceStatics<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_IDesignModeStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) DesignModeEnabled() const;
    };
    template <> struct consume<Windows::ApplicationModel::IDesignModeStatics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_IDesignModeStatics<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_IDesignModeStatics2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) DesignMode2Enabled() const;
    };
    template <> struct consume<Windows::ApplicationModel::IDesignModeStatics2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_IDesignModeStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_IEnteredBackgroundEventArgs
    {
        WINRT_IMPL_AUTO(Windows::Foundation::Deferral) GetDeferral() const;
    };
    template <> struct consume<Windows::ApplicationModel::IEnteredBackgroundEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_IEnteredBackgroundEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_IFullTrustProcessLauncherStatics
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) LaunchFullTrustProcessForCurrentAppAsync() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) LaunchFullTrustProcessForCurrentAppAsync(param::hstring const& parameterGroupId) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) LaunchFullTrustProcessForAppAsync(param::hstring const& fullTrustPackageRelativeAppId) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) LaunchFullTrustProcessForAppAsync(param::hstring const& fullTrustPackageRelativeAppId, param::hstring const& parameterGroupId) const;
    };
    template <> struct consume<Windows::ApplicationModel::IFullTrustProcessLauncherStatics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_IFullTrustProcessLauncherStatics<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_ILeavingBackgroundEventArgs
    {
        WINRT_IMPL_AUTO(Windows::Foundation::Deferral) GetDeferral() const;
    };
    template <> struct consume<Windows::ApplicationModel::ILeavingBackgroundEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_ILeavingBackgroundEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_ILimitedAccessFeatureRequestResult
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) FeatureId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::LimitedAccessFeatureStatus) Status() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<Windows::Foundation::DateTime>) EstimatedRemovalDate() const;
    };
    template <> struct consume<Windows::ApplicationModel::ILimitedAccessFeatureRequestResult>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_ILimitedAccessFeatureRequestResult<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_ILimitedAccessFeaturesStatics
    {
        WINRT_IMPL_AUTO(Windows::ApplicationModel::LimitedAccessFeatureRequestResult) TryUnlockFeature(param::hstring const& featureId, param::hstring const& token, param::hstring const& attestation) const;
    };
    template <> struct consume<Windows::ApplicationModel::ILimitedAccessFeaturesStatics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_ILimitedAccessFeaturesStatics<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_IPackage
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::PackageId) Id() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Storage::StorageFolder) InstalledLocation() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsFramework() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Package>) Dependencies() const;
    };
    template <> struct consume<Windows::ApplicationModel::IPackage>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_IPackage<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_IPackage2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) DisplayName() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) PublisherDisplayName() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Description() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Uri) Logo() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsResourcePackage() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsBundle() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsDevelopmentMode() const;
    };
    template <> struct consume<Windows::ApplicationModel::IPackage2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_IPackage2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_IPackage3
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::PackageStatus) Status() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::DateTime) InstalledDate() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Core::AppListEntry>>) GetAppListEntriesAsync() const;
    };
    template <> struct consume<Windows::ApplicationModel::IPackage3>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_IPackage3<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_IPackage4
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::PackageSignatureKind) SignatureKind() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsOptional() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<bool>) VerifyContentIntegrityAsync() const;
    };
    template <> struct consume<Windows::ApplicationModel::IPackage4>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_IPackage4<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_IPackage5
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::PackageContentGroup>>) GetContentGroupsAsync() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::PackageContentGroup>) GetContentGroupAsync(param::hstring const& name) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::PackageContentGroup>>) StageContentGroupsAsync(param::async_iterable<hstring> const& names) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::PackageContentGroup>>) StageContentGroupsAsync(param::async_iterable<hstring> const& names, bool moveToHeadOfQueue) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<bool>) SetInUseAsync(bool inUse) const;
    };
    template <> struct consume<Windows::ApplicationModel::IPackage5>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_IPackage5<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_IPackage6
    {
        WINRT_IMPL_AUTO(Windows::ApplicationModel::AppInstallerInfo) GetAppInstallerInfo() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::PackageUpdateAvailabilityResult>) CheckUpdateAvailabilityAsync() const;
    };
    template <> struct consume<Windows::ApplicationModel::IPackage6>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_IPackage6<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_IPackage7
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Storage::StorageFolder) MutableLocation() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Storage::StorageFolder) EffectiveLocation() const;
    };
    template <> struct consume<Windows::ApplicationModel::IPackage7>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_IPackage7<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_IPackage8
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Storage::StorageFolder) EffectiveExternalLocation() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Storage::StorageFolder) MachineExternalLocation() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Storage::StorageFolder) UserExternalLocation() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) InstalledPath() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) MutablePath() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) EffectivePath() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) EffectiveExternalPath() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) MachineExternalPath() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) UserExternalPath() const;
        WINRT_IMPL_AUTO(Windows::Storage::Streams::RandomAccessStreamReference) GetLogoAsRandomAccessStreamReference(Windows::Foundation::Size const& size) const;
        WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Core::AppListEntry>) GetAppListEntries() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsStub() const;
    };
    template <> struct consume<Windows::ApplicationModel::IPackage8>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_IPackage8<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_IPackageCatalog
    {
        WINRT_IMPL_AUTO(winrt::event_token) PackageStaging(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageStagingEventArgs> const& handler) const;
        using PackageStaging_revoker = impl::event_revoker<Windows::ApplicationModel::IPackageCatalog, &impl::abi_t<Windows::ApplicationModel::IPackageCatalog>::remove_PackageStaging>;
        [[nodiscard]] PackageStaging_revoker PackageStaging(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageStagingEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) PackageStaging(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) PackageInstalling(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageInstallingEventArgs> const& handler) const;
        using PackageInstalling_revoker = impl::event_revoker<Windows::ApplicationModel::IPackageCatalog, &impl::abi_t<Windows::ApplicationModel::IPackageCatalog>::remove_PackageInstalling>;
        [[nodiscard]] PackageInstalling_revoker PackageInstalling(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageInstallingEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) PackageInstalling(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) PackageUpdating(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageUpdatingEventArgs> const& handler) const;
        using PackageUpdating_revoker = impl::event_revoker<Windows::ApplicationModel::IPackageCatalog, &impl::abi_t<Windows::ApplicationModel::IPackageCatalog>::remove_PackageUpdating>;
        [[nodiscard]] PackageUpdating_revoker PackageUpdating(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageUpdatingEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) PackageUpdating(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) PackageUninstalling(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageUninstallingEventArgs> const& handler) const;
        using PackageUninstalling_revoker = impl::event_revoker<Windows::ApplicationModel::IPackageCatalog, &impl::abi_t<Windows::ApplicationModel::IPackageCatalog>::remove_PackageUninstalling>;
        [[nodiscard]] PackageUninstalling_revoker PackageUninstalling(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageUninstallingEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) PackageUninstalling(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) PackageStatusChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageStatusChangedEventArgs> const& handler) const;
        using PackageStatusChanged_revoker = impl::event_revoker<Windows::ApplicationModel::IPackageCatalog, &impl::abi_t<Windows::ApplicationModel::IPackageCatalog>::remove_PackageStatusChanged>;
        [[nodiscard]] PackageStatusChanged_revoker PackageStatusChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageStatusChangedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) PackageStatusChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::ApplicationModel::IPackageCatalog>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_IPackageCatalog<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_IPackageCatalog2
    {
        WINRT_IMPL_AUTO(winrt::event_token) PackageContentGroupStaging(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageContentGroupStagingEventArgs> const& handler) const;
        using PackageContentGroupStaging_revoker = impl::event_revoker<Windows::ApplicationModel::IPackageCatalog2, &impl::abi_t<Windows::ApplicationModel::IPackageCatalog2>::remove_PackageContentGroupStaging>;
        [[nodiscard]] PackageContentGroupStaging_revoker PackageContentGroupStaging(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageContentGroupStagingEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) PackageContentGroupStaging(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::PackageCatalogAddOptionalPackageResult>) AddOptionalPackageAsync(param::hstring const& optionalPackageFamilyName) const;
    };
    template <> struct consume<Windows::ApplicationModel::IPackageCatalog2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_IPackageCatalog2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_IPackageCatalog3
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::PackageCatalogRemoveOptionalPackagesResult>) RemoveOptionalPackagesAsync(param::async_iterable<hstring> const& optionalPackageFamilyNames) const;
    };
    template <> struct consume<Windows::ApplicationModel::IPackageCatalog3>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_IPackageCatalog3<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_IPackageCatalog4
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperationWithProgress<Windows::ApplicationModel::PackageCatalogAddResourcePackageResult, Windows::ApplicationModel::PackageInstallProgress>) AddResourcePackageAsync(param::hstring const& resourcePackageFamilyName, param::hstring const& resourceID, Windows::ApplicationModel::AddResourcePackageOptions const& options) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::PackageCatalogRemoveResourcePackagesResult>) RemoveResourcePackagesAsync(param::async_iterable<Windows::ApplicationModel::Package> const& resourcePackages) const;
    };
    template <> struct consume<Windows::ApplicationModel::IPackageCatalog4>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_IPackageCatalog4<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_IPackageCatalogAddOptionalPackageResult
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::Package) Package() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::hresult) ExtendedError() const;
    };
    template <> struct consume<Windows::ApplicationModel::IPackageCatalogAddOptionalPackageResult>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_IPackageCatalogAddOptionalPackageResult<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_IPackageCatalogAddResourcePackageResult
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::Package) Package() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsComplete() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::hresult) ExtendedError() const;
    };
    template <> struct consume<Windows::ApplicationModel::IPackageCatalogAddResourcePackageResult>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_IPackageCatalogAddResourcePackageResult<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_IPackageCatalogRemoveOptionalPackagesResult
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Package>) PackagesRemoved() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::hresult) ExtendedError() const;
    };
    template <> struct consume<Windows::ApplicationModel::IPackageCatalogRemoveOptionalPackagesResult>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_IPackageCatalogRemoveOptionalPackagesResult<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_IPackageCatalogRemoveResourcePackagesResult
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Package>) PackagesRemoved() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::hresult) ExtendedError() const;
    };
    template <> struct consume<Windows::ApplicationModel::IPackageCatalogRemoveResourcePackagesResult>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_IPackageCatalogRemoveResourcePackagesResult<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_IPackageCatalogStatics
    {
        WINRT_IMPL_AUTO(Windows::ApplicationModel::PackageCatalog) OpenForCurrentPackage() const;
        WINRT_IMPL_AUTO(Windows::ApplicationModel::PackageCatalog) OpenForCurrentUser() const;
    };
    template <> struct consume<Windows::ApplicationModel::IPackageCatalogStatics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_IPackageCatalogStatics<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_IPackageContentGroup
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::Package) Package() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Name() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::PackageContentGroupState) State() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsRequired() const;
    };
    template <> struct consume<Windows::ApplicationModel::IPackageContentGroup>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_IPackageContentGroup<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_IPackageContentGroupStagingEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::guid) ActivityId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::Package) Package() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) Progress() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsComplete() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::hresult) ErrorCode() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) ContentGroupName() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsContentGroupRequired() const;
    };
    template <> struct consume<Windows::ApplicationModel::IPackageContentGroupStagingEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_IPackageContentGroupStagingEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_IPackageContentGroupStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) RequiredGroupName() const;
    };
    template <> struct consume<Windows::ApplicationModel::IPackageContentGroupStatics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_IPackageContentGroupStatics<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_IPackageId
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Name() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::PackageVersion) Version() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::System::ProcessorArchitecture) Architecture() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) ResourceId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Publisher() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) PublisherId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) FullName() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) FamilyName() const;
    };
    template <> struct consume<Windows::ApplicationModel::IPackageId>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_IPackageId<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_IPackageIdWithMetadata
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) ProductId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Author() const;
    };
    template <> struct consume<Windows::ApplicationModel::IPackageIdWithMetadata>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_IPackageIdWithMetadata<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_IPackageInstallingEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::guid) ActivityId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::Package) Package() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) Progress() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsComplete() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::hresult) ErrorCode() const;
    };
    template <> struct consume<Windows::ApplicationModel::IPackageInstallingEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_IPackageInstallingEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_IPackageStagingEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::guid) ActivityId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::Package) Package() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) Progress() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsComplete() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::hresult) ErrorCode() const;
    };
    template <> struct consume<Windows::ApplicationModel::IPackageStagingEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_IPackageStagingEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_IPackageStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::Package) Current() const;
    };
    template <> struct consume<Windows::ApplicationModel::IPackageStatics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_IPackageStatics<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_IPackageStatus
    {
        WINRT_IMPL_AUTO(bool) VerifyIsOK() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) NotAvailable() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) PackageOffline() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) DataOffline() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) Disabled() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) NeedsRemediation() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) LicenseIssue() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) Modified() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) Tampered() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) DependencyIssue() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) Servicing() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) DeploymentInProgress() const;
    };
    template <> struct consume<Windows::ApplicationModel::IPackageStatus>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_IPackageStatus<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_IPackageStatus2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsPartiallyStaged() const;
    };
    template <> struct consume<Windows::ApplicationModel::IPackageStatus2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_IPackageStatus2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_IPackageStatusChangedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::Package) Package() const;
    };
    template <> struct consume<Windows::ApplicationModel::IPackageStatusChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_IPackageStatusChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_IPackageUninstallingEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::guid) ActivityId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::Package) Package() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) Progress() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsComplete() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::hresult) ErrorCode() const;
    };
    template <> struct consume<Windows::ApplicationModel::IPackageUninstallingEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_IPackageUninstallingEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_IPackageUpdateAvailabilityResult
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::PackageUpdateAvailability) Availability() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::hresult) ExtendedError() const;
    };
    template <> struct consume<Windows::ApplicationModel::IPackageUpdateAvailabilityResult>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_IPackageUpdateAvailabilityResult<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_IPackageUpdatingEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::guid) ActivityId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::Package) SourcePackage() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::Package) TargetPackage() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) Progress() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsComplete() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::hresult) ErrorCode() const;
    };
    template <> struct consume<Windows::ApplicationModel::IPackageUpdatingEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_IPackageUpdatingEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_IPackageWithMetadata
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::DateTime) InstallDate() const;
        WINRT_IMPL_AUTO(hstring) GetThumbnailToken() const;
        WINRT_IMPL_AUTO(void) Launch(param::hstring const& parameters) const;
    };
    template <> struct consume<Windows::ApplicationModel::IPackageWithMetadata>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_IPackageWithMetadata<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_IStartupTask
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::StartupTaskState>) RequestEnableAsync() const;
        WINRT_IMPL_AUTO(void) Disable() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::StartupTaskState) State() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) TaskId() const;
    };
    template <> struct consume<Windows::ApplicationModel::IStartupTask>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_IStartupTask<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_IStartupTaskStatics
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::StartupTask>>) GetForCurrentPackageAsync() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::StartupTask>) GetAsync(param::hstring const& taskId) const;
    };
    template <> struct consume<Windows::ApplicationModel::IStartupTaskStatics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_IStartupTaskStatics<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_ISuspendingDeferral
    {
        WINRT_IMPL_AUTO(void) Complete() const;
    };
    template <> struct consume<Windows::ApplicationModel::ISuspendingDeferral>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_ISuspendingDeferral<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_ISuspendingEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::SuspendingOperation) SuspendingOperation() const;
    };
    template <> struct consume<Windows::ApplicationModel::ISuspendingEventArgs>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_ISuspendingEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_ISuspendingOperation
    {
        WINRT_IMPL_AUTO(Windows::ApplicationModel::SuspendingDeferral) GetDeferral() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::DateTime) Deadline() const;
    };
    template <> struct consume<Windows::ApplicationModel::ISuspendingOperation>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_ISuspendingOperation<D>;
    };
    struct struct_Windows_ApplicationModel_PackageInstallProgress
    {
        uint32_t PercentComplete;
    };
    template <> struct abi<Windows::ApplicationModel::PackageInstallProgress>
    {
        using type = struct_Windows_ApplicationModel_PackageInstallProgress;
    };
    struct struct_Windows_ApplicationModel_PackageVersion
    {
        uint16_t Major;
        uint16_t Minor;
        uint16_t Build;
        uint16_t Revision;
    };
    template <> struct abi<Windows::ApplicationModel::PackageVersion>
    {
        using type = struct_Windows_ApplicationModel_PackageVersion;
    };
}
#endif
