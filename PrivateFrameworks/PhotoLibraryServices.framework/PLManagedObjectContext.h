/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class PLDelayedFiledSystemDeletions, PLPhotoLibrary, <PLManagedObjectContextPTPNotificationDelegate>, NSObject<OS_xpc_object>, PLMergePolicy;

@interface PLManagedObjectContext : NSManagedObjectContext  {
    BOOL _hasMetadataChanges;
    BOOL _isConnectedToChangeHub;
    BOOL _mergingChanges;
    BOOL _savingDuringMerge;
    BOOL _isInitializingSingletons;
    BOOL _isBackingALAssetsLibrary;
    PLMergePolicy *_mergePolicy;
    PLDelayedFiledSystemDeletions *_delayedDeletions;
    PLPhotoLibrary *_photoLibrary;
    <PLManagedObjectContextPTPNotificationDelegate> *_ptpNotificationDelegate;
    NSObject<OS_xpc_object> *changeHubConnection;
    BOOL _regenerateVideoThumbnails;
}

@property PLPhotoLibrary * photoLibrary;
@property(readonly) BOOL isUserInterfaceContext;
@property BOOL regenerateVideoThumbnails;
@property BOOL hasMetadataChanges;
@property(readonly) BOOL mergingChanges;
@property(readonly) BOOL savingDuringMerge;
@property BOOL isInitializingSingletons;
@property NSObject<OS_xpc_object> * changeHubConnection;
@property(retain) PLDelayedFiledSystemDeletions * delayedDeletions;
@property <PLManagedObjectContextPTPNotificationDelegate> * ptpNotificationDelegate;
@property BOOL isBackingALAssetsLibrary;

+ (id)managedObjectModel;
+ (void)handleUnknownMergeEvent;
+ (void)mergeIntoAllContextsChangesFromRemoteContextSave:(id)arg1;
+ (id)oldAuxDatabasePath;
+ (BOOL)hasAtLeastOneAsset;
+ (void)moveOldStoreAside;
+ (id)contextForDatabaseCreation;
+ (BOOL)assetsLibraryLoggingEnabled;
+ (id)allContextsNotIdenticalTo:(void*)arg1;
+ (void)mergeChangesFromRemoteContextSave:(id)arg1 intoAllContextsNotIdenticalTo:(id)arg2;
+ (BOOL)canMergeRemoteChanges;
+ (void)recordVersion:(int)arg1 forStore:(id)arg2;
+ (BOOL)useModelMigratorToCreateDatabase;
+ (void)getStoreURL:(id*)arg1 options:(id*)arg2;
+ (id)databasePath;
+ (BOOL)moveStoreFromURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3;
+ (id)defaultStoreURL;
+ (void)getStoreURL:(id*)arg1 options:(id*)arg2 forFileURL:(id)arg3;
+ (void)configurePersistentStoreCoordinator:(id)arg1;
+ (id)sharedPersistentStoreCoordinator;
+ (id)readOnlyContext;
+ (id)contextForPhotoLibrary:(id)arg1;
+ (BOOL)databaseIsMissing;
+ (BOOL)storeIsOldEnough;

- (BOOL)save:(id*)arg1;
- (id)executeFetchRequest:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (void)setIsBackingALAssetsLibrary:(BOOL)arg1;
- (void)setRegenerateVideoThumbnails:(BOOL)arg1;
- (BOOL)regenerateVideoThumbnails;
- (void)setIsInitializingSingletons:(BOOL)arg1;
- (BOOL)isInitializingSingletons;
- (BOOL)savingDuringMerge;
- (void)setChangeHubConnection:(id)arg1;
- (id)changeHubConnection;
- (BOOL)globalBoolValueForKey:(id)arg1 defaultValue:(BOOL)arg2;
- (void)_informPTPDelegateAboutChangesFromNotification:(id)arg1;
- (void)_contextObjectsDidChange:(id)arg1;
- (void)_notifyALAssetsLibraryWithChanges:(id)arg1 usingObjectIDs:(BOOL)arg2;
- (id)ptpNotificationDelegate;
- (BOOL)_tooManyAssetChangesToHandle:(unsigned int)arg1;
- (BOOL)isBackingALAssetsLibrary;
- (id)delayedDeletions;
- (void)disconnectFromChangeHub;
- (void)setDelayedDeletions:(id)arg1;
- (void)setPtpNotificationDelegate:(id)arg1;
- (void)tearDownLocalChangeNotifications;
- (void)setupLocalChangeNotifications;
- (void)connectToChangeHub;
- (id)initWithConcurrencyType:(unsigned int)arg1 useSharedPersistentStoreCoordinator:(BOOL)arg2;
- (void)registerFilesystemDeletionInfo:(id)arg1;
- (BOOL)mergingChanges;
- (void)withDispatchGroup:(id)arg1 performBlock:(id)arg2;
- (id)photoLibrary;
- (void)setGlobalValue:(id)arg1 forKey:(id)arg2;
- (id)globalValueForKey:(id)arg1;
- (BOOL)isUserInterfaceContext;
- (void)setHasMetadataChanges:(BOOL)arg1;
- (BOOL)hasMetadataChanges;
- (void)setPhotoLibrary:(id)arg1;
- (id)existingObjectWithID:(id)arg1 error:(id*)arg2;
- (void)_mergeChangesFromDidSaveDictionary:(id)arg1 usingObjectIDs:(BOOL)arg2;
- (unsigned int)countForFetchRequest:(id)arg1 error:(id*)arg2;
- (int)context:(id)arg1 shouldHandleInaccessibleFault:(id)arg2 forObjectID:(id)arg3 andTrigger:(id)arg4;
- (BOOL)isReadOnly;
- (BOOL)obtainPermanentIDsForObjects:(id)arg1 error:(id*)arg2;

@end
