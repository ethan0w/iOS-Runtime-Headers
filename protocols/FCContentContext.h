/* Generated by RuntimeBrowser.
 */

@protocol FCContentContext <NSObject, FCCacheFlushing, FCCloudKitCacheClearing>

@required

- (FCAppConfiguration *)appConfiguration;
- (FCArticleController *)articleController;
- (NSURL *)assetCacheDirectoryURL;
- (FCAssetManager *)assetManager;
- (NSString *)contentDirectory;
- (NSString *)contentStoreFrontID;
- (FCFlintResourceManager *)flintResourceManager;
- (BOOL)hasBeenRateLimited;
- (<FCContentContextInternal> *)internalContentContext;
- (FCNetworkBehaviorMonitor *)networkBehaviorMonitor;
- (NSString *)supportedContentStoreFrontID;
- (FCTagController *)tagController;
- (NSURL *)webArchiveCacheDirectoryURL;

@end
