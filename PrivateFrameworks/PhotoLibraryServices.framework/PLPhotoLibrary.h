/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class PLFetchingAlbum, NSObject<PLAssetContainer>, PLGenericAlbum, NSCalendar, PLWStackedImageCache, NSSet, PLThumbnailManager, NSDictionary, NSArray, PLManagedObjectContext, PLInFlightAssetsAlbum, NSMutableDictionary, PLManagedAlbum, NSMutableArray;

@interface PLPhotoLibrary : NSObject  {
    BOOL _listeningForITunesSyncing;
    BOOL _canTriggerDatabaseUpdate;
    BOOL _isTransient;
    unsigned int _pendingTransactions;
    struct __CFDictionary { } *_allPhotos;
    int _databaseMigrationKind;
    NSMutableArray *_transactionCompletionHandlers;
    PLThumbnailManager *_thumbnailManager;
    NSDictionary *_existingThumbnailEntries;
    PLGenericAlbum *_allImportedPhotosAlbum;
    PLGenericAlbum *_lastImportedPhotosAlbum;
    NSCalendar *_exifConversionCalendar;
    NSMutableDictionary *_photoStreamAlbumsByStreamID;
    NSMutableArray *_photoStreamAlbums;
    id _ptpDelegate;
    PLWStackedImageCache *_stackedImageCache;
    NSSet *_imageFileExtensions;
    NSSet *_rawImageFileExtensions;
    NSSet *_audioFileExtensions;
    NSSet *_extraVideoExtensions;
    unsigned int _lastFetchedGPSCount;
    unsigned int _insertedCountSinceLastFetchedGPSCount;
    unsigned int _deletedCountSinceLastFetchedGPSCount;
    unsigned int _newlyCompleteWithGPS;
    PLManagedAlbum *_cameraRollAlbum;
    PLFetchingAlbum *_cameraSessionAlbum;
    PLInFlightAssetsAlbum *_inFlightAssetsAlbum;
    PLManagedObjectContext *managedObjectContext;
}

@property(retain) PLManagedObjectContext * managedObjectContext;
@property(readonly) PLThumbnailManager * thumbnailManager;
@property(readonly) NSObject<PLAssetContainer> * savedPhotosAlbum;
@property(readonly) NSObject<PLAssetContainer> * inFlightAssetsAlbum;
@property(readonly) NSArray * albums;
@property(readonly) NSArray * userAlbums;
@property(readonly) NSArray * imagePickerAlbums;
@property(readonly) NSArray * wallpaperAlbums;
@property(readonly) NSArray * eventAlbums;
@property(readonly) NSArray * faceAlbums;
@property(readonly) NSArray * placeAlbums;
@property(readonly) NSArray * photoStreamAlbums;
@property(readonly) NSArray * photoStreamAlbumsForPreferences;

