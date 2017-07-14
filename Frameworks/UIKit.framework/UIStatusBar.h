/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIStatusBar : _UIScrollsToTopInitiatorView <UIStatusBarServerClient, UIStatusBarStateObserver> {
    <UIViewControllerTransitionCoordinator> * __transitionCoordinator;
    UIStatusBarBackgroundView * _backgroundView;
    NSString * _currentDoubleHeightText;
    struct { 
        BOOL itemIsEnabled[35]; 
        BOOL timeString[64]; 
        int gsmSignalStrengthRaw; 
        int gsmSignalStrengthBars; 
        BOOL serviceString[100]; 
        BOOL serviceCrossfadeString[100]; 
        BOOL serviceImages[2][100]; 
        BOOL operatorDirectory[1024]; 
        unsigned int serviceContentType; 
        int wifiSignalStrengthRaw; 
        int wifiSignalStrengthBars; 
        unsigned int dataNetworkType; 
        int batteryCapacity; 
        unsigned int batteryState; 
        BOOL batteryDetailString[150]; 
        int bluetoothBatteryCapacity; 
        int thermalColor; 
        unsigned int thermalSunlightMode : 1; 
        unsigned int slowActivity : 1; 
        unsigned int syncActivity : 1; 
        BOOL activityDisplayId[256]; 
        unsigned int bluetoothConnected : 1; 
        unsigned int displayRawGSMSignal : 1; 
        unsigned int displayRawWifiSignal : 1; 
        unsigned int locationIconType : 1; 
        unsigned int quietModeInactive : 1; 
        unsigned int tetheringConnectionCount; 
        unsigned int batterySaverModeActive : 1; 
        unsigned int deviceIsRTL : 1; 
        unsigned int lock : 1; 
        BOOL breadcrumbTitle[256]; 
        BOOL breadcrumbSecondaryTitle[256]; 
        BOOL personName[100]; 
        unsigned int electronicTollCollectionAvailable : 1; 
        unsigned int wifiLinkWarning : 1; 
    }  _currentRawData;
    NSMutableSet * _disableRasterizationReasons;
    <UIStatusBarCarPlayDockDataProviding> * _dockDataProvider;
    UILabel * _doubleHeightLabel;
    UIView * _doubleHeightLabelContainer;
    BOOL  _foreground;
    UIColor * _foregroundColor;
    UIStatusBarForegroundView * _foregroundView;
    BOOL  _foregroundViewShouldIgnoreStatusBarDataDuringAnimation;
    BOOL  _hidden;
    BOOL  _homeItemsDisabled;
    <UIStatusBarStateProvider> * _inProcessProvider;
    NSMutableArray * _interruptedAnimationCompositeViews;
    UIColor * _lastUsedBackgroundColor;
    int  _legibilityStyle;
    struct { BOOL x1[35]; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 2; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 1; unsigned int x11 : 1; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; struct { BOOL x_27_1_1[35]; BOOL x_27_1_2[64]; int x_27_1_3; int x_27_1_4; BOOL x_27_1_5[100]; BOOL x_27_1_6[100]; BOOL x_27_1_7[2][100]; BOOL x_27_1_8[1024]; unsigned int x_27_1_9; int x_27_1_10; int x_27_1_11; unsigned int x_27_1_12; int x_27_1_13; unsigned int x_27_1_14; BOOL x_27_1_15[150]; int x_27_1_16; int x_27_1_17; unsigned int x_27_1_18 : 1; unsigned int x_27_1_19 : 1; unsigned int x_27_1_20 : 1; BOOL x_27_1_21[256]; unsigned int x_27_1_22 : 1; unsigned int x_27_1_23 : 1; unsigned int x_27_1_24 : 1; unsigned int x_27_1_25 : 1; unsigned int x_27_1_26 : 1; unsigned int x_27_1_27; unsigned int x_27_1_28 : 1; unsigned int x_27_1_29 : 1; unsigned int x_27_1_30 : 1; BOOL x_27_1_31[256]; BOOL x_27_1_32[256]; BOOL x_27_1_33[100]; unsigned int x_27_1_34 : 1; unsigned int x_27_1_35 : 1; } x27; } * _localDataOverrides;
    UIStatusBarBackgroundView * _newStyleBackgroundView;
    UIStatusBarForegroundView * _newStyleForegroundView;
    UIStatusBarStyleAnimationParameters * _nextTintTransition;
    int  _orientation;
    NSNumber * _overrideHeight;
    BOOL  _persistentAnimationsEnabled;
    BOOL  _registered;
    int  _requestedStyle;
    BOOL  _serverUpdatesDisabled;
    BOOL  _showOnlyCenterItems;
    BOOL  _showsForeground;
    BOOL  _simulatesLegacyAppearance;
    UIStatusBar * _slidingStatusBar;
    UIStatusBarServer * _statusBarServer;
    UIStatusBarWindow * _statusBarWindow;
    UIStatusBarStyleAttributes * _styleAttributes;
    <UIStatusBarStyleDelegate> * _styleDelegate;
    int  _styleOverrides;
    BOOL  _suppressGlow;
    BOOL  _suppressesHiddenSideEffects;
    BOOL  _timeHidden;
    UIColor * _tintColor;
    float  _translucentBackgroundAlpha;
    BOOL  _waitingOnCallbackAfterChangingStyleOverridesLocally;
}

