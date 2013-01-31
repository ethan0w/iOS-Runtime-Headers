/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKSystemController : NSObject  {
}

+ (id)sharedInstance;

- (struct CGSize { float x1; float x2; })screenSize;
- (BOOL)isHiDPI;
- (unsigned int)retainCount;
- (int)userInterfaceIdiom;
- (oneway void)release;
- (BOOL)isInternalInstall;
- (float)screenScale;
- (BOOL)shouldRateLimitSearchCompletions;
- (BOOL)supportsNavigation;
- (BOOL)supports3DImagery;
- (int)deviceTileSize;
- (int)deviceTileScale;
- (BOOL)isSensitiveUIEnabled;
- (BOOL)_featureFreedomEnabled;
- (BOOL)isLiveScrollCapable;
- (BOOL)supports3DMaps;
- (BOOL)isWifiEnabled;

@end
