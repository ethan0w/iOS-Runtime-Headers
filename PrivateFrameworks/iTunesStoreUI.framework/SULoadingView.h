/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class UIActivityIndicatorView, UIColor, UILabel;

@interface SULoadingView : UIView  {
    int _activityIndicatorStyle;
    UIColor *_activityIndicatorColor;
    UILabel *_label;
    UIActivityIndicatorView *_progressIndicator;
    unsigned int _style;
    UIColor *_textColor;
    UIColor *_textShadowColor;
}

@property int activityIndicatorStyle;
@property(retain) UIColor * activityIndicatorColor;
@property(retain) UIColor * textColor;
@property(retain) UIColor * textShadowColor;


- (id)activityIndicatorColor;
- (id)newTextLabel;
- (void)setTextShadowColor:(id)arg1;
- (void)setActivityIndicatorColor:(id)arg1;
- (void)setActivityIndicatorStyle:(int)arg1;
- (id)textShadowColor;
- (int)activityIndicatorStyle;
- (void)dealloc;
- (void)setTextColor:(id)arg1;
- (id)textColor;
- (void)setStyle:(unsigned int)arg1;
- (void)sizeToFit;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_setupSubviews;
- (id)newProgressIndicator;

@end
