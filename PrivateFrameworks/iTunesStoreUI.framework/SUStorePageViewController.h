/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class SSAuthenticationContext, SUNavigationMenuViewController, SUViewController, ISURLRequestPerformance, <SUStorePageViewControllerDelegate>, SUStorePageProtocol, SSMutableURLRequestProperties, SUSearchFieldController, UIPopoverController, SSURLRequestProperties, SUSegmentedControl, NSString, SUPageSectionGroup;

@interface SUStorePageViewController : SUViewController <SUMenuViewControllerDelegate, SUPreviewOverlayContainer, UIPopoverControllerDelegate, ISURLOperationDelegate> {
    SUViewController *_activeChildViewController;
    struct __CFSet { } *_allowedInterfaceOrientations;
    double _expirationTime;
    int _pageType;
    SUViewController *_pendingChildViewController;
    NSString *_scriptUserInfo;
    SUStorePageProtocol *_lastValidProtocol;
    UIPopoverController *_navigationMenuPopover;
    SUNavigationMenuViewController *_navigationMenuViewController;
    SUSearchFieldController *_searchFieldController;
    BOOL _canMoveToOverlay;
    BOOL _externalRequest;
    BOOL _loadingForSectionChange;
    BOOL _loadsWhenHidden;
    BOOL _reloadOnAppear;
    BOOL _reloadsWhenCacheExpired;
    SSAuthenticationContext *_authContext;
    SSMutableURLRequestProperties *_urlRequestProperties;
    BOOL _needsAuthentication;
    int _activeSectionIndex;
    SUPageSectionGroup *_sectionsGroup;
    SUSegmentedControl *_segmentedControl;
    <SUStorePageViewControllerDelegate> *_delegate;
    BOOL _lastLoadDidFail;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _loadBlock;

    ISURLRequestPerformance *_performanceMetrics;
    BOOL _useWebViewFastPath;
}

@property(retain) SSAuthenticationContext * authenticationContext;
@property(getter=isExternalRequest) BOOL externalRequest;
@property BOOL needsAuthentication;
@property(copy) SSURLRequestProperties * URLRequestProperties;
@property BOOL canMoveToOverlay;
@property BOOL loadsWhenHidden;
@property(readonly) SUViewController * activeChildViewController;
@property(readonly) SUSearchFieldController * searchFieldController;
@property(readonly) SUPageSectionGroup * sectionGroup;
@property(readonly) SUSegmentedControl * sectionSegmentedControl;
@property(copy) NSString * scriptUserInfo;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } documentBounds;
@property(readonly) BOOL canBeResolved;
@property <SUStorePageViewControllerDelegate> * delegate;
@property(getter=_reloadsWhenCacheExpired,setter=_setReloadsWhenCacheExpired:) BOOL _reloadsWhenCacheExpired;
@property(getter=_isCacheExpired,readonly) BOOL _cacheExpired;


