/*++

Copyright (c) Microsoft Corporation. All rights reserved.

Module Name:

    ntenclv.h

Abstract:

    This module defines the types and contants used by the Windows kernel to
    support software enclave APIs, and which are exposed through the software
    enclave APIs.

--*/

#ifndef _NTENCLV_
#define _NTENCLV_

#ifdef __cplusplus
extern "C" {
#endif

typedef enum ENCLAVE_SEALING_IDENTITY_POLICY {
    ENCLAVE_IDENTITY_POLICY_SEAL_INVALID = 0,
    ENCLAVE_IDENTITY_POLICY_SEAL_EXACT_CODE,
    ENCLAVE_IDENTITY_POLICY_SEAL_SAME_PRIMARY_CODE,
    ENCLAVE_IDENTITY_POLICY_SEAL_SAME_IMAGE,
    ENCLAVE_IDENTITY_POLICY_SEAL_SAME_FAMILY,
    ENCLAVE_IDENTITY_POLICY_SEAL_SAME_AUTHOR,
} ENCLAVE_SEALING_IDENTITY_POLICY;

#define ENCLAVE_RUNTIME_POLICY_ALLOW_FULL_DEBUG  1
#define ENCLAVE_RUNTIME_POLICY_ALLOW_DYNAMIC_DEBUG  2

#define ENCLAVE_UNSEAL_FLAG_STALE_KEY 1

#pragma warning(push)
#pragma warning(disable:4214) // bitfield types other than int

#pragma pack(push)
#pragma pack(1)

typedef struct ENCLAVE_IDENTITY {
    UINT8 OwnerId[IMAGE_ENCLAVE_LONG_ID_LENGTH];
    UINT8 UniqueId[IMAGE_ENCLAVE_LONG_ID_LENGTH];
    UINT8 AuthorId[IMAGE_ENCLAVE_LONG_ID_LENGTH];
    UINT8 FamilyId[IMAGE_ENCLAVE_SHORT_ID_LENGTH];
    UINT8 ImageId[IMAGE_ENCLAVE_SHORT_ID_LENGTH];
    UINT32 EnclaveSvn;
    UINT32 SecureKernelSvn;
    UINT32 PlatformSvn;
    UINT32 Flags;
    UINT32 SigningLevel;
    UINT32 EnclaveType;
} ENCLAVE_IDENTITY;

#define ENCLAVE_FLAG_FULL_DEBUG_ENABLED         0x00000001
#define ENCLAVE_FLAG_DYNAMIC_DEBUG_ENABLED      0x00000002
#define ENCLAVE_FLAG_DYNAMIC_DEBUG_ACTIVE       0x00000004

#define VBS_ENCLAVE_REPORT_PKG_HEADER_VERSION_CURRENT (1)

#define VBS_ENCLAVE_REPORT_SIGNATURE_SCHEME_SHA256_RSA_PSS_SHA256 (1)

typedef struct VBS_ENCLAVE_REPORT_PKG_HEADER {
    UINT32 PackageSize;
    UINT32 Version;
    UINT32 SignatureScheme;
    UINT32 SignedStatementSize;
    UINT32 SignatureSize;
    UINT32 Reserved;
} VBS_ENCLAVE_REPORT_PKG_HEADER;

#define VBS_ENCLAVE_REPORT_VERSION_CURRENT (1)

#define ENCLAVE_REPORT_DATA_LENGTH      64

typedef struct VBS_ENCLAVE_REPORT {
    UINT32 ReportSize;
    UINT32 ReportVersion;
    UINT8 EnclaveData[ENCLAVE_REPORT_DATA_LENGTH];
    ENCLAVE_IDENTITY EnclaveIdentity;    
} VBS_ENCLAVE_REPORT;

typedef struct VBS_ENCLAVE_REPORT_VARDATA_HEADER {
    UINT32 DataType;
    UINT32 Size;
} VBS_ENCLAVE_REPORT_VARDATA_HEADER;

#define VBS_ENCLAVE_VARDATA_INVALID     0x00000000
#define VBS_ENCLAVE_VARDATA_MODULE      0x00000001

typedef struct VBS_ENCLAVE_REPORT_MODULE {
    VBS_ENCLAVE_REPORT_VARDATA_HEADER Header;
    UINT8 UniqueId[IMAGE_ENCLAVE_LONG_ID_LENGTH];
    UINT8 AuthorId[IMAGE_ENCLAVE_LONG_ID_LENGTH];
    UINT8 FamilyId[IMAGE_ENCLAVE_SHORT_ID_LENGTH];
    UINT8 ImageId[IMAGE_ENCLAVE_SHORT_ID_LENGTH];
    UINT32 Svn;
    WCHAR ModuleName[ANYSIZE_ARRAY];
} VBS_ENCLAVE_REPORT_MODULE;

#pragma pack(pop)
#pragma warning(pop)

typedef struct ENCLAVE_INFORMATION {
    ULONG EnclaveType;
    ULONG Reserved;
    PVOID BaseAddress;
    SIZE_T Size;
    ENCLAVE_IDENTITY Identity;
} ENCLAVE_INFORMATION;

typedef struct _VBS_BASIC_ENCLAVE_THREAD_DESCRIPTOR32 {
    ULONG ThreadContext[4];
    ULONG EntryPoint;
    ULONG StackPointer;
    ULONG ExceptionEntryPoint;
    ULONG ExceptionStack;
    ULONG ExceptionActive;
} VBS_BASIC_ENCLAVE_THREAD_DESCRIPTOR32, *PVBS_BASIC_ENCLAVE_THREAD_DESCRIPTOR32;

typedef struct _VBS_BASIC_ENCLAVE_THREAD_DESCRIPTOR64 {
    ULONGLONG ThreadContext[4];
    ULONGLONG EntryPoint;
    ULONGLONG StackPointer;
    ULONGLONG ExceptionEntryPoint;
    ULONGLONG ExceptionStack;
    ULONG ExceptionActive;
} VBS_BASIC_ENCLAVE_THREAD_DESCRIPTOR64, *PVBS_BASIC_ENCLAVE_THREAD_DESCRIPTOR64;

#ifdef _WIN64
typedef VBS_BASIC_ENCLAVE_THREAD_DESCRIPTOR64 VBS_BASIC_ENCLAVE_THREAD_DESCRIPTOR;
typedef PVBS_BASIC_ENCLAVE_THREAD_DESCRIPTOR64 PVBS_BASIC_ENCLAVE_THREAD_DESCRIPTOR;
#else
typedef VBS_BASIC_ENCLAVE_THREAD_DESCRIPTOR32 VBS_BASIC_ENCLAVE_THREAD_DESCRIPTOR;
typedef PVBS_BASIC_ENCLAVE_THREAD_DESCRIPTOR32 PVBS_BASIC_ENCLAVE_THREAD_DESCRIPTOR;
#endif

typedef struct _VBS_BASIC_ENCLAVE_EXCEPTION_AMD64 {
    ULONG ExceptionCode;
    ULONG NumberParameters;
    ULONG_PTR ExceptionInformation[3];

    ULONG_PTR ExceptionRAX;
    ULONG_PTR ExceptionRCX;
    ULONG_PTR ExceptionRIP;
    ULONG_PTR ExceptionRFLAGS;
    ULONG_PTR ExceptionRSP;
} VBS_BASIC_ENCLAVE_EXCEPTION_AMD64, *PVBS_BASIC_ENCLAVE_EXCEPTION_AMD64;

#if defined(_AMD64_)
typedef VBS_BASIC_ENCLAVE_EXCEPTION_AMD64 VBS_BASIC_ENCLAVE_EXCEPTION;
typedef PVBS_BASIC_ENCLAVE_EXCEPTION_AMD64 PVBS_BASIC_ENCLAVE_EXCEPTION;
#else
typedef VOID VBS_BASIC_ENCLAVE_EXCEPTION;
typedef PVOID PVBS_BASIC_ENCLAVE_EXCEPTION;
#endif

typedef
VOID
VBS_BASIC_ENCLAVE_BASIC_CALL_RETURN_FROM_ENCLAVE (
    _In_ ULONG_PTR ReturnValue
    );

typedef
LONG
VBS_BASIC_ENCLAVE_BASIC_CALL_RETURN_FROM_EXCEPTION (
    _In_ PVBS_BASIC_ENCLAVE_EXCEPTION ExceptionRecord
    );

typedef
LONG
VBS_BASIC_ENCLAVE_BASIC_CALL_TERMINATE_THREAD (
    _In_ PVBS_BASIC_ENCLAVE_THREAD_DESCRIPTOR ThreadDescriptor
    );

typedef
LONG
VBS_BASIC_ENCLAVE_BASIC_CALL_INTERRUPT_THREAD (
    _In_ PVBS_BASIC_ENCLAVE_THREAD_DESCRIPTOR ThreadDescriptor
    );

typedef
LONG
VBS_BASIC_ENCLAVE_BASIC_CALL_COMMIT_PAGES (
    _In_ PVOID EnclaveAddress,
    _In_ SIZE_T NumberOfBytes,
    _In_opt_ PVOID SourceAddress,
    _In_ ULONG PageProtection
    );

typedef
LONG
VBS_BASIC_ENCLAVE_BASIC_CALL_DECOMMIT_PAGES (
    _In_ PVOID EnclaveAddress,
    _In_ SIZE_T NumberOfBytes
    );

typedef
LONG
VBS_BASIC_ENCLAVE_BASIC_CALL_PROTECT_PAGES (
    _In_ PVOID EnclaveAddress,
    _In_ SIZE_T NumberOfytes,
    _In_ ULONG PageProtection
    );

typedef
LONG
VBS_BASIC_ENCLAVE_BASIC_CALL_CREATE_THREAD (
    _In_ PVBS_BASIC_ENCLAVE_THREAD_DESCRIPTOR ThreadDescriptor
    );

typedef
LONG
VBS_BASIC_ENCLAVE_BASIC_CALL_GET_ENCLAVE_INFORMATION (
    _Out_ ENCLAVE_INFORMATION *EnclaveInfo
    );

typedef struct _ENCLAVE_VBS_BASIC_KEY_REQUEST {
    ULONG RequestSize;
    ULONG Flags;
    ULONG EnclaveSVN;
    ULONG SystemKeyID;
    ULONG CurrentSystemKeyID;
} ENCLAVE_VBS_BASIC_KEY_REQUEST, *PENCLAVE_VBS_BASIC_KEY_REQUEST;

#define ENCLAVE_VBS_BASIC_KEY_FLAG_MEASUREMENT      0x00000001
#define ENCLAVE_VBS_BASIC_KEY_FLAG_FAMILY_ID        0x00000002
#define ENCLAVE_VBS_BASIC_KEY_FLAG_IMAGE_ID         0x00000004
#define ENCLAVE_VBS_BASIC_KEY_FLAG_DEBUG_KEY        0x00000008

typedef
LONG
VBS_BASIC_ENCLAVE_BASIC_CALL_GENERATE_KEY (
    _Inout_ PENCLAVE_VBS_BASIC_KEY_REQUEST KeyRequest,
    _In_ ULONG RequestedKeySize,
    _Out_writes_(RequestedKeySize) PUCHAR ReturnedKey
    );
    
typedef
LONG
VBS_BASIC_ENCLAVE_BASIC_CALL_GENERATE_REPORT (
    _In_opt_ const UINT8 EnclaveData[ENCLAVE_REPORT_DATA_LENGTH],
    _Out_writes_bytes_to_opt_(BufferSize, *OutputSize) PVOID Report,
    _In_ UINT32 BufferSize,
    _Out_ UINT32 *OutputSize
    );

typedef
LONG
VBS_BASIC_ENCLAVE_BASIC_CALL_VERIFY_REPORT (
    _In_reads_bytes_(ReportSize) const VOID *Report,
    _In_ UINT32 ReportSize
    );

typedef
LONG
VBS_BASIC_ENCLAVE_BASIC_CALL_GENERATE_RANDOM_DATA (
    _Out_writes_bytes_(NumberOfBytes) PUCHAR Buffer,
    _In_ ULONG NumberOfBytes,
    _Out_ PULONGLONG Generation
    );

typedef struct _VBS_BASIC_ENCLAVE_SYSCALL_PAGE {
    VBS_BASIC_ENCLAVE_BASIC_CALL_RETURN_FROM_ENCLAVE *ReturnFromEnclave;
    VBS_BASIC_ENCLAVE_BASIC_CALL_RETURN_FROM_EXCEPTION *ReturnFromException;
    VBS_BASIC_ENCLAVE_BASIC_CALL_TERMINATE_THREAD *TerminateThread;
    VBS_BASIC_ENCLAVE_BASIC_CALL_INTERRUPT_THREAD *InterruptThread;
    VBS_BASIC_ENCLAVE_BASIC_CALL_COMMIT_PAGES *CommitPages;
    VBS_BASIC_ENCLAVE_BASIC_CALL_DECOMMIT_PAGES *DecommitPages;
    VBS_BASIC_ENCLAVE_BASIC_CALL_PROTECT_PAGES *ProtectPages;
    VBS_BASIC_ENCLAVE_BASIC_CALL_CREATE_THREAD *CreateThread;
    VBS_BASIC_ENCLAVE_BASIC_CALL_GET_ENCLAVE_INFORMATION *GetEnclaveInformation;
    VBS_BASIC_ENCLAVE_BASIC_CALL_GENERATE_KEY *GenerateKey;
    VBS_BASIC_ENCLAVE_BASIC_CALL_GENERATE_REPORT *GenerateReport;
    VBS_BASIC_ENCLAVE_BASIC_CALL_VERIFY_REPORT *VerifyReport;
    VBS_BASIC_ENCLAVE_BASIC_CALL_GENERATE_RANDOM_DATA *GenerateRandomData;
} VBS_BASIC_ENCLAVE_SYSCALL_PAGE, *PVBS_BASIC_ENCLAVE_SYSCALL_PAGE;

#ifdef __cplusplus
}
#endif

#endif /* _NTENCLV_ */
