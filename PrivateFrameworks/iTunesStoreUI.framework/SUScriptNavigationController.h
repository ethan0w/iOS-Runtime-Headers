/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class UINavigationController, SUScriptNavigationBar, SUScriptViewController;

@interface SUScriptNavigationController : SUScriptViewController  {
    UINavigationController *_navController;
}

@property(readonly) SUScriptNavigationBar * navigationBar;
@property BOOL navigationBarHidden;
@property(copy) id toolbarHidden;
@property(readonly) SUScriptViewController * topViewController;
@property(retain) id viewControllers;

+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (void)initialize;

- (id)toolbarHidden;
- (void)setTopViewController:(id)arg1;
- (id)_copyNativeViewControllersFromScriptViewControllers:(id)arg1;
- (id)_filteredViewControllers;
- (void)_setViewControllers:(id)arg1 animated:(BOOL)arg2;
- (void)_pushViewController:(id)arg1 animated:(BOOL)arg2;
- (void)_popViewControllerAnimated:(BOOL)arg1;
- (void)_popToRootViewControllerAnimated:(BOOL)arg1;
- (void)willPerformBatchedInvocations;
- (id)_navigationController;
- (void)didPerformBatchedInvocations;
- (id)newNativeViewController;
- (id)initWithRootScriptViewController:(id)arg1 clientInterface:(id)arg2;
- (id)_className;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
- (void)dealloc;
- (void)popToRootViewControllerAnimated:(BOOL)arg1;
- (void)setToolbarHidden:(id)arg1;
- (void)setNavigationBarHidden:(BOOL)arg1;
- (void)setViewControllers:(id)arg1;
- (id)viewControllers;
- (void)setToolbarHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setNavigationBarHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setViewControllers:(id)arg1 animated:(BOOL)arg2;
- (void)popViewControllerAnimated:(BOOL)arg1;
- (void)pushViewController:(id)arg1 animated:(BOOL)arg2;
- (id)topViewController;
- (void)setNavigationBar:(id)arg1;
- (id)navigationBar;
- (BOOL)navigationBarHidden;

@end
