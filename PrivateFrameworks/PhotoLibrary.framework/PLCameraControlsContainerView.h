/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class PLCameraButtonBar;

@interface PLCameraControlsContainerView : UIView  {
    PLCameraButtonBar *_topButtonBar;
    BOOL _shouldFollowOverlayView;
}

@property(readonly) PLCameraButtonBar * topButtonBar;
@property(readonly) BOOL shouldFollowOverlayView;


- (BOOL)shouldFollowOverlayView;
- (id)topButtonBar;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 showControlsBackground:(BOOL)arg2;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;

@end
