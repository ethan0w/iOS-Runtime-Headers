/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class _NSFaultingMutableSetMutationMethods;

@interface _NSProxyWrapperMutableSet : _NSNotifyingWrapperMutableSet  {
    _NSFaultingMutableSetMutationMethods *_mutationMethods;
}


- (void)unionSet:(id)arg1;
- (void)removeAllObjects;
- (void)addObject:(id)arg1;
- (void)dealloc;
- (void)minusSet:(id)arg1;
- (void)intersectSet:(id)arg1;
- (void)addObjectsFromArray:(id)arg1;
- (void)removeObject:(id)arg1;
- (void)setSet:(id)arg1;
- (id)initWithContainer:(id)arg1 key:(id)arg2 mutableSet:(id)arg3 mutationMethods:(id)arg4;

@end
