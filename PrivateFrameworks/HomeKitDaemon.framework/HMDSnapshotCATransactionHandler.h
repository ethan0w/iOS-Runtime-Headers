/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDSnapshotCATransactionHandler : NSObject <HMFLogging> {
    NSObject<OS_dispatch_queue> * _clientQueue;
    CAContext * _snapshotContext;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) CAContext *snapshotContext;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (id)sharedHandler;

- (void).cxx_destruct;
- (id)_createSlot:(id)arg1 snapshotCATransaction:(id)arg2;
- (void)_deleteSlot:(id)arg1 filePath:(id)arg2 snapshotCATransaction:(id)arg3;
- (id)clientQueue;
- (id)createSlot:(id)arg1;
- (struct CGImage { }*)createSnapshotCGImageRef:(id)arg1;
- (void)deleteSlot:(id)arg1 filePath:(id)arg2;
- (id)init;
- (void)setSnapshotContext:(id)arg1;
- (id)snapshotContext;

@end
