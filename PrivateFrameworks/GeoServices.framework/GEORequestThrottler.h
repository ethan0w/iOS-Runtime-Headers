/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORequestThrottler : NSObject {
    NSLock * _lock;
    NSMapTable * _throttleMap;
}

+ (id)sharedThrottler;

- (id)_throttlePolicyForKey:(id)arg1;
- (BOOL)allowRequestForKey:(id)arg1;
- (void)dealloc;
- (id)init;
- (unsigned int)throttleStateLevelForKey:(id)arg1;
- (double)throttleStateResetTimeRemainingForKey:(id)arg1;

@end
