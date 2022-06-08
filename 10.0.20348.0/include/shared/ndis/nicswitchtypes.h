// Copyright (C) Microsoft Corporation. All rights reserved.

#pragma once

#pragma region App, Games, or System family
#include <winapifamily.h>
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

#include <ndis/version.h>

EXTERN_C_START

typedef ULONG NDIS_NIC_SWITCH_ID, *PNDIS_NIC_SWITCH_ID;

#if NDIS_SUPPORT_NDIS630
typedef ULONG NDIS_NIC_SWITCH_VPORT_ID, *PNDIS_NIC_SWITCH_VPORT_ID;
#endif // NDIS_SUPPORT_NDIS630

EXTERN_C_END

#endif // WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
#pragma endregion

