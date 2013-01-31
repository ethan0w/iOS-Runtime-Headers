/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@interface VMURangeArray : NSObject <NSCopying> {
    unsigned int _count;
    struct _VMURange { unsigned long long x1; unsigned long long x2; } *_ranges;
    unsigned int _max;
    BOOL _sorted;
}


- (void)setCapacity:(unsigned int)arg1;
- (struct _VMURange { unsigned long long x1; unsigned long long x2; }*)ranges;
- (id)description;
- (struct _VMURange { unsigned long long x1; unsigned long long x2; })rangeAtIndex:(unsigned int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (unsigned int)count;
- (unsigned long long)sumLengths;
- (struct _VMURange { unsigned long long x1; unsigned long long x2; })largestRange;
- (struct _VMURange { unsigned long long x1; unsigned long long x2; })subrangeNotExcludedBySelfForRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg1;
- (BOOL)intersectsRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg1;
- (BOOL)intersectsLocation:(unsigned long long)arg1;
- (void)removeAllRanges;
- (void)removeRangeAtIndex:(unsigned int)arg1;
- (void)insertRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg1 atIndex:(unsigned int)arg2;
- (struct _VMURange { unsigned long long x1; unsigned long long x2; })rangeForLocation:(unsigned long long)arg1;
- (void)addRanges:(id)arg1;
- (struct _VMURange { unsigned long long x1; unsigned long long x2; })largestSubrangeNotExcludedBySelfForRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg1 andLargerThan:(unsigned long long)arg2 startIndex:(unsigned int*)arg3;
- (unsigned int)indexForLocation:(unsigned long long)arg1;
- (id)initWithRanges:(const struct _VMURange { unsigned long long x1; unsigned long long x2; }*)arg1 count:(unsigned int)arg2;
- (void)addRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)sort;
- (struct _VMURange { unsigned long long x1; unsigned long long x2; })range;

@end
