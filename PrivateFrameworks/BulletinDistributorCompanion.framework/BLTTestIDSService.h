/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTTestIDSService : NSObject <BLTAbstractIDSService> {
    NSMutableDictionary * _actionsByRequestType;
    NSMutableDictionary * _actionsByResponseType;
    unsigned int  _currentIdentifier;
    NSMutableArray * _delegates;
    unsigned int  _maximumResponseDelay;
    unsigned int  _maximumSendDelay;
    unsigned int  _minimumResponseDelay;
    unsigned int  _minimumSendDelay;
    BLTPBProtobufSequenceNumberManager * _sequenceNumberManager;
    NSString * _service;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <BLTAbstractIDSDevice> *defaultPairedDevice;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) unsigned int maximumResponseDelay;
@property (nonatomic) unsigned int maximumSendDelay;
@property (nonatomic) unsigned int minimumResponseDelay;
@property (nonatomic) unsigned int minimumSendDelay;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_callDelegateActionForProtobuf:(id)arg1 delegate:(id)arg2 identifier:(id)arg3 type:(unsigned short)arg4 isResponse:(BOOL)arg5;
- (void)_handleProtobuf:(id)arg1 identifier:(id)arg2 sendDelay:(unsigned int)arg3;
- (id)_lightsAndSirensRequestForProtobuf:(id)arg1;
- (unsigned long long)_nextSequenceNumber;
- (unsigned int)_randomResponseDelay;
- (unsigned int)_randomSendDelay;
- (unsigned int)_randomValueBetweenMin:(unsigned int)arg1 max:(unsigned int)arg2;
- (void)_sendBlockToAllDelegatesAfterTime:(unsigned long long)arg1 block:(id /* block */)arg2;
- (void)_sendLightsAndSirensRequestForProtobuf:(id)arg1 identifier:(id)arg2 sendDelay:(unsigned int)arg3;
- (void)_sendSetSectionInfoResponseWithIdentifier:(id)arg1 sendDelay:(unsigned int)arg2;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (id)defaultPairedDevice;
- (id)initWithService:(id)arg1;
- (unsigned int)maximumResponseDelay;
- (unsigned int)maximumSendDelay;
- (unsigned int)minimumResponseDelay;
- (unsigned int)minimumSendDelay;
- (void)removeDelegate:(id)arg1;
- (BOOL)sendProtobuf:(id)arg1 toDestinations:(id)arg2 priority:(int)arg3 options:(id)arg4 identifier:(id*)arg5 error:(id*)arg6;
- (BOOL)sendResourceAtURL:(id)arg1 metadata:(id)arg2 toDestinations:(id)arg3 priority:(int)arg4 options:(id)arg5 identifier:(id*)arg6 error:(id*)arg7;
- (void)setMaximumResponseDelay:(unsigned int)arg1;
- (void)setMaximumSendDelay:(unsigned int)arg1;
- (void)setMinimumResponseDelay:(unsigned int)arg1;
- (void)setMinimumSendDelay:(unsigned int)arg1;
- (void)setProtobufAction:(SEL)arg1 forIncomingRequestsOfType:(unsigned short)arg2;
- (void)setProtobufAction:(SEL)arg1 forIncomingResponsesOfType:(unsigned short)arg2;

@end
