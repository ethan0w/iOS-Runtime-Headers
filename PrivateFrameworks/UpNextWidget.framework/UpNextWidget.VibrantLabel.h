/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UpNextWidget.framework/UpNextWidget
 */

@interface UpNextWidget.VibrantLabel : UIView {
    void attributedText;
    void containingVisualEffectView;
    void font;
    void label;
    void lineBreakMode;
    void numberOfLines;
    void text;
}

@property (nonatomic, retain) NSAttributedString *attributedText;
@property (nonatomic, retain) UIFont *font;
@property (nonatomic, retain) _TtC12UpNextWidget25TintColorAsTextColorLabel *label;
@property (nonatomic) int lineBreakMode;
@property (nonatomic) int numberOfLines;
@property (nonatomic, copy) NSString *text;

- (id /* block */).cxx_destruct;
- (id)attributedText;
- (id)font;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)label;
- (int)lineBreakMode;
- (int)numberOfLines;
- (void)setAttributedText:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setLineBreakMode:(int)arg1;
- (void)setNumberOfLines:(int)arg1;
- (void)setText:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)text;

@end
