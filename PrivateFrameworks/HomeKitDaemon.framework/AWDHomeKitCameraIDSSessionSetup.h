/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface AWDHomeKitCameraIDSSessionSetup : PBCodable <NSCopying> {
    struct { 
        unsigned int idsSessionInvitationReceived : 1; 
        unsigned int idsSessionInvitationSent : 1; 
        unsigned int idsSessionStartedOnReceiver : 1; 
        unsigned int idsSessionStartedOnResident : 1; 
    }  _has;
    unsigned long long  _idsSessionInvitationReceived;
    unsigned long long  _idsSessionInvitationSent;
    unsigned long long  _idsSessionStartedOnReceiver;
    unsigned long long  _idsSessionStartedOnResident;
}

@property (nonatomic) BOOL hasIdsSessionInvitationReceived;
@property (nonatomic) BOOL hasIdsSessionInvitationSent;
@property (nonatomic) BOOL hasIdsSessionStartedOnReceiver;
@property (nonatomic) BOOL hasIdsSessionStartedOnResident;
@property (nonatomic) unsigned long long idsSessionInvitationReceived;
@property (nonatomic) unsigned long long idsSessionInvitationSent;
@property (nonatomic) unsigned long long idsSessionStartedOnReceiver;
@property (nonatomic) unsigned long long idsSessionStartedOnResident;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasIdsSessionInvitationReceived;
- (BOOL)hasIdsSessionInvitationSent;
- (BOOL)hasIdsSessionStartedOnReceiver;
- (BOOL)hasIdsSessionStartedOnResident;
- (unsigned int)hash;
- (unsigned long long)idsSessionInvitationReceived;
- (unsigned long long)idsSessionInvitationSent;
- (unsigned long long)idsSessionStartedOnReceiver;
- (unsigned long long)idsSessionStartedOnResident;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setHasIdsSessionInvitationReceived:(BOOL)arg1;
- (void)setHasIdsSessionInvitationSent:(BOOL)arg1;
- (void)setHasIdsSessionStartedOnReceiver:(BOOL)arg1;
- (void)setHasIdsSessionStartedOnResident:(BOOL)arg1;
- (void)setIdsSessionInvitationReceived:(unsigned long long)arg1;
- (void)setIdsSessionInvitationSent:(unsigned long long)arg1;
- (void)setIdsSessionStartedOnReceiver:(unsigned long long)arg1;
- (void)setIdsSessionStartedOnResident:(unsigned long long)arg1;
- (void)writeTo:(id)arg1;

@end
