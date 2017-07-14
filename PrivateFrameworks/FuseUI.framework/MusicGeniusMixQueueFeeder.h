/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicGeniusMixQueueFeeder : MusicQueryQueueFeeder <NSSecureCoding> {
    unsigned int  _currentPlaylistOffset;
    <MusicGeniusMixQueueFeederDataSource> * _dataSource;
}

@property (nonatomic, retain) <MusicGeniusMixQueueFeederDataSource> *dataSource;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)dataSource;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)indexOfMediaItem:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned int)itemCount;
- (id)localizedAttributedPositionInPlaylistStringForItem:(id)arg1 withRegularTextAttributes:(id)arg2 emphasizedTextAttributes:(id)arg3;
- (id)localizedPositionInPlaylistString:(id)arg1;
- (id)mediaItemAtIndex:(unsigned int)arg1;
- (unsigned int)numberOfPaths;
- (id)pathAtIndex:(unsigned int)arg1;
- (id)query;
- (int)realRepeatType;
- (void)reloadWithPlaybackContext:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setDataSource:(id)arg1;
- (void)shuffleItemsWithAnchor:(unsigned int*)arg1;
- (int)shuffleType;
- (BOOL)userCanChangeShuffleAndRepeatType;

@end
