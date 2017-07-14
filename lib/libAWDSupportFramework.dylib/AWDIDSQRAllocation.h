/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDIDSQRAllocation : PBCodable <NSCopying> {
    unsigned long long  _duration;
    struct { 
        unsigned int duration : 1; 
        unsigned int timestamp : 1; 
        unsigned int hasRecipientAccepted : 1; 
        unsigned int payloadSize : 1; 
        unsigned int result : 1; 
    }  _has;
    unsigned int  _hasRecipientAccepted;
    unsigned int  _payloadSize;
    unsigned int  _result;
    NSString * _service;
    unsigned long long  _timestamp;
    NSString * _topic;
}

@property (nonatomic) unsigned long long duration;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) BOOL hasHasRecipientAccepted;
@property (nonatomic) BOOL hasPayloadSize;
@property (nonatomic) unsigned int hasRecipientAccepted;
@property (nonatomic) BOOL hasResult;
@property (nonatomic, readonly) BOOL hasService;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic, readonly) BOOL hasTopic;
@property (nonatomic) unsigned int payloadSize;
@property (nonatomic) unsigned int result;
@property (nonatomic, retain) NSString *service;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, retain) NSString *topic;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)duration;
- (BOOL)hasDuration;
- (BOOL)hasHasRecipientAccepted;
- (BOOL)hasPayloadSize;
- (unsigned int)hasRecipientAccepted;
- (BOOL)hasResult;
- (BOOL)hasService;
- (BOOL)hasTimestamp;
- (BOOL)hasTopic;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)payloadSize;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)result;
- (id)service;
- (void)setDuration:(unsigned long long)arg1;
- (void)setHasDuration:(BOOL)arg1;
- (void)setHasHasRecipientAccepted:(BOOL)arg1;
- (void)setHasPayloadSize:(BOOL)arg1;
- (void)setHasRecipientAccepted:(unsigned int)arg1;
- (void)setHasResult:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setPayloadSize:(unsigned int)arg1;
- (void)setResult:(unsigned int)arg1;
- (void)setService:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTopic:(id)arg1;
- (unsigned long long)timestamp;
- (id)topic;
- (void)writeTo:(id)arg1;

@end
