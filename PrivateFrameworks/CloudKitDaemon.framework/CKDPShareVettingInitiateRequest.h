/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPShareVettingInitiateRequest : PBRequest <NSCopying> {
    NSString * _baseToken;
    NSData * _encryptedKey;
    NSString * _participantId;
    CKDPShareIdentifier * _shareId;
}

@property (nonatomic, retain) NSString *baseToken;
@property (nonatomic, retain) NSData *encryptedKey;
@property (nonatomic, readonly) BOOL hasBaseToken;
@property (nonatomic, readonly) BOOL hasEncryptedKey;
@property (nonatomic, readonly) BOOL hasParticipantId;
@property (nonatomic, readonly) BOOL hasShareId;
@property (nonatomic, retain) NSString *participantId;
@property (nonatomic, retain) CKDPShareIdentifier *shareId;

+ (id)options;

- (void).cxx_destruct;
- (id)baseToken;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)encryptedKey;
- (BOOL)hasBaseToken;
- (BOOL)hasEncryptedKey;
- (BOOL)hasParticipantId;
- (BOOL)hasShareId;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)participantId;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setBaseToken:(id)arg1;
- (void)setEncryptedKey:(id)arg1;
- (void)setParticipantId:(id)arg1;
- (void)setShareId:(id)arg1;
- (id)shareId;
- (void)writeTo:(id)arg1;

@end
