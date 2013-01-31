/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AppStoreUI.framework/AppStoreUI
 */

@class NSObject<OS_dispatch_source>, ISOperation, SSDownloadManager;

@interface ASClientApplicationController : SUClientApplicationController <SSDownloadManagerObserver> {
    SSDownloadManager *_downloadManager;
    ISOperation *_geniusStatisticsOperation;
    int _libraryURLType;
    NSObject<OS_dispatch_source> *_reloadFromServerTimer;
    NSObject<OS_dispatch_source> *_startDownloadManagerTimer;
    BOOL _usingNetwork;
}


- (void)_reloadDownloadManagerFromServer;
- (void)_setUsingNetwork:(BOOL)arg1;
- (void)_cancelReloadFromServerTimer;
- (id)initWithClientIdentifier:(id)arg1;
- (BOOL)displayClientURL:(id)arg1;
- (BOOL)libraryContainsItemIdentifier:(unsigned long long)arg1;
- (void)returnToLibrary;
- (BOOL)wasLaunchedFromLibrary;
- (id)purchaseManager:(id)arg1 purchaseBatchForPurchases:(id)arg2;
- (BOOL)composeReviewWithViewController:(id)arg1 animated:(BOOL)arg2;
- (void)purchaseManager:(id)arg1 failedToAddPurchases:(id)arg2;
- (id)purchaseManager:(id)arg1 purchaseBatchForItems:(id)arg2;
- (id)tabBarController:(id)arg1 viewControllerForContext:(id)arg2;
- (id)tabBarController:(id)arg1 rootViewControllerForSection:(id)arg2;
- (id)initWithClientInterface:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)_cancelStartDownloadManagerTimer;
- (BOOL)_cancelDownloadingIconOnHomeScreenWithDisplayID:(id)arg1;
- (BOOL)_cancelDownloadingIconOnHomeScreenWithDownload:(id)arg1;
- (BOOL)_cancelDownloadingIconOnHomeScreenWithPurchase:(id)arg1;
- (void)_showAccessoryLookupForURL:(id)arg1;
- (id)_startDownloadManager;
- (void)_stopDownloadManager;
- (void)_cancelGeniusStatisticsOperation;
- (void)becomeActive;
- (void)resignActive;
- (void)downloadManagerNetworkUsageDidChange:(id)arg1;

@end
