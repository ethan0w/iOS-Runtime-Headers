/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MediaControlSender.framework/MediaControlSender
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSObject<OS_dispatch_queue>;

@interface MediaControlClient : NSObject  {
    NSObject<OS_dispatch_queue> *_queue;
    struct MediaControlClientImp { } *_client;
    NSObject<OS_dispatch_queue> *_eventHandlerQueue;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _eventHandlerBlock;

}


- (void)invalidate;
- (void)dealloc;
- (id)init;
- (void)sendPhotoData:(id)arg1 options:(id)arg2 completionQueue:(id)arg3 completionBlock:(id)arg4;
- (void)playWithRemoteURL:(id)arg1 startPosition:(float)arg2 completionQueue:(id)arg3 completionBlock:(id)arg4;
- (void)getSlideshowInfoWithOptions:(unsigned int)arg1 completionQueue:(id)arg2 completionBlock:(id)arg3;
- (void)activateResource:(id)arg1 completionQueue:(id)arg2 completionBlock:(id)arg3;
- (void)removeResource:(id)arg1 completionQueue:(id)arg2 completionBlock:(id)arg3;
- (void)addResource:(id)arg1 completionQueue:(id)arg2 completionBlock:(id)arg3;
- (void)addResourceFile:(id)arg1 mimeType:(id)arg2 uuid:(id)arg3 completionQueue:(id)arg4 completionBlock:(id)arg5;
- (void)addResourceData:(id)arg1 mimeType:(id)arg2 uuid:(id)arg3 completionQueue:(id)arg4 completionBlock:(id)arg5;
- (void)sendPhotoData:(id)arg1 completionQueue:(id)arg2 completionBlock:(id)arg3;
- (void)startPresentation:(id)arg1 completionQueue:(id)arg2 completionBlock:(id)arg3;
- (void)setSlideshowInfo:(id)arg1 completionQueue:(id)arg2 completionBlock:(id)arg3;
- (void)getSlideshowFeaturesWithOptions:(unsigned int)arg1 completionQueue:(id)arg2 completionBlock:(id)arg3;
- (void)performRemoteAction:(id)arg1 withParams:(id)arg2 completionQueue:(id)arg3 completionBlock:(id)arg4;
- (void)setRate:(float)arg1 completionQueue:(id)arg2 completionBlock:(id)arg3;
- (void)setPosition:(float)arg1 completionQueue:(id)arg2 completionBlock:(id)arg3;
- (void)setProperty:(id)arg1 qualifier:(id)arg2 value:(id)arg3 completionQueue:(id)arg4 completionBlock:(id)arg5;
- (void)getPlaybackInfoWithOptions:(unsigned int)arg1 completionQueue:(id)arg2 completionBlock:(id)arg3;
- (void)authorizeWithPICRequest:(id)arg1 completionQueue:(id)arg2 completionBlock:(id)arg3;
- (void)ensureConnected;
- (void)getProperty:(id)arg1 qualifier:(id)arg2 completionQueue:(id)arg3 completionBlock:(id)arg4;
- (void)stopWithOptions:(unsigned int)arg1 completionQueue:(id)arg2 completionBlock:(id)arg3;
- (void)ensureDisconnected;
- (void)checkAuthentication;
- (void)playWithLocalFilePath:(id)arg1 params:(id)arg2 completionQueue:(id)arg3 completionBlock:(id)arg4;
- (void)playRemoteWithParams:(id)arg1 completionQueue:(id)arg2 completionBlock:(id)arg3;
- (void)setEventHandlerQueue:(id)arg1 eventHandlerBlock:(id)arg2;
- (void)setVolume:(float)arg1 completionQueue:(id)arg2 completionBlock:(id)arg3;
- (void)getVolumeWithOptions:(unsigned int)arg1 completionQueue:(id)arg2 completionBlock:(id)arg3;
- (void)getPositionWithOptions:(unsigned int)arg1 completionQueue:(id)arg2 completionBlock:(id)arg3;
- (void)playWithLocalFilePath:(id)arg1 startPosition:(float)arg2 playInfo:(id)arg3 completionQueue:(id)arg4 completionBlock:(id)arg5;
- (void)setHost:(id)arg1;
- (void)setPassword:(id)arg1;
- (struct MediaControlClientImp { }*)internalClient;

@end
