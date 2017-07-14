/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDRecordFetchAggregator : CKDDatabaseOperation {
    NSDictionary * _assetTransferOptionsByRecordTypeAndKey;
    unsigned int  _curFetchOrder;
    CKDFetchRecordsOperation * _currentFetchOp;
    NSSet * _desiredKeys;
    id /* block */  _fetchAggregatorCompletionBlock;
    BOOL  _fetchAssetContents;
    NSObject<OS_dispatch_group> * _fetchGroup;
    NSMutableDictionary * _fetchInfosByOrder;
    NSObject<OS_dispatch_queue> * _fetchQueue;
    NSObject<OS_dispatch_source> * _fetchSource;
    unsigned int  _highestReturnedOrder;
    BOOL  _markedToFinishByParent;
    BOOL  _preserveOrdering;
    CKDRecordCache * _recordCache;
    NSObject<OS_dispatch_source> * _recordReadySource;
    BOOL  _started;
}

@property (nonatomic, retain) NSDictionary *assetTransferOptionsByRecordTypeAndKey;
@property unsigned int curFetchOrder;
@property (nonatomic) CKDFetchRecordsOperation *currentFetchOp;
@property (nonatomic, retain) NSSet *desiredKeys;
@property (nonatomic, copy) id /* block */ fetchAggregatorCompletionBlock;
@property (nonatomic) BOOL fetchAssetContents;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *fetchGroup;
@property (nonatomic, retain) NSMutableDictionary *fetchInfosByOrder;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *fetchQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *fetchSource;
@property unsigned int highestReturnedOrder;
@property (getter=isMarkedToFinishByParent) BOOL markedToFinishByParent;
@property (nonatomic) BOOL preserveOrdering;
@property (nonatomic, readonly) CKDRecordCache *recordCache;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *recordReadySource;
@property BOOL started;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (void)_addRecordFetchInfo:(id)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_finishRecordFetchAggregator;
- (void)_flushFetchedRecordsToConsumerLocked;
- (void)_flushFetchedRecordsToConsumerNoOrderingLocked;
- (void)_flushFetchedRecordsToConsumerOrderedLocked;
- (void)_lockedSendFetchRequest;
- (void)_performCallbackForFetchInfoLocked:(id)arg1;
- (void)_recordFetchesAvailable;
- (id)assetTransferOptionsByRecordTypeAndKey;
- (unsigned int)curFetchOrder;
- (id)currentFetchOp;
- (void)dealloc;
- (id)description;
- (id)desiredKeys;
- (id /* block */)fetchAggregatorCompletionBlock;
- (BOOL)fetchAssetContents;
- (id)fetchGroup;
- (id)fetchInfosByOrder;
- (id)fetchQueue;
- (void)fetchRecordFromResponse:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)fetchSource;
- (void)finishIfAppropriate;
- (unsigned int)highestReturnedOrder;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (BOOL)isMarkedToFinishByParent;
- (void)main;
- (BOOL)preserveOrdering;
- (id)recordCache;
- (id)recordReadySource;
- (void)setAssetTransferOptionsByRecordTypeAndKey:(id)arg1;
- (void)setCurFetchOrder:(unsigned int)arg1;
- (void)setCurrentFetchOp:(id)arg1;
- (void)setDesiredKeys:(id)arg1;
- (void)setFetchAggregatorCompletionBlock:(id /* block */)arg1;
- (void)setFetchAssetContents:(BOOL)arg1;
- (void)setFetchGroup:(id)arg1;
- (void)setFetchInfosByOrder:(id)arg1;
- (void)setFetchQueue:(id)arg1;
- (void)setFetchSource:(id)arg1;
- (void)setHighestReturnedOrder:(unsigned int)arg1;
- (void)setMarkedToFinishByParent:(BOOL)arg1;
- (void)setPreserveOrdering:(BOOL)arg1;
- (void)setRecordReadySource:(id)arg1;
- (void)setStarted:(BOOL)arg1;
- (BOOL)started;

@end
