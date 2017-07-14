/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMZoomFactorLabel : UIView {
    UILabel * __label;
    float  _zoomFactor;
}

@property (nonatomic, readonly) UILabel *_label;
@property (nonatomic, retain) UIColor *textColor;
@property (nonatomic) float zoomFactor;

- (void).cxx_destruct;
- (id)_label;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_labelInsets;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)setTextColor:(id)arg1;
- (void)setZoomFactor:(float)arg1;
- (id)textColor;
- (float)zoomFactor;

@end
