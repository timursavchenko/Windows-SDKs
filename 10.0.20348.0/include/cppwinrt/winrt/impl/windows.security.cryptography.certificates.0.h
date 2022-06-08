// C++/WinRT v2.0.200609.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Security_Cryptography_Certificates_0_H
#define WINRT_Windows_Security_Cryptography_Certificates_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct IAsyncAction;
    template <typename TResult> struct __declspec(empty_bases) IAsyncOperation;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct __declspec(empty_bases) IIterable;
    template <typename T> struct __declspec(empty_bases) IVectorView;
    template <typename T> struct __declspec(empty_bases) IVector;
}
WINRT_EXPORT namespace winrt::Windows::Networking
{
    struct HostName;
}
WINRT_EXPORT namespace winrt::Windows::Storage::Streams
{
    struct IBuffer;
    struct IInputStream;
}
WINRT_EXPORT namespace winrt::Windows::Security::Cryptography::Certificates
{
    enum class CertificateChainPolicy : int32_t
    {
        Base = 0,
        Ssl = 1,
        NTAuthentication = 2,
        MicrosoftRoot = 3,
    };
    enum class ChainValidationResult : int32_t
    {
        Success = 0,
        Untrusted = 1,
        Revoked = 2,
        Expired = 3,
        IncompleteChain = 4,
        InvalidSignature = 5,
        WrongUsage = 6,
        InvalidName = 7,
        InvalidCertificateAuthorityPolicy = 8,
        BasicConstraintsError = 9,
        UnknownCriticalExtension = 10,
        RevocationInformationMissing = 11,
        RevocationFailure = 12,
        OtherErrors = 13,
    };
    enum class EnrollKeyUsages : uint32_t
    {
        None = 0,
        Decryption = 0x1,
        Signing = 0x2,
        KeyAgreement = 0x4,
        All = 0xffffff,
    };
    enum class ExportOption : int32_t
    {
        NotExportable = 0,
        Exportable = 1,
    };
    enum class InstallOptions : uint32_t
    {
        None = 0,
        DeleteExpired = 0x1,
    };
    enum class KeyProtectionLevel : int32_t
    {
        NoConsent = 0,
        ConsentOnly = 1,
        ConsentWithPassword = 2,
        ConsentWithFingerprint = 3,
    };
    enum class KeySize : int32_t
    {
        Invalid = 0,
        Rsa2048 = 2048,
        Rsa4096 = 4096,
    };
    enum class SignatureValidationResult : int32_t
    {
        Success = 0,
        InvalidParameter = 1,
        BadMessage = 2,
        InvalidSignature = 3,
        OtherErrors = 4,
    };
    struct ICertificate;
    struct ICertificate2;
    struct ICertificate3;
    struct ICertificateChain;
    struct ICertificateEnrollmentManagerStatics;
    struct ICertificateEnrollmentManagerStatics2;
    struct ICertificateEnrollmentManagerStatics3;
    struct ICertificateExtension;
    struct ICertificateFactory;
    struct ICertificateKeyUsages;
    struct ICertificateQuery;
    struct ICertificateQuery2;
    struct ICertificateRequestProperties;
    struct ICertificateRequestProperties2;
    struct ICertificateRequestProperties3;
    struct ICertificateRequestProperties4;
    struct ICertificateStore;
    struct ICertificateStore2;
    struct ICertificateStoresStatics;
    struct ICertificateStoresStatics2;
    struct IChainBuildingParameters;
    struct IChainValidationParameters;
    struct ICmsAttachedSignature;
    struct ICmsAttachedSignatureFactory;
    struct ICmsAttachedSignatureStatics;
    struct ICmsDetachedSignature;
    struct ICmsDetachedSignatureFactory;
    struct ICmsDetachedSignatureStatics;
    struct ICmsSignerInfo;
    struct ICmsTimestampInfo;
    struct IKeyAlgorithmNamesStatics;
    struct IKeyAlgorithmNamesStatics2;
    struct IKeyAttestationHelperStatics;
    struct IKeyAttestationHelperStatics2;
    struct IKeyStorageProviderNamesStatics;
    struct IKeyStorageProviderNamesStatics2;
    struct IPfxImportParameters;
    struct IStandardCertificateStoreNamesStatics;
    struct ISubjectAlternativeNameInfo;
    struct ISubjectAlternativeNameInfo2;
    struct IUserCertificateEnrollmentManager;
    struct IUserCertificateEnrollmentManager2;
    struct IUserCertificateStore;
    struct Certificate;
    struct CertificateChain;
    struct CertificateEnrollmentManager;
    struct CertificateExtension;
    struct CertificateKeyUsages;
    struct CertificateQuery;
    struct CertificateRequestProperties;
    struct CertificateStore;
    struct CertificateStores;
    struct ChainBuildingParameters;
    struct ChainValidationParameters;
    struct CmsAttachedSignature;
    struct CmsDetachedSignature;
    struct CmsSignerInfo;
    struct CmsTimestampInfo;
    struct KeyAlgorithmNames;
    struct KeyAttestationHelper;
    struct KeyStorageProviderNames;
    struct PfxImportParameters;
    struct StandardCertificateStoreNames;
    struct SubjectAlternativeNameInfo;
    struct UserCertificateEnrollmentManager;
    struct UserCertificateStore;
}
namespace winrt::impl
{
    template <> struct category<Windows::Security::Cryptography::Certificates::ICertificate>{ using type = interface_category; };
    template <> struct category<Windows::Security::Cryptography::Certificates::ICertificate2>{ using type = interface_category; };
    template <> struct category<Windows::Security::Cryptography::Certificates::ICertificate3>{ using type = interface_category; };
    template <> struct category<Windows::Security::Cryptography::Certificates::ICertificateChain>{ using type = interface_category; };
    template <> struct category<Windows::Security::Cryptography::Certificates::ICertificateEnrollmentManagerStatics>{ using type = interface_category; };
    template <> struct category<Windows::Security::Cryptography::Certificates::ICertificateEnrollmentManagerStatics2>{ using type = interface_category; };
    template <> struct category<Windows::Security::Cryptography::Certificates::ICertificateEnrollmentManagerStatics3>{ using type = interface_category; };
    template <> struct category<Windows::Security::Cryptography::Certificates::ICertificateExtension>{ using type = interface_category; };
    template <> struct category<Windows::Security::Cryptography::Certificates::ICertificateFactory>{ using type = interface_category; };
    template <> struct category<Windows::Security::Cryptography::Certificates::ICertificateKeyUsages>{ using type = interface_category; };
    template <> struct category<Windows::Security::Cryptography::Certificates::ICertificateQuery>{ using type = interface_category; };
    template <> struct category<Windows::Security::Cryptography::Certificates::ICertificateQuery2>{ using type = interface_category; };
    template <> struct category<Windows::Security::Cryptography::Certificates::ICertificateRequestProperties>{ using type = interface_category; };
    template <> struct category<Windows::Security::Cryptography::Certificates::ICertificateRequestProperties2>{ using type = interface_category; };
    template <> struct category<Windows::Security::Cryptography::Certificates::ICertificateRequestProperties3>{ using type = interface_category; };
    template <> struct category<Windows::Security::Cryptography::Certificates::ICertificateRequestProperties4>{ using type = interface_category; };
    template <> struct category<Windows::Security::Cryptography::Certificates::ICertificateStore>{ using type = interface_category; };
    template <> struct category<Windows::Security::Cryptography::Certificates::ICertificateStore2>{ using type = interface_category; };
    template <> struct category<Windows::Security::Cryptography::Certificates::ICertificateStoresStatics>{ using type = interface_category; };
    template <> struct category<Windows::Security::Cryptography::Certificates::ICertificateStoresStatics2>{ using type = interface_category; };
    template <> struct category<Windows::Security::Cryptography::Certificates::IChainBuildingParameters>{ using type = interface_category; };
    template <> struct category<Windows::Security::Cryptography::Certificates::IChainValidationParameters>{ using type = interface_category; };
    template <> struct category<Windows::Security::Cryptography::Certificates::ICmsAttachedSignature>{ using type = interface_category; };
    template <> struct category<Windows::Security::Cryptography::Certificates::ICmsAttachedSignatureFactory>{ using type = interface_category; };
    template <> struct category<Windows::Security::Cryptography::Certificates::ICmsAttachedSignatureStatics>{ using type = interface_category; };
    template <> struct category<Windows::Security::Cryptography::Certificates::ICmsDetachedSignature>{ using type = interface_category; };
    template <> struct category<Windows::Security::Cryptography::Certificates::ICmsDetachedSignatureFactory>{ using type = interface_category; };
    template <> struct category<Windows::Security::Cryptography::Certificates::ICmsDetachedSignatureStatics>{ using type = interface_category; };
    template <> struct category<Windows::Security::Cryptography::Certificates::ICmsSignerInfo>{ using type = interface_category; };
    template <> struct category<Windows::Security::Cryptography::Certificates::ICmsTimestampInfo>{ using type = interface_category; };
    template <> struct category<Windows::Security::Cryptography::Certificates::IKeyAlgorithmNamesStatics>{ using type = interface_category; };
    template <> struct category<Windows::Security::Cryptography::Certificates::IKeyAlgorithmNamesStatics2>{ using type = interface_category; };
    template <> struct category<Windows::Security::Cryptography::Certificates::IKeyAttestationHelperStatics>{ using type = interface_category; };
    template <> struct category<Windows::Security::Cryptography::Certificates::IKeyAttestationHelperStatics2>{ using type = interface_category; };
    template <> struct category<Windows::Security::Cryptography::Certificates::IKeyStorageProviderNamesStatics>{ using type = interface_category; };
    template <> struct category<Windows::Security::Cryptography::Certificates::IKeyStorageProviderNamesStatics2>{ using type = interface_category; };
    template <> struct category<Windows::Security::Cryptography::Certificates::IPfxImportParameters>{ using type = interface_category; };
    template <> struct category<Windows::Security::Cryptography::Certificates::IStandardCertificateStoreNamesStatics>{ using type = interface_category; };
    template <> struct category<Windows::Security::Cryptography::Certificates::ISubjectAlternativeNameInfo>{ using type = interface_category; };
    template <> struct category<Windows::Security::Cryptography::Certificates::ISubjectAlternativeNameInfo2>{ using type = interface_category; };
    template <> struct category<Windows::Security::Cryptography::Certificates::IUserCertificateEnrollmentManager>{ using type = interface_category; };
    template <> struct category<Windows::Security::Cryptography::Certificates::IUserCertificateEnrollmentManager2>{ using type = interface_category; };
    template <> struct category<Windows::Security::Cryptography::Certificates::IUserCertificateStore>{ using type = interface_category; };
    template <> struct category<Windows::Security::Cryptography::Certificates::Certificate>{ using type = class_category; };
    template <> struct category<Windows::Security::Cryptography::Certificates::CertificateChain>{ using type = class_category; };
    template <> struct category<Windows::Security::Cryptography::Certificates::CertificateEnrollmentManager>{ using type = class_category; };
    template <> struct category<Windows::Security::Cryptography::Certificates::CertificateExtension>{ using type = class_category; };
    template <> struct category<Windows::Security::Cryptography::Certificates::CertificateKeyUsages>{ using type = class_category; };
    template <> struct category<Windows::Security::Cryptography::Certificates::CertificateQuery>{ using type = class_category; };
    template <> struct category<Windows::Security::Cryptography::Certificates::CertificateRequestProperties>{ using type = class_category; };
    template <> struct category<Windows::Security::Cryptography::Certificates::CertificateStore>{ using type = class_category; };
    template <> struct category<Windows::Security::Cryptography::Certificates::CertificateStores>{ using type = class_category; };
    template <> struct category<Windows::Security::Cryptography::Certificates::ChainBuildingParameters>{ using type = class_category; };
    template <> struct category<Windows::Security::Cryptography::Certificates::ChainValidationParameters>{ using type = class_category; };
    template <> struct category<Windows::Security::Cryptography::Certificates::CmsAttachedSignature>{ using type = class_category; };
    template <> struct category<Windows::Security::Cryptography::Certificates::CmsDetachedSignature>{ using type = class_category; };
    template <> struct category<Windows::Security::Cryptography::Certificates::CmsSignerInfo>{ using type = class_category; };
    template <> struct category<Windows::Security::Cryptography::Certificates::CmsTimestampInfo>{ using type = class_category; };
    template <> struct category<Windows::Security::Cryptography::Certificates::KeyAlgorithmNames>{ using type = class_category; };
    template <> struct category<Windows::Security::Cryptography::Certificates::KeyAttestationHelper>{ using type = class_category; };
    template <> struct category<Windows::Security::Cryptography::Certificates::KeyStorageProviderNames>{ using type = class_category; };
    template <> struct category<Windows::Security::Cryptography::Certificates::PfxImportParameters>{ using type = class_category; };
    template <> struct category<Windows::Security::Cryptography::Certificates::StandardCertificateStoreNames>{ using type = class_category; };
    template <> struct category<Windows::Security::Cryptography::Certificates::SubjectAlternativeNameInfo>{ using type = class_category; };
    template <> struct category<Windows::Security::Cryptography::Certificates::UserCertificateEnrollmentManager>{ using type = class_category; };
    template <> struct category<Windows::Security::Cryptography::Certificates::UserCertificateStore>{ using type = class_category; };
    template <> struct category<Windows::Security::Cryptography::Certificates::CertificateChainPolicy>{ using type = enum_category; };
    template <> struct category<Windows::Security::Cryptography::Certificates::ChainValidationResult>{ using type = enum_category; };
    template <> struct category<Windows::Security::Cryptography::Certificates::EnrollKeyUsages>{ using type = enum_category; };
    template <> struct category<Windows::Security::Cryptography::Certificates::ExportOption>{ using type = enum_category; };
    template <> struct category<Windows::Security::Cryptography::Certificates::InstallOptions>{ using type = enum_category; };
    template <> struct category<Windows::Security::Cryptography::Certificates::KeyProtectionLevel>{ using type = enum_category; };
    template <> struct category<Windows::Security::Cryptography::Certificates::KeySize>{ using type = enum_category; };
    template <> struct category<Windows::Security::Cryptography::Certificates::SignatureValidationResult>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<Windows::Security::Cryptography::Certificates::Certificate> = L"Windows.Security.Cryptography.Certificates.Certificate";
    template <> inline constexpr auto& name_v<Windows::Security::Cryptography::Certificates::CertificateChain> = L"Windows.Security.Cryptography.Certificates.CertificateChain";
    template <> inline constexpr auto& name_v<Windows::Security::Cryptography::Certificates::CertificateEnrollmentManager> = L"Windows.Security.Cryptography.Certificates.CertificateEnrollmentManager";
    template <> inline constexpr auto& name_v<Windows::Security::Cryptography::Certificates::CertificateExtension> = L"Windows.Security.Cryptography.Certificates.CertificateExtension";
    template <> inline constexpr auto& name_v<Windows::Security::Cryptography::Certificates::CertificateKeyUsages> = L"Windows.Security.Cryptography.Certificates.CertificateKeyUsages";
    template <> inline constexpr auto& name_v<Windows::Security::Cryptography::Certificates::CertificateQuery> = L"Windows.Security.Cryptography.Certificates.CertificateQuery";
    template <> inline constexpr auto& name_v<Windows::Security::Cryptography::Certificates::CertificateRequestProperties> = L"Windows.Security.Cryptography.Certificates.CertificateRequestProperties";
    template <> inline constexpr auto& name_v<Windows::Security::Cryptography::Certificates::CertificateStore> = L"Windows.Security.Cryptography.Certificates.CertificateStore";
    template <> inline constexpr auto& name_v<Windows::Security::Cryptography::Certificates::CertificateStores> = L"Windows.Security.Cryptography.Certificates.CertificateStores";
    template <> inline constexpr auto& name_v<Windows::Security::Cryptography::Certificates::ChainBuildingParameters> = L"Windows.Security.Cryptography.Certificates.ChainBuildingParameters";
    template <> inline constexpr auto& name_v<Windows::Security::Cryptography::Certificates::ChainValidationParameters> = L"Windows.Security.Cryptography.Certificates.ChainValidationParameters";
    template <> inline constexpr auto& name_v<Windows::Security::Cryptography::Certificates::CmsAttachedSignature> = L"Windows.Security.Cryptography.Certificates.CmsAttachedSignature";
    template <> inline constexpr auto& name_v<Windows::Security::Cryptography::Certificates::CmsDetachedSignature> = L"Windows.Security.Cryptography.Certificates.CmsDetachedSignature";
    template <> inline constexpr auto& name_v<Windows::Security::Cryptography::Certificates::CmsSignerInfo> = L"Windows.Security.Cryptography.Certificates.CmsSignerInfo";
    template <> inline constexpr auto& name_v<Windows::Security::Cryptography::Certificates::CmsTimestampInfo> = L"Windows.Security.Cryptography.Certificates.CmsTimestampInfo";
    template <> inline constexpr auto& name_v<Windows::Security::Cryptography::Certificates::KeyAlgorithmNames> = L"Windows.Security.Cryptography.Certificates.KeyAlgorithmNames";
    template <> inline constexpr auto& name_v<Windows::Security::Cryptography::Certificates::KeyAttestationHelper> = L"Windows.Security.Cryptography.Certificates.KeyAttestationHelper";
    template <> inline constexpr auto& name_v<Windows::Security::Cryptography::Certificates::KeyStorageProviderNames> = L"Windows.Security.Cryptography.Certificates.KeyStorageProviderNames";
    template <> inline constexpr auto& name_v<Windows::Security::Cryptography::Certificates::PfxImportParameters> = L"Windows.Security.Cryptography.Certificates.PfxImportParameters";
    template <> inline constexpr auto& name_v<Windows::Security::Cryptography::Certificates::StandardCertificateStoreNames> = L"Windows.Security.Cryptography.Certificates.StandardCertificateStoreNames";
    template <> inline constexpr auto& name_v<Windows::Security::Cryptography::Certificates::SubjectAlternativeNameInfo> = L"Windows.Security.Cryptography.Certificates.SubjectAlternativeNameInfo";
    template <> inline constexpr auto& name_v<Windows::Security::Cryptography::Certificates::UserCertificateEnrollmentManager> = L"Windows.Security.Cryptography.Certificates.UserCertificateEnrollmentManager";
    template <> inline constexpr auto& name_v<Windows::Security::Cryptography::Certificates::UserCertificateStore> = L"Windows.Security.Cryptography.Certificates.UserCertificateStore";
    template <> inline constexpr auto& name_v<Windows::Security::Cryptography::Certificates::CertificateChainPolicy> = L"Windows.Security.Cryptography.Certificates.CertificateChainPolicy";
    template <> inline constexpr auto& name_v<Windows::Security::Cryptography::Certificates::ChainValidationResult> = L"Windows.Security.Cryptography.Certificates.ChainValidationResult";
    template <> inline constexpr auto& name_v<Windows::Security::Cryptography::Certificates::EnrollKeyUsages> = L"Windows.Security.Cryptography.Certificates.EnrollKeyUsages";
    template <> inline constexpr auto& name_v<Windows::Security::Cryptography::Certificates::ExportOption> = L"Windows.Security.Cryptography.Certificates.ExportOption";
    template <> inline constexpr auto& name_v<Windows::Security::Cryptography::Certificates::InstallOptions> = L"Windows.Security.Cryptography.Certificates.InstallOptions";
    template <> inline constexpr auto& name_v<Windows::Security::Cryptography::Certificates::KeyProtectionLevel> = L"Windows.Security.Cryptography.Certificates.KeyProtectionLevel";
    template <> inline constexpr auto& name_v<Windows::Security::Cryptography::Certificates::KeySize> = L"Windows.Security.Cryptography.Certificates.KeySize";
    template <> inline constexpr auto& name_v<Windows::Security::Cryptography::Certificates::SignatureValidationResult> = L"Windows.Security.Cryptography.Certificates.SignatureValidationResult";
    template <> inline constexpr auto& name_v<Windows::Security::Cryptography::Certificates::ICertificate> = L"Windows.Security.Cryptography.Certificates.ICertificate";
    template <> inline constexpr auto& name_v<Windows::Security::Cryptography::Certificates::ICertificate2> = L"Windows.Security.Cryptography.Certificates.ICertificate2";
    template <> inline constexpr auto& name_v<Windows::Security::Cryptography::Certificates::ICertificate3> = L"Windows.Security.Cryptography.Certificates.ICertificate3";
    template <> inline constexpr auto& name_v<Windows::Security::Cryptography::Certificates::ICertificateChain> = L"Windows.Security.Cryptography.Certificates.ICertificateChain";
    template <> inline constexpr auto& name_v<Windows::Security::Cryptography::Certificates::ICertificateEnrollmentManagerStatics> = L"Windows.Security.Cryptography.Certificates.ICertificateEnrollmentManagerStatics";
    template <> inline constexpr auto& name_v<Windows::Security::Cryptography::Certificates::ICertificateEnrollmentManagerStatics2> = L"Windows.Security.Cryptography.Certificates.ICertificateEnrollmentManagerStatics2";
    template <> inline constexpr auto& name_v<Windows::Security::Cryptography::Certificates::ICertificateEnrollmentManagerStatics3> = L"Windows.Security.Cryptography.Certificates.ICertificateEnrollmentManagerStatics3";
    template <> inline constexpr auto& name_v<Windows::Security::Cryptography::Certificates::ICertificateExtension> = L"Windows.Security.Cryptography.Certificates.ICertificateExtension";
    template <> inline constexpr auto& name_v<Windows::Security::Cryptography::Certificates::ICertificateFactory> = L"Windows.Security.Cryptography.Certificates.ICertificateFactory";
    template <> inline constexpr auto& name_v<Windows::Security::Cryptography::Certificates::ICertificateKeyUsages> = L"Windows.Security.Cryptography.Certificates.ICertificateKeyUsages";
    template <> inline constexpr auto& name_v<Windows::Security::Cryptography::Certificates::ICertificateQuery> = L"Windows.Security.Cryptography.Certificates.ICertificateQuery";
    template <> inline constexpr auto& name_v<Windows::Security::Cryptography::Certificates::ICertificateQuery2> = L"Windows.Security.Cryptography.Certificates.ICertificateQuery2";
    template <> inline constexpr auto& name_v<Windows::Security::Cryptography::Certificates::ICertificateRequestProperties> = L"Windows.Security.Cryptography.Certificates.ICertificateRequestProperties";
    template <> inline constexpr auto& name_v<Windows::Security::Cryptography::Certificates::ICertificateRequestProperties2> = L"Windows.Security.Cryptography.Certificates.ICertificateRequestProperties2";
    template <> inline constexpr auto& name_v<Windows::Security::Cryptography::Certificates::ICertificateRequestProperties3> = L"Windows.Security.Cryptography.Certificates.ICertificateRequestProperties3";
    template <> inline constexpr auto& name_v<Windows::Security::Cryptography::Certificates::ICertificateRequestProperties4> = L"Windows.Security.Cryptography.Certificates.ICertificateRequestProperties4";
    template <> inline constexpr auto& name_v<Windows::Security::Cryptography::Certificates::ICertificateStore> = L"Windows.Security.Cryptography.Certificates.ICertificateStore";
    template <> inline constexpr auto& name_v<Windows::Security::Cryptography::Certificates::ICertificateStore2> = L"Windows.Security.Cryptography.Certificates.ICertificateStore2";
    template <> inline constexpr auto& name_v<Windows::Security::Cryptography::Certificates::ICertificateStoresStatics> = L"Windows.Security.Cryptography.Certificates.ICertificateStoresStatics";
    template <> inline constexpr auto& name_v<Windows::Security::Cryptography::Certificates::ICertificateStoresStatics2> = L"Windows.Security.Cryptography.Certificates.ICertificateStoresStatics2";
    template <> inline constexpr auto& name_v<Windows::Security::Cryptography::Certificates::IChainBuildingParameters> = L"Windows.Security.Cryptography.Certificates.IChainBuildingParameters";
    template <> inline constexpr auto& name_v<Windows::Security::Cryptography::Certificates::IChainValidationParameters> = L"Windows.Security.Cryptography.Certificates.IChainValidationParameters";
    template <> inline constexpr auto& name_v<Windows::Security::Cryptography::Certificates::ICmsAttachedSignature> = L"Windows.Security.Cryptography.Certificates.ICmsAttachedSignature";
    template <> inline constexpr auto& name_v<Windows::Security::Cryptography::Certificates::ICmsAttachedSignatureFactory> = L"Windows.Security.Cryptography.Certificates.ICmsAttachedSignatureFactory";
    template <> inline constexpr auto& name_v<Windows::Security::Cryptography::Certificates::ICmsAttachedSignatureStatics> = L"Windows.Security.Cryptography.Certificates.ICmsAttachedSignatureStatics";
    template <> inline constexpr auto& name_v<Windows::Security::Cryptography::Certificates::ICmsDetachedSignature> = L"Windows.Security.Cryptography.Certificates.ICmsDetachedSignature";
    template <> inline constexpr auto& name_v<Windows::Security::Cryptography::Certificates::ICmsDetachedSignatureFactory> = L"Windows.Security.Cryptography.Certificates.ICmsDetachedSignatureFactory";
    template <> inline constexpr auto& name_v<Windows::Security::Cryptography::Certificates::ICmsDetachedSignatureStatics> = L"Windows.Security.Cryptography.Certificates.ICmsDetachedSignatureStatics";
    template <> inline constexpr auto& name_v<Windows::Security::Cryptography::Certificates::ICmsSignerInfo> = L"Windows.Security.Cryptography.Certificates.ICmsSignerInfo";
    template <> inline constexpr auto& name_v<Windows::Security::Cryptography::Certificates::ICmsTimestampInfo> = L"Windows.Security.Cryptography.Certificates.ICmsTimestampInfo";
    template <> inline constexpr auto& name_v<Windows::Security::Cryptography::Certificates::IKeyAlgorithmNamesStatics> = L"Windows.Security.Cryptography.Certificates.IKeyAlgorithmNamesStatics";
    template <> inline constexpr auto& name_v<Windows::Security::Cryptography::Certificates::IKeyAlgorithmNamesStatics2> = L"Windows.Security.Cryptography.Certificates.IKeyAlgorithmNamesStatics2";
    template <> inline constexpr auto& name_v<Windows::Security::Cryptography::Certificates::IKeyAttestationHelperStatics> = L"Windows.Security.Cryptography.Certificates.IKeyAttestationHelperStatics";
    template <> inline constexpr auto& name_v<Windows::Security::Cryptography::Certificates::IKeyAttestationHelperStatics2> = L"Windows.Security.Cryptography.Certificates.IKeyAttestationHelperStatics2";
    template <> inline constexpr auto& name_v<Windows::Security::Cryptography::Certificates::IKeyStorageProviderNamesStatics> = L"Windows.Security.Cryptography.Certificates.IKeyStorageProviderNamesStatics";
    template <> inline constexpr auto& name_v<Windows::Security::Cryptography::Certificates::IKeyStorageProviderNamesStatics2> = L"Windows.Security.Cryptography.Certificates.IKeyStorageProviderNamesStatics2";
    template <> inline constexpr auto& name_v<Windows::Security::Cryptography::Certificates::IPfxImportParameters> = L"Windows.Security.Cryptography.Certificates.IPfxImportParameters";
    template <> inline constexpr auto& name_v<Windows::Security::Cryptography::Certificates::IStandardCertificateStoreNamesStatics> = L"Windows.Security.Cryptography.Certificates.IStandardCertificateStoreNamesStatics";
    template <> inline constexpr auto& name_v<Windows::Security::Cryptography::Certificates::ISubjectAlternativeNameInfo> = L"Windows.Security.Cryptography.Certificates.ISubjectAlternativeNameInfo";
    template <> inline constexpr auto& name_v<Windows::Security::Cryptography::Certificates::ISubjectAlternativeNameInfo2> = L"Windows.Security.Cryptography.Certificates.ISubjectAlternativeNameInfo2";
    template <> inline constexpr auto& name_v<Windows::Security::Cryptography::Certificates::IUserCertificateEnrollmentManager> = L"Windows.Security.Cryptography.Certificates.IUserCertificateEnrollmentManager";
    template <> inline constexpr auto& name_v<Windows::Security::Cryptography::Certificates::IUserCertificateEnrollmentManager2> = L"Windows.Security.Cryptography.Certificates.IUserCertificateEnrollmentManager2";
    template <> inline constexpr auto& name_v<Windows::Security::Cryptography::Certificates::IUserCertificateStore> = L"Windows.Security.Cryptography.Certificates.IUserCertificateStore";
    template <> inline constexpr guid guid_v<Windows::Security::Cryptography::Certificates::ICertificate>{ 0x333F740C,0x04D8,0x43B3,{ 0xB2,0x78,0x8C,0x5F,0xCC,0x9B,0xE5,0xA0 } }; // 333F740C-04D8-43B3-B278-8C5FCC9BE5A0
    template <> inline constexpr guid guid_v<Windows::Security::Cryptography::Certificates::ICertificate2>{ 0x17B8374C,0x8A25,0x4D96,{ 0xA4,0x92,0x8F,0xC2,0x9A,0xC4,0xFD,0xA6 } }; // 17B8374C-8A25-4D96-A492-8FC29AC4FDA6
    template <> inline constexpr guid guid_v<Windows::Security::Cryptography::Certificates::ICertificate3>{ 0xBE51A966,0xAE5F,0x4652,{ 0xAC,0xE7,0xC6,0xD7,0xE7,0x72,0x4C,0xF3 } }; // BE51A966-AE5F-4652-ACE7-C6D7E7724CF3
    template <> inline constexpr guid guid_v<Windows::Security::Cryptography::Certificates::ICertificateChain>{ 0x20BF5385,0x3691,0x4501,{ 0xA6,0x2C,0xFD,0x97,0x27,0x8B,0x31,0xEE } }; // 20BF5385-3691-4501-A62C-FD97278B31EE
    template <> inline constexpr guid guid_v<Windows::Security::Cryptography::Certificates::ICertificateEnrollmentManagerStatics>{ 0x8846EF3F,0xA986,0x48FB,{ 0x9F,0xD7,0x9A,0xEC,0x06,0x93,0x5B,0xF1 } }; // 8846EF3F-A986-48FB-9FD7-9AEC06935BF1
    template <> inline constexpr guid guid_v<Windows::Security::Cryptography::Certificates::ICertificateEnrollmentManagerStatics2>{ 0xDC5B1C33,0x6429,0x4014,{ 0x99,0x9C,0x5D,0x97,0x35,0x80,0x2D,0x1D } }; // DC5B1C33-6429-4014-999C-5D9735802D1D
    template <> inline constexpr guid guid_v<Windows::Security::Cryptography::Certificates::ICertificateEnrollmentManagerStatics3>{ 0xFDEC82BE,0x617C,0x425A,{ 0xB7,0x2D,0x39,0x8B,0x26,0xAC,0x72,0x64 } }; // FDEC82BE-617C-425A-B72D-398B26AC7264
    template <> inline constexpr guid guid_v<Windows::Security::Cryptography::Certificates::ICertificateExtension>{ 0x84CF0656,0xA9E6,0x454D,{ 0x8E,0x45,0x2E,0xA7,0xC4,0xBC,0xD5,0x3B } }; // 84CF0656-A9E6-454D-8E45-2EA7C4BCD53B
    template <> inline constexpr guid guid_v<Windows::Security::Cryptography::Certificates::ICertificateFactory>{ 0x17B4221C,0x4BAF,0x44A2,{ 0x96,0x08,0x04,0xFB,0x62,0xB1,0x69,0x42 } }; // 17B4221C-4BAF-44A2-9608-04FB62B16942
    template <> inline constexpr guid guid_v<Windows::Security::Cryptography::Certificates::ICertificateKeyUsages>{ 0x6AC6206F,0xE1CF,0x486A,{ 0xB4,0x85,0xA6,0x9C,0x83,0xE4,0x6F,0xD1 } }; // 6AC6206F-E1CF-486A-B485-A69C83E46FD1
    template <> inline constexpr guid guid_v<Windows::Security::Cryptography::Certificates::ICertificateQuery>{ 0x5B082A31,0xA728,0x4916,{ 0xB5,0xEE,0xFF,0xCB,0x8A,0xCF,0x24,0x17 } }; // 5B082A31-A728-4916-B5EE-FFCB8ACF2417
    template <> inline constexpr guid guid_v<Windows::Security::Cryptography::Certificates::ICertificateQuery2>{ 0x935A0AF7,0x0BD9,0x4F75,{ 0xB8,0xC2,0xE2,0x7A,0x7F,0x74,0xEE,0xCD } }; // 935A0AF7-0BD9-4F75-B8C2-E27A7F74EECD
    template <> inline constexpr guid guid_v<Windows::Security::Cryptography::Certificates::ICertificateRequestProperties>{ 0x487E84F6,0x94E2,0x4DCE,{ 0x88,0x33,0x1A,0x70,0x0A,0x37,0xA2,0x9A } }; // 487E84F6-94E2-4DCE-8833-1A700A37A29A
    template <> inline constexpr guid guid_v<Windows::Security::Cryptography::Certificates::ICertificateRequestProperties2>{ 0x3DA0C954,0xD73F,0x4FF3,{ 0xA0,0xA6,0x06,0x77,0xC0,0xAD,0xA0,0x5B } }; // 3DA0C954-D73F-4FF3-A0A6-0677C0ADA05B
    template <> inline constexpr guid guid_v<Windows::Security::Cryptography::Certificates::ICertificateRequestProperties3>{ 0xE687F616,0x734D,0x46B1,{ 0x9D,0x4C,0x6E,0xDF,0xDB,0xFC,0x84,0x5B } }; // E687F616-734D-46B1-9D4C-6EDFDBFC845B
    template <> inline constexpr guid guid_v<Windows::Security::Cryptography::Certificates::ICertificateRequestProperties4>{ 0x4E429AD2,0x1C61,0x4FEA,{ 0xB8,0xFE,0x13,0x5F,0xB1,0x9C,0xDC,0xE4 } }; // 4E429AD2-1C61-4FEA-B8FE-135FB19CDCE4
    template <> inline constexpr guid guid_v<Windows::Security::Cryptography::Certificates::ICertificateStore>{ 0xB0BFF720,0x344E,0x4331,{ 0xAF,0x14,0xA7,0xF7,0xA7,0xEB,0xC9,0x3A } }; // B0BFF720-344E-4331-AF14-A7F7A7EBC93A
    template <> inline constexpr guid guid_v<Windows::Security::Cryptography::Certificates::ICertificateStore2>{ 0xC7E68E4A,0x417D,0x4D1A,{ 0xBA,0xBD,0x15,0x68,0x7E,0x54,0x99,0x74 } }; // C7E68E4A-417D-4D1A-BABD-15687E549974
    template <> inline constexpr guid guid_v<Windows::Security::Cryptography::Certificates::ICertificateStoresStatics>{ 0xFBECC739,0xC6FE,0x4DE7,{ 0x99,0xCF,0x74,0xC3,0xE5,0x96,0xE0,0x32 } }; // FBECC739-C6FE-4DE7-99CF-74C3E596E032
    template <> inline constexpr guid guid_v<Windows::Security::Cryptography::Certificates::ICertificateStoresStatics2>{ 0xFA900B79,0xA0D4,0x4B8C,{ 0xBC,0x55,0xC0,0xA3,0x7E,0xB1,0x41,0xED } }; // FA900B79-A0D4-4B8C-BC55-C0A37EB141ED
    template <> inline constexpr guid guid_v<Windows::Security::Cryptography::Certificates::IChainBuildingParameters>{ 0x422BA922,0x7C8D,0x47B7,{ 0xB5,0x9B,0xB1,0x27,0x03,0x73,0x3A,0xC3 } }; // 422BA922-7C8D-47B7-B59B-B12703733AC3
    template <> inline constexpr guid guid_v<Windows::Security::Cryptography::Certificates::IChainValidationParameters>{ 0xC4743B4A,0x7EB0,0x4B56,{ 0xA0,0x40,0xB9,0xC8,0xE6,0x55,0xDD,0xF3 } }; // C4743B4A-7EB0-4B56-A040-B9C8E655DDF3
    template <> inline constexpr guid guid_v<Windows::Security::Cryptography::Certificates::ICmsAttachedSignature>{ 0x61899D9D,0x3757,0x4ECB,{ 0xBD,0xDC,0x0C,0xA3,0x57,0xD7,0xA9,0x36 } }; // 61899D9D-3757-4ECB-BDDC-0CA357D7A936
    template <> inline constexpr guid guid_v<Windows::Security::Cryptography::Certificates::ICmsAttachedSignatureFactory>{ 0xD0C8FC15,0xF757,0x4C64,{ 0xA3,0x62,0x52,0xCC,0x1C,0x77,0xCF,0xFB } }; // D0C8FC15-F757-4C64-A362-52CC1C77CFFB
    template <> inline constexpr guid guid_v<Windows::Security::Cryptography::Certificates::ICmsAttachedSignatureStatics>{ 0x87989C8E,0xB0AD,0x498D,{ 0xA7,0xF5,0x78,0xB5,0x9B,0xCE,0x4B,0x36 } }; // 87989C8E-B0AD-498D-A7F5-78B59BCE4B36
    template <> inline constexpr guid guid_v<Windows::Security::Cryptography::Certificates::ICmsDetachedSignature>{ 0x0F1EF154,0xF65E,0x4536,{ 0x83,0x39,0x59,0x44,0x08,0x1D,0xB2,0xCA } }; // 0F1EF154-F65E-4536-8339-5944081DB2CA
    template <> inline constexpr guid guid_v<Windows::Security::Cryptography::Certificates::ICmsDetachedSignatureFactory>{ 0xC4AB3503,0xAE7F,0x4387,{ 0xAD,0x19,0x00,0xF1,0x50,0xE4,0x8E,0xBB } }; // C4AB3503-AE7F-4387-AD19-00F150E48EBB
    template <> inline constexpr guid guid_v<Windows::Security::Cryptography::Certificates::ICmsDetachedSignatureStatics>{ 0x3D114CFD,0xBF9B,0x4682,{ 0x9B,0xE6,0x91,0xF5,0x7C,0x05,0x38,0x08 } }; // 3D114CFD-BF9B-4682-9BE6-91F57C053808
    template <> inline constexpr guid guid_v<Windows::Security::Cryptography::Certificates::ICmsSignerInfo>{ 0x50D020DB,0x1D2F,0x4C1A,{ 0xB5,0xC5,0xD0,0x18,0x8F,0xF9,0x1F,0x47 } }; // 50D020DB-1D2F-4C1A-B5C5-D0188FF91F47
    template <> inline constexpr guid guid_v<Windows::Security::Cryptography::Certificates::ICmsTimestampInfo>{ 0x2F5F00F2,0x2C18,0x4F88,{ 0x84,0x35,0xC5,0x34,0x08,0x60,0x76,0xF5 } }; // 2F5F00F2-2C18-4F88-8435-C534086076F5
    template <> inline constexpr guid guid_v<Windows::Security::Cryptography::Certificates::IKeyAlgorithmNamesStatics>{ 0x479065D7,0x7AC7,0x4581,{ 0x8C,0x3B,0xD0,0x70,0x27,0x14,0x04,0x48 } }; // 479065D7-7AC7-4581-8C3B-D07027140448
    template <> inline constexpr guid guid_v<Windows::Security::Cryptography::Certificates::IKeyAlgorithmNamesStatics2>{ 0xC99B5686,0xE1FD,0x4A4A,{ 0x89,0x3D,0xA2,0x6F,0x33,0xDD,0x8B,0xB4 } }; // C99B5686-E1FD-4A4A-893D-A26F33DD8BB4
    template <> inline constexpr guid guid_v<Windows::Security::Cryptography::Certificates::IKeyAttestationHelperStatics>{ 0x1648E246,0xF644,0x4326,{ 0x88,0xBE,0x3A,0xF1,0x02,0xD3,0x0E,0x0C } }; // 1648E246-F644-4326-88BE-3AF102D30E0C
    template <> inline constexpr guid guid_v<Windows::Security::Cryptography::Certificates::IKeyAttestationHelperStatics2>{ 0x9C590B2C,0xA6C6,0x4A5E,{ 0x9E,0x64,0xE8,0x5D,0x52,0x79,0xDF,0x97 } }; // 9C590B2C-A6C6-4A5E-9E64-E85D5279DF97
    template <> inline constexpr guid guid_v<Windows::Security::Cryptography::Certificates::IKeyStorageProviderNamesStatics>{ 0xAF186AE0,0x5529,0x4602,{ 0xBD,0x94,0x0A,0xAB,0x91,0x95,0x7B,0x5C } }; // AF186AE0-5529-4602-BD94-0AAB91957B5C
    template <> inline constexpr guid guid_v<Windows::Security::Cryptography::Certificates::IKeyStorageProviderNamesStatics2>{ 0x262D743D,0x9C2E,0x41CC,{ 0x88,0x12,0xC4,0xD9,0x71,0xDD,0x7C,0x60 } }; // 262D743D-9C2E-41CC-8812-C4D971DD7C60
    template <> inline constexpr guid guid_v<Windows::Security::Cryptography::Certificates::IPfxImportParameters>{ 0x680D3511,0x9A08,0x47C8,{ 0x86,0x4A,0x2E,0xDD,0x4D,0x8E,0xB4,0x6C } }; // 680D3511-9A08-47C8-864A-2EDD4D8EB46C
    template <> inline constexpr guid guid_v<Windows::Security::Cryptography::Certificates::IStandardCertificateStoreNamesStatics>{ 0x0C154ADB,0xA496,0x41F8,{ 0x8F,0xE5,0x9E,0x96,0xF3,0x6E,0xFB,0xF8 } }; // 0C154ADB-A496-41F8-8FE5-9E96F36EFBF8
    template <> inline constexpr guid guid_v<Windows::Security::Cryptography::Certificates::ISubjectAlternativeNameInfo>{ 0x582859F1,0x569D,0x4C20,{ 0xBE,0x7B,0x4E,0x1C,0x9A,0x0B,0xC5,0x2B } }; // 582859F1-569D-4C20-BE7B-4E1C9A0BC52B
    template <> inline constexpr guid guid_v<Windows::Security::Cryptography::Certificates::ISubjectAlternativeNameInfo2>{ 0x437A78C6,0x1C51,0x41EA,{ 0xB3,0x4A,0x3D,0x65,0x43,0x98,0xA3,0x70 } }; // 437A78C6-1C51-41EA-B34A-3D654398A370
    template <> inline constexpr guid guid_v<Windows::Security::Cryptography::Certificates::IUserCertificateEnrollmentManager>{ 0x96313718,0x22E1,0x4819,{ 0xB2,0x0B,0xAB,0x46,0xA6,0xEC,0xA0,0x6E } }; // 96313718-22E1-4819-B20B-AB46A6ECA06E
    template <> inline constexpr guid guid_v<Windows::Security::Cryptography::Certificates::IUserCertificateEnrollmentManager2>{ 0x0DAD9CB1,0x65DE,0x492A,{ 0xB8,0x6D,0xFC,0x5C,0x48,0x2C,0x37,0x47 } }; // 0DAD9CB1-65DE-492A-B86D-FC5C482C3747
    template <> inline constexpr guid guid_v<Windows::Security::Cryptography::Certificates::IUserCertificateStore>{ 0xC9FB1D83,0x789F,0x4B4E,{ 0x91,0x80,0x04,0x5A,0x75,0x7A,0xAC,0x6D } }; // C9FB1D83-789F-4B4E-9180-045A757AAC6D
    template <> struct default_interface<Windows::Security::Cryptography::Certificates::Certificate>{ using type = Windows::Security::Cryptography::Certificates::ICertificate; };
    template <> struct default_interface<Windows::Security::Cryptography::Certificates::CertificateChain>{ using type = Windows::Security::Cryptography::Certificates::ICertificateChain; };
    template <> struct default_interface<Windows::Security::Cryptography::Certificates::CertificateExtension>{ using type = Windows::Security::Cryptography::Certificates::ICertificateExtension; };
    template <> struct default_interface<Windows::Security::Cryptography::Certificates::CertificateKeyUsages>{ using type = Windows::Security::Cryptography::Certificates::ICertificateKeyUsages; };
    template <> struct default_interface<Windows::Security::Cryptography::Certificates::CertificateQuery>{ using type = Windows::Security::Cryptography::Certificates::ICertificateQuery; };
    template <> struct default_interface<Windows::Security::Cryptography::Certificates::CertificateRequestProperties>{ using type = Windows::Security::Cryptography::Certificates::ICertificateRequestProperties; };
    template <> struct default_interface<Windows::Security::Cryptography::Certificates::CertificateStore>{ using type = Windows::Security::Cryptography::Certificates::ICertificateStore; };
    template <> struct default_interface<Windows::Security::Cryptography::Certificates::ChainBuildingParameters>{ using type = Windows::Security::Cryptography::Certificates::IChainBuildingParameters; };
    template <> struct default_interface<Windows::Security::Cryptography::Certificates::ChainValidationParameters>{ using type = Windows::Security::Cryptography::Certificates::IChainValidationParameters; };
    template <> struct default_interface<Windows::Security::Cryptography::Certificates::CmsAttachedSignature>{ using type = Windows::Security::Cryptography::Certificates::ICmsAttachedSignature; };
    template <> struct default_interface<Windows::Security::Cryptography::Certificates::CmsDetachedSignature>{ using type = Windows::Security::Cryptography::Certificates::ICmsDetachedSignature; };
    template <> struct default_interface<Windows::Security::Cryptography::Certificates::CmsSignerInfo>{ using type = Windows::Security::Cryptography::Certificates::ICmsSignerInfo; };
    template <> struct default_interface<Windows::Security::Cryptography::Certificates::CmsTimestampInfo>{ using type = Windows::Security::Cryptography::Certificates::ICmsTimestampInfo; };
    template <> struct default_interface<Windows::Security::Cryptography::Certificates::PfxImportParameters>{ using type = Windows::Security::Cryptography::Certificates::IPfxImportParameters; };
    template <> struct default_interface<Windows::Security::Cryptography::Certificates::SubjectAlternativeNameInfo>{ using type = Windows::Security::Cryptography::Certificates::ISubjectAlternativeNameInfo; };
    template <> struct default_interface<Windows::Security::Cryptography::Certificates::UserCertificateEnrollmentManager>{ using type = Windows::Security::Cryptography::Certificates::IUserCertificateEnrollmentManager; };
    template <> struct default_interface<Windows::Security::Cryptography::Certificates::UserCertificateStore>{ using type = Windows::Security::Cryptography::Certificates::IUserCertificateStore; };
    template <> struct abi<Windows::Security::Cryptography::Certificates::ICertificate>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall BuildChainAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall BuildChainWithParametersAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall get_SerialNumber(uint32_t* __valueSize, uint8_t**) noexcept = 0;
            virtual int32_t __stdcall GetHashValue(uint32_t* __valueSize, uint8_t**) noexcept = 0;
            virtual int32_t __stdcall GetHashValueWithAlgorithm(void*, uint32_t* __valueSize, uint8_t**) noexcept = 0;
            virtual int32_t __stdcall GetCertificateBlob(void**) noexcept = 0;
            virtual int32_t __stdcall get_Subject(void**) noexcept = 0;
            virtual int32_t __stdcall get_Issuer(void**) noexcept = 0;
            virtual int32_t __stdcall get_HasPrivateKey(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsStronglyProtected(bool*) noexcept = 0;
            virtual int32_t __stdcall get_ValidFrom(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_ValidTo(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_EnhancedKeyUsages(void**) noexcept = 0;
            virtual int32_t __stdcall put_FriendlyName(void*) noexcept = 0;
            virtual int32_t __stdcall get_FriendlyName(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Certificates::ICertificate2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsSecurityDeviceBound(bool*) noexcept = 0;
            virtual int32_t __stdcall get_KeyUsages(void**) noexcept = 0;
            virtual int32_t __stdcall get_KeyAlgorithmName(void**) noexcept = 0;
            virtual int32_t __stdcall get_SignatureAlgorithmName(void**) noexcept = 0;
            virtual int32_t __stdcall get_SignatureHashAlgorithmName(void**) noexcept = 0;
            virtual int32_t __stdcall get_SubjectAlternativeName(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Certificates::ICertificate3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsPerUser(bool*) noexcept = 0;
            virtual int32_t __stdcall get_StoreName(void**) noexcept = 0;
            virtual int32_t __stdcall get_KeyStorageProviderName(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Certificates::ICertificateChain>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Validate(int32_t*) noexcept = 0;
            virtual int32_t __stdcall ValidateWithParameters(void*, int32_t*) noexcept = 0;
            virtual int32_t __stdcall GetCertificates(bool, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Certificates::ICertificateEnrollmentManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateRequestAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall InstallCertificateAsync(void*, uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall ImportPfxDataAsync(void*, void*, int32_t, int32_t, uint32_t, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Certificates::ICertificateEnrollmentManagerStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_UserCertificateEnrollmentManager(void**) noexcept = 0;
            virtual int32_t __stdcall ImportPfxDataToKspAsync(void*, void*, int32_t, int32_t, uint32_t, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Certificates::ICertificateEnrollmentManagerStatics3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ImportPfxDataToKspWithParametersAsync(void*, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Certificates::ICertificateExtension>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ObjectId(void**) noexcept = 0;
            virtual int32_t __stdcall put_ObjectId(void*) noexcept = 0;
            virtual int32_t __stdcall get_IsCritical(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsCritical(bool) noexcept = 0;
            virtual int32_t __stdcall EncodeValue(void*) noexcept = 0;
            virtual int32_t __stdcall get_Value(uint32_t* __valueSize, uint8_t**) noexcept = 0;
            virtual int32_t __stdcall put_Value(uint32_t, uint8_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Certificates::ICertificateFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateCertificate(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Certificates::ICertificateKeyUsages>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EncipherOnly(bool*) noexcept = 0;
            virtual int32_t __stdcall put_EncipherOnly(bool) noexcept = 0;
            virtual int32_t __stdcall get_CrlSign(bool*) noexcept = 0;
            virtual int32_t __stdcall put_CrlSign(bool) noexcept = 0;
            virtual int32_t __stdcall get_KeyCertificateSign(bool*) noexcept = 0;
            virtual int32_t __stdcall put_KeyCertificateSign(bool) noexcept = 0;
            virtual int32_t __stdcall get_KeyAgreement(bool*) noexcept = 0;
            virtual int32_t __stdcall put_KeyAgreement(bool) noexcept = 0;
            virtual int32_t __stdcall get_DataEncipherment(bool*) noexcept = 0;
            virtual int32_t __stdcall put_DataEncipherment(bool) noexcept = 0;
            virtual int32_t __stdcall get_KeyEncipherment(bool*) noexcept = 0;
            virtual int32_t __stdcall put_KeyEncipherment(bool) noexcept = 0;
            virtual int32_t __stdcall get_NonRepudiation(bool*) noexcept = 0;
            virtual int32_t __stdcall put_NonRepudiation(bool) noexcept = 0;
            virtual int32_t __stdcall get_DigitalSignature(bool*) noexcept = 0;
            virtual int32_t __stdcall put_DigitalSignature(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Certificates::ICertificateQuery>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EnhancedKeyUsages(void**) noexcept = 0;
            virtual int32_t __stdcall get_IssuerName(void**) noexcept = 0;
            virtual int32_t __stdcall put_IssuerName(void*) noexcept = 0;
            virtual int32_t __stdcall get_FriendlyName(void**) noexcept = 0;
            virtual int32_t __stdcall put_FriendlyName(void*) noexcept = 0;
            virtual int32_t __stdcall get_Thumbprint(uint32_t* __valueSize, uint8_t**) noexcept = 0;
            virtual int32_t __stdcall put_Thumbprint(uint32_t, uint8_t*) noexcept = 0;
            virtual int32_t __stdcall get_HardwareOnly(bool*) noexcept = 0;
            virtual int32_t __stdcall put_HardwareOnly(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Certificates::ICertificateQuery2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IncludeDuplicates(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IncludeDuplicates(bool) noexcept = 0;
            virtual int32_t __stdcall get_IncludeExpiredCertificates(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IncludeExpiredCertificates(bool) noexcept = 0;
            virtual int32_t __stdcall get_StoreName(void**) noexcept = 0;
            virtual int32_t __stdcall put_StoreName(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Certificates::ICertificateRequestProperties>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Subject(void**) noexcept = 0;
            virtual int32_t __stdcall put_Subject(void*) noexcept = 0;
            virtual int32_t __stdcall get_KeyAlgorithmName(void**) noexcept = 0;
            virtual int32_t __stdcall put_KeyAlgorithmName(void*) noexcept = 0;
            virtual int32_t __stdcall get_KeySize(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_KeySize(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_FriendlyName(void**) noexcept = 0;
            virtual int32_t __stdcall put_FriendlyName(void*) noexcept = 0;
            virtual int32_t __stdcall get_HashAlgorithmName(void**) noexcept = 0;
            virtual int32_t __stdcall put_HashAlgorithmName(void*) noexcept = 0;
            virtual int32_t __stdcall get_Exportable(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Exportable(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_KeyUsages(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_KeyUsages(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_KeyProtectionLevel(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_KeyProtectionLevel(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_KeyStorageProviderName(void**) noexcept = 0;
            virtual int32_t __stdcall put_KeyStorageProviderName(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Certificates::ICertificateRequestProperties2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SmartcardReaderName(void**) noexcept = 0;
            virtual int32_t __stdcall put_SmartcardReaderName(void*) noexcept = 0;
            virtual int32_t __stdcall get_SigningCertificate(void**) noexcept = 0;
            virtual int32_t __stdcall put_SigningCertificate(void*) noexcept = 0;
            virtual int32_t __stdcall get_AttestationCredentialCertificate(void**) noexcept = 0;
            virtual int32_t __stdcall put_AttestationCredentialCertificate(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Certificates::ICertificateRequestProperties3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CurveName(void**) noexcept = 0;
            virtual int32_t __stdcall put_CurveName(void*) noexcept = 0;
            virtual int32_t __stdcall get_CurveParameters(uint32_t* __valueSize, uint8_t**) noexcept = 0;
            virtual int32_t __stdcall put_CurveParameters(uint32_t, uint8_t*) noexcept = 0;
            virtual int32_t __stdcall get_ContainerNamePrefix(void**) noexcept = 0;
            virtual int32_t __stdcall put_ContainerNamePrefix(void*) noexcept = 0;
            virtual int32_t __stdcall get_ContainerName(void**) noexcept = 0;
            virtual int32_t __stdcall put_ContainerName(void*) noexcept = 0;
            virtual int32_t __stdcall get_UseExistingKey(bool*) noexcept = 0;
            virtual int32_t __stdcall put_UseExistingKey(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Certificates::ICertificateRequestProperties4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SuppressedDefaults(void**) noexcept = 0;
            virtual int32_t __stdcall get_SubjectAlternativeName(void**) noexcept = 0;
            virtual int32_t __stdcall get_Extensions(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Certificates::ICertificateStore>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Add(void*) noexcept = 0;
            virtual int32_t __stdcall Delete(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Certificates::ICertificateStore2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Certificates::ICertificateStoresStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FindAllAsync(void**) noexcept = 0;
            virtual int32_t __stdcall FindAllWithQueryAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall get_TrustedRootCertificationAuthorities(void**) noexcept = 0;
            virtual int32_t __stdcall get_IntermediateCertificationAuthorities(void**) noexcept = 0;
            virtual int32_t __stdcall GetStoreByName(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Certificates::ICertificateStoresStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetUserStoreByName(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Certificates::IChainBuildingParameters>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EnhancedKeyUsages(void**) noexcept = 0;
            virtual int32_t __stdcall get_ValidationTimestamp(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_ValidationTimestamp(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_RevocationCheckEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_RevocationCheckEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_NetworkRetrievalEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_NetworkRetrievalEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_AuthorityInformationAccessEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AuthorityInformationAccessEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_CurrentTimeValidationEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_CurrentTimeValidationEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_ExclusiveTrustRoots(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Certificates::IChainValidationParameters>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CertificateChainPolicy(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_CertificateChainPolicy(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_ServerDnsName(void**) noexcept = 0;
            virtual int32_t __stdcall put_ServerDnsName(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Certificates::ICmsAttachedSignature>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Certificates(void**) noexcept = 0;
            virtual int32_t __stdcall get_Content(uint32_t* __valueSize, uint8_t**) noexcept = 0;
            virtual int32_t __stdcall get_Signers(void**) noexcept = 0;
            virtual int32_t __stdcall VerifySignature(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Certificates::ICmsAttachedSignatureFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateCmsAttachedSignature(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Certificates::ICmsAttachedSignatureStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GenerateSignatureAsync(void*, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Certificates::ICmsDetachedSignature>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Certificates(void**) noexcept = 0;
            virtual int32_t __stdcall get_Signers(void**) noexcept = 0;
            virtual int32_t __stdcall VerifySignatureAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Certificates::ICmsDetachedSignatureFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateCmsDetachedSignature(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Certificates::ICmsDetachedSignatureStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GenerateSignatureAsync(void*, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Certificates::ICmsSignerInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Certificate(void**) noexcept = 0;
            virtual int32_t __stdcall put_Certificate(void*) noexcept = 0;
            virtual int32_t __stdcall get_HashAlgorithmName(void**) noexcept = 0;
            virtual int32_t __stdcall put_HashAlgorithmName(void*) noexcept = 0;
            virtual int32_t __stdcall get_TimestampInfo(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Certificates::ICmsTimestampInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SigningCertificate(void**) noexcept = 0;
            virtual int32_t __stdcall get_Certificates(void**) noexcept = 0;
            virtual int32_t __stdcall get_Timestamp(int64_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Certificates::IKeyAlgorithmNamesStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Rsa(void**) noexcept = 0;
            virtual int32_t __stdcall get_Dsa(void**) noexcept = 0;
            virtual int32_t __stdcall get_Ecdh256(void**) noexcept = 0;
            virtual int32_t __stdcall get_Ecdh384(void**) noexcept = 0;
            virtual int32_t __stdcall get_Ecdh521(void**) noexcept = 0;
            virtual int32_t __stdcall get_Ecdsa256(void**) noexcept = 0;
            virtual int32_t __stdcall get_Ecdsa384(void**) noexcept = 0;
            virtual int32_t __stdcall get_Ecdsa521(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Certificates::IKeyAlgorithmNamesStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Ecdsa(void**) noexcept = 0;
            virtual int32_t __stdcall get_Ecdh(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Certificates::IKeyAttestationHelperStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall DecryptTpmAttestationCredentialAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetTpmAttestationCredentialId(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Certificates::IKeyAttestationHelperStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall DecryptTpmAttestationCredentialWithContainerNameAsync(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Certificates::IKeyStorageProviderNamesStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SoftwareKeyStorageProvider(void**) noexcept = 0;
            virtual int32_t __stdcall get_SmartcardKeyStorageProvider(void**) noexcept = 0;
            virtual int32_t __stdcall get_PlatformKeyStorageProvider(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Certificates::IKeyStorageProviderNamesStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PassportKeyStorageProvider(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Certificates::IPfxImportParameters>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Exportable(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Exportable(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_KeyProtectionLevel(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_KeyProtectionLevel(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_InstallOptions(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_InstallOptions(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_FriendlyName(void**) noexcept = 0;
            virtual int32_t __stdcall put_FriendlyName(void*) noexcept = 0;
            virtual int32_t __stdcall get_KeyStorageProviderName(void**) noexcept = 0;
            virtual int32_t __stdcall put_KeyStorageProviderName(void*) noexcept = 0;
            virtual int32_t __stdcall get_ContainerNamePrefix(void**) noexcept = 0;
            virtual int32_t __stdcall put_ContainerNamePrefix(void*) noexcept = 0;
            virtual int32_t __stdcall get_ReaderName(void**) noexcept = 0;
            virtual int32_t __stdcall put_ReaderName(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Certificates::IStandardCertificateStoreNamesStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Personal(void**) noexcept = 0;
            virtual int32_t __stdcall get_TrustedRootCertificationAuthorities(void**) noexcept = 0;
            virtual int32_t __stdcall get_IntermediateCertificationAuthorities(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Certificates::ISubjectAlternativeNameInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EmailName(void**) noexcept = 0;
            virtual int32_t __stdcall get_IPAddress(void**) noexcept = 0;
            virtual int32_t __stdcall get_Url(void**) noexcept = 0;
            virtual int32_t __stdcall get_DnsName(void**) noexcept = 0;
            virtual int32_t __stdcall get_DistinguishedName(void**) noexcept = 0;
            virtual int32_t __stdcall get_PrincipalName(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Certificates::ISubjectAlternativeNameInfo2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EmailNames(void**) noexcept = 0;
            virtual int32_t __stdcall get_IPAddresses(void**) noexcept = 0;
            virtual int32_t __stdcall get_Urls(void**) noexcept = 0;
            virtual int32_t __stdcall get_DnsNames(void**) noexcept = 0;
            virtual int32_t __stdcall get_DistinguishedNames(void**) noexcept = 0;
            virtual int32_t __stdcall get_PrincipalNames(void**) noexcept = 0;
            virtual int32_t __stdcall get_Extension(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Certificates::IUserCertificateEnrollmentManager>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateRequestAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall InstallCertificateAsync(void*, uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall ImportPfxDataAsync(void*, void*, int32_t, int32_t, uint32_t, void*, void**) noexcept = 0;
            virtual int32_t __stdcall ImportPfxDataToKspAsync(void*, void*, int32_t, int32_t, uint32_t, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Certificates::IUserCertificateEnrollmentManager2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ImportPfxDataToKspWithParametersAsync(void*, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Security::Cryptography::Certificates::IUserCertificateStore>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall RequestAddAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall RequestDeleteAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Certificates_ICertificate
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Security::Cryptography::Certificates::CertificateChain>) BuildChainAsync(param::async_iterable<Windows::Security::Cryptography::Certificates::Certificate> const& certificates) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Security::Cryptography::Certificates::CertificateChain>) BuildChainAsync(param::async_iterable<Windows::Security::Cryptography::Certificates::Certificate> const& certificates, Windows::Security::Cryptography::Certificates::ChainBuildingParameters const& parameters) const;
        [[nodiscard]] WINRT_IMPL_AUTO(com_array<uint8_t>) SerialNumber() const;
        WINRT_IMPL_AUTO(com_array<uint8_t>) GetHashValue() const;
        WINRT_IMPL_AUTO(com_array<uint8_t>) GetHashValue(param::hstring const& hashAlgorithmName) const;
        WINRT_IMPL_AUTO(Windows::Storage::Streams::IBuffer) GetCertificateBlob() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Subject() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Issuer() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) HasPrivateKey() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsStronglyProtected() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::DateTime) ValidFrom() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::DateTime) ValidTo() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<hstring>) EnhancedKeyUsages() const;
        WINRT_IMPL_AUTO(void) FriendlyName(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) FriendlyName() const;
    };
    template <> struct consume<Windows::Security::Cryptography::Certificates::ICertificate>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Certificates_ICertificate<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Certificates_ICertificate2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsSecurityDeviceBound() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Security::Cryptography::Certificates::CertificateKeyUsages) KeyUsages() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) KeyAlgorithmName() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) SignatureAlgorithmName() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) SignatureHashAlgorithmName() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Security::Cryptography::Certificates::SubjectAlternativeNameInfo) SubjectAlternativeName() const;
    };
    template <> struct consume<Windows::Security::Cryptography::Certificates::ICertificate2>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Certificates_ICertificate2<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Certificates_ICertificate3
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsPerUser() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) StoreName() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) KeyStorageProviderName() const;
    };
    template <> struct consume<Windows::Security::Cryptography::Certificates::ICertificate3>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Certificates_ICertificate3<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Certificates_ICertificateChain
    {
        WINRT_IMPL_AUTO(Windows::Security::Cryptography::Certificates::ChainValidationResult) Validate() const;
        WINRT_IMPL_AUTO(Windows::Security::Cryptography::Certificates::ChainValidationResult) Validate(Windows::Security::Cryptography::Certificates::ChainValidationParameters const& parameter) const;
        WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate>) GetCertificates(bool includeRoot) const;
    };
    template <> struct consume<Windows::Security::Cryptography::Certificates::ICertificateChain>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Certificates_ICertificateChain<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Certificates_ICertificateEnrollmentManagerStatics
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<hstring>) CreateRequestAsync(Windows::Security::Cryptography::Certificates::CertificateRequestProperties const& request) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) InstallCertificateAsync(param::hstring const& certificate, Windows::Security::Cryptography::Certificates::InstallOptions const& installOption) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) ImportPfxDataAsync(param::hstring const& pfxData, param::hstring const& password, Windows::Security::Cryptography::Certificates::ExportOption const& exportable, Windows::Security::Cryptography::Certificates::KeyProtectionLevel const& keyProtectionLevel, Windows::Security::Cryptography::Certificates::InstallOptions const& installOption, param::hstring const& friendlyName) const;
    };
    template <> struct consume<Windows::Security::Cryptography::Certificates::ICertificateEnrollmentManagerStatics>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Certificates_ICertificateEnrollmentManagerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Certificates_ICertificateEnrollmentManagerStatics2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Security::Cryptography::Certificates::UserCertificateEnrollmentManager) UserCertificateEnrollmentManager() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) ImportPfxDataAsync(param::hstring const& pfxData, param::hstring const& password, Windows::Security::Cryptography::Certificates::ExportOption const& exportable, Windows::Security::Cryptography::Certificates::KeyProtectionLevel const& keyProtectionLevel, Windows::Security::Cryptography::Certificates::InstallOptions const& installOption, param::hstring const& friendlyName, param::hstring const& keyStorageProvider) const;
    };
    template <> struct consume<Windows::Security::Cryptography::Certificates::ICertificateEnrollmentManagerStatics2>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Certificates_ICertificateEnrollmentManagerStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Certificates_ICertificateEnrollmentManagerStatics3
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) ImportPfxDataAsync(param::hstring const& pfxData, param::hstring const& password, Windows::Security::Cryptography::Certificates::PfxImportParameters const& pfxImportParameters) const;
    };
    template <> struct consume<Windows::Security::Cryptography::Certificates::ICertificateEnrollmentManagerStatics3>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Certificates_ICertificateEnrollmentManagerStatics3<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Certificates_ICertificateExtension
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) ObjectId() const;
        WINRT_IMPL_AUTO(void) ObjectId(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsCritical() const;
        WINRT_IMPL_AUTO(void) IsCritical(bool value) const;
        WINRT_IMPL_AUTO(void) EncodeValue(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(com_array<uint8_t>) Value() const;
        WINRT_IMPL_AUTO(void) Value(array_view<uint8_t const> value) const;
    };
    template <> struct consume<Windows::Security::Cryptography::Certificates::ICertificateExtension>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Certificates_ICertificateExtension<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Certificates_ICertificateFactory
    {
        WINRT_IMPL_AUTO(Windows::Security::Cryptography::Certificates::Certificate) CreateCertificate(Windows::Storage::Streams::IBuffer const& certBlob) const;
    };
    template <> struct consume<Windows::Security::Cryptography::Certificates::ICertificateFactory>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Certificates_ICertificateFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Certificates_ICertificateKeyUsages
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) EncipherOnly() const;
        WINRT_IMPL_AUTO(void) EncipherOnly(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) CrlSign() const;
        WINRT_IMPL_AUTO(void) CrlSign(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) KeyCertificateSign() const;
        WINRT_IMPL_AUTO(void) KeyCertificateSign(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) KeyAgreement() const;
        WINRT_IMPL_AUTO(void) KeyAgreement(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) DataEncipherment() const;
        WINRT_IMPL_AUTO(void) DataEncipherment(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) KeyEncipherment() const;
        WINRT_IMPL_AUTO(void) KeyEncipherment(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) NonRepudiation() const;
        WINRT_IMPL_AUTO(void) NonRepudiation(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) DigitalSignature() const;
        WINRT_IMPL_AUTO(void) DigitalSignature(bool value) const;
    };
    template <> struct consume<Windows::Security::Cryptography::Certificates::ICertificateKeyUsages>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Certificates_ICertificateKeyUsages<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Certificates_ICertificateQuery
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<hstring>) EnhancedKeyUsages() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) IssuerName() const;
        WINRT_IMPL_AUTO(void) IssuerName(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) FriendlyName() const;
        WINRT_IMPL_AUTO(void) FriendlyName(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(com_array<uint8_t>) Thumbprint() const;
        WINRT_IMPL_AUTO(void) Thumbprint(array_view<uint8_t const> value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) HardwareOnly() const;
        WINRT_IMPL_AUTO(void) HardwareOnly(bool value) const;
    };
    template <> struct consume<Windows::Security::Cryptography::Certificates::ICertificateQuery>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Certificates_ICertificateQuery<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Certificates_ICertificateQuery2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IncludeDuplicates() const;
        WINRT_IMPL_AUTO(void) IncludeDuplicates(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IncludeExpiredCertificates() const;
        WINRT_IMPL_AUTO(void) IncludeExpiredCertificates(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) StoreName() const;
        WINRT_IMPL_AUTO(void) StoreName(param::hstring const& value) const;
    };
    template <> struct consume<Windows::Security::Cryptography::Certificates::ICertificateQuery2>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Certificates_ICertificateQuery2<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Subject() const;
        WINRT_IMPL_AUTO(void) Subject(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) KeyAlgorithmName() const;
        WINRT_IMPL_AUTO(void) KeyAlgorithmName(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) KeySize() const;
        WINRT_IMPL_AUTO(void) KeySize(uint32_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) FriendlyName() const;
        WINRT_IMPL_AUTO(void) FriendlyName(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) HashAlgorithmName() const;
        WINRT_IMPL_AUTO(void) HashAlgorithmName(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Security::Cryptography::Certificates::ExportOption) Exportable() const;
        WINRT_IMPL_AUTO(void) Exportable(Windows::Security::Cryptography::Certificates::ExportOption const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Security::Cryptography::Certificates::EnrollKeyUsages) KeyUsages() const;
        WINRT_IMPL_AUTO(void) KeyUsages(Windows::Security::Cryptography::Certificates::EnrollKeyUsages const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Security::Cryptography::Certificates::KeyProtectionLevel) KeyProtectionLevel() const;
        WINRT_IMPL_AUTO(void) KeyProtectionLevel(Windows::Security::Cryptography::Certificates::KeyProtectionLevel const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) KeyStorageProviderName() const;
        WINRT_IMPL_AUTO(void) KeyStorageProviderName(param::hstring const& value) const;
    };
    template <> struct consume<Windows::Security::Cryptography::Certificates::ICertificateRequestProperties>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) SmartcardReaderName() const;
        WINRT_IMPL_AUTO(void) SmartcardReaderName(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Security::Cryptography::Certificates::Certificate) SigningCertificate() const;
        WINRT_IMPL_AUTO(void) SigningCertificate(Windows::Security::Cryptography::Certificates::Certificate const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Security::Cryptography::Certificates::Certificate) AttestationCredentialCertificate() const;
        WINRT_IMPL_AUTO(void) AttestationCredentialCertificate(Windows::Security::Cryptography::Certificates::Certificate const& value) const;
    };
    template <> struct consume<Windows::Security::Cryptography::Certificates::ICertificateRequestProperties2>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties2<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties3
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) CurveName() const;
        WINRT_IMPL_AUTO(void) CurveName(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(com_array<uint8_t>) CurveParameters() const;
        WINRT_IMPL_AUTO(void) CurveParameters(array_view<uint8_t const> value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) ContainerNamePrefix() const;
        WINRT_IMPL_AUTO(void) ContainerNamePrefix(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) ContainerName() const;
        WINRT_IMPL_AUTO(void) ContainerName(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) UseExistingKey() const;
        WINRT_IMPL_AUTO(void) UseExistingKey(bool value) const;
    };
    template <> struct consume<Windows::Security::Cryptography::Certificates::ICertificateRequestProperties3>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties3<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties4
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<hstring>) SuppressedDefaults() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Security::Cryptography::Certificates::SubjectAlternativeNameInfo) SubjectAlternativeName() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::Security::Cryptography::Certificates::CertificateExtension>) Extensions() const;
    };
    template <> struct consume<Windows::Security::Cryptography::Certificates::ICertificateRequestProperties4>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties4<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Certificates_ICertificateStore
    {
        WINRT_IMPL_AUTO(void) Add(Windows::Security::Cryptography::Certificates::Certificate const& certificate) const;
        WINRT_IMPL_AUTO(void) Delete(Windows::Security::Cryptography::Certificates::Certificate const& certificate) const;
    };
    template <> struct consume<Windows::Security::Cryptography::Certificates::ICertificateStore>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Certificates_ICertificateStore<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Certificates_ICertificateStore2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Name() const;
    };
    template <> struct consume<Windows::Security::Cryptography::Certificates::ICertificateStore2>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Certificates_ICertificateStore2<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Certificates_ICertificateStoresStatics
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate>>) FindAllAsync() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate>>) FindAllAsync(Windows::Security::Cryptography::Certificates::CertificateQuery const& query) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Security::Cryptography::Certificates::CertificateStore) TrustedRootCertificationAuthorities() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Security::Cryptography::Certificates::CertificateStore) IntermediateCertificationAuthorities() const;
        WINRT_IMPL_AUTO(Windows::Security::Cryptography::Certificates::CertificateStore) GetStoreByName(param::hstring const& storeName) const;
    };
    template <> struct consume<Windows::Security::Cryptography::Certificates::ICertificateStoresStatics>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Certificates_ICertificateStoresStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Certificates_ICertificateStoresStatics2
    {
        WINRT_IMPL_AUTO(Windows::Security::Cryptography::Certificates::UserCertificateStore) GetUserStoreByName(param::hstring const& storeName) const;
    };
    template <> struct consume<Windows::Security::Cryptography::Certificates::ICertificateStoresStatics2>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Certificates_ICertificateStoresStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Certificates_IChainBuildingParameters
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<hstring>) EnhancedKeyUsages() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::DateTime) ValidationTimestamp() const;
        WINRT_IMPL_AUTO(void) ValidationTimestamp(Windows::Foundation::DateTime const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) RevocationCheckEnabled() const;
        WINRT_IMPL_AUTO(void) RevocationCheckEnabled(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) NetworkRetrievalEnabled() const;
        WINRT_IMPL_AUTO(void) NetworkRetrievalEnabled(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) AuthorityInformationAccessEnabled() const;
        WINRT_IMPL_AUTO(void) AuthorityInformationAccessEnabled(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) CurrentTimeValidationEnabled() const;
        WINRT_IMPL_AUTO(void) CurrentTimeValidationEnabled(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::Security::Cryptography::Certificates::Certificate>) ExclusiveTrustRoots() const;
    };
    template <> struct consume<Windows::Security::Cryptography::Certificates::IChainBuildingParameters>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Certificates_IChainBuildingParameters<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Certificates_IChainValidationParameters
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Security::Cryptography::Certificates::CertificateChainPolicy) CertificateChainPolicy() const;
        WINRT_IMPL_AUTO(void) CertificateChainPolicy(Windows::Security::Cryptography::Certificates::CertificateChainPolicy const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Networking::HostName) ServerDnsName() const;
        WINRT_IMPL_AUTO(void) ServerDnsName(Windows::Networking::HostName const& value) const;
    };
    template <> struct consume<Windows::Security::Cryptography::Certificates::IChainValidationParameters>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Certificates_IChainValidationParameters<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Certificates_ICmsAttachedSignature
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate>) Certificates() const;
        [[nodiscard]] WINRT_IMPL_AUTO(com_array<uint8_t>) Content() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::CmsSignerInfo>) Signers() const;
        WINRT_IMPL_AUTO(Windows::Security::Cryptography::Certificates::SignatureValidationResult) VerifySignature() const;
    };
    template <> struct consume<Windows::Security::Cryptography::Certificates::ICmsAttachedSignature>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Certificates_ICmsAttachedSignature<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Certificates_ICmsAttachedSignatureFactory
    {
        WINRT_IMPL_AUTO(Windows::Security::Cryptography::Certificates::CmsAttachedSignature) CreateCmsAttachedSignature(Windows::Storage::Streams::IBuffer const& inputBlob) const;
    };
    template <> struct consume<Windows::Security::Cryptography::Certificates::ICmsAttachedSignatureFactory>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Certificates_ICmsAttachedSignatureFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Certificates_ICmsAttachedSignatureStatics
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer>) GenerateSignatureAsync(Windows::Storage::Streams::IBuffer const& data, param::async_iterable<Windows::Security::Cryptography::Certificates::CmsSignerInfo> const& signers, param::async_iterable<Windows::Security::Cryptography::Certificates::Certificate> const& certificates) const;
    };
    template <> struct consume<Windows::Security::Cryptography::Certificates::ICmsAttachedSignatureStatics>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Certificates_ICmsAttachedSignatureStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Certificates_ICmsDetachedSignature
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate>) Certificates() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::CmsSignerInfo>) Signers() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Security::Cryptography::Certificates::SignatureValidationResult>) VerifySignatureAsync(Windows::Storage::Streams::IInputStream const& data) const;
    };
    template <> struct consume<Windows::Security::Cryptography::Certificates::ICmsDetachedSignature>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Certificates_ICmsDetachedSignature<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Certificates_ICmsDetachedSignatureFactory
    {
        WINRT_IMPL_AUTO(Windows::Security::Cryptography::Certificates::CmsDetachedSignature) CreateCmsDetachedSignature(Windows::Storage::Streams::IBuffer const& inputBlob) const;
    };
    template <> struct consume<Windows::Security::Cryptography::Certificates::ICmsDetachedSignatureFactory>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Certificates_ICmsDetachedSignatureFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Certificates_ICmsDetachedSignatureStatics
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer>) GenerateSignatureAsync(Windows::Storage::Streams::IInputStream const& data, param::async_iterable<Windows::Security::Cryptography::Certificates::CmsSignerInfo> const& signers, param::async_iterable<Windows::Security::Cryptography::Certificates::Certificate> const& certificates) const;
    };
    template <> struct consume<Windows::Security::Cryptography::Certificates::ICmsDetachedSignatureStatics>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Certificates_ICmsDetachedSignatureStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Certificates_ICmsSignerInfo
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Security::Cryptography::Certificates::Certificate) Certificate() const;
        WINRT_IMPL_AUTO(void) Certificate(Windows::Security::Cryptography::Certificates::Certificate const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) HashAlgorithmName() const;
        WINRT_IMPL_AUTO(void) HashAlgorithmName(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Security::Cryptography::Certificates::CmsTimestampInfo) TimestampInfo() const;
    };
    template <> struct consume<Windows::Security::Cryptography::Certificates::ICmsSignerInfo>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Certificates_ICmsSignerInfo<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Certificates_ICmsTimestampInfo
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Security::Cryptography::Certificates::Certificate) SigningCertificate() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate>) Certificates() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::DateTime) Timestamp() const;
    };
    template <> struct consume<Windows::Security::Cryptography::Certificates::ICmsTimestampInfo>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Certificates_ICmsTimestampInfo<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Certificates_IKeyAlgorithmNamesStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Rsa() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Dsa() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Ecdh256() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Ecdh384() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Ecdh521() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Ecdsa256() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Ecdsa384() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Ecdsa521() const;
    };
    template <> struct consume<Windows::Security::Cryptography::Certificates::IKeyAlgorithmNamesStatics>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Certificates_IKeyAlgorithmNamesStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Certificates_IKeyAlgorithmNamesStatics2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Ecdsa() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Ecdh() const;
    };
    template <> struct consume<Windows::Security::Cryptography::Certificates::IKeyAlgorithmNamesStatics2>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Certificates_IKeyAlgorithmNamesStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Certificates_IKeyAttestationHelperStatics
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<hstring>) DecryptTpmAttestationCredentialAsync(param::hstring const& credential) const;
        WINRT_IMPL_AUTO(hstring) GetTpmAttestationCredentialId(param::hstring const& credential) const;
    };
    template <> struct consume<Windows::Security::Cryptography::Certificates::IKeyAttestationHelperStatics>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Certificates_IKeyAttestationHelperStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Certificates_IKeyAttestationHelperStatics2
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<hstring>) DecryptTpmAttestationCredentialAsync(param::hstring const& credential, param::hstring const& containerName) const;
    };
    template <> struct consume<Windows::Security::Cryptography::Certificates::IKeyAttestationHelperStatics2>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Certificates_IKeyAttestationHelperStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Certificates_IKeyStorageProviderNamesStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) SoftwareKeyStorageProvider() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) SmartcardKeyStorageProvider() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) PlatformKeyStorageProvider() const;
    };
    template <> struct consume<Windows::Security::Cryptography::Certificates::IKeyStorageProviderNamesStatics>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Certificates_IKeyStorageProviderNamesStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Certificates_IKeyStorageProviderNamesStatics2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) PassportKeyStorageProvider() const;
    };
    template <> struct consume<Windows::Security::Cryptography::Certificates::IKeyStorageProviderNamesStatics2>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Certificates_IKeyStorageProviderNamesStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Certificates_IPfxImportParameters
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Security::Cryptography::Certificates::ExportOption) Exportable() const;
        WINRT_IMPL_AUTO(void) Exportable(Windows::Security::Cryptography::Certificates::ExportOption const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Security::Cryptography::Certificates::KeyProtectionLevel) KeyProtectionLevel() const;
        WINRT_IMPL_AUTO(void) KeyProtectionLevel(Windows::Security::Cryptography::Certificates::KeyProtectionLevel const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Security::Cryptography::Certificates::InstallOptions) InstallOptions() const;
        WINRT_IMPL_AUTO(void) InstallOptions(Windows::Security::Cryptography::Certificates::InstallOptions const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) FriendlyName() const;
        WINRT_IMPL_AUTO(void) FriendlyName(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) KeyStorageProviderName() const;
        WINRT_IMPL_AUTO(void) KeyStorageProviderName(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) ContainerNamePrefix() const;
        WINRT_IMPL_AUTO(void) ContainerNamePrefix(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) ReaderName() const;
        WINRT_IMPL_AUTO(void) ReaderName(param::hstring const& value) const;
    };
    template <> struct consume<Windows::Security::Cryptography::Certificates::IPfxImportParameters>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Certificates_IPfxImportParameters<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Certificates_IStandardCertificateStoreNamesStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Personal() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) TrustedRootCertificationAuthorities() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) IntermediateCertificationAuthorities() const;
    };
    template <> struct consume<Windows::Security::Cryptography::Certificates::IStandardCertificateStoreNamesStatics>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Certificates_IStandardCertificateStoreNamesStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Certificates_ISubjectAlternativeNameInfo
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<hstring>) EmailName() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<hstring>) IPAddress() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<hstring>) Url() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<hstring>) DnsName() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<hstring>) DistinguishedName() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<hstring>) PrincipalName() const;
    };
    template <> struct consume<Windows::Security::Cryptography::Certificates::ISubjectAlternativeNameInfo>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Certificates_ISubjectAlternativeNameInfo<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Certificates_ISubjectAlternativeNameInfo2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<hstring>) EmailNames() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<hstring>) IPAddresses() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<hstring>) Urls() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<hstring>) DnsNames() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<hstring>) DistinguishedNames() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<hstring>) PrincipalNames() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Security::Cryptography::Certificates::CertificateExtension) Extension() const;
    };
    template <> struct consume<Windows::Security::Cryptography::Certificates::ISubjectAlternativeNameInfo2>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Certificates_ISubjectAlternativeNameInfo2<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Certificates_IUserCertificateEnrollmentManager
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<hstring>) CreateRequestAsync(Windows::Security::Cryptography::Certificates::CertificateRequestProperties const& request) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) InstallCertificateAsync(param::hstring const& certificate, Windows::Security::Cryptography::Certificates::InstallOptions const& installOption) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) ImportPfxDataAsync(param::hstring const& pfxData, param::hstring const& password, Windows::Security::Cryptography::Certificates::ExportOption const& exportable, Windows::Security::Cryptography::Certificates::KeyProtectionLevel const& keyProtectionLevel, Windows::Security::Cryptography::Certificates::InstallOptions const& installOption, param::hstring const& friendlyName) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) ImportPfxDataAsync(param::hstring const& pfxData, param::hstring const& password, Windows::Security::Cryptography::Certificates::ExportOption const& exportable, Windows::Security::Cryptography::Certificates::KeyProtectionLevel const& keyProtectionLevel, Windows::Security::Cryptography::Certificates::InstallOptions const& installOption, param::hstring const& friendlyName, param::hstring const& keyStorageProvider) const;
    };
    template <> struct consume<Windows::Security::Cryptography::Certificates::IUserCertificateEnrollmentManager>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Certificates_IUserCertificateEnrollmentManager<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Certificates_IUserCertificateEnrollmentManager2
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) ImportPfxDataAsync(param::hstring const& pfxData, param::hstring const& password, Windows::Security::Cryptography::Certificates::PfxImportParameters const& pfxImportParameters) const;
    };
    template <> struct consume<Windows::Security::Cryptography::Certificates::IUserCertificateEnrollmentManager2>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Certificates_IUserCertificateEnrollmentManager2<D>;
    };
    template <typename D>
    struct consume_Windows_Security_Cryptography_Certificates_IUserCertificateStore
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<bool>) RequestAddAsync(Windows::Security::Cryptography::Certificates::Certificate const& certificate) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<bool>) RequestDeleteAsync(Windows::Security::Cryptography::Certificates::Certificate const& certificate) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Name() const;
    };
    template <> struct consume<Windows::Security::Cryptography::Certificates::IUserCertificateStore>
    {
        template <typename D> using type = consume_Windows_Security_Cryptography_Certificates_IUserCertificateStore<D>;
    };
}
#endif
