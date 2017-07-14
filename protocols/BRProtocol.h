/* Generated by RuntimeBrowser.
 */

@protocol BRProtocol <CKXPCShareDaemon>

@required

- (void)_t_blockSyncForContainerID:(void *)arg1 withPendingUpgradeToOSName:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)_t_blockSyncUpOfItemWithID:(void *)arg1 containerID:(void *)arg2 withPendingUpgradeToOSName:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 9: NSString *, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)_t_clearAllBlockedItemsForContainerID:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)_t_migrateAllZonesToClouddocsWithReset:(void *)arg1 onlyPrepare:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: BOOL, BOOL, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)_t_pauseSyncDownOfContainer:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)_t_resumeSyncDownOfContainer:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)_t_setFSEventProcessingState:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: BOOL, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)addExternalDocumentReferenceTo:(void *)arg1 forPid:(void *)arg2 inContainer:(void *)arg3 underParent:(void *)arg4 reply:(void *)arg5; // needs 5 arg types, found 15: NSURL *, int, NSString *, NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, NSURL *, NSData *, NSURL *, NSData *, NSError *, void*
- (void)boostFilePresenterAtURL:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (oneway void)bundleDidAccessExternalDocument:(NSFileHandle *)arg1;
- (oneway void)checkinAskClientIfUsingUbiquity:(BOOL)arg1;
- (void)computePurgableSpaceWithUrgency:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)copyBulkShareIDsAtURLs:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)copyCurrentUserIdentifierWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)copyCurrentUserNameAndEmailWithReply:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSPersonNameComponents *, NSString *, NSError *, void*
- (void)createContainerWithID:(void *)arg1 ownerName:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)createSharingInfoForURL:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CKShare *, NSError *, void*
- (void)currentAccountCreateWithID:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, NSError *, void*
- (void)currentAccountLogoutWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, NSError *, void*
- (void)currentSyncedRootURLsWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)deleteAllContentsOfContainerID:(void *)arg1 onClient:(void *)arg2 onServer:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 9: NSString *, BOOL, BOOL, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)didReceiveHandoffRequestForBundleID:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)dropSpotlightIndexWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)dumpCoordinationInfoTo:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSFileHandle *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, NSError *, void*
- (void)dumpDatabaseTo:(void *)arg1 containerID:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: NSFileHandle *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, NSError *, void*
- (void)evictItemAtURL:(void *)arg1 options:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: NSURL *, unsigned int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)evictOldDocumentsWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)forceConflictForURL:(void *)arg1 bookmarkData:(void *)arg2 forcedEtag:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 9: NSURL *, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)forceSyncContainerID:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)forceSyncWithBarrierContainerID:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)gatherInformationForPath:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)getApplicationDocumentUsageInfoForBundleID:(void *)arg1 withReply:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)getApplicationStatus:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, NSError *, void*
- (void)getApplicationStatusWithAuditToken:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: struct { unsigned int x1[8]; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, NSError *, void*
- (void)getApplicationStatusWithPID:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, NSError *, void*
- (void)getAttributeValues:(void *)arg1 forItemAtURL:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: NSArray *, NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSMutableDictionary *, NSError *, void*
- (void)getBackReferencingContainerIDsForURLs:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)getBackReferencingURLForURL:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 9: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, BRContainer *, NSError *, void*
- (void)getBookmarkDataForURL:(void *)arg1 andAllowAccessByBundleID:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 10: NSURL *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSString *, NSError *, void*
- (void)getBookmarkDataForURL:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 9: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSString *, NSError *, void*
- (void)getContainerForURL:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BRContainer *, NSError *, void*
- (void)getContainerLastServerUpdateWithID:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDate *, NSError *, void*
- (void)getContainerStatusWithID:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned int, NSError *, void*
- (void)getContainerURLForID:(void *)arg1 forPid:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 11: NSString *, int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, NSData *, NSString *, NSError *, void*
- (void)getContainerURLForID:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 10: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, NSData *, NSString *, NSError *, void*
- (void)getContainersByID:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)getContainersNeedingUpload:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, NSError *, void*
- (void)getEvictableSpaceWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, NSError *, void*
- (void)getIsContainerWithIDOverQuota:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, NSError *, void*
- (void)getItemUpdateSenderWithReceiver:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 9: <BRItemNotificationReceiving> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <BRItemNotificationSending> *, NSDictionary *, NSError *, void*
- (void)getLastSyncDateWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDate *, NSError *, void*
- (void)getLocalizedLastSyncWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)getLoggedInUserPropertyValuesForKeys:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)getMigrationStatusForPrimaryiCloudAccount:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, NSError *, void*
- (void)getNonLocalVersionSenderWithReceiver:(void *)arg1 documentURL:(void *)arg2 includeCachedVersions:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 11: <BRNonLocalVersionReceiving> *, NSURL *, BOOL, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <BRNonLocalVersionSending> *, NSURL *, NSError *, void*
- (void)getNotificationInfoAtURL:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BRQueryItem *, NSError *, void*
- (void)getPublishedURLForItemAtURL:(void *)arg1 forStreaming:(void *)arg2 requestedTTL:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 11: NSURL *, BOOL, unsigned int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, NSDate *, NSError *, void*
- (void)getTotalApplicationDocumentUsageWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)getiWorkNeedsShareMigrateAtURL:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, NSError *, void*
- (void)getiWorkPublishingBadgingStatusAtURL:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, NSError *, void*
- (void)getiWorkPublishingInfoAtURL:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 10: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, BOOL, NSString *, NSError *, void*
- (void)hasOptimizeStorageWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, NSError *, void*
- (void)healthStatusStringForContainer:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)iCloudDesktopSettingsChangedWithAttributes:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)iCloudDriveAppStatusDescriptionForDSID:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)iWorkForceSyncContainerID:(void *)arg1 ownedByMe:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: NSString *, BOOL, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)jetsamCloudDocsAppsWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)joinShareAtURL:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 9: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, NSURL *, NSError *, void*
- (void)lookupExcludedExtensionsForLogoutWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, NSError *, void*
- (void)lookupExcludedFilenamesForLogoutWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, NSError *, void*
- (void)moveBRSecurityBookmarkAtURL:(void *)arg1 toURL:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: NSURL *, NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)overwriteAccessTimeForItemAtURL:(void *)arg1 atime:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: NSURL *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)performSelfCheck:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSFileHandle *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, NSError *, void*
- (void)postiCloudDriveAppInstallationNotificaionWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)presentAcceptDialogsForShareMetadata:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: CKShareMetadata *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)presentAcceptDialogsForShareURL:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)presyncContainerWithID:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)printStatus:(void *)arg1 containerID:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: NSFileHandle *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, NSError *, void*
- (void)purgeAmount:(void *)arg1 withUrgency:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: long long, int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)readerThrottleBackoffForDocumentAtPath:(void *)arg1 containerID:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, double, NSError *, void*
- (void)reclaimAmount:(void *)arg1 withUrgency:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: long long, int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)registerInitialSyncBarrierForID:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)removeItemFromDisk:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)resetBudgets:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)resolveBookmarkDataToURL:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 11: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, NSData *, NSURL *, NSData *, NSError *, void*
- (void)resolveConflictWithName:(void *)arg1 atURL:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setMigrationStatus:(void *)arg1 forDSID:(void *)arg2 shouldUpdateAccount:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 9: BOOL, NSString *, BOOL, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setStorageOpimizationEnabled:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: BOOL, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setiCloudDriveAppDefaultVisibility:(void *)arg1 forDSID:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: NSNumber *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setiWorkPublishingInfoAtURL:(void *)arg1 publish:(void *)arg2 readonly:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 9: NSURL *, BOOL, BOOL, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setupInstanceWithDict:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, NSError *, void*
- (void)simulateHealthIssueWithContainer:(void *)arg1 status:(void *)arg2 brokenStructure:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 9: NSString *, NSString *, BOOL, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)startDownloadItemsAtURLs:(void *)arg1 options:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: NSArray *, unsigned int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)startOperation:(void *)arg1 toCopyAvailableQuotaWithReply:(void *)arg2; // needs 2 arg types, found 8: NSObject<BROperationClient> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, NSError *, void*
- (void)startOperation:(void *)arg1 toCopyEtagAtURL:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: NSObject<BROperationClient> *, NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)startOperation:(void *)arg1 toCopyParticipantTokenAtURL:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: NSObject<BROperationClient> *, NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)startOperation:(void *)arg1 toCopyShareURLForShare:(void *)arg2 appName:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 11: NSObject<BROperationClient> *, CKShare *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CKShare *, NSURL *, NSError *, void*
- (void)startOperation:(void *)arg1 toCopySharingAccessToken:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 10: NSObject<BROperationClient> *, NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSString *, NSError *, void*
- (void)startOperation:(void *)arg1 toCopySharingInfoAtURL:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: NSObject<BROperationClient> *, NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CKShare *, NSError *, void*
- (void)startOperation:(void *)arg1 toCopySharingWebAuthTokenForContainerID:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: NSObject<BROperationClient> *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)startOperation:(void *)arg1 toCopyShortTokenAtURL:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: NSObject<BROperationClient> *, NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)startOperation:(void *)arg1 toEvictItemAtURL:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: NSObject<BROperationClient> *, NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)startOperation:(void *)arg1 toLookupShareParticipants:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: NSObject<BROperationClient> *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)startOperation:(void *)arg1 toModifyRecordAccessAtURL:(void *)arg2 allowAccess:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 11: NSObject<BROperationClient> *, NSURL *, BOOL, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSString *, NSError *, void*
- (void)startOperation:(void *)arg1 toPrepFolderForSharingAt:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: NSObject<BROperationClient> *, NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)startOperation:(void *)arg1 toSaveSharingInfo:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: NSObject<BROperationClient> *, CKShare *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CKShare *, NSError *, void*
- (void)startOperation:(void *)arg1 toUnshareShare:(void *)arg2 forceDelete:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 9: NSObject<BROperationClient> *, CKShare *, BOOL, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)startOperation:(void *)arg1 toUploadAllFilesInContainer:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: NSObject<BROperationClient> *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)thumbnailChangedForItemAtURL:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)trashItemAtURL:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, NSError *, void*
- (oneway void)updateContainerMetadataForID:(NSString *)arg1;
- (oneway void)updatePrivilegesDescriptor;
- (void)waitForFileSystemChangeProcessingWithReply:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)waitUntilIdle:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
