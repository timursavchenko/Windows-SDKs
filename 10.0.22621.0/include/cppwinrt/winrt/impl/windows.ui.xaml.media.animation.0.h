// C++/WinRT v2.0.220110.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_UI_Xaml_Media_Animation_0_H
#define WINRT_Windows_UI_Xaml_Media_Animation_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    template <typename T> struct __declspec(empty_bases) EventHandler;
    struct EventRegistrationToken;
    template <typename T> struct __declspec(empty_bases) IReference;
    struct Point;
    template <typename TSender, typename TResult> struct __declspec(empty_bases) TypedEventHandler;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct __declspec(empty_bases) IIterable;
    template <typename T> struct __declspec(empty_bases) IVector;
}
WINRT_EXPORT namespace winrt::Windows::UI
{
    struct Color;
}
WINRT_EXPORT namespace winrt::Windows::UI::Composition
{
    struct CompositionEasingFunction;
    struct ICompositionAnimationBase;
}
WINRT_EXPORT namespace winrt::Windows::UI::Xaml
{
    struct DependencyObject;
    struct DependencyProperty;
    struct Duration;
    struct UIElement;
}
WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Controls
{
    struct ListViewBase;
}
WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Controls::Primitives
{
    enum class AnimationDirection : int32_t;
    enum class EdgeTransitionLocation : int32_t;
}
WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Media::Animation
{
    enum class ClockState : int32_t
    {
        Active = 0,
        Filling = 1,
        Stopped = 2,
    };
    enum class ConnectedAnimationComponent : int32_t
    {
        OffsetX = 0,
        OffsetY = 1,
        CrossFade = 2,
        Scale = 3,
    };
    enum class EasingMode : int32_t
    {
        EaseOut = 0,
        EaseIn = 1,
        EaseInOut = 2,
    };
    enum class FillBehavior : int32_t
    {
        HoldEnd = 0,
        Stop = 1,
    };
    enum class RepeatBehaviorType : int32_t
    {
        Count = 0,
        Duration = 1,
        Forever = 2,
    };
    enum class SlideNavigationTransitionEffect : int32_t
    {
        FromBottom = 0,
        FromLeft = 1,
        FromRight = 2,
    };
    struct IAddDeleteThemeTransition;
    struct IBackEase;
    struct IBackEaseStatics;
    struct IBasicConnectedAnimationConfiguration;
    struct IBasicConnectedAnimationConfigurationFactory;
    struct IBeginStoryboard;
    struct IBeginStoryboardStatics;
    struct IBounceEase;
    struct IBounceEaseStatics;
    struct ICircleEase;
    struct IColorAnimation;
    struct IColorAnimationStatics;
    struct IColorAnimationUsingKeyFrames;
    struct IColorAnimationUsingKeyFramesStatics;
    struct IColorKeyFrame;
    struct IColorKeyFrameFactory;
    struct IColorKeyFrameStatics;
    struct ICommonNavigationTransitionInfo;
    struct ICommonNavigationTransitionInfoStatics;
    struct IConnectedAnimation;
    struct IConnectedAnimation2;
    struct IConnectedAnimation3;
    struct IConnectedAnimationConfiguration;
    struct IConnectedAnimationConfigurationFactory;
    struct IConnectedAnimationService;
    struct IConnectedAnimationServiceStatics;
    struct IContentThemeTransition;
    struct IContentThemeTransitionStatics;
    struct IContinuumNavigationTransitionInfo;
    struct IContinuumNavigationTransitionInfoStatics;
    struct ICubicEase;
    struct IDirectConnectedAnimationConfiguration;
    struct IDirectConnectedAnimationConfigurationFactory;
    struct IDiscreteColorKeyFrame;
    struct IDiscreteDoubleKeyFrame;
    struct IDiscreteObjectKeyFrame;
    struct IDiscretePointKeyFrame;
    struct IDoubleAnimation;
    struct IDoubleAnimationStatics;
    struct IDoubleAnimationUsingKeyFrames;
    struct IDoubleAnimationUsingKeyFramesStatics;
    struct IDoubleKeyFrame;
    struct IDoubleKeyFrameFactory;
    struct IDoubleKeyFrameStatics;
    struct IDragItemThemeAnimation;
    struct IDragItemThemeAnimationStatics;
    struct IDragOverThemeAnimation;
    struct IDragOverThemeAnimationStatics;
    struct IDrillInNavigationTransitionInfo;
    struct IDrillInThemeAnimation;
    struct IDrillInThemeAnimationStatics;
    struct IDrillOutThemeAnimation;
    struct IDrillOutThemeAnimationStatics;
    struct IDropTargetItemThemeAnimation;
    struct IDropTargetItemThemeAnimationStatics;
    struct IEasingColorKeyFrame;
    struct IEasingColorKeyFrameStatics;
    struct IEasingDoubleKeyFrame;
    struct IEasingDoubleKeyFrameStatics;
    struct IEasingFunctionBase;
    struct IEasingFunctionBaseFactory;
    struct IEasingFunctionBaseStatics;
    struct IEasingPointKeyFrame;
    struct IEasingPointKeyFrameStatics;
    struct IEdgeUIThemeTransition;
    struct IEdgeUIThemeTransitionStatics;
    struct IElasticEase;
    struct IElasticEaseStatics;
    struct IEntranceNavigationTransitionInfo;
    struct IEntranceNavigationTransitionInfoStatics;
    struct IEntranceThemeTransition;
    struct IEntranceThemeTransitionStatics;
    struct IExponentialEase;
    struct IExponentialEaseStatics;
    struct IFadeInThemeAnimation;
    struct IFadeInThemeAnimationStatics;
    struct IFadeOutThemeAnimation;
    struct IFadeOutThemeAnimationStatics;
    struct IGravityConnectedAnimationConfiguration;
    struct IGravityConnectedAnimationConfiguration2;
    struct IGravityConnectedAnimationConfigurationFactory;
    struct IKeySpline;
    struct IKeyTimeHelper;
    struct IKeyTimeHelperStatics;
    struct ILinearColorKeyFrame;
    struct ILinearDoubleKeyFrame;
    struct ILinearPointKeyFrame;
    struct INavigationThemeTransition;
    struct INavigationThemeTransitionStatics;
    struct INavigationTransitionInfo;
    struct INavigationTransitionInfoFactory;
    struct INavigationTransitionInfoOverrides;
    struct IObjectAnimationUsingKeyFrames;
    struct IObjectAnimationUsingKeyFramesStatics;
    struct IObjectKeyFrame;
    struct IObjectKeyFrameFactory;
    struct IObjectKeyFrameStatics;
    struct IPaneThemeTransition;
    struct IPaneThemeTransitionStatics;
    struct IPointAnimation;
    struct IPointAnimationStatics;
    struct IPointAnimationUsingKeyFrames;
    struct IPointAnimationUsingKeyFramesStatics;
    struct IPointKeyFrame;
    struct IPointKeyFrameFactory;
    struct IPointKeyFrameStatics;
    struct IPointerDownThemeAnimation;
    struct IPointerDownThemeAnimationStatics;
    struct IPointerUpThemeAnimation;
    struct IPointerUpThemeAnimationStatics;
    struct IPopInThemeAnimation;
    struct IPopInThemeAnimationStatics;
    struct IPopOutThemeAnimation;
    struct IPopOutThemeAnimationStatics;
    struct IPopupThemeTransition;
    struct IPopupThemeTransitionStatics;
    struct IPowerEase;
    struct IPowerEaseStatics;
    struct IQuadraticEase;
    struct IQuarticEase;
    struct IQuinticEase;
    struct IReorderThemeTransition;
    struct IRepeatBehaviorHelper;
    struct IRepeatBehaviorHelperStatics;
    struct IRepositionThemeAnimation;
    struct IRepositionThemeAnimationStatics;
    struct IRepositionThemeTransition;
    struct IRepositionThemeTransition2;
    struct IRepositionThemeTransitionStatics2;
    struct ISineEase;
    struct ISlideNavigationTransitionInfo;
    struct ISlideNavigationTransitionInfo2;
    struct ISlideNavigationTransitionInfoStatics2;
    struct ISplineColorKeyFrame;
    struct ISplineColorKeyFrameStatics;
    struct ISplineDoubleKeyFrame;
    struct ISplineDoubleKeyFrameStatics;
    struct ISplinePointKeyFrame;
    struct ISplinePointKeyFrameStatics;
    struct ISplitCloseThemeAnimation;
    struct ISplitCloseThemeAnimationStatics;
    struct ISplitOpenThemeAnimation;
    struct ISplitOpenThemeAnimationStatics;
    struct IStoryboard;
    struct IStoryboardStatics;
    struct ISuppressNavigationTransitionInfo;
    struct ISwipeBackThemeAnimation;
    struct ISwipeBackThemeAnimationStatics;
    struct ISwipeHintThemeAnimation;
    struct ISwipeHintThemeAnimationStatics;
    struct ITimeline;
    struct ITimelineFactory;
    struct ITimelineStatics;
    struct ITransition;
    struct ITransitionFactory;
    struct AddDeleteThemeTransition;
    struct BackEase;
    struct BasicConnectedAnimationConfiguration;
    struct BeginStoryboard;
    struct BounceEase;
    struct CircleEase;
    struct ColorAnimation;
    struct ColorAnimationUsingKeyFrames;
    struct ColorKeyFrame;
    struct ColorKeyFrameCollection;
    struct CommonNavigationTransitionInfo;
    struct ConnectedAnimation;
    struct ConnectedAnimationConfiguration;
    struct ConnectedAnimationService;
    struct ContentThemeTransition;
    struct ContinuumNavigationTransitionInfo;
    struct CubicEase;
    struct DirectConnectedAnimationConfiguration;
    struct DiscreteColorKeyFrame;
    struct DiscreteDoubleKeyFrame;
    struct DiscreteObjectKeyFrame;
    struct DiscretePointKeyFrame;
    struct DoubleAnimation;
    struct DoubleAnimationUsingKeyFrames;
    struct DoubleKeyFrame;
    struct DoubleKeyFrameCollection;
    struct DragItemThemeAnimation;
    struct DragOverThemeAnimation;
    struct DrillInNavigationTransitionInfo;
    struct DrillInThemeAnimation;
    struct DrillOutThemeAnimation;
    struct DropTargetItemThemeAnimation;
    struct EasingColorKeyFrame;
    struct EasingDoubleKeyFrame;
    struct EasingFunctionBase;
    struct EasingPointKeyFrame;
    struct EdgeUIThemeTransition;
    struct ElasticEase;
    struct EntranceNavigationTransitionInfo;
    struct EntranceThemeTransition;
    struct ExponentialEase;
    struct FadeInThemeAnimation;
    struct FadeOutThemeAnimation;
    struct GravityConnectedAnimationConfiguration;
    struct KeySpline;
    struct KeyTimeHelper;
    struct LinearColorKeyFrame;
    struct LinearDoubleKeyFrame;
    struct LinearPointKeyFrame;
    struct NavigationThemeTransition;
    struct NavigationTransitionInfo;
    struct ObjectAnimationUsingKeyFrames;
    struct ObjectKeyFrame;
    struct ObjectKeyFrameCollection;
    struct PaneThemeTransition;
    struct PointAnimation;
    struct PointAnimationUsingKeyFrames;
    struct PointKeyFrame;
    struct PointKeyFrameCollection;
    struct PointerDownThemeAnimation;
    struct PointerUpThemeAnimation;
    struct PopInThemeAnimation;
    struct PopOutThemeAnimation;
    struct PopupThemeTransition;
    struct PowerEase;
    struct QuadraticEase;
    struct QuarticEase;
    struct QuinticEase;
    struct ReorderThemeTransition;
    struct RepeatBehaviorHelper;
    struct RepositionThemeAnimation;
    struct RepositionThemeTransition;
    struct SineEase;
    struct SlideNavigationTransitionInfo;
    struct SplineColorKeyFrame;
    struct SplineDoubleKeyFrame;
    struct SplinePointKeyFrame;
    struct SplitCloseThemeAnimation;
    struct SplitOpenThemeAnimation;
    struct Storyboard;
    struct SuppressNavigationTransitionInfo;
    struct SwipeBackThemeAnimation;
    struct SwipeHintThemeAnimation;
    struct Timeline;
    struct TimelineCollection;
    struct Transition;
    struct TransitionCollection;
    struct KeyTime;
    struct RepeatBehavior;
}
namespace winrt::impl
{
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IAddDeleteThemeTransition>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IBackEase>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IBackEaseStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IBasicConnectedAnimationConfiguration>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IBasicConnectedAnimationConfigurationFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IBeginStoryboard>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IBeginStoryboardStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IBounceEase>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IBounceEaseStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::ICircleEase>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IColorAnimation>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IColorAnimationStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IColorAnimationUsingKeyFrames>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IColorAnimationUsingKeyFramesStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IColorKeyFrame>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IColorKeyFrameFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IColorKeyFrameStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::ICommonNavigationTransitionInfo>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::ICommonNavigationTransitionInfoStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IConnectedAnimation>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IConnectedAnimation2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IConnectedAnimation3>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IConnectedAnimationConfiguration>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IConnectedAnimationConfigurationFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IConnectedAnimationService>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IConnectedAnimationServiceStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IContentThemeTransition>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IContentThemeTransitionStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IContinuumNavigationTransitionInfo>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IContinuumNavigationTransitionInfoStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::ICubicEase>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IDirectConnectedAnimationConfiguration>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IDirectConnectedAnimationConfigurationFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IDiscreteColorKeyFrame>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IDiscreteDoubleKeyFrame>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IDiscreteObjectKeyFrame>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IDiscretePointKeyFrame>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IDoubleAnimation>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IDoubleAnimationStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IDoubleAnimationUsingKeyFrames>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IDoubleAnimationUsingKeyFramesStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IDoubleKeyFrame>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IDoubleKeyFrameFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IDoubleKeyFrameStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IDragItemThemeAnimation>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IDragItemThemeAnimationStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IDragOverThemeAnimation>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IDragOverThemeAnimationStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IDrillInNavigationTransitionInfo>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IDrillInThemeAnimation>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IDrillInThemeAnimationStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IDrillOutThemeAnimation>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IDrillOutThemeAnimationStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IDropTargetItemThemeAnimation>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IDropTargetItemThemeAnimationStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IEasingColorKeyFrame>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IEasingColorKeyFrameStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IEasingDoubleKeyFrame>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IEasingDoubleKeyFrameStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IEasingFunctionBase>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IEasingFunctionBaseFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IEasingFunctionBaseStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IEasingPointKeyFrame>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IEasingPointKeyFrameStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IEdgeUIThemeTransition>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IEdgeUIThemeTransitionStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IElasticEase>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IElasticEaseStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IEntranceNavigationTransitionInfo>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IEntranceNavigationTransitionInfoStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IEntranceThemeTransition>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IEntranceThemeTransitionStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IExponentialEase>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IExponentialEaseStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IFadeInThemeAnimation>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IFadeInThemeAnimationStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IFadeOutThemeAnimation>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IFadeOutThemeAnimationStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IGravityConnectedAnimationConfiguration>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IGravityConnectedAnimationConfiguration2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IGravityConnectedAnimationConfigurationFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IKeySpline>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IKeyTimeHelper>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IKeyTimeHelperStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::ILinearColorKeyFrame>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::ILinearDoubleKeyFrame>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::ILinearPointKeyFrame>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::INavigationThemeTransition>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::INavigationThemeTransitionStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::INavigationTransitionInfo>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::INavigationTransitionInfoFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::INavigationTransitionInfoOverrides>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IObjectAnimationUsingKeyFrames>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IObjectAnimationUsingKeyFramesStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IObjectKeyFrame>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IObjectKeyFrameFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IObjectKeyFrameStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IPaneThemeTransition>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IPaneThemeTransitionStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IPointAnimation>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IPointAnimationStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IPointAnimationUsingKeyFrames>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IPointAnimationUsingKeyFramesStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IPointKeyFrame>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IPointKeyFrameFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IPointKeyFrameStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IPointerDownThemeAnimation>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IPointerDownThemeAnimationStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IPointerUpThemeAnimation>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IPointerUpThemeAnimationStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IPopInThemeAnimation>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IPopInThemeAnimationStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IPopOutThemeAnimation>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IPopOutThemeAnimationStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IPopupThemeTransition>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IPopupThemeTransitionStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IPowerEase>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IPowerEaseStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IQuadraticEase>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IQuarticEase>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IQuinticEase>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IReorderThemeTransition>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IRepeatBehaviorHelper>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IRepeatBehaviorHelperStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IRepositionThemeAnimation>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IRepositionThemeAnimationStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IRepositionThemeTransition>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IRepositionThemeTransition2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IRepositionThemeTransitionStatics2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::ISineEase>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::ISlideNavigationTransitionInfo>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::ISlideNavigationTransitionInfo2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::ISlideNavigationTransitionInfoStatics2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::ISplineColorKeyFrame>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::ISplineColorKeyFrameStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::ISplineDoubleKeyFrame>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::ISplineDoubleKeyFrameStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::ISplinePointKeyFrame>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::ISplinePointKeyFrameStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::ISplitCloseThemeAnimation>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::ISplitCloseThemeAnimationStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::ISplitOpenThemeAnimation>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::ISplitOpenThemeAnimationStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IStoryboard>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::IStoryboardStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::ISuppressNavigationTransitionInfo>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::ISwipeBackThemeAnimation>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::ISwipeBackThemeAnimationStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::ISwipeHintThemeAnimation>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::ISwipeHintThemeAnimationStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::ITimeline>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::ITimelineFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::ITimelineStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::ITransition>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::ITransitionFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::AddDeleteThemeTransition>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::BackEase>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::BasicConnectedAnimationConfiguration>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::BeginStoryboard>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::BounceEase>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::CircleEase>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::ColorAnimation>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::ColorAnimationUsingKeyFrames>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::ColorKeyFrame>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::ColorKeyFrameCollection>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::CommonNavigationTransitionInfo>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::ConnectedAnimation>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::ConnectedAnimationConfiguration>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::ConnectedAnimationService>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::ContentThemeTransition>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::ContinuumNavigationTransitionInfo>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::CubicEase>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::DirectConnectedAnimationConfiguration>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::DiscreteColorKeyFrame>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::DiscreteDoubleKeyFrame>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::DiscreteObjectKeyFrame>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::DiscretePointKeyFrame>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::DoubleAnimation>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::DoubleAnimationUsingKeyFrames>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::DoubleKeyFrame>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::DoubleKeyFrameCollection>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::DragItemThemeAnimation>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::DragOverThemeAnimation>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::DrillInNavigationTransitionInfo>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::DrillInThemeAnimation>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::DrillOutThemeAnimation>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::DropTargetItemThemeAnimation>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::EasingColorKeyFrame>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::EasingDoubleKeyFrame>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::EasingFunctionBase>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::EasingPointKeyFrame>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::EdgeUIThemeTransition>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::ElasticEase>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::EntranceNavigationTransitionInfo>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::EntranceThemeTransition>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::ExponentialEase>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::FadeInThemeAnimation>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::FadeOutThemeAnimation>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::GravityConnectedAnimationConfiguration>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::KeySpline>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::KeyTimeHelper>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::LinearColorKeyFrame>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::LinearDoubleKeyFrame>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::LinearPointKeyFrame>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::NavigationThemeTransition>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::NavigationTransitionInfo>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::ObjectAnimationUsingKeyFrames>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::ObjectKeyFrame>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::ObjectKeyFrameCollection>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::PaneThemeTransition>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::PointAnimation>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::PointAnimationUsingKeyFrames>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::PointKeyFrame>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::PointKeyFrameCollection>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::PointerDownThemeAnimation>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::PointerUpThemeAnimation>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::PopInThemeAnimation>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::PopOutThemeAnimation>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::PopupThemeTransition>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::PowerEase>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::QuadraticEase>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::QuarticEase>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::QuinticEase>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::ReorderThemeTransition>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::RepeatBehaviorHelper>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::RepositionThemeAnimation>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::RepositionThemeTransition>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::SineEase>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::SlideNavigationTransitionInfo>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::SplineColorKeyFrame>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::SplineDoubleKeyFrame>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::SplinePointKeyFrame>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::SplitCloseThemeAnimation>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::SplitOpenThemeAnimation>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::Storyboard>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::SuppressNavigationTransitionInfo>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::SwipeBackThemeAnimation>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::SwipeHintThemeAnimation>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::Timeline>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::TimelineCollection>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::Transition>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::TransitionCollection>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::ClockState>{ using type = enum_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::ConnectedAnimationComponent>{ using type = enum_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::EasingMode>{ using type = enum_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::FillBehavior>{ using type = enum_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::RepeatBehaviorType>{ using type = enum_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::SlideNavigationTransitionEffect>{ using type = enum_category; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::KeyTime>{ using type = struct_category<winrt::Windows::Foundation::TimeSpan>; };
    template <> struct category<winrt::Windows::UI::Xaml::Media::Animation::RepeatBehavior>{ using type = struct_category<double, winrt::Windows::Foundation::TimeSpan, winrt::Windows::UI::Xaml::Media::Animation::RepeatBehaviorType>; };
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::AddDeleteThemeTransition> = L"Windows.UI.Xaml.Media.Animation.AddDeleteThemeTransition";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::BackEase> = L"Windows.UI.Xaml.Media.Animation.BackEase";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::BasicConnectedAnimationConfiguration> = L"Windows.UI.Xaml.Media.Animation.BasicConnectedAnimationConfiguration";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::BeginStoryboard> = L"Windows.UI.Xaml.Media.Animation.BeginStoryboard";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::BounceEase> = L"Windows.UI.Xaml.Media.Animation.BounceEase";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::CircleEase> = L"Windows.UI.Xaml.Media.Animation.CircleEase";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::ColorAnimation> = L"Windows.UI.Xaml.Media.Animation.ColorAnimation";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::ColorAnimationUsingKeyFrames> = L"Windows.UI.Xaml.Media.Animation.ColorAnimationUsingKeyFrames";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::ColorKeyFrame> = L"Windows.UI.Xaml.Media.Animation.ColorKeyFrame";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::ColorKeyFrameCollection> = L"Windows.UI.Xaml.Media.Animation.ColorKeyFrameCollection";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::CommonNavigationTransitionInfo> = L"Windows.UI.Xaml.Media.Animation.CommonNavigationTransitionInfo";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::ConnectedAnimation> = L"Windows.UI.Xaml.Media.Animation.ConnectedAnimation";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::ConnectedAnimationConfiguration> = L"Windows.UI.Xaml.Media.Animation.ConnectedAnimationConfiguration";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::ConnectedAnimationService> = L"Windows.UI.Xaml.Media.Animation.ConnectedAnimationService";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::ContentThemeTransition> = L"Windows.UI.Xaml.Media.Animation.ContentThemeTransition";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::ContinuumNavigationTransitionInfo> = L"Windows.UI.Xaml.Media.Animation.ContinuumNavigationTransitionInfo";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::CubicEase> = L"Windows.UI.Xaml.Media.Animation.CubicEase";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::DirectConnectedAnimationConfiguration> = L"Windows.UI.Xaml.Media.Animation.DirectConnectedAnimationConfiguration";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::DiscreteColorKeyFrame> = L"Windows.UI.Xaml.Media.Animation.DiscreteColorKeyFrame";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::DiscreteDoubleKeyFrame> = L"Windows.UI.Xaml.Media.Animation.DiscreteDoubleKeyFrame";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::DiscreteObjectKeyFrame> = L"Windows.UI.Xaml.Media.Animation.DiscreteObjectKeyFrame";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::DiscretePointKeyFrame> = L"Windows.UI.Xaml.Media.Animation.DiscretePointKeyFrame";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::DoubleAnimation> = L"Windows.UI.Xaml.Media.Animation.DoubleAnimation";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::DoubleAnimationUsingKeyFrames> = L"Windows.UI.Xaml.Media.Animation.DoubleAnimationUsingKeyFrames";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::DoubleKeyFrame> = L"Windows.UI.Xaml.Media.Animation.DoubleKeyFrame";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::DoubleKeyFrameCollection> = L"Windows.UI.Xaml.Media.Animation.DoubleKeyFrameCollection";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::DragItemThemeAnimation> = L"Windows.UI.Xaml.Media.Animation.DragItemThemeAnimation";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::DragOverThemeAnimation> = L"Windows.UI.Xaml.Media.Animation.DragOverThemeAnimation";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::DrillInNavigationTransitionInfo> = L"Windows.UI.Xaml.Media.Animation.DrillInNavigationTransitionInfo";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::DrillInThemeAnimation> = L"Windows.UI.Xaml.Media.Animation.DrillInThemeAnimation";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::DrillOutThemeAnimation> = L"Windows.UI.Xaml.Media.Animation.DrillOutThemeAnimation";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::DropTargetItemThemeAnimation> = L"Windows.UI.Xaml.Media.Animation.DropTargetItemThemeAnimation";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::EasingColorKeyFrame> = L"Windows.UI.Xaml.Media.Animation.EasingColorKeyFrame";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::EasingDoubleKeyFrame> = L"Windows.UI.Xaml.Media.Animation.EasingDoubleKeyFrame";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::EasingFunctionBase> = L"Windows.UI.Xaml.Media.Animation.EasingFunctionBase";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::EasingPointKeyFrame> = L"Windows.UI.Xaml.Media.Animation.EasingPointKeyFrame";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::EdgeUIThemeTransition> = L"Windows.UI.Xaml.Media.Animation.EdgeUIThemeTransition";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::ElasticEase> = L"Windows.UI.Xaml.Media.Animation.ElasticEase";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::EntranceNavigationTransitionInfo> = L"Windows.UI.Xaml.Media.Animation.EntranceNavigationTransitionInfo";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::EntranceThemeTransition> = L"Windows.UI.Xaml.Media.Animation.EntranceThemeTransition";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::ExponentialEase> = L"Windows.UI.Xaml.Media.Animation.ExponentialEase";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::FadeInThemeAnimation> = L"Windows.UI.Xaml.Media.Animation.FadeInThemeAnimation";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::FadeOutThemeAnimation> = L"Windows.UI.Xaml.Media.Animation.FadeOutThemeAnimation";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::GravityConnectedAnimationConfiguration> = L"Windows.UI.Xaml.Media.Animation.GravityConnectedAnimationConfiguration";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::KeySpline> = L"Windows.UI.Xaml.Media.Animation.KeySpline";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::KeyTimeHelper> = L"Windows.UI.Xaml.Media.Animation.KeyTimeHelper";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::LinearColorKeyFrame> = L"Windows.UI.Xaml.Media.Animation.LinearColorKeyFrame";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::LinearDoubleKeyFrame> = L"Windows.UI.Xaml.Media.Animation.LinearDoubleKeyFrame";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::LinearPointKeyFrame> = L"Windows.UI.Xaml.Media.Animation.LinearPointKeyFrame";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::NavigationThemeTransition> = L"Windows.UI.Xaml.Media.Animation.NavigationThemeTransition";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::NavigationTransitionInfo> = L"Windows.UI.Xaml.Media.Animation.NavigationTransitionInfo";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::ObjectAnimationUsingKeyFrames> = L"Windows.UI.Xaml.Media.Animation.ObjectAnimationUsingKeyFrames";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::ObjectKeyFrame> = L"Windows.UI.Xaml.Media.Animation.ObjectKeyFrame";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::ObjectKeyFrameCollection> = L"Windows.UI.Xaml.Media.Animation.ObjectKeyFrameCollection";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::PaneThemeTransition> = L"Windows.UI.Xaml.Media.Animation.PaneThemeTransition";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::PointAnimation> = L"Windows.UI.Xaml.Media.Animation.PointAnimation";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::PointAnimationUsingKeyFrames> = L"Windows.UI.Xaml.Media.Animation.PointAnimationUsingKeyFrames";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::PointKeyFrame> = L"Windows.UI.Xaml.Media.Animation.PointKeyFrame";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::PointKeyFrameCollection> = L"Windows.UI.Xaml.Media.Animation.PointKeyFrameCollection";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::PointerDownThemeAnimation> = L"Windows.UI.Xaml.Media.Animation.PointerDownThemeAnimation";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::PointerUpThemeAnimation> = L"Windows.UI.Xaml.Media.Animation.PointerUpThemeAnimation";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::PopInThemeAnimation> = L"Windows.UI.Xaml.Media.Animation.PopInThemeAnimation";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::PopOutThemeAnimation> = L"Windows.UI.Xaml.Media.Animation.PopOutThemeAnimation";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::PopupThemeTransition> = L"Windows.UI.Xaml.Media.Animation.PopupThemeTransition";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::PowerEase> = L"Windows.UI.Xaml.Media.Animation.PowerEase";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::QuadraticEase> = L"Windows.UI.Xaml.Media.Animation.QuadraticEase";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::QuarticEase> = L"Windows.UI.Xaml.Media.Animation.QuarticEase";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::QuinticEase> = L"Windows.UI.Xaml.Media.Animation.QuinticEase";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::ReorderThemeTransition> = L"Windows.UI.Xaml.Media.Animation.ReorderThemeTransition";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::RepeatBehaviorHelper> = L"Windows.UI.Xaml.Media.Animation.RepeatBehaviorHelper";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::RepositionThemeAnimation> = L"Windows.UI.Xaml.Media.Animation.RepositionThemeAnimation";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::RepositionThemeTransition> = L"Windows.UI.Xaml.Media.Animation.RepositionThemeTransition";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::SineEase> = L"Windows.UI.Xaml.Media.Animation.SineEase";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::SlideNavigationTransitionInfo> = L"Windows.UI.Xaml.Media.Animation.SlideNavigationTransitionInfo";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::SplineColorKeyFrame> = L"Windows.UI.Xaml.Media.Animation.SplineColorKeyFrame";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::SplineDoubleKeyFrame> = L"Windows.UI.Xaml.Media.Animation.SplineDoubleKeyFrame";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::SplinePointKeyFrame> = L"Windows.UI.Xaml.Media.Animation.SplinePointKeyFrame";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::SplitCloseThemeAnimation> = L"Windows.UI.Xaml.Media.Animation.SplitCloseThemeAnimation";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::SplitOpenThemeAnimation> = L"Windows.UI.Xaml.Media.Animation.SplitOpenThemeAnimation";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::Storyboard> = L"Windows.UI.Xaml.Media.Animation.Storyboard";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::SuppressNavigationTransitionInfo> = L"Windows.UI.Xaml.Media.Animation.SuppressNavigationTransitionInfo";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::SwipeBackThemeAnimation> = L"Windows.UI.Xaml.Media.Animation.SwipeBackThemeAnimation";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::SwipeHintThemeAnimation> = L"Windows.UI.Xaml.Media.Animation.SwipeHintThemeAnimation";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::Timeline> = L"Windows.UI.Xaml.Media.Animation.Timeline";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::TimelineCollection> = L"Windows.UI.Xaml.Media.Animation.TimelineCollection";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::Transition> = L"Windows.UI.Xaml.Media.Animation.Transition";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::TransitionCollection> = L"Windows.UI.Xaml.Media.Animation.TransitionCollection";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::ClockState> = L"Windows.UI.Xaml.Media.Animation.ClockState";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::ConnectedAnimationComponent> = L"Windows.UI.Xaml.Media.Animation.ConnectedAnimationComponent";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::EasingMode> = L"Windows.UI.Xaml.Media.Animation.EasingMode";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::FillBehavior> = L"Windows.UI.Xaml.Media.Animation.FillBehavior";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::RepeatBehaviorType> = L"Windows.UI.Xaml.Media.Animation.RepeatBehaviorType";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::SlideNavigationTransitionEffect> = L"Windows.UI.Xaml.Media.Animation.SlideNavigationTransitionEffect";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::KeyTime> = L"Windows.UI.Xaml.Media.Animation.KeyTime";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::RepeatBehavior> = L"Windows.UI.Xaml.Media.Animation.RepeatBehavior";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IAddDeleteThemeTransition> = L"Windows.UI.Xaml.Media.Animation.IAddDeleteThemeTransition";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IBackEase> = L"Windows.UI.Xaml.Media.Animation.IBackEase";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IBackEaseStatics> = L"Windows.UI.Xaml.Media.Animation.IBackEaseStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IBasicConnectedAnimationConfiguration> = L"Windows.UI.Xaml.Media.Animation.IBasicConnectedAnimationConfiguration";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IBasicConnectedAnimationConfigurationFactory> = L"Windows.UI.Xaml.Media.Animation.IBasicConnectedAnimationConfigurationFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IBeginStoryboard> = L"Windows.UI.Xaml.Media.Animation.IBeginStoryboard";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IBeginStoryboardStatics> = L"Windows.UI.Xaml.Media.Animation.IBeginStoryboardStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IBounceEase> = L"Windows.UI.Xaml.Media.Animation.IBounceEase";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IBounceEaseStatics> = L"Windows.UI.Xaml.Media.Animation.IBounceEaseStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::ICircleEase> = L"Windows.UI.Xaml.Media.Animation.ICircleEase";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IColorAnimation> = L"Windows.UI.Xaml.Media.Animation.IColorAnimation";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IColorAnimationStatics> = L"Windows.UI.Xaml.Media.Animation.IColorAnimationStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IColorAnimationUsingKeyFrames> = L"Windows.UI.Xaml.Media.Animation.IColorAnimationUsingKeyFrames";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IColorAnimationUsingKeyFramesStatics> = L"Windows.UI.Xaml.Media.Animation.IColorAnimationUsingKeyFramesStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IColorKeyFrame> = L"Windows.UI.Xaml.Media.Animation.IColorKeyFrame";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IColorKeyFrameFactory> = L"Windows.UI.Xaml.Media.Animation.IColorKeyFrameFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IColorKeyFrameStatics> = L"Windows.UI.Xaml.Media.Animation.IColorKeyFrameStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::ICommonNavigationTransitionInfo> = L"Windows.UI.Xaml.Media.Animation.ICommonNavigationTransitionInfo";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::ICommonNavigationTransitionInfoStatics> = L"Windows.UI.Xaml.Media.Animation.ICommonNavigationTransitionInfoStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IConnectedAnimation> = L"Windows.UI.Xaml.Media.Animation.IConnectedAnimation";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IConnectedAnimation2> = L"Windows.UI.Xaml.Media.Animation.IConnectedAnimation2";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IConnectedAnimation3> = L"Windows.UI.Xaml.Media.Animation.IConnectedAnimation3";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IConnectedAnimationConfiguration> = L"Windows.UI.Xaml.Media.Animation.IConnectedAnimationConfiguration";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IConnectedAnimationConfigurationFactory> = L"Windows.UI.Xaml.Media.Animation.IConnectedAnimationConfigurationFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IConnectedAnimationService> = L"Windows.UI.Xaml.Media.Animation.IConnectedAnimationService";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IConnectedAnimationServiceStatics> = L"Windows.UI.Xaml.Media.Animation.IConnectedAnimationServiceStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IContentThemeTransition> = L"Windows.UI.Xaml.Media.Animation.IContentThemeTransition";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IContentThemeTransitionStatics> = L"Windows.UI.Xaml.Media.Animation.IContentThemeTransitionStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IContinuumNavigationTransitionInfo> = L"Windows.UI.Xaml.Media.Animation.IContinuumNavigationTransitionInfo";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IContinuumNavigationTransitionInfoStatics> = L"Windows.UI.Xaml.Media.Animation.IContinuumNavigationTransitionInfoStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::ICubicEase> = L"Windows.UI.Xaml.Media.Animation.ICubicEase";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IDirectConnectedAnimationConfiguration> = L"Windows.UI.Xaml.Media.Animation.IDirectConnectedAnimationConfiguration";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IDirectConnectedAnimationConfigurationFactory> = L"Windows.UI.Xaml.Media.Animation.IDirectConnectedAnimationConfigurationFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IDiscreteColorKeyFrame> = L"Windows.UI.Xaml.Media.Animation.IDiscreteColorKeyFrame";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IDiscreteDoubleKeyFrame> = L"Windows.UI.Xaml.Media.Animation.IDiscreteDoubleKeyFrame";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IDiscreteObjectKeyFrame> = L"Windows.UI.Xaml.Media.Animation.IDiscreteObjectKeyFrame";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IDiscretePointKeyFrame> = L"Windows.UI.Xaml.Media.Animation.IDiscretePointKeyFrame";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IDoubleAnimation> = L"Windows.UI.Xaml.Media.Animation.IDoubleAnimation";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IDoubleAnimationStatics> = L"Windows.UI.Xaml.Media.Animation.IDoubleAnimationStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IDoubleAnimationUsingKeyFrames> = L"Windows.UI.Xaml.Media.Animation.IDoubleAnimationUsingKeyFrames";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IDoubleAnimationUsingKeyFramesStatics> = L"Windows.UI.Xaml.Media.Animation.IDoubleAnimationUsingKeyFramesStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IDoubleKeyFrame> = L"Windows.UI.Xaml.Media.Animation.IDoubleKeyFrame";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IDoubleKeyFrameFactory> = L"Windows.UI.Xaml.Media.Animation.IDoubleKeyFrameFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IDoubleKeyFrameStatics> = L"Windows.UI.Xaml.Media.Animation.IDoubleKeyFrameStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IDragItemThemeAnimation> = L"Windows.UI.Xaml.Media.Animation.IDragItemThemeAnimation";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IDragItemThemeAnimationStatics> = L"Windows.UI.Xaml.Media.Animation.IDragItemThemeAnimationStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IDragOverThemeAnimation> = L"Windows.UI.Xaml.Media.Animation.IDragOverThemeAnimation";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IDragOverThemeAnimationStatics> = L"Windows.UI.Xaml.Media.Animation.IDragOverThemeAnimationStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IDrillInNavigationTransitionInfo> = L"Windows.UI.Xaml.Media.Animation.IDrillInNavigationTransitionInfo";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IDrillInThemeAnimation> = L"Windows.UI.Xaml.Media.Animation.IDrillInThemeAnimation";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IDrillInThemeAnimationStatics> = L"Windows.UI.Xaml.Media.Animation.IDrillInThemeAnimationStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IDrillOutThemeAnimation> = L"Windows.UI.Xaml.Media.Animation.IDrillOutThemeAnimation";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IDrillOutThemeAnimationStatics> = L"Windows.UI.Xaml.Media.Animation.IDrillOutThemeAnimationStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IDropTargetItemThemeAnimation> = L"Windows.UI.Xaml.Media.Animation.IDropTargetItemThemeAnimation";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IDropTargetItemThemeAnimationStatics> = L"Windows.UI.Xaml.Media.Animation.IDropTargetItemThemeAnimationStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IEasingColorKeyFrame> = L"Windows.UI.Xaml.Media.Animation.IEasingColorKeyFrame";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IEasingColorKeyFrameStatics> = L"Windows.UI.Xaml.Media.Animation.IEasingColorKeyFrameStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IEasingDoubleKeyFrame> = L"Windows.UI.Xaml.Media.Animation.IEasingDoubleKeyFrame";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IEasingDoubleKeyFrameStatics> = L"Windows.UI.Xaml.Media.Animation.IEasingDoubleKeyFrameStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IEasingFunctionBase> = L"Windows.UI.Xaml.Media.Animation.IEasingFunctionBase";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IEasingFunctionBaseFactory> = L"Windows.UI.Xaml.Media.Animation.IEasingFunctionBaseFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IEasingFunctionBaseStatics> = L"Windows.UI.Xaml.Media.Animation.IEasingFunctionBaseStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IEasingPointKeyFrame> = L"Windows.UI.Xaml.Media.Animation.IEasingPointKeyFrame";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IEasingPointKeyFrameStatics> = L"Windows.UI.Xaml.Media.Animation.IEasingPointKeyFrameStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IEdgeUIThemeTransition> = L"Windows.UI.Xaml.Media.Animation.IEdgeUIThemeTransition";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IEdgeUIThemeTransitionStatics> = L"Windows.UI.Xaml.Media.Animation.IEdgeUIThemeTransitionStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IElasticEase> = L"Windows.UI.Xaml.Media.Animation.IElasticEase";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IElasticEaseStatics> = L"Windows.UI.Xaml.Media.Animation.IElasticEaseStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IEntranceNavigationTransitionInfo> = L"Windows.UI.Xaml.Media.Animation.IEntranceNavigationTransitionInfo";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IEntranceNavigationTransitionInfoStatics> = L"Windows.UI.Xaml.Media.Animation.IEntranceNavigationTransitionInfoStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IEntranceThemeTransition> = L"Windows.UI.Xaml.Media.Animation.IEntranceThemeTransition";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IEntranceThemeTransitionStatics> = L"Windows.UI.Xaml.Media.Animation.IEntranceThemeTransitionStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IExponentialEase> = L"Windows.UI.Xaml.Media.Animation.IExponentialEase";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IExponentialEaseStatics> = L"Windows.UI.Xaml.Media.Animation.IExponentialEaseStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IFadeInThemeAnimation> = L"Windows.UI.Xaml.Media.Animation.IFadeInThemeAnimation";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IFadeInThemeAnimationStatics> = L"Windows.UI.Xaml.Media.Animation.IFadeInThemeAnimationStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IFadeOutThemeAnimation> = L"Windows.UI.Xaml.Media.Animation.IFadeOutThemeAnimation";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IFadeOutThemeAnimationStatics> = L"Windows.UI.Xaml.Media.Animation.IFadeOutThemeAnimationStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IGravityConnectedAnimationConfiguration> = L"Windows.UI.Xaml.Media.Animation.IGravityConnectedAnimationConfiguration";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IGravityConnectedAnimationConfiguration2> = L"Windows.UI.Xaml.Media.Animation.IGravityConnectedAnimationConfiguration2";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IGravityConnectedAnimationConfigurationFactory> = L"Windows.UI.Xaml.Media.Animation.IGravityConnectedAnimationConfigurationFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IKeySpline> = L"Windows.UI.Xaml.Media.Animation.IKeySpline";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IKeyTimeHelper> = L"Windows.UI.Xaml.Media.Animation.IKeyTimeHelper";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IKeyTimeHelperStatics> = L"Windows.UI.Xaml.Media.Animation.IKeyTimeHelperStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::ILinearColorKeyFrame> = L"Windows.UI.Xaml.Media.Animation.ILinearColorKeyFrame";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::ILinearDoubleKeyFrame> = L"Windows.UI.Xaml.Media.Animation.ILinearDoubleKeyFrame";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::ILinearPointKeyFrame> = L"Windows.UI.Xaml.Media.Animation.ILinearPointKeyFrame";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::INavigationThemeTransition> = L"Windows.UI.Xaml.Media.Animation.INavigationThemeTransition";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::INavigationThemeTransitionStatics> = L"Windows.UI.Xaml.Media.Animation.INavigationThemeTransitionStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::INavigationTransitionInfo> = L"Windows.UI.Xaml.Media.Animation.INavigationTransitionInfo";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::INavigationTransitionInfoFactory> = L"Windows.UI.Xaml.Media.Animation.INavigationTransitionInfoFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::INavigationTransitionInfoOverrides> = L"Windows.UI.Xaml.Media.Animation.INavigationTransitionInfoOverrides";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IObjectAnimationUsingKeyFrames> = L"Windows.UI.Xaml.Media.Animation.IObjectAnimationUsingKeyFrames";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IObjectAnimationUsingKeyFramesStatics> = L"Windows.UI.Xaml.Media.Animation.IObjectAnimationUsingKeyFramesStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IObjectKeyFrame> = L"Windows.UI.Xaml.Media.Animation.IObjectKeyFrame";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IObjectKeyFrameFactory> = L"Windows.UI.Xaml.Media.Animation.IObjectKeyFrameFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IObjectKeyFrameStatics> = L"Windows.UI.Xaml.Media.Animation.IObjectKeyFrameStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IPaneThemeTransition> = L"Windows.UI.Xaml.Media.Animation.IPaneThemeTransition";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IPaneThemeTransitionStatics> = L"Windows.UI.Xaml.Media.Animation.IPaneThemeTransitionStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IPointAnimation> = L"Windows.UI.Xaml.Media.Animation.IPointAnimation";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IPointAnimationStatics> = L"Windows.UI.Xaml.Media.Animation.IPointAnimationStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IPointAnimationUsingKeyFrames> = L"Windows.UI.Xaml.Media.Animation.IPointAnimationUsingKeyFrames";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IPointAnimationUsingKeyFramesStatics> = L"Windows.UI.Xaml.Media.Animation.IPointAnimationUsingKeyFramesStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IPointKeyFrame> = L"Windows.UI.Xaml.Media.Animation.IPointKeyFrame";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IPointKeyFrameFactory> = L"Windows.UI.Xaml.Media.Animation.IPointKeyFrameFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IPointKeyFrameStatics> = L"Windows.UI.Xaml.Media.Animation.IPointKeyFrameStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IPointerDownThemeAnimation> = L"Windows.UI.Xaml.Media.Animation.IPointerDownThemeAnimation";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IPointerDownThemeAnimationStatics> = L"Windows.UI.Xaml.Media.Animation.IPointerDownThemeAnimationStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IPointerUpThemeAnimation> = L"Windows.UI.Xaml.Media.Animation.IPointerUpThemeAnimation";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IPointerUpThemeAnimationStatics> = L"Windows.UI.Xaml.Media.Animation.IPointerUpThemeAnimationStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IPopInThemeAnimation> = L"Windows.UI.Xaml.Media.Animation.IPopInThemeAnimation";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IPopInThemeAnimationStatics> = L"Windows.UI.Xaml.Media.Animation.IPopInThemeAnimationStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IPopOutThemeAnimation> = L"Windows.UI.Xaml.Media.Animation.IPopOutThemeAnimation";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IPopOutThemeAnimationStatics> = L"Windows.UI.Xaml.Media.Animation.IPopOutThemeAnimationStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IPopupThemeTransition> = L"Windows.UI.Xaml.Media.Animation.IPopupThemeTransition";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IPopupThemeTransitionStatics> = L"Windows.UI.Xaml.Media.Animation.IPopupThemeTransitionStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IPowerEase> = L"Windows.UI.Xaml.Media.Animation.IPowerEase";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IPowerEaseStatics> = L"Windows.UI.Xaml.Media.Animation.IPowerEaseStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IQuadraticEase> = L"Windows.UI.Xaml.Media.Animation.IQuadraticEase";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IQuarticEase> = L"Windows.UI.Xaml.Media.Animation.IQuarticEase";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IQuinticEase> = L"Windows.UI.Xaml.Media.Animation.IQuinticEase";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IReorderThemeTransition> = L"Windows.UI.Xaml.Media.Animation.IReorderThemeTransition";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IRepeatBehaviorHelper> = L"Windows.UI.Xaml.Media.Animation.IRepeatBehaviorHelper";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IRepeatBehaviorHelperStatics> = L"Windows.UI.Xaml.Media.Animation.IRepeatBehaviorHelperStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IRepositionThemeAnimation> = L"Windows.UI.Xaml.Media.Animation.IRepositionThemeAnimation";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IRepositionThemeAnimationStatics> = L"Windows.UI.Xaml.Media.Animation.IRepositionThemeAnimationStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IRepositionThemeTransition> = L"Windows.UI.Xaml.Media.Animation.IRepositionThemeTransition";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IRepositionThemeTransition2> = L"Windows.UI.Xaml.Media.Animation.IRepositionThemeTransition2";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IRepositionThemeTransitionStatics2> = L"Windows.UI.Xaml.Media.Animation.IRepositionThemeTransitionStatics2";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::ISineEase> = L"Windows.UI.Xaml.Media.Animation.ISineEase";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::ISlideNavigationTransitionInfo> = L"Windows.UI.Xaml.Media.Animation.ISlideNavigationTransitionInfo";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::ISlideNavigationTransitionInfo2> = L"Windows.UI.Xaml.Media.Animation.ISlideNavigationTransitionInfo2";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::ISlideNavigationTransitionInfoStatics2> = L"Windows.UI.Xaml.Media.Animation.ISlideNavigationTransitionInfoStatics2";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::ISplineColorKeyFrame> = L"Windows.UI.Xaml.Media.Animation.ISplineColorKeyFrame";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::ISplineColorKeyFrameStatics> = L"Windows.UI.Xaml.Media.Animation.ISplineColorKeyFrameStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::ISplineDoubleKeyFrame> = L"Windows.UI.Xaml.Media.Animation.ISplineDoubleKeyFrame";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::ISplineDoubleKeyFrameStatics> = L"Windows.UI.Xaml.Media.Animation.ISplineDoubleKeyFrameStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::ISplinePointKeyFrame> = L"Windows.UI.Xaml.Media.Animation.ISplinePointKeyFrame";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::ISplinePointKeyFrameStatics> = L"Windows.UI.Xaml.Media.Animation.ISplinePointKeyFrameStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::ISplitCloseThemeAnimation> = L"Windows.UI.Xaml.Media.Animation.ISplitCloseThemeAnimation";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::ISplitCloseThemeAnimationStatics> = L"Windows.UI.Xaml.Media.Animation.ISplitCloseThemeAnimationStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::ISplitOpenThemeAnimation> = L"Windows.UI.Xaml.Media.Animation.ISplitOpenThemeAnimation";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::ISplitOpenThemeAnimationStatics> = L"Windows.UI.Xaml.Media.Animation.ISplitOpenThemeAnimationStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IStoryboard> = L"Windows.UI.Xaml.Media.Animation.IStoryboard";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::IStoryboardStatics> = L"Windows.UI.Xaml.Media.Animation.IStoryboardStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::ISuppressNavigationTransitionInfo> = L"Windows.UI.Xaml.Media.Animation.ISuppressNavigationTransitionInfo";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::ISwipeBackThemeAnimation> = L"Windows.UI.Xaml.Media.Animation.ISwipeBackThemeAnimation";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::ISwipeBackThemeAnimationStatics> = L"Windows.UI.Xaml.Media.Animation.ISwipeBackThemeAnimationStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::ISwipeHintThemeAnimation> = L"Windows.UI.Xaml.Media.Animation.ISwipeHintThemeAnimation";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::ISwipeHintThemeAnimationStatics> = L"Windows.UI.Xaml.Media.Animation.ISwipeHintThemeAnimationStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::ITimeline> = L"Windows.UI.Xaml.Media.Animation.ITimeline";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::ITimelineFactory> = L"Windows.UI.Xaml.Media.Animation.ITimelineFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::ITimelineStatics> = L"Windows.UI.Xaml.Media.Animation.ITimelineStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::ITransition> = L"Windows.UI.Xaml.Media.Animation.ITransition";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Xaml::Media::Animation::ITransitionFactory> = L"Windows.UI.Xaml.Media.Animation.ITransitionFactory";
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IAddDeleteThemeTransition>{ 0xADEC852E,0x4424,0x4DAB,{ 0x99,0xC1,0x3A,0x04,0xE3,0x6A,0x3C,0x48 } }; // ADEC852E-4424-4DAB-99C1-3A04E36A3C48
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IBackEase>{ 0xE47796E7,0xF805,0x4A8F,{ 0x81,0xC9,0x38,0xE6,0x47,0x2C,0xAA,0x94 } }; // E47796E7-F805-4A8F-81C9-38E6472CAA94
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IBackEaseStatics>{ 0x3C70A2FF,0xA0A0,0x4786,{ 0x92,0x6C,0x22,0x32,0x1F,0x8F,0x25,0xB7 } }; // 3C70A2FF-A0A0-4786-926C-22321F8F25B7
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IBasicConnectedAnimationConfiguration>{ 0xE675F9B5,0xA4D6,0x5353,{ 0x83,0xE6,0xC8,0x9E,0x7C,0xF8,0xD4,0x56 } }; // E675F9B5-A4D6-5353-83E6-C89E7CF8D456
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IBasicConnectedAnimationConfigurationFactory>{ 0x95E6844A,0x4377,0x503C,{ 0xBE,0xE2,0x11,0xDF,0xCD,0x55,0x70,0xE6 } }; // 95E6844A-4377-503C-BEE2-11DFCD5570E6
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IBeginStoryboard>{ 0x64189FCD,0x49EC,0x4E52,{ 0xA6,0xF6,0x55,0x32,0x4C,0x92,0x10,0x53 } }; // 64189FCD-49EC-4E52-A6F6-55324C921053
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IBeginStoryboardStatics>{ 0x12CFF18C,0xAA91,0x4C4A,{ 0xB8,0x2F,0xDF,0x34,0xFC,0x57,0xF9,0x4B } }; // 12CFF18C-AA91-4C4A-B82F-DF34FC57F94B
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IBounceEase>{ 0x2BF1464E,0xFC71,0x47ED,{ 0x85,0xA1,0x3B,0xA9,0x57,0x77,0x18,0xB4 } }; // 2BF1464E-FC71-47ED-85A1-3BA9577718B4
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IBounceEaseStatics>{ 0xC0701DA2,0x4F73,0x41C9,{ 0xB2,0xCB,0x2E,0xA3,0x10,0x51,0x07,0xFF } }; // C0701DA2-4F73-41C9-B2CB-2EA3105107FF
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::ICircleEase>{ 0x53A3BDB2,0x9177,0x4E6E,{ 0xA0,0x43,0x50,0x82,0xD8,0x89,0xAB,0x1F } }; // 53A3BDB2-9177-4E6E-A043-5082D889AB1F
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IColorAnimation>{ 0xB8AE8A15,0x0F63,0x4694,{ 0x94,0x67,0xBD,0xAF,0xAC,0x12,0x53,0xEA } }; // B8AE8A15-0F63-4694-9467-BDAFAC1253EA
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IColorAnimationStatics>{ 0x55EAF6E2,0x87E3,0x4F48,{ 0x95,0x8F,0x85,0x5B,0x2F,0x9E,0xA9,0xEC } }; // 55EAF6E2-87E3-4F48-958F-855B2F9EA9EC
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IColorAnimationUsingKeyFrames>{ 0xF5C82640,0x13C3,0x42AA,{ 0x9A,0xE2,0x7E,0x6B,0x51,0xC9,0x2F,0x95 } }; // F5C82640-13C3-42AA-9AE2-7E6B51C92F95
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IColorAnimationUsingKeyFramesStatics>{ 0xB4723CDC,0x96E9,0x48F9,{ 0x8D,0x92,0x9B,0x64,0x8B,0x2F,0x1C,0xC6 } }; // B4723CDC-96E9-48F9-8D92-9B648B2F1CC6
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IColorKeyFrame>{ 0xB51D82D9,0x0910,0x4589,{ 0xA2,0x84,0xB0,0xC9,0x20,0x58,0x58,0xE9 } }; // B51D82D9-0910-4589-A284-B0C9205858E9
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IColorKeyFrameFactory>{ 0x769BD88A,0x9CFB,0x4A7D,{ 0x96,0xC4,0xA1,0xE7,0xDE,0x6F,0xDB,0x4B } }; // 769BD88A-9CFB-4A7D-96C4-A1E7DE6FDB4B
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IColorKeyFrameStatics>{ 0xC043AE99,0x210C,0x430F,{ 0x9D,0xA5,0xDF,0x10,0x82,0x69,0x20,0x55 } }; // C043AE99-210C-430F-9DA5-DF1082692055
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::ICommonNavigationTransitionInfo>{ 0x50345692,0xA555,0x4624,{ 0xA3,0x61,0x0A,0x91,0xC1,0x70,0x64,0x73 } }; // 50345692-A555-4624-A361-0A91C1706473
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::ICommonNavigationTransitionInfoStatics>{ 0x1E3EFE33,0x50BE,0x4443,{ 0x88,0x3C,0xE5,0x62,0x72,0x01,0xC2,0xE5 } }; // 1E3EFE33-50BE-4443-883C-E5627201C2E5
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IConnectedAnimation>{ 0x3518628C,0xF387,0x4C25,{ 0xAC,0x98,0x44,0xE8,0x6C,0x3C,0xAD,0xF0 } }; // 3518628C-F387-4C25-AC98-44E86C3CADF0
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IConnectedAnimation2>{ 0x5D2F8E5C,0x584B,0x4DDD,{ 0xB6,0x68,0x97,0x38,0x91,0x43,0x14,0x59 } }; // 5D2F8E5C-584B-4DDD-B668-973891431459
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IConnectedAnimation3>{ 0x6E3040C6,0x0430,0x59C0,{ 0xA8,0x0C,0xCC,0xEE,0xD2,0xE7,0x78,0xDD } }; // 6E3040C6-0430-59C0-A80C-CCEED2E778DD
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IConnectedAnimationConfiguration>{ 0x00218AAE,0xCD8C,0x5651,{ 0x92,0xA0,0xC1,0xDB,0x95,0xC0,0x39,0x98 } }; // 00218AAE-CD8C-5651-92A0-C1DB95C03998
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IConnectedAnimationConfigurationFactory>{ 0x30F9B84B,0xDD7E,0x593E,{ 0xBF,0x75,0xE9,0x59,0xDC,0x0E,0xC5,0x2A } }; // 30F9B84B-DD7E-593E-BF75-E959DC0EC52A
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IConnectedAnimationService>{ 0x1C6875C9,0x19BB,0x4D47,{ 0xB9,0xAA,0x66,0xC8,0x02,0xDC,0xB9,0xFF } }; // 1C6875C9-19BB-4D47-B9AA-66C802DCB9FF
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IConnectedAnimationServiceStatics>{ 0xC7078EA5,0xD688,0x40E8,{ 0x8F,0x90,0x96,0xA6,0x27,0x92,0x73,0xD2 } }; // C7078EA5-D688-40E8-8F90-96A6279273D2
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IContentThemeTransition>{ 0xF66FC5C3,0x5915,0x437D,{ 0x8E,0x3B,0xAD,0xF8,0xE7,0xF0,0xAB,0x57 } }; // F66FC5C3-5915-437D-8E3B-ADF8E7F0AB57
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IContentThemeTransitionStatics>{ 0x0E8EE385,0x9A42,0x4459,{ 0xAF,0xA9,0x33,0x7D,0xC4,0x1E,0x15,0x87 } }; // 0E8EE385-9A42-4459-AFA9-337DC41E1587
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IContinuumNavigationTransitionInfo>{ 0x4BE1DBAD,0x8BA6,0x4004,{ 0x84,0x38,0x8A,0x90,0x17,0x97,0x85,0x43 } }; // 4BE1DBAD-8BA6-4004-8438-8A9017978543
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IContinuumNavigationTransitionInfoStatics>{ 0x3E25DD53,0xB18F,0x4BF1,{ 0xB3,0xBC,0x92,0xF5,0x16,0xF2,0x99,0x03 } }; // 3E25DD53-B18F-4BF1-B3BC-92F516F29903
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::ICubicEase>{ 0x1B94FC76,0xDAD7,0x4354,{ 0xB1,0xA2,0x79,0x69,0xFB,0xF6,0xA7,0x0D } }; // 1B94FC76-DAD7-4354-B1A2-7969FBF6A70D
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IDirectConnectedAnimationConfiguration>{ 0xEE5D736F,0x5738,0x5D86,{ 0xB7,0x70,0x15,0x19,0x48,0xCF,0x36,0x5E } }; // EE5D736F-5738-5D86-B770-151948CF365E
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IDirectConnectedAnimationConfigurationFactory>{ 0x059263E9,0xD2B3,0x5A77,{ 0x9C,0xF4,0xE2,0x6D,0x8B,0x54,0x26,0x08 } }; // 059263E9-D2B3-5A77-9CF4-E26D8B542608
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IDiscreteColorKeyFrame>{ 0x230C08F4,0xE062,0x4CB1,{ 0x8E,0x2A,0x14,0x09,0x3D,0x73,0xED,0x8C } }; // 230C08F4-E062-4CB1-8E2A-14093D73ED8C
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IDiscreteDoubleKeyFrame>{ 0xF5F51F3A,0xAD11,0x49CE,{ 0x8E,0x1C,0x08,0xFD,0xF1,0x44,0x74,0x46 } }; // F5F51F3A-AD11-49CE-8E1C-08FDF1447446
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IDiscreteObjectKeyFrame>{ 0xC7DCDE89,0xF12D,0x4A9C,{ 0x81,0x99,0xE7,0xA9,0xEC,0xE3,0xA4,0x73 } }; // C7DCDE89-F12D-4A9C-8199-E7A9ECE3A473
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IDiscretePointKeyFrame>{ 0xE0A9070D,0x4C42,0x4A90,{ 0x98,0x3A,0x75,0xF5,0xA8,0x3A,0x2F,0xBE } }; // E0A9070D-4C42-4A90-983A-75F5A83A2FBE
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IDoubleAnimation>{ 0x7E9F3D59,0x0F07,0x4BC9,{ 0x97,0x7D,0x03,0x76,0x3F,0xF8,0x15,0x4F } }; // 7E9F3D59-0F07-4BC9-977D-03763FF8154F
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IDoubleAnimationStatics>{ 0xE27A935D,0xF111,0x43B7,{ 0xB8,0x24,0x83,0x2B,0x58,0xD7,0x78,0x6B } }; // E27A935D-F111-43B7-B824-832B58D7786B
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IDoubleAnimationUsingKeyFrames>{ 0x4FEE628F,0xBFEE,0x4F75,{ 0x83,0xC2,0xA9,0x3B,0x39,0x48,0x84,0x73 } }; // 4FEE628F-BFEE-4F75-83C2-A93B39488473
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IDoubleAnimationUsingKeyFramesStatics>{ 0x109BF2F6,0xC60F,0x49AA,{ 0xAB,0xF6,0xF6,0x96,0xD4,0x92,0x11,0x6B } }; // 109BF2F6-C60F-49AA-ABF6-F696D492116B
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IDoubleKeyFrame>{ 0x674456FD,0xE81E,0x4F4E,{ 0xB4,0xAD,0x0A,0xCF,0xED,0x9E,0xCD,0x68 } }; // 674456FD-E81E-4F4E-B4AD-0ACFED9ECD68
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IDoubleKeyFrameFactory>{ 0xAC97DEC3,0x7538,0x40B9,{ 0xB1,0x52,0x69,0x6F,0x7F,0xBF,0x47,0x22 } }; // AC97DEC3-7538-40B9-B152-696F7FBF4722
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IDoubleKeyFrameStatics>{ 0x324641B0,0x7D37,0x427A,{ 0xAD,0xEB,0x43,0xF3,0x8B,0xB6,0x1A,0x4D } }; // 324641B0-7D37-427A-ADEB-43F38BB61A4D
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IDragItemThemeAnimation>{ 0x0C7D5DB5,0x7ED6,0x4949,{ 0xB4,0xE6,0xA7,0x8C,0x9F,0x4F,0x97,0x8D } }; // 0C7D5DB5-7ED6-4949-B4E6-A78C9F4F978D
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IDragItemThemeAnimationStatics>{ 0x6218B9F5,0x013A,0x4FB1,{ 0x86,0xFC,0x92,0xBC,0x4E,0x8D,0x02,0x41 } }; // 6218B9F5-013A-4FB1-86FC-92BC4E8D0241
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IDragOverThemeAnimation>{ 0x72F762F7,0x7E51,0x4A6B,{ 0xB9,0x37,0xDC,0x4B,0x4C,0x1C,0x54,0x58 } }; // 72F762F7-7E51-4A6B-B937-DC4B4C1C5458
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IDragOverThemeAnimationStatics>{ 0x146FFE57,0x3C9D,0x41D9,{ 0xA5,0xFF,0x8D,0x72,0x39,0x51,0x68,0x10 } }; // 146FFE57-3C9D-41D9-A5FF-8D7239516810
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IDrillInNavigationTransitionInfo>{ 0x3B86201A,0x45D3,0x463B,{ 0x93,0x9E,0xC8,0x59,0x5F,0x43,0x9B,0xCC } }; // 3B86201A-45D3-463B-939E-C8595F439BCC
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IDrillInThemeAnimation>{ 0xB090B824,0xF1D2,0x41B8,{ 0x87,0xBA,0x78,0x03,0x41,0x26,0x59,0x4C } }; // B090B824-F1D2-41B8-87BA-78034126594C
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IDrillInThemeAnimationStatics>{ 0xC61FE488,0xA17A,0x4B11,{ 0xB5,0x3B,0xA4,0xF1,0xA0,0x7D,0x4B,0xA9 } }; // C61FE488-A17A-4B11-B53B-A4F1A07D4BA9
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IDrillOutThemeAnimation>{ 0xD890CCDF,0x06D3,0x4F7E,{ 0x8E,0x4A,0x4F,0xB7,0x6E,0x25,0x61,0x39 } }; // D890CCDF-06D3-4F7E-8E4A-4FB76E256139
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IDrillOutThemeAnimationStatics>{ 0xBEB5DB9B,0x2617,0x4888,{ 0x80,0xDD,0x72,0xFA,0x7B,0xB6,0xFA,0xC3 } }; // BEB5DB9B-2617-4888-80DD-72FA7BB6FAC3
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IDropTargetItemThemeAnimation>{ 0x1881C968,0x1824,0x462B,{ 0x87,0xE8,0xC3,0x57,0x21,0x2B,0x97,0x7B } }; // 1881C968-1824-462B-87E8-C357212B977B
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IDropTargetItemThemeAnimationStatics>{ 0xAE80F486,0x2E56,0x4513,{ 0xBF,0x18,0xD7,0x74,0x70,0x16,0x4A,0xE5 } }; // AE80F486-2E56-4513-BF18-D77470164AE5
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IEasingColorKeyFrame>{ 0xC733D630,0xF4B9,0x4934,{ 0x9B,0xDD,0x27,0xAC,0x5E,0xD1,0xCF,0xD8 } }; // C733D630-F4B9-4934-9BDD-27AC5ED1CFD8
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IEasingColorKeyFrameStatics>{ 0x6F3837FC,0x8E3D,0x4522,{ 0x9B,0x0F,0x00,0x3D,0xB8,0x60,0x98,0x51 } }; // 6F3837FC-8E3D-4522-9B0F-003DB8609851
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IEasingDoubleKeyFrame>{ 0x965ADB8D,0x9A54,0x4108,{ 0xB4,0xFF,0xB5,0xA5,0x21,0x2C,0xB3,0x38 } }; // 965ADB8D-9A54-4108-B4FF-B5A5212CB338
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IEasingDoubleKeyFrameStatics>{ 0xC8D3D845,0xDBAE,0x4E5B,{ 0x8B,0x84,0xD9,0x53,0x73,0x98,0xE5,0xB1 } }; // C8D3D845-DBAE-4E5B-8B84-D9537398E5B1
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IEasingFunctionBase>{ 0xC108383F,0x2C02,0x4151,{ 0x8E,0xCD,0x68,0xDD,0xAA,0x3F,0x0D,0x9B } }; // C108383F-2C02-4151-8ECD-68DDAA3F0D9B
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IEasingFunctionBaseFactory>{ 0x1830FE6A,0xF01B,0x43E0,{ 0xB6,0x1F,0xB4,0x52,0xA1,0xC6,0x6F,0xD2 } }; // 1830FE6A-F01B-43E0-B61F-B452A1C66FD2
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IEasingFunctionBaseStatics>{ 0x2A5031AA,0x2C50,0x4A1D,{ 0xBB,0x04,0xD7,0x5E,0x07,0xB7,0x15,0x48 } }; // 2A5031AA-2C50-4A1D-BB04-D75E07B71548
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IEasingPointKeyFrame>{ 0xB3C91380,0x6868,0x4225,{ 0xA7,0x0B,0x39,0x81,0xCC,0x0B,0x29,0x47 } }; // B3C91380-6868-4225-A70B-3981CC0B2947
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IEasingPointKeyFrameStatics>{ 0xE22DBFC4,0x080C,0x402C,{ 0xA6,0xB5,0xF4,0x8D,0x0A,0x98,0x11,0x6B } }; // E22DBFC4-080C-402C-A6B5-F48D0A98116B
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IEdgeUIThemeTransition>{ 0x5C86C19B,0x49D7,0x19EC,{ 0xCF,0x19,0x83,0xA7,0x3C,0x6D,0xE7,0x5E } }; // 5C86C19B-49D7-19EC-CF19-83A73C6DE75E
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IEdgeUIThemeTransitionStatics>{ 0x16A2B13B,0x4705,0x302B,{ 0x27,0xC6,0x2A,0xAC,0x92,0xF6,0x45,0xAC } }; // 16A2B13B-4705-302B-27C6-2AAC92F645AC
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IElasticEase>{ 0xEF5BA58C,0xB0B6,0x4A6C,{ 0x9C,0xA8,0xFB,0x42,0x33,0xF1,0x24,0x59 } }; // EF5BA58C-B0B6-4A6C-9CA8-FB4233F12459
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IElasticEaseStatics>{ 0xA9F566EC,0xFE9C,0x4B2B,{ 0x8E,0x52,0xBB,0x78,0x5D,0x56,0x21,0x85 } }; // A9F566EC-FE9C-4B2B-8E52-BB785D562185
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IEntranceNavigationTransitionInfo>{ 0x720A256B,0x1C8A,0x41EE,{ 0x82,0xEC,0x8A,0x87,0xC0,0xCF,0x47,0xDA } }; // 720A256B-1C8A-41EE-82EC-8A87C0CF47DA
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IEntranceNavigationTransitionInfoStatics>{ 0xF948C27A,0x40C9,0x469F,{ 0x8F,0x33,0xBF,0x45,0xC8,0x81,0x1F,0x21 } }; // F948C27A-40C9-469F-8F33-BF45C8811F21
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IEntranceThemeTransition>{ 0x07698C09,0xA8E3,0x419A,{ 0xA0,0x1D,0x74,0x10,0xA0,0xAE,0x8E,0xC8 } }; // 07698C09-A8E3-419A-A01D-7410A0AE8EC8
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IEntranceThemeTransitionStatics>{ 0x37CC0577,0xFF98,0x4AED,{ 0xB8,0x6E,0x5E,0xC2,0x37,0x02,0xF8,0x77 } }; // 37CC0577-FF98-4AED-B86E-5EC23702F877
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IExponentialEase>{ 0x7CB9E41D,0xF0BB,0x4BCA,{ 0x9D,0xA5,0x9B,0xA3,0xA1,0x17,0x34,0xC4 } }; // 7CB9E41D-F0BB-4BCA-9DA5-9BA3A11734C4
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IExponentialEaseStatics>{ 0xF37EE7E3,0xA761,0x4352,{ 0x9A,0xD6,0x70,0x79,0x45,0x67,0x58,0x1A } }; // F37EE7E3-A761-4352-9AD6-70794567581A
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IFadeInThemeAnimation>{ 0x6D4BC8F5,0xA918,0x4477,{ 0x80,0x78,0x55,0x4C,0x68,0x81,0x2A,0xB8 } }; // 6D4BC8F5-A918-4477-8078-554C68812AB8
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IFadeInThemeAnimationStatics>{ 0x7F0117E1,0xBEA9,0x4923,{ 0xB2,0x3A,0x0D,0xDF,0x4D,0x7B,0x87,0x37 } }; // 7F0117E1-BEA9-4923-B23A-0DDF4D7B8737
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IFadeOutThemeAnimation>{ 0x89276BA9,0xFFD4,0x45B6,{ 0x9B,0x9A,0xCE,0xD4,0x89,0x51,0xE7,0x12 } }; // 89276BA9-FFD4-45B6-9B9A-CED48951E712
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IFadeOutThemeAnimationStatics>{ 0xFE17A81A,0x4168,0x4F68,{ 0xA2,0x8C,0xE5,0xDD,0x98,0xCF,0x68,0x0F } }; // FE17A81A-4168-4F68-A28C-E5DD98CF680F
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IGravityConnectedAnimationConfiguration>{ 0xC751A4B7,0x0459,0x5142,{ 0xB8,0x91,0xAE,0xAA,0xC1,0xD4,0x18,0x22 } }; // C751A4B7-0459-5142-B891-AEAAC1D41822
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IGravityConnectedAnimationConfiguration2>{ 0x62333ADD,0xAED4,0x5FED,{ 0x95,0xFF,0xD1,0x28,0xAC,0xCE,0x8B,0xE4 } }; // 62333ADD-AED4-5FED-95FF-D128ACCE8BE4
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IGravityConnectedAnimationConfigurationFactory>{ 0xE822C41F,0x3656,0x5090,{ 0x92,0xF5,0xC2,0x17,0xEA,0xAC,0xB6,0x82 } }; // E822C41F-3656-5090-92F5-C217EAACB682
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IKeySpline>{ 0x77A163BB,0xD5CA,0x4A32,{ 0xBA,0x0B,0x7D,0xFF,0x98,0x8E,0x58,0xA0 } }; // 77A163BB-D5CA-4A32-BA0B-7DFF988E58A0
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IKeyTimeHelper>{ 0x3643E480,0x4823,0x466A,{ 0xAB,0xE5,0x5E,0x79,0xC8,0xED,0x77,0xED } }; // 3643E480-4823-466A-ABE5-5E79C8ED77ED
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IKeyTimeHelperStatics>{ 0x7FA2612C,0x22A9,0x45E9,{ 0x9A,0xF7,0xC7,0x41,0x6E,0xFF,0xF7,0xA5 } }; // 7FA2612C-22A9-45E9-9AF7-C7416EFFF7A5
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::ILinearColorKeyFrame>{ 0x66FDB6EF,0xAC81,0x4611,{ 0xB1,0xD2,0x61,0xF5,0x45,0x98,0x3F,0x03 } }; // 66FDB6EF-AC81-4611-B1D2-61F545983F03
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::ILinearDoubleKeyFrame>{ 0x8EFDF265,0x9A7B,0x431D,{ 0x8F,0x0C,0x14,0xC5,0x6B,0x5E,0xA4,0xD9 } }; // 8EFDF265-9A7B-431D-8F0C-14C56B5EA4D9
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::ILinearPointKeyFrame>{ 0xE7C9B8EF,0xAF24,0x49EE,{ 0x84,0xF1,0xA8,0x66,0x00,0xA4,0xE3,0x19 } }; // E7C9B8EF-AF24-49EE-84F1-A86600A4E319
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::INavigationThemeTransition>{ 0x8833848C,0x4EB7,0x41F2,{ 0x87,0x99,0x9E,0xEF,0x0A,0x21,0x3B,0x73 } }; // 8833848C-4EB7-41F2-8799-9EEF0A213B73
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::INavigationThemeTransitionStatics>{ 0xEA2F06E0,0x5E60,0x4F8E,{ 0xBC,0xAF,0x43,0x14,0x87,0xA2,0x94,0xAB } }; // EA2F06E0-5E60-4F8E-BCAF-431487A294AB
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::INavigationTransitionInfo>{ 0xA9B05091,0xAE4A,0x4372,{ 0x86,0x25,0x21,0xB7,0xA8,0xB9,0x8C,0xA4 } }; // A9B05091-AE4A-4372-8625-21B7A8B98CA4
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::INavigationTransitionInfoFactory>{ 0xEDF4F8D5,0xAF63,0x4FAB,{ 0x9D,0x4A,0x87,0x92,0x7F,0x82,0xDD,0x6B } }; // EDF4F8D5-AF63-4FAB-9D4A-87927F82DD6B
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::INavigationTransitionInfoOverrides>{ 0xD9517E6A,0xA9D0,0x4BF7,{ 0x9D,0xB0,0x46,0x33,0xA6,0x9D,0xAF,0xF2 } }; // D9517E6A-A9D0-4BF7-9DB0-4633A69DAFF2
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IObjectAnimationUsingKeyFrames>{ 0x334A2D92,0xB74A,0x4C64,{ 0xB9,0xA6,0x58,0xBC,0xFA,0x31,0x4F,0x22 } }; // 334A2D92-B74A-4C64-B9A6-58BCFA314F22
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IObjectAnimationUsingKeyFramesStatics>{ 0xEB736182,0x6AF1,0x49A3,{ 0x97,0xB6,0x78,0x3E,0xD9,0x74,0x00,0xFE } }; // EB736182-6AF1-49A3-97B6-783ED97400FE
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IObjectKeyFrame>{ 0x9852A851,0x8593,0x48EE,{ 0xA6,0xA4,0xD5,0xD4,0x72,0x0F,0x02,0x9A } }; // 9852A851-8593-48EE-A6A4-D5D4720F029A
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IObjectKeyFrameFactory>{ 0x1626143E,0x3E6D,0x44D8,{ 0x9B,0x9A,0x04,0xAE,0xA7,0x0F,0x84,0x92 } }; // 1626143E-3E6D-44D8-9B9A-04AEA70F8492
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IObjectKeyFrameStatics>{ 0x2CD6AB00,0x5319,0x4286,{ 0x8E,0xED,0x4E,0x75,0x5E,0xA0,0xCF,0x9C } }; // 2CD6AB00-5319-4286-8EED-4E755EA0CF9C
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IPaneThemeTransition>{ 0x4708EB8E,0x4BFC,0xEE46,{ 0xD4,0xF9,0x70,0x8D,0xEF,0x3F,0xBB,0x2B } }; // 4708EB8E-4BFC-EE46-D4F9-708DEF3FBB2B
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IPaneThemeTransitionStatics>{ 0x316B382F,0x4BE4,0x1797,{ 0xB4,0x5C,0xCD,0x90,0x0B,0xBE,0x0C,0xAA } }; // 316B382F-4BE4-1797-B45C-CD900BBE0CAA
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IPointAnimation>{ 0x30F04312,0x7726,0x4F88,{ 0xB8,0xE2,0x2F,0xA5,0x45,0x18,0x96,0x3B } }; // 30F04312-7726-4F88-B8E2-2FA54518963B
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IPointAnimationStatics>{ 0x2F99B356,0xE737,0x408B,{ 0xA0,0xFD,0x32,0x78,0x26,0xD3,0x22,0x55 } }; // 2F99B356-E737-408B-A0FD-327826D32255
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IPointAnimationUsingKeyFrames>{ 0x9B944F72,0x446A,0x41D0,{ 0xA1,0x29,0x41,0xA6,0x20,0xF4,0x59,0x5D } }; // 9B944F72-446A-41D0-A129-41A620F4595D
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IPointAnimationUsingKeyFramesStatics>{ 0x5F454C87,0x2390,0x46EA,{ 0xBA,0xA7,0x76,0x2F,0x4B,0xC3,0x0D,0x04 } }; // 5F454C87-2390-46EA-BAA7-762F4BC30D04
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IPointKeyFrame>{ 0xFCC88D01,0x7F82,0x4DAE,{ 0x80,0x26,0x7B,0x7E,0x08,0x68,0x78,0xB3 } }; // FCC88D01-7F82-4DAE-8026-7B7E086878B3
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IPointKeyFrameFactory>{ 0xCB214BDF,0x426A,0x4392,{ 0x83,0x55,0xC2,0xAE,0x52,0x85,0x26,0x23 } }; // CB214BDF-426A-4392-8355-C2AE52852623
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IPointKeyFrameStatics>{ 0x95CF1B27,0x7965,0x4BEC,{ 0xB9,0xFB,0xFB,0xE9,0x4B,0x65,0x51,0x8E } }; // 95CF1B27-7965-4BEC-B9FB-FBE94B65518E
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IPointerDownThemeAnimation>{ 0xB58E714E,0xC49D,0x4788,{ 0xA2,0x33,0x0A,0xE8,0x5D,0x99,0xDD,0x5A } }; // B58E714E-C49D-4788-A233-0AE85D99DD5A
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IPointerDownThemeAnimationStatics>{ 0x63A7CB7B,0x6D46,0x4494,{ 0xB9,0x4A,0xE7,0x2F,0x3B,0x49,0x2A,0x61 } }; // 63A7CB7B-6D46-4494-B94A-E72F3B492A61
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IPointerUpThemeAnimation>{ 0xE9E9D07D,0x6340,0x4828,{ 0xAD,0x12,0x69,0x06,0x94,0xB9,0x91,0x0B } }; // E9E9D07D-6340-4828-AD12-690694B9910B
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IPointerUpThemeAnimationStatics>{ 0x7C618F9C,0x7992,0x4139,{ 0x8B,0xFC,0x08,0x83,0xB9,0x72,0x7A,0x7E } }; // 7C618F9C-7992-4139-8BFC-0883B9727A7E
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IPopInThemeAnimation>{ 0x196938C1,0x1C07,0x4C28,{ 0x88,0x47,0xF9,0xF0,0x55,0xB3,0x28,0x55 } }; // 196938C1-1C07-4C28-8847-F9F055B32855
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IPopInThemeAnimationStatics>{ 0xEFAA99D3,0x218A,0x4701,{ 0x97,0x7F,0xF1,0xBF,0xAE,0x8B,0xA6,0x49 } }; // EFAA99D3-218A-4701-977F-F1BFAE8BA649
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IPopOutThemeAnimation>{ 0x4786AB49,0x0E48,0x4E81,{ 0xA2,0xE5,0xCC,0x5A,0xA1,0x9E,0x48,0xD3 } }; // 4786AB49-0E48-4E81-A2E5-CC5AA19E48D3
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IPopOutThemeAnimationStatics>{ 0x1D492C09,0x03C1,0x4490,{ 0x99,0xDC,0x90,0x9F,0xEA,0xB3,0x57,0xFB } }; // 1D492C09-03C1-4490-99DC-909FEAB357FB
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IPopupThemeTransition>{ 0x47843552,0x4283,0x545E,{ 0xC7,0x91,0x26,0x8D,0xCA,0x22,0xCE,0x4B } }; // 47843552-4283-545E-C791-268DCA22CE4B
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IPopupThemeTransitionStatics>{ 0xE5A1640E,0x490D,0x1505,{ 0x9F,0x6B,0x8F,0xAF,0xC0,0x44,0xDE,0xC5 } }; // E5A1640E-490D-1505-9F6B-8FAFC044DEC5
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IPowerEase>{ 0x69C80579,0xEEDF,0x405B,{ 0x86,0x80,0xD9,0x60,0x68,0x80,0xC9,0x37 } }; // 69C80579-EEDF-405B-8680-D9606880C937
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IPowerEaseStatics>{ 0xA5955103,0x91A2,0x460C,{ 0x9C,0x41,0xD2,0x8F,0x6A,0x93,0x9B,0xDA } }; // A5955103-91A2-460C-9C41-D28F6A939BDA
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IQuadraticEase>{ 0xE1510E91,0xEF6D,0x44F0,{ 0x80,0x3D,0x68,0xD1,0x6D,0xE0,0xDD,0xFC } }; // E1510E91-EF6D-44F0-803D-68D16DE0DDFC
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IQuarticEase>{ 0xE8698814,0xFE42,0x4A05,{ 0xB5,0xB8,0x08,0x1F,0x41,0x15,0x78,0x15 } }; // E8698814-FE42-4A05-B5B8-081F41157815
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IQuinticEase>{ 0x92EE793B,0x3C49,0x4108,{ 0xAA,0x11,0xAB,0x78,0x66,0x03,0xDA,0x21 } }; // 92EE793B-3C49-4108-AA11-AB786603DA21
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IReorderThemeTransition>{ 0xF2065C6C,0xD052,0x4AD1,{ 0x83,0x62,0xB7,0x1B,0x36,0xDF,0x74,0x97 } }; // F2065C6C-D052-4AD1-8362-B71B36DF7497
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IRepeatBehaviorHelper>{ 0x6863AB72,0x4997,0x47F9,{ 0x87,0xAD,0x37,0xEF,0xB7,0x59,0x93,0xEA } }; // 6863AB72-4997-47F9-87AD-37EFB75993EA
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IRepeatBehaviorHelperStatics>{ 0x7A795033,0x79F3,0x4DD9,{ 0xB2,0x67,0x9C,0xF5,0x0F,0xB5,0x1F,0x84 } }; // 7A795033-79F3-4DD9-B267-9CF50FB51F84
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IRepositionThemeAnimation>{ 0xECDA24E8,0x8945,0x4949,{ 0xA1,0xBF,0x62,0x10,0x99,0x65,0xA7,0xE9 } }; // ECDA24E8-8945-4949-A1BF-62109965A7E9
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IRepositionThemeAnimationStatics>{ 0x4D92B1B1,0x860B,0x4BF9,{ 0xA5,0x9D,0x1E,0xB1,0xCC,0xBE,0x8F,0xE0 } }; // 4D92B1B1-860B-4BF9-A59D-1EB1CCBE8FE0
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IRepositionThemeTransition>{ 0x88329B82,0x98F3,0x455A,{ 0xAC,0x53,0x2E,0x70,0x83,0xB6,0xE2,0x2C } }; // 88329B82-98F3-455A-AC53-2E7083B6E22C
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IRepositionThemeTransition2>{ 0xCEBFE864,0xDBEA,0x4404,{ 0x8E,0x6E,0xDE,0x55,0xAD,0xA7,0x52,0x39 } }; // CEBFE864-DBEA-4404-8E6E-DE55ADA75239
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IRepositionThemeTransitionStatics2>{ 0x9240E930,0x0A19,0x468B,{ 0x8C,0x2A,0x68,0xFA,0xB4,0x50,0x00,0x27 } }; // 9240E930-0A19-468B-8C2A-68FAB4500027
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::ISineEase>{ 0xA9382962,0x230B,0x49DA,{ 0x9E,0x0D,0x66,0x49,0x87,0x89,0x23,0x43 } }; // A9382962-230B-49DA-9E0D-664987892343
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::ISlideNavigationTransitionInfo>{ 0xD6AC9D77,0x2E03,0x405F,{ 0x80,0xED,0xE6,0x2B,0xEE,0xF3,0x66,0x8F } }; // D6AC9D77-2E03-405F-80ED-E62BEEF3668F
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::ISlideNavigationTransitionInfo2>{ 0x90E2D9C0,0x5C81,0x5001,{ 0x80,0x13,0x4F,0xBF,0xEA,0x4B,0xF1,0x39 } }; // 90E2D9C0-5C81-5001-8013-4FBFEA4BF139
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::ISlideNavigationTransitionInfoStatics2>{ 0x8A861BAA,0x981A,0x5ACE,{ 0x9F,0x85,0xCB,0x7F,0xDE,0x64,0x8A,0x67 } }; // 8A861BAA-981A-5ACE-9F85-CB7FDE648A67
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::ISplineColorKeyFrame>{ 0x1A4A5941,0x1FE0,0x473A,{ 0x8E,0xFE,0x43,0x16,0xD8,0xC8,0x62,0x29 } }; // 1A4A5941-1FE0-473A-8EFE-4316D8C86229
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::ISplineColorKeyFrameStatics>{ 0x61D1D997,0x8589,0x4F2F,{ 0x8F,0xBB,0x7D,0x03,0xED,0xC9,0x8D,0xD3 } }; // 61D1D997-8589-4F2F-8FBB-7D03EDC98DD3
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::ISplineDoubleKeyFrame>{ 0x00D72D38,0x6B2B,0x4843,{ 0x83,0x8E,0xC8,0xB1,0x15,0xEE,0xC8,0x01 } }; // 00D72D38-6B2B-4843-838E-C8B115EEC801
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::ISplineDoubleKeyFrameStatics>{ 0x060A8FFC,0x975F,0x4E4E,{ 0x9E,0xC7,0x13,0xC5,0xAE,0xE0,0x20,0x62 } }; // 060A8FFC-975F-4E4E-9EC7-13C5AEE02062
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::ISplinePointKeyFrame>{ 0x0F19F306,0x7036,0x494F,{ 0xBC,0x3C,0x78,0x0D,0xF0,0xCC,0x52,0x4A } }; // 0F19F306-7036-494F-BC3C-780DF0CC524A
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::ISplinePointKeyFrameStatics>{ 0xE97A32C2,0x0A7A,0x4766,{ 0x95,0xCB,0x0D,0x69,0x26,0x11,0xCB,0x4C } }; // E97A32C2-0A7A-4766-95CB-0D692611CB4C
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::ISplitCloseThemeAnimation>{ 0x4F799518,0xFF39,0x4E90,{ 0xBB,0x74,0x2A,0xBD,0x56,0x02,0x74,0x02 } }; // 4F799518-FF39-4E90-BB74-2ABD56027402
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::ISplitCloseThemeAnimationStatics>{ 0x7AA94DE9,0xCC9B,0x4E90,{ 0xA1,0x1A,0x00,0x50,0xA2,0x21,0x6A,0x9E } }; // 7AA94DE9-CC9B-4E90-A11A-0050A2216A9E
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::ISplitOpenThemeAnimation>{ 0x785FD7AA,0x5456,0x4639,{ 0x8F,0xD2,0x26,0xBA,0xE6,0xA5,0xFF,0xE4 } }; // 785FD7AA-5456-4639-8FD2-26BAE6A5FFE4
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::ISplitOpenThemeAnimationStatics>{ 0x8D4CFA89,0x3A91,0x458D,{ 0xB0,0xFB,0x4C,0xAD,0x62,0x5C,0xBF,0x8D } }; // 8D4CFA89-3A91-458D-B0FB-4CAD625CBF8D
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IStoryboard>{ 0xD45C1E6E,0x3594,0x460E,{ 0x98,0x1A,0x32,0x27,0x1B,0xD3,0xAA,0x06 } }; // D45C1E6E-3594-460E-981A-32271BD3AA06
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::IStoryboardStatics>{ 0xD82F07D8,0x73D5,0x4379,{ 0xBD,0x48,0x7E,0x05,0x18,0x4A,0x8B,0xAD } }; // D82F07D8-73D5-4379-BD48-7E05184A8BAD
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::ISuppressNavigationTransitionInfo>{ 0x244D7B0C,0xB1B7,0x4871,{ 0x9D,0x3E,0xD5,0x62,0x03,0xA3,0xA5,0xB4 } }; // 244D7B0C-B1B7-4871-9D3E-D56203A3A5B4
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::ISwipeBackThemeAnimation>{ 0xA38A4214,0x0BCA,0x4D2D,{ 0x95,0xF7,0xCE,0xBA,0x57,0xFB,0xAF,0x60 } }; // A38A4214-0BCA-4D2D-95F7-CEBA57FBAF60
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::ISwipeBackThemeAnimationStatics>{ 0x693F31BF,0x4DA6,0x468A,{ 0x8C,0xE0,0x99,0x6C,0x9A,0xAD,0x42,0xE0 } }; // 693F31BF-4DA6-468A-8CE0-996C9AAD42E0
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::ISwipeHintThemeAnimation>{ 0xCDD067C0,0x580E,0x4E40,{ 0xBE,0x98,0xF2,0x02,0xD3,0xD8,0x43,0x65 } }; // CDD067C0-580E-4E40-BE98-F202D3D84365
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::ISwipeHintThemeAnimationStatics>{ 0x23D61A57,0x9115,0x4D63,{ 0xB0,0x4A,0xB8,0x9F,0x1C,0x74,0x4D,0xC0 } }; // 23D61A57-9115-4D63-B04A-B89F1C744DC0
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::ITimeline>{ 0x0BC465DC,0xBE4D,0x4D0D,{ 0x95,0x49,0x22,0x08,0xB7,0x15,0xF4,0x0D } }; // 0BC465DC-BE4D-4D0D-9549-2208B715F40D
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::ITimelineFactory>{ 0x1D56BB07,0xBDA4,0x478B,{ 0x8A,0xDA,0xEB,0x04,0xD5,0x80,0xCD,0x5E } }; // 1D56BB07-BDA4-478B-8ADA-EB04D580CD5E
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::ITimelineStatics>{ 0xA902ED4E,0xEF10,0x4D6F,{ 0x9A,0x40,0x93,0xCB,0x88,0x95,0xF4,0xE5 } }; // A902ED4E-EF10-4D6F-9A40-93CB8895F4E5
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::ITransition>{ 0x3C677C7C,0x01D0,0x4DCE,{ 0xB3,0x33,0x97,0x6F,0x93,0x31,0x2B,0x08 } }; // 3C677C7C-01D0-4DCE-B333-976F93312B08
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Xaml::Media::Animation::ITransitionFactory>{ 0xDC9AB2CF,0x3BC9,0x44AA,{ 0xB3,0xFC,0x88,0x3A,0x83,0x23,0x3A,0x2C } }; // DC9AB2CF-3BC9-44AA-B3FC-883A83233A2C
    template <> struct default_interface<winrt::Windows::UI::Xaml::Media::Animation::AddDeleteThemeTransition>{ using type = winrt::Windows::UI::Xaml::Media::Animation::IAddDeleteThemeTransition; };
    template <> struct default_interface<winrt::Windows::UI::Xaml::Media::Animation::BackEase>{ using type = winrt::Windows::UI::Xaml::Media::Animation::IBackEase; };
    template <> struct default_interface<winrt::Windows::UI::Xaml::Media::Animation::BasicConnectedAnimationConfiguration>{ using type = winrt::Windows::UI::Xaml::Media::Animation::IBasicConnectedAnimationConfiguration; };
    template <> struct default_interface<winrt::Windows::UI::Xaml::Media::Animation::BeginStoryboard>{ using type = winrt::Windows::UI::Xaml::Media::Animation::IBeginStoryboard; };
    template <> struct default_interface<winrt::Windows::UI::Xaml::Media::Animation::BounceEase>{ using type = winrt::Windows::UI::Xaml::Media::Animation::IBounceEase; };
    template <> struct default_interface<winrt::Windows::UI::Xaml::Media::Animation::CircleEase>{ using type = winrt::Windows::UI::Xaml::Media::Animation::ICircleEase; };
    template <> struct default_interface<winrt::Windows::UI::Xaml::Media::Animation::ColorAnimation>{ using type = winrt::Windows::UI::Xaml::Media::Animation::IColorAnimation; };
    template <> struct default_interface<winrt::Windows::UI::Xaml::Media::Animation::ColorAnimationUsingKeyFrames>{ using type = winrt::Windows::UI::Xaml::Media::Animation::IColorAnimationUsingKeyFrames; };
    template <> struct default_interface<winrt::Windows::UI::Xaml::Media::Animation::ColorKeyFrame>{ using type = winrt::Windows::UI::Xaml::Media::Animation::IColorKeyFrame; };
    template <> struct default_interface<winrt::Windows::UI::Xaml::Media::Animation::ColorKeyFrameCollection>{ using type = winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::Xaml::Media::Animation::ColorKeyFrame>; };
    template <> struct default_interface<winrt::Windows::UI::Xaml::Media::Animation::CommonNavigationTransitionInfo>{ using type = winrt::Windows::UI::Xaml::Media::Animation::ICommonNavigationTransitionInfo; };
    template <> struct default_interface<winrt::Windows::UI::Xaml::Media::Animation::ConnectedAnimation>{ using type = winrt::Windows::UI::Xaml::Media::Animation::IConnectedAnimation; };
    template <> struct default_interface<winrt::Windows::UI::Xaml::Media::Animation::ConnectedAnimationConfiguration>{ using type = winrt::Windows::UI::Xaml::Media::Animation::IConnectedAnimationConfiguration; };
    template <> struct default_interface<winrt::Windows::UI::Xaml::Media::Animation::ConnectedAnimationService>{ using type = winrt::Windows::UI::Xaml::Media::Animation::IConnectedAnimationService; };
    template <> struct default_interface<winrt::Windows::UI::Xaml::Media::Animation::ContentThemeTransition>{ using type = winrt::Windows::UI::Xaml::Media::Animation::IContentThemeTransition; };
    template <> struct default_interface<winrt::Windows::UI::Xaml::Media::Animation::ContinuumNavigationTransitionInfo>{ using type = winrt::Windows::UI::Xaml::Media::Animation::IContinuumNavigationTransitionInfo; };
    template <> struct default_interface<winrt::Windows::UI::Xaml::Media::Animation::CubicEase>{ using type = winrt::Windows::UI::Xaml::Media::Animation::ICubicEase; };
    template <> struct default_interface<winrt::Windows::UI::Xaml::Media::Animation::DirectConnectedAnimationConfiguration>{ using type = winrt::Windows::UI::Xaml::Media::Animation::IDirectConnectedAnimationConfiguration; };
    template <> struct default_interface<winrt::Windows::UI::Xaml::Media::Animation::DiscreteColorKeyFrame>{ using type = winrt::Windows::UI::Xaml::Media::Animation::IDiscreteColorKeyFrame; };
    template <> struct default_interface<winrt::Windows::UI::Xaml::Media::Animation::DiscreteDoubleKeyFrame>{ using type = winrt::Windows::UI::Xaml::Media::Animation::IDiscreteDoubleKeyFrame; };
    template <> struct default_interface<winrt::Windows::UI::Xaml::Media::Animation::DiscreteObjectKeyFrame>{ using type = winrt::Windows::UI::Xaml::Media::Animation::IDiscreteObjectKeyFrame; };
    template <> struct default_interface<winrt::Windows::UI::Xaml::Media::Animation::DiscretePointKeyFrame>{ using type = winrt::Windows::UI::Xaml::Media::Animation::IDiscretePointKeyFrame; };
    template <> struct default_interface<winrt::Windows::UI::Xaml::Media::Animation::DoubleAnimation>{ using type = winrt::Windows::UI::Xaml::Media::Animation::IDoubleAnimation; };
    template <> struct default_interface<winrt::Windows::UI::Xaml::Media::Animation::DoubleAnimationUsingKeyFrames>{ using type = winrt::Windows::UI::Xaml::Media::Animation::IDoubleAnimationUsingKeyFrames; };
    template <> struct default_interface<winrt::Windows::UI::Xaml::Media::Animation::DoubleKeyFrame>{ using type = winrt::Windows::UI::Xaml::Media::Animation::IDoubleKeyFrame; };
    template <> struct default_interface<winrt::Windows::UI::Xaml::Media::Animation::DoubleKeyFrameCollection>{ using type = winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::Xaml::Media::Animation::DoubleKeyFrame>; };
    template <> struct default_interface<winrt::Windows::UI::Xaml::Media::Animation::DragItemThemeAnimation>{ using type = winrt::Windows::UI::Xaml::Media::Animation::IDragItemThemeAnimation; };
    template <> struct default_interface<winrt::Windows::UI::Xaml::Media::Animation::DragOverThemeAnimation>{ using type = winrt::Windows::UI::Xaml::Media::Animation::IDragOverThemeAnimation; };
    template <> struct default_interface<winrt::Windows::UI::Xaml::Media::Animation::DrillInNavigationTransitionInfo>{ using type = winrt::Windows::UI::Xaml::Media::Animation::IDrillInNavigationTransitionInfo; };
    template <> struct default_interface<winrt::Windows::UI::Xaml::Media::Animation::DrillInThemeAnimation>{ using type = winrt::Windows::UI::Xaml::Media::Animation::IDrillInThemeAnimation; };
    template <> struct default_interface<winrt::Windows::UI::Xaml::Media::Animation::DrillOutThemeAnimation>{ using type = winrt::Windows::UI::Xaml::Media::Animation::IDrillOutThemeAnimation; };
    template <> struct default_interface<winrt::Windows::UI::Xaml::Media::Animation::DropTargetItemThemeAnimation>{ using type = winrt::Windows::UI::Xaml::Media::Animation::IDropTargetItemThemeAnimation; };
    template <> struct default_interface<winrt::Windows::UI::Xaml::Media::Animation::EasingColorKeyFrame>{ using type = winrt::Windows::UI::Xaml::Media::Animation::IEasingColorKeyFrame; };
    template <> struct default_interface<winrt::Windows::UI::Xaml::Media::Animation::EasingDoubleKeyFrame>{ using type = winrt::Windows::UI::Xaml::Media::Animation::IEasingDoubleKeyFrame; };
    template <> struct default_interface<winrt::Windows::UI::Xaml::Media::Animation::EasingFunctionBase>{ using type = winrt::Windows::UI::Xaml::Media::Animation::IEasingFunctionBase; };
    template <> struct default_interface<winrt::Windows::UI::Xaml::Media::Animation::EasingPointKeyFrame>{ using type = winrt::Windows::UI::Xaml::Media::Animation::IEasingPointKeyFrame; };
    template <> struct default_interface<winrt::Windows::UI::Xaml::Media::Animation::EdgeUIThemeTransition>{ using type = winrt::Windows::UI::Xaml::Media::Animation::IEdgeUIThemeTransition; };
    template <> struct default_interface<winrt::Windows::UI::Xaml::Media::Animation::ElasticEase>{ using type = winrt::Windows::UI::Xaml::Media::Animation::IElasticEase; };
    template <> struct default_interface<winrt::Windows::UI::Xaml::Media::Animation::EntranceNavigationTransitionInfo>{ using type = winrt::Windows::UI::Xaml::Media::Animation::IEntranceNavigationTransitionInfo; };
    template <> struct default_interface<winrt::Windows::UI::Xaml::Media::Animation::EntranceThemeTransition>{ using type = winrt::Windows::UI::Xaml::Media::Animation::IEntranceThemeTransition; };
    template <> struct default_interface<winrt::Windows::UI::Xaml::Media::Animation::ExponentialEase>{ using type = winrt::Windows::UI::Xaml::Media::Animation::IExponentialEase; };
    template <> struct default_interface<winrt::Windows::UI::Xaml::Media::Animation::FadeInThemeAnimation>{ using type = winrt::Windows::UI::Xaml::Media::Animation::IFadeInThemeAnimation; };
    template <> struct default_interface<winrt::Windows::UI::Xaml::Media::Animation::FadeOutThemeAnimation>{ using type = winrt::Windows::UI::Xaml::Media::Animation::IFadeOutThemeAnimation; };
    template <> struct default_interface<winrt::Windows::UI::Xaml::Media::Animation::GravityConnectedAnimationConfiguration>{ using type = winrt::Windows::UI::Xaml::Media::Animation::IGravityConnectedAnimationConfiguration; };
    template <> struct default_interface<winrt::Windows::UI::Xaml::Media::Animation::KeySpline>{ using type = winrt::Windows::UI::Xaml::Media::Animation::IKeySpline; };
    template <> struct default_interface<winrt::Windows::UI::Xaml::Media::Animation::KeyTimeHelper>{ using type = winrt::Windows::UI::Xaml::Media::Animation::IKeyTimeHelper; };
    template <> struct default_interface<winrt::Windows::UI::Xaml::Media::Animation::LinearColorKeyFrame>{ using type = winrt::Windows::UI::Xaml::Media::Animation::ILinearColorKeyFrame; };
    template <> struct default_interface<winrt::Windows::UI::Xaml::Media::Animation::LinearDoubleKeyFrame>{ using type = winrt::Windows::UI::Xaml::Media::Animation::ILinearDoubleKeyFrame; };
    template <> struct default_interface<winrt::Windows::UI::Xaml::Media::Animation::LinearPointKeyFrame>{ using type = winrt::Windows::UI::Xaml::Media::Animation::ILinearPointKeyFrame; };
    template <> struct default_interface<winrt::Windows::UI::Xaml::Media::Animation::NavigationThemeTransition>{ using type = winrt::Windows::UI::Xaml::Media::Animation::INavigationThemeTransition; };
    template <> struct default_interface<winrt::Windows::UI::Xaml::Media::Animation::NavigationTransitionInfo>{ using type = winrt::Windows::UI::Xaml::Media::Animation::INavigationTransitionInfo; };
    template <> struct default_interface<winrt::Windows::UI::Xaml::Media::Animation::ObjectAnimationUsingKeyFrames>{ using type = winrt::Windows::UI::Xaml::Media::Animation::IObjectAnimationUsingKeyFrames; };
    template <> struct default_interface<winrt::Windows::UI::Xaml::Media::Animation::ObjectKeyFrame>{ using type = winrt::Windows::UI::Xaml::Media::Animation::IObjectKeyFrame; };
    template <> struct default_interface<winrt::Windows::UI::Xaml::Media::Animation::ObjectKeyFrameCollection>{ using type = winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::Xaml::Media::Animation::ObjectKeyFrame>; };
    template <> struct default_interface<winrt::Windows::UI::Xaml::Media::Animation::PaneThemeTransition>{ using type = winrt::Windows::UI::Xaml::Media::Animation::IPaneThemeTransition; };
    template <> struct default_interface<winrt::Windows::UI::Xaml::Media::Animation::PointAnimation>{ using type = winrt::Windows::UI::Xaml::Media::Animation::IPointAnimation; };
    template <> struct default_interface<winrt::Windows::UI::Xaml::Media::Animation::PointAnimationUsingKeyFrames>{ using type = winrt::Windows::UI::Xaml::Media::Animation::IPointAnimationUsingKeyFrames; };
    template <> struct default_interface<winrt::Windows::UI::Xaml::Media::Animation::PointKeyFrame>{ using type = winrt::Windows::UI::Xaml::Media::Animation::IPointKeyFrame; };
    template <> struct default_interface<winrt::Windows::UI::Xaml::Media::Animation::PointKeyFrameCollection>{ using type = winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::Xaml::Media::Animation::PointKeyFrame>; };
    template <> struct default_interface<winrt::Windows::UI::Xaml::Media::Animation::PointerDownThemeAnimation>{ using type = winrt::Windows::UI::Xaml::Media::Animation::IPointerDownThemeAnimation; };
    template <> struct default_interface<winrt::Windows::UI::Xaml::Media::Animation::PointerUpThemeAnimation>{ using type = winrt::Windows::UI::Xaml::Media::Animation::IPointerUpThemeAnimation; };
    template <> struct default_interface<winrt::Windows::UI::Xaml::Media::Animation::PopInThemeAnimation>{ using type = winrt::Windows::UI::Xaml::Media::Animation::IPopInThemeAnimation; };
    template <> struct default_interface<winrt::Windows::UI::Xaml::Media::Animation::PopOutThemeAnimation>{ using type = winrt::Windows::UI::Xaml::Media::Animation::IPopOutThemeAnimation; };
    template <> struct default_interface<winrt::Windows::UI::Xaml::Media::Animation::PopupThemeTransition>{ using type = winrt::Windows::UI::Xaml::Media::Animation::IPopupThemeTransition; };
    template <> struct default_interface<winrt::Windows::UI::Xaml::Media::Animation::PowerEase>{ using type = winrt::Windows::UI::Xaml::Media::Animation::IPowerEase; };
    template <> struct default_interface<winrt::Windows::UI::Xaml::Media::Animation::QuadraticEase>{ using type = winrt::Windows::UI::Xaml::Media::Animation::IQuadraticEase; };
    template <> struct default_interface<winrt::Windows::UI::Xaml::Media::Animation::QuarticEase>{ using type = winrt::Windows::UI::Xaml::Media::Animation::IQuarticEase; };
    template <> struct default_interface<winrt::Windows::UI::Xaml::Media::Animation::QuinticEase>{ using type = winrt::Windows::UI::Xaml::Media::Animation::IQuinticEase; };
    template <> struct default_interface<winrt::Windows::UI::Xaml::Media::Animation::ReorderThemeTransition>{ using type = winrt::Windows::UI::Xaml::Media::Animation::IReorderThemeTransition; };
    template <> struct default_interface<winrt::Windows::UI::Xaml::Media::Animation::RepeatBehaviorHelper>{ using type = winrt::Windows::UI::Xaml::Media::Animation::IRepeatBehaviorHelper; };
    template <> struct default_interface<winrt::Windows::UI::Xaml::Media::Animation::RepositionThemeAnimation>{ using type = winrt::Windows::UI::Xaml::Media::Animation::IRepositionThemeAnimation; };
    template <> struct default_interface<winrt::Windows::UI::Xaml::Media::Animation::RepositionThemeTransition>{ using type = winrt::Windows::UI::Xaml::Media::Animation::IRepositionThemeTransition; };
    template <> struct default_interface<winrt::Windows::UI::Xaml::Media::Animation::SineEase>{ using type = winrt::Windows::UI::Xaml::Media::Animation::ISineEase; };
    template <> struct default_interface<winrt::Windows::UI::Xaml::Media::Animation::SlideNavigationTransitionInfo>{ using type = winrt::Windows::UI::Xaml::Media::Animation::ISlideNavigationTransitionInfo; };
    template <> struct default_interface<winrt::Windows::UI::Xaml::Media::Animation::SplineColorKeyFrame>{ using type = winrt::Windows::UI::Xaml::Media::Animation::ISplineColorKeyFrame; };
    template <> struct default_interface<winrt::Windows::UI::Xaml::Media::Animation::SplineDoubleKeyFrame>{ using type = winrt::Windows::UI::Xaml::Media::Animation::ISplineDoubleKeyFrame; };
    template <> struct default_interface<winrt::Windows::UI::Xaml::Media::Animation::SplinePointKeyFrame>{ using type = winrt::Windows::UI::Xaml::Media::Animation::ISplinePointKeyFrame; };
    template <> struct default_interface<winrt::Windows::UI::Xaml::Media::Animation::SplitCloseThemeAnimation>{ using type = winrt::Windows::UI::Xaml::Media::Animation::ISplitCloseThemeAnimation; };
    template <> struct default_interface<winrt::Windows::UI::Xaml::Media::Animation::SplitOpenThemeAnimation>{ using type = winrt::Windows::UI::Xaml::Media::Animation::ISplitOpenThemeAnimation; };
    template <> struct default_interface<winrt::Windows::UI::Xaml::Media::Animation::Storyboard>{ using type = winrt::Windows::UI::Xaml::Media::Animation::IStoryboard; };
    template <> struct default_interface<winrt::Windows::UI::Xaml::Media::Animation::SuppressNavigationTransitionInfo>{ using type = winrt::Windows::UI::Xaml::Media::Animation::ISuppressNavigationTransitionInfo; };
    template <> struct default_interface<winrt::Windows::UI::Xaml::Media::Animation::SwipeBackThemeAnimation>{ using type = winrt::Windows::UI::Xaml::Media::Animation::ISwipeBackThemeAnimation; };
    template <> struct default_interface<winrt::Windows::UI::Xaml::Media::Animation::SwipeHintThemeAnimation>{ using type = winrt::Windows::UI::Xaml::Media::Animation::ISwipeHintThemeAnimation; };
    template <> struct default_interface<winrt::Windows::UI::Xaml::Media::Animation::Timeline>{ using type = winrt::Windows::UI::Xaml::Media::Animation::ITimeline; };
    template <> struct default_interface<winrt::Windows::UI::Xaml::Media::Animation::TimelineCollection>{ using type = winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::Xaml::Media::Animation::Timeline>; };
    template <> struct default_interface<winrt::Windows::UI::Xaml::Media::Animation::Transition>{ using type = winrt::Windows::UI::Xaml::Media::Animation::ITransition; };
    template <> struct default_interface<winrt::Windows::UI::Xaml::Media::Animation::TransitionCollection>{ using type = winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::Xaml::Media::Animation::Transition>; };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IAddDeleteThemeTransition>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IBackEase>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Amplitude(double*) noexcept = 0;
            virtual int32_t __stdcall put_Amplitude(double) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IBackEaseStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AmplitudeProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IBasicConnectedAnimationConfiguration>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IBasicConnectedAnimationConfigurationFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IBeginStoryboard>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Storyboard(void**) noexcept = 0;
            virtual int32_t __stdcall put_Storyboard(void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IBeginStoryboardStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_StoryboardProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IBounceEase>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Bounces(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Bounces(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Bounciness(double*) noexcept = 0;
            virtual int32_t __stdcall put_Bounciness(double) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IBounceEaseStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_BouncesProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_BouncinessProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::ICircleEase>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IColorAnimation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_From(void**) noexcept = 0;
            virtual int32_t __stdcall put_From(void*) noexcept = 0;
            virtual int32_t __stdcall get_To(void**) noexcept = 0;
            virtual int32_t __stdcall put_To(void*) noexcept = 0;
            virtual int32_t __stdcall get_By(void**) noexcept = 0;
            virtual int32_t __stdcall put_By(void*) noexcept = 0;
            virtual int32_t __stdcall get_EasingFunction(void**) noexcept = 0;
            virtual int32_t __stdcall put_EasingFunction(void*) noexcept = 0;
            virtual int32_t __stdcall get_EnableDependentAnimation(bool*) noexcept = 0;
            virtual int32_t __stdcall put_EnableDependentAnimation(bool) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IColorAnimationStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FromProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ToProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ByProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_EasingFunctionProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_EnableDependentAnimationProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IColorAnimationUsingKeyFrames>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_KeyFrames(void**) noexcept = 0;
            virtual int32_t __stdcall get_EnableDependentAnimation(bool*) noexcept = 0;
            virtual int32_t __stdcall put_EnableDependentAnimation(bool) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IColorAnimationUsingKeyFramesStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EnableDependentAnimationProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IColorKeyFrame>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Value(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall put_Value(struct struct_Windows_UI_Color) noexcept = 0;
            virtual int32_t __stdcall get_KeyTime(struct struct_Windows_UI_Xaml_Media_Animation_KeyTime*) noexcept = 0;
            virtual int32_t __stdcall put_KeyTime(struct struct_Windows_UI_Xaml_Media_Animation_KeyTime) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IColorKeyFrameFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IColorKeyFrameStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ValueProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_KeyTimeProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::ICommonNavigationTransitionInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsStaggeringEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsStaggeringEnabled(bool) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::ICommonNavigationTransitionInfoStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsStaggeringEnabledProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsStaggerElementProperty(void**) noexcept = 0;
            virtual int32_t __stdcall GetIsStaggerElement(void*, bool*) noexcept = 0;
            virtual int32_t __stdcall SetIsStaggerElement(void*, bool) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IConnectedAnimation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_Completed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Completed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall TryStart(void*, bool*) noexcept = 0;
            virtual int32_t __stdcall Cancel() noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IConnectedAnimation2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsScaleAnimationEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsScaleAnimationEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall TryStartWithCoordinatedElements(void*, void*, bool*) noexcept = 0;
            virtual int32_t __stdcall SetAnimationComponent(int32_t, void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IConnectedAnimation3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Configuration(void**) noexcept = 0;
            virtual int32_t __stdcall put_Configuration(void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IConnectedAnimationConfiguration>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IConnectedAnimationConfigurationFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IConnectedAnimationService>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DefaultDuration(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_DefaultDuration(int64_t) noexcept = 0;
            virtual int32_t __stdcall get_DefaultEasingFunction(void**) noexcept = 0;
            virtual int32_t __stdcall put_DefaultEasingFunction(void*) noexcept = 0;
            virtual int32_t __stdcall PrepareToAnimate(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetAnimation(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IConnectedAnimationServiceStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetForCurrentView(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IContentThemeTransition>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_HorizontalOffset(double*) noexcept = 0;
            virtual int32_t __stdcall put_HorizontalOffset(double) noexcept = 0;
            virtual int32_t __stdcall get_VerticalOffset(double*) noexcept = 0;
            virtual int32_t __stdcall put_VerticalOffset(double) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IContentThemeTransitionStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_HorizontalOffsetProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_VerticalOffsetProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IContinuumNavigationTransitionInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ExitElement(void**) noexcept = 0;
            virtual int32_t __stdcall put_ExitElement(void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IContinuumNavigationTransitionInfoStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ExitElementProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsEntranceElementProperty(void**) noexcept = 0;
            virtual int32_t __stdcall GetIsEntranceElement(void*, bool*) noexcept = 0;
            virtual int32_t __stdcall SetIsEntranceElement(void*, bool) noexcept = 0;
            virtual int32_t __stdcall get_IsExitElementProperty(void**) noexcept = 0;
            virtual int32_t __stdcall GetIsExitElement(void*, bool*) noexcept = 0;
            virtual int32_t __stdcall SetIsExitElement(void*, bool) noexcept = 0;
            virtual int32_t __stdcall get_ExitElementContainerProperty(void**) noexcept = 0;
            virtual int32_t __stdcall GetExitElementContainer(void*, bool*) noexcept = 0;
            virtual int32_t __stdcall SetExitElementContainer(void*, bool) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::ICubicEase>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IDirectConnectedAnimationConfiguration>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IDirectConnectedAnimationConfigurationFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IDiscreteColorKeyFrame>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IDiscreteDoubleKeyFrame>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IDiscreteObjectKeyFrame>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IDiscretePointKeyFrame>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IDoubleAnimation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_From(void**) noexcept = 0;
            virtual int32_t __stdcall put_From(void*) noexcept = 0;
            virtual int32_t __stdcall get_To(void**) noexcept = 0;
            virtual int32_t __stdcall put_To(void*) noexcept = 0;
            virtual int32_t __stdcall get_By(void**) noexcept = 0;
            virtual int32_t __stdcall put_By(void*) noexcept = 0;
            virtual int32_t __stdcall get_EasingFunction(void**) noexcept = 0;
            virtual int32_t __stdcall put_EasingFunction(void*) noexcept = 0;
            virtual int32_t __stdcall get_EnableDependentAnimation(bool*) noexcept = 0;
            virtual int32_t __stdcall put_EnableDependentAnimation(bool) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IDoubleAnimationStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FromProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ToProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ByProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_EasingFunctionProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_EnableDependentAnimationProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IDoubleAnimationUsingKeyFrames>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_KeyFrames(void**) noexcept = 0;
            virtual int32_t __stdcall get_EnableDependentAnimation(bool*) noexcept = 0;
            virtual int32_t __stdcall put_EnableDependentAnimation(bool) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IDoubleAnimationUsingKeyFramesStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EnableDependentAnimationProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IDoubleKeyFrame>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Value(double*) noexcept = 0;
            virtual int32_t __stdcall put_Value(double) noexcept = 0;
            virtual int32_t __stdcall get_KeyTime(struct struct_Windows_UI_Xaml_Media_Animation_KeyTime*) noexcept = 0;
            virtual int32_t __stdcall put_KeyTime(struct struct_Windows_UI_Xaml_Media_Animation_KeyTime) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IDoubleKeyFrameFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IDoubleKeyFrameStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ValueProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_KeyTimeProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IDragItemThemeAnimation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TargetName(void**) noexcept = 0;
            virtual int32_t __stdcall put_TargetName(void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IDragItemThemeAnimationStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TargetNameProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IDragOverThemeAnimation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TargetName(void**) noexcept = 0;
            virtual int32_t __stdcall put_TargetName(void*) noexcept = 0;
            virtual int32_t __stdcall get_ToOffset(double*) noexcept = 0;
            virtual int32_t __stdcall put_ToOffset(double) noexcept = 0;
            virtual int32_t __stdcall get_Direction(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Direction(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IDragOverThemeAnimationStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TargetNameProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ToOffsetProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_DirectionProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IDrillInNavigationTransitionInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IDrillInThemeAnimation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EntranceTargetName(void**) noexcept = 0;
            virtual int32_t __stdcall put_EntranceTargetName(void*) noexcept = 0;
            virtual int32_t __stdcall get_EntranceTarget(void**) noexcept = 0;
            virtual int32_t __stdcall put_EntranceTarget(void*) noexcept = 0;
            virtual int32_t __stdcall get_ExitTargetName(void**) noexcept = 0;
            virtual int32_t __stdcall put_ExitTargetName(void*) noexcept = 0;
            virtual int32_t __stdcall get_ExitTarget(void**) noexcept = 0;
            virtual int32_t __stdcall put_ExitTarget(void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IDrillInThemeAnimationStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EntranceTargetNameProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_EntranceTargetProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ExitTargetNameProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ExitTargetProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IDrillOutThemeAnimation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EntranceTargetName(void**) noexcept = 0;
            virtual int32_t __stdcall put_EntranceTargetName(void*) noexcept = 0;
            virtual int32_t __stdcall get_EntranceTarget(void**) noexcept = 0;
            virtual int32_t __stdcall put_EntranceTarget(void*) noexcept = 0;
            virtual int32_t __stdcall get_ExitTargetName(void**) noexcept = 0;
            virtual int32_t __stdcall put_ExitTargetName(void*) noexcept = 0;
            virtual int32_t __stdcall get_ExitTarget(void**) noexcept = 0;
            virtual int32_t __stdcall put_ExitTarget(void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IDrillOutThemeAnimationStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EntranceTargetNameProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_EntranceTargetProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ExitTargetNameProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ExitTargetProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IDropTargetItemThemeAnimation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TargetName(void**) noexcept = 0;
            virtual int32_t __stdcall put_TargetName(void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IDropTargetItemThemeAnimationStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TargetNameProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IEasingColorKeyFrame>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EasingFunction(void**) noexcept = 0;
            virtual int32_t __stdcall put_EasingFunction(void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IEasingColorKeyFrameStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EasingFunctionProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IEasingDoubleKeyFrame>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EasingFunction(void**) noexcept = 0;
            virtual int32_t __stdcall put_EasingFunction(void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IEasingDoubleKeyFrameStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EasingFunctionProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IEasingFunctionBase>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EasingMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_EasingMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall Ease(double, double*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IEasingFunctionBaseFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IEasingFunctionBaseStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EasingModeProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IEasingPointKeyFrame>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EasingFunction(void**) noexcept = 0;
            virtual int32_t __stdcall put_EasingFunction(void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IEasingPointKeyFrameStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EasingFunctionProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IEdgeUIThemeTransition>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Edge(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Edge(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IEdgeUIThemeTransitionStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EdgeProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IElasticEase>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Oscillations(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Oscillations(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Springiness(double*) noexcept = 0;
            virtual int32_t __stdcall put_Springiness(double) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IElasticEaseStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_OscillationsProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_SpringinessProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IEntranceNavigationTransitionInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IEntranceNavigationTransitionInfoStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsTargetElementProperty(void**) noexcept = 0;
            virtual int32_t __stdcall GetIsTargetElement(void*, bool*) noexcept = 0;
            virtual int32_t __stdcall SetIsTargetElement(void*, bool) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IEntranceThemeTransition>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FromHorizontalOffset(double*) noexcept = 0;
            virtual int32_t __stdcall put_FromHorizontalOffset(double) noexcept = 0;
            virtual int32_t __stdcall get_FromVerticalOffset(double*) noexcept = 0;
            virtual int32_t __stdcall put_FromVerticalOffset(double) noexcept = 0;
            virtual int32_t __stdcall get_IsStaggeringEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsStaggeringEnabled(bool) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IEntranceThemeTransitionStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FromHorizontalOffsetProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_FromVerticalOffsetProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsStaggeringEnabledProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IExponentialEase>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Exponent(double*) noexcept = 0;
            virtual int32_t __stdcall put_Exponent(double) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IExponentialEaseStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ExponentProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IFadeInThemeAnimation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TargetName(void**) noexcept = 0;
            virtual int32_t __stdcall put_TargetName(void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IFadeInThemeAnimationStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TargetNameProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IFadeOutThemeAnimation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TargetName(void**) noexcept = 0;
            virtual int32_t __stdcall put_TargetName(void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IFadeOutThemeAnimationStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TargetNameProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IGravityConnectedAnimationConfiguration>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IGravityConnectedAnimationConfiguration2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsShadowEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsShadowEnabled(bool) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IGravityConnectedAnimationConfigurationFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IKeySpline>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ControlPoint1(winrt::Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall put_ControlPoint1(winrt::Windows::Foundation::Point) noexcept = 0;
            virtual int32_t __stdcall get_ControlPoint2(winrt::Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall put_ControlPoint2(winrt::Windows::Foundation::Point) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IKeyTimeHelper>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IKeyTimeHelperStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FromTimeSpan(int64_t, struct struct_Windows_UI_Xaml_Media_Animation_KeyTime*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::ILinearColorKeyFrame>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::ILinearDoubleKeyFrame>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::ILinearPointKeyFrame>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::INavigationThemeTransition>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DefaultNavigationTransitionInfo(void**) noexcept = 0;
            virtual int32_t __stdcall put_DefaultNavigationTransitionInfo(void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::INavigationThemeTransitionStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DefaultNavigationTransitionInfoProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::INavigationTransitionInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::INavigationTransitionInfoFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::INavigationTransitionInfoOverrides>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetNavigationStateCore(void**) noexcept = 0;
            virtual int32_t __stdcall SetNavigationStateCore(void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IObjectAnimationUsingKeyFrames>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_KeyFrames(void**) noexcept = 0;
            virtual int32_t __stdcall get_EnableDependentAnimation(bool*) noexcept = 0;
            virtual int32_t __stdcall put_EnableDependentAnimation(bool) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IObjectAnimationUsingKeyFramesStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EnableDependentAnimationProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IObjectKeyFrame>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Value(void**) noexcept = 0;
            virtual int32_t __stdcall put_Value(void*) noexcept = 0;
            virtual int32_t __stdcall get_KeyTime(struct struct_Windows_UI_Xaml_Media_Animation_KeyTime*) noexcept = 0;
            virtual int32_t __stdcall put_KeyTime(struct struct_Windows_UI_Xaml_Media_Animation_KeyTime) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IObjectKeyFrameFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IObjectKeyFrameStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ValueProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_KeyTimeProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IPaneThemeTransition>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Edge(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Edge(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IPaneThemeTransitionStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EdgeProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IPointAnimation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_From(void**) noexcept = 0;
            virtual int32_t __stdcall put_From(void*) noexcept = 0;
            virtual int32_t __stdcall get_To(void**) noexcept = 0;
            virtual int32_t __stdcall put_To(void*) noexcept = 0;
            virtual int32_t __stdcall get_By(void**) noexcept = 0;
            virtual int32_t __stdcall put_By(void*) noexcept = 0;
            virtual int32_t __stdcall get_EasingFunction(void**) noexcept = 0;
            virtual int32_t __stdcall put_EasingFunction(void*) noexcept = 0;
            virtual int32_t __stdcall get_EnableDependentAnimation(bool*) noexcept = 0;
            virtual int32_t __stdcall put_EnableDependentAnimation(bool) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IPointAnimationStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FromProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ToProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ByProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_EasingFunctionProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_EnableDependentAnimationProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IPointAnimationUsingKeyFrames>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_KeyFrames(void**) noexcept = 0;
            virtual int32_t __stdcall get_EnableDependentAnimation(bool*) noexcept = 0;
            virtual int32_t __stdcall put_EnableDependentAnimation(bool) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IPointAnimationUsingKeyFramesStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EnableDependentAnimationProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IPointKeyFrame>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Value(winrt::Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall put_Value(winrt::Windows::Foundation::Point) noexcept = 0;
            virtual int32_t __stdcall get_KeyTime(struct struct_Windows_UI_Xaml_Media_Animation_KeyTime*) noexcept = 0;
            virtual int32_t __stdcall put_KeyTime(struct struct_Windows_UI_Xaml_Media_Animation_KeyTime) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IPointKeyFrameFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IPointKeyFrameStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ValueProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_KeyTimeProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IPointerDownThemeAnimation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TargetName(void**) noexcept = 0;
            virtual int32_t __stdcall put_TargetName(void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IPointerDownThemeAnimationStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TargetNameProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IPointerUpThemeAnimation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TargetName(void**) noexcept = 0;
            virtual int32_t __stdcall put_TargetName(void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IPointerUpThemeAnimationStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TargetNameProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IPopInThemeAnimation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TargetName(void**) noexcept = 0;
            virtual int32_t __stdcall put_TargetName(void*) noexcept = 0;
            virtual int32_t __stdcall get_FromHorizontalOffset(double*) noexcept = 0;
            virtual int32_t __stdcall put_FromHorizontalOffset(double) noexcept = 0;
            virtual int32_t __stdcall get_FromVerticalOffset(double*) noexcept = 0;
            virtual int32_t __stdcall put_FromVerticalOffset(double) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IPopInThemeAnimationStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TargetNameProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_FromHorizontalOffsetProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_FromVerticalOffsetProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IPopOutThemeAnimation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TargetName(void**) noexcept = 0;
            virtual int32_t __stdcall put_TargetName(void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IPopOutThemeAnimationStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TargetNameProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IPopupThemeTransition>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FromHorizontalOffset(double*) noexcept = 0;
            virtual int32_t __stdcall put_FromHorizontalOffset(double) noexcept = 0;
            virtual int32_t __stdcall get_FromVerticalOffset(double*) noexcept = 0;
            virtual int32_t __stdcall put_FromVerticalOffset(double) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IPopupThemeTransitionStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FromHorizontalOffsetProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_FromVerticalOffsetProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IPowerEase>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Power(double*) noexcept = 0;
            virtual int32_t __stdcall put_Power(double) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IPowerEaseStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PowerProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IQuadraticEase>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IQuarticEase>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IQuinticEase>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IReorderThemeTransition>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IRepeatBehaviorHelper>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IRepeatBehaviorHelperStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Forever(struct struct_Windows_UI_Xaml_Media_Animation_RepeatBehavior*) noexcept = 0;
            virtual int32_t __stdcall FromCount(double, struct struct_Windows_UI_Xaml_Media_Animation_RepeatBehavior*) noexcept = 0;
            virtual int32_t __stdcall FromDuration(int64_t, struct struct_Windows_UI_Xaml_Media_Animation_RepeatBehavior*) noexcept = 0;
            virtual int32_t __stdcall GetHasCount(struct struct_Windows_UI_Xaml_Media_Animation_RepeatBehavior, bool*) noexcept = 0;
            virtual int32_t __stdcall GetHasDuration(struct struct_Windows_UI_Xaml_Media_Animation_RepeatBehavior, bool*) noexcept = 0;
            virtual int32_t __stdcall Equals(struct struct_Windows_UI_Xaml_Media_Animation_RepeatBehavior, struct struct_Windows_UI_Xaml_Media_Animation_RepeatBehavior, bool*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IRepositionThemeAnimation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TargetName(void**) noexcept = 0;
            virtual int32_t __stdcall put_TargetName(void*) noexcept = 0;
            virtual int32_t __stdcall get_FromHorizontalOffset(double*) noexcept = 0;
            virtual int32_t __stdcall put_FromHorizontalOffset(double) noexcept = 0;
            virtual int32_t __stdcall get_FromVerticalOffset(double*) noexcept = 0;
            virtual int32_t __stdcall put_FromVerticalOffset(double) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IRepositionThemeAnimationStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TargetNameProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_FromHorizontalOffsetProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_FromVerticalOffsetProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IRepositionThemeTransition>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IRepositionThemeTransition2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsStaggeringEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsStaggeringEnabled(bool) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IRepositionThemeTransitionStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsStaggeringEnabledProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::ISineEase>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::ISlideNavigationTransitionInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::ISlideNavigationTransitionInfo2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Effect(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Effect(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::ISlideNavigationTransitionInfoStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EffectProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::ISplineColorKeyFrame>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_KeySpline(void**) noexcept = 0;
            virtual int32_t __stdcall put_KeySpline(void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::ISplineColorKeyFrameStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_KeySplineProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::ISplineDoubleKeyFrame>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_KeySpline(void**) noexcept = 0;
            virtual int32_t __stdcall put_KeySpline(void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::ISplineDoubleKeyFrameStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_KeySplineProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::ISplinePointKeyFrame>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_KeySpline(void**) noexcept = 0;
            virtual int32_t __stdcall put_KeySpline(void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::ISplinePointKeyFrameStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_KeySplineProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::ISplitCloseThemeAnimation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_OpenedTargetName(void**) noexcept = 0;
            virtual int32_t __stdcall put_OpenedTargetName(void*) noexcept = 0;
            virtual int32_t __stdcall get_OpenedTarget(void**) noexcept = 0;
            virtual int32_t __stdcall put_OpenedTarget(void*) noexcept = 0;
            virtual int32_t __stdcall get_ClosedTargetName(void**) noexcept = 0;
            virtual int32_t __stdcall put_ClosedTargetName(void*) noexcept = 0;
            virtual int32_t __stdcall get_ClosedTarget(void**) noexcept = 0;
            virtual int32_t __stdcall put_ClosedTarget(void*) noexcept = 0;
            virtual int32_t __stdcall get_ContentTargetName(void**) noexcept = 0;
            virtual int32_t __stdcall put_ContentTargetName(void*) noexcept = 0;
            virtual int32_t __stdcall get_ContentTarget(void**) noexcept = 0;
            virtual int32_t __stdcall put_ContentTarget(void*) noexcept = 0;
            virtual int32_t __stdcall get_OpenedLength(double*) noexcept = 0;
            virtual int32_t __stdcall put_OpenedLength(double) noexcept = 0;
            virtual int32_t __stdcall get_ClosedLength(double*) noexcept = 0;
            virtual int32_t __stdcall put_ClosedLength(double) noexcept = 0;
            virtual int32_t __stdcall get_OffsetFromCenter(double*) noexcept = 0;
            virtual int32_t __stdcall put_OffsetFromCenter(double) noexcept = 0;
            virtual int32_t __stdcall get_ContentTranslationDirection(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ContentTranslationDirection(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_ContentTranslationOffset(double*) noexcept = 0;
            virtual int32_t __stdcall put_ContentTranslationOffset(double) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::ISplitCloseThemeAnimationStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_OpenedTargetNameProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_OpenedTargetProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ClosedTargetNameProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ClosedTargetProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ContentTargetNameProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ContentTargetProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_OpenedLengthProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ClosedLengthProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_OffsetFromCenterProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ContentTranslationDirectionProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ContentTranslationOffsetProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::ISplitOpenThemeAnimation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_OpenedTargetName(void**) noexcept = 0;
            virtual int32_t __stdcall put_OpenedTargetName(void*) noexcept = 0;
            virtual int32_t __stdcall get_OpenedTarget(void**) noexcept = 0;
            virtual int32_t __stdcall put_OpenedTarget(void*) noexcept = 0;
            virtual int32_t __stdcall get_ClosedTargetName(void**) noexcept = 0;
            virtual int32_t __stdcall put_ClosedTargetName(void*) noexcept = 0;
            virtual int32_t __stdcall get_ClosedTarget(void**) noexcept = 0;
            virtual int32_t __stdcall put_ClosedTarget(void*) noexcept = 0;
            virtual int32_t __stdcall get_ContentTargetName(void**) noexcept = 0;
            virtual int32_t __stdcall put_ContentTargetName(void*) noexcept = 0;
            virtual int32_t __stdcall get_ContentTarget(void**) noexcept = 0;
            virtual int32_t __stdcall put_ContentTarget(void*) noexcept = 0;
            virtual int32_t __stdcall get_OpenedLength(double*) noexcept = 0;
            virtual int32_t __stdcall put_OpenedLength(double) noexcept = 0;
            virtual int32_t __stdcall get_ClosedLength(double*) noexcept = 0;
            virtual int32_t __stdcall put_ClosedLength(double) noexcept = 0;
            virtual int32_t __stdcall get_OffsetFromCenter(double*) noexcept = 0;
            virtual int32_t __stdcall put_OffsetFromCenter(double) noexcept = 0;
            virtual int32_t __stdcall get_ContentTranslationDirection(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ContentTranslationDirection(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_ContentTranslationOffset(double*) noexcept = 0;
            virtual int32_t __stdcall put_ContentTranslationOffset(double) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::ISplitOpenThemeAnimationStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_OpenedTargetNameProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_OpenedTargetProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ClosedTargetNameProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ClosedTargetProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ContentTargetNameProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ContentTargetProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_OpenedLengthProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ClosedLengthProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_OffsetFromCenterProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ContentTranslationDirectionProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ContentTranslationOffsetProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IStoryboard>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Children(void**) noexcept = 0;
            virtual int32_t __stdcall Seek(int64_t) noexcept = 0;
            virtual int32_t __stdcall Stop() noexcept = 0;
            virtual int32_t __stdcall Begin() noexcept = 0;
            virtual int32_t __stdcall Pause() noexcept = 0;
            virtual int32_t __stdcall Resume() noexcept = 0;
            virtual int32_t __stdcall GetCurrentState(int32_t*) noexcept = 0;
            virtual int32_t __stdcall GetCurrentTime(int64_t*) noexcept = 0;
            virtual int32_t __stdcall SeekAlignedToLastTick(int64_t) noexcept = 0;
            virtual int32_t __stdcall SkipToFill() noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::IStoryboardStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TargetPropertyProperty(void**) noexcept = 0;
            virtual int32_t __stdcall GetTargetProperty(void*, void**) noexcept = 0;
            virtual int32_t __stdcall SetTargetProperty(void*, void*) noexcept = 0;
            virtual int32_t __stdcall get_TargetNameProperty(void**) noexcept = 0;
            virtual int32_t __stdcall GetTargetName(void*, void**) noexcept = 0;
            virtual int32_t __stdcall SetTargetName(void*, void*) noexcept = 0;
            virtual int32_t __stdcall SetTarget(void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::ISuppressNavigationTransitionInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::ISwipeBackThemeAnimation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TargetName(void**) noexcept = 0;
            virtual int32_t __stdcall put_TargetName(void*) noexcept = 0;
            virtual int32_t __stdcall get_FromHorizontalOffset(double*) noexcept = 0;
            virtual int32_t __stdcall put_FromHorizontalOffset(double) noexcept = 0;
            virtual int32_t __stdcall get_FromVerticalOffset(double*) noexcept = 0;
            virtual int32_t __stdcall put_FromVerticalOffset(double) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::ISwipeBackThemeAnimationStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TargetNameProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_FromHorizontalOffsetProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_FromVerticalOffsetProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::ISwipeHintThemeAnimation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TargetName(void**) noexcept = 0;
            virtual int32_t __stdcall put_TargetName(void*) noexcept = 0;
            virtual int32_t __stdcall get_ToHorizontalOffset(double*) noexcept = 0;
            virtual int32_t __stdcall put_ToHorizontalOffset(double) noexcept = 0;
            virtual int32_t __stdcall get_ToVerticalOffset(double*) noexcept = 0;
            virtual int32_t __stdcall put_ToVerticalOffset(double) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::ISwipeHintThemeAnimationStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TargetNameProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ToHorizontalOffsetProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ToVerticalOffsetProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::ITimeline>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AutoReverse(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AutoReverse(bool) noexcept = 0;
            virtual int32_t __stdcall get_BeginTime(void**) noexcept = 0;
            virtual int32_t __stdcall put_BeginTime(void*) noexcept = 0;
            virtual int32_t __stdcall get_Duration(struct struct_Windows_UI_Xaml_Duration*) noexcept = 0;
            virtual int32_t __stdcall put_Duration(struct struct_Windows_UI_Xaml_Duration) noexcept = 0;
            virtual int32_t __stdcall get_SpeedRatio(double*) noexcept = 0;
            virtual int32_t __stdcall put_SpeedRatio(double) noexcept = 0;
            virtual int32_t __stdcall get_FillBehavior(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_FillBehavior(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_RepeatBehavior(struct struct_Windows_UI_Xaml_Media_Animation_RepeatBehavior*) noexcept = 0;
            virtual int32_t __stdcall put_RepeatBehavior(struct struct_Windows_UI_Xaml_Media_Animation_RepeatBehavior) noexcept = 0;
            virtual int32_t __stdcall add_Completed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Completed(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::ITimelineFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::ITimelineStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AllowDependentAnimations(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AllowDependentAnimations(bool) noexcept = 0;
            virtual int32_t __stdcall get_AutoReverseProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_BeginTimeProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_DurationProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_SpeedRatioProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_FillBehaviorProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_RepeatBehaviorProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::ITransition>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<winrt::Windows::UI::Xaml::Media::Animation::ITransitionFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IAddDeleteThemeTransition
    {
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IAddDeleteThemeTransition>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IAddDeleteThemeTransition<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IBackEase
    {
        [[nodiscard]] WINRT_IMPL_AUTO(double) Amplitude() const;
        WINRT_IMPL_AUTO(void) Amplitude(double value) const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IBackEase>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IBackEase<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IBackEaseStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) AmplitudeProperty() const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IBackEaseStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IBackEaseStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IBasicConnectedAnimationConfiguration
    {
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IBasicConnectedAnimationConfiguration>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IBasicConnectedAnimationConfiguration<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IBasicConnectedAnimationConfigurationFactory
    {
        WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::Media::Animation::BasicConnectedAnimationConfiguration) CreateInstance(winrt::Windows::Foundation::IInspectable const& baseInterface, winrt::Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IBasicConnectedAnimationConfigurationFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IBasicConnectedAnimationConfigurationFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IBeginStoryboard
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::Media::Animation::Storyboard) Storyboard() const;
        WINRT_IMPL_AUTO(void) Storyboard(winrt::Windows::UI::Xaml::Media::Animation::Storyboard const& value) const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IBeginStoryboard>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IBeginStoryboard<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IBeginStoryboardStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) StoryboardProperty() const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IBeginStoryboardStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IBeginStoryboardStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IBounceEase
    {
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) Bounces() const;
        WINRT_IMPL_AUTO(void) Bounces(int32_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) Bounciness() const;
        WINRT_IMPL_AUTO(void) Bounciness(double value) const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IBounceEase>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IBounceEase<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IBounceEaseStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) BouncesProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) BouncinessProperty() const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IBounceEaseStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IBounceEaseStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_ICircleEase
    {
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::ICircleEase>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_ICircleEase<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IColorAnimation
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::IReference<winrt::Windows::UI::Color>) From() const;
        WINRT_IMPL_AUTO(void) From(winrt::Windows::Foundation::IReference<winrt::Windows::UI::Color> const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::IReference<winrt::Windows::UI::Color>) To() const;
        WINRT_IMPL_AUTO(void) To(winrt::Windows::Foundation::IReference<winrt::Windows::UI::Color> const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::IReference<winrt::Windows::UI::Color>) By() const;
        WINRT_IMPL_AUTO(void) By(winrt::Windows::Foundation::IReference<winrt::Windows::UI::Color> const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::Media::Animation::EasingFunctionBase) EasingFunction() const;
        WINRT_IMPL_AUTO(void) EasingFunction(winrt::Windows::UI::Xaml::Media::Animation::EasingFunctionBase const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) EnableDependentAnimation() const;
        WINRT_IMPL_AUTO(void) EnableDependentAnimation(bool value) const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IColorAnimation>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IColorAnimation<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IColorAnimationStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) FromProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) ToProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) ByProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) EasingFunctionProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) EnableDependentAnimationProperty() const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IColorAnimationStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IColorAnimationStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IColorAnimationUsingKeyFrames
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::Media::Animation::ColorKeyFrameCollection) KeyFrames() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) EnableDependentAnimation() const;
        WINRT_IMPL_AUTO(void) EnableDependentAnimation(bool value) const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IColorAnimationUsingKeyFrames>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IColorAnimationUsingKeyFrames<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IColorAnimationUsingKeyFramesStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) EnableDependentAnimationProperty() const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IColorAnimationUsingKeyFramesStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IColorAnimationUsingKeyFramesStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IColorKeyFrame
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Color) Value() const;
        WINRT_IMPL_AUTO(void) Value(winrt::Windows::UI::Color const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::Media::Animation::KeyTime) KeyTime() const;
        WINRT_IMPL_AUTO(void) KeyTime(winrt::Windows::UI::Xaml::Media::Animation::KeyTime const& value) const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IColorKeyFrame>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IColorKeyFrame<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IColorKeyFrameFactory
    {
        WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::Media::Animation::ColorKeyFrame) CreateInstance(winrt::Windows::Foundation::IInspectable const& baseInterface, winrt::Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IColorKeyFrameFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IColorKeyFrameFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IColorKeyFrameStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) ValueProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) KeyTimeProperty() const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IColorKeyFrameStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IColorKeyFrameStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_ICommonNavigationTransitionInfo
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsStaggeringEnabled() const;
        WINRT_IMPL_AUTO(void) IsStaggeringEnabled(bool value) const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::ICommonNavigationTransitionInfo>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_ICommonNavigationTransitionInfo<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_ICommonNavigationTransitionInfoStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) IsStaggeringEnabledProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) IsStaggerElementProperty() const;
        WINRT_IMPL_AUTO(bool) GetIsStaggerElement(winrt::Windows::UI::Xaml::UIElement const& element) const;
        WINRT_IMPL_AUTO(void) SetIsStaggerElement(winrt::Windows::UI::Xaml::UIElement const& element, bool value) const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::ICommonNavigationTransitionInfoStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_ICommonNavigationTransitionInfoStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IConnectedAnimation
    {
        WINRT_IMPL_AUTO(winrt::event_token) Completed(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Xaml::Media::Animation::ConnectedAnimation, winrt::Windows::Foundation::IInspectable> const& handler) const;
        using Completed_revoker = impl::event_revoker<winrt::Windows::UI::Xaml::Media::Animation::IConnectedAnimation, &impl::abi_t<winrt::Windows::UI::Xaml::Media::Animation::IConnectedAnimation>::remove_Completed>;
        [[nodiscard]] Completed_revoker Completed(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Xaml::Media::Animation::ConnectedAnimation, winrt::Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) Completed(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(bool) TryStart(winrt::Windows::UI::Xaml::UIElement const& destination) const;
        WINRT_IMPL_AUTO(void) Cancel() const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IConnectedAnimation>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IConnectedAnimation<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IConnectedAnimation2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsScaleAnimationEnabled() const;
        WINRT_IMPL_AUTO(void) IsScaleAnimationEnabled(bool value) const;
        WINRT_IMPL_AUTO(bool) TryStart(winrt::Windows::UI::Xaml::UIElement const& destination, param::iterable<winrt::Windows::UI::Xaml::UIElement> const& coordinatedElements) const;
        WINRT_IMPL_AUTO(void) SetAnimationComponent(winrt::Windows::UI::Xaml::Media::Animation::ConnectedAnimationComponent const& component, winrt::Windows::UI::Composition::ICompositionAnimationBase const& animation) const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IConnectedAnimation2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IConnectedAnimation2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IConnectedAnimation3
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::Media::Animation::ConnectedAnimationConfiguration) Configuration() const;
        WINRT_IMPL_AUTO(void) Configuration(winrt::Windows::UI::Xaml::Media::Animation::ConnectedAnimationConfiguration const& value) const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IConnectedAnimation3>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IConnectedAnimation3<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IConnectedAnimationConfiguration
    {
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IConnectedAnimationConfiguration>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IConnectedAnimationConfiguration<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IConnectedAnimationConfigurationFactory
    {
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IConnectedAnimationConfigurationFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IConnectedAnimationConfigurationFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IConnectedAnimationService
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::TimeSpan) DefaultDuration() const;
        WINRT_IMPL_AUTO(void) DefaultDuration(winrt::Windows::Foundation::TimeSpan const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Composition::CompositionEasingFunction) DefaultEasingFunction() const;
        WINRT_IMPL_AUTO(void) DefaultEasingFunction(winrt::Windows::UI::Composition::CompositionEasingFunction const& value) const;
        WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::Media::Animation::ConnectedAnimation) PrepareToAnimate(param::hstring const& key, winrt::Windows::UI::Xaml::UIElement const& source) const;
        WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::Media::Animation::ConnectedAnimation) GetAnimation(param::hstring const& key) const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IConnectedAnimationService>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IConnectedAnimationService<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IConnectedAnimationServiceStatics
    {
        WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::Media::Animation::ConnectedAnimationService) GetForCurrentView() const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IConnectedAnimationServiceStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IConnectedAnimationServiceStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IContentThemeTransition
    {
        [[nodiscard]] WINRT_IMPL_AUTO(double) HorizontalOffset() const;
        WINRT_IMPL_AUTO(void) HorizontalOffset(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) VerticalOffset() const;
        WINRT_IMPL_AUTO(void) VerticalOffset(double value) const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IContentThemeTransition>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IContentThemeTransition<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IContentThemeTransitionStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) HorizontalOffsetProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) VerticalOffsetProperty() const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IContentThemeTransitionStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IContentThemeTransitionStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IContinuumNavigationTransitionInfo
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::UIElement) ExitElement() const;
        WINRT_IMPL_AUTO(void) ExitElement(winrt::Windows::UI::Xaml::UIElement const& value) const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IContinuumNavigationTransitionInfo>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IContinuumNavigationTransitionInfo<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IContinuumNavigationTransitionInfoStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) ExitElementProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) IsEntranceElementProperty() const;
        WINRT_IMPL_AUTO(bool) GetIsEntranceElement(winrt::Windows::UI::Xaml::UIElement const& element) const;
        WINRT_IMPL_AUTO(void) SetIsEntranceElement(winrt::Windows::UI::Xaml::UIElement const& element, bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) IsExitElementProperty() const;
        WINRT_IMPL_AUTO(bool) GetIsExitElement(winrt::Windows::UI::Xaml::UIElement const& element) const;
        WINRT_IMPL_AUTO(void) SetIsExitElement(winrt::Windows::UI::Xaml::UIElement const& element, bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) ExitElementContainerProperty() const;
        WINRT_IMPL_AUTO(bool) GetExitElementContainer(winrt::Windows::UI::Xaml::Controls::ListViewBase const& element) const;
        WINRT_IMPL_AUTO(void) SetExitElementContainer(winrt::Windows::UI::Xaml::Controls::ListViewBase const& element, bool value) const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IContinuumNavigationTransitionInfoStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IContinuumNavigationTransitionInfoStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_ICubicEase
    {
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::ICubicEase>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_ICubicEase<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IDirectConnectedAnimationConfiguration
    {
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IDirectConnectedAnimationConfiguration>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IDirectConnectedAnimationConfiguration<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IDirectConnectedAnimationConfigurationFactory
    {
        WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::Media::Animation::DirectConnectedAnimationConfiguration) CreateInstance(winrt::Windows::Foundation::IInspectable const& baseInterface, winrt::Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IDirectConnectedAnimationConfigurationFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IDirectConnectedAnimationConfigurationFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IDiscreteColorKeyFrame
    {
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IDiscreteColorKeyFrame>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IDiscreteColorKeyFrame<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IDiscreteDoubleKeyFrame
    {
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IDiscreteDoubleKeyFrame>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IDiscreteDoubleKeyFrame<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IDiscreteObjectKeyFrame
    {
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IDiscreteObjectKeyFrame>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IDiscreteObjectKeyFrame<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IDiscretePointKeyFrame
    {
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IDiscretePointKeyFrame>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IDiscretePointKeyFrame<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IDoubleAnimation
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::IReference<double>) From() const;
        WINRT_IMPL_AUTO(void) From(winrt::Windows::Foundation::IReference<double> const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::IReference<double>) To() const;
        WINRT_IMPL_AUTO(void) To(winrt::Windows::Foundation::IReference<double> const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::IReference<double>) By() const;
        WINRT_IMPL_AUTO(void) By(winrt::Windows::Foundation::IReference<double> const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::Media::Animation::EasingFunctionBase) EasingFunction() const;
        WINRT_IMPL_AUTO(void) EasingFunction(winrt::Windows::UI::Xaml::Media::Animation::EasingFunctionBase const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) EnableDependentAnimation() const;
        WINRT_IMPL_AUTO(void) EnableDependentAnimation(bool value) const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IDoubleAnimation>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IDoubleAnimation<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IDoubleAnimationStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) FromProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) ToProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) ByProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) EasingFunctionProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) EnableDependentAnimationProperty() const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IDoubleAnimationStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IDoubleAnimationStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IDoubleAnimationUsingKeyFrames
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::Media::Animation::DoubleKeyFrameCollection) KeyFrames() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) EnableDependentAnimation() const;
        WINRT_IMPL_AUTO(void) EnableDependentAnimation(bool value) const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IDoubleAnimationUsingKeyFrames>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IDoubleAnimationUsingKeyFrames<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IDoubleAnimationUsingKeyFramesStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) EnableDependentAnimationProperty() const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IDoubleAnimationUsingKeyFramesStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IDoubleAnimationUsingKeyFramesStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IDoubleKeyFrame
    {
        [[nodiscard]] WINRT_IMPL_AUTO(double) Value() const;
        WINRT_IMPL_AUTO(void) Value(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::Media::Animation::KeyTime) KeyTime() const;
        WINRT_IMPL_AUTO(void) KeyTime(winrt::Windows::UI::Xaml::Media::Animation::KeyTime const& value) const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IDoubleKeyFrame>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IDoubleKeyFrame<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IDoubleKeyFrameFactory
    {
        WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::Media::Animation::DoubleKeyFrame) CreateInstance(winrt::Windows::Foundation::IInspectable const& baseInterface, winrt::Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IDoubleKeyFrameFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IDoubleKeyFrameFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IDoubleKeyFrameStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) ValueProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) KeyTimeProperty() const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IDoubleKeyFrameStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IDoubleKeyFrameStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IDragItemThemeAnimation
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) TargetName() const;
        WINRT_IMPL_AUTO(void) TargetName(param::hstring const& value) const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IDragItemThemeAnimation>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IDragItemThemeAnimation<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IDragItemThemeAnimationStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) TargetNameProperty() const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IDragItemThemeAnimationStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IDragItemThemeAnimationStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IDragOverThemeAnimation
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) TargetName() const;
        WINRT_IMPL_AUTO(void) TargetName(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) ToOffset() const;
        WINRT_IMPL_AUTO(void) ToOffset(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::Controls::Primitives::AnimationDirection) Direction() const;
        WINRT_IMPL_AUTO(void) Direction(winrt::Windows::UI::Xaml::Controls::Primitives::AnimationDirection const& value) const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IDragOverThemeAnimation>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IDragOverThemeAnimation<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IDragOverThemeAnimationStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) TargetNameProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) ToOffsetProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) DirectionProperty() const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IDragOverThemeAnimationStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IDragOverThemeAnimationStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IDrillInNavigationTransitionInfo
    {
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IDrillInNavigationTransitionInfo>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IDrillInNavigationTransitionInfo<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IDrillInThemeAnimation
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) EntranceTargetName() const;
        WINRT_IMPL_AUTO(void) EntranceTargetName(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyObject) EntranceTarget() const;
        WINRT_IMPL_AUTO(void) EntranceTarget(winrt::Windows::UI::Xaml::DependencyObject const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) ExitTargetName() const;
        WINRT_IMPL_AUTO(void) ExitTargetName(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyObject) ExitTarget() const;
        WINRT_IMPL_AUTO(void) ExitTarget(winrt::Windows::UI::Xaml::DependencyObject const& value) const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IDrillInThemeAnimation>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IDrillInThemeAnimation<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IDrillInThemeAnimationStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) EntranceTargetNameProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) EntranceTargetProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) ExitTargetNameProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) ExitTargetProperty() const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IDrillInThemeAnimationStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IDrillInThemeAnimationStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IDrillOutThemeAnimation
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) EntranceTargetName() const;
        WINRT_IMPL_AUTO(void) EntranceTargetName(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyObject) EntranceTarget() const;
        WINRT_IMPL_AUTO(void) EntranceTarget(winrt::Windows::UI::Xaml::DependencyObject const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) ExitTargetName() const;
        WINRT_IMPL_AUTO(void) ExitTargetName(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyObject) ExitTarget() const;
        WINRT_IMPL_AUTO(void) ExitTarget(winrt::Windows::UI::Xaml::DependencyObject const& value) const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IDrillOutThemeAnimation>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IDrillOutThemeAnimation<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IDrillOutThemeAnimationStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) EntranceTargetNameProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) EntranceTargetProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) ExitTargetNameProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) ExitTargetProperty() const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IDrillOutThemeAnimationStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IDrillOutThemeAnimationStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IDropTargetItemThemeAnimation
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) TargetName() const;
        WINRT_IMPL_AUTO(void) TargetName(param::hstring const& value) const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IDropTargetItemThemeAnimation>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IDropTargetItemThemeAnimation<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IDropTargetItemThemeAnimationStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) TargetNameProperty() const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IDropTargetItemThemeAnimationStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IDropTargetItemThemeAnimationStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IEasingColorKeyFrame
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::Media::Animation::EasingFunctionBase) EasingFunction() const;
        WINRT_IMPL_AUTO(void) EasingFunction(winrt::Windows::UI::Xaml::Media::Animation::EasingFunctionBase const& value) const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IEasingColorKeyFrame>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IEasingColorKeyFrame<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IEasingColorKeyFrameStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) EasingFunctionProperty() const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IEasingColorKeyFrameStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IEasingColorKeyFrameStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IEasingDoubleKeyFrame
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::Media::Animation::EasingFunctionBase) EasingFunction() const;
        WINRT_IMPL_AUTO(void) EasingFunction(winrt::Windows::UI::Xaml::Media::Animation::EasingFunctionBase const& value) const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IEasingDoubleKeyFrame>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IEasingDoubleKeyFrame<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IEasingDoubleKeyFrameStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) EasingFunctionProperty() const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IEasingDoubleKeyFrameStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IEasingDoubleKeyFrameStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IEasingFunctionBase
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::Media::Animation::EasingMode) EasingMode() const;
        WINRT_IMPL_AUTO(void) EasingMode(winrt::Windows::UI::Xaml::Media::Animation::EasingMode const& value) const;
        WINRT_IMPL_AUTO(double) Ease(double normalizedTime) const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IEasingFunctionBase>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IEasingFunctionBase<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IEasingFunctionBaseFactory
    {
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IEasingFunctionBaseFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IEasingFunctionBaseFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IEasingFunctionBaseStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) EasingModeProperty() const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IEasingFunctionBaseStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IEasingFunctionBaseStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IEasingPointKeyFrame
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::Media::Animation::EasingFunctionBase) EasingFunction() const;
        WINRT_IMPL_AUTO(void) EasingFunction(winrt::Windows::UI::Xaml::Media::Animation::EasingFunctionBase const& value) const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IEasingPointKeyFrame>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IEasingPointKeyFrame<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IEasingPointKeyFrameStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) EasingFunctionProperty() const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IEasingPointKeyFrameStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IEasingPointKeyFrameStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IEdgeUIThemeTransition
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::Controls::Primitives::EdgeTransitionLocation) Edge() const;
        WINRT_IMPL_AUTO(void) Edge(winrt::Windows::UI::Xaml::Controls::Primitives::EdgeTransitionLocation const& value) const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IEdgeUIThemeTransition>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IEdgeUIThemeTransition<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IEdgeUIThemeTransitionStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) EdgeProperty() const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IEdgeUIThemeTransitionStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IEdgeUIThemeTransitionStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IElasticEase
    {
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) Oscillations() const;
        WINRT_IMPL_AUTO(void) Oscillations(int32_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) Springiness() const;
        WINRT_IMPL_AUTO(void) Springiness(double value) const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IElasticEase>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IElasticEase<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IElasticEaseStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) OscillationsProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) SpringinessProperty() const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IElasticEaseStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IElasticEaseStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IEntranceNavigationTransitionInfo
    {
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IEntranceNavigationTransitionInfo>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IEntranceNavigationTransitionInfo<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IEntranceNavigationTransitionInfoStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) IsTargetElementProperty() const;
        WINRT_IMPL_AUTO(bool) GetIsTargetElement(winrt::Windows::UI::Xaml::UIElement const& element) const;
        WINRT_IMPL_AUTO(void) SetIsTargetElement(winrt::Windows::UI::Xaml::UIElement const& element, bool value) const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IEntranceNavigationTransitionInfoStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IEntranceNavigationTransitionInfoStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IEntranceThemeTransition
    {
        [[nodiscard]] WINRT_IMPL_AUTO(double) FromHorizontalOffset() const;
        WINRT_IMPL_AUTO(void) FromHorizontalOffset(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) FromVerticalOffset() const;
        WINRT_IMPL_AUTO(void) FromVerticalOffset(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsStaggeringEnabled() const;
        WINRT_IMPL_AUTO(void) IsStaggeringEnabled(bool value) const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IEntranceThemeTransition>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IEntranceThemeTransition<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IEntranceThemeTransitionStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) FromHorizontalOffsetProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) FromVerticalOffsetProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) IsStaggeringEnabledProperty() const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IEntranceThemeTransitionStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IEntranceThemeTransitionStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IExponentialEase
    {
        [[nodiscard]] WINRT_IMPL_AUTO(double) Exponent() const;
        WINRT_IMPL_AUTO(void) Exponent(double value) const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IExponentialEase>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IExponentialEase<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IExponentialEaseStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) ExponentProperty() const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IExponentialEaseStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IExponentialEaseStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IFadeInThemeAnimation
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) TargetName() const;
        WINRT_IMPL_AUTO(void) TargetName(param::hstring const& value) const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IFadeInThemeAnimation>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IFadeInThemeAnimation<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IFadeInThemeAnimationStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) TargetNameProperty() const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IFadeInThemeAnimationStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IFadeInThemeAnimationStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IFadeOutThemeAnimation
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) TargetName() const;
        WINRT_IMPL_AUTO(void) TargetName(param::hstring const& value) const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IFadeOutThemeAnimation>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IFadeOutThemeAnimation<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IFadeOutThemeAnimationStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) TargetNameProperty() const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IFadeOutThemeAnimationStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IFadeOutThemeAnimationStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IGravityConnectedAnimationConfiguration
    {
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IGravityConnectedAnimationConfiguration>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IGravityConnectedAnimationConfiguration<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IGravityConnectedAnimationConfiguration2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsShadowEnabled() const;
        WINRT_IMPL_AUTO(void) IsShadowEnabled(bool value) const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IGravityConnectedAnimationConfiguration2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IGravityConnectedAnimationConfiguration2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IGravityConnectedAnimationConfigurationFactory
    {
        WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::Media::Animation::GravityConnectedAnimationConfiguration) CreateInstance(winrt::Windows::Foundation::IInspectable const& baseInterface, winrt::Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IGravityConnectedAnimationConfigurationFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IGravityConnectedAnimationConfigurationFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IKeySpline
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Point) ControlPoint1() const;
        WINRT_IMPL_AUTO(void) ControlPoint1(winrt::Windows::Foundation::Point const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Point) ControlPoint2() const;
        WINRT_IMPL_AUTO(void) ControlPoint2(winrt::Windows::Foundation::Point const& value) const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IKeySpline>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IKeySpline<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IKeyTimeHelper
    {
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IKeyTimeHelper>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IKeyTimeHelper<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IKeyTimeHelperStatics
    {
        WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::Media::Animation::KeyTime) FromTimeSpan(winrt::Windows::Foundation::TimeSpan const& timeSpan) const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IKeyTimeHelperStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IKeyTimeHelperStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_ILinearColorKeyFrame
    {
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::ILinearColorKeyFrame>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_ILinearColorKeyFrame<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_ILinearDoubleKeyFrame
    {
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::ILinearDoubleKeyFrame>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_ILinearDoubleKeyFrame<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_ILinearPointKeyFrame
    {
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::ILinearPointKeyFrame>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_ILinearPointKeyFrame<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_INavigationThemeTransition
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::Media::Animation::NavigationTransitionInfo) DefaultNavigationTransitionInfo() const;
        WINRT_IMPL_AUTO(void) DefaultNavigationTransitionInfo(winrt::Windows::UI::Xaml::Media::Animation::NavigationTransitionInfo const& value) const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::INavigationThemeTransition>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_INavigationThemeTransition<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_INavigationThemeTransitionStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) DefaultNavigationTransitionInfoProperty() const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::INavigationThemeTransitionStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_INavigationThemeTransitionStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_INavigationTransitionInfo
    {
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::INavigationTransitionInfo>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_INavigationTransitionInfo<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_INavigationTransitionInfoFactory
    {
        WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::Media::Animation::NavigationTransitionInfo) CreateInstance(winrt::Windows::Foundation::IInspectable const& baseInterface, winrt::Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::INavigationTransitionInfoFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_INavigationTransitionInfoFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_INavigationTransitionInfoOverrides
    {
        WINRT_IMPL_AUTO(hstring) GetNavigationStateCore() const;
        WINRT_IMPL_AUTO(void) SetNavigationStateCore(param::hstring const& navigationState) const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::INavigationTransitionInfoOverrides>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_INavigationTransitionInfoOverrides<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IObjectAnimationUsingKeyFrames
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::Media::Animation::ObjectKeyFrameCollection) KeyFrames() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) EnableDependentAnimation() const;
        WINRT_IMPL_AUTO(void) EnableDependentAnimation(bool value) const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IObjectAnimationUsingKeyFrames>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IObjectAnimationUsingKeyFrames<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IObjectAnimationUsingKeyFramesStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) EnableDependentAnimationProperty() const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IObjectAnimationUsingKeyFramesStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IObjectAnimationUsingKeyFramesStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IObjectKeyFrame
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::IInspectable) Value() const;
        WINRT_IMPL_AUTO(void) Value(winrt::Windows::Foundation::IInspectable const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::Media::Animation::KeyTime) KeyTime() const;
        WINRT_IMPL_AUTO(void) KeyTime(winrt::Windows::UI::Xaml::Media::Animation::KeyTime const& value) const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IObjectKeyFrame>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IObjectKeyFrame<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IObjectKeyFrameFactory
    {
        WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::Media::Animation::ObjectKeyFrame) CreateInstance(winrt::Windows::Foundation::IInspectable const& baseInterface, winrt::Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IObjectKeyFrameFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IObjectKeyFrameFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IObjectKeyFrameStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) ValueProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) KeyTimeProperty() const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IObjectKeyFrameStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IObjectKeyFrameStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IPaneThemeTransition
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::Controls::Primitives::EdgeTransitionLocation) Edge() const;
        WINRT_IMPL_AUTO(void) Edge(winrt::Windows::UI::Xaml::Controls::Primitives::EdgeTransitionLocation const& value) const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IPaneThemeTransition>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IPaneThemeTransition<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IPaneThemeTransitionStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) EdgeProperty() const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IPaneThemeTransitionStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IPaneThemeTransitionStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IPointAnimation
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::IReference<winrt::Windows::Foundation::Point>) From() const;
        WINRT_IMPL_AUTO(void) From(winrt::Windows::Foundation::IReference<winrt::Windows::Foundation::Point> const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::IReference<winrt::Windows::Foundation::Point>) To() const;
        WINRT_IMPL_AUTO(void) To(winrt::Windows::Foundation::IReference<winrt::Windows::Foundation::Point> const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::IReference<winrt::Windows::Foundation::Point>) By() const;
        WINRT_IMPL_AUTO(void) By(winrt::Windows::Foundation::IReference<winrt::Windows::Foundation::Point> const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::Media::Animation::EasingFunctionBase) EasingFunction() const;
        WINRT_IMPL_AUTO(void) EasingFunction(winrt::Windows::UI::Xaml::Media::Animation::EasingFunctionBase const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) EnableDependentAnimation() const;
        WINRT_IMPL_AUTO(void) EnableDependentAnimation(bool value) const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IPointAnimation>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IPointAnimation<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IPointAnimationStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) FromProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) ToProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) ByProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) EasingFunctionProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) EnableDependentAnimationProperty() const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IPointAnimationStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IPointAnimationStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IPointAnimationUsingKeyFrames
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::Media::Animation::PointKeyFrameCollection) KeyFrames() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) EnableDependentAnimation() const;
        WINRT_IMPL_AUTO(void) EnableDependentAnimation(bool value) const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IPointAnimationUsingKeyFrames>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IPointAnimationUsingKeyFrames<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IPointAnimationUsingKeyFramesStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) EnableDependentAnimationProperty() const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IPointAnimationUsingKeyFramesStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IPointAnimationUsingKeyFramesStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IPointKeyFrame
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Point) Value() const;
        WINRT_IMPL_AUTO(void) Value(winrt::Windows::Foundation::Point const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::Media::Animation::KeyTime) KeyTime() const;
        WINRT_IMPL_AUTO(void) KeyTime(winrt::Windows::UI::Xaml::Media::Animation::KeyTime const& value) const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IPointKeyFrame>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IPointKeyFrame<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IPointKeyFrameFactory
    {
        WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::Media::Animation::PointKeyFrame) CreateInstance(winrt::Windows::Foundation::IInspectable const& baseInterface, winrt::Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IPointKeyFrameFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IPointKeyFrameFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IPointKeyFrameStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) ValueProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) KeyTimeProperty() const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IPointKeyFrameStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IPointKeyFrameStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IPointerDownThemeAnimation
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) TargetName() const;
        WINRT_IMPL_AUTO(void) TargetName(param::hstring const& value) const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IPointerDownThemeAnimation>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IPointerDownThemeAnimation<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IPointerDownThemeAnimationStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) TargetNameProperty() const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IPointerDownThemeAnimationStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IPointerDownThemeAnimationStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IPointerUpThemeAnimation
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) TargetName() const;
        WINRT_IMPL_AUTO(void) TargetName(param::hstring const& value) const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IPointerUpThemeAnimation>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IPointerUpThemeAnimation<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IPointerUpThemeAnimationStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) TargetNameProperty() const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IPointerUpThemeAnimationStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IPointerUpThemeAnimationStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IPopInThemeAnimation
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) TargetName() const;
        WINRT_IMPL_AUTO(void) TargetName(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) FromHorizontalOffset() const;
        WINRT_IMPL_AUTO(void) FromHorizontalOffset(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) FromVerticalOffset() const;
        WINRT_IMPL_AUTO(void) FromVerticalOffset(double value) const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IPopInThemeAnimation>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IPopInThemeAnimation<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IPopInThemeAnimationStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) TargetNameProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) FromHorizontalOffsetProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) FromVerticalOffsetProperty() const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IPopInThemeAnimationStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IPopInThemeAnimationStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IPopOutThemeAnimation
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) TargetName() const;
        WINRT_IMPL_AUTO(void) TargetName(param::hstring const& value) const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IPopOutThemeAnimation>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IPopOutThemeAnimation<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IPopOutThemeAnimationStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) TargetNameProperty() const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IPopOutThemeAnimationStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IPopOutThemeAnimationStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IPopupThemeTransition
    {
        [[nodiscard]] WINRT_IMPL_AUTO(double) FromHorizontalOffset() const;
        WINRT_IMPL_AUTO(void) FromHorizontalOffset(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) FromVerticalOffset() const;
        WINRT_IMPL_AUTO(void) FromVerticalOffset(double value) const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IPopupThemeTransition>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IPopupThemeTransition<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IPopupThemeTransitionStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) FromHorizontalOffsetProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) FromVerticalOffsetProperty() const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IPopupThemeTransitionStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IPopupThemeTransitionStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IPowerEase
    {
        [[nodiscard]] WINRT_IMPL_AUTO(double) Power() const;
        WINRT_IMPL_AUTO(void) Power(double value) const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IPowerEase>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IPowerEase<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IPowerEaseStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) PowerProperty() const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IPowerEaseStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IPowerEaseStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IQuadraticEase
    {
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IQuadraticEase>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IQuadraticEase<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IQuarticEase
    {
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IQuarticEase>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IQuarticEase<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IQuinticEase
    {
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IQuinticEase>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IQuinticEase<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IReorderThemeTransition
    {
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IReorderThemeTransition>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IReorderThemeTransition<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IRepeatBehaviorHelper
    {
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IRepeatBehaviorHelper>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IRepeatBehaviorHelper<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IRepeatBehaviorHelperStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::Media::Animation::RepeatBehavior) Forever() const;
        WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::Media::Animation::RepeatBehavior) FromCount(double count) const;
        WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::Media::Animation::RepeatBehavior) FromDuration(winrt::Windows::Foundation::TimeSpan const& duration) const;
        WINRT_IMPL_AUTO(bool) GetHasCount(winrt::Windows::UI::Xaml::Media::Animation::RepeatBehavior const& target) const;
        WINRT_IMPL_AUTO(bool) GetHasDuration(winrt::Windows::UI::Xaml::Media::Animation::RepeatBehavior const& target) const;
        WINRT_IMPL_AUTO(bool) Equals(winrt::Windows::UI::Xaml::Media::Animation::RepeatBehavior const& target, winrt::Windows::UI::Xaml::Media::Animation::RepeatBehavior const& value) const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IRepeatBehaviorHelperStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IRepeatBehaviorHelperStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IRepositionThemeAnimation
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) TargetName() const;
        WINRT_IMPL_AUTO(void) TargetName(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) FromHorizontalOffset() const;
        WINRT_IMPL_AUTO(void) FromHorizontalOffset(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) FromVerticalOffset() const;
        WINRT_IMPL_AUTO(void) FromVerticalOffset(double value) const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IRepositionThemeAnimation>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IRepositionThemeAnimation<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IRepositionThemeAnimationStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) TargetNameProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) FromHorizontalOffsetProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) FromVerticalOffsetProperty() const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IRepositionThemeAnimationStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IRepositionThemeAnimationStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IRepositionThemeTransition
    {
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IRepositionThemeTransition>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IRepositionThemeTransition<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IRepositionThemeTransition2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsStaggeringEnabled() const;
        WINRT_IMPL_AUTO(void) IsStaggeringEnabled(bool value) const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IRepositionThemeTransition2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IRepositionThemeTransition2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IRepositionThemeTransitionStatics2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) IsStaggeringEnabledProperty() const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IRepositionThemeTransitionStatics2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IRepositionThemeTransitionStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_ISineEase
    {
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::ISineEase>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_ISineEase<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_ISlideNavigationTransitionInfo
    {
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::ISlideNavigationTransitionInfo>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_ISlideNavigationTransitionInfo<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_ISlideNavigationTransitionInfo2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::Media::Animation::SlideNavigationTransitionEffect) Effect() const;
        WINRT_IMPL_AUTO(void) Effect(winrt::Windows::UI::Xaml::Media::Animation::SlideNavigationTransitionEffect const& value) const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::ISlideNavigationTransitionInfo2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_ISlideNavigationTransitionInfo2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_ISlideNavigationTransitionInfoStatics2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) EffectProperty() const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::ISlideNavigationTransitionInfoStatics2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_ISlideNavigationTransitionInfoStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_ISplineColorKeyFrame
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::Media::Animation::KeySpline) KeySpline() const;
        WINRT_IMPL_AUTO(void) KeySpline(winrt::Windows::UI::Xaml::Media::Animation::KeySpline const& value) const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::ISplineColorKeyFrame>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_ISplineColorKeyFrame<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_ISplineColorKeyFrameStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) KeySplineProperty() const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::ISplineColorKeyFrameStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_ISplineColorKeyFrameStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_ISplineDoubleKeyFrame
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::Media::Animation::KeySpline) KeySpline() const;
        WINRT_IMPL_AUTO(void) KeySpline(winrt::Windows::UI::Xaml::Media::Animation::KeySpline const& value) const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::ISplineDoubleKeyFrame>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_ISplineDoubleKeyFrame<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_ISplineDoubleKeyFrameStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) KeySplineProperty() const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::ISplineDoubleKeyFrameStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_ISplineDoubleKeyFrameStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_ISplinePointKeyFrame
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::Media::Animation::KeySpline) KeySpline() const;
        WINRT_IMPL_AUTO(void) KeySpline(winrt::Windows::UI::Xaml::Media::Animation::KeySpline const& value) const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::ISplinePointKeyFrame>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_ISplinePointKeyFrame<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_ISplinePointKeyFrameStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) KeySplineProperty() const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::ISplinePointKeyFrameStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_ISplinePointKeyFrameStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_ISplitCloseThemeAnimation
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) OpenedTargetName() const;
        WINRT_IMPL_AUTO(void) OpenedTargetName(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyObject) OpenedTarget() const;
        WINRT_IMPL_AUTO(void) OpenedTarget(winrt::Windows::UI::Xaml::DependencyObject const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) ClosedTargetName() const;
        WINRT_IMPL_AUTO(void) ClosedTargetName(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyObject) ClosedTarget() const;
        WINRT_IMPL_AUTO(void) ClosedTarget(winrt::Windows::UI::Xaml::DependencyObject const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) ContentTargetName() const;
        WINRT_IMPL_AUTO(void) ContentTargetName(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyObject) ContentTarget() const;
        WINRT_IMPL_AUTO(void) ContentTarget(winrt::Windows::UI::Xaml::DependencyObject const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) OpenedLength() const;
        WINRT_IMPL_AUTO(void) OpenedLength(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) ClosedLength() const;
        WINRT_IMPL_AUTO(void) ClosedLength(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) OffsetFromCenter() const;
        WINRT_IMPL_AUTO(void) OffsetFromCenter(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::Controls::Primitives::AnimationDirection) ContentTranslationDirection() const;
        WINRT_IMPL_AUTO(void) ContentTranslationDirection(winrt::Windows::UI::Xaml::Controls::Primitives::AnimationDirection const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) ContentTranslationOffset() const;
        WINRT_IMPL_AUTO(void) ContentTranslationOffset(double value) const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::ISplitCloseThemeAnimation>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_ISplitCloseThemeAnimation<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_ISplitCloseThemeAnimationStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) OpenedTargetNameProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) OpenedTargetProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) ClosedTargetNameProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) ClosedTargetProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) ContentTargetNameProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) ContentTargetProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) OpenedLengthProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) ClosedLengthProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) OffsetFromCenterProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) ContentTranslationDirectionProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) ContentTranslationOffsetProperty() const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::ISplitCloseThemeAnimationStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_ISplitCloseThemeAnimationStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_ISplitOpenThemeAnimation
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) OpenedTargetName() const;
        WINRT_IMPL_AUTO(void) OpenedTargetName(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyObject) OpenedTarget() const;
        WINRT_IMPL_AUTO(void) OpenedTarget(winrt::Windows::UI::Xaml::DependencyObject const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) ClosedTargetName() const;
        WINRT_IMPL_AUTO(void) ClosedTargetName(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyObject) ClosedTarget() const;
        WINRT_IMPL_AUTO(void) ClosedTarget(winrt::Windows::UI::Xaml::DependencyObject const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) ContentTargetName() const;
        WINRT_IMPL_AUTO(void) ContentTargetName(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyObject) ContentTarget() const;
        WINRT_IMPL_AUTO(void) ContentTarget(winrt::Windows::UI::Xaml::DependencyObject const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) OpenedLength() const;
        WINRT_IMPL_AUTO(void) OpenedLength(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) ClosedLength() const;
        WINRT_IMPL_AUTO(void) ClosedLength(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) OffsetFromCenter() const;
        WINRT_IMPL_AUTO(void) OffsetFromCenter(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::Controls::Primitives::AnimationDirection) ContentTranslationDirection() const;
        WINRT_IMPL_AUTO(void) ContentTranslationDirection(winrt::Windows::UI::Xaml::Controls::Primitives::AnimationDirection const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) ContentTranslationOffset() const;
        WINRT_IMPL_AUTO(void) ContentTranslationOffset(double value) const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::ISplitOpenThemeAnimation>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_ISplitOpenThemeAnimation<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_ISplitOpenThemeAnimationStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) OpenedTargetNameProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) OpenedTargetProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) ClosedTargetNameProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) ClosedTargetProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) ContentTargetNameProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) ContentTargetProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) OpenedLengthProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) ClosedLengthProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) OffsetFromCenterProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) ContentTranslationDirectionProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) ContentTranslationOffsetProperty() const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::ISplitOpenThemeAnimationStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_ISplitOpenThemeAnimationStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IStoryboard
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::Media::Animation::TimelineCollection) Children() const;
        WINRT_IMPL_AUTO(void) Seek(winrt::Windows::Foundation::TimeSpan const& offset) const;
        WINRT_IMPL_AUTO(void) Stop() const;
        WINRT_IMPL_AUTO(void) Begin() const;
        WINRT_IMPL_AUTO(void) Pause() const;
        WINRT_IMPL_AUTO(void) Resume() const;
        WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::Media::Animation::ClockState) GetCurrentState() const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::TimeSpan) GetCurrentTime() const;
        WINRT_IMPL_AUTO(void) SeekAlignedToLastTick(winrt::Windows::Foundation::TimeSpan const& offset) const;
        WINRT_IMPL_AUTO(void) SkipToFill() const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IStoryboard>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IStoryboard<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_IStoryboardStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) TargetPropertyProperty() const;
        WINRT_IMPL_AUTO(hstring) GetTargetProperty(winrt::Windows::UI::Xaml::Media::Animation::Timeline const& element) const;
        WINRT_IMPL_AUTO(void) SetTargetProperty(winrt::Windows::UI::Xaml::Media::Animation::Timeline const& element, param::hstring const& path) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) TargetNameProperty() const;
        WINRT_IMPL_AUTO(hstring) GetTargetName(winrt::Windows::UI::Xaml::Media::Animation::Timeline const& element) const;
        WINRT_IMPL_AUTO(void) SetTargetName(winrt::Windows::UI::Xaml::Media::Animation::Timeline const& element, param::hstring const& name) const;
        WINRT_IMPL_AUTO(void) SetTarget(winrt::Windows::UI::Xaml::Media::Animation::Timeline const& timeline, winrt::Windows::UI::Xaml::DependencyObject const& target) const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::IStoryboardStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_IStoryboardStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_ISuppressNavigationTransitionInfo
    {
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::ISuppressNavigationTransitionInfo>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_ISuppressNavigationTransitionInfo<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_ISwipeBackThemeAnimation
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) TargetName() const;
        WINRT_IMPL_AUTO(void) TargetName(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) FromHorizontalOffset() const;
        WINRT_IMPL_AUTO(void) FromHorizontalOffset(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) FromVerticalOffset() const;
        WINRT_IMPL_AUTO(void) FromVerticalOffset(double value) const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::ISwipeBackThemeAnimation>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_ISwipeBackThemeAnimation<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_ISwipeBackThemeAnimationStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) TargetNameProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) FromHorizontalOffsetProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) FromVerticalOffsetProperty() const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::ISwipeBackThemeAnimationStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_ISwipeBackThemeAnimationStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_ISwipeHintThemeAnimation
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) TargetName() const;
        WINRT_IMPL_AUTO(void) TargetName(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) ToHorizontalOffset() const;
        WINRT_IMPL_AUTO(void) ToHorizontalOffset(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) ToVerticalOffset() const;
        WINRT_IMPL_AUTO(void) ToVerticalOffset(double value) const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::ISwipeHintThemeAnimation>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_ISwipeHintThemeAnimation<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_ISwipeHintThemeAnimationStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) TargetNameProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) ToHorizontalOffsetProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) ToVerticalOffsetProperty() const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::ISwipeHintThemeAnimationStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_ISwipeHintThemeAnimationStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_ITimeline
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) AutoReverse() const;
        WINRT_IMPL_AUTO(void) AutoReverse(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::IReference<winrt::Windows::Foundation::TimeSpan>) BeginTime() const;
        WINRT_IMPL_AUTO(void) BeginTime(winrt::Windows::Foundation::IReference<winrt::Windows::Foundation::TimeSpan> const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::Duration) Duration() const;
        WINRT_IMPL_AUTO(void) Duration(winrt::Windows::UI::Xaml::Duration const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) SpeedRatio() const;
        WINRT_IMPL_AUTO(void) SpeedRatio(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::Media::Animation::FillBehavior) FillBehavior() const;
        WINRT_IMPL_AUTO(void) FillBehavior(winrt::Windows::UI::Xaml::Media::Animation::FillBehavior const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::Media::Animation::RepeatBehavior) RepeatBehavior() const;
        WINRT_IMPL_AUTO(void) RepeatBehavior(winrt::Windows::UI::Xaml::Media::Animation::RepeatBehavior const& value) const;
        WINRT_IMPL_AUTO(winrt::event_token) Completed(winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler) const;
        using Completed_revoker = impl::event_revoker<winrt::Windows::UI::Xaml::Media::Animation::ITimeline, &impl::abi_t<winrt::Windows::UI::Xaml::Media::Animation::ITimeline>::remove_Completed>;
        [[nodiscard]] Completed_revoker Completed(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) Completed(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::ITimeline>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_ITimeline<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_ITimelineFactory
    {
        WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::Media::Animation::Timeline) CreateInstance(winrt::Windows::Foundation::IInspectable const& baseInterface, winrt::Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::ITimelineFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_ITimelineFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_ITimelineStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) AllowDependentAnimations() const;
        WINRT_IMPL_AUTO(void) AllowDependentAnimations(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) AutoReverseProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) BeginTimeProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) DurationProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) SpeedRatioProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) FillBehaviorProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::UI::Xaml::DependencyProperty) RepeatBehaviorProperty() const;
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::ITimelineStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_ITimelineStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_ITransition
    {
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::ITransition>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_ITransition<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Media_Animation_ITransitionFactory
    {
    };
    template <> struct consume<winrt::Windows::UI::Xaml::Media::Animation::ITransitionFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Media_Animation_ITransitionFactory<D>;
    };
    struct struct_Windows_UI_Xaml_Media_Animation_KeyTime
    {
        int64_t TimeSpan;
    };
    template <> struct abi<Windows::UI::Xaml::Media::Animation::KeyTime>
    {
        using type = struct_Windows_UI_Xaml_Media_Animation_KeyTime;
    };
    struct struct_Windows_UI_Xaml_Media_Animation_RepeatBehavior
    {
        double Count;
        int64_t Duration;
        int32_t Type;
    };
    template <> struct abi<Windows::UI::Xaml::Media::Animation::RepeatBehavior>
    {
        using type = struct_Windows_UI_Xaml_Media_Animation_RepeatBehavior;
    };
}
#endif
