/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MusicStoreUI.framework/MusicStoreUI
 */

@class SUSegmentedControl, NSArray, UIView;

@interface MSPurchasesViewController : SUViewController  {
    int _activeViewControllerIndex;
    UIView *_containerView;
    SUSegmentedControl *_segmentedControl;
    NSArray *_viewControllers;
}


- (id)_activeViewController;
- (void)invalidateForMemoryPurge;
- (id)initWithSection:(id)arg1;
- (void)restoreArchivableContext:(id)arg1;
- (id)copyArchivableContext;
- (void)tabBarControllerDidReselectTabBarItem:(id)arg1;
- (void)dealloc;
- (id)_newViewControllerForPageSection:(id)arg1;
- (void)_setActiveViewControllerIndex:(int)arg1;
- (void)_showActiveViewController;
- (void)_reloadViewControllersWithSection:(id)arg1;
- (void)_reloadSegmentedControlPlacement;
- (void)_tabConfigurationChangedNotification:(id)arg1;
- (void)_segmentedControlAction:(id)arg1;
- (id)_newSegmentedControlWithPageSectionGroup:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;

@end
