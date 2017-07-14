/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUFilteredMomentsDataSource : NSObject <PLDiagnosticsProvider> {
    NSSet * _assetUUIDs;
    NSOrderedSet * _containers;
    <PUFilteredMomentsDataSourceDelegate> * _delegate;
    BOOL  _finished;
    BOOL  _hasPendingChanges;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned int  _taskId;
    NSSet * _uncommittedAssetUUIDs;
    NSMutableOrderedSet * _uncommittedContainers;
}

@property (nonatomic, readonly) NSSet *assetUUIDs;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PUFilteredMomentsDataSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isFinished, nonatomic, readonly) BOOL finished;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_inqClearPendingChanges;
- (BOOL)_inqIsCancelledWithTaskId:(unsigned int)arg1;
- (BOOL)_isCancelledWithTaskId:(unsigned int)arg1;
- (void)_updateAssetUUIDs:(id)arg1 localIdenifiers:(id)arg2 taskId:(unsigned int)arg3 completion:(id /* block */)arg4;
- (id)assetUUIDs;
- (id)delegate;
- (id)fetchResult;
- (id)init;
- (BOOL)isFinished;
- (void)mergePendingChanges;
- (void)setDelegate:(id)arg1;
- (void)updateAssetUUIDs:(id)arg1 completion:(id /* block */)arg2;
- (void)updateAssetUUIDs:(id)arg1 localIdenifiers:(id)arg2 completion:(id /* block */)arg3;

@end
