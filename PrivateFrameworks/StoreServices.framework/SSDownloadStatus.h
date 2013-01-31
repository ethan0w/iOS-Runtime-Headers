/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class SSDownloadPhase, NSError;

@interface SSDownloadStatus : NSObject <SSXPCCoding, NSCopying> {
    SSDownloadPhase *_activePhase;
    BOOL _contentRestricted;
    NSError *_error;
    BOOL _failed;
    BOOL _paused;
}

@property(retain) NSError * error;
@property(getter=isFailed) BOOL failed;
@property(getter=isFailedTransient,readonly) BOOL failedTransient;
@property(getter=isPausable) BOOL pausable;
@property(getter=isPaused) BOOL paused;
@property(getter=isContentRestricted) BOOL contentRestricted;
@property(readonly) SSDownloadPhase * activePhase;
@property(readonly) float percentComplete;


- (BOOL)isContentRestricted;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)activePhase;
- (BOOL)isFailedTransient;
- (BOOL)isFailed;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (void)setOperationType:(int)arg1;
- (void)setOperationProgress:(id)arg1;
- (void)setContentRestricted:(BOOL)arg1;
- (id)error;
- (void)setFailed:(BOOL)arg1;
- (void)setPaused:(BOOL)arg1;
- (void)setPercentComplete:(float)arg1;
- (float)percentComplete;
- (void)setError:(id)arg1;
- (BOOL)isPaused;
- (BOOL)isPausable;
- (void)setPausable:(BOOL)arg1;

@end
