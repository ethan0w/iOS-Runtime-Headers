/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class ML3Query, NSObject<OS_dispatch_queue>, NSMutableArray, ML3QueryResultSet_BackingStore;

@interface ML3QueryResultSet : NSObject <NSCopying> {
    ML3QueryResultSet_BackingStore *_backingStore;
    ML3Query *_query;
    long long _revision;
    BOOL _supportsIncrementalUpdate;
    NSMutableArray *_updateToLibraryCurrentRevisionCompletionBlocks;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(readonly) ML3Query * query;
@property(readonly) long long revision;
@property(readonly) unsigned int count;


- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)count;
- (long long)revision;
- (BOOL)updateToLibraryCurrentRevision;
- (void)_mergeChangesWithFromNewPIDs:(const struct vector<long long, std::allocator<long long> > { struct _Vector_impl { long long *x_1_1_1; long long *x_1_1_2; long long *x_1_1_3; } x1; }*)arg1 changedPIDs:(struct unordered_set<long long, std::tr1::hash<long long>, std::equal_to<long long>, std::allocator<long long>, false> { struct _Identity<long long> { } x1; struct equal_to<long long> { } x2; struct hash<long long> { } x3; struct _Mod_range_hashing { } x4; struct allocator<std::tr1::__detail::_Hash_node<long long, false> > { } x5; struct _Hash_node<long long, false> {} **x6; unsigned int x7; unsigned int x8; struct _Prime_rehash_policy { float x_9_1_1; float x_9_1_2; unsigned long x_9_1_3; } x9; }*)arg2;
- (void)_loadCurrentFullResults;
- (void)_onQueueInvokeAndClearUpdateFinishedBlocksWithDidUpdateResult:(BOOL)arg1;
- (BOOL)_updateToLibraryCurrentRevision;
- (void)_onQueueAddUpdateFinishedBlock:(id)arg1;
- (unsigned int)songLimit;
- (id)initWithQuery:(id)arg1;
- (id)_initWithQuery:(id)arg1 supportsIncrementalUpdate:(BOOL)arg2;
- (long long)persistentIDAtIndex:(unsigned int)arg1;
- (void)enumerateSectionsUsingBlock:(id)arg1;
- (void)enumeratePersistentIDsUsingBlock:(id)arg1;
- (id)query;
- (id)sectionIndexTitles;
- (void)enumerateSectionHeadersUsingBlock:(id)arg1;

@end
