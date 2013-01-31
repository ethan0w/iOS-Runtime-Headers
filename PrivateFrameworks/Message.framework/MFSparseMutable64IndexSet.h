/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFSparseMutable64IndexSet : NSObject  {
    unsigned int _count;
    unsigned int _storageSize;
    unsigned int _cursor;
    unsigned long long *_storage;
}

+ (id)indexSet;

- (id)description;
- (void)dealloc;
- (unsigned int)count;
- (void)_garbageCollectStorageIfNecessary;
- (void)_incrementStorageIfNecessaryForCount:(unsigned int)arg1;
- (void)addIndexes:(id)arg1;
- (void)removeIndex:(unsigned long long)arg1;
- (BOOL)containsIndex:(unsigned long long)arg1;
- (unsigned long long)indexGreaterThanIndex:(unsigned long long)arg1;
- (unsigned long long)firstIndex;
- (void)addIndex:(unsigned long long)arg1;

@end
