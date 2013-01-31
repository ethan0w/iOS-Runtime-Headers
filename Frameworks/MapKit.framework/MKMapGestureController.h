/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class UIPanGestureRecognizer, MKVariableDelayTapRecognizer, VKMapView, <MKMapGestureControllerDelegate>, _UIDynamicValueAnimation, UIPinchGestureRecognizer, _UIDynamicAnimationGroup, UITapGestureRecognizer;

@interface MKMapGestureController : NSObject <MKVariableDelayTapRecognizerDelegate, UIGestureRecognizerDelegate> {
    VKMapView *_mapView;
    <MKMapGestureControllerDelegate> *_delegate;
    MKVariableDelayTapRecognizer *_doubleTapGestureRecognizer;
    UITapGestureRecognizer *_twoFingerTapGestureRecognizer;
    UIPinchGestureRecognizer *_pinchGestureRecognizer;
    UIPanGestureRecognizer *_panGestureRecognizer;
    double _lastScale;
    _UIDynamicValueAnimation *_pinchDecelerationAnimation;
    _UIDynamicAnimationGroup *_panDecelerationAnimationGroup;
    int _gestureCount;
}

@property(readonly) VKMapView * mapView;
@property <MKMapGestureControllerDelegate> * delegate;
@property(getter=isZoomEnabled) BOOL zoomEnabled;
@property(getter=isScrollEnabled) BOOL scrollEnabled;
@property(readonly) UITapGestureRecognizer * doubleTapGestureRecognizer;
@property(readonly) UITapGestureRecognizer * twoFingerTapGestureRecognizer;
@property(readonly) UIPinchGestureRecognizer * pinchGestureRecognizer;
@property(readonly) UIPanGestureRecognizer * panGestureRecognizer;


- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (id)mapView;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)pinchGestureRecognizer;
- (id)panGestureRecognizer;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)isZoomEnabled;
- (void)setZoomEnabled:(BOOL)arg1;
- (void)setScrollEnabled:(BOOL)arg1;
- (void)handlePinch:(id)arg1;
- (void)handlePan:(id)arg1;
- (BOOL)isScrollEnabled;
- (void)endGesturing;
- (void)beginGesturing;
- (void)handleTwoFingerTap:(id)arg1;
- (void)handleDoubleTap:(id)arg1;
- (void)stopDynamicAnimations;
- (id)initWithMapView:(id)arg1 gestureTargetView:(id)arg2 doubleTapTargetView:(id)arg3;
- (id)twoFingerTapGestureRecognizer;
- (double)variableDelayTapRecognizer:(id)arg1 shouldWaitForNextTapForDuration:(double)arg2 afterTouch:(id)arg3;
- (id)doubleTapGestureRecognizer;
- (id)initWithMapView:(id)arg1 gestureTargetView:(id)arg2;

@end
