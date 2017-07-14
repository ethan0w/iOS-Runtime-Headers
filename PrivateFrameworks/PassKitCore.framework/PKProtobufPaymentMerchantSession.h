/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKProtobufPaymentMerchantSession : PBCodable <NSCopying> {
    NSString * _displayName;
    NSString * _domain;
    unsigned long long  _epochTimestamp;
    struct { 
        unsigned int epochTimestamp : 1; 
    }  _has;
    NSString * _merchantIdentifier;
    NSString * _nonce;
    NSString * _retryNonce;
    NSString * _sessionIdentifier;
    NSData * _signature;
}

@property (nonatomic, retain) NSString *displayName;
@property (nonatomic, retain) NSString *domain;
@property (nonatomic) unsigned long long epochTimestamp;
@property (nonatomic, readonly) BOOL hasDisplayName;
@property (nonatomic, readonly) BOOL hasDomain;
@property (nonatomic) BOOL hasEpochTimestamp;
@property (nonatomic, readonly) BOOL hasMerchantIdentifier;
@property (nonatomic, readonly) BOOL hasNonce;
@property (nonatomic, readonly) BOOL hasRetryNonce;
@property (nonatomic, readonly) BOOL hasSessionIdentifier;
@property (nonatomic, readonly) BOOL hasSignature;
@property (nonatomic, retain) NSString *merchantIdentifier;
@property (nonatomic, retain) NSString *nonce;
@property (nonatomic, retain) NSString *retryNonce;
@property (nonatomic, retain) NSString *sessionIdentifier;
@property (nonatomic, retain) NSData *signature;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayName;
- (id)domain;
- (unsigned long long)epochTimestamp;
- (BOOL)hasDisplayName;
- (BOOL)hasDomain;
- (BOOL)hasEpochTimestamp;
- (BOOL)hasMerchantIdentifier;
- (BOOL)hasNonce;
- (BOOL)hasRetryNonce;
- (BOOL)hasSessionIdentifier;
- (BOOL)hasSignature;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)merchantIdentifier;
- (void)mergeFrom:(id)arg1;
- (id)nonce;
- (BOOL)readFrom:(id)arg1;
- (id)retryNonce;
- (id)sessionIdentifier;
- (void)setDisplayName:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setEpochTimestamp:(unsigned long long)arg1;
- (void)setHasEpochTimestamp:(BOOL)arg1;
- (void)setMerchantIdentifier:(id)arg1;
- (void)setNonce:(id)arg1;
- (void)setRetryNonce:(id)arg1;
- (void)setSessionIdentifier:(id)arg1;
- (void)setSignature:(id)arg1;
- (id)signature;
- (void)writeTo:(id)arg1;

@end
