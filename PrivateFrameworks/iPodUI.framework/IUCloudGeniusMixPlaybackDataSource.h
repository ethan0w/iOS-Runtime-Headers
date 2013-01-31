/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class MPMediaItem, MPGeniusMix, MPMediaQueryShuffledItems;

@interface IUCloudGeniusMixPlaybackDataSource : IUMediaQueryPlaybackDataSource <IUGeniusMixQueueFeederDataSource> {
    BOOL _canPlayForCurrentNetworkType;
    BOOL _canPlayForCurrentNetworkTypeIsCached;
    MPMediaQueryShuffledItems *_items;
    MPGeniusMix *_mix;
    MPMediaItem *_requiredInitialMediaItem;
}

@property(readonly) MPGeniusMix * mix;
@property(retain) MPMediaItem * requiredInitialMediaItem;

+ (Class)queueFeederClass;

- (BOOL)_canPlayFromCloudUsingNetworkType:(int)arg1;
- (id)requiredInitialMediaItem;
- (id)initialMediaItem;
- (void)setRequiredInitialMediaItem:(id)arg1;
- (id)geniusMixQueueFeeder:(id)arg1 mediaItemAtIndex:(unsigned int)arg2;
- (unsigned int)geniusMixQueueFeeder:(id)arg1 indexOfMediaItem:(id)arg2;
- (id)geniusMixQueueFeeder:(id)arg1 queryForMediaItemAtIndex:(unsigned int)arg2;
- (BOOL)geniusMixQueueFeeder:(id)arg1 shouldReloadForChangeFromNetworkType:(int)arg2 toNetworkType:(int)arg3;
- (id)mix;
- (unsigned int)geniusMixQueueFeederMediaItemCount:(id)arg1;
- (id)initWithGeniusMix:(id)arg1 requiredInitialMediaItem:(id)arg2 error:(id*)arg3;
- (void)dealloc;
- (void)_mediaLibraryDidChangeNotification:(id)arg1;
- (void)_networkTypeDidChangeNotification:(id)arg1;

@end
