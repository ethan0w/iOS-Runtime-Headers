/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTSectionInfoSyncAlertingSectionState : NSObject {
    id /* block */  _clientCompletion;
    NSObject<OS_dispatch_queue> * _clientQueue;
    unsigned int  _state;
}

@property (nonatomic, copy) id /* block */ clientCompletion;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic) unsigned int state;

- (void).cxx_destruct;
- (id /* block */)clientCompletion;
- (id)clientQueue;
- (void)setClientCompletion:(id /* block */)arg1;
- (void)setClientQueue:(id)arg1;
- (void)setState:(unsigned int)arg1;
- (unsigned int)state;

@end
