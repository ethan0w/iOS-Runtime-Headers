/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDIDSLocalDeliveryAppLevelAck : PBCodable <NSCopying> {
    struct { 
        unsigned int isToDefaultPairedDevice : 1; 
        unsigned int linkType : 1; 
        unsigned int priority : 1; 
        unsigned int timestamp : 1; 
    }  _has;
    unsigned long long  _isToDefaultPairedDevice;
    unsigned long long  _linkType;
    unsigned long long  _priority;
    NSString * _service;
    unsigned long long  _timestamp;
}

@property (nonatomic) BOOL hasIsToDefaultPairedDevice;
@property (nonatomic) BOOL hasLinkType;
@property (nonatomic) BOOL hasPriority;
@property (nonatomic, readonly) BOOL hasService;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long isToDefaultPairedDevice;
@property (nonatomic) unsigned long long linkType;
@property (nonatomic) unsigned long long priority;
@property (nonatomic, retain) NSString *service;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasIsToDefaultPairedDevice;
- (BOOL)hasLinkType;
- (BOOL)hasPriority;
- (BOOL)hasService;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)isToDefaultPairedDevice;
- (unsigned long long)linkType;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)priority;
- (BOOL)readFrom:(id)arg1;
- (id)service;
- (void)setHasIsToDefaultPairedDevice:(BOOL)arg1;
- (void)setHasLinkType:(BOOL)arg1;
- (void)setHasPriority:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setIsToDefaultPairedDevice:(unsigned long long)arg1;
- (void)setLinkType:(unsigned long long)arg1;
- (void)setPriority:(unsigned long long)arg1;
- (void)setService:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
