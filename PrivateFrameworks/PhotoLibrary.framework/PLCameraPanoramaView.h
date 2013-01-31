/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class PLCameraPanoramaTextLabel, NSOperationQueue, UIImageView, PLCameraLevelView, CADisplayLink, UIView, CMMotionManager, CALayer, PLCameraPanoramaBrokenArrowView, <PLCameraPanoramaViewDelegate>;

@interface PLCameraPanoramaView : UIView <UIAccelerometerDelegate> {
    <PLCameraPanoramaViewDelegate> *_delegate;
    float _previewScale;
    BOOL _isCapturing;
    BOOL _isProcessing;
    int _direction;
    float _currentSpeed;
    UIImageView *_previewBackgroundImageView;
    UIView *_previewContainer;
    UIView *_previewMaskingContainer;
    CALayer *_previewLayer;
    UIImageView *_previewGhostImageView;
    PLCameraPanoramaTextLabel *_instructionalText;
    UIView *_instructionalTextBackground;
    PLCameraPanoramaBrokenArrowView *_arrowView;
    PLCameraLevelView *_levelView;
    struct CGPoint { 
        float x; 
        float y; 
    } _arrowViewBeginCenter;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _initialArrowFrame;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _currentArrowFrame;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _initialMaskFrame;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _currentMaskFrame;
    BOOL _isAnimatingTextIn;
    BOOL _isAnimatingTextOut;
    BOOL _showingFastText;
    BOOL _isAnimatingDirection;
    BOOL _showingMoveText;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _visiblePreviewRect;
    BOOL _ignorePreviewUpdates;
    CADisplayLink *_displayLink;
    int _frameCounter;
    CMMotionManager *_motionManager;
    NSOperationQueue *_accelerometerQueue;
    float _initialAcceleration;
    float _currentAcceleration;
    int _deviceOrientation;
    int _deferredDeviceOrientation;
}

@property <PLCameraPanoramaViewDelegate> * delegate;
@property(readonly) CALayer * panoramaPreviewLayer;


- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (void)hideInstructionalText;
- (void)showMoveDownTextAfterDelay;
- (void)showMoveUpTextAfterDelay;
- (void)showMoveDownText;
- (void)showMoveUpText;
- (void)setCaptureDirection:(int)arg1;
- (void)_showMoveDownText;
- (void)_showMoveUpText;
- (void)_cancelDelayedShowMoveText;
- (void)_hideText;
- (void)hideFastMovementTextAfterDelay;
- (void)showFastMovementText;
- (void)hideArrowTextAfterDelay;
- (void)_arrowWasTapped:(id)arg1;
- (void)setMaskingContainerFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 direction:(int)arg2;
- (void)_updateInstructionalTextBackground;
- (void)_updateInstructionalText:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 centerYOffset:(float)arg2 panoramaPreviewScale:(float)arg3 panoramaPreviewSize:(struct CGSize { float x1; float x2; })arg4;
- (void)updateWithPreviewState:(id)arg1;
- (void)panoramaWillStart;
- (void)showSavingHUD:(BOOL)arg1;
- (id)panoramaPreviewLayer;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visiblePreviewRect;
- (void)viewWillDisappear;
- (void)setDeviceOrientation:(int)arg1;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)updateUI;

@end
