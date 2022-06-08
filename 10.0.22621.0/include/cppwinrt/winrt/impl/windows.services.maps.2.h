// C++/WinRT v2.0.220110.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_Services_Maps_2_H
#define WINRT_Windows_Services_Maps_2_H
#include "winrt/impl/Windows.Devices.Geolocation.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Services.Maps.1.h"
WINRT_EXPORT namespace winrt::Windows::Services::Maps
{
    struct __declspec(empty_bases) EnhancedWaypoint : winrt::Windows::Services::Maps::IEnhancedWaypoint
    {
        EnhancedWaypoint(std::nullptr_t) noexcept {}
        EnhancedWaypoint(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Services::Maps::IEnhancedWaypoint(ptr, take_ownership_from_abi) {}
        EnhancedWaypoint(winrt::Windows::Devices::Geolocation::Geopoint const& point, winrt::Windows::Services::Maps::WaypointKind const& kind);
    };
    struct __declspec(empty_bases) ManeuverWarning : winrt::Windows::Services::Maps::IManeuverWarning
    {
        ManeuverWarning(std::nullptr_t) noexcept {}
        ManeuverWarning(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Services::Maps::IManeuverWarning(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MapAddress : winrt::Windows::Services::Maps::IMapAddress,
        impl::require<MapAddress, winrt::Windows::Services::Maps::IMapAddress2>
    {
        MapAddress(std::nullptr_t) noexcept {}
        MapAddress(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Services::Maps::IMapAddress(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MapLocation : winrt::Windows::Services::Maps::IMapLocation
    {
        MapLocation(std::nullptr_t) noexcept {}
        MapLocation(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Services::Maps::IMapLocation(ptr, take_ownership_from_abi) {}
    };
    struct MapLocationFinder
    {
        MapLocationFinder() = delete;
        static auto FindLocationsAtAsync(winrt::Windows::Devices::Geolocation::Geopoint const& queryPoint);
        static auto FindLocationsAsync(param::hstring const& searchText, winrt::Windows::Devices::Geolocation::Geopoint const& referencePoint);
        static auto FindLocationsAsync(param::hstring const& searchText, winrt::Windows::Devices::Geolocation::Geopoint const& referencePoint, uint32_t maxCount);
        static auto FindLocationsAtAsync(winrt::Windows::Devices::Geolocation::Geopoint const& queryPoint, winrt::Windows::Services::Maps::MapLocationDesiredAccuracy const& accuracy);
    };
    struct __declspec(empty_bases) MapLocationFinderResult : winrt::Windows::Services::Maps::IMapLocationFinderResult
    {
        MapLocationFinderResult(std::nullptr_t) noexcept {}
        MapLocationFinderResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Services::Maps::IMapLocationFinderResult(ptr, take_ownership_from_abi) {}
    };
    struct MapManager
    {
        MapManager() = delete;
        static auto ShowDownloadedMapsUI();
        static auto ShowMapsUpdateUI();
    };
    struct __declspec(empty_bases) MapRoute : winrt::Windows::Services::Maps::IMapRoute,
        impl::require<MapRoute, winrt::Windows::Services::Maps::IMapRoute2, winrt::Windows::Services::Maps::IMapRoute3, winrt::Windows::Services::Maps::IMapRoute4>
    {
        MapRoute(std::nullptr_t) noexcept {}
        MapRoute(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Services::Maps::IMapRoute(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MapRouteDrivingOptions : winrt::Windows::Services::Maps::IMapRouteDrivingOptions,
        impl::require<MapRouteDrivingOptions, winrt::Windows::Services::Maps::IMapRouteDrivingOptions2>
    {
        MapRouteDrivingOptions(std::nullptr_t) noexcept {}
        MapRouteDrivingOptions(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Services::Maps::IMapRouteDrivingOptions(ptr, take_ownership_from_abi) {}
        MapRouteDrivingOptions();
    };
    struct MapRouteFinder
    {
        MapRouteFinder() = delete;
        static auto GetDrivingRouteAsync(winrt::Windows::Devices::Geolocation::Geopoint const& startPoint, winrt::Windows::Devices::Geolocation::Geopoint const& endPoint);
        static auto GetDrivingRouteAsync(winrt::Windows::Devices::Geolocation::Geopoint const& startPoint, winrt::Windows::Devices::Geolocation::Geopoint const& endPoint, winrt::Windows::Services::Maps::MapRouteOptimization const& optimization);
        static auto GetDrivingRouteAsync(winrt::Windows::Devices::Geolocation::Geopoint const& startPoint, winrt::Windows::Devices::Geolocation::Geopoint const& endPoint, winrt::Windows::Services::Maps::MapRouteOptimization const& optimization, winrt::Windows::Services::Maps::MapRouteRestrictions const& restrictions);
        static auto GetDrivingRouteAsync(winrt::Windows::Devices::Geolocation::Geopoint const& startPoint, winrt::Windows::Devices::Geolocation::Geopoint const& endPoint, winrt::Windows::Services::Maps::MapRouteOptimization const& optimization, winrt::Windows::Services::Maps::MapRouteRestrictions const& restrictions, double headingInDegrees);
        static auto GetDrivingRouteFromWaypointsAsync(param::async_iterable<winrt::Windows::Devices::Geolocation::Geopoint> const& wayPoints);
        static auto GetDrivingRouteFromWaypointsAsync(param::async_iterable<winrt::Windows::Devices::Geolocation::Geopoint> const& wayPoints, winrt::Windows::Services::Maps::MapRouteOptimization const& optimization);
        static auto GetDrivingRouteFromWaypointsAsync(param::async_iterable<winrt::Windows::Devices::Geolocation::Geopoint> const& wayPoints, winrt::Windows::Services::Maps::MapRouteOptimization const& optimization, winrt::Windows::Services::Maps::MapRouteRestrictions const& restrictions);
        static auto GetDrivingRouteFromWaypointsAsync(param::async_iterable<winrt::Windows::Devices::Geolocation::Geopoint> const& wayPoints, winrt::Windows::Services::Maps::MapRouteOptimization const& optimization, winrt::Windows::Services::Maps::MapRouteRestrictions const& restrictions, double headingInDegrees);
        static auto GetWalkingRouteAsync(winrt::Windows::Devices::Geolocation::Geopoint const& startPoint, winrt::Windows::Devices::Geolocation::Geopoint const& endPoint);
        static auto GetWalkingRouteFromWaypointsAsync(param::async_iterable<winrt::Windows::Devices::Geolocation::Geopoint> const& wayPoints);
        static auto GetDrivingRouteAsync(winrt::Windows::Devices::Geolocation::Geopoint const& startPoint, winrt::Windows::Devices::Geolocation::Geopoint const& endPoint, winrt::Windows::Services::Maps::MapRouteDrivingOptions const& options);
        static auto GetDrivingRouteFromEnhancedWaypointsAsync(param::async_iterable<winrt::Windows::Services::Maps::EnhancedWaypoint> const& waypoints);
        static auto GetDrivingRouteFromEnhancedWaypointsAsync(param::async_iterable<winrt::Windows::Services::Maps::EnhancedWaypoint> const& waypoints, winrt::Windows::Services::Maps::MapRouteDrivingOptions const& options);
    };
    struct __declspec(empty_bases) MapRouteFinderResult : winrt::Windows::Services::Maps::IMapRouteFinderResult,
        impl::require<MapRouteFinderResult, winrt::Windows::Services::Maps::IMapRouteFinderResult2>
    {
        MapRouteFinderResult(std::nullptr_t) noexcept {}
        MapRouteFinderResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Services::Maps::IMapRouteFinderResult(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MapRouteLeg : winrt::Windows::Services::Maps::IMapRouteLeg,
        impl::require<MapRouteLeg, winrt::Windows::Services::Maps::IMapRouteLeg2>
    {
        MapRouteLeg(std::nullptr_t) noexcept {}
        MapRouteLeg(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Services::Maps::IMapRouteLeg(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) MapRouteManeuver : winrt::Windows::Services::Maps::IMapRouteManeuver,
        impl::require<MapRouteManeuver, winrt::Windows::Services::Maps::IMapRouteManeuver2, winrt::Windows::Services::Maps::IMapRouteManeuver3>
    {
        MapRouteManeuver(std::nullptr_t) noexcept {}
        MapRouteManeuver(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Services::Maps::IMapRouteManeuver(ptr, take_ownership_from_abi) {}
    };
    struct MapService
    {
        MapService() = delete;
        static auto ServiceToken(param::hstring const& value);
        [[nodiscard]] static auto ServiceToken();
        [[nodiscard]] static auto WorldViewRegionCode();
        [[nodiscard]] static auto DataAttributions();
        static auto DataUsagePreference(winrt::Windows::Services::Maps::MapServiceDataUsagePreference const& value);
        [[nodiscard]] static auto DataUsagePreference();
    };
    struct __declspec(empty_bases) PlaceInfo : winrt::Windows::Services::Maps::IPlaceInfo
    {
        PlaceInfo(std::nullptr_t) noexcept {}
        PlaceInfo(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Services::Maps::IPlaceInfo(ptr, take_ownership_from_abi) {}
        static auto Create(winrt::Windows::Devices::Geolocation::Geopoint const& referencePoint);
        static auto Create(winrt::Windows::Devices::Geolocation::Geopoint const& referencePoint, winrt::Windows::Services::Maps::PlaceInfoCreateOptions const& options);
        static auto CreateFromIdentifier(param::hstring const& identifier);
        static auto CreateFromIdentifier(param::hstring const& identifier, winrt::Windows::Devices::Geolocation::Geopoint const& defaultPoint, winrt::Windows::Services::Maps::PlaceInfoCreateOptions const& options);
        static auto CreateFromMapLocation(winrt::Windows::Services::Maps::MapLocation const& location);
        [[nodiscard]] static auto IsShowSupported();
        static auto CreateFromAddress(param::hstring const& displayAddress);
        static auto CreateFromAddress(param::hstring const& displayAddress, param::hstring const& displayName);
    };
    struct __declspec(empty_bases) PlaceInfoCreateOptions : winrt::Windows::Services::Maps::IPlaceInfoCreateOptions
    {
        PlaceInfoCreateOptions(std::nullptr_t) noexcept {}
        PlaceInfoCreateOptions(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Services::Maps::IPlaceInfoCreateOptions(ptr, take_ownership_from_abi) {}
        PlaceInfoCreateOptions();
    };
}
#endif
