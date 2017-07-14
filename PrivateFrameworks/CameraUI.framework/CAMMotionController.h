/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMMotionController : NSObject <BKSAccelerometerDelegate> {
    BKSAccelerometer * __accelerometer;
    int  __cachedCaptureOrientation;
    BOOL  __didNotifyCaptureOrientationWasInvalid;
    int  __fallbackCaptureOrientation;
    int  __numberOfDominantPhysicalButtonObservers;
    CMMotionManager * __physicalButtonMotionManager;
    int  _dominantPhysicalButton;
}

@property (setter=_setAccelerometer:, nonatomic, retain) BKSAccelerometer *_accelerometer;
@property (setter=_setCachedCaptureOrientation:, nonatomic) int _cachedCaptureOrientation;
@property (setter=_setDidNotifyCaptureOrientationWasInvalid:, nonatomic) BOOL _didNotifyCaptureOrientationWasInvalid;
@property (nonatomic, readonly) int _fallbackCaptureOrientation;
@property (setter=_setNumberOfDominantPhysicalButtonObservers:, nonatomic) int _numberOfDominantPhysicalButtonObservers;
@property (nonatomic, readonly) CMMotionManager *_physicalButtonMotionManager;
@property (nonatomic, readonly) int captureOrientation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (setter=_setDominantPhysicalButton:, nonatomic) int dominantPhysicalButton;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) int panoramaCaptureOrientation;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_accelerometer;
- (int)_cachedCaptureOrientation;
- (id)_debugStringForDeviceOrientation:(int)arg1;
- (id)_debugStringForInterfaceOrientation:(int)arg1;
- (BOOL)_didNotifyCaptureOrientationWasInvalid;
- (int)_fallbackCaptureOrientation;
- (int)_numberOfDominantPhysicalButtonObservers;
- (id)_physicalButtonMotionManager;
- (void)_setAccelerometer:(id)arg1;
- (void)_setCachedCaptureOrientation:(int)arg1;
- (void)_setDidNotifyCaptureOrientationWasInvalid:(BOOL)arg1;
- (void)_setDominantPhysicalButton:(int)arg1;
- (void)_setNumberOfDominantPhysicalButtonObservers:(int)arg1;
- (void)_updatePhysicalButtonObservation;
- (void)accelerometer:(id)arg1 didAccelerateWithTimeStamp:(double)arg2 x:(float)arg3 y:(float)arg4 z:(float)arg5 eventType:(int)arg6;
- (void)accelerometer:(id)arg1 didChangeDeviceOrientation:(int)arg2;
- (void)beginGeneratingDominantPhysicalButtonNotifications;
- (int)captureOrientation;
- (void)dealloc;
- (void)debugValidateCaptureOrientation;
- (int)dominantPhysicalButton;
- (void)endGeneratingDominantPhysicalButtonNotifications;
- (id)init;
- (int)panoramaCaptureOrientation;

@end