/* Generated by RuntimeBrowser.
 */

@protocol MCDNowPlayingViewControllerDataSource <NSObject>

@required

- (NSString *)albumTextForNowPlayingController:(MCDNowPlayingViewController *)arg1;
- (NSString *)artistTextForNowPlayingController:(MCDNowPlayingViewController *)arg1;
- (UIImage *)backgroundArtForNowPlayingController:(MCDNowPlayingViewController *)arg1;
- (BOOL)nowPlayingViewControllerIsPlaying:(MCDNowPlayingViewController *)arg1;
- (BOOL)nowPlayingViewControllerIsShowingExplicitTrack:(MCDNowPlayingViewController *)arg1;
- (double)playbackDurationForNowPlayingViewController:(MCDNowPlayingViewController *)arg1;
- (double)playbackElapsedTimeForNowPlayingViewController:(MCDNowPlayingViewController *)arg1;
- (BOOL)playbackIsLiveStreamForNowPlayingViewController:(MCDNowPlayingViewController *)arg1;
- (NSString *)titleForNowPlayingController:(MCDNowPlayingViewController *)arg1;

@optional

- (BOOL)likedForNowPlayingViewController:(MCDNowPlayingViewController *)arg1;
- (int)repeatTypeForNowPlayingViewController:(MCDNowPlayingViewController *)arg1;
- (NSString *)shuffleStringForNowPlayingViewController:(MCDNowPlayingViewController *)arg1;
- (int)shuffleTypeForNowPlayingViewController:(MCDNowPlayingViewController *)arg1;

@end
