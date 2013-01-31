/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSOperationQueue, NSObject<OS_dispatch_source>, NSObject<OS_dispatch_queue>, NSRecursiveLock, NSLock, PFUbiquityLocation, NSString, NSMutableSet, NSMutableDictionary, NSSet;

@interface _PFUbiquityRecordsImporter : NSObject <_PFUbiquityRecordImportOperationDelegate, NSManagedObjectContextFaultingDelegate, PFUbiquityImportScanOperationDelegate, PFUbiquityBaselineRollOperationDelegate, PFUbiquityBaselineRecoveryOperationDelegate, PFUbiquityBaselineRollResponseOperationDelegate> {
    NSOperationQueue *_importQueue;
    NSObject<OS_dispatch_queue> *_privateQueue;
    BOOL _isMonitoring;
    NSString *_localPeerID;
    PFUbiquityLocation *_ubiquityRootLocation;
    NSMutableSet *_pendingTransactionLogLocations;
    NSMutableSet *_failedPendingTransactionLogs;
    NSObject<OS_dispatch_source> *_logRestartTimer;
    BOOL _hasScheduledPendingLogsBlock;
    BOOL _hasScheduledFailedLogsBlock;
    NSRecursiveLock *_schedulingLock;
    NSLock *_pendingLocationsLock;
    BOOL _importOnlyActiveStores;
    BOOL _throttleNotifications;
    unsigned int _numPendingNotifications;
    NSMutableDictionary *_pendingNotificationUserInfo;
    BOOL _allowBaselineRoll;
    unsigned int _pendingImportOperationsCount;
}

@property(readonly) NSOperationQueue * importQueue;
@property(readonly) NSString * localPeerID;
@property(readonly) PFUbiquityLocation * ubiquityRootLocation;
@property(readonly) BOOL isMonitoring;
@property(readonly) NSSet * pendingTransactionLogLocations;
@property(readonly) NSSet * failedPendingTransactionLogLocations;
@property NSObject<OS_dispatch_source> * logRestartTimer;
@property(readonly) NSRecursiveLock * schedulingLock;
@property BOOL importOnlyActiveStores;
@property BOOL throttleNotifications;
@property BOOL allowBaselineRoll;

+ (void)initialize;
+ (void)afterDelay:(double)arg1 executeBlockOnRootQueue:(id)arg2;
+ (BOOL)canProcessContentsOfUbiquityRootPath:(id)arg1;
+ (void)executeBlockOnRootQueue:(id)arg1;

- (id)description;
- (void)dealloc;
- (id)init;
- (id)failedPendingTransactionLogLocations;
- (id)pendingTransactionLogLocations;
- (void)setImportOnlyActiveStores:(BOOL)arg1;
- (void)setThrottleNotifications:(BOOL)arg1;
- (BOOL)throttleNotifications;
- (void)scheduleBaselineRollResponseOperationForBaselineAtLocation:(id)arg1;
- (int)compareScoreKnowledgeVector:(id)arg1 withScoreDictionary:(id)arg2;
- (void)filePresenter:(id)arg1 wasNotifiedOfTransactionLogLocation:(id)arg2;
- (void)cancelAllOperationsForStoreName:(id)arg1;
- (BOOL)startMonitor:(id*)arg1;
- (void)awakeFromLaunch:(BOOL)arg1;
- (void)rollResponseOperation:(id)arg1 encounteredAnError:(id)arg2 whileTryingToAdoptBaseline:(id)arg3;
- (void)rollResponseOperation:(id)arg1 successfullyAdoptedBaseline:(id)arg2;
- (void)recoveryOperation:(id)arg1 encounteredAnError:(id)arg2 duringRecoveryOfBaseline:(id)arg3;
- (void)recoveryOperation:(id)arg1 didReplaceLocalStoreFileWithBaseline:(id)arg2;
- (void)baselineRollOperationWasUnableToLockPersistentStore:(id)arg1;
- (void)baselineRollOperationEncounteredAnInconsistentBaselineState:(id)arg1;
- (void)scanOperation:(id)arg1 failedWithError:(id)arg2;
- (void)scheduleBaselineRecoveryOperationWithActiveBaselineOperation:(id)arg1;
- (BOOL)allowBaselineRoll;
- (BOOL)scheduleTransactionLogOperations:(id)arg1 synchronous:(BOOL)arg2 error:(id*)arg3;
- (BOOL)checkSchedulingContextForMissingLocalPeerOperations:(id)arg1 error:(id*)arg2;
- (id)createSortedOperationsArrayForLogLocationsInContext:(id)arg1 isFirstImport:(BOOL)arg2;
- (id)createDictionaryOfStoreNameToLocations:(id)arg1;
- (id)schedulingLock;
- (void)setLogRestartTimer:(id)arg1;
- (id)logRestartTimer;
- (void)scheduleRecoveryTimer;
- (void)postImportNotificationForStoreName:(id)arg1 andLocalPeerID:(id)arg2 withUserInfo:(id)arg3;
- (BOOL)shouldThrottleNotificationsWithOperation:(id)arg1;
- (void)checkStoresAndContainer;
- (BOOL)scanOperationFinished:(id)arg1 withDiscoveredLogLocation:(id)arg2 error:(id*)arg3;
- (void)recoverFailedLogs;
- (void)executeBlockOnPrivateQueue:(id)arg1;
- (void)schedulePendingLogs;
- (void)setAllowBaselineRoll:(BOOL)arg1;
- (void)ubiquityIdentityChanged:(id)arg1;
- (void)_applicationResumed:(id)arg1;
- (BOOL)isMonitoring;
- (BOOL)canProcessTransactionLogWithScore:(id)arg1 afterLogWithScore:(id)arg2;
- (BOOL)importOnlyActiveStores;
- (BOOL)scheduleUbiquityRootScan:(BOOL)arg1 withLocalPeerLogs:(BOOL)arg2 error:(id*)arg3;
- (void)stopMonitor;
- (id)importQueue;
- (id)initWithLocalPeerID:(id)arg1 andUbiquityRootLocation:(id)arg2;
- (void)metadataInconsistencyDetectedForStore:(id)arg1;
- (void)operationWasInterruptedDuringImport:(id)arg1;
- (void)requestBaselineRollForStore:(id)arg1;
- (void)operationDidFinish:(id)arg1;
- (id)ubiquityRootLocation;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (id)localPeerID;
- (int)context:(id)arg1 shouldHandleInaccessibleFault:(id)arg2 forObjectID:(id)arg3 andTrigger:(id)arg4;

@end
