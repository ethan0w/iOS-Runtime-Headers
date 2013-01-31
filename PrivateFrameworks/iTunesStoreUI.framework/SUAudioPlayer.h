/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class AVPlayer, NSMutableDictionary, AVPlayerItem, SUPlayerStatus, NSURL, AVAsset;

@interface SUAudioPlayer : NSObject  {
    AVAsset *_asset;
    NSMutableDictionary *_nowPlayingInfo;
    AVPlayer *_player;
    AVPlayerItem *_playerItem;
    SUPlayerStatus *_status;
    id _timeObserver;
    NSURL *_url;
}

@property(readonly) NSURL * URL;
@property(readonly) SUPlayerStatus * playerStatus;


- (id)valueForNowPlayingKey:(id)arg1;
- (void)setValue:(id)arg1 forNowPlayingKey:(id)arg2;
- (void)_postStatusChangeNotification;
- (void)_itemPlayedToEndNotification:(id)arg1;
- (id)_newFadeInAudioMixForAsset:(id)arg1;
- (void)_updateForPeriodicTickWithTime:(double)arg1;
- (void)_failWithError:(id)arg1;
- (void)_applyNowPlayingInfo;
- (void)_setPlayerState:(int)arg1;
- (void)_handleAssetValuesDidLoad;
- (void)_destroyPlayerItem;
- (void)_destroyPlayer;
- (id)playerStatus;
- (void)play;
- (id)URL;
- (id)initWithURL:(id)arg1;
- (void)dealloc;
- (void)pause;
- (void)stop;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)_itemFailedToPlayToEndNotification:(id)arg1;
- (void)seekToTime:(double)arg1;

@end
