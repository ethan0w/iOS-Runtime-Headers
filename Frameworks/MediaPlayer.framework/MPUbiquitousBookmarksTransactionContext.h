/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPMediaQuery, NSString, MPMediaLibrary;

@interface MPUbiquitousBookmarksTransactionContext : NSObject <MZUniversalPlaybackPositionTransactionContext> {
    MPMediaLibrary *_mediaLibrary;
    NSString *_lastSyncedDomainVersion;
    unsigned long long _lastSyncedEntityRevision;
    unsigned long long _transactionEntityRevision;
    MPMediaQuery *_itemsQuery;
}

@property(retain) MPMediaLibrary * mediaLibrary;
@property unsigned long long lastSyncedEntityRevision;
@property unsigned long long transactionEntityRevision;
@property(copy) NSString * lastSyncedDomainVersion;
@property(retain) MPMediaQuery * itemsQuery;


- (id)description;
- (void)dealloc;
- (id)lastSyncedDomainVersion;
- (unsigned long long)transactionEntityRevision;
- (void)setItemsQuery:(id)arg1;
- (unsigned long long)lastSyncedEntityRevision;
- (void)setLastSyncedDomainVersion:(id)arg1;
- (void)setLastSyncedEntityRevision:(unsigned long long)arg1;
- (void)setTransactionEntityRevision:(unsigned long long)arg1;
- (id)itemsQuery;
- (void)setMediaLibrary:(id)arg1;
- (id)mediaLibrary;

@end