+ (BOOL)_assetsLibrary_isSharedPhotoStreamsSupportEnabled;
+ (void)_assetsLibrary_disableSharedPhotoStreamsSupport;
+ (BOOL)canSaveVideoToCameraRoll:(id)arg1;
+ (id)calculatedDisplayableIndexesForAlbum:(struct NSObject { Class x1; }*)arg1 count:(unsigned int)arg2;
+ (void)resetSyncedAssetsDCIMDirectory;
+ (void)initializeGraphicsServices;
+ (BOOL)processCanWriteSandboxForPath:(id)arg1;
+ (BOOL)processCanReadSandboxForPath:(id)arg1;
+ (id)simpleDCIMDirectory;
+ (id)dcimDirectory;
+ (id)videosPath;
+ (id)mediaFilesDirectoryURL;
+ (BOOL)needsToBeSyncedWithiTunesBecauseFormatIDsChanged;
+ (void)setTakingPhotoIsBusy:(BOOL)arg1;
+ (void)setVideoCaptureIsBusy:(BOOL)arg1;
+ (void)setImageWriterIsBusy:(BOOL)arg1;
+ (void)setMigratorIsBusy:(BOOL)arg1;
+ (void)_presentSqliteCorruptionErrorDialog;
+ (void)createPhotoStreamAlbumWithStreamID:(id)arg1 completionHandler:(id)arg2;
+ (id)assetsDataDirectory;
+ (void)setCloudAlbumSharingEnabled:(BOOL)arg1;
+ (void)setPhotoStreamEnabled:(BOOL)arg1;
+ (BOOL)isCrashRecoveryDisabled;
+ (void)disableCrashRecovery:(BOOL)arg1;
+ (void)recoverFromCrashIfNeeded;
+ (void)handlePossibleCoreDataError:(id)arg1;
+ (BOOL)isApplicationWildcat;
+ (id)iTunesSyncedAssetThumbnailsDirectory;
+ (id)iTunesPhotosDirectory;
+ (id)photoStreamsDataDirectory;
+ (id)iTunesSyncedFaceDataDirectory;
+ (id)iTunesSyncedFaceAlbumThumbnailsDirectory;
+ (id)sqliteErrorIndicatorFilePath;
+ (id)photoMetadataDirectoryURL;
+ (id)photoDataMiscDirectory;
+ (id)photoDataDirectoryURL;
+ (id)migrationIndicatorFilePath;
+ (void)repairSingletonObjects;
+ (id)persistedAlbumDataDirectoryURL;
+ (id)photoCloudSharingDataDirectory;
+ (id)iTunesSyncedAssetsDirectory;
+ (id)pathToAssetsToAlbumsMapping;
+ (id)imageWriterIndicatorFilePath;
+ (id)takingPhotoIndicatorFilePath;
+ (id)takingVideoIndicatorFilePath;
+ (id)dcimDirectoryURL;
+ (struct NSObject { Class x1; }*)savedPhotosAlbum;
+ (void)setApplicationIsWildcat:(BOOL)arg1;
+ (id)photoDataDirectory;
+ (void)_doFilesystemImportIfNeeded;
+ (void)enqeueRecoveryJob:(id)arg1;
+ (id)crashRecoveryIndicatorFilePaths;
+ (void)setSqliteErrorAndExitIfNecessary;
+ (id)sharedPhotoLibrary;
+ (BOOL)isRunningInStoreDemoMode;

