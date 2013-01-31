/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@class NSNumber, NSData, NSString;

@interface FTRelayInitateMessage : FTFaceTimeMessage <NSCopying> {
    NSData *_selfPushToken;
    NSNumber *_selfNatType;
    NSNumber *_selfNATIP;
    NSString *_peerID;
    NSData *_peerPushToken;
    NSNumber *_peerNatType;
    NSNumber *_peerNATIP;
    NSNumber *_relayType;
    NSData *_relayConnectionId;
    NSData *_relayTransactionIdAlloc;
    NSData *_relayTokenAllocReq;
    NSData *_selfRelayIP;
    NSNumber *_selfRelayPort;
    NSData *_peerRelayIP;
    NSNumber *_peerRelayPort;
}

@property(copy) NSData * selfPushToken;
@property(copy) NSNumber * selfNatType;
@property(copy) NSNumber * selfNATIP;
@property(copy) NSString * peerID;
@property(copy) NSData * peerPushToken;
@property(copy) NSNumber * peerNatType;
@property(copy) NSNumber * peerNATIP;
@property(copy) NSNumber * relayType;
@property(copy) NSData * relayConnectionId;
@property(copy) NSData * relayTransactionIdAlloc;
@property(copy) NSData * relayTokenAllocReq;
@property(copy) NSData * selfRelayIP;
@property(copy) NSNumber * selfRelayPort;
@property(copy) NSData * peerRelayIP;
@property(copy) NSNumber * peerRelayPort;


- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)messageBody;
- (void)setPeerNatType:(id)arg1;
- (void)setSelfNatType:(id)arg1;
- (id)peerNatType;
- (id)selfNatType;
- (id)peerRelayPort;
- (id)peerRelayIP;
- (id)selfRelayPort;
- (id)selfRelayIP;
- (id)relayTokenAllocReq;
- (id)relayTransactionIdAlloc;
- (id)relayConnectionId;
- (id)relayType;
- (void)setSelfNATIP:(id)arg1;
- (void)setPeerRelayPort:(id)arg1;
- (void)setPeerRelayIP:(id)arg1;
- (void)setSelfRelayPort:(id)arg1;
- (void)setSelfRelayIP:(id)arg1;
- (void)setRelayTokenAllocReq:(id)arg1;
- (void)setRelayTransactionIdAlloc:(id)arg1;
- (void)setRelayConnectionId:(id)arg1;
- (void)setRelayType:(id)arg1;
- (id)selfNATIP;
- (void)setSelfPushToken:(id)arg1;
- (id)selfPushToken;
- (void)handleResponseDictionary:(id)arg1;
- (id)requiredKeys;
- (id)bagKey;
- (id)peerPushToken;
- (id)peerNATIP;
- (void)setPeerNATIP:(id)arg1;
- (void)setPeerPushToken:(id)arg1;
- (void)setPeerID:(id)arg1;
- (id)peerID;

@end
