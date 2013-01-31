/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@class TPButton, UIView;

@interface TPBottomDoubleButtonBar : TPBottomSingleButtonBar  {
    TPButton *_button2;
    UIView *_well1;
    UIView *_well2;
    UIView *_wellContainer;
}

+ (float)_wellPadding;

- (void)dealloc;
- (void)setDrawsSeparateWells:(BOOL)arg1;
- (id)button2;
- (id)initForEmergencyCallWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initForCallFailureWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_layoutButtons;
- (void)_layoutWells;
- (void)_updateButtonSettings:(id)arg1;
- (float)_buttonWidth;
- (void)setWellAlpha:(float)arg1;
- (void)setButton2:(id)arg1 andStyle:(BOOL)arg2;
- (void)setButton:(id)arg1 andStyle:(BOOL)arg2;
- (id)initForVideoChatWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initForIncomingCallWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 style:(int)arg2;

@end
