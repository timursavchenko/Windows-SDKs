// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Devices_AllJoyn_H
#define WINRT_Windows_Devices_AllJoyn_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.190620.2"), "Mismatched C++/WinRT headers.");
#include "winrt/Windows.Devices.h"
#include "winrt/impl/Windows.Devices.Enumeration.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Globalization.2.h"
#include "winrt/impl/Windows.Networking.Sockets.2.h"
#include "winrt/impl/Windows.Security.Credentials.2.h"
#include "winrt/impl/Windows.Security.Cryptography.Certificates.2.h"
#include "winrt/impl/Windows.Devices.AllJoyn.2.h"
namespace winrt::impl
{
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynAboutData<D>::IsEnabled() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynAboutData)->get_IsEnabled(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynAboutData<D>::IsEnabled(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynAboutData)->put_IsEnabled(value));
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynAboutData<D>::DefaultAppName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynAboutData)->get_DefaultAppName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynAboutData<D>::DefaultAppName(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynAboutData)->put_DefaultAppName(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynAboutData<D>::AppNames() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynAboutData)->get_AppNames(&value));
        return Windows::Foundation::Collections::IMap<hstring, hstring>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynAboutData<D>::DateOfManufacture() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynAboutData)->get_DateOfManufacture(&value));
        return Windows::Foundation::IReference<Windows::Foundation::DateTime>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynAboutData<D>::DateOfManufacture(Windows::Foundation::IReference<Windows::Foundation::DateTime> const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynAboutData)->put_DateOfManufacture(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynAboutData<D>::DefaultDescription() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynAboutData)->get_DefaultDescription(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynAboutData<D>::DefaultDescription(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynAboutData)->put_DefaultDescription(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynAboutData<D>::Descriptions() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynAboutData)->get_Descriptions(&value));
        return Windows::Foundation::Collections::IMap<hstring, hstring>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynAboutData<D>::DefaultManufacturer() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynAboutData)->get_DefaultManufacturer(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynAboutData<D>::DefaultManufacturer(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynAboutData)->put_DefaultManufacturer(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynAboutData<D>::Manufacturers() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynAboutData)->get_Manufacturers(&value));
        return Windows::Foundation::Collections::IMap<hstring, hstring>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynAboutData<D>::ModelNumber() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynAboutData)->get_ModelNumber(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynAboutData<D>::ModelNumber(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynAboutData)->put_ModelNumber(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynAboutData<D>::SoftwareVersion() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynAboutData)->get_SoftwareVersion(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynAboutData<D>::SoftwareVersion(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynAboutData)->put_SoftwareVersion(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynAboutData<D>::SupportUrl() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynAboutData)->get_SupportUrl(&value));
        return Windows::Foundation::Uri{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynAboutData<D>::SupportUrl(Windows::Foundation::Uri const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynAboutData)->put_SupportUrl(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynAboutData<D>::AppId() const
    {
        winrt::guid value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynAboutData)->get_AppId(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynAboutData<D>::AppId(winrt::guid const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynAboutData)->put_AppId(impl::bind_in(value)));
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynAboutDataView<D>::Status() const
    {
        int32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynAboutDataView)->get_Status(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynAboutDataView<D>::Properties() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynAboutDataView)->get_Properties(&value));
        return Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynAboutDataView<D>::AJSoftwareVersion() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynAboutDataView)->get_AJSoftwareVersion(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynAboutDataView<D>::AppId() const
    {
        winrt::guid value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynAboutDataView)->get_AppId(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynAboutDataView<D>::DateOfManufacture() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynAboutDataView)->get_DateOfManufacture(&value));
        return Windows::Foundation::IReference<Windows::Foundation::DateTime>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynAboutDataView<D>::DefaultLanguage() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynAboutDataView)->get_DefaultLanguage(&value));
        return Windows::Globalization::Language{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynAboutDataView<D>::DeviceId() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynAboutDataView)->get_DeviceId(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynAboutDataView<D>::HardwareVersion() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynAboutDataView)->get_HardwareVersion(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynAboutDataView<D>::ModelNumber() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynAboutDataView)->get_ModelNumber(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynAboutDataView<D>::SoftwareVersion() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynAboutDataView)->get_SoftwareVersion(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynAboutDataView<D>::SupportedLanguages() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynAboutDataView)->get_SupportedLanguages(&value));
        return Windows::Foundation::Collections::IVectorView<Windows::Globalization::Language>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynAboutDataView<D>::SupportUrl() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynAboutDataView)->get_SupportUrl(&value));
        return Windows::Foundation::Uri{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynAboutDataView<D>::AppName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynAboutDataView)->get_AppName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynAboutDataView<D>::Description() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynAboutDataView)->get_Description(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynAboutDataView<D>::DeviceName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynAboutDataView)->get_DeviceName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynAboutDataView<D>::Manufacturer() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynAboutDataView)->get_Manufacturer(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynAboutDataViewStatics<D>::GetDataBySessionPortAsync(param::hstring const& uniqueName, Windows::Devices::AllJoyn::AllJoynBusAttachment const& busAttachment, uint16_t sessionPort) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynAboutDataViewStatics)->GetDataBySessionPortAsync(*(void**)(&uniqueName), *(void**)(&busAttachment), sessionPort, &operation));
        return Windows::Foundation::IAsyncOperation<Windows::Devices::AllJoyn::AllJoynAboutDataView>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynAboutDataViewStatics<D>::GetDataBySessionPortAsync(param::hstring const& uniqueName, Windows::Devices::AllJoyn::AllJoynBusAttachment const& busAttachment, uint16_t sessionPort, Windows::Globalization::Language const& language) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynAboutDataViewStatics)->GetDataBySessionPortWithLanguageAsync(*(void**)(&uniqueName), *(void**)(&busAttachment), sessionPort, *(void**)(&language), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::Devices::AllJoyn::AllJoynAboutDataView>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynAcceptSessionJoiner<D>::Accept() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoiner)->Accept());
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynAcceptSessionJoinerEventArgs<D>::UniqueName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoinerEventArgs)->get_UniqueName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynAcceptSessionJoinerEventArgs<D>::SessionPort() const
    {
        uint16_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoinerEventArgs)->get_SessionPort(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynAcceptSessionJoinerEventArgs<D>::TrafficType() const
    {
        Windows::Devices::AllJoyn::AllJoynTrafficType value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoinerEventArgs)->get_TrafficType(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynAcceptSessionJoinerEventArgs<D>::SamePhysicalNode() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoinerEventArgs)->get_SamePhysicalNode(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynAcceptSessionJoinerEventArgs<D>::SameNetwork() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoinerEventArgs)->get_SameNetwork(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynAcceptSessionJoinerEventArgs<D>::Accept() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoinerEventArgs)->Accept());
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynAcceptSessionJoinerEventArgsFactory<D>::Create(param::hstring const& uniqueName, uint16_t sessionPort, Windows::Devices::AllJoyn::AllJoynTrafficType const& trafficType, uint8_t proximity, Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoiner const& acceptSessionJoiner) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoinerEventArgsFactory)->Create(*(void**)(&uniqueName), sessionPort, static_cast<int32_t>(trafficType), proximity, *(void**)(&acceptSessionJoiner), &result));
        return Windows::Devices::AllJoyn::AllJoynAcceptSessionJoinerEventArgs{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynAuthenticationCompleteEventArgs<D>::AuthenticationMechanism() const
    {
        Windows::Devices::AllJoyn::AllJoynAuthenticationMechanism value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynAuthenticationCompleteEventArgs)->get_AuthenticationMechanism(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynAuthenticationCompleteEventArgs<D>::PeerUniqueName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynAuthenticationCompleteEventArgs)->get_PeerUniqueName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynAuthenticationCompleteEventArgs<D>::Succeeded() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynAuthenticationCompleteEventArgs)->get_Succeeded(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynBusAttachment<D>::AboutData() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynBusAttachment)->get_AboutData(&value));
        return Windows::Devices::AllJoyn::AllJoynAboutData{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynBusAttachment<D>::ConnectionSpecification() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynBusAttachment)->get_ConnectionSpecification(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynBusAttachment<D>::State() const
    {
        Windows::Devices::AllJoyn::AllJoynBusAttachmentState value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynBusAttachment)->get_State(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynBusAttachment<D>::UniqueName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynBusAttachment)->get_UniqueName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynBusAttachment<D>::PingAsync(param::hstring const& uniqueName) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynBusAttachment)->PingAsync(*(void**)(&uniqueName), &operation));
        return Windows::Foundation::IAsyncOperation<int32_t>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynBusAttachment<D>::Connect() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynBusAttachment)->Connect());
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynBusAttachment<D>::Disconnect() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynBusAttachment)->Disconnect());
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynBusAttachment<D>::StateChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynBusAttachment, Windows::Devices::AllJoyn::AllJoynBusAttachmentStateChangedEventArgs> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynBusAttachment)->add_StateChanged(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Devices_AllJoyn_IAllJoynBusAttachment<D>::StateChanged_revoker consume_Windows_Devices_AllJoyn_IAllJoynBusAttachment<D>::StateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynBusAttachment, Windows::Devices::AllJoyn::AllJoynBusAttachmentStateChangedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, StateChanged_revoker>(this, StateChanged(handler));
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynBusAttachment<D>::StateChanged(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynBusAttachment)->remove_StateChanged(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynBusAttachment<D>::AuthenticationMechanisms() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynBusAttachment)->get_AuthenticationMechanisms(&value));
        return Windows::Foundation::Collections::IVector<Windows::Devices::AllJoyn::AllJoynAuthenticationMechanism>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynBusAttachment<D>::CredentialsRequested(Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynBusAttachment, Windows::Devices::AllJoyn::AllJoynCredentialsRequestedEventArgs> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynBusAttachment)->add_CredentialsRequested(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Devices_AllJoyn_IAllJoynBusAttachment<D>::CredentialsRequested_revoker consume_Windows_Devices_AllJoyn_IAllJoynBusAttachment<D>::CredentialsRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynBusAttachment, Windows::Devices::AllJoyn::AllJoynCredentialsRequestedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, CredentialsRequested_revoker>(this, CredentialsRequested(handler));
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynBusAttachment<D>::CredentialsRequested(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynBusAttachment)->remove_CredentialsRequested(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynBusAttachment<D>::CredentialsVerificationRequested(Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynBusAttachment, Windows::Devices::AllJoyn::AllJoynCredentialsVerificationRequestedEventArgs> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynBusAttachment)->add_CredentialsVerificationRequested(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Devices_AllJoyn_IAllJoynBusAttachment<D>::CredentialsVerificationRequested_revoker consume_Windows_Devices_AllJoyn_IAllJoynBusAttachment<D>::CredentialsVerificationRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynBusAttachment, Windows::Devices::AllJoyn::AllJoynCredentialsVerificationRequestedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, CredentialsVerificationRequested_revoker>(this, CredentialsVerificationRequested(handler));
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynBusAttachment<D>::CredentialsVerificationRequested(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynBusAttachment)->remove_CredentialsVerificationRequested(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynBusAttachment<D>::AuthenticationComplete(Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynBusAttachment, Windows::Devices::AllJoyn::AllJoynAuthenticationCompleteEventArgs> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynBusAttachment)->add_AuthenticationComplete(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Devices_AllJoyn_IAllJoynBusAttachment<D>::AuthenticationComplete_revoker consume_Windows_Devices_AllJoyn_IAllJoynBusAttachment<D>::AuthenticationComplete(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynBusAttachment, Windows::Devices::AllJoyn::AllJoynAuthenticationCompleteEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, AuthenticationComplete_revoker>(this, AuthenticationComplete(handler));
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynBusAttachment<D>::AuthenticationComplete(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynBusAttachment)->remove_AuthenticationComplete(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynBusAttachment2<D>::GetAboutDataAsync(Windows::Devices::AllJoyn::AllJoynServiceInfo const& serviceInfo) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynBusAttachment2)->GetAboutDataAsync(*(void**)(&serviceInfo), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::Devices::AllJoyn::AllJoynAboutDataView>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynBusAttachment2<D>::GetAboutDataAsync(Windows::Devices::AllJoyn::AllJoynServiceInfo const& serviceInfo, Windows::Globalization::Language const& language) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynBusAttachment2)->GetAboutDataWithLanguageAsync(*(void**)(&serviceInfo), *(void**)(&language), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::Devices::AllJoyn::AllJoynAboutDataView>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynBusAttachment2<D>::AcceptSessionJoinerRequested(Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynBusAttachment, Windows::Devices::AllJoyn::AllJoynAcceptSessionJoinerEventArgs> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynBusAttachment2)->add_AcceptSessionJoinerRequested(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Devices_AllJoyn_IAllJoynBusAttachment2<D>::AcceptSessionJoinerRequested_revoker consume_Windows_Devices_AllJoyn_IAllJoynBusAttachment2<D>::AcceptSessionJoinerRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynBusAttachment, Windows::Devices::AllJoyn::AllJoynAcceptSessionJoinerEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, AcceptSessionJoinerRequested_revoker>(this, AcceptSessionJoinerRequested(handler));
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynBusAttachment2<D>::AcceptSessionJoinerRequested(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynBusAttachment2)->remove_AcceptSessionJoinerRequested(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynBusAttachment2<D>::SessionJoined(Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynBusAttachment, Windows::Devices::AllJoyn::AllJoynSessionJoinedEventArgs> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynBusAttachment2)->add_SessionJoined(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Devices_AllJoyn_IAllJoynBusAttachment2<D>::SessionJoined_revoker consume_Windows_Devices_AllJoyn_IAllJoynBusAttachment2<D>::SessionJoined(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynBusAttachment, Windows::Devices::AllJoyn::AllJoynSessionJoinedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, SessionJoined_revoker>(this, SessionJoined(handler));
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynBusAttachment2<D>::SessionJoined(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynBusAttachment2)->remove_SessionJoined(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynBusAttachmentFactory<D>::Create(param::hstring const& connectionSpecification) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynBusAttachmentFactory)->Create(*(void**)(&connectionSpecification), &result));
        return Windows::Devices::AllJoyn::AllJoynBusAttachment{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynBusAttachmentStateChangedEventArgs<D>::State() const
    {
        Windows::Devices::AllJoyn::AllJoynBusAttachmentState value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynBusAttachmentStateChangedEventArgs)->get_State(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynBusAttachmentStateChangedEventArgs<D>::Status() const
    {
        int32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynBusAttachmentStateChangedEventArgs)->get_Status(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynBusAttachmentStatics<D>::GetDefault() const
    {
        void* defaultBusAttachment{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynBusAttachmentStatics)->GetDefault(&defaultBusAttachment));
        return Windows::Devices::AllJoyn::AllJoynBusAttachment{ defaultBusAttachment, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynBusAttachmentStatics<D>::GetWatcher(param::iterable<hstring> const& requiredInterfaces) const
    {
        void* deviceWatcher{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynBusAttachmentStatics)->GetWatcher(*(void**)(&requiredInterfaces), &deviceWatcher));
        return Windows::Devices::Enumeration::DeviceWatcher{ deviceWatcher, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynBusObject<D>::Start() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynBusObject)->Start());
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynBusObject<D>::Stop() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynBusObject)->Stop());
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynBusObject<D>::AddProducer(Windows::Devices::AllJoyn::IAllJoynProducer const& producer) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynBusObject)->AddProducer(*(void**)(&producer)));
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynBusObject<D>::BusAttachment() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynBusObject)->get_BusAttachment(&value));
        return Windows::Devices::AllJoyn::AllJoynBusAttachment{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynBusObject<D>::Session() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynBusObject)->get_Session(&value));
        return Windows::Devices::AllJoyn::AllJoynSession{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynBusObject<D>::Stopped(Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynBusObject, Windows::Devices::AllJoyn::AllJoynBusObjectStoppedEventArgs> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynBusObject)->add_Stopped(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Devices_AllJoyn_IAllJoynBusObject<D>::Stopped_revoker consume_Windows_Devices_AllJoyn_IAllJoynBusObject<D>::Stopped(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynBusObject, Windows::Devices::AllJoyn::AllJoynBusObjectStoppedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, Stopped_revoker>(this, Stopped(handler));
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynBusObject<D>::Stopped(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynBusObject)->remove_Stopped(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynBusObjectFactory<D>::Create(param::hstring const& objectPath) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynBusObjectFactory)->Create(*(void**)(&objectPath), &result));
        return Windows::Devices::AllJoyn::AllJoynBusObject{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynBusObjectFactory<D>::CreateWithBusAttachment(param::hstring const& objectPath, Windows::Devices::AllJoyn::AllJoynBusAttachment const& busAttachment) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynBusObjectFactory)->CreateWithBusAttachment(*(void**)(&objectPath), *(void**)(&busAttachment), &result));
        return Windows::Devices::AllJoyn::AllJoynBusObject{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynBusObjectStoppedEventArgs<D>::Status() const
    {
        int32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynBusObjectStoppedEventArgs)->get_Status(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynBusObjectStoppedEventArgsFactory<D>::Create(int32_t status) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynBusObjectStoppedEventArgsFactory)->Create(status, &result));
        return Windows::Devices::AllJoyn::AllJoynBusObjectStoppedEventArgs{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynCredentials<D>::AuthenticationMechanism() const
    {
        Windows::Devices::AllJoyn::AllJoynAuthenticationMechanism value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynCredentials)->get_AuthenticationMechanism(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynCredentials<D>::Certificate() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynCredentials)->get_Certificate(&value));
        return Windows::Security::Cryptography::Certificates::Certificate{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynCredentials<D>::Certificate(Windows::Security::Cryptography::Certificates::Certificate const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynCredentials)->put_Certificate(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynCredentials<D>::PasswordCredential() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynCredentials)->get_PasswordCredential(&value));
        return Windows::Security::Credentials::PasswordCredential{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynCredentials<D>::PasswordCredential(Windows::Security::Credentials::PasswordCredential const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynCredentials)->put_PasswordCredential(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynCredentials<D>::Timeout() const
    {
        Windows::Foundation::TimeSpan value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynCredentials)->get_Timeout(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynCredentials<D>::Timeout(Windows::Foundation::TimeSpan const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynCredentials)->put_Timeout(impl::bind_in(value)));
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynCredentialsRequestedEventArgs<D>::AttemptCount() const
    {
        uint16_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynCredentialsRequestedEventArgs)->get_AttemptCount(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynCredentialsRequestedEventArgs<D>::Credentials() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynCredentialsRequestedEventArgs)->get_Credentials(&value));
        return Windows::Devices::AllJoyn::AllJoynCredentials{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynCredentialsRequestedEventArgs<D>::PeerUniqueName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynCredentialsRequestedEventArgs)->get_PeerUniqueName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynCredentialsRequestedEventArgs<D>::RequestedUserName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynCredentialsRequestedEventArgs)->get_RequestedUserName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynCredentialsRequestedEventArgs<D>::GetDeferral() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynCredentialsRequestedEventArgs)->GetDeferral(&result));
        return Windows::Foundation::Deferral{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynCredentialsVerificationRequestedEventArgs<D>::AuthenticationMechanism() const
    {
        Windows::Devices::AllJoyn::AllJoynAuthenticationMechanism value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynCredentialsVerificationRequestedEventArgs)->get_AuthenticationMechanism(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynCredentialsVerificationRequestedEventArgs<D>::PeerUniqueName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynCredentialsVerificationRequestedEventArgs)->get_PeerUniqueName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynCredentialsVerificationRequestedEventArgs<D>::PeerCertificate() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynCredentialsVerificationRequestedEventArgs)->get_PeerCertificate(&value));
        return Windows::Security::Cryptography::Certificates::Certificate{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynCredentialsVerificationRequestedEventArgs<D>::PeerCertificateErrorSeverity() const
    {
        Windows::Networking::Sockets::SocketSslErrorSeverity value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynCredentialsVerificationRequestedEventArgs)->get_PeerCertificateErrorSeverity(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynCredentialsVerificationRequestedEventArgs<D>::PeerCertificateErrors() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynCredentialsVerificationRequestedEventArgs)->get_PeerCertificateErrors(&value));
        return Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::ChainValidationResult>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynCredentialsVerificationRequestedEventArgs<D>::PeerIntermediateCertificates() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynCredentialsVerificationRequestedEventArgs)->get_PeerIntermediateCertificates(&value));
        return Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynCredentialsVerificationRequestedEventArgs<D>::Accept() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynCredentialsVerificationRequestedEventArgs)->Accept());
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynCredentialsVerificationRequestedEventArgs<D>::GetDeferral() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynCredentialsVerificationRequestedEventArgs)->GetDeferral(&result));
        return Windows::Foundation::Deferral{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynMessageInfo<D>::SenderUniqueName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynMessageInfo)->get_SenderUniqueName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynMessageInfoFactory<D>::Create(param::hstring const& senderUniqueName) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynMessageInfoFactory)->Create(*(void**)(&senderUniqueName), &result));
        return Windows::Devices::AllJoyn::AllJoynMessageInfo{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynProducer<D>::SetBusObject(Windows::Devices::AllJoyn::AllJoynBusObject const& busObject) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynProducer)->SetBusObject(*(void**)(&busObject)));
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynProducerStoppedEventArgs<D>::Status() const
    {
        int32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynProducerStoppedEventArgs)->get_Status(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynProducerStoppedEventArgsFactory<D>::Create(int32_t status) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynProducerStoppedEventArgsFactory)->Create(status, &result));
        return Windows::Devices::AllJoyn::AllJoynProducerStoppedEventArgs{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynServiceInfo<D>::UniqueName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynServiceInfo)->get_UniqueName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynServiceInfo<D>::ObjectPath() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynServiceInfo)->get_ObjectPath(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynServiceInfo<D>::SessionPort() const
    {
        uint16_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynServiceInfo)->get_SessionPort(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynServiceInfoFactory<D>::Create(param::hstring const& uniqueName, param::hstring const& objectPath, uint16_t sessionPort) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynServiceInfoFactory)->Create(*(void**)(&uniqueName), *(void**)(&objectPath), sessionPort, &result));
        return Windows::Devices::AllJoyn::AllJoynServiceInfo{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynServiceInfoRemovedEventArgs<D>::UniqueName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynServiceInfoRemovedEventArgs)->get_UniqueName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynServiceInfoRemovedEventArgsFactory<D>::Create(param::hstring const& uniqueName) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynServiceInfoRemovedEventArgsFactory)->Create(*(void**)(&uniqueName), &result));
        return Windows::Devices::AllJoyn::AllJoynServiceInfoRemovedEventArgs{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynServiceInfoStatics<D>::FromIdAsync(param::hstring const& deviceId) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynServiceInfoStatics)->FromIdAsync(*(void**)(&deviceId), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::Devices::AllJoyn::AllJoynServiceInfo>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynSession<D>::Id() const
    {
        int32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynSession)->get_Id(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynSession<D>::Status() const
    {
        int32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynSession)->get_Status(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynSession<D>::RemoveMemberAsync(param::hstring const& uniqueName) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynSession)->RemoveMemberAsync(*(void**)(&uniqueName), &operation));
        return Windows::Foundation::IAsyncOperation<int32_t>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynSession<D>::MemberAdded(Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynSession, Windows::Devices::AllJoyn::AllJoynSessionMemberAddedEventArgs> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynSession)->add_MemberAdded(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Devices_AllJoyn_IAllJoynSession<D>::MemberAdded_revoker consume_Windows_Devices_AllJoyn_IAllJoynSession<D>::MemberAdded(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynSession, Windows::Devices::AllJoyn::AllJoynSessionMemberAddedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, MemberAdded_revoker>(this, MemberAdded(handler));
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynSession<D>::MemberAdded(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynSession)->remove_MemberAdded(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynSession<D>::MemberRemoved(Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynSession, Windows::Devices::AllJoyn::AllJoynSessionMemberRemovedEventArgs> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynSession)->add_MemberRemoved(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Devices_AllJoyn_IAllJoynSession<D>::MemberRemoved_revoker consume_Windows_Devices_AllJoyn_IAllJoynSession<D>::MemberRemoved(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynSession, Windows::Devices::AllJoyn::AllJoynSessionMemberRemovedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, MemberRemoved_revoker>(this, MemberRemoved(handler));
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynSession<D>::MemberRemoved(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynSession)->remove_MemberRemoved(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynSession<D>::Lost(Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynSession, Windows::Devices::AllJoyn::AllJoynSessionLostEventArgs> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynSession)->add_Lost(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Devices_AllJoyn_IAllJoynSession<D>::Lost_revoker consume_Windows_Devices_AllJoyn_IAllJoynSession<D>::Lost(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynSession, Windows::Devices::AllJoyn::AllJoynSessionLostEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, Lost_revoker>(this, Lost(handler));
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynSession<D>::Lost(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynSession)->remove_Lost(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynSessionJoinedEventArgs<D>::Session() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynSessionJoinedEventArgs)->get_Session(&value));
        return Windows::Devices::AllJoyn::AllJoynSession{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynSessionJoinedEventArgsFactory<D>::Create(Windows::Devices::AllJoyn::AllJoynSession const& session) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynSessionJoinedEventArgsFactory)->Create(*(void**)(&session), &result));
        return Windows::Devices::AllJoyn::AllJoynSessionJoinedEventArgs{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynSessionLostEventArgs<D>::Reason() const
    {
        Windows::Devices::AllJoyn::AllJoynSessionLostReason value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynSessionLostEventArgs)->get_Reason(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynSessionLostEventArgsFactory<D>::Create(Windows::Devices::AllJoyn::AllJoynSessionLostReason const& reason) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynSessionLostEventArgsFactory)->Create(static_cast<int32_t>(reason), &result));
        return Windows::Devices::AllJoyn::AllJoynSessionLostEventArgs{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynSessionMemberAddedEventArgs<D>::UniqueName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynSessionMemberAddedEventArgs)->get_UniqueName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynSessionMemberAddedEventArgsFactory<D>::Create(param::hstring const& uniqueName) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynSessionMemberAddedEventArgsFactory)->Create(*(void**)(&uniqueName), &result));
        return Windows::Devices::AllJoyn::AllJoynSessionMemberAddedEventArgs{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynSessionMemberRemovedEventArgs<D>::UniqueName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynSessionMemberRemovedEventArgs)->get_UniqueName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynSessionMemberRemovedEventArgsFactory<D>::Create(param::hstring const& uniqueName) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynSessionMemberRemovedEventArgsFactory)->Create(*(void**)(&uniqueName), &result));
        return Windows::Devices::AllJoyn::AllJoynSessionMemberRemovedEventArgs{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynSessionStatics<D>::GetFromServiceInfoAsync(Windows::Devices::AllJoyn::AllJoynServiceInfo const& serviceInfo) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynSessionStatics)->GetFromServiceInfoAsync(*(void**)(&serviceInfo), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::Devices::AllJoyn::AllJoynSession>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynSessionStatics<D>::GetFromServiceInfoAsync(Windows::Devices::AllJoyn::AllJoynServiceInfo const& serviceInfo, Windows::Devices::AllJoyn::AllJoynBusAttachment const& busAttachment) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynSessionStatics)->GetFromServiceInfoAndBusAttachmentAsync(*(void**)(&serviceInfo), *(void**)(&busAttachment), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::Devices::AllJoyn::AllJoynSession>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynStatusStatics<D>::Ok() const
    {
        int32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynStatusStatics)->get_Ok(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynStatusStatics<D>::Fail() const
    {
        int32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynStatusStatics)->get_Fail(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynStatusStatics<D>::OperationTimedOut() const
    {
        int32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynStatusStatics)->get_OperationTimedOut(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynStatusStatics<D>::OtherEndClosed() const
    {
        int32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynStatusStatics)->get_OtherEndClosed(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynStatusStatics<D>::ConnectionRefused() const
    {
        int32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynStatusStatics)->get_ConnectionRefused(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynStatusStatics<D>::AuthenticationFailed() const
    {
        int32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynStatusStatics)->get_AuthenticationFailed(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynStatusStatics<D>::AuthenticationRejectedByUser() const
    {
        int32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynStatusStatics)->get_AuthenticationRejectedByUser(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynStatusStatics<D>::SslConnectFailed() const
    {
        int32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynStatusStatics)->get_SslConnectFailed(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynStatusStatics<D>::SslIdentityVerificationFailed() const
    {
        int32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynStatusStatics)->get_SslIdentityVerificationFailed(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynStatusStatics<D>::InsufficientSecurity() const
    {
        int32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynStatusStatics)->get_InsufficientSecurity(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynStatusStatics<D>::InvalidArgument1() const
    {
        int32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynStatusStatics)->get_InvalidArgument1(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynStatusStatics<D>::InvalidArgument2() const
    {
        int32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynStatusStatics)->get_InvalidArgument2(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynStatusStatics<D>::InvalidArgument3() const
    {
        int32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynStatusStatics)->get_InvalidArgument3(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynStatusStatics<D>::InvalidArgument4() const
    {
        int32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynStatusStatics)->get_InvalidArgument4(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynStatusStatics<D>::InvalidArgument5() const
    {
        int32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynStatusStatics)->get_InvalidArgument5(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynStatusStatics<D>::InvalidArgument6() const
    {
        int32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynStatusStatics)->get_InvalidArgument6(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynStatusStatics<D>::InvalidArgument7() const
    {
        int32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynStatusStatics)->get_InvalidArgument7(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynStatusStatics<D>::InvalidArgument8() const
    {
        int32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynStatusStatics)->get_InvalidArgument8(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynWatcherStoppedEventArgs<D>::Status() const
    {
        int32_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynWatcherStoppedEventArgs)->get_Status(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Devices_AllJoyn_IAllJoynWatcherStoppedEventArgsFactory<D>::Create(int32_t status) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Devices::AllJoyn::IAllJoynWatcherStoppedEventArgsFactory)->Create(status, &result));
        return Windows::Devices::AllJoyn::AllJoynWatcherStoppedEventArgs{ result, take_ownership_from_abi };
    }
    template <typename D>
    struct produce<D, Windows::Devices::AllJoyn::IAllJoynAboutData> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynAboutData>
    {
        int32_t __stdcall get_IsEnabled(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsEnabled());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_IsEnabled(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsEnabled(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DefaultAppName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DefaultAppName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_DefaultAppName(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DefaultAppName(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AppNames(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IMap<hstring, hstring>>(this->shim().AppNames());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DateOfManufacture(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<Windows::Foundation::DateTime>>(this->shim().DateOfManufacture());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_DateOfManufacture(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DateOfManufacture(*reinterpret_cast<Windows::Foundation::IReference<Windows::Foundation::DateTime> const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DefaultDescription(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DefaultDescription());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_DefaultDescription(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DefaultDescription(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Descriptions(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IMap<hstring, hstring>>(this->shim().Descriptions());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DefaultManufacturer(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DefaultManufacturer());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_DefaultManufacturer(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DefaultManufacturer(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Manufacturers(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IMap<hstring, hstring>>(this->shim().Manufacturers());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ModelNumber(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ModelNumber());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ModelNumber(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ModelNumber(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SoftwareVersion(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().SoftwareVersion());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_SoftwareVersion(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SoftwareVersion(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SupportUrl(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().SupportUrl());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_SupportUrl(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SupportUrl(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AppId(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().AppId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_AppId(winrt::guid value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AppId(*reinterpret_cast<winrt::guid const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::AllJoyn::IAllJoynAboutDataView> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynAboutDataView>
    {
        int32_t __stdcall get_Status(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().Status());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Properties(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable>>(this->shim().Properties());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AJSoftwareVersion(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AJSoftwareVersion());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AppId(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().AppId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DateOfManufacture(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<Windows::Foundation::DateTime>>(this->shim().DateOfManufacture());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DefaultLanguage(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Globalization::Language>(this->shim().DefaultLanguage());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DeviceId(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DeviceId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_HardwareVersion(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().HardwareVersion());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ModelNumber(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ModelNumber());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SoftwareVersion(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().SoftwareVersion());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SupportedLanguages(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Globalization::Language>>(this->shim().SupportedLanguages());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SupportUrl(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().SupportUrl());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AppName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AppName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Description(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Description());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DeviceName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DeviceName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Manufacturer(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Manufacturer());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::AllJoyn::IAllJoynAboutDataViewStatics> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynAboutDataViewStatics>
    {
        int32_t __stdcall GetDataBySessionPortAsync(void* uniqueName, void* busAttachment, uint16_t sessionPort, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::AllJoyn::AllJoynAboutDataView>>(this->shim().GetDataBySessionPortAsync(*reinterpret_cast<hstring const*>(&uniqueName), *reinterpret_cast<Windows::Devices::AllJoyn::AllJoynBusAttachment const*>(&busAttachment), sessionPort));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetDataBySessionPortWithLanguageAsync(void* uniqueName, void* busAttachment, uint16_t sessionPort, void* language, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::AllJoyn::AllJoynAboutDataView>>(this->shim().GetDataBySessionPortAsync(*reinterpret_cast<hstring const*>(&uniqueName), *reinterpret_cast<Windows::Devices::AllJoyn::AllJoynBusAttachment const*>(&busAttachment), sessionPort, *reinterpret_cast<Windows::Globalization::Language const*>(&language)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoiner> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoiner>
    {
        int32_t __stdcall Accept() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Accept();
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoinerEventArgs> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoinerEventArgs>
    {
        int32_t __stdcall get_UniqueName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().UniqueName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SessionPort(uint16_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint16_t>(this->shim().SessionPort());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TrafficType(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::AllJoyn::AllJoynTrafficType>(this->shim().TrafficType());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SamePhysicalNode(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().SamePhysicalNode());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SameNetwork(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().SameNetwork());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Accept() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Accept();
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoinerEventArgsFactory> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoinerEventArgsFactory>
    {
        int32_t __stdcall Create(void* uniqueName, uint16_t sessionPort, int32_t trafficType, uint8_t proximity, void* acceptSessionJoiner, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Devices::AllJoyn::AllJoynAcceptSessionJoinerEventArgs>(this->shim().Create(*reinterpret_cast<hstring const*>(&uniqueName), sessionPort, *reinterpret_cast<Windows::Devices::AllJoyn::AllJoynTrafficType const*>(&trafficType), proximity, *reinterpret_cast<Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoiner const*>(&acceptSessionJoiner)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::AllJoyn::IAllJoynAuthenticationCompleteEventArgs> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynAuthenticationCompleteEventArgs>
    {
        int32_t __stdcall get_AuthenticationMechanism(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::AllJoyn::AllJoynAuthenticationMechanism>(this->shim().AuthenticationMechanism());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PeerUniqueName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().PeerUniqueName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Succeeded(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Succeeded());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::AllJoyn::IAllJoynBusAttachment> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynBusAttachment>
    {
        int32_t __stdcall get_AboutData(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::AllJoyn::AllJoynAboutData>(this->shim().AboutData());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ConnectionSpecification(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ConnectionSpecification());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_State(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::AllJoyn::AllJoynBusAttachmentState>(this->shim().State());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_UniqueName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().UniqueName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall PingAsync(void* uniqueName, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<int32_t>>(this->shim().PingAsync(*reinterpret_cast<hstring const*>(&uniqueName)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Connect() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Connect();
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Disconnect() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Disconnect();
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_StateChanged(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().StateChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynBusAttachment, Windows::Devices::AllJoyn::AllJoynBusAttachmentStateChangedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_StateChanged(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StateChanged(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall get_AuthenticationMechanisms(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Devices::AllJoyn::AllJoynAuthenticationMechanism>>(this->shim().AuthenticationMechanisms());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_CredentialsRequested(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().CredentialsRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynBusAttachment, Windows::Devices::AllJoyn::AllJoynCredentialsRequestedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_CredentialsRequested(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CredentialsRequested(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_CredentialsVerificationRequested(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().CredentialsVerificationRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynBusAttachment, Windows::Devices::AllJoyn::AllJoynCredentialsVerificationRequestedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_CredentialsVerificationRequested(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CredentialsVerificationRequested(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_AuthenticationComplete(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().AuthenticationComplete(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynBusAttachment, Windows::Devices::AllJoyn::AllJoynAuthenticationCompleteEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_AuthenticationComplete(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AuthenticationComplete(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
    };
    template <typename D>
    struct produce<D, Windows::Devices::AllJoyn::IAllJoynBusAttachment2> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynBusAttachment2>
    {
        int32_t __stdcall GetAboutDataAsync(void* serviceInfo, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::AllJoyn::AllJoynAboutDataView>>(this->shim().GetAboutDataAsync(*reinterpret_cast<Windows::Devices::AllJoyn::AllJoynServiceInfo const*>(&serviceInfo)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetAboutDataWithLanguageAsync(void* serviceInfo, void* language, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::AllJoyn::AllJoynAboutDataView>>(this->shim().GetAboutDataAsync(*reinterpret_cast<Windows::Devices::AllJoyn::AllJoynServiceInfo const*>(&serviceInfo), *reinterpret_cast<Windows::Globalization::Language const*>(&language)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_AcceptSessionJoinerRequested(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().AcceptSessionJoinerRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynBusAttachment, Windows::Devices::AllJoyn::AllJoynAcceptSessionJoinerEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_AcceptSessionJoinerRequested(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AcceptSessionJoinerRequested(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_SessionJoined(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().SessionJoined(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynBusAttachment, Windows::Devices::AllJoyn::AllJoynSessionJoinedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_SessionJoined(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SessionJoined(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
    };
    template <typename D>
    struct produce<D, Windows::Devices::AllJoyn::IAllJoynBusAttachmentFactory> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynBusAttachmentFactory>
    {
        int32_t __stdcall Create(void* connectionSpecification, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Devices::AllJoyn::AllJoynBusAttachment>(this->shim().Create(*reinterpret_cast<hstring const*>(&connectionSpecification)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::AllJoyn::IAllJoynBusAttachmentStateChangedEventArgs> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynBusAttachmentStateChangedEventArgs>
    {
        int32_t __stdcall get_State(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::AllJoyn::AllJoynBusAttachmentState>(this->shim().State());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Status(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().Status());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::AllJoyn::IAllJoynBusAttachmentStatics> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynBusAttachmentStatics>
    {
        int32_t __stdcall GetDefault(void** defaultBusAttachment) noexcept final try
        {
            clear_abi(defaultBusAttachment);
            typename D::abi_guard guard(this->shim());
            *defaultBusAttachment = detach_from<Windows::Devices::AllJoyn::AllJoynBusAttachment>(this->shim().GetDefault());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetWatcher(void* requiredInterfaces, void** deviceWatcher) noexcept final try
        {
            clear_abi(deviceWatcher);
            typename D::abi_guard guard(this->shim());
            *deviceWatcher = detach_from<Windows::Devices::Enumeration::DeviceWatcher>(this->shim().GetWatcher(*reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&requiredInterfaces)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::AllJoyn::IAllJoynBusObject> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynBusObject>
    {
        int32_t __stdcall Start() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Start();
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Stop() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Stop();
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall AddProducer(void* producer) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddProducer(*reinterpret_cast<Windows::Devices::AllJoyn::IAllJoynProducer const*>(&producer));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_BusAttachment(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::AllJoyn::AllJoynBusAttachment>(this->shim().BusAttachment());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Session(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::AllJoyn::AllJoynSession>(this->shim().Session());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_Stopped(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().Stopped(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynBusObject, Windows::Devices::AllJoyn::AllJoynBusObjectStoppedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_Stopped(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Stopped(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
    };
    template <typename D>
    struct produce<D, Windows::Devices::AllJoyn::IAllJoynBusObjectFactory> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynBusObjectFactory>
    {
        int32_t __stdcall Create(void* objectPath, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Devices::AllJoyn::AllJoynBusObject>(this->shim().Create(*reinterpret_cast<hstring const*>(&objectPath)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateWithBusAttachment(void* objectPath, void* busAttachment, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Devices::AllJoyn::AllJoynBusObject>(this->shim().CreateWithBusAttachment(*reinterpret_cast<hstring const*>(&objectPath), *reinterpret_cast<Windows::Devices::AllJoyn::AllJoynBusAttachment const*>(&busAttachment)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::AllJoyn::IAllJoynBusObjectStoppedEventArgs> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynBusObjectStoppedEventArgs>
    {
        int32_t __stdcall get_Status(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().Status());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::AllJoyn::IAllJoynBusObjectStoppedEventArgsFactory> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynBusObjectStoppedEventArgsFactory>
    {
        int32_t __stdcall Create(int32_t status, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Devices::AllJoyn::AllJoynBusObjectStoppedEventArgs>(this->shim().Create(status));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::AllJoyn::IAllJoynCredentials> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynCredentials>
    {
        int32_t __stdcall get_AuthenticationMechanism(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::AllJoyn::AllJoynAuthenticationMechanism>(this->shim().AuthenticationMechanism());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Certificate(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Cryptography::Certificates::Certificate>(this->shim().Certificate());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Certificate(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Certificate(*reinterpret_cast<Windows::Security::Cryptography::Certificates::Certificate const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PasswordCredential(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Credentials::PasswordCredential>(this->shim().PasswordCredential());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_PasswordCredential(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PasswordCredential(*reinterpret_cast<Windows::Security::Credentials::PasswordCredential const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Timeout(int64_t* value) noexcept final try
        {
            zero_abi<Windows::Foundation::TimeSpan>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().Timeout());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Timeout(int64_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Timeout(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::AllJoyn::IAllJoynCredentialsRequestedEventArgs> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynCredentialsRequestedEventArgs>
    {
        int32_t __stdcall get_AttemptCount(uint16_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint16_t>(this->shim().AttemptCount());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Credentials(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::AllJoyn::AllJoynCredentials>(this->shim().Credentials());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PeerUniqueName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().PeerUniqueName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RequestedUserName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().RequestedUserName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetDeferral(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::Deferral>(this->shim().GetDeferral());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::AllJoyn::IAllJoynCredentialsVerificationRequestedEventArgs> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynCredentialsVerificationRequestedEventArgs>
    {
        int32_t __stdcall get_AuthenticationMechanism(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::AllJoyn::AllJoynAuthenticationMechanism>(this->shim().AuthenticationMechanism());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PeerUniqueName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().PeerUniqueName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PeerCertificate(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Cryptography::Certificates::Certificate>(this->shim().PeerCertificate());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PeerCertificateErrorSeverity(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Sockets::SocketSslErrorSeverity>(this->shim().PeerCertificateErrorSeverity());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PeerCertificateErrors(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::ChainValidationResult>>(this->shim().PeerCertificateErrors());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PeerIntermediateCertificates(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate>>(this->shim().PeerIntermediateCertificates());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Accept() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Accept();
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetDeferral(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::Deferral>(this->shim().GetDeferral());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::AllJoyn::IAllJoynMessageInfo> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynMessageInfo>
    {
        int32_t __stdcall get_SenderUniqueName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().SenderUniqueName());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::AllJoyn::IAllJoynMessageInfoFactory> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynMessageInfoFactory>
    {
        int32_t __stdcall Create(void* senderUniqueName, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Devices::AllJoyn::AllJoynMessageInfo>(this->shim().Create(*reinterpret_cast<hstring const*>(&senderUniqueName)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::AllJoyn::IAllJoynProducer> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynProducer>
    {
        int32_t __stdcall SetBusObject(void* busObject) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetBusObject(*reinterpret_cast<Windows::Devices::AllJoyn::AllJoynBusObject const*>(&busObject));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::AllJoyn::IAllJoynProducerStoppedEventArgs> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynProducerStoppedEventArgs>
    {
        int32_t __stdcall get_Status(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().Status());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::AllJoyn::IAllJoynProducerStoppedEventArgsFactory> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynProducerStoppedEventArgsFactory>
    {
        int32_t __stdcall Create(int32_t status, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Devices::AllJoyn::AllJoynProducerStoppedEventArgs>(this->shim().Create(status));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::AllJoyn::IAllJoynServiceInfo> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynServiceInfo>
    {
        int32_t __stdcall get_UniqueName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().UniqueName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ObjectPath(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ObjectPath());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SessionPort(uint16_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint16_t>(this->shim().SessionPort());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::AllJoyn::IAllJoynServiceInfoFactory> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynServiceInfoFactory>
    {
        int32_t __stdcall Create(void* uniqueName, void* objectPath, uint16_t sessionPort, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Devices::AllJoyn::AllJoynServiceInfo>(this->shim().Create(*reinterpret_cast<hstring const*>(&uniqueName), *reinterpret_cast<hstring const*>(&objectPath), sessionPort));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::AllJoyn::IAllJoynServiceInfoRemovedEventArgs> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynServiceInfoRemovedEventArgs>
    {
        int32_t __stdcall get_UniqueName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().UniqueName());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::AllJoyn::IAllJoynServiceInfoRemovedEventArgsFactory> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynServiceInfoRemovedEventArgsFactory>
    {
        int32_t __stdcall Create(void* uniqueName, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Devices::AllJoyn::AllJoynServiceInfoRemovedEventArgs>(this->shim().Create(*reinterpret_cast<hstring const*>(&uniqueName)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::AllJoyn::IAllJoynServiceInfoStatics> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynServiceInfoStatics>
    {
        int32_t __stdcall FromIdAsync(void* deviceId, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::AllJoyn::AllJoynServiceInfo>>(this->shim().FromIdAsync(*reinterpret_cast<hstring const*>(&deviceId)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::AllJoyn::IAllJoynSession> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynSession>
    {
        int32_t __stdcall get_Id(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().Id());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Status(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().Status());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RemoveMemberAsync(void* uniqueName, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<int32_t>>(this->shim().RemoveMemberAsync(*reinterpret_cast<hstring const*>(&uniqueName)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_MemberAdded(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().MemberAdded(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynSession, Windows::Devices::AllJoyn::AllJoynSessionMemberAddedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_MemberAdded(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MemberAdded(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_MemberRemoved(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().MemberRemoved(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynSession, Windows::Devices::AllJoyn::AllJoynSessionMemberRemovedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_MemberRemoved(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MemberRemoved(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_Lost(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().Lost(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynSession, Windows::Devices::AllJoyn::AllJoynSessionLostEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_Lost(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Lost(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
    };
    template <typename D>
    struct produce<D, Windows::Devices::AllJoyn::IAllJoynSessionJoinedEventArgs> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynSessionJoinedEventArgs>
    {
        int32_t __stdcall get_Session(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::AllJoyn::AllJoynSession>(this->shim().Session());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::AllJoyn::IAllJoynSessionJoinedEventArgsFactory> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynSessionJoinedEventArgsFactory>
    {
        int32_t __stdcall Create(void* session, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Devices::AllJoyn::AllJoynSessionJoinedEventArgs>(this->shim().Create(*reinterpret_cast<Windows::Devices::AllJoyn::AllJoynSession const*>(&session)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::AllJoyn::IAllJoynSessionLostEventArgs> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynSessionLostEventArgs>
    {
        int32_t __stdcall get_Reason(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::AllJoyn::AllJoynSessionLostReason>(this->shim().Reason());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::AllJoyn::IAllJoynSessionLostEventArgsFactory> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynSessionLostEventArgsFactory>
    {
        int32_t __stdcall Create(int32_t reason, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Devices::AllJoyn::AllJoynSessionLostEventArgs>(this->shim().Create(*reinterpret_cast<Windows::Devices::AllJoyn::AllJoynSessionLostReason const*>(&reason)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::AllJoyn::IAllJoynSessionMemberAddedEventArgs> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynSessionMemberAddedEventArgs>
    {
        int32_t __stdcall get_UniqueName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().UniqueName());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::AllJoyn::IAllJoynSessionMemberAddedEventArgsFactory> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynSessionMemberAddedEventArgsFactory>
    {
        int32_t __stdcall Create(void* uniqueName, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Devices::AllJoyn::AllJoynSessionMemberAddedEventArgs>(this->shim().Create(*reinterpret_cast<hstring const*>(&uniqueName)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::AllJoyn::IAllJoynSessionMemberRemovedEventArgs> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynSessionMemberRemovedEventArgs>
    {
        int32_t __stdcall get_UniqueName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().UniqueName());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::AllJoyn::IAllJoynSessionMemberRemovedEventArgsFactory> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynSessionMemberRemovedEventArgsFactory>
    {
        int32_t __stdcall Create(void* uniqueName, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Devices::AllJoyn::AllJoynSessionMemberRemovedEventArgs>(this->shim().Create(*reinterpret_cast<hstring const*>(&uniqueName)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::AllJoyn::IAllJoynSessionStatics> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynSessionStatics>
    {
        int32_t __stdcall GetFromServiceInfoAsync(void* serviceInfo, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::AllJoyn::AllJoynSession>>(this->shim().GetFromServiceInfoAsync(*reinterpret_cast<Windows::Devices::AllJoyn::AllJoynServiceInfo const*>(&serviceInfo)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetFromServiceInfoAndBusAttachmentAsync(void* serviceInfo, void* busAttachment, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::AllJoyn::AllJoynSession>>(this->shim().GetFromServiceInfoAsync(*reinterpret_cast<Windows::Devices::AllJoyn::AllJoynServiceInfo const*>(&serviceInfo), *reinterpret_cast<Windows::Devices::AllJoyn::AllJoynBusAttachment const*>(&busAttachment)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::AllJoyn::IAllJoynStatusStatics> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynStatusStatics>
    {
        int32_t __stdcall get_Ok(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().Ok());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Fail(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().Fail());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_OperationTimedOut(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().OperationTimedOut());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_OtherEndClosed(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().OtherEndClosed());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ConnectionRefused(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().ConnectionRefused());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AuthenticationFailed(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().AuthenticationFailed());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AuthenticationRejectedByUser(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().AuthenticationRejectedByUser());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SslConnectFailed(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().SslConnectFailed());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SslIdentityVerificationFailed(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().SslIdentityVerificationFailed());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_InsufficientSecurity(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().InsufficientSecurity());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_InvalidArgument1(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().InvalidArgument1());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_InvalidArgument2(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().InvalidArgument2());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_InvalidArgument3(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().InvalidArgument3());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_InvalidArgument4(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().InvalidArgument4());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_InvalidArgument5(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().InvalidArgument5());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_InvalidArgument6(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().InvalidArgument6());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_InvalidArgument7(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().InvalidArgument7());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_InvalidArgument8(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().InvalidArgument8());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::AllJoyn::IAllJoynWatcherStoppedEventArgs> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynWatcherStoppedEventArgs>
    {
        int32_t __stdcall get_Status(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().Status());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Devices::AllJoyn::IAllJoynWatcherStoppedEventArgsFactory> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynWatcherStoppedEventArgsFactory>
    {
        int32_t __stdcall Create(int32_t status, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Devices::AllJoyn::AllJoynWatcherStoppedEventArgs>(this->shim().Create(status));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
}
namespace winrt::Windows::Devices::AllJoyn
{
    inline auto AllJoynAboutDataView::GetDataBySessionPortAsync(param::hstring const& uniqueName, Windows::Devices::AllJoyn::AllJoynBusAttachment const& busAttachment, uint16_t sessionPort)
    {
        return impl::call_factory<AllJoynAboutDataView, Windows::Devices::AllJoyn::IAllJoynAboutDataViewStatics>([&](auto&& f) { return f.GetDataBySessionPortAsync(uniqueName, busAttachment, sessionPort); });
    }
    inline auto AllJoynAboutDataView::GetDataBySessionPortAsync(param::hstring const& uniqueName, Windows::Devices::AllJoyn::AllJoynBusAttachment const& busAttachment, uint16_t sessionPort, Windows::Globalization::Language const& language)
    {
        return impl::call_factory<AllJoynAboutDataView, Windows::Devices::AllJoyn::IAllJoynAboutDataViewStatics>([&](auto&& f) { return f.GetDataBySessionPortAsync(uniqueName, busAttachment, sessionPort, language); });
    }
    inline AllJoynAcceptSessionJoinerEventArgs::AllJoynAcceptSessionJoinerEventArgs(param::hstring const& uniqueName, uint16_t sessionPort, Windows::Devices::AllJoyn::AllJoynTrafficType const& trafficType, uint8_t proximity, Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoiner const& acceptSessionJoiner) :
        AllJoynAcceptSessionJoinerEventArgs(impl::call_factory<AllJoynAcceptSessionJoinerEventArgs, Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoinerEventArgsFactory>([&](auto&& f) { return f.Create(uniqueName, sessionPort, trafficType, proximity, acceptSessionJoiner); }))
    {
    }
    inline AllJoynBusAttachment::AllJoynBusAttachment() :
        AllJoynBusAttachment(impl::call_factory<AllJoynBusAttachment>([](auto&& f) { return f.template ActivateInstance<AllJoynBusAttachment>(); }))
    {
    }
    inline AllJoynBusAttachment::AllJoynBusAttachment(param::hstring const& connectionSpecification) :
        AllJoynBusAttachment(impl::call_factory<AllJoynBusAttachment, Windows::Devices::AllJoyn::IAllJoynBusAttachmentFactory>([&](auto&& f) { return f.Create(connectionSpecification); }))
    {
    }
    inline auto AllJoynBusAttachment::GetDefault()
    {
        return impl::call_factory<AllJoynBusAttachment, Windows::Devices::AllJoyn::IAllJoynBusAttachmentStatics>([&](auto&& f) { return f.GetDefault(); });
    }
    inline auto AllJoynBusAttachment::GetWatcher(param::iterable<hstring> const& requiredInterfaces)
    {
        return impl::call_factory<AllJoynBusAttachment, Windows::Devices::AllJoyn::IAllJoynBusAttachmentStatics>([&](auto&& f) { return f.GetWatcher(requiredInterfaces); });
    }
    inline AllJoynBusObject::AllJoynBusObject() :
        AllJoynBusObject(impl::call_factory<AllJoynBusObject>([](auto&& f) { return f.template ActivateInstance<AllJoynBusObject>(); }))
    {
    }
    inline AllJoynBusObject::AllJoynBusObject(param::hstring const& objectPath) :
        AllJoynBusObject(impl::call_factory<AllJoynBusObject, Windows::Devices::AllJoyn::IAllJoynBusObjectFactory>([&](auto&& f) { return f.Create(objectPath); }))
    {
    }
    inline AllJoynBusObject::AllJoynBusObject(param::hstring const& objectPath, Windows::Devices::AllJoyn::AllJoynBusAttachment const& busAttachment) :
        AllJoynBusObject(impl::call_factory<AllJoynBusObject, Windows::Devices::AllJoyn::IAllJoynBusObjectFactory>([&](auto&& f) { return f.CreateWithBusAttachment(objectPath, busAttachment); }))
    {
    }
    inline AllJoynBusObjectStoppedEventArgs::AllJoynBusObjectStoppedEventArgs(int32_t status) :
        AllJoynBusObjectStoppedEventArgs(impl::call_factory<AllJoynBusObjectStoppedEventArgs, Windows::Devices::AllJoyn::IAllJoynBusObjectStoppedEventArgsFactory>([&](auto&& f) { return f.Create(status); }))
    {
    }
    inline AllJoynMessageInfo::AllJoynMessageInfo(param::hstring const& senderUniqueName) :
        AllJoynMessageInfo(impl::call_factory<AllJoynMessageInfo, Windows::Devices::AllJoyn::IAllJoynMessageInfoFactory>([&](auto&& f) { return f.Create(senderUniqueName); }))
    {
    }
    inline AllJoynProducerStoppedEventArgs::AllJoynProducerStoppedEventArgs(int32_t status) :
        AllJoynProducerStoppedEventArgs(impl::call_factory<AllJoynProducerStoppedEventArgs, Windows::Devices::AllJoyn::IAllJoynProducerStoppedEventArgsFactory>([&](auto&& f) { return f.Create(status); }))
    {
    }
    inline AllJoynServiceInfo::AllJoynServiceInfo(param::hstring const& uniqueName, param::hstring const& objectPath, uint16_t sessionPort) :
        AllJoynServiceInfo(impl::call_factory<AllJoynServiceInfo, Windows::Devices::AllJoyn::IAllJoynServiceInfoFactory>([&](auto&& f) { return f.Create(uniqueName, objectPath, sessionPort); }))
    {
    }
    inline auto AllJoynServiceInfo::FromIdAsync(param::hstring const& deviceId)
    {
        return impl::call_factory<AllJoynServiceInfo, Windows::Devices::AllJoyn::IAllJoynServiceInfoStatics>([&](auto&& f) { return f.FromIdAsync(deviceId); });
    }
    inline AllJoynServiceInfoRemovedEventArgs::AllJoynServiceInfoRemovedEventArgs(param::hstring const& uniqueName) :
        AllJoynServiceInfoRemovedEventArgs(impl::call_factory<AllJoynServiceInfoRemovedEventArgs, Windows::Devices::AllJoyn::IAllJoynServiceInfoRemovedEventArgsFactory>([&](auto&& f) { return f.Create(uniqueName); }))
    {
    }
    inline auto AllJoynSession::GetFromServiceInfoAsync(Windows::Devices::AllJoyn::AllJoynServiceInfo const& serviceInfo)
    {
        return impl::call_factory<AllJoynSession, Windows::Devices::AllJoyn::IAllJoynSessionStatics>([&](auto&& f) { return f.GetFromServiceInfoAsync(serviceInfo); });
    }
    inline auto AllJoynSession::GetFromServiceInfoAsync(Windows::Devices::AllJoyn::AllJoynServiceInfo const& serviceInfo, Windows::Devices::AllJoyn::AllJoynBusAttachment const& busAttachment)
    {
        return impl::call_factory<AllJoynSession, Windows::Devices::AllJoyn::IAllJoynSessionStatics>([&](auto&& f) { return f.GetFromServiceInfoAsync(serviceInfo, busAttachment); });
    }
    inline AllJoynSessionJoinedEventArgs::AllJoynSessionJoinedEventArgs(Windows::Devices::AllJoyn::AllJoynSession const& session) :
        AllJoynSessionJoinedEventArgs(impl::call_factory<AllJoynSessionJoinedEventArgs, Windows::Devices::AllJoyn::IAllJoynSessionJoinedEventArgsFactory>([&](auto&& f) { return f.Create(session); }))
    {
    }
    inline AllJoynSessionLostEventArgs::AllJoynSessionLostEventArgs(Windows::Devices::AllJoyn::AllJoynSessionLostReason const& reason) :
        AllJoynSessionLostEventArgs(impl::call_factory<AllJoynSessionLostEventArgs, Windows::Devices::AllJoyn::IAllJoynSessionLostEventArgsFactory>([&](auto&& f) { return f.Create(reason); }))
    {
    }
    inline AllJoynSessionMemberAddedEventArgs::AllJoynSessionMemberAddedEventArgs(param::hstring const& uniqueName) :
        AllJoynSessionMemberAddedEventArgs(impl::call_factory<AllJoynSessionMemberAddedEventArgs, Windows::Devices::AllJoyn::IAllJoynSessionMemberAddedEventArgsFactory>([&](auto&& f) { return f.Create(uniqueName); }))
    {
    }
    inline AllJoynSessionMemberRemovedEventArgs::AllJoynSessionMemberRemovedEventArgs(param::hstring const& uniqueName) :
        AllJoynSessionMemberRemovedEventArgs(impl::call_factory<AllJoynSessionMemberRemovedEventArgs, Windows::Devices::AllJoyn::IAllJoynSessionMemberRemovedEventArgsFactory>([&](auto&& f) { return f.Create(uniqueName); }))
    {
    }
    inline auto AllJoynStatus::Ok()
    {
        return impl::call_factory<AllJoynStatus, Windows::Devices::AllJoyn::IAllJoynStatusStatics>([&](auto&& f) { return f.Ok(); });
    }
    inline auto AllJoynStatus::Fail()
    {
        return impl::call_factory<AllJoynStatus, Windows::Devices::AllJoyn::IAllJoynStatusStatics>([&](auto&& f) { return f.Fail(); });
    }
    inline auto AllJoynStatus::OperationTimedOut()
    {
        return impl::call_factory<AllJoynStatus, Windows::Devices::AllJoyn::IAllJoynStatusStatics>([&](auto&& f) { return f.OperationTimedOut(); });
    }
    inline auto AllJoynStatus::OtherEndClosed()
    {
        return impl::call_factory<AllJoynStatus, Windows::Devices::AllJoyn::IAllJoynStatusStatics>([&](auto&& f) { return f.OtherEndClosed(); });
    }
    inline auto AllJoynStatus::ConnectionRefused()
    {
        return impl::call_factory<AllJoynStatus, Windows::Devices::AllJoyn::IAllJoynStatusStatics>([&](auto&& f) { return f.ConnectionRefused(); });
    }
    inline auto AllJoynStatus::AuthenticationFailed()
    {
        return impl::call_factory<AllJoynStatus, Windows::Devices::AllJoyn::IAllJoynStatusStatics>([&](auto&& f) { return f.AuthenticationFailed(); });
    }
    inline auto AllJoynStatus::AuthenticationRejectedByUser()
    {
        return impl::call_factory<AllJoynStatus, Windows::Devices::AllJoyn::IAllJoynStatusStatics>([&](auto&& f) { return f.AuthenticationRejectedByUser(); });
    }
    inline auto AllJoynStatus::SslConnectFailed()
    {
        return impl::call_factory<AllJoynStatus, Windows::Devices::AllJoyn::IAllJoynStatusStatics>([&](auto&& f) { return f.SslConnectFailed(); });
    }
    inline auto AllJoynStatus::SslIdentityVerificationFailed()
    {
        return impl::call_factory<AllJoynStatus, Windows::Devices::AllJoyn::IAllJoynStatusStatics>([&](auto&& f) { return f.SslIdentityVerificationFailed(); });
    }
    inline auto AllJoynStatus::InsufficientSecurity()
    {
        return impl::call_factory<AllJoynStatus, Windows::Devices::AllJoyn::IAllJoynStatusStatics>([&](auto&& f) { return f.InsufficientSecurity(); });
    }
    inline auto AllJoynStatus::InvalidArgument1()
    {
        return impl::call_factory<AllJoynStatus, Windows::Devices::AllJoyn::IAllJoynStatusStatics>([&](auto&& f) { return f.InvalidArgument1(); });
    }
    inline auto AllJoynStatus::InvalidArgument2()
    {
        return impl::call_factory<AllJoynStatus, Windows::Devices::AllJoyn::IAllJoynStatusStatics>([&](auto&& f) { return f.InvalidArgument2(); });
    }
    inline auto AllJoynStatus::InvalidArgument3()
    {
        return impl::call_factory<AllJoynStatus, Windows::Devices::AllJoyn::IAllJoynStatusStatics>([&](auto&& f) { return f.InvalidArgument3(); });
    }
    inline auto AllJoynStatus::InvalidArgument4()
    {
        return impl::call_factory<AllJoynStatus, Windows::Devices::AllJoyn::IAllJoynStatusStatics>([&](auto&& f) { return f.InvalidArgument4(); });
    }
    inline auto AllJoynStatus::InvalidArgument5()
    {
        return impl::call_factory<AllJoynStatus, Windows::Devices::AllJoyn::IAllJoynStatusStatics>([&](auto&& f) { return f.InvalidArgument5(); });
    }
    inline auto AllJoynStatus::InvalidArgument6()
    {
        return impl::call_factory<AllJoynStatus, Windows::Devices::AllJoyn::IAllJoynStatusStatics>([&](auto&& f) { return f.InvalidArgument6(); });
    }
    inline auto AllJoynStatus::InvalidArgument7()
    {
        return impl::call_factory<AllJoynStatus, Windows::Devices::AllJoyn::IAllJoynStatusStatics>([&](auto&& f) { return f.InvalidArgument7(); });
    }
    inline auto AllJoynStatus::InvalidArgument8()
    {
        return impl::call_factory<AllJoynStatus, Windows::Devices::AllJoyn::IAllJoynStatusStatics>([&](auto&& f) { return f.InvalidArgument8(); });
    }
    inline AllJoynWatcherStoppedEventArgs::AllJoynWatcherStoppedEventArgs(int32_t status) :
        AllJoynWatcherStoppedEventArgs(impl::call_factory<AllJoynWatcherStoppedEventArgs, Windows::Devices::AllJoyn::IAllJoynWatcherStoppedEventArgsFactory>([&](auto&& f) { return f.Create(status); }))
    {
    }
}
namespace std
{
    template<> struct hash<winrt::Windows::Devices::AllJoyn::IAllJoynAboutData> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::IAllJoynAboutData> {};
    template<> struct hash<winrt::Windows::Devices::AllJoyn::IAllJoynAboutDataView> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::IAllJoynAboutDataView> {};
    template<> struct hash<winrt::Windows::Devices::AllJoyn::IAllJoynAboutDataViewStatics> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::IAllJoynAboutDataViewStatics> {};
    template<> struct hash<winrt::Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoiner> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoiner> {};
    template<> struct hash<winrt::Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoinerEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoinerEventArgs> {};
    template<> struct hash<winrt::Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoinerEventArgsFactory> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoinerEventArgsFactory> {};
    template<> struct hash<winrt::Windows::Devices::AllJoyn::IAllJoynAuthenticationCompleteEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::IAllJoynAuthenticationCompleteEventArgs> {};
    template<> struct hash<winrt::Windows::Devices::AllJoyn::IAllJoynBusAttachment> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::IAllJoynBusAttachment> {};
    template<> struct hash<winrt::Windows::Devices::AllJoyn::IAllJoynBusAttachment2> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::IAllJoynBusAttachment2> {};
    template<> struct hash<winrt::Windows::Devices::AllJoyn::IAllJoynBusAttachmentFactory> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::IAllJoynBusAttachmentFactory> {};
    template<> struct hash<winrt::Windows::Devices::AllJoyn::IAllJoynBusAttachmentStateChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::IAllJoynBusAttachmentStateChangedEventArgs> {};
    template<> struct hash<winrt::Windows::Devices::AllJoyn::IAllJoynBusAttachmentStatics> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::IAllJoynBusAttachmentStatics> {};
    template<> struct hash<winrt::Windows::Devices::AllJoyn::IAllJoynBusObject> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::IAllJoynBusObject> {};
    template<> struct hash<winrt::Windows::Devices::AllJoyn::IAllJoynBusObjectFactory> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::IAllJoynBusObjectFactory> {};
    template<> struct hash<winrt::Windows::Devices::AllJoyn::IAllJoynBusObjectStoppedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::IAllJoynBusObjectStoppedEventArgs> {};
    template<> struct hash<winrt::Windows::Devices::AllJoyn::IAllJoynBusObjectStoppedEventArgsFactory> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::IAllJoynBusObjectStoppedEventArgsFactory> {};
    template<> struct hash<winrt::Windows::Devices::AllJoyn::IAllJoynCredentials> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::IAllJoynCredentials> {};
    template<> struct hash<winrt::Windows::Devices::AllJoyn::IAllJoynCredentialsRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::IAllJoynCredentialsRequestedEventArgs> {};
    template<> struct hash<winrt::Windows::Devices::AllJoyn::IAllJoynCredentialsVerificationRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::IAllJoynCredentialsVerificationRequestedEventArgs> {};
    template<> struct hash<winrt::Windows::Devices::AllJoyn::IAllJoynMessageInfo> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::IAllJoynMessageInfo> {};
    template<> struct hash<winrt::Windows::Devices::AllJoyn::IAllJoynMessageInfoFactory> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::IAllJoynMessageInfoFactory> {};
    template<> struct hash<winrt::Windows::Devices::AllJoyn::IAllJoynProducer> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::IAllJoynProducer> {};
    template<> struct hash<winrt::Windows::Devices::AllJoyn::IAllJoynProducerStoppedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::IAllJoynProducerStoppedEventArgs> {};
    template<> struct hash<winrt::Windows::Devices::AllJoyn::IAllJoynProducerStoppedEventArgsFactory> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::IAllJoynProducerStoppedEventArgsFactory> {};
    template<> struct hash<winrt::Windows::Devices::AllJoyn::IAllJoynServiceInfo> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::IAllJoynServiceInfo> {};
    template<> struct hash<winrt::Windows::Devices::AllJoyn::IAllJoynServiceInfoFactory> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::IAllJoynServiceInfoFactory> {};
    template<> struct hash<winrt::Windows::Devices::AllJoyn::IAllJoynServiceInfoRemovedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::IAllJoynServiceInfoRemovedEventArgs> {};
    template<> struct hash<winrt::Windows::Devices::AllJoyn::IAllJoynServiceInfoRemovedEventArgsFactory> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::IAllJoynServiceInfoRemovedEventArgsFactory> {};
    template<> struct hash<winrt::Windows::Devices::AllJoyn::IAllJoynServiceInfoStatics> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::IAllJoynServiceInfoStatics> {};
    template<> struct hash<winrt::Windows::Devices::AllJoyn::IAllJoynSession> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::IAllJoynSession> {};
    template<> struct hash<winrt::Windows::Devices::AllJoyn::IAllJoynSessionJoinedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::IAllJoynSessionJoinedEventArgs> {};
    template<> struct hash<winrt::Windows::Devices::AllJoyn::IAllJoynSessionJoinedEventArgsFactory> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::IAllJoynSessionJoinedEventArgsFactory> {};
    template<> struct hash<winrt::Windows::Devices::AllJoyn::IAllJoynSessionLostEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::IAllJoynSessionLostEventArgs> {};
    template<> struct hash<winrt::Windows::Devices::AllJoyn::IAllJoynSessionLostEventArgsFactory> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::IAllJoynSessionLostEventArgsFactory> {};
    template<> struct hash<winrt::Windows::Devices::AllJoyn::IAllJoynSessionMemberAddedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::IAllJoynSessionMemberAddedEventArgs> {};
    template<> struct hash<winrt::Windows::Devices::AllJoyn::IAllJoynSessionMemberAddedEventArgsFactory> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::IAllJoynSessionMemberAddedEventArgsFactory> {};
    template<> struct hash<winrt::Windows::Devices::AllJoyn::IAllJoynSessionMemberRemovedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::IAllJoynSessionMemberRemovedEventArgs> {};
    template<> struct hash<winrt::Windows::Devices::AllJoyn::IAllJoynSessionMemberRemovedEventArgsFactory> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::IAllJoynSessionMemberRemovedEventArgsFactory> {};
    template<> struct hash<winrt::Windows::Devices::AllJoyn::IAllJoynSessionStatics> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::IAllJoynSessionStatics> {};
    template<> struct hash<winrt::Windows::Devices::AllJoyn::IAllJoynStatusStatics> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::IAllJoynStatusStatics> {};
    template<> struct hash<winrt::Windows::Devices::AllJoyn::IAllJoynWatcherStoppedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::IAllJoynWatcherStoppedEventArgs> {};
    template<> struct hash<winrt::Windows::Devices::AllJoyn::IAllJoynWatcherStoppedEventArgsFactory> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::IAllJoynWatcherStoppedEventArgsFactory> {};
    template<> struct hash<winrt::Windows::Devices::AllJoyn::AllJoynAboutData> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::AllJoynAboutData> {};
    template<> struct hash<winrt::Windows::Devices::AllJoyn::AllJoynAboutDataView> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::AllJoynAboutDataView> {};
    template<> struct hash<winrt::Windows::Devices::AllJoyn::AllJoynAcceptSessionJoinerEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::AllJoynAcceptSessionJoinerEventArgs> {};
    template<> struct hash<winrt::Windows::Devices::AllJoyn::AllJoynAuthenticationCompleteEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::AllJoynAuthenticationCompleteEventArgs> {};
    template<> struct hash<winrt::Windows::Devices::AllJoyn::AllJoynBusAttachment> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::AllJoynBusAttachment> {};
    template<> struct hash<winrt::Windows::Devices::AllJoyn::AllJoynBusAttachmentStateChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::AllJoynBusAttachmentStateChangedEventArgs> {};
    template<> struct hash<winrt::Windows::Devices::AllJoyn::AllJoynBusObject> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::AllJoynBusObject> {};
    template<> struct hash<winrt::Windows::Devices::AllJoyn::AllJoynBusObjectStoppedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::AllJoynBusObjectStoppedEventArgs> {};
    template<> struct hash<winrt::Windows::Devices::AllJoyn::AllJoynCredentials> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::AllJoynCredentials> {};
    template<> struct hash<winrt::Windows::Devices::AllJoyn::AllJoynCredentialsRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::AllJoynCredentialsRequestedEventArgs> {};
    template<> struct hash<winrt::Windows::Devices::AllJoyn::AllJoynCredentialsVerificationRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::AllJoynCredentialsVerificationRequestedEventArgs> {};
    template<> struct hash<winrt::Windows::Devices::AllJoyn::AllJoynMessageInfo> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::AllJoynMessageInfo> {};
    template<> struct hash<winrt::Windows::Devices::AllJoyn::AllJoynProducerStoppedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::AllJoynProducerStoppedEventArgs> {};
    template<> struct hash<winrt::Windows::Devices::AllJoyn::AllJoynServiceInfo> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::AllJoynServiceInfo> {};
    template<> struct hash<winrt::Windows::Devices::AllJoyn::AllJoynServiceInfoRemovedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::AllJoynServiceInfoRemovedEventArgs> {};
    template<> struct hash<winrt::Windows::Devices::AllJoyn::AllJoynSession> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::AllJoynSession> {};
    template<> struct hash<winrt::Windows::Devices::AllJoyn::AllJoynSessionJoinedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::AllJoynSessionJoinedEventArgs> {};
    template<> struct hash<winrt::Windows::Devices::AllJoyn::AllJoynSessionLostEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::AllJoynSessionLostEventArgs> {};
    template<> struct hash<winrt::Windows::Devices::AllJoyn::AllJoynSessionMemberAddedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::AllJoynSessionMemberAddedEventArgs> {};
    template<> struct hash<winrt::Windows::Devices::AllJoyn::AllJoynSessionMemberRemovedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::AllJoynSessionMemberRemovedEventArgs> {};
    template<> struct hash<winrt::Windows::Devices::AllJoyn::AllJoynStatus> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::AllJoynStatus> {};
    template<> struct hash<winrt::Windows::Devices::AllJoyn::AllJoynWatcherStoppedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::AllJoynWatcherStoppedEventArgs> {};
}
#endif
