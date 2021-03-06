/* Generated by RuntimeBrowser
   Image: /usr/lib/libnfshared.dylib
 */

@interface AWDNFCCardIngestionReaderStateChangeEvent : PBCodable <NSCopying> {
    unsigned int  _errorCode;
    struct { 
        unsigned int timeDeltaFromReference : 1; 
        unsigned int timestamp : 1; 
        unsigned int errorCode : 1; 
        unsigned int type : 1; 
    }  _has;
    unsigned long long  _timeDeltaFromReference;
    unsigned long long  _timestamp;
    unsigned int  _type;
    NSData * _uuidReference;
}

@property (nonatomic) unsigned int errorCode;
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) BOOL hasTimeDeltaFromReference;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasType;
@property (nonatomic, readonly) BOOL hasUuidReference;
@property (nonatomic) unsigned long long timeDeltaFromReference;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned int type;
@property (nonatomic, retain) NSData *uuidReference;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)errorCode;
- (BOOL)hasErrorCode;
- (BOOL)hasTimeDeltaFromReference;
- (BOOL)hasTimestamp;
- (BOOL)hasType;
- (BOOL)hasUuidReference;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setErrorCode:(unsigned int)arg1;
- (void)setHasErrorCode:(BOOL)arg1;
- (void)setHasTimeDeltaFromReference:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setHasType:(BOOL)arg1;
- (void)setTimeDeltaFromReference:(unsigned long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setType:(unsigned int)arg1;
- (void)setUuidReference:(id)arg1;
- (unsigned long long)timeDeltaFromReference;
- (unsigned long long)timestamp;
- (unsigned int)type;
- (id)uuidReference;
- (void)writeTo:(id)arg1;

@end