@property (nonatomic) <UIViewControllerTransitionCoordinator> *_transitionCoordinator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <UIStatusBarCarPlayDockDataProviding> *dockDataProvider;
@property (nonatomic, retain) UIColor *foregroundColor;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL homeItemsDisabled;
@property (nonatomic) int legibilityStyle;
@property (nonatomic) BOOL persistentAnimationsEnabled;
@property (nonatomic) BOOL serverUpdatesDisabled;
@property (nonatomic) BOOL simulatesLegacyAppearance;
@property (nonatomic) UIStatusBarWindow *statusBarWindow;
@property (nonatomic) <UIStatusBarStyleDelegate> *styleDelegate;
@property (nonatomic, readonly) int styleOverrides;
@property (nonatomic, copy) UIStatusBarStyleRequest *styleRequest;
@property (readonly) Class superclass;
@property (getter=isTimeHidden, nonatomic) BOOL timeHidden;

+ (int)_defaultStyleForRequestedStyle:(int)arg1 styleOverrides:(int)arg2 simulateLegacyAppearance:(BOOL)arg3;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameInSceneReferenceSpaceForStyle:(int)arg1 orientation:(int)arg2 inSceneWithReferenceSize:(struct CGSize { float x1; float x2; })arg3;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameInSceneReferenceSpaceForStyleAttributes:(id)arg1 orientation:(int)arg2;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameInSceneReferenceSpaceForStyleAttributes:(id)arg1 orientation:(int)arg2 inSceneWithReferenceSize:(struct CGSize { float x1; float x2; })arg3;
+ (BOOL)_isLightContentStyle:(int)arg1;
+ (id)_newStyleAttributesForRequest:(id)arg1;
+ (void)_setDeviceUserInterfaceLayoutDirection:(int)arg1;
+ (id)_styleAttributesForRequest:(id)arg1;
+ (id)_styleAttributesForStatusBarStyle:(int)arg1 legacy:(BOOL)arg2;
+ (int)cornerStyleForRequestedStyle:(int)arg1 effectiveStyle:(int)arg2 alignment:(int)arg3;
+ (id)defaultBlueTintColor;
+ (int)defaultStatusBarStyleWithTint:(BOOL)arg1;
+ (int)defaultStyleForRequestedStyle:(int)arg1 styleOverrides:(int)arg2;
+ (int)deviceUserInterfaceLayoutDirection;
+ (void)enumerateStatusBarStyleOverridesWithBlock:(id /* block */)arg1;
+ (void)getData:(struct { BOOL x1[35]; BOOL x2[64]; int x3; int x4; BOOL x5[100]; BOOL x6[100]; BOOL x7[2][100]; BOOL x8[1024]; unsigned int x9; int x10; int x11; unsigned int x12; int x13; unsigned int x14; BOOL x15[150]; int x16; int x17; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; BOOL x21[256]; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27; unsigned int x28 : 1; unsigned int x29 : 1; unsigned int x30 : 1; BOOL x31[256]; BOOL x32[256]; BOOL x33[100]; unsigned int x34 : 1; unsigned int x35 : 1; }*)arg1 forRequestedData:(const struct { BOOL x1[35]; BOOL x2[64]; int x3; int x4; BOOL x5[100]; BOOL x6[100]; BOOL x7[2][100]; BOOL x8[1024]; unsigned int x9; int x10; int x11; unsigned int x12; int x13; unsigned int x14; BOOL x15[150]; int x16; int x17; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; BOOL x21[256]; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27; unsigned int x28 : 1; unsigned int x29 : 1; unsigned int x30 : 1; BOOL x31[256]; BOOL x32[256]; BOOL x33[100]; unsigned int x34 : 1; unsigned int x35 : 1; }*)arg2 withOverrides:(const struct { BOOL x1[35]; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 2; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 1; unsigned int x11 : 1; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; struct { BOOL x_27_1_1[35]; BOOL x_27_1_2[64]; int x_27_1_3; int x_27_1_4; BOOL x_27_1_5[100]; BOOL x_27_1_6[100]; BOOL x_27_1_7[2][100]; BOOL x_27_1_8[1024]; unsigned int x_27_1_9; int x_27_1_10; int x_27_1_11; unsigned int x_27_1_12; int x_27_1_13; unsigned int x_27_1_14; BOOL x_27_1_15[150]; int x_27_1_16; int x_27_1_17; unsigned int x_27_1_18 : 1; unsigned int x_27_1_19 : 1; unsigned int x_27_1_20 : 1; BOOL x_27_1_21[256]; unsigned int x_27_1_22 : 1; unsigned int x_27_1_23 : 1; unsigned int x_27_1_24 : 1; unsigned int x_27_1_25 : 1; unsigned int x_27_1_26 : 1; unsigned int x_27_1_27; unsigned int x_27_1_28 : 1; unsigned int x_27_1_29 : 1; unsigned int x_27_1_30 : 1; BOOL x_27_1_31[256]; BOOL x_27_1_32[256]; BOOL x_27_1_33[100]; unsigned int x_27_1_34 : 1; unsigned int x_27_1_35 : 1; } x27; }*)arg3;
+ (float)heightForStyle:(int)arg1 orientation:(int)arg2;
+ (int)lowBatteryLevel;
+ (id)navBarTintColorFromStatusBarTintColor:(id)arg1;
+ (void)setSuppressUpdateAnimations:(BOOL)arg1;
+ (void)setTintOverrideEnabled:(BOOL)arg1 withColor:(id)arg2;
+ (id)statusBarTintColorForNavBarTintColor:(id)arg1;

