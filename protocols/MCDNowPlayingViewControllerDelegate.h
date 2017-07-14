/* Generated by RuntimeBrowser.
 */

@protocol MCDNowPlayingViewControllerDelegate <NSObject>

@optional

- (BOOL)nowPlayingViewController:(MCDNowPlayingViewController *)arg1 buttonShouldBeActive:(int)arg2;
- (void)nowPlayingViewController:(MCDNowPlayingViewController *)arg1 didSendAction:(int)arg2 state:(int)arg3;
- (BOOL)nowPlayingViewController:(MCDNowPlayingViewController *)arg1 shouldDisplayButton:(int)arg2 withImage:(out id*)arg3 existingIdentifier:(NSString *)arg4 tinted:(out BOOL*)arg5;
- (BOOL)nowPlayingViewController:(MCDNowPlayingViewController *)arg1 shouldEnableButton:(int)arg2;
- (void)nowPlayingViewControllerAddToLibrary:(MCDNowPlayingViewController *)arg1;
- (BOOL)nowPlayingViewControllerCanRepeat:(MCDNowPlayingViewController *)arg1;
- (BOOL)nowPlayingViewControllerCanShowAddToLibrary:(MCDNowPlayingViewController *)arg1;
- (BOOL)nowPlayingViewControllerCanShowAlbumLink:(MCDNowPlayingViewController *)arg1;
- (BOOL)nowPlayingViewControllerCanShowMore:(MCDNowPlayingViewController *)arg1;
- (BOOL)nowPlayingViewControllerCanShuffle:(MCDNowPlayingViewController *)arg1;
- (void)nowPlayingViewControllerDidRequestAlbum:(MCDNowPlayingViewController *)arg1;
- (BOOL)nowPlayingViewControllerIsFuseSubscriber:(MCDNowPlayingViewController *)arg1;
- (void)nowPlayingViewControllerMore:(MCDNowPlayingViewController *)arg1;
- (void)nowPlayingViewControllerToggleRepeat:(MCDNowPlayingViewController *)arg1;
- (void)nowPlayingViewControllerToggleShuffle:(MCDNowPlayingViewController *)arg1;

@end