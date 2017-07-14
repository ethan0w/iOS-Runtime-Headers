/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIAppIconPeekController : SBUIAppIconForceTouchController <SBUIAppIconForceTouchControllerDataSource, SBUIAppIconForceTouchControllerDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)sharedAppIconPeekController;

- (id)appIconForceTouchController:(id)arg1 applicationBundleIdentifierForGestureRecognizer:(id)arg2;
- (id)appIconForceTouchController:(id)arg1 applicationBundleURLForGestureRecognizer:(id)arg2;
- (id)appIconForceTouchController:(id)arg1 applicationShortcutItemsForGestureRecognizer:(id)arg2;
- (id)appIconForceTouchController:(id)arg1 applicationShortcutWidgetBundleIdentifierForGestureRecognizer:(id)arg2;
- (void)appIconForceTouchController:(id)arg1 didDismissForGestureRecognizer:(id)arg2;
- (float)appIconForceTouchController:(id)arg1 iconImageCornerRadiusForGestureRecognizer:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })appIconForceTouchController:(id)arg1 iconViewFrameForGestureRecognizer:(id)arg2;
- (id)appIconForceTouchController:(id)arg1 newIconViewCopyForGestureRecognizer:(id)arg2;
- (BOOL)appIconForceTouchController:(id)arg1 shouldActivateApplicationShortcutItem:(id)arg2 atIndex:(unsigned int)arg3 forGestureRecognizer:(id)arg4;
- (BOOL)appIconForceTouchController:(id)arg1 shouldHandleGestureRecognizer:(id)arg2;
- (void)appIconForceTouchController:(id)arg1 willPresentForGestureRecognizer:(id)arg2;

@end
