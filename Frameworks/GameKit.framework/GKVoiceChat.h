/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, GKSession, NSString, GKVoiceChatSession;

@interface GKVoiceChat : NSObject <GKVoiceChatSessionDelegate> {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _playerStateUpdateHandler;

    GKSession *_gkSession;
    GKVoiceChatSession *_gkVoiceChatSession;
}

@property(copy) id playerStateUpdateHandler;
@property(readonly) NSString * name;
@property(getter=isActive) BOOL active;
@property float volume;
@property(readonly) NSArray * playerIDs;
@property(retain) GKSession * gkSession;
@property(retain) GKVoiceChatSession * gkVoiceChatSession;

+ (BOOL)isVoIPAllowed;

- (void)setVolume:(float)arg1;
- (float)volume;
- (id)name;
- (void)dealloc;
- (void)stop;
- (BOOL)isActive;
- (void)start;
- (void)setActive:(BOOL)arg1;
- (void)setGkVoiceChatSession:(id)arg1;
- (id)playerStateUpdateHandler;
- (void)setMute:(BOOL)arg1 forPlayer:(id)arg2;
- (void)gkVoiceChatSession:(id)arg1 stateUpdate:(unsigned int)arg2 forPeer:(id)arg3;
- (id)gkSession;
- (id)gkVoiceChatSession;
- (void)setPlayerStateUpdateHandler:(id)arg1;
- (void)setGkSession:(id)arg1;
- (id)initChat:(id)arg1 withSession:(id)arg2;
- (id)playerIDs;

@end
