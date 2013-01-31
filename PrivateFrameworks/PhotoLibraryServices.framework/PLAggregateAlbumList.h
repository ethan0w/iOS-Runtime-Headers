/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSString, NSMutableOrderedSet;

@interface PLAggregateAlbumList : NSObject <PLAlbumListChangeObserver, PLAlbumContainer> {
    NSMutableOrderedSet *_allAlbums;
    NSMutableOrderedSet *_childAlbumLists;
    int _filter;
}

@property int filter;
@property(readonly) id albumsSortingComparator;
@property(readonly) unsigned int unreadAlbumsCount;
@property(readonly) NSString * _prettyDescription;
@property(readonly) NSString * _typeDescription;

+ (struct NSObject { Class x1; }*)albumListWithFilter:(int)arg1 inPhotoLibrary:(id)arg2;

- (int)filter;
- (id)identifier;
- (id)managedObjectContext;
- (void)dealloc;
- (void)_invalidateAllAlbums;
- (id)initWithFilter:(int)arg1 inPhotoLibrary:(id)arg2;
- (void)albumListDidChange:(id)arg1;
- (unsigned int)unreadAlbumsCount;
- (void)updateAlbumsOrderIfNeeded;
- (BOOL)needsReordering;
- (void)setNeedsReordering;
- (BOOL)albumHasFixedOrder:(struct NSObject { Class x1; }*)arg1;
- (BOOL)canEditAlbums;
- (BOOL)hasAtLeastOneAlbum;
- (int)albumListType;
- (id)albumsSortingComparator;
- (id)_prettyDescription;
- (id)photoLibrary;
- (id)albums;
- (id)_typeDescription;
- (void)setFilter:(int)arg1;

@end
