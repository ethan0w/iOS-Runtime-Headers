/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@class NSMutableArray, NSMapTable;

@interface VMUVMRegionIdentifier : NSObject  {
    NSMutableArray *_regions;
    NSMapTable *_mallocZoneStatisticsMap;
}


- (void)dealloc;
- (id)descriptionForRegionTotalsWithOptions:(unsigned int)arg1;
- (id)descriptionForRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)descriptionForMallocZoneTotalsWithOptions:(unsigned int)arg1;
- (id)descriptionForRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg1 options:(unsigned int)arg2;
- (id)initWithTask:(unsigned int)arg1;
- (id)initWithTask:(unsigned int)arg1 options:(unsigned int)arg2;
- (id)regions;

@end
