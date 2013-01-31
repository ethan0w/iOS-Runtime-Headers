/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSNumber, NSString, ISSoftwareApplication;

@interface SUScriptSoftwareApplication : SUScriptObject  {
    ISSoftwareApplication *_application;
}

@property(readonly) NSNumber * adamID;
@property(readonly) NSString * bundleID;
@property(readonly) NSString * bundleVersion;
@property(readonly) NSNumber * dsID;
@property(readonly) NSNumber * ratingRank;
@property(readonly) NSString * ratingSystem;
@property(readonly) NSString * softwareType;
@property(readonly) NSString * storeFrontID;
@property(readonly) NSNumber * versionID;
@property(readonly) NSString * environmentProduction;
@property(readonly) NSString * environmentSandbox;
@property(readonly) int launchResultApplicationDisabled;
@property(readonly) int launchResultApplicationNotFound;
@property(readonly) int launchResultInvalidArgument;
@property(readonly) int launchResultLaunchOrSuspendInProgress;
@property(readonly) int launchResultLocked;
@property(readonly) int launchResultLockedOut;
@property(readonly) int launchResultSecurityPolicy;
@property(readonly) int launchResultSpringBoardUnavailable;
@property(readonly) int launchResultSuccess;
@property(readonly) int launchResultSyncing;
@property(readonly) NSString * softwareTypeNewsstand;

+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (void)initialize;

- (id)softwareTypeNewsstand;
- (int)launchResultSyncing;
- (int)launchResultSuccess;
- (int)launchResultSpringBoardUnavailable;
- (int)launchResultSecurityPolicy;
- (int)launchResultLockedOut;
- (int)launchResultLocked;
- (int)launchResultLaunchOrSuspendInProgress;
- (int)launchResultInvalidArgument;
- (int)launchResultApplicationNotFound;
- (int)launchResultApplicationDisabled;
- (id)environmentProduction;
- (id)versionID;
- (id)storeFrontID;
- (id)dsID;
- (id)initWithApplication:(id)arg1;
- (int)launchWithURL:(id)arg1 options:(id)arg2 suspended:(id)arg3;
- (void)checkInAppPurchaseQueueWithAccountID:(id)arg1 environment:(id)arg2;
- (id)softwareType;
- (id)environmentSandbox;
- (id)_className;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
- (void)dealloc;
- (id)ratingRank;
- (id)ratingSystem;
- (id)bundleID;
- (id)bundleVersion;
- (id)adamID;

@end
