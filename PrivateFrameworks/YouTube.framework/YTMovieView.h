/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
 */

@class YTSearchRequest, UIImageView, UILabel, YTVideo, UIMoviePlayerController, NSURL, NSArray;

@interface YTMovieView : UIView  {
    id _delegate;
    YTVideo *_video;
    NSArray *_videoList;
    NSURL *_youTubeURL;
    YTSearchRequest *_videoInfoRequest;
    UIMoviePlayerController *_moviePlayer;
    UIImageView *_bugView;
    UIImageView *_gradientView;
    BOOL _canAutoPlay;
    BOOL _shownFromExternalURL;
    BOOL _switchingVideos;
    BOOL _controlsShown;
    BOOL _useSmallLogo;
    BOOL _showControlsAfterFullscreenExit;
    BOOL _isShown;
    double _seekTime;
    UILabel *_logLabel;
}


- (void)forceControlsVisible:(BOOL)arg1;
- (void)shareSheetDidHide;
- (void)shareSheetWillShow;
- (void)useSmallLogo:(BOOL)arg1;
- (void)willShowAlert;
- (void)didHide;
- (void)willHide;
- (void)didShow;
- (void)willShowForVideo:(id)arg1 inList:(id)arg2 orVideoID:(id)arg3;
- (void)setSeekTime:(double)arg1;
- (void)_presentAlertForError:(id)arg1 reasonCode:(id)arg2;
- (void)_hideBug;
- (void)_hideOverlay;
- (void)_loadVideoFromURL:(BOOL)arg1;
- (void)setCanAutoPlay:(BOOL)arg1;
- (void)_loadVideoInfoWithID:(id)arg1;
- (void)_switchToVideo:(id)arg1;
- (void)_cancelVideoInfoRequest;
- (BOOL)_canBookmark;
- (BOOL)_canShare;
- (BOOL)_loggingEnabled;
- (void)_destroyMoviePlayer;
- (void)_updateCaptionsForMovie;
- (void)searchRequest:(id)arg1 didFailWithError:(id)arg2;
- (void)searchRequest:(id)arg1 receivedVideos:(id)arg2 startIndex:(unsigned int)arg3 videosRemaining:(unsigned int)arg4;
- (void)play;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)video;
- (void)_setupBackground;
- (void)pause;
- (int)orientation;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)moviePlayer;
- (BOOL)canContinuePlayingWhenLocked;
- (BOOL)moviePlayer:(id)arg1 validateAction:(SEL)arg2;
- (BOOL)moviePlayerExitRequest:(id)arg1 exitReason:(int)arg2;
- (void)moviePlayerPlaybackDidEnd:(id)arg1;
- (void)moviePlayerPlaybackStateDidChange:(id)arg1 fromPlaybackState:(unsigned int)arg2;
- (void)moviePlayerBufferingStateDidChange:(id)arg1;
- (BOOL)moviePlayerHeadsetPreviousTrackPressed:(id)arg1;
- (BOOL)moviePlayerHeadsetNextTrackPressed:(id)arg1;
- (BOOL)isPlaying;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })moviePlayerFrameAfterFullscreenExit:(id)arg1;
- (void)moviePlayerWillHideOverlay:(id)arg1;
- (void)moviePlayerWillShowOverlay:(id)arg1;
- (void)moviePlayerDidExitFullscreen:(id)arg1;
- (void)moviePlayerWillExitFullscreen:(id)arg1;
- (void)moviePlayerDidEnterFullscreen:(id)arg1;
- (void)moviePlayerWillEnterFullscreen:(id)arg1;
- (BOOL)moviePlayerForwardButtonPressed:(id)arg1;
- (BOOL)moviePlayerEmailButtonPressed:(id)arg1;
- (BOOL)moviePlayerBackwardButtonPressed:(id)arg1;
- (BOOL)moviePlayerAddBookmarkButtonPressed:(id)arg1;
- (id)fullscreenView;
- (void)moviePlayerDidHideOverlay:(id)arg1;
- (void)moviePlayerDidShowOverlay:(id)arg1;
- (void)setFullscreen:(BOOL)arg1;

@end
