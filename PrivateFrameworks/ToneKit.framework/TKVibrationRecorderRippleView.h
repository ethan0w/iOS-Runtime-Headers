/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
 */

@interface TKVibrationRecorderRippleView : UIView <CAAnimationDelegate> {
    float  _currentSpeedCoefficient;
    struct CGPoint { 
        float x; 
        float y; 
    }  _currentTouchLocation;
    double  _currentTouchStartTime;
    <NSCopying> * _displayLinkManagerObserverToken;
    float  _fadeOutRadius;
    float  _fingerMovingSpeed;
    float  _fingerStillSpeed;
    float  _firstRippleInitialRadius;
    BOOL  _isAnimating;
    BOOL  _isTrackingTouch;
    unsigned int  _lastRingLayerIdentifier;
    BOOL  _needsCurrentSpeedRefresh;
    unsigned int  _numberOfRipplesForCurrentTouch;
    NSMutableArray * _recentTouchesContextQueue;
    NSMutableArray * _reusableRingLayers;
    NSMutableArray * _reusableTouchContexts;
    CAAnimation * _ringEnlargementAnimation;
    NSMutableDictionary * _ringLayersByIdentifiers;
    NSMutableArray * _ringLayersQueue;
    <TKVibrationRecorderStyleProvider> * _styleProvider;
}

@property (getter=_isTouchDown, nonatomic, readonly) BOOL _touchDown;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) float fadeOutRadius;
@property (nonatomic) float fingerMovingSpeed;
@property (nonatomic) float fingerStillSpeed;
@property (nonatomic) float firstRippleInitialRadius;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (float)_currentSpeed;
- (void)_enqueueReusableRingLayer:(id)arg1;
- (void)_enqueueReusableTouchContextObject:(id)arg1;
- (void)_enqueueRingLayerWithTimeIntervalSinceCreation:(double)arg1 normalizedLocation:(struct CGPoint { float x1; float x2; })arg2 speed:(float)arg3;
- (BOOL)_isTouchDown;
- (void)_refresh:(id)arg1;
- (id)_reusableRingLayer;
- (id)_reusableTouchContextObject;
- (void)_startAnimation;
- (void)_stopAnimation;
- (void)_touchBeganAtLocation:(struct CGPoint { float x1; float x2; })arg1;
- (void)_touchEndedAtLocation:(struct CGPoint { float x1; float x2; })arg1;
- (void)_touchMovedToLocation:(struct CGPoint { float x1; float x2; })arg1;
- (void)_updateRingEnlargementAnimation;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)dealloc;
- (float)fadeOutRadius;
- (float)fingerMovingSpeed;
- (float)fingerStillSpeed;
- (float)firstRippleInitialRadius;
- (id)init;
- (id)initWithStyleProvider:(id)arg1;
- (void)layoutSubviews;
- (void)setFadeOutRadius:(float)arg1;
- (void)setFingerMovingSpeed:(float)arg1;
- (void)setFingerStillSpeed:(float)arg1;
- (void)setFirstRippleInitialRadius:(float)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
