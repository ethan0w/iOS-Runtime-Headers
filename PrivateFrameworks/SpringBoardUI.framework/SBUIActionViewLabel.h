/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@interface SBUIActionViewLabel : UIView {
    UILabel * _emojiLabel;
    UILabel * _label;
    NSString * _text;
    UIColor * _textColor;
}

@property (nonatomic, retain) UIFont *font;
@property (nonatomic) int lineBreakMode;
@property (nonatomic) int numberOfLines;
@property (nonatomic, copy) NSString *text;
@property (nonatomic) int textAlignment;
@property (nonatomic, retain) UIColor *textColor;

- (void).cxx_destruct;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })alignmentRectInsets;
- (id)font;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (int)lineBreakMode;
- (void)mt_applyVibrantStyling:(id)arg1;
- (void)mt_removeAllVibrantStyling;
- (int)numberOfLines;
- (void)setFont:(id)arg1;
- (void)setLineBreakMode:(int)arg1;
- (void)setNumberOfLines:(int)arg1;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(int)arg1;
- (void)setTextColor:(id)arg1;
- (id)text;
- (int)textAlignment;
- (id)textColor;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;

@end
