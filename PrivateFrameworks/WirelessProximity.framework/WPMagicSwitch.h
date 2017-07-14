/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
 */

@interface WPMagicSwitch : WPClient {
    <WPMagicSwitchDelegate> * _delegate;
}

@property (nonatomic) <WPMagicSwitchDelegate> *delegate;

- (void).cxx_destruct;
- (void)advertisingFailedToStart:(id)arg1 ofType:(unsigned char)arg2;
- (void)advertisingPendingOfType:(unsigned char)arg1;
- (void)advertisingStartedOfType:(unsigned char)arg1;
- (void)advertisingStoppedOfType:(unsigned char)arg1;
- (id)clientAsString;
- (id)delegate;
- (void)deviceDiscovered:(id)arg1;
- (struct { int x1; int x2; int x3; })dutyCycleToScanningRates:(int)arg1;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (void)invalidate;
- (void)scanningFailedToStart:(id)arg1 ofType:(unsigned char)arg2;
- (void)scanningStartedOfType:(unsigned char)arg1;
- (void)scanningStoppedOfType:(unsigned char)arg1;
- (void)setDelegate:(id)arg1;
- (void)startAdvertisingWithData:(id)arg1;
- (void)startScanningWithData:(id)arg1;
- (void)stateDidChange:(int)arg1;
- (void)stopAdvertising;
- (void)stopScanning;

@end
