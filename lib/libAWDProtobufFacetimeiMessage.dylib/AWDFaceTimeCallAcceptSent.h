/* Generated by RuntimeBrowser.
   Image: /usr/lib/libAWDProtobufFacetimeiMessage.dylib
 */

@class NSString;

@interface AWDFaceTimeCallAcceptSent : PBCodable  {
    unsigned long long _timestamp;
    int _errorCode;
    NSString *_guid;
    unsigned int _sendDuration;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int errorCode : 1; 
        unsigned int sendDuration : 1; 
    } _has;
}

@property(readonly) BOOL hasGuid;
@property(retain) NSString * guid;
@property BOOL hasTimestamp;
@property unsigned long long timestamp;
@property BOOL hasErrorCode;
@property int errorCode;
@property BOOL hasSendDuration;
@property unsigned int sendDuration;


- (void)setHasSendDuration:(BOOL)arg1;
- (void)setSendDuration:(unsigned int)arg1;
- (unsigned int)sendDuration;
- (BOOL)hasSendDuration;
- (BOOL)hasGuid;
- (void)setGuid:(id)arg1;
- (id)guid;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (unsigned long long)timestamp;
- (void)setTimestamp:(unsigned long long)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (BOOL)readFrom:(id)arg1;
- (void)setHasErrorCode:(BOOL)arg1;
- (void)setErrorCode:(int)arg1;
- (int)errorCode;
- (BOOL)hasErrorCode;
- (void)setHasTimestamp:(BOOL)arg1;
- (BOOL)hasTimestamp;
- (id)dictionaryRepresentation;

@end
