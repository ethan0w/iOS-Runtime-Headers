/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CMKVideoCaptureResponse : CMKCaptureResponse {
    short  _assetSubtype;
    BOOL  _didCompleteUnexpectedly;
    double  _duration;
    int  _recordingStoppedReason;
    BOOL  _unplayable;
    NSString * _videoCapturePath;
    UIImage * _videoPreviewImage;
}

@property (nonatomic) short assetSubtype;
@property (nonatomic) BOOL didCompleteUnexpectedly;
@property (nonatomic) double duration;
@property (nonatomic) int recordingStoppedReason;
@property (getter=isSuccessful, nonatomic, readonly) BOOL successful;
@property (getter=isUnplayable, nonatomic) BOOL unplayable;
@property (nonatomic, copy) NSString *videoCapturePath;
@property (nonatomic, retain) UIImage *videoPreviewImage;

+ (double)minimumVideoCaptureDuration;

- (void).cxx_destruct;
- (short)assetSubtype;
- (BOOL)didCompleteUnexpectedly;
- (double)duration;
- (id)init;
- (BOOL)isSuccessful;
- (BOOL)isUnplayable;
- (int)recordingStoppedReason;
- (void)setAssetSubtype:(short)arg1;
- (void)setDidCompleteUnexpectedly:(BOOL)arg1;
- (void)setDuration:(double)arg1;
- (void)setRecordingStoppedReason:(int)arg1;
- (void)setUnplayable:(BOOL)arg1;
- (void)setVideoCapturePath:(id)arg1;
- (void)setVideoPreviewImage:(id)arg1;
- (id)videoCapturePath;
- (id)videoPreviewImage;

@end