- (void)setCanMoveToOverlay:(BOOL)arg1;
- (id)sectionSegmentedControl;
- (id)sectionGroup;
- (id)searchFieldController;
- (void)_setReloadsWhenCacheExpired:(BOOL)arg1;
- (void)setExternalRequest:(BOOL)arg1;
- (id)activeChildViewController;
- (id)_activeChildViewController;
- (BOOL)loadMoreWithURL:(id)arg1;
- (void)iTunesStoreUI_searchFieldControllerDidChange:(id)arg1;
- (void)handleStoreFailureWithError:(id)arg1;
- (void)setURLRequest:(id)arg1;
- (void)setUrlBagKey:(id)arg1;
- (BOOL)decidePolicyForWebNavigationAction:(id)arg1 request:(id)arg2 decisionListener:(id)arg3;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (BOOL)showPreviewOverlay:(id)arg1 animated:(BOOL)arg2 completionBlock:(id)arg3;
- (void)hidePreviewOverlay:(id)arg1 animated:(BOOL)arg2 completionBlock:(id)arg3;
- (void)menuViewControllerDidCancel:(id)arg1;
- (void)menuViewController:(id)arg1 didTapButton:(id)arg2;
- (void)menuViewController:(id)arg1 didSelectItemAtIndex:(int)arg2;
- (id)_newBarButtonItemsWithButtonItems:(id)arg1 replacingItemWithTag:(int)arg2 withButtonItem:(id)arg3;
- (BOOL)reloadForSectionsWithGroup:(id)arg1;
- (void)_sectionControlAction:(id)arg1;
- (id)setDisplayedSectionGroup:(id)arg1;
- (BOOL)_isInTransientViewController;
- (BOOL)isShowingPreviewOverlay;
- (void)_navigationMenuButtonAction:(id)arg1;
- (void)_setRightNavigationItem:(id)arg1 forTag:(int)arg2;
- (void)_setLeftNavigationItem:(id)arg1 forTag:(int)arg2;
- (void)_navigationButtonAction:(id)arg1;
- (void)_setSegmentedControl:(id)arg1;
- (void)_reloadNavigationMenus;
- (void)_reloadNavigationButtons;
- (BOOL)_isCacheExpired;
- (BOOL)_reloadsWhenCacheExpired;
- (BOOL)pushStorePage:(id)arg1 withTarget:(int)arg2 animated:(BOOL)arg3;
- (BOOL)isExternalRequest;
- (void)_fetchPage:(BOOL)arg1;
- (void)_moveToRootSectionForChildViewController:(id)arg1 protocol:(id)arg2;
- (void)_finishSuccessfulLoad;
- (BOOL)_shouldDisplaySegmentedControlInNavigationBar:(id)arg1;
- (BOOL)_shouldDisplayControlsInNavigationBar;
- (void)_setHeaderView:(id)arg1;
- (void)enqueueFetchOperationForPageSection:(id)arg1;
- (void)_finishHandlingFailure;
- (void)_handleViewControllerBecameReady:(id)arg1;
- (void)_performActionForProtocolButton:(id)arg1;
- (BOOL)_reloadWithURLRequestProperties:(id)arg1 preserveSectionControl:(BOOL)arg2;
- (void)reloadWithStorePage:(id)arg1 ofType:(int)arg2 forURL:(id)arg3;
- (void)_tearDownNavigationMenu;
- (void)_dismissNavigationMenuViewController;
- (BOOL)_sectionIsNetworkConstrained;
- (BOOL)_shouldFetchAutomatically;
- (void)_moveChildViewController:(id)arg1 toOverlayForProtocol:(id)arg2;
- (void)_repositionForChildViewController:(id)arg1;
- (BOOL)canMoveToOverlay;
- (void)_reloadNavigationBar;
- (void)_setAllowedOrientations:(id)arg1;
- (void)_verifyStorePageProtocol:(id)arg1;
- (void)_applyPropertiesToViewController:(id)arg1;
- (void)_displaySegmentedControl:(id)arg1;
- (id)_newSegmentedControlWithItems:(id)arg1;
- (void)setScriptUserInfo:(id)arg1;
- (BOOL)_reloadWithURLRequestProperties:(id)arg1 completionBlock:(id)arg2;
- (id)_activePageSection;
- (void)_reloadSectionsControlWithGroup:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForActiveViewController;
- (void)resetNavigationItem:(id)arg1;
- (void)showPlaceholderViewController;
- (void)_setPendingChildViewController:(id)arg1;
- (void)_setActiveChildViewController:(id)arg1 shouldTearDown:(BOOL)arg2;
- (void)handleFailureWithError:(id)arg1;
- (double)_expirationTime;
- (id)copyObjectForScriptFromPoolWithClass:(Class)arg1;
- (id)scriptUserInfo;
- (id)displayedURL;
- (void)_reloadForAppearance:(BOOL)arg1;
- (BOOL)_shouldReloadForAppearance;
- (void)_showPlaceholderViewControllerWithTearDown:(BOOL)arg1;
- (void)_reloadSearchFieldWithSection:(id)arg1;
- (void)_reloadSectionButtons;
- (BOOL)viewIsReady;
- (void)_sendFailureAfterDialogsFinished:(id)arg1;
- (void)setNeedsAuthentication:(BOOL)arg1;
- (BOOL)needsAuthentication;
- (void)setURLRequestProperties:(id)arg1;
- (id)URLRequestProperties;
- (void)_renderStorePage:(id)arg1 withType:(int)arg2 viewController:(id)arg3 block:(id)arg4;
- (void)_finishWebViewLoadWithResult:(BOOL)arg1 error:(id)arg2;
- (id)newViewControllerForPage:(id)arg1 ofType:(int)arg2 returningError:(id*)arg3;
- (id)newFetchOperation;
- (void)enqueueFetchOperation;
- (void)_handleFailureWithError:(id)arg1;
- (BOOL)canBeResolved;
- (void)_documentBoundsChangeNotification:(id)arg1;
- (void)_tabConfigurationChanged:(id)arg1;
- (void)_scriptEventNotification:(id)arg1;
- (void)_reloadPreviewOverlayVisibility;
- (void)_reloadForNetworkTypeChange:(id)arg1;
- (id)copyScriptViewController;
- (void)handleApplicationURL:(id)arg1;
- (double)defaultPNGExpirationTime;
- (id)navigationItemForScriptInterface;
- (void)invalidateForMemoryPurge;
- (void)applicationWillEnterForeground;
- (void)applicationDidEnterBackground;
- (id)newRotationController;
- (void)storePageProtocolDidChange;
- (id)storePageProtocol;
- (void)setScriptProperties:(id)arg1;
- (id)copyScriptProperties;
- (BOOL)shouldExcludeFromNavigationHistory;
- (id)iTunesStoreUI_searchFieldController;
- (id)copyDefaultScriptProperties;
- (id)urlBagKey;
- (void)setAuthenticationContext:(id)arg1;
- (id)authenticationContext;
- (void)restoreArchivableContext:(id)arg1;
- (id)newPlaceholderViewController;
- (id)copyArchivableContext;
- (void)tabBarControllerDidReselectTabBarItem:(id)arg1;
- (BOOL)reloadWithURLRequestProperties:(id)arg1;
- (void)setLoadsWhenHidden:(BOOL)arg1;
- (BOOL)loadsWhenHidden;
- (void)invalidate;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (id)init;
- (void)setSection:(id)arg1;
- (BOOL)isLoaded;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })documentBounds;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (BOOL)_isSupportedInterfaceOrientation:(int)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)didMoveToParentViewController:(id)arg1;
- (void)setParentViewController:(id)arg1;
- (void)loadView;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)reload;
- (id)URLRequest;
- (void)setLoading:(BOOL)arg1;
- (void)operation:(id)arg1 failedWithError:(id)arg2;

@end
