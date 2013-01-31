/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSIndexSet, PLFilteredAlbumList, PLAlbumListChangeNotification, PLIndexMapper;

@interface PLFilteredAlbumListChangeNotification : PLAlbumListChangeNotification <PLIndexMapperDataSource> {
    PLFilteredAlbumList *_albumList;
    NSIndexSet *_oldFilteredIndexes;
    NSIndexSet *_filteredIndexes;
    PLIndexMapper *_indexMapper;
    PLAlbumListChangeNotification *_backingNotification;
}

@property(readonly) NSIndexSet * updatedFilteredIndexes;
@property(copy) NSIndexSet * filteredIndexes;
@property(readonly) PLIndexMapper * indexMapper;

+ (id)notificationForDerivedObject:(id)arg1 priorChangeState:(id)arg2 forBackingObjectNotification:(id)arg3;

- (id)description;
- (void)dealloc;
- (id)init;
- (id)initWithFilteredAlbumList:(id)arg1 albumListChangeNotification:(id)arg2;
- (void)setFilteredIndexes:(id)arg1;
- (BOOL)countDidChange;
- (id)updatedFilteredIndexes;
- (id)_changedObjects;
- (BOOL)_getOldSet:(id*)arg1 newSet:(id*)arg2;
- (id)_diffDescription;
- (BOOL)shouldReload;
- (id)albumList;
- (id)indexMapper;
- (BOOL)shouldIncludeObjectAtIndex:(unsigned int)arg1;
- (id)filteredIndexes;
- (id)object;

@end
