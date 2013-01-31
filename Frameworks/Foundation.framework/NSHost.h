/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class __NSHostExtraIvars, NSArray;

@interface NSHost : NSObject  {
    NSArray *names;
    NSArray *addresses;
    id reserved;
}

@property __NSHostExtraIvars * reserved;

+ (void)flushHostCache;
+ (void)setHostCacheEnabled:(BOOL)arg1;
+ (BOOL)isHostCacheEnabled;
+ (id)hostWithAddress:(id)arg1;
+ (id)hostWithName:(id)arg1;
+ (id)currentHost;

- (id)name;
- (id)description;
- (void)dealloc;
- (id)names;
- (id)localizedName;
- (id)address;
- (BOOL)isEqualToHost:(id)arg1;
- (void)blockingResolveUntil:(int)arg1;
- (id)addresses;
- (void)resolve:(id)arg1;
- (void)resolveCurrentHostWithHandler:(id)arg1;
- (void)__resolveWithFlags:(int)arg1 resultArray:(id)arg2 handler:(id)arg3;
- (id)initToResolve:(id)arg1 as:(int)arg2;
- (void)setReserved:(id)arg1;
- (id)reserved;

@end
