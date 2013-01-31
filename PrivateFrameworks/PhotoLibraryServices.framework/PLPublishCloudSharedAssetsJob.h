/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSString, NSArray;

@interface PLPublishCloudSharedAssetsJob : PLCloudSharingJob  {
    NSString *_batchCommentText;
    NSArray *_originalAssetUUIDs;
    NSString *_publishAlbumCloudGUID;
    BOOL _isNewAlbum;
}

@property(retain) NSString * publishAlbumCloudGUID;
@property(retain) NSArray * originalAssetUUIDs;
@property BOOL isNewAlbum;
@property(retain) NSString * batchCommentText;

+ (void)publishBatchOfOriginalAssets:(id)arg1 toSharedAlbum:(id)arg2 isNewAlbum:(BOOL)arg3 batchCommentText:(id)arg4;

- (id)description;
- (void)dealloc;
- (void)executeDaemonOperation;
- (id)batchCommentText;
- (BOOL)isNewAlbum;
- (id)originalAssetUUIDs;
- (id)publishAlbumCloudGUID;
- (void)setBatchCommentText:(id)arg1;
- (void)setIsNewAlbum:(BOOL)arg1;
- (void)setPublishAlbumCloudGUID:(id)arg1;
- (void)setOriginalAssetUUIDs:(id)arg1;
- (BOOL)shouldArchiveXPCToDisk;
- (void)encodeToXPCObject:(id)arg1;
- (int)daemonOperation;
- (void)runDaemonSide;
- (id)initFromXPCObject:(id)arg1;
- (void)run;

@end
