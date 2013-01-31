/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class _NSFaultingMutableOrderedSetMutationMethods;

@interface _NSProxyWrapperMutableOrderedSet : _NSNotifyingWrapperMutableOrderedSet  {
    _NSFaultingMutableOrderedSetMutationMethods *_mutationMethods;
}


- (void)unionSet:(id)arg1;
- (void)replaceObjectAtIndex:(unsigned int)arg1 withObject:(id)arg2;
- (void)removeAllObjects;
- (void)addObject:(id)arg1;
- (void)dealloc;
- (void)sortWithOptions:(unsigned int)arg1 usingComparator:(id)arg2;
- (void)removeObjectsInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)insertObject:(id)arg1 atIndex:(unsigned int)arg2;
- (void)removeObjectsAtIndexes:(id)arg1;
- (void)sortUsingComparator:(id)arg1;
- (void)removeObjectAtIndex:(unsigned int)arg1;
- (void)minusSet:(id)arg1;
- (void)intersectSet:(id)arg1;
- (void)removeObjectsInArray:(id)arg1;
- (void)addObjectsFromArray:(id)arg1;
- (void)unionOrderedSet:(id)arg1;
- (void)minusOrderedSet:(id)arg1;
- (void)intersectOrderedSet:(id)arg1;
- (void)insertObjects:(id)arg1 atIndexes:(id)arg2;
- (void)addObjects:(const id*)arg1 count:(unsigned int)arg2;
- (void)sortRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 options:(unsigned int)arg2 usingComparator:(id)arg3;
- (void)insertObjects:(id*)arg1 count:(unsigned int)arg2 atIndex:(unsigned int)arg3;
- (id)initWithContainer:(id)arg1 key:(id)arg2 mutableOrderedSet:(id)arg3 mutationMethods:(id)arg4;

@end
