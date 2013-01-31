/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVAssetWriterHelper, NSArray, NSString, NSError, AVAssetWriterInternal, NSURL;

@interface AVAssetWriter : NSObject  {
    AVAssetWriterInternal *_internal;
}

@property(readonly) NSURL * outputURL;
@property(readonly) NSString * outputFileType;
@property(readonly) NSArray * availableMediaTypes;
@property(readonly) int status;
@property(readonly) NSError * error;
@property(copy) NSArray * metadata;
@property BOOL shouldOptimizeForNetworkUse;
@property(readonly) NSArray * inputs;
@property(getter=_helper,readonly) AVAssetWriterHelper * helper;

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (void)initialize;
+ (id)keyPathsForValuesAffectingError;
+ (id)keyPathsForValuesAffectingStatus;
+ (id)assetWriterWithURL:(id)arg1 fileType:(id)arg2 error:(id*)arg3;
+ (id)_errorForOSStatus:(long)arg1;

- (id)description;
- (void)dealloc;
- (id)init;
- (void)addInput:(id)arg1;
- (BOOL)canAddInput:(id)arg1;
- (BOOL)startWriting;
- (id)error;
- (int)status;
- (void)finalize;
- (id)_helper;
- (id)metadata;
- (void)setMetadata:(id)arg1;
- (void)_transitionToFailedStatusWithError:(id)arg1;
- (BOOL)_setHelper:(id)arg1 ifCurrentHelper:(id)arg2;
- (void)finishWritingWithCompletionHandler:(id)arg1;
- (BOOL)finishWriting;
- (void)cancelWriting;
- (void)endSessionAtSourceTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)startSessionAtSourceTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)addInputGroup:(id)arg1;
- (BOOL)canAddInputGroup:(id)arg1;
- (BOOL)canApplyOutputSettings:(id)arg1 forMediaType:(id)arg2;
- (id)availableMediaTypes;
- (BOOL)_setHelper:(id)arg1 ifCurrentHelper:(id)arg2 withBlock:(id)arg3;
- (id)outputFileType;
- (id)outputURL;
- (id)initWithURL:(id)arg1 fileType:(id)arg2 error:(id*)arg3;
- (id)inputGroups;
- (void)setMovieTimeScale:(int)arg1;
- (int)movieTimeScale;
- (void)setShouldOptimizeForNetworkUse:(BOOL)arg1;
- (BOOL)shouldOptimizeForNetworkUse;
- (void)setMovieFragmentInterval:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })movieFragmentInterval;
- (id)inputs;

@end
