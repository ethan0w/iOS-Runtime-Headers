/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class UIAlertView;

@interface TPAlertViewHelper : NSObject <UIAlertViewDelegate> {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionHandler;

    UIAlertView *_alertView;
}

+ (id)alertHelperWithHandler:(id)arg1 title:(id)arg2 message:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitles:(id)arg5;
+ (id)_allHelpersArray;
+ (struct dispatch_queue_s { }*)_workQueue;

- (void)dealloc;
- (id)_underlyingAlertView;
- (void)dismissWithCancelAnimated:(BOOL)arg1;
- (id)_initWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitles:(id)arg4;
- (void)setCompletionHandler:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)show;

@end
