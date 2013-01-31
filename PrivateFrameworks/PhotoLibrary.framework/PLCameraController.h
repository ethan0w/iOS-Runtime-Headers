/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class AVCaptureStillImageOutput, AVCaptureMovieFileOutput, AVCaptureVideoPreviewLayer, SBSAccelerometer, AVCaptureSession, AVCaptureVideoDataOutput, AVCaptureDevice, NSObject<OS_dispatch_queue>, <PLCameraControllerDelegate>, AVCaptureDeviceInput, NSString, AVCaptureOutput, NSTimer;

@interface PLCameraController : NSObject <SBSAccelerometerDelegate, AVCaptureFileOutputRecordingDelegate, AVCaptureVideoDataOutputSampleBufferDelegate> {
    AVCaptureSession *_avCaptureSession;
    AVCaptureDevice *_avCaptureDeviceFront;
    AVCaptureDevice *_avCaptureDeviceBack;
    AVCaptureDevice *_avCaptureDeviceAudio;
    AVCaptureDeviceInput *_avCaptureInputFront;
    AVCaptureDeviceInput *_avCaptureInputBack;
    AVCaptureDeviceInput *_avCaptureInputAudio;
    AVCaptureStillImageOutput *_avCaptureOutputPhoto;
    AVCaptureMovieFileOutput *_avCaptureOutputVideo;
    AVCaptureVideoDataOutput *_avCaptureOutputPanorama;
    struct OpaqueFigSampleBufferProcessor { } *_panoramaProcessor;
    struct _CAImageQueue { } *_panoramaImageQueue;
    struct CGSize { 
        float width; 
        float height; 
    } _panoramaPreviewSize;
    float _panoramaPreviewScale;
    NSObject<OS_dispatch_queue> *_avCaptureSessionDispatchQueue;
    AVCaptureDevice *_currentDevice;
    AVCaptureDeviceInput *_currentInput;
    AVCaptureOutput *_currentOutput;
    AVCaptureVideoPreviewLayer *_previewLayer;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _cleanAperture;
    BOOL _shouldBeStopped;
    int _cameraMode;
    int _cameraDevice;
    int _flashMode;
    int _captureOrientation;
    BOOL _imageWriterQueueIsAvailable;
    unsigned int _ioSurfaceCounter;
    BOOL _hdrEnabled;
    BOOL _hdrCaptureIncludesEV0Image;
    int _hdrEV0PhotoCaptureCount;
    float _zoomFactor;
    <PLCameraControllerDelegate> *_delegate;
    double _maximumCaptureDuration;
    int _captureQuality;
    NSString *_videoCapturePath;
    SBSAccelerometer *_accelerometer;
    struct CGImage { } *_lastVideoPreviewFrameImageRef;
    BOOL _lockFocusLock;
    BOOL _lockFocusAfterFocusFinishes;
    BOOL _isFocusingOnFace;
    int _cameraOrientation;
    NSTimer *_idleTimerTimer;
    BOOL _delaySuspend;
    NSTimer *_delaySuspendTimer;
    struct { 
        unsigned int supportsVideo : 1; 
        unsigned int supportsFocus : 1; 
        unsigned int supportsExposure : 1; 
        unsigned int supportsZoom : 1; 
        unsigned int supportsHDR : 1; 
        unsigned int supportsPanorama : 1; 
        unsigned int supportsVideoStillCapture : 1; 
        unsigned int hasFlash : 1; 
        unsigned int hasBackCamera : 1; 
        unsigned int hasFrontCamera : 1; 
        unsigned int deferStartVideoCapture : 1; 
        unsigned int inCall : 1; 
        unsigned int isCapturingPanorama : 1; 
        unsigned int isProcessingPanorama : 1; 
        unsigned int focusDisabled : 1; 
        unsigned int focusWasModified : 1; 
        unsigned int serverDied : 1; 
        unsigned int didGetDeviceUnavailableInBackground : 1; 
        unsigned int didSetLocationData : 1; 
        unsigned int isChangingMode : 1; 
        unsigned int flashWillFireAutomatically : 1; 
        unsigned int isCameraApp : 1; 
        unsigned int didSendPreviewStartedCallbackToEmptyDelegate : 1; 
        unsigned int didGetPreviewStartedCallbackAfterResume : 1; 
        unsigned int logFocusInfo : 1; 
        unsigned int logPreviewInfo : 1; 
        unsigned int logCaptureInfo : 1; 
        unsigned int logFlashInfo : 1; 
        unsigned int logDebugInfo : 1; 
        unsigned int logPanoInfo : 1; 
        unsigned int enable720p60Recording : 1; 
        unsigned int pptTestDisableAutofocus : 1; 
        unsigned int isInternalInstall : 1; 
        unsigned int shouldTearDownPano : 1; 
        unsigned int convertSampleBufferToJPEG : 1; 
        unsigned int delegateDidStartSession : 1; 
        unsigned int delegateWillStartPreview : 1; 
        unsigned int delegatePreviewDidStart : 1; 
        unsigned int delegateSessionDidStart : 1; 
        unsigned int delegateDidStopSession : 1; 
        unsigned int delegateWillStopSession : 1; 
        unsigned int delegateSessionDidStop : 1; 
        unsigned int delegateSessionWasInterrupted : 1; 
        unsigned int delegateSessionInterruptionEnded : 1; 
        unsigned int delegateServerDied : 1; 
        unsigned int delegateCleanApertureDidChange : 1; 
        unsigned int delegateModeWillChange : 1; 
        unsigned int delegateModeDidChange : 1; 
        unsigned int delegateWillTakePhoto : 1; 
        unsigned int delegateDidTakePhoto : 1; 
        unsigned int delegateCapturedPhoto : 1; 
        unsigned int delegateDidChangeCaptureAbility : 1; 
        unsigned int delegateDidUpdatePanoramaPreview : 1; 
        unsigned int delegateDidReceivePanoramaIssue : 1; 
        unsigned int delegateDidStartPanoramaCapture : 1; 
        unsigned int delegateWillStopPanoramaCapture : 1; 
        unsigned int delegatePanoramaWillStartProcessing : 1; 
        unsigned int delegatePanoramaDidStopProcessing : 1; 
        unsigned int delegateCapturedPanorama : 1; 
        unsigned int delegateVideoCaptureDidStart : 1; 
        unsigned int delegateDidStopVideoCapture : 1; 
        unsigned int delegateVideoCaptureDidStop : 1; 
        unsigned int delegateWillStartAutofocus : 1; 
        unsigned int delegateFocusDidStart : 1; 
        unsigned int delegateFocusDidEnd : 1; 
        unsigned int delegateFaceMetadataDidChange : 1; 
        unsigned int delegateTorchAvailabilityChanged : 1; 
    } _cameraFlags;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id postSessionSetupBlock;

}

