/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface PLCreateAlbumAlertView : UIAlertView <UITextFieldDelegate, UIAlertViewDelegate> {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id completion;

}

@property(copy) id completion;

+ (id)albumCreationAlertView;

- (void)dealloc;
- (BOOL)alertViewShouldEnableFirstOtherButton:(id)arg1;
- (void)setCompletion:(id)arg1;
- (id)completion;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)showWithCompletionHandler:(id)arg1;

@end
