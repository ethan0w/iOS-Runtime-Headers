/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
 */

@interface ATStoreAssetLink : NSObject <ATAssetLink, SSDownloadHandlerDelegate, SSDownloadManagerObserver> {
    NSMutableDictionary * _assetsByStoreID;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    <ATAssetLinkDelegate> * _delegate;
    SSDownloadManager * _downloadManager;
    NSMapTable * _downloadsByAsset;
    BOOL  _open;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *callbackQueue;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ATAssetLinkDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (getter=isOpen, nonatomic, readonly) BOOL open;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_assetForDownload:(id)arg1;
- (id)_assetTypeForStoreKind:(id)arg1;
- (id)_dataClassForStoreKind:(id)arg1;
- (id)_downloadForAsset:(id)arg1 error:(id*)arg2;
- (void)_enqueueAssets:(id)arg1;
- (void)_finishAsset:(id)arg1 error:(id)arg2 retryable:(BOOL)arg3;
- (id)_storeKindForAssetType:(id)arg1;
- (void)_updateInstallProgress:(double)arg1 forAsset:(id)arg2;
- (id)callbackQueue;
- (BOOL)canEnqueueAsset:(id)arg1;
- (void)cancelAssets:(id)arg1;
- (void)close;
- (id)delegate;
- (id)downloadManager;
- (void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2;
- (id)enqueueAssets:(id)arg1 force:(BOOL)arg2;
- (id)init;
- (BOOL)isOpen;
- (BOOL)linkIsReady;
- (unsigned int)maximumBatchSize;
- (BOOL)open;
- (void)prioritizeAsset:(id)arg1;
- (unsigned int)priority;
- (void)setCallbackQueue:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
