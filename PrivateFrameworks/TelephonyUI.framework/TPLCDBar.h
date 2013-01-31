/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@class UIImageView, UIImage;

@interface TPLCDBar : UIImageView  {
    UIImage *_barBackground;
    UIImageView *_shadowView;
}

@property(retain) UIImage * barBackground;
@property(readonly) UIImageView * shadowView;

+ (float)defaultHeight;
+ (id)shadowImage;
+ (id)backgroundImage;
+ (float)defaultHeightForOrientation:(int)arg1;

- (void)dealloc;
- (id)barBackground;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentStretchRect;
- (void)setBarBackground:(id)arg1;
- (void)setOrientation:(int)arg1 updateFrame:(BOOL)arg2;
- (id)initWithDefaultSizeForOrientation:(int)arg1;
- (id)initWithDefaultSize;
- (void)setOrientation:(int)arg1;
- (id)shadowView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
