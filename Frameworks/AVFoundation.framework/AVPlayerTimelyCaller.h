/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVPlayer, NSObject<OS_dispatch_queue>, AVWeakReference, NSObject<OS_dispatch_source>;

@interface AVPlayerTimelyCaller : NSObject  {
    NSObject<OS_dispatch_queue> *_timerQueue;
    AVWeakReference *_weakReference;
    AVPlayer *_player;
    NSObject<OS_dispatch_source> *_timerSource;
    BOOL _isInvalidated;
    BOOL _timerQueueIsPlayerStateDispatchQueue;
    struct OpaqueCMTimebase { } *_timebase;
    double _lastRate;
    double _currentRate;
}

@property(getter=_weakReference,readonly) AVWeakReference * weakReference;


- (void)invalidate;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)finalize;
- (id)player;
- (void)_resetNextFireTime;
- (id)initWithPlayer:(id)arg1 queue:(id)arg2;
- (void)_handleTimeDiscontinuity;
- (void)_timebaseDidChange:(id)arg1;
- (void)_effectiveRateChanged;
- (void)_stopRespondingToPlayerStateChanges;
- (long)_removeCurrentTimebaseFromTimerSource;
- (void)_stopObservingTimebaseNotifications;
- (void)_startObservingTimebaseNotificationsForCurrentItem;
- (id)_weakReference;

@end
