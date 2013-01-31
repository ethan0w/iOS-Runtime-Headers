/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@class UIImageView, UIView;

@interface SLWeiboSheetCardView : UIView  {
    UIView *_contentView;
    UIView *_paperBG;
    UIView *_paperTexture;
    UIImageView *_chrome;
    UIImageView *_topGradient;
    UIImageView *_bottomGradient;
    BOOL _hidesBottom;
}

@property(readonly) UIView * contentView;


- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_paperBounds;
- (id)contentView;
- (void)awakeFromNib;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_setHidesBottom:(BOOL)arg1;
- (id)_imageWithName:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_cardRectForOrientation:(int)arg1 options:(int)arg2 parentBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 keyboardFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_keyboardFrameForInterfaceOrientation:(int)arg1;
- (void)restoreKeyboard;
- (void)updateCardRectForOrientation:(int)arg1 options:(int)arg2;
- (void)updateKeyboardForOrientation:(int)arg1;
- (void)_setupSubviews;

@end
