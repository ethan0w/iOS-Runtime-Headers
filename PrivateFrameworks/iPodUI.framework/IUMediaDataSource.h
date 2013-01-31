/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class MPStoreCompletionOffering, IUModalContext, NSString;

@interface IUMediaDataSource : NSObject  {
    IUModalContext *_modalContext;
    NSString *_title;
    BOOL _hasReloaded;
    BOOL _ignoresInvalidation;
    BOOL _coalesceInvalidateNotificationsSkipped;
    int _coalesceInvalidateNotifications;
    BOOL _editing;
    NSString *_backButtonTitle;
    MPStoreCompletionOffering *_completionOffering;
}

@property BOOL ignoresInvalidation;
@property(retain) IUModalContext * modalContext;
@property(retain) NSString * title;
@property(readonly) BOOL shouldDisplayWhenEmpty;
@property(getter=isRestorableNavigationPathNode,readonly) BOOL restorableNavigationPathNode;
@property(getter=isEditing,setter=setIsEditing:) BOOL editing;
@property(retain) NSString * backButtonTitle;
@property(retain) MPStoreCompletionOffering * completionOffering;
@property(readonly) BOOL canShowCompletionOfferings;
@property(readonly) BOOL isContentDisplayEnabled;

+ (BOOL)isLoadingDisabled;
+ (void)setLoadingDisabled:(BOOL)arg1;
+ (id)shortNoContextNavigationTitleKey;
+ (int)tabBarSystemItem;
+ (id)moreListTitleKey;
+ (id)defaultTitle;
+ (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })tabBarItemIconImageInsets;
+ (id)tabBarItemTitleKey;
+ (id)tabBarItemIconName;

- (BOOL)shouldHideContainerNavigationBar;
- (id)completionOffering;
- (void)setIgnoresInvalidation:(BOOL)arg1;
- (BOOL)ignoresInvalidation;
- (BOOL)canShowCompletionOfferings;
- (void)setCompletionOffering:(id)arg1;
- (BOOL)isContentDisplayEnabled;
- (void)setIsEditing:(BOOL)arg1;
- (id)viewControllerContextForSearchCompletion;
- (id)viewControllerContextForSpecifier:(id)arg1;
- (void)setModalContext:(id)arg1;
- (void)attemptToReloadDataIfNecessary;
- (id)shortNoContextNavigationBackButtonTitle;
- (id)newTabBarItem;
- (id)contextForContext:(id)arg1 redirectType:(int)arg2;
- (BOOL)shouldDisplayWhenEmpty;
- (id)tabBarItemTitle;
- (BOOL)isRestorableNavigationPathNode;
- (void)unloadReloadableData;
- (BOOL)showShuffleButtonWhenApplicable;
- (void)endCoalescingChanges;
- (void)beginCoalescingChanges;
- (id)createNoContentDataSource;
- (SEL)libraryHasDisplayableEntitiesSelector;
- (id)viewControllerContextForMediaQuery:(id)arg1;
- (id)modalContext;
- (void)configureMoreListTableCell:(id)arg1;
- (int)filteredMediaTypes;
- (void)invalidate;
- (void)dealloc;
- (BOOL)isEditing;
- (void)setBackButtonTitle:(id)arg1;
- (id)backButtonTitle;
- (id)title;
- (void)setTitle:(id)arg1;
- (void)reloadData;

@end