@property(readonly) AVCaptureSession * currentSession;
@property(readonly) AVCaptureStillImageOutput * imageOutput;
@property AVCaptureDevice * currentDevice;
@property AVCaptureDeviceInput * currentInput;
@property AVCaptureOutput * currentOutput;
@property(readonly) AVCaptureVideoPreviewLayer * previewLayer;
@property int previewOrientation;
@property(readonly) float panoramaPreviewScale;
@property(readonly) struct CGSize { float x1; float x2; } panoramaPreviewSize;
@property int captureOrientation;
@property int cameraMode;
@property int flashMode;
@property int cameraDevice;
@property BOOL convertSampleBufferToJPEG;
@property BOOL isCameraApp;
@property(readonly) BOOL supportsHDR;
@property(getter=isHDREnabled) BOOL HDREnabled;
@property float zoomFactor;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } cleanAperture;
@property(copy) id postSessionSetupBlock;
@property(readonly) int cameraOrientation;

+ (id)sharedInstance;

- (void)autofocus;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)currentDevice;
- (void)dealloc;
- (id)init;
- (void)_setDelaySuspend:(BOOL)arg1;
- (void)setCaptureOrientation:(int)arg1;
- (float)zoomFactor;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })cleanAperture;
- (struct CGSize { float x1; float x2; })panoramaPreviewSize;
- (float)panoramaPreviewScale;
- (id)imageOutput;
- (void)setCurrentDevice:(id)arg1;
- (void)_setCameraOrientation:(int)arg1;
- (int)cameraOrientation;
- (void)setHDREnabled:(BOOL)arg1;
- (BOOL)isTorchDisabled;
- (BOOL)isTorchOn;
- (BOOL)isFocusingOnFace;
- (void)setFocusDisabled:(BOOL)arg1;
- (BOOL)isExposureLockSupported;
- (BOOL)isFocusLockSupported;
- (BOOL)canLockFocus;
- (void)_pptTestSetAutofocusDisabled:(BOOL)arg1;
- (void)restartAutoFocus;
- (int)currentFocusMode;
- (void)focusAtAdjustedPoint:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)canFocusAtPoint;
- (BOOL)isFocusAllowed;
- (void)_panoShouldEnd;
- (void)_panoramaDidReceiveErrorNotificationString:(struct __CFString { }*)arg1;
- (void)_panoramaDidReceiveWarningNotificationString:(struct __CFString { }*)arg1;
- (void)_panoramaDidReceiveStatusNotificationString:(struct __CFString { }*)arg1;
- (void)setPanoramaCaptureDirection:(int)arg1;
- (void)panoramaProcessorOutputCallbackWithStatus:(long)arg1 buffer:(struct opaqueCMSampleBuffer { }*)arg2;
- (void)startPanoramaCapture;
- (void)setPanoramaImageQueueLayer:(id)arg1;
- (BOOL)supportsPanorama;
- (void)setVideoCaptureMaximumDuration:(double)arg1;
- (void)setVideoCaptureQuality:(int)arg1;
- (id)videoCapturePath;
- (void)capturePhoto;
- (BOOL)imageWriterQueueIsAvailable;
- (BOOL)canCapturePhoto;
- (void)_clearPreviewLayer;
- (BOOL)isPreviewMirrored;
- (void)setPreviewOrientation:(int)arg1;
- (int)previewOrientation;
- (void)startPreview:(id)arg1;
- (void)_startPreviewWithCameraDevice:(int)arg1 cameraMode:(int)arg2;
- (BOOL)_didSendPreviewStartedCallbackToEmptyDelegate;
- (BOOL)supportsZoom;
- (void)setZoomFactor:(float)arg1;
- (float)maximumZoomFactor;
- (float)minimumZoomFactor;
- (BOOL)_modeUsesCompassHeading;
- (BOOL)convertSampleBufferToJPEG;
- (void)setConvertSampleBufferToJPEG:(BOOL)arg1;
- (BOOL)hasRearCamera;
- (BOOL)hasFrontCamera;
- (void)_setDefaultPrewarmDate:(id)arg1;
- (void)setCameraMode:(int)arg1;
- (int)cameraMode;
- (BOOL)supportsVideoCapture;
- (void)releaseIOSurface;
- (void)captureIOSurface;
- (BOOL)inCall;
- (void)accelerometer:(id)arg1 didChangeDeviceOrientation:(int)arg2;
- (BOOL)supportsHDR;
- (void)_didTakePhoto;
- (void)_willTakePhoto;
- (void)_faceRectangleChanged;
- (void)_updateTorchAvailability;
- (void)_torchLevelChanged;
- (void)_flashStateChanged;
- (void)_whiteBalanceCompleted;
- (void)_whiteBalanceStarted;
- (void)_exposureCompleted;
- (void)_exposureStarted;
- (void)_focusCompleted;
- (void)_focusStarted;
- (void)_faceMetadataDidChange:(id)arg1;
- (void)_lockedFocusOperationFinished;
- (void)_autofocusOperationFinished;
- (void)_focusOperationFinished;
- (void)_commonFocusFinished;
- (void)userInitiatedLockFocus;
- (void)_lockFocus:(BOOL)arg1 lockExposure:(BOOL)arg2 lockWhiteBalance:(BOOL)arg3;
- (void)_autofocus:(BOOL)arg1 autoExpose:(BOOL)arg2;
- (void)_autofocusAfterCapture;
- (void)_unlockCurrentDeviceForConfiguration;
- (BOOL)_lockCurrentDeviceForConfiguration;
- (void)_panoramaDidReceiveIssueWithPanoramaString:(struct __CFString { }*)arg1;
- (void)_processSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)_panoramaDidStop;
- (void)lockFocusAndExposureForPano;
- (BOOL)canCapturePanorama;
- (double)minimumVideoCaptureDuration;
- (void)lockFocusForRecording;
- (id)_videoMetadataArrayIncludingSensitiveProperties:(BOOL)arg1;
- (void)_setVideoCapturePath:(id)arg1;
- (BOOL)canCaptureVideo;
- (BOOL)hasInheritedForegroundState;
- (void)setFaceDetectionEnabled:(BOOL)arg1;
- (void)_verifyVideoConsolidationForVideoAtPath:(id)arg1 outUserInfo:(id*)arg2;
- (void)_removeVideoCaptureFileAndDirectoryAtPath:(id)arg1;
- (void)_capturedPhotoWithDictionary:(id)arg1 error:(id)arg2;
- (BOOL)isHDREnabled;
- (void)_setOrientationForConnection:(id)arg1;
- (BOOL)flashWillFire;
- (void)_setOrientation;
- (BOOL)isExposing;
- (BOOL)isFocusing;
- (BOOL)_sanityCheckSessionCanCaptureWithOutput:(id)arg1;
- (BOOL)isChangingModes;
- (void)performAutofocusAfterCapture;
- (void)_processCapturedPhotoWithDictionary:(id)arg1 error:(id)arg2;
- (int)captureOrientation;
- (BOOL)_isCountingHDREV0Captures;
- (void)_recoverFromServerError;
- (BOOL)isCapturingVideo;
- (void)_resetIdleTimer;
- (void)stopPanoramaCapture;
- (BOOL)isCapturingPanorama;
- (void)_setFlashMode:(int)arg1 force:(BOOL)arg2;
- (void)_delayIdleTimerByTimeInterval:(double)arg1;
- (void)_setOrientationEventsEnabled:(BOOL)arg1;
- (id)currentInput;
- (void)_startPreview:(id)arg1;
- (id)previewLayer;
- (BOOL)_setupCamera;
- (void)_tearDownCamera;
- (void)executeBlockOnMainQueue:(id)arg1;
- (void)_forceDelaySuspendTimeout;
- (id)postSessionSetupBlock;
- (void)_focusHasChanged:(id)arg1;
- (void)_inputPortFormatDescriptionDidChange:(id)arg1;
- (void)_movieFileRecordingCompleted:(id)arg1;
- (void)_interruptionEnded:(id)arg1;
- (void)_wasInterrupted:(id)arg1;
- (void)_sessionRuntimeErrored:(id)arg1;
- (void)_sessionStopped:(id)arg1;
- (void)_sessionStarted:(id)arg1;
- (void)_deviceStarted:(id)arg1;
- (void)_previewStarted:(id)arg1;
- (void)_jankyPreviewStartedWorkaround;
- (void)enqueueBlockInCaptureSessionQueue:(id)arg1;
- (void)enqueueBlockOnMainQueue:(id)arg1;
- (void)_configureSessionWithCameraMode:(int)arg1 cameraDevice:(int)arg2;
- (void)setCurrentInput:(id)arg1;
- (void)setCurrentOutput:(id)arg1;
- (void)_setFaceDetectionEnabled:(BOOL)arg1 forCaptureDevice:(id)arg2 captureOutput:(id)arg3;
- (void)_cleanupPanorama;
- (id)_currentVideoConnection;
- (BOOL)canCapturePhotoDuringRecording;
- (id)currentOutput;
- (void)_sanityCheckCameraMode:(int*)arg1 cameraDevice:(int*)arg2;
- (void)_imageWriterQueueAvailabilityChanged;
- (void)_setCameraMode:(int)arg1 cameraDevice:(int)arg2;
- (void)_inCallStatusChanged:(BOOL)arg1;
- (void)_teardownDelaySuspendTimer;
- (void)setPostSessionSetupBlock:(id)arg1;
- (void)_setLocationEnabled:(BOOL)arg1;
- (void)_destroyCamera;
- (void)postOrientationChangedNotification:(int)arg1 force:(BOOL)arg2;
- (void)_updateCallStatus;
- (void)_callStateDidChange:(id)arg1;
- (void)_synchronizeHDRSettings;
- (void)setIsCameraApp:(BOOL)arg1;
- (BOOL)isCameraApp;
- (void)stopPreview;
- (void)startPreview;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)setCameraDevice:(int)arg1;
- (int)cameraDevice;
- (void)stopVideoCapture;
- (void)startVideoCapture;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)accelerometer:(id)arg1 didAccelerateWithTimeStamp:(double)arg2 x:(float)arg3 y:(float)arg4 z:(float)arg5 eventType:(int)arg6;
- (void)_serverDied:(id)arg1;
- (void)_applicationSuspended:(id)arg1;
- (id)currentSession;
- (BOOL)isReady;
- (void)captureOutput:(id)arg1 didDropSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 fromConnection:(id)arg3;
- (void)captureOutput:(id)arg1 didStartRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3;
- (void)captureOutput:(id)arg1 didFinishRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3 error:(id)arg4;
- (void)setFlashMode:(int)arg1;
- (int)flashMode;
- (BOOL)hasFlash;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })faceRectangle;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 fromConnection:(id)arg3;

@end