- (void).cxx_destruct;
- (void)_adjustDoubleHeightTextVisibility;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_backgroundFrameForAttributes:(id)arg1;
- (id)_backgroundView;
- (void)_beginDisablingRasterizationForReason:(id)arg1;
- (void)_clearOverrideHeight;
- (void)_crossfadeToNewBackgroundView;
- (void)_crossfadeToNewForegroundViewWithAlpha:(float)arg1;
- (id)_currentComposedData;
- (id)_currentComposedDataForStyle:(id)arg1;
- (id)_currentStyleAttributes;
- (void)_didChangeFromIdiom:(int)arg1 onScreen:(id)arg2 traverseHierarchy:(BOOL)arg3;
- (void)_didEnterBackground:(id)arg1;
- (id)_doubleHeightStatusStringForStyle:(int)arg1;
- (void)_endDisablingRasterizationForReason:(id)arg1;
- (void)_evaluateServerRegistration;
- (void)_finishedSettingStyleWithOldHeight:(float)arg1 newHeight:(float)arg2 animation:(int)arg3;
- (float)_hiddenAlphaForHideAnimationParameters:(id)arg1;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })_hiddenTransformForHideAnimationParameters:(id)arg1;
- (BOOL)_isTransparent;
- (void)_itemViewPerformButtonAction:(id)arg1;
- (void)_itemViewShouldBeginDisablingRasterization:(id)arg1;
- (void)_itemViewShouldEndDisablingRasterization:(id)arg1;
- (void)_performBlockWhileIgnoringForegroundViewChanges:(id /* block */)arg1;
- (id)_prepareInterruptedAnimationCompositeViewIncludingForeground:(BOOL)arg1;
- (id)_prepareToSetStyle:(id)arg1 animation:(int)arg2 forced:(BOOL)arg3;
- (BOOL)_rectIntersectsTimeItem:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_requestStyleAttributes:(id)arg1 animationParameters:(id)arg2;
- (void)_requestStyleAttributes:(id)arg1 animationParameters:(id)arg2 forced:(BOOL)arg3;
- (int)_requestedStyle;
- (void)_setDoubleHeightStatusString:(id)arg1;
- (void)_setFrameForStyle:(id)arg1;
- (void)_setOverrideHeight:(float)arg1;
- (void)_setStyle:(id)arg1;
- (void)_setStyle:(id)arg1 animation:(int)arg2;
- (void)_setVisualAltitude:(float)arg1;
- (void)_setVisualAltitudeBias:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)_shouldReverseLayoutDirection;
- (BOOL)_shouldSeekHigherPriorityTouchTarget;
- (BOOL)_shouldUseInProcessProviderDoubleHeightStatusString;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })_slideTransform;
- (float)_standardHeight;
- (void)_statusBarDidAnimateRotation;
- (void)_statusBarWillAnimateRotation;
- (id)_styleAttributesForRequest:(id)arg1;
- (void)_styleOverridesDidChange:(id)arg1;
- (void)_swapToNewBackgroundView;
- (void)_swapToNewForegroundView;
- (BOOL)_touchShouldProduceReturnEvent;
- (id)_transitionCoordinator;
- (void)_updateBackgroundFrame;
- (void)_updatePersistentAnimationsEnabledForForegroundView:(id)arg1;
- (void)_updateShouldRasterize;
- (void)_willEnterForeground:(id)arg1;
- (id)activeTintColor;
- (void)animateUnlock;
- (void)crossfadeTime:(BOOL)arg1 duration:(double)arg2;
- (id)currentDoubleHeightLabelText;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })currentFrame;
- (float)currentHeight;
- (int)currentStyle;
- (id)currentStyleRequestForStyle:(int)arg1;
- (void)dealloc;
- (float)defaultDoubleHeight;
- (float)defaultHeight;
- (void)didMoveToSuperview;
- (id)dockDataProvider;
- (void)forceUpdateData:(BOOL)arg1;
- (void)forceUpdateDoubleHeightStatus;
- (void)forceUpdateGlowAnimation;
- (void)forceUpdateStyleOverrides:(BOOL)arg1;
- (void)forceUpdateToData:(const struct { BOOL x1[35]; BOOL x2[64]; int x3; int x4; BOOL x5[100]; BOOL x6[100]; BOOL x7[2][100]; BOOL x8[1024]; unsigned int x9; int x10; int x11; unsigned int x12; int x13; unsigned int x14; BOOL x15[150]; int x16; int x17; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; BOOL x21[256]; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27; unsigned int x28 : 1; unsigned int x29 : 1; unsigned int x30 : 1; BOOL x31[256]; BOOL x32[256]; BOOL x33[100]; unsigned int x34 : 1; unsigned int x35 : 1; }*)arg1 animated:(BOOL)arg2;
- (id)foregroundColor;
- (void)forgetEitherSideHistory;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForOrientation:(int)arg1;
- (float)heightForOrientation:(int)arg1;
- (BOOL)homeItemsDisabled;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 showForegroundView:(BOOL)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 showForegroundView:(BOOL)arg2 inProcessStateProvider:(id)arg3;
- (BOOL)isDoubleHeight;
- (BOOL)isHidden;
- (BOOL)isTimeHidden;
- (BOOL)isTranslucent;
- (void)jiggleLockIcon;
- (void)layoutSubviews;
- (int)legibilityStyle;
- (void)noteStyleOverridesChangedLocally;
- (BOOL)persistentAnimationsEnabled;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)requestStyle:(int)arg1;
- (void)requestStyle:(int)arg1 animated:(BOOL)arg2;
- (void)requestStyle:(int)arg1 animated:(BOOL)arg2 forced:(BOOL)arg3;
- (void)requestStyle:(int)arg1 animation:(int)arg2 startTime:(double)arg3 duration:(double)arg4 curve:(int)arg5;
- (void)requestStyle:(int)arg1 animationParameters:(id)arg2;
- (void)requestStyle:(int)arg1 animationParameters:(id)arg2 forced:(BOOL)arg3;
- (BOOL)serverUpdatesDisabled;
- (void)setBackgroundAlpha:(float)arg1;
- (void)setDockDataProvider:(id)arg1;
- (void)setEnabledCenterItems:(id)arg1 duration:(double)arg2;
- (void)setForegroundAlpha:(float)arg1 animationParameters:(id)arg2;
- (void)setForegroundColor:(id)arg1;
- (void)setForegroundColor:(id)arg1 animationParameters:(id)arg2;
- (void)setHidden:(BOOL)arg1;
- (void)setHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setHidden:(BOOL)arg1 animationParameters:(id)arg2;
- (void)setHomeItemsDisabled:(BOOL)arg1;
- (void)setLegibilityStyle:(int)arg1;
- (void)setLegibilityStyle:(int)arg1 animationParameters:(id)arg2;
- (void)setLocalDataOverrides:(struct { BOOL x1[35]; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 2; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 1; unsigned int x11 : 1; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; struct { BOOL x_27_1_1[35]; BOOL x_27_1_2[64]; int x_27_1_3; int x_27_1_4; BOOL x_27_1_5[100]; BOOL x_27_1_6[100]; BOOL x_27_1_7[2][100]; BOOL x_27_1_8[1024]; unsigned int x_27_1_9; int x_27_1_10; int x_27_1_11; unsigned int x_27_1_12; int x_27_1_13; unsigned int x_27_1_14; BOOL x_27_1_15[150]; int x_27_1_16; int x_27_1_17; unsigned int x_27_1_18 : 1; unsigned int x_27_1_19 : 1; unsigned int x_27_1_20 : 1; BOOL x_27_1_21[256]; unsigned int x_27_1_22 : 1; unsigned int x_27_1_23 : 1; unsigned int x_27_1_24 : 1; unsigned int x_27_1_25 : 1; unsigned int x_27_1_26 : 1; unsigned int x_27_1_27; unsigned int x_27_1_28 : 1; unsigned int x_27_1_29 : 1; unsigned int x_27_1_30 : 1; BOOL x_27_1_31[256]; BOOL x_27_1_32[256]; BOOL x_27_1_33[100]; unsigned int x_27_1_34 : 1; unsigned int x_27_1_35 : 1; } x27; }*)arg1;
- (void)setOrientation:(int)arg1;
- (void)setPersistentAnimationsEnabled:(BOOL)arg1;
- (void)setServerUpdatesDisabled:(BOOL)arg1;
- (void)setShowsOnlyCenterItems:(BOOL)arg1;
- (void)setSimulatesLegacyAppearance:(BOOL)arg1;
- (void)setStatusBarWindow:(id)arg1;
- (void)setStyleDelegate:(id)arg1;
- (void)setStyleRequest:(id)arg1;
- (void)setStyleRequest:(id)arg1 animationParameters:(id)arg2;
- (void)setSuppressesGlow:(BOOL)arg1;
- (void)setSuppressesHiddenSideEffects:(BOOL)arg1;
- (void)setTimeHidden:(BOOL)arg1;
- (void)setTintColor:(id)arg1;
- (void)setTintColor:(id)arg1 withDuration:(double)arg2;
- (void)set_transitionCoordinator:(id)arg1;
- (BOOL)showsContentsOnScreen;
- (BOOL)simulatesLegacyAppearance;
- (void)statusBarServer:(id)arg1 didReceiveDoubleHeightStatusString:(id)arg2 forStyle:(int)arg3;
- (void)statusBarServer:(id)arg1 didReceiveGlowAnimationState:(BOOL)arg2 forStyle:(int)arg3;
- (void)statusBarServer:(id)arg1 didReceiveStatusBarData:(const struct { BOOL x1[35]; BOOL x2[64]; int x3; int x4; BOOL x5[100]; BOOL x6[100]; BOOL x7[2][100]; BOOL x8[1024]; unsigned int x9; int x10; int x11; unsigned int x12; int x13; unsigned int x14; BOOL x15[150]; int x16; int x17; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; BOOL x21[256]; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27; unsigned int x28 : 1; unsigned int x29 : 1; unsigned int x30 : 1; BOOL x31[256]; BOOL x32[256]; BOOL x33[100]; unsigned int x34 : 1; unsigned int x35 : 1; }*)arg2 withActions:(int)arg3;
- (void)statusBarServer:(id)arg1 didReceiveStyleOverrides:(int)arg2;
- (void)statusBarStateProvider:(id)arg1 didChangeDoubleHeightStatusStringForStyle:(int)arg2;
- (void)statusBarStateProvider:(id)arg1 didPostStatusBarData:(const struct { BOOL x1[35]; BOOL x2[64]; int x3; int x4; BOOL x5[100]; BOOL x6[100]; BOOL x7[2][100]; BOOL x8[1024]; unsigned int x9; int x10; int x11; unsigned int x12; int x13; unsigned int x14; BOOL x15[150]; int x16; int x17; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; BOOL x21[256]; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27; unsigned int x28 : 1; unsigned int x29 : 1; unsigned int x30 : 1; BOOL x31[256]; BOOL x32[256]; BOOL x33[100]; unsigned int x34 : 1; unsigned int x35 : 1; }*)arg2 withActions:(int)arg3;
- (id)statusBarWindow;
- (id)styleDelegate;
- (int)styleForRequestedStyle:(int)arg1;
- (int)styleOverrides;
- (id)styleRequest;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end
