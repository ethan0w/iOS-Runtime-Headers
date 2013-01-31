/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSArray, NSString, NSDictionary, MSASAssetCollection;

@interface PLCloudSharedAssetSaveJob : PLCloudSharingJob  {
    BOOL _replacingOriginalWithDerivative;
    NSString *_currentFilePath;
    NSArray *_cloudAssetGUIDsToDelete;
    int _jobType;
    NSString *_cloudPersonID;
    NSDictionary *_mstreamdInfoDictionary;
    NSString *_currentCloudAssetGUID;
    BOOL _isCreatingPlaceHolder;
    NSString *_cloudAlbumGUID;
    NSDictionary *_currentCloudAssetMetadata;
    NSArray *_cloudAssetCollections;
    MSASAssetCollection *_currentCloudAssetCollection;
}

@property(retain) NSString * currentFilePath;
@property(retain) NSString * currentCloudAssetGUID;
@property(retain) NSDictionary * currentCloudAssetMetadata;
@property(retain) NSString * cloudAlbumGUID;
@property(retain) NSString * cloudPersonID;
@property(retain) MSASAssetCollection * currentCloudAssetCollection;
@property(retain) NSArray * cloudAssetCollections;
@property(retain) NSArray * cloudAssetGUIDsToDelete;
@property int jobType;
@property(retain) NSDictionary * mstreamdInfoDictionary;
@property BOOL isCreatingPlaceHolder;

+ (id)directoryPathForInFlightAssets:(BOOL)arg1;
+ (void)replaceRecentlyUploadedOriginalWithDerivativeForCollection:(id)arg1 inAlbum:(id)arg2 personID:(id)arg3;
+ (void)deleteCloudSharedAssetsWithCloudGUIDs:(id)arg1 info:(id)arg2;
+ (void)saveCloudSharedAssetAtPath:(id)arg1 forAssetCollection:(id)arg2 albumGUID:(id)arg3 assetMetadata:(id)arg4 personID:(id)arg5 info:(id)arg6;
+ (void)processMetadataForAssetCollections:(id)arg1 inAlbum:(id)arg2 personID:(id)arg3 info:(id)arg4;
+ (id)_dcimDirectoryForFileURL:(id)arg1;
+ (id)placeholderImageProperties;
+ (id)nextDCIMSaveFileURLForCloudPersonID:(id)arg1 cloudAlbumGUID:(id)arg2 fileExtension:(id)arg3;

- (id)description;
- (void)dealloc;
- (void)setCurrentCloudAssetGUID:(id)arg1;
- (void)setIsCreatingPlaceHolder:(BOOL)arg1;
- (id)assetsToRetriveForAssetMetadataForCurrentCollectionWithExistingPlaceHolderKind:(int)arg1;
- (unsigned int)_insertionIndexForAsset:(id)arg1 inAlbum:(id)arg2;
- (BOOL)isCreatingPlaceHolder;
- (void)saveJobAssetWithPlaceholderKind:(int)arg1;
- (int)placeHolderKindFromAssetMetadataType:(id)arg1;
- (void)executeDaemonOperationReplaceRecentlyUploadedOriginalJobType;
- (void)executeDaemonOperationDeleteAssetJobType;
- (void)executeDaemonOperationSaveAssetJobType;
- (void)executeDaemonOperationSaveAssetMetadataForCollectionsJobType;
- (BOOL)isProcessingThumbnail;
- (id)currentCloudAssetCollection;
- (id)currentCloudAssetGUID;
- (void)setJobType:(int)arg1;
- (void)setMstreamdInfoDictionary:(id)arg1;
- (void)setCurrentCloudAssetCollection:(id)arg1;
- (void)setCloudAssetCollections:(id)arg1;
- (void)setCloudAssetGUIDsToDelete:(id)arg1;
- (void)setCloudAlbumGUID:(id)arg1;
- (void)setCurrentCloudAssetMetadata:(id)arg1;
- (void)setCurrentFilePath:(id)arg1;
- (int)jobType;
- (id)mstreamdInfoDictionary;
- (id)cloudAssetCollections;
- (id)cloudAssetGUIDsToDelete;
- (id)currentCloudAssetMetadata;
- (id)cloudAlbumGUID;
- (id)currentFilePath;
- (void)encodeToXPCObject:(id)arg1;
- (int)daemonOperation;
- (void)runDaemonSide;
- (id)initFromXPCObject:(id)arg1;
- (void)setCloudPersonID:(id)arg1;
- (id)cloudPersonID;
- (void)run;

@end
