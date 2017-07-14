/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTRemoteGizmoClient : BLTRemoteObject <BLTBulletinSendQueueDelegate, BLTGizmoClient> {
    BLTBulletinSendQueuePassthrough * _bulletinSendQueue;
    BOOL  _pairedDeviceReady;
    BLTSendDebugMetricsRatioOnInterval * _sendFailureDebugMetric;
    <BLTCompanionServer> * _server;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (getter=isPairedDeviceReady) BOOL pairedDeviceReady;
@property (nonatomic, retain) BLTSendDebugMetricsRatioOnInterval *sendFailureDebugMetric;
@property (nonatomic) <BLTCompanionServer> *server;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleSyncStateChanged:(id)arg1;
- (void)_pingPairedDevice;
- (void)addBulletin:(id)arg1 playLightsAndSirens:(BOOL)arg2;
- (void)addBulletin:(id)arg1 playLightsAndSirens:(BOOL)arg2 updateType:(unsigned int)arg3 transmissionDate:(id)arg4 receptionDate:(id)arg5;
- (void)addBulletin:(id)arg1 playLightsAndSirens:(BOOL)arg2 updateType:(unsigned int)arg3 withTimeout:(id)arg4 completion:(id /* block */)arg5;
- (void)addBulletinSummary:(id)arg1;
- (void)cancelBulletinWithPublisherMatchID:(id)arg1 universalSectionID:(id)arg2 feed:(unsigned int)arg3 transmissionDate:(id)arg4 receptionDate:(id)arg5;
- (void)cancelBulletinWithPublisherMatchID:(id)arg1 universalSectionID:(id)arg2 feed:(unsigned int)arg3 withTimeout:(id)arg4;
- (void)dealloc;
- (void)handleAcknowledgeActionRequest:(id)arg1;
- (void)handleDidPlayLightsAndSirensReply:(id)arg1;
- (void)handleDismissActionRequest:(id)arg1;
- (void)handleFileURL:(id)arg1 extraMetadata:(id)arg2;
- (void)handleHandlePairedDeviceReady:(id)arg1;
- (void)handleRemoveBulletinRequest:(id)arg1;
- (void)handleShouldSuppressLightsAndSirensNowRequest:(id)arg1;
- (void)handleSnoozeActionRequest:(id)arg1;
- (void)handleSupplementaryActionRequest:(id)arg1;
- (void)handleWillSendLightsAndSirensRequest:(id)arg1;
- (id)init;
- (BOOL)isPairedDeviceReady;
- (void)queuePendingRequests;
- (void)registerProtobufHandlers;
- (void)removeBulletinWithPublisherBulletinID:(id)arg1 recordID:(id)arg2 sectionID:(id)arg3;
- (void)removeBulletinWithPublisherBulletinID:(id)arg1 recordID:(id)arg2 sectionID:(id)arg3 withTimeout:(id)arg4;
- (id)sendFailureDebugMetric;
- (id)server;
- (void)setLastKnownConnectionStatus:(unsigned int)arg1;
- (void)setPairedDeviceReady:(BOOL)arg1;
- (void)setSendFailureDebugMetric:(id)arg1;
- (void)setServer:(id)arg1;
- (void)updateBulletinList:(id)arg1;

@end
