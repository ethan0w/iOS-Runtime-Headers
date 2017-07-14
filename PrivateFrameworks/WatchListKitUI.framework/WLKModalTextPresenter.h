/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WatchListKitUI.framework/WatchListKitUI
 */

@interface WLKModalTextPresenter : UIViewController {
    BOOL * _hideDoneButton;
    NSString * _text;
}

@property (nonatomic) BOOL*hideDoneButton;
@property (nonatomic, copy) NSString *text;

- (void).cxx_destruct;
- (void)donePressed;
- (BOOL*)hideDoneButton;
- (id)initWithTitle:(id)arg1 text:(id)arg2;
- (id)initWithTitle:(id)arg1 text:(id)arg2 doneButton:(BOOL)arg3;
- (void)presentFromParentViewController:(id)arg1;
- (void)setHideDoneButton:(BOOL*)arg1;
- (void)setText:(id)arg1;
- (id)text;

@end
