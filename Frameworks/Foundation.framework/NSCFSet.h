/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSCFSet : NSMutableSet

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;

- (BOOL)_isDeallocating;
- (unsigned int)_trueCount;
- (BOOL)_tryRetain;
- (void)addObject:(id)arg1;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)count;
- (unsigned int)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned int)arg3;
- (void)getObjects:(id*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)member:(id)arg1;
- (void)minusSet:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)objectEnumerator;
- (oneway void)release;
- (void)removeAllObjects;
- (void)removeObject:(id)arg1;
- (id)retain;
- (unsigned int)retainCount;
- (void)setSet:(id)arg1;
- (void)unionSet:(id)arg1;

@end
