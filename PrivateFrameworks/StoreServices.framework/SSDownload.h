/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class SSDownloadPolicy, NSNumber, NSMutableDictionary, SSDownloadStatus, SSDownloadMetadata, SSXPCConnection, NSArray;

@interface SSDownload : SSEntity <SSXPCCoding> {
    NSMutableDictionary *_localAssets;
    SSDownloadMetadata *_metadata;
    NSNumber *_prioritizeAboveDownload;
    SSDownloadStatus *_status;
}

@property(readonly) long long persistentIdentifier;
@property(getter=isCancelable,readonly) BOOL cancelable;
@property(copy) SSDownloadPolicy * downloadPolicy;
@property(readonly) long long downloadSizeLimit;
@property(getter=isExternal,readonly) BOOL external;
@property(readonly) id downloadIdentifier;
@property(retain) NSArray * assets;
@property(copy) SSDownloadMetadata * metadata;
@property(retain) SSDownloadStatus * status;
@property(getter=_XPCConnection,readonly) SSXPCConnection * _XPCConnection;

+ (long long)_setValuesMessage;
+ (long long)_setExternalValuesMessage;
+ (long long)_getValueMessage;
+ (long long)_getExternalValuesMessage;
+ (long long)_existsMessage;
+ (void)loadThumbnailImageDataForDownloadID:(long long)arg1 connection:(id)arg2 completionBlock:(id)arg3;

- (double)estimatedSecondsRemaining;
- (void)setValuesWithStoreDownloadMetadata:(id)arg1;
- (id)initWithDownloadMetadata:(id)arg1;
- (void)setNetworkConstraints:(id)arg1;
- (void)resume;
- (void)dealloc;
- (void)_resetStatus;
- (id)thumbnailImageData;
- (BOOL)loadThumbnailImageData;
- (void)handleWithDownloadHandler:(id)arg1 completionBlock:(id)arg2;
- (void)_addCachedPropertyValues:(id)arg1;
- (void)_addCachedExternalValues:(id)arg1;
- (BOOL)removeAsset:(id)arg1;
- (id)networkConstraints;
- (void)loadThumbnailImageDataWithCompletionBlock:(id)arg1;
- (BOOL)isCancelable;
- (id)_initWithLocalPropertyValues:(id)arg1;
- (id)copyXPCEncoding;
- (void)_legacyLoadArtworkData;
- (void)_resetLocalIVars;
- (void)_applyPhase:(id)arg1 toStatus:(id)arg2;
- (id)_errorWithXPCReply:(id)arg1;
- (id)downloadPolicy;
- (id)_thumbnailImageURL;
- (BOOL)isEligibleForRestore:(id*)arg1;
- (id)_errorWithData:(id)arg1;
- (id)_XPCConnection;
- (void)setAssets:(id)arg1;
- (id)assets;
- (void)setStatus:(id)arg1;
- (id)status;
- (void)pause;
- (BOOL)isExternal;
- (void)setDownloadPolicy:(id)arg1;
- (void)prioritizeAboveDownload:(id)arg1 completionBlock:(id)arg2;
- (id)downloadIdentifier;
- (long long)downloadSizeLimit;
- (double)percentComplete;
- (id)assetsForType:(id)arg1;
- (id)failureError;
- (long long)bytesTotal;
- (long long)bytesDownloaded;
- (BOOL)addAsset:(id)arg1 forType:(id)arg2;
- (void)setDownloadHandler:(id)arg1 completionBlock:(id)arg2;
- (id)downloadPhaseIdentifier;
- (id)initWithPersistentIdentifier:(long long)arg1;
- (long long)persistentIdentifier;
- (id)metadata;
- (void)setMetadata:(id)arg1;

@end
