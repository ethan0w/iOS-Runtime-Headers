/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotoEditResourceLoader : NSObject {
    PUPhotoEditResourceLoadRequest * __currentRequest;
    PUResourceDownloadRequest * __downloadRequest;
    NSMutableArray * __enqueuedRequests;
    <PUEditableAsset> * _asset;
    BOOL  _loadingMedia;
    PUEditableMediaProvider * _mediaProvider;
    int  _resourcesAvailability;
}

@property (setter=_setCurrentRequest:, nonatomic, retain) PUPhotoEditResourceLoadRequest *_currentRequest;
@property (setter=_setDownloadRequest:, nonatomic, retain) PUResourceDownloadRequest *_downloadRequest;
@property (setter=_setEnqueuedRequests:, nonatomic, retain) NSMutableArray *_enqueuedRequests;
@property (nonatomic, readonly) <PUEditableAsset> *asset;
@property (getter=isDownloadingResources, nonatomic, readonly) BOOL downloadingResources;
@property (getter=isLoadingMedia, setter=_setLoadingMedia:, nonatomic) BOOL loadingMedia;
@property (nonatomic, readonly) PUEditableMediaProvider *mediaProvider;
@property (setter=_setResourcesAvailability:, nonatomic) int resourcesAvailability;
@property (getter=areResourcesAvailable, nonatomic, readonly) BOOL resourcesAvailable;

- (void).cxx_destruct;
- (BOOL)_assetNeedsImageLoaded;
- (BOOL)_assetNeedsVideoLoaded;
- (void)_checkIfDownloadRequiredWithRequest:(id)arg1;
- (id)_currentRequest;
- (void)_dequeueRequestIfNeeded;
- (id)_downloadRequest;
- (id)_enqueuedRequests;
- (void)_fetchMediaForRequest:(id)arg1 result:(id)arg2;
- (void)_fetchResourcesWithRequest:(id)arg1;
- (void)_handleDidLoadAdjustmentData:(id)arg1 forAsset:(id)arg2 completion:(id /* block */)arg3;
- (void)_handleDownloadCompletedWithRequest:(id)arg1 success:(BOOL)arg2 canceled:(BOOL)arg3 error:(id)arg4;
- (void)_handleDownloadRequired:(BOOL)arg1 withRequest:(id)arg2 downloadRequest:(id)arg3;
- (void)_handleSuccess:(BOOL)arg1 withResult:(id)arg2 forRequest:(id)arg3 error:(id)arg4;
- (void)_initiateRequest:(id)arg1;
- (void)_loadAdjustmentsIfNeededWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (int)_loadImageIfNeededWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (int)_loadVideoIfNeededWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)_setCurrentRequest:(id)arg1;
- (void)_setDownloadRequest:(id)arg1;
- (void)_setEnqueuedRequests:(id)arg1;
- (void)_setLoadingMedia:(BOOL)arg1;
- (void)_setResourcesAvailability:(int)arg1;
- (BOOL)areResourcesAvailable;
- (id)asset;
- (void)cancelAllRequests;
- (void)enqueueRequest:(id)arg1;
- (id)initWithAsset:(id)arg1 mediaProvider:(id)arg2;
- (BOOL)isDownloadingResources;
- (BOOL)isLoadingMedia;
- (id)mediaProvider;
- (int)resourcesAvailability;

@end
