/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class <IUDoorSwingTransitionViewDelegate>, IULiveReflectionView, UIView;

@interface IUDoorSwingTransitionView : UIView  {
    int _currentTransition;
    <IUDoorSwingTransitionViewDelegate> *_delegate;
    UIView *_doorsView;
    UIView *_leftSnapshotView;
    UIView *_rightSnapshotView;
    BOOL _transitioning;
    IULiveReflectionView *_zoomView;
}

@property <IUDoorSwingTransitionViewDelegate> * delegate;
@property(retain) UIView * zoomView;
@property(getter=isTransitioning,readonly) BOOL transitioning;
@property(retain) UIView * doorsView;
@property int currentTransition;

+ (double)defaultDurationForTransition:(int)arg1;

- (id)zoomView;
- (id)doorsView;
- (void)setZoomView:(id)arg1;
- (void)setDoorsView:(id)arg1;
- (void)_informDelegateOfCompletion;
- (void)startTransition;
- (void)prepareTransition:(int)arg1 fromView:(id)arg2 toView:(id)arg3 usingOrientation:(int)arg4;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (int)currentTransition;
- (void)setCurrentTransition:(int)arg1;
- (BOOL)isTransitioning;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
