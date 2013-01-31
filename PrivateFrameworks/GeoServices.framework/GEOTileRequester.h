/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSThread, NSString, <GEOTileRequesterDelegate>, GEOTileKeyList;

@interface GEOTileRequester : NSObject  {
    GEOTileKeyList *_keyList;
    <GEOTileRequesterDelegate> *_delegate;
    id _context;
    NSThread *_thread;
    NSString *_bundleIdentifier;
    NSString *_bundleVersion;
    BOOL _requireWiFi;
}

@property(readonly) GEOTileKeyList * keyList;
@property(retain) <GEOTileRequesterDelegate> * delegate;
@property(retain) id context;
@property(retain) NSThread * thread;
@property(retain) NSString * bundleIdentifier;
@property(retain) NSString * bundleVersion;
@property BOOL requireWiFi;

+ (unsigned char)tileProviderIdentifier;
+ (BOOL)skipNetworkForKeysWhenPreloading:(id)arg1;
+ (struct { unsigned int x1; double x2; }*)newExpiringTilesets;
+ (unsigned int)expiringTilesetsCount;

- (unsigned int)tileSetForKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (id)keyList;
- (id)bundleIdentifier;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)cancel;
- (void)dealloc;
- (id)thread;
- (void)setThread:(id)arg1;
- (BOOL)requireWiFi;
- (void)setRequireWiFi:(BOOL)arg1;
- (id)initWithKeyList:(id)arg1;
- (void)start;
- (void)setContext:(id)arg1;
- (id)context;
- (id)bundleVersion;
- (void)setBundleVersion:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;

@end
