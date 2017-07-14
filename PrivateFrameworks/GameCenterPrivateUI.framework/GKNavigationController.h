/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKNavigationController : UINavigationController <UINavigationBarDelegate, UIViewControllerRestoration> {
    NSMutableArray * _deferredTransitions;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSMutableArray *deferredTransitions;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (BOOL)_shouldForwardViewWillTransitionToSize;
+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;

- (void)_deferTransitionOfType:(int)arg1 withViewController:(id)arg2 animated:(BOOL)arg3;
- (void)_gkPushPresentedViewControllerForCompactSizeClass:(id)arg1;
- (void)_gkRestorePopoverWithViewControllers:(id)arg1 completion:(id /* block */)arg2;
- (id)_gkViewControllersForRestoringPopover;
- (void)_performDeferredTransition;
- (void)dealloc;
- (id)deferredTransitions;
- (void)didShowViewController:(id)arg1 animated:(BOOL)arg2;
- (BOOL)hasEmbeddedPopoverNavigationStack;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithRootViewController:(id)arg1;
- (id)popEmbeddedPopoverViewControllers;
- (id)popToRootViewControllerAnimated:(BOOL)arg1;
- (id)popToViewController:(id)arg1 animated:(BOOL)arg2;
- (id)popViewControllerAnimated:(BOOL)arg1;
- (void)pushViewController:(id)arg1 animated:(BOOL)arg2;
- (void)setDeferredTransitions:(id)arg1;
- (void)setupGKNavigationController;
- (BOOL)shouldAutorotate;
- (unsigned int)supportedInterfaceOrientations;
- (id)targetViewControllerForAction:(SEL)arg1;
- (void)willShowViewController:(id)arg1 animated:(BOOL)arg2;

@end
