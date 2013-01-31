/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@class NSThread, <BKSAccelerometerDelegate>, NSLock;

@interface BKSAccelerometer : NSObject  {
    <BKSAccelerometerDelegate> *_delegate;
    struct __CFRunLoopSource { } *_accelerometerEventsSource;
    struct __CFRunLoop { } *_accelerometerEventsRunLoop;
    double _interval;
    NSLock *_lock;
    BOOL _orientationEventsEnabled;
    int _orientationCheckToken;
    int _orientationNotificationsToken;
    NSThread *_orientationEventsThread;
    float _xThreshold;
    float _yThreshold;
    float _zThreshold;
}

@property BOOL accelerometerEventsEnabled;
@property double updateInterval;
@property float xThreshold;
@property float yThreshold;
@property float zThreshold;
@property BOOL orientationEventsEnabled;
@property <BKSAccelerometerDelegate> * delegate;


- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (id)init;
- (int)currentDeviceOrientation;
- (void)setOrientationEventsEnabled:(BOOL)arg1;
- (id)_orientationEventsThread;
- (BOOL)orientationEventsEnabled;
- (void)_serverWasRestarted;
- (float)zThreshold;
- (float)yThreshold;
- (float)xThreshold;
- (void)_orientationDidChange;
- (void)_checkOut;
- (void)_checkIn;
- (void)setZThreshold:(float)arg1;
- (void)setYThreshold:(float)arg1;
- (void)setXThreshold:(float)arg1;
- (void)setUpdateInterval:(double)arg1;
- (double)updateInterval;
- (BOOL)accelerometerEventsEnabled;
- (void)setAccelerometerEventsEnabled:(BOOL)arg1;

@end
