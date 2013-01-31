/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface NSSet : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, NSFastEnumeration> {
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)setWithArray:(id)arg1;
+ (id)setWithObjects:(id)arg1;
+ (id)setWithObject:(id)arg1;
+ (id)set;
+ (id)setWithSet:(id)arg1;
+ (id)setWithSet:(id)arg1 copyItems:(BOOL)arg2;
+ (id)setWithOrderedSet:(id)arg1;
+ (id)setWithOrderedSet:(id)arg1 copyItems:(BOOL)arg2;
+ (id)setWithOrderedSet:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
+ (id)setWithOrderedSet:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 copyItems:(BOOL)arg3;
+ (id)setWithArray:(id)arg1 copyItems:(BOOL)arg2;
+ (id)setWithArray:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
+ (id)newSetWithObjects:(const id*)arg1 count:(unsigned int)arg2;
+ (id)setWithObjects:(const id*)arg1 count:(unsigned int)arg2;
+ (id)setWithArray:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 copyItems:(BOOL)arg3;
+ (BOOL)supportsSecureCoding;
+ (BOOL)supportsSecureCoding;

- (void)enumerateObjectsUsingBlock:(id)arg1;
- (id)description;
- (unsigned int)hash;
- (id)initWithObjects:(id)arg1;
- (BOOL)containsObject:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long *x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned int)arg3;
- (unsigned int)count;
- (id)initWithObject:(id)arg1;
- (id)initWithArray:(id)arg1 copyItems:(BOOL)arg2;
- (id)initWithOrderedSet:(id)arg1;
- (id)setByAddingObjectsFromArray:(id)arg1;
- (id)sortedArrayUsingComparator:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)member:(id)arg1;
- (id)initWithArray:(id)arg1;
- (BOOL)intersectsSet:(id)arg1;
- (BOOL)isEqualToSet:(id)arg1;
- (id)allObjects;
- (id)anyObject;
- (id)initWithObjects:(const id*)arg1 count:(unsigned int)arg2;
- (void)getObjects:(id*)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (id)setByAddingObjectsFromSet:(id)arg1;
- (void)enumerateObjectsWithOptions:(unsigned int)arg1 usingBlock:(id)arg2;
- (id)objectsPassingTest:(id)arg1;
- (id)objectEnumerator;
- (void)makeObjectsPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (void)makeObjectsPerformSelector:(SEL)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)setByAddingObject:(id)arg1;
- (id)members:(id)arg1 notFoundMarker:(id)arg2;
- (BOOL)isSubsetOfSet:(id)arg1;
- (BOOL)isSubsetOfOrderedSet:(id)arg1;
- (BOOL)intersectsOrderedSet:(id)arg1;
- (BOOL)isNSSet__;
- (id)initWithSet:(id)arg1;
- (id)initWithOrderedSet:(id)arg1 copyItems:(BOOL)arg2;
- (id)initWithOrderedSet:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (id)initWithArray:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (id)initWithSet:(id)arg1 copyItems:(BOOL)arg2;
- (void)getObjects:(id*)arg1 count:(unsigned int)arg2;
- (id)initWithOrderedSet:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 copyItems:(BOOL)arg3;
- (id)initWithArray:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 copyItems:(BOOL)arg3;
- (id)descriptionWithLocale:(id)arg1 indent:(unsigned int)arg2;
- (id)sortedArrayWithOptions:(unsigned int)arg1 usingComparator:(id)arg2;
- (id)objectsWithOptions:(unsigned int)arg1 passingTest:(id)arg2;
- (void)__applyValues:(int (*)())arg1 context:(void*)arg2;
- (void)getObjects:(id*)arg1;
- (BOOL)__getValue:(id*)arg1 forObj:(id)arg2;
- (unsigned long)_cfTypeID;
- (id)descriptionWithLocale:(id)arg1;
- (unsigned int)countForObject:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1;
- (id)valueForKeyPath:(id)arg1;
- (id)_distinctUnionOfSetsForKeyPath:(id)arg1;
- (id)_distinctUnionOfObjectsForKeyPath:(id)arg1;
- (id)_distinctUnionOfArraysForKeyPath:(id)arg1;
- (id)_minForKeyPath:(id)arg1;
- (id)_maxForKeyPath:(id)arg1;
- (id)_countForKeyPath:(id)arg1;
- (id)_avgForKeyPath:(id)arg1;
- (id)_sumForKeyPath:(id)arg1;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned int)arg3 context:(void*)arg4;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void*)arg3;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)sortedArrayUsingDescriptors:(id)arg1;
- (id)filteredSetUsingPredicate:(id)arg1;
- (id)replacementObjectForPortCoder:(id)arg1;
- (void)ML3GetValuesAsPersistentIDsUsingBlock:(id)arg1;
- (unsigned int)pl_countOfObjectsPassingTest:(id)arg1;
- (id)_gkSetByRemovingObject:(id)arg1;
- (id)_gkDistinctValuesForKeyPath:(id)arg1;
- (id)_gkValuesForKeyPath:(id)arg1;
- (id)_gkMapDictionaryWithKeyPath:(id)arg1;
- (id)_gkMapWithBlock:(id)arg1;
- (id)_gkMapDictionaryWithKeyPath:(id)arg1 valueKeyPath:(id)arg2;
- (id)mf_getAllObjectsAsArray;
- (id)allObjectsWithClass:(Class)arg1;

@end
