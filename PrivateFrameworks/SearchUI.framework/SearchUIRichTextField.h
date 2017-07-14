/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIRichTextField : SearchUIStackView <NUIContainerStackViewDelegate> {
    SearchUIContentAdvisoryView * _contentAdvisoryView;
    SearchUIImageView * _iconView;
    SFRichText * _richText;
    SearchUIStarView * _starRatingView;
    unsigned int  _style;
    SearchUIVibrantLabel * _textLabel;
}

@property (retain) SearchUIContentAdvisoryView *contentAdvisoryView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (retain) SearchUIImageView *iconView;
@property (retain) SFRichText *richText;
@property (retain) SearchUIStarView *starRatingView;
@property unsigned int style;
@property (readonly) Class superclass;
@property (retain) SearchUIVibrantLabel *textLabel;

+ (id)font;

- (void).cxx_destruct;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })containerStackView:(id)arg1 minimumSpacingAdjecentToArrangedSubview:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })containerView:(id)arg1 layoutFrameForArrangedSubview:(id)arg2 withProposedFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (id)contentAdvisoryView;
- (id)iconView;
- (id)initWithStyle:(unsigned int)arg1;
- (id)richText;
- (void)setContentAdvisoryView:(id)arg1;
- (void)setIconView:(id)arg1;
- (void)setRichText:(id)arg1;
- (void)setStarRatingView:(id)arg1;
- (void)setStyle:(unsigned int)arg1;
- (void)setTextLabel:(id)arg1;
- (id)starRatingView;
- (unsigned int)style;
- (id)textLabel;
- (void)updateContentRating:(id)arg1;
- (void)updateIcon:(id)arg1;
- (void)updateStarViewWithRating:(float)arg1;
- (void)updateWithRichText:(id)arg1;

@end
