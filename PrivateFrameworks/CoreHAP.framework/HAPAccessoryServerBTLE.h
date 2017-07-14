/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPAccessoryServerBTLE : HAPAccessoryServer {
    HAPAccessoryServerBrowserBTLE * _browser;
    unsigned char  _connectionIdleTime;
    unsigned int  _hapBLEProtocolVersion;
    BOOL  _notifyingCharacteristicUpdated;
    CBPeripheral * _peripheral;
    unsigned long long  _resumeSessionID;
    BOOL  _stateChanged;
    NSNumber * _stateNumber;
}

@property (nonatomic, readonly) HAPAccessoryServerBrowserBTLE *browser;
@property (nonatomic) unsigned char connectionIdleTime;
@property (nonatomic, readonly) unsigned int hapBLEProtocolVersion;
@property (nonatomic) BOOL notifyingCharacteristicUpdated;
@property (nonatomic, readonly) CBPeripheral *peripheral;
@property (nonatomic, readonly) unsigned long long resumeSessionID;
@property (nonatomic) BOOL stateChanged;
@property (nonatomic, retain) NSNumber *stateNumber;

+ (id)hapUUIDFromBTLEUUID:(id)arg1;

- (void).cxx_destruct;
- (id)browser;
- (unsigned char)connectionIdleTime;
- (void)handleConnectionWithPeripheral:(id)arg1 withError:(id)arg2;
- (void)handleDisconnectionWithError:(id)arg1 completionQueue:(id)arg2 completionHandler:(id /* block */)arg3;
- (unsigned int)hapBLEProtocolVersion;
- (id)initWithPeripheral:(id)arg1 name:(id)arg2 pairingUsername:(id)arg3 statusFlags:(id)arg4 stateNumber:(id)arg5 stateChanged:(BOOL)arg6 configNumber:(id)arg7 category:(id)arg8 connectionIdleTime:(unsigned char)arg9 browser:(id)arg10 keyStore:(id)arg11;
- (int)linkType;
- (void)notifyDelegateUdpatedStateNumber;
- (BOOL)notifyingCharacteristicUpdated;
- (id)peripheral;
- (unsigned long long)resumeSessionID;
- (void)setConnectionIdleTime:(unsigned char)arg1;
- (void)setNotifyingCharacteristicUpdated:(BOOL)arg1;
- (void)setStateChanged:(BOOL)arg1;
- (void)setStateNumber:(id)arg1;
- (BOOL)stateChanged;
- (id)stateNumber;
- (void)updateConnectionIdleTime:(unsigned char)arg1;
- (void)updatePeripheral:(id)arg1;
- (BOOL)updatePeripheralIdentifier:(id*)arg1;
- (BOOL)updateResumeSessionID:(unsigned long long)arg1;

@end
