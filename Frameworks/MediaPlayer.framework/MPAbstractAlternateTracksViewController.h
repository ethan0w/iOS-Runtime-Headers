/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAbstractAlternateTracksViewController : MPViewController  {
    unsigned int _selectedTracks[2];
    unsigned int _previousTracks[2];
}


- (void)dealloc;
- (id)init;
- (void)reloadData;
- (void)_alternateTypesChangedNotification:(id)arg1;
- (void)removeLoadingUI;
- (void)addLoadingUI;
- (unsigned int)typeForGroup:(int)arg1;
- (unsigned int)indexForGroup:(int)arg1;
- (id)arrayForGroup:(int)arg1;
- (void)saveChanges;
- (id)alternateTracks;

@end
