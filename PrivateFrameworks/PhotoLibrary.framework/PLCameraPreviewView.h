/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSMutableDictionary, UIView, PLCameraFocusPointView, CALayer, PLCameraFocusView, PLCameraFocusLockView;

@interface PLCameraPreviewView : UIView  {
    UIView *_maskingContainerView;
    UIView *_previewContainer;
    CALayer *_previewLayer;
    UIView *_focusContainerView;
    PLCameraFocusPointView *_focusView;
    PLCameraFocusView *_autoFocusView;
    PLCameraFocusLockView *_lockFocusView;
    struct CGPoint { 
        float x; 
        float y; 
    } _touchLocation;
    UIView *_facesContainerView;
    NSMutableDictionary *_faceIDsToViews;
    UIView *_disabledView;
    UIView *_snapshotView;
    UIView *_dimmingView;
    float _dimmingStrength;
    unsigned int _canShowFocus : 1;
    unsigned int _controlsAreVisible : 1;
}

@property(retain) CALayer * previewLayer;
@property float dimmingStrength;


- (void)dealloc;
- (float)dimmingStrength;
- (void)animateFocusScaleDown;
- (void)animateFocusLock;
- (void)showFaceTrackingViewsForFaces:(id)arg1;
- (void)showAutofocusView;
- (void)removeAutofocusView;
- (void)fadeOutFaceTrackingViews;
- (void)removeAllFocusViews;
- (void)setShouldShowFocus:(BOOL)arg1;
- (void)showFocusAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)showLockFocusAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)zoomToFactor:(float)arg1;
- (void)setDimmingStrength:(float)arg1 duration:(double)arg2;
- (void)setDimmingStrength:(float)arg1;
- (void)setCameraIsChangingModes:(BOOL)arg1;
- (void)setPreviewLayer:(id)arg1;
- (void)focusDidEnd;
- (id)previewLayer;
- (void)setControlsAreVisible:(BOOL)arg1;
- (void)motionEnded:(int)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