- (id)managedObjectContext;
- (void)dealloc;
- (id)init;
- (id)librarySizes;
- (BOOL)getPhotoCount:(unsigned int*)arg1 videoCount:(unsigned int*)arg2;
- (id)albumsForContentMode:(int)arg1;
- (BOOL)isPhotoInSavedPhotosAlbum:(id)arg1;
- (void)processSyncSaveJob:(id)arg1 albumMap:(id)arg2;
- (BOOL)hasPhotoWithFileCreationDate:(id)arg1 fileName:(id)arg2 fileSize:(int)arg3;
- (BOOL)isImageFileExtension:(id)arg1;
- (id)masterFilenameFromSidecarFileInfo:(id)arg1;
- (id)masterURLFromSidecarURLs:(id)arg1;
- (id)addDCIMEntryAtFileURL:(id)arg1 toEvent:(struct NSObject { Class x1; }*)arg2 sidecarFileInfo:(id)arg3 progress:(id)arg4 importSessionIdentifier:(id)arg5 isImported:(BOOL)arg6 previewImage:(id)arg7 thumbnailImage:(id)arg8 savedAssetType:(int)arg9 replacementUUID:(id)arg10 extendedInfo:(id)arg11 thumbnailsData:(struct __CFDictionary { }*)arg12 withUUID:(id)arg13;
- (void)modifyDCIMEntryForVideo:(id)arg1 progress:(id)arg2 previewImage:(id)arg3 thumbnailImage:(id)arg4;
- (void)modifyDCIMEntryForPhoto:(id)arg1;
- (id)imageForFormat:(int)arg1 forAsset:(id)arg2;
- (struct NSObject { Class x1; }*)filesystemImportProgressAlbum;
- (struct NSObject { Class x1; }*)otaRestoreProgressAlbum;
- (struct NSObject { Class x1; }*)iPadAllPhotosAlbumIfExists;
- (struct NSObject { Class x1; }*)allPhotosAlbumIfExists;
- (unsigned int)editableAlbumCount;
- (id)editableAlbums;
- (id)syncedAlbums;
- (void)_updateWithInsertedAssetsCount:(unsigned int)arg1 deletedCount:(unsigned int)arg2 updatedAssets:(id)arg3;
- (BOOL)hasAtLeastOnePhotoWithGPS;
- (void)resetCachedImportAlbumsIfNeededForAlbum:(id)arg1;
- (id)lastImportedPhotosAlbum;
- (void)recreateAlbumsFromMetadata;
- (BOOL)needsMigration;
- (id)managedObjectWithObjectID:(id)arg1;
- (void)_unloadExistingThumbnailEntries;
- (void)_loadExistingThumbnailEntries;
- (void)cleanupForStoreDemoMode;
- (void)cleanupModelAfterRestoreFromiTunesBackup;
- (int)_orientationOfFileAtPath:(id)arg1;
- (int)_orientationAfterRotatingOrientation:(int)arg1 clockwiseByDegrees:(int)arg2 transposeCoordinatesOut:(BOOL*)arg3;
- (void)_migrationDidFinish;
- (id)_getGlobal:(id)arg1 userInfo:(id)arg2;
- (id)_setGlobal:(id)arg1 userInfo:(id)arg2;
- (struct NSObject { Class x1; }*)albumFromGroupURL:(id)arg1;
- (id)photoFromAssetURL:(id)arg1;
- (id)assetURLForManagedPhoto:(id)arg1;
- (id)assetURLForPhoto:(id)arg1;
- (id)assetURLForPhoto:(id)arg1 extension:(id)arg2;
- (void)setLastImportSessionUUID:(id)arg1;
- (id)lastImportSessionUUID;
- (void)removeFromKnownPhotoStreamAlbums:(id)arg1;
- (void)addToKnownPhotoStreamAlbums:(id)arg1;
- (void)userDeleteAssets:(id)arg1;
- (id)assetWithUUID:(id)arg1;
- (id)objectWithObjectID:(id)arg1;
- (unsigned int)countOfAlbumsContainingItems:(id)arg1;
- (void)userDeleteAlbums:(id)arg1;
- (id)placeAlbums;
- (id)faceAlbums;
- (id)eventAlbums;
- (id)wallpaperAlbums;
- (id)userAlbums;
- (struct NSObject { Class x1; }*)eventWithName:(id)arg1 andImportSessionIdentifier:(id)arg2;
- (void)addInflightAsset:(id)arg1;
- (struct NSObject { Class x1; }*)inFlightAssetsAlbum;
- (void)withDispatchGroup:(id)arg1 performBlock:(id)arg2;
- (void)withDispatchGroup:(id)arg1 performTransaction:(id)arg2 completionHandler:(id)arg3;
- (void)withDispatchGroup:(id)arg1 performTransaction:(id)arg2;
- (void)performBlockAndWait:(id)arg1 completionHandler:(id)arg2;
- (void)performBlock:(id)arg1 completionHandler:(id)arg2;
- (void)addCompletionHandlerToCurrentTransaction:(id)arg1;
- (void)performTransactionAndWait:(id)arg1 completionHandler:(id)arg2;
- (void)performTransactionAndWait:(id)arg1;
- (void)performTransaction:(id)arg1;
- (void)updateThumbnailsForPhoto:(id)arg1 previewImage:(id)arg2 thumbnailImage:(id)arg3;
- (void)deleteAllImages;
- (void)_compactThumbnailTablesIfNecessary;
- (void)_deleteFilesAndEmptyDirectoriesAtPaths:(id)arg1;
- (BOOL)rotateCameraPhoto:(id)arg1 byDegrees:(int)arg2;
- (void)deleteImages:(id)arg1;
- (BOOL)hasAtLeastOnePhoto;
- (BOOL)hasAtLeastOneItem;
- (id)iTunesFaceImageForRecordID:(int)arg1 faceIndex:(int)arg2 size:(struct CGSize { float x1; float x2; })arg3 returnLocationInImage:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg4;
- (void)photoLibraryAvailableNotification;
- (void)photoLibraryRebuildingNotification;
- (void)photoLibraryCorruptNotification;
- (void)_notifyPhotoLibraryIsNoLongerAvailableOnMainThread;
- (id)_iTunesPhotos;
- (void)clientApplicationWillEnterForeground;
- (id)countOfAllPhotosAndVideos;
- (void)flushAlbums;
- (void)flushPhotoStreamAlbums;
- (void)flushDCIMAlbums;
- (BOOL)libraryIsAvailable;
- (void)testForRecoveryInBackground;
- (id)imagePickerAlbums;
- (id)albumListForContentMode:(int)arg1;
- (struct NSObject { Class x1; }*)eventAlbumContainingPhoto:(id)arg1;
- (struct NSObject { Class x1; }*)syncProgressAlbum;
- (struct NSObject { Class x1; }*)albumWithUuid:(id)arg1;
- (BOOL)isAudioFileExtension:(id)arg1;
- (BOOL)isRawImageFileExtension:(id)arg1;
- (BOOL)isNonRawImageFileExtension:(id)arg1;
- (BOOL)isVideoFileExtension:(id)arg1;
- (void)_loadFileExtensionInformation;
- (int)priorityForFileExtension:(id)arg1;
- (id)allImportedPhotosAlbum;
- (id)newImageForDulcimerPhoto:(id)arg1 format:(int)arg2 outImageProperties:(const struct __CFDictionary {}**)arg3;
- (id)dataForPhoto:(id)arg1 format:(int)arg2 width:(int*)arg3 height:(int*)arg4 bytesPerRow:(int*)arg5 dataWidth:(int*)arg6 dataHeight:(int*)arg7 imageDataOffset:(int*)arg8;
- (id)newImageForDulcimerPhoto:(id)arg1 format:(int)arg2;
- (void)preheatImageDataForAssets:(id)arg1 format:(int)arg2;
- (struct NSObject { Class x1; }*)iPadAllPhotosAlbum;
- (struct NSObject { Class x1; }*)allPhotosAlbum;
- (void)_updateHasAtLeastOnePhotoWithGPSWithInsertedCount:(unsigned int)arg1 deletedCount:(unsigned int)arg2 updatedAssets:(id)arg3;
- (id)lastImportedPhotosAlbumCreateIfNeeded:(BOOL)arg1;
- (id)allImportedPhotosAlbumCreateIfNeeded:(BOOL)arg1;
- (void)prepareDatabaseForOTAAssetsPhase;
- (void)_linkAsideAlbumMetadataForOTARestore;
- (void)_removeSyncedAlbumsInTransactionWithManagedObjectContext:(id)arg1;
- (void)_batchDeleteAssets:(id)arg1 inManagedObjectContext:(id)arg2;
- (id)_allAssetsForDeletion:(id)arg1;
- (void)_calculatePendingItemCountsAfterOTARestoreWithMangedObjectContext:(id)arg1;
- (void)_safeSave:(id)arg1;
- (void)_removeOrphanedThumbnailEntries;
- (void)_deleteObsoleteMetadataFiles;
- (void)setGlobalValue:(id)arg1 forKey:(id)arg2;
- (id)globalValueForKey:(id)arg1;
- (void)performTransaction:(id)arg1 completionHandler:(id)arg2;
- (id)assetWithUUID:(id)arg1 inAlbum:(struct NSObject { Class x1; }*)arg2;
- (id)_albumsContainingItems:(id)arg1;
- (id)photoStreamAlbums;
- (id)photoStreamAlbumsForPreferences;
- (struct NSObject { Class x1; }*)allPhotoStreamPhotosAlbum;
- (id)albums;
- (void)deleteInflightAssets:(id)arg1;
- (struct NSObject { Class x1; }*)savedPhotosAlbum;
- (void)withDispatchGroup:(id)arg1 synchronously:(BOOL)arg2 performBlock:(id)arg3 completionHandler:(id)arg4;
- (void)withDispatchGroup:(id)arg1 performBlock:(id)arg2 completionHandler:(id)arg3;
- (void)_withDispatchGroup:(id)arg1 synchronously:(BOOL)arg2 performTransaction:(id)arg3 completionHandler:(id)arg4;
- (id)thumbnailManager;
- (BOOL)_hasAtLeastOneItem:(BOOL)arg1;
- (void)_loadPhotoLibraryAfterMigration;
- (void)copyAssetToCameraRoll:(id)arg1;
- (void)_releaseThumbnailManager;
- (void)setManagedObjectContext:(id)arg1;
- (void)loadDatabase;
- (id)initWithTransientContext:(BOOL)arg1;
- (void)performBlock:(id)arg1;
- (id)_init;
- (id)existingObjectWithID:(id)arg1 error:(id*)arg2;
- (unsigned int)concurrencyType;
- (BOOL)isTransient;

@end
