/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIScreenFocusSystem : NSObject <BKSEventFocusObserving> {
    _UIFocusAnimationCoordinatorManager * _focusAnimationCoordinatorManager;
    BOOL  _focusEnabled;
    <UIFocusItem> * _focusedItem;
    BOOL  _forceSourceItemMayRemainFocused;
    BOOL  _ignoreFocusUpdateIfNeeded;
    BOOL  _pendingFocusRestoration;
    BOOL  _pendingFocusUpdateAllowsDeferral;
    <UIFocusEnvironment> * _pendingFocusUpdateEnvironment;
    <UIFocusItem> * _previousFocusedItem;
    UIScreen * _screen;
}

@property (nonatomic, readonly) UIFocusAnimationCoordinator *currentFocusAnimationCoordinator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=_focusAnimationCoordinatorManager, setter=_setFocusAnimationCoordinatorManager:, nonatomic, retain) _UIFocusAnimationCoordinatorManager *focusAnimationCoordinatorManager;
@property (getter=isFocusEnabled, nonatomic) BOOL focusEnabled;
@property (nonatomic, readonly) <UIFocusItem> *focusedItem;
@property (nonatomic, readonly) UIView *focusedView;
@property (getter=_forceSourceItemMayRemainFocused, setter=_forceSourceItemMayRemainFocused:, nonatomic) BOOL forceSourceItemMayRemainFocused;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL ignoreFocusUpdateIfNeeded;
@property (getter=_pendingFocusRestoration, setter=_setPendingFocusRestoration:, nonatomic) BOOL pendingFocusRestoration;
@property (getter=_pendingFocusUpdateAllowsDeferral, setter=_setPendingFocusUpdateAllowsDeferral:, nonatomic) BOOL pendingFocusUpdateAllowsDeferral;
@property (getter=_pendingFocusUpdateEnvironment, setter=_setPendingFocusUpdateEnvironment:, nonatomic) <UIFocusEnvironment> *pendingFocusUpdateEnvironment;
@property (nonatomic, readonly) <UIFocusItem> *previousFocusedItem;
@property (nonatomic) UIScreen *screen;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_focusAnimationCoordinatorManager;
- (BOOL)_forceSourceItemMayRemainFocused;
- (void)_forceSourceItemMayRemainFocused:(BOOL)arg1;
- (BOOL)_isEnvironmentEligibleForFocusUpdate:(id)arg1 allowsDeferral:(BOOL)arg2;
- (BOOL)_pendingFocusRestoration;
- (BOOL)_pendingFocusUpdateAllowsDeferral;
- (id)_pendingFocusUpdateEnvironment;
- (void)_setFocusAnimationCoordinatorManager:(id)arg1;
- (void)_setPendingFocusRestoration:(BOOL)arg1;
- (void)_setPendingFocusUpdateAllowsDeferral:(BOOL)arg1;
- (void)_setPendingFocusUpdateEnvironment:(id)arg1;
- (void)_uiktest_setPreviousFocusedItem:(id)arg1;
- (BOOL)_updateFocusWithContext:(id)arg1;
- (void)cancelPendingFocusRestoration;
- (id)contextForProgrammaticFocusUpdateToEnvironment:(id)arg1;
- (id)currentFocusAnimationCoordinator;
- (void)dealloc;
- (void)focusEnvironmentWillDisappear:(id)arg1;
- (void)focusedDeferralPropertiesDidChange:(id)arg1;
- (id)focusedItem;
- (id)focusedView;
- (BOOL)ignoreFocusUpdateIfNeeded;
- (id)initWithScreen:(id)arg1;
- (BOOL)isFocusEnabled;
- (id)previousFocusedItem;
- (BOOL)requestFocusUpdateToEnvironment:(id)arg1 allowsDeferral:(BOOL)arg2;
- (BOOL)requestForcedFocusUpdateToEnvironment:(id)arg1;
- (id)screen;
- (void)setFocusEnabled:(BOOL)arg1;
- (void)setIgnoreFocusUpdateIfNeeded:(BOOL)arg1;
- (void)setNeedsFocusRestoration;
- (void)setScreen:(id)arg1;
- (void)updateFocusIfNeeded;
- (BOOL)updateFocusWithContext:(id)arg1;

@end
