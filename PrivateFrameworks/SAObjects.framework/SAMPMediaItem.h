/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString;

@interface SAMPMediaItem : SAMPMediaEntity  {
}

@property(copy) NSString * album;
@property(copy) NSString * artist;
@property(copy) NSString * composer;
@property(copy) NSString * genre;
@property int playCount;
@property int rating;
@property(copy) NSString * sortAlbum;
@property(copy) NSString * sortArtist;
@property int trackNumber;

+ (id)mediaItemWithDictionary:(id)arg1 context:(id)arg2;
+ (id)mediaItem;

- (void)setGenre:(id)arg1;
- (void)setTrackNumber:(int)arg1;
- (int)trackNumber;
- (void)setSortArtist:(id)arg1;
- (id)sortArtist;
- (void)setSortAlbum:(id)arg1;
- (id)sortAlbum;
- (void)setComposer:(id)arg1;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
- (id)encodedClassName;
- (void)setAlbum:(id)arg1;
- (id)album;
- (void)setArtist:(id)arg1;
- (void)setPlayCount:(int)arg1;
- (int)playCount;
- (id)genre;
- (id)composer;
- (id)artist;
- (id)groupIdentifier;
- (void)setRating:(int)arg1;
- (int)rating;

@end
