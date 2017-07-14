/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

@interface NRConnectivitySubscriber : NSObject {
    BOOL  _connected;
    unsigned long long  _dropoutCounter;
}

@property (nonatomic) BOOL connected;
@property (nonatomic) unsigned long long dropoutCounter;

+ (BOOL)getDropoutCounter:(unsigned long long*)arg1;

- (void)_readConnectivityStatus;
- (BOOL)connected;
- (unsigned long long)dropoutCounter;
- (id)init;
- (void)setConnected:(BOOL)arg1;
- (void)setDropoutCounter:(unsigned long long)arg1;

@end
