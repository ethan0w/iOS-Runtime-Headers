/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
 */

@class UIButton, UILabel;

@interface AFUIServerUtteranceView : AFUIUtteranceView  {
    UILabel *_titleLabel;
    UIButton *_infoButton;
    UILabel *_transitionView;
}

@property BOOL hasInfoButton;

+ (double)textResizingAnimationDuration;

- (void).cxx_destruct;
- (id)_textView;
- (void)setTextAnimated:(id)arg1;
- (BOOL)hasInfoButton;
- (void)setHasInfoButton:(BOOL)arg1;
- (void)_infoButtonHit:(id)arg1;
- (void)clearTransitionView;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_textContentFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_bubbleImageFrame;
- (float)_singleLineHeight;
- (void)setNumberOfLines:(int)arg1;
- (id)text;
- (id)_transitionView;
- (void)setText:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
