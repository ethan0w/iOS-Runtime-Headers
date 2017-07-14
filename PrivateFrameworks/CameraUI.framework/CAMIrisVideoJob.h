/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMIrisVideoJob : NSObject <NSSecureCoding> {
    int  _captureDevice;
    NSError * _captureError;
    int  _captureOrientation;
    double  _captureTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _duration;
    NSString * _filterName;
    NSURL * _filteredVideoURL;
    NSString * _irisIdentifier;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _stillImageDisplayTime;
    NSString * _stillImagePersistenceUUID;
    NSString * _videoPersistenceUUID;
    NSURL * _videoURL;
}

@property (nonatomic, readonly) int captureDevice;
@property (nonatomic, readonly) NSError *captureError;
@property (nonatomic, readonly) int captureOrientation;
@property (nonatomic, readonly) double captureTime;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } duration;
@property (nonatomic, readonly) NSString *filterName;
@property (nonatomic, readonly) NSURL *filteredVideoURL;
@property (nonatomic, readonly) NSString *irisIdentifier;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } stillImageDisplayTime;
@property (nonatomic, readonly) NSString *stillImagePersistenceUUID;
@property (nonatomic, readonly) NSString *videoPersistenceUUID;
@property (nonatomic, readonly) NSURL *videoURL;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (int)captureDevice;
- (id)captureError;
- (int)captureOrientation;
- (double)captureTime;
- (id)description;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (void)encodeWithCoder:(id)arg1;
- (id)filterName;
- (id)filteredVideoURL;
- (id)initWithCoder:(id)arg1;
- (id)initWithVideoURL:(id)arg1 stillImagePersistenceUUID:(id)arg2 videoPersistenceUUID:(id)arg3 irisIdentifier:(id)arg4 captureDevice:(int)arg5 captureOrientation:(int)arg6 duration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg7 stillImageDisplayTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg8 captureTime:(double)arg9 captureError:(id)arg10 filterName:(id)arg11 filteredVideoURL:(id)arg12;
- (id)irisIdentifier;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })stillImageDisplayTime;
- (id)stillImagePersistenceUUID;
- (id)videoPersistenceUUID;
- (id)videoURL;

@end
